// Copyright 2013 Lovell Fuller and others.
// SPDX-License-Identifier: Apache-2.0

#include <numeric>
#include <vector>
#include <cmath>

#include <napi.h>
#include <vips/vips8>

#include "common.h"
#include "metadata.h"

static void* readPNGComment(VipsImage *image, const char *field, GValue *value, void *p);

class MetadataWorker : public Napi::AsyncWorker {
 public:
  MetadataWorker(Napi::Function callback, MetadataBaton *baton, Napi::Function debuglog) :
    Napi::AsyncWorker(callback), baton(baton), debuglog(Napi::Persistent(debuglog)) {}
  ~MetadataWorker() {}

  void Execute() {
    // Decrement queued task counter
    sharp::counterQueue--;

    vips::VImage image;
    sharp::ImageType imageType = sharp::ImageType::UNKNOWN;
    try {
      std::tie(image, imageType) = OpenInput(baton->input);
    } catch (vips::VError const &err) {
      (baton->err).append(err.what());
    }
    if (imageType != sharp::ImageType::UNKNOWN) {
      // Image type
      baton->format = sharp::ImageTypeId(imageType);
      // VipsImage attributes
      baton->width = image.width();
      baton->height = image.height();
      baton->space = vips_enum_nick(VIPS_TYPE_INTERPRETATION, image.interpretation());
      baton->channels = image.bands();
      baton->depth = vips_enum_nick(VIPS_TYPE_BAND_FORMAT, image.format());
      if (sharp::HasDensity(image)) {
        baton->density = sharp::GetDensity(image);
      }
      if (image.get_typeof("jpeg-chroma-subsample") == VIPS_TYPE_REF_STRING) {
        baton->chromaSubsampling = image.get_string("jpeg-chroma-subsample");
      }
      if (image.get_typeof("interlaced") == G_TYPE_INT) {
        baton->isProgressive = image.get_int("interlaced") == 1;
      }
      if (image.get_typeof(VIPS_META_PALETTE) == G_TYPE_INT) {
        baton->isPalette = image.get_int(VIPS_META_PALETTE);
      }
      if (image.get_typeof(VIPS_META_BITS_PER_SAMPLE) == G_TYPE_INT) {
        baton->bitsPerSample = image.get_int(VIPS_META_BITS_PER_SAMPLE);
      }
      if (image.get_typeof(VIPS_META_N_PAGES) == G_TYPE_INT) {
        baton->pages = image.get_int(VIPS_META_N_PAGES);
      }
      if (image.get_typeof(VIPS_META_PAGE_HEIGHT) == G_TYPE_INT) {
        baton->pageHeight = image.get_int(VIPS_META_PAGE_HEIGHT);
      }
      if (image.get_typeof("loop") == G_TYPE_INT) {
        baton->loop = image.get_int("loop");
      }
      if (image.get_typeof("delay") == VIPS_TYPE_ARRAY_INT) {
        baton->delay = image.get_array_int("delay");
      }
      if (image.get_typeof("heif-primary") == G_TYPE_INT) {
        baton->pagePrimary = image.get_int("heif-primary");
      }
      if (image.get_typeof("heif-compression") == VIPS_TYPE_REF_STRING) {
        baton->compression = image.get_string("heif-compression");
      }
      if (image.get_typeof(VIPS_META_RESOLUTION_UNIT) == VIPS_TYPE_REF_STRING) {
        baton->resolutionUnit = image.get_string(VIPS_META_RESOLUTION_UNIT);
      }
      if (image.get_typeof("magick-format") == VIPS_TYPE_REF_STRING) {
        baton->formatMagick = image.get_string("magick-format");
      }
      if (image.get_typeof("openslide.level-count") == VIPS_TYPE_REF_STRING) {
        int const levels = std::stoi(image.get_string("openslide.level-count"));
        for (int l = 0; l < levels; l++) {
          std::string prefix = "openslide.level[" + std::to_string(l) + "].";
          int const width = std::stoi(image.get_string((prefix + "width").data()));
          int const height = std::stoi(image.get_string((prefix + "height").data()));
          baton->levels.push_back(std::pair<int, int>(width, height));
        }
      }
      if (image.get_typeof(VIPS_META_N_SUBIFDS) == G_TYPE_INT) {
        baton->subifds = image.get_int(VIPS_META_N_SUBIFDS);
      }
      baton->hasProfile = sharp::HasProfile(image);
      if (image.get_typeof("background") == VIPS_TYPE_ARRAY_DOUBLE) {
        baton->background = image.get_array_double("background");
      }
      // Derived attributes
      baton->hasAlpha = image.has_alpha();
      baton->orientation = sharp::ExifOrientation(image);
      // EXIF
      if (image.get_typeof(VIPS_META_EXIF_NAME) == VIPS_TYPE_BLOB) {
        size_t exifLength;
        void const *exif = image.get_blob(VIPS_META_EXIF_NAME, &exifLength);
        baton->exif = static_cast<char*>(g_malloc(exifLength));
        memcpy(baton->exif, exif, exifLength);
        baton->exifLength = exifLength;
      }
      // ICC profile
      if (image.get_typeof(VIPS_META_ICC_NAME) == VIPS_TYPE_BLOB) {
        size_t iccLength;
        void const *icc = image.get_blob(VIPS_META_ICC_NAME, &iccLength);
        baton->icc = static_cast<char*>(g_malloc(iccLength));
        memcpy(baton->icc, icc, iccLength);
        baton->iccLength = iccLength;
      }
      // IPTC
      if (image.get_typeof(VIPS_META_IPTC_NAME) == VIPS_TYPE_BLOB) {
        size_t iptcLength;
        void const *iptc = image.get_blob(VIPS_META_IPTC_NAME, &iptcLength);
        baton->iptc = static_cast<char *>(g_malloc(iptcLength));
        memcpy(baton->iptc, iptc, iptcLength);
        baton->iptcLength = iptcLength;
      }
      // XMP
      if (image.get_typeof(VIPS_META_XMP_NAME) == VIPS_TYPE_BLOB) {
        size_t xmpLength;
        void const *xmp = image.get_blob(VIPS_META_XMP_NAME, &xmpLength);
        baton->xmp = static_cast<char *>(g_malloc(xmpLength));
        memcpy(baton->xmp, xmp, xmpLength);
        baton->xmpLength = xmpLength;
      }
      // TIFFTAG_PHOTOSHOP
      if (image.get_typeof(VIPS_META_PHOTOSHOP_NAME) == VIPS_TYPE_BLOB) {
        size_t tifftagPhotoshopLength;
        void const *tifftagPhotoshop = image.get_blob(VIPS_META_PHOTOSHOP_NAME, &tifftagPhotoshopLength);
        baton->tifftagPhotoshop = static_cast<char *>(g_malloc(tifftagPhotoshopLength));
        memcpy(baton->tifftagPhotoshop, tifftagPhotoshop, tifftagPhotoshopLength);
        baton->tifftagPhotoshopLength = tifftagPhotoshopLength;
      }
      // PNG comments
      vips_image_map(image.get_image(), readPNGComment, &baton->comments);
    }

    // Clean up
    vips_error_clear();
    vips_thread_shutdown();
  }

  void OnOK() {
    Napi::Env env = Env();
    Napi::HandleScope scope(env);

    // Handle warnings
    std::string warning = sharp::VipsWarningPop();
    while (!warning.empty()) {
      debuglog.Call(Receiver().Value(), { Napi::String::New(env, warning) });
      warning = sharp::VipsWarningPop();
    }

    if (baton->err.empty()) {
      Napi::Object info = Napi::Object::New(env);
      info.Set("format", baton->format);
      if (baton->input->bufferLength > 0) {
        info.Set("size", baton->input->bufferLength);
      }
      info.Set("width", baton->width);
      info.Set("height", baton->height);
      info.Set("space", baton->space);
      info.Set("channels", baton->channels);
      info.Set("depth", baton->depth);
      if (baton->density > 0) {
        info.Set("density", baton->density);
      }
      if (!baton->chromaSubsampling.empty()) {
        info.Set("chromaSubsampling", baton->chromaSubsampling);
      }
      info.Set("isProgressive", baton->isProgressive);
      info.Set("isPalette", baton->isPalette);
      if (baton->bitsPerSample > 0) {
        info.Set("bitsPerSample", baton->bitsPerSample);
        if (baton->isPalette) {
          // Deprecated, remove with libvips 8.17.0
          info.Set("paletteBitDepth", baton->bitsPerSample);
        }
      }
      if (baton->pages > 0) {
        info.Set("pages", baton->pages);
      }
      if (baton->pageHeight > 0) {
        info.Set("pageHeight", baton->pageHeight);
      }
      if (baton->loop >= 0) {
        info.Set("loop", baton->loop);
      }
      if (!baton->delay.empty()) {
        int i = 0;
        Napi::Array delay = Napi::Array::New(env, static_cast<size_t>(baton->delay.size()));
        for (int const d : baton->delay) {
          delay.Set(i++, d);
        }
        info.Set("delay", delay);
      }
      if (baton->pagePrimary > -1) {
        info.Set("pagePrimary", baton->pagePrimary);
      }
      if (!baton->compression.empty()) {
        info.Set("compression", baton->compression);
      }
      if (!baton->resolutionUnit.empty()) {
        info.Set("resolutionUnit", baton->resolutionUnit == "in" ? "inch" : baton->resolutionUnit);
      }
      if (!baton->formatMagick.empty()) {
        info.Set("formatMagick", baton->formatMagick);
      }
      if (!baton->levels.empty()) {
        int i = 0;
        Napi::Array levels = Napi::Array::New(env, static_cast<size_t>(baton->levels.size()));
        for (std::pair<int, int> const &l : baton->levels) {
          Napi::Object level = Napi::Object::New(env);
          level.Set("width", l.first);
          level.Set("height", l.second);
          levels.Set(i++, level);
        }
        info.Set("levels", levels);
      }
      if (baton->subifds > 0) {
        info.Set("subifds", baton->subifds);
      }
      if (!baton->background.empty()) {
        Napi::Object background = Napi::Object::New(env);
        if (baton->background.size() == 3) {
          background.Set("r", baton->background[0]);
          background.Set("g", baton->background[1]);
          background.Set("b", baton->background[2]);
        } else {
          background.Set("gray", round(baton->background[0] * 100 / 255));
        }
        info.Set("background", background);
      }
      info.Set("hasProfile", baton->hasProfile);
      info.Set("hasAlpha", baton->hasAlpha);
      if (baton->orientation > 0) {
        info.Set("orientation", baton->orientation);
      }
      Napi::Object autoOrient = Napi::Object::New(env);
      info.Set("autoOrient", autoOrient);
      if (baton->orientation >= 5) {
        autoOrient.Set("width", baton->height);
        autoOrient.Set("height", baton->width);
      } else {
        autoOrient.Set("width", baton->width);
        autoOrient.Set("height", baton->height);
      }
      if (baton->exifLength > 0) {
        info.Set("exif", Napi::Buffer<char>::NewOrCopy(env, baton->exif, baton->exifLength, sharp::FreeCallback));
      }
      if (baton->iccLength > 0) {
        info.Set("icc", Napi::Buffer<char>::NewOrCopy(env, baton->icc, baton->iccLength, sharp::FreeCallback));
      }
      if (baton->iptcLength > 0) {
        info.Set("iptc", Napi::Buffer<char>::NewOrCopy(env, baton->iptc, baton->iptcLength, sharp::FreeCallback));
      }
      if (baton->xmpLength > 0) {
        info.Set("xmp", Napi::Buffer<char>::NewOrCopy(env, baton->xmp, baton->xmpLength, sharp::FreeCallback));
        if (g_utf8_validate(static_cast<char const *>(baton->xmp), baton->xmpLength, nullptr)) {
          info.Set("xmpAsString",
            Napi::String::New(env, static_cast<char const *>(baton->xmp), baton->xmpLength));
        }
      }
      if (baton->tifftagPhotoshopLength > 0) {
        info.Set("tifftagPhotoshop",
          Napi::Buffer<char>::NewOrCopy(env, baton->tifftagPhotoshop,
            baton->tifftagPhotoshopLength, sharp::FreeCallback));
      }
      if (baton->comments.size() > 0) {
        int i = 0;
        Napi::Array comments = Napi::Array::New(env, baton->comments.size());
        for (auto &c : baton->comments) {
          Napi::Object comment = Napi::Object::New(env);
          comment.Set("keyword", c.first);
          comment.Set("text", c.second);
          comments.Set(i++, comment);
        }
        info.Set("comments", comments);
      }
      Callback().Call(Receiver().Value(), { env.Null(), info });
    } else {
      Callback().Call(Receiver().Value(), { Napi::Error::New(env, sharp::TrimEnd(baton->err)).Value() });
    }

    delete baton->input;
    delete baton;
  }

 private:
  MetadataBaton* baton;
  Napi::FunctionReference debuglog;
};

/*
  metadata(options, callback)
*/
Napi::Value metadata(const Napi::CallbackInfo& info) {
  // V8 objects are converted to non-V8 types held in the baton struct
  MetadataBaton *baton = new MetadataBaton;
  Napi::Object options = info[size_t(0)].As<Napi::Object>();

  // Input
  baton->input = sharp::CreateInputDescriptor(options.Get("input").As<Napi::Object>());

  // Function to notify of libvips warnings
  Napi::Function debuglog = options.Get("debuglog").As<Napi::Function>();

  // Join queue for worker thread
  Napi::Function callback = info[size_t(1)].As<Napi::Function>();
  MetadataWorker *worker = new MetadataWorker(callback, baton, debuglog);
  worker->Receiver().Set("options", options);
  worker->Queue();

  // Increment queued task counter
  sharp::counterQueue++;

  return info.Env().Undefined();
}

const char *PNG_COMMENT_START = "png-comment-";
const int PNG_COMMENT_START_LEN = strlen(PNG_COMMENT_START);

static void* readPNGComment(VipsImage *image, const char *field, GValue *value, void *p) {
  MetadataComments *comments = static_cast<MetadataComments *>(p);

  if (vips_isprefix(PNG_COMMENT_START, field)) {
    const char *keyword = strchr(field + PNG_COMMENT_START_LEN, '-');
    const char *str;
    if (keyword != NULL && !vips_image_get_string(image, field, &str)) {
      keyword++;  // Skip the hyphen
      comments->push_back(std::make_pair(keyword, str));
    }
  }

  return NULL;
}
