---
title: Changelog
---
  
## v0.34 - *hat*

Requires libvips v8.17.1

### v0.34.3 - 10th July 2025

* Upgrade to libvips v8.17.1 for upstream bug fixes.

* Add "Magic Kernel Sharp" (no relation) to resizing kernels.

* Deprecate top-level, format-specific constructor parameters, e.g. `subifd` becomes `tiff.subifd`.

* Expose `stylesheet` and `highBitdepth` SVG input parameters.

* Expose `keepDuplicateFrames` GIF output parameter.

* Add support for RAW digital camera image input. Requires libvips compiled with libraw support.

* Provide XMP metadata as a string, as well as a Buffer, where possible.

* Add `pageHeight` option to `create` and `raw` input for animated images.
  [#3236](https://github.com/lovell/sharp/issues/3236)

* Expose JPEG 2000 `oneshot` decoder option.
  [#4262](https://github.com/lovell/sharp/pull/4262)
  [@mbklein](https://github.com/mbklein)

* Support composite operation with non-sRGB pipeline colourspace.
  [#4412](https://github.com/lovell/sharp/pull/4412)
  [@kleisauke](https://github.com/kleisauke)

* Add `keepXmp` and `withXmp` for control over output XMP metadata.
  [#4416](https://github.com/lovell/sharp/pull/4416)
  [@tpatel](https://github.com/tpatel)

### v0.34.2 - 20th May 2025

* Ensure animated GIF to WebP conversion retains loop (regression in 0.34.0).
  [#3394](https://github.com/lovell/sharp/issues/3394)

* Ensure `pdfBackground` constructor property is used.
  [#4207](https://github.com/lovell/sharp/pull/4207)
  [#4398](https://github.com/lovell/sharp/issues/4398)

* Add experimental support for prebuilt Windows ARM64 binaries.
  [#4375](https://github.com/lovell/sharp/pull/4375)
  [@hans00](https://github.com/hans00)

* Ensure resizing with a `fit` of `contain` supports multiple alpha channels.
  [#4382](https://github.com/lovell/sharp/issues/4382)

* TypeScript: Ensure `metadata` response more closely matches reality.
  [#4383](https://github.com/lovell/sharp/issues/4383)

* TypeScript: Ensure `smartDeblock` property is included in WebP definition.
  [#4387](https://github.com/lovell/sharp/pull/4387)
  [@Stephen-X](https://github.com/Stephen-X)

* Ensure support for wide-character filenames on Windows (regression in 0.34.0).
  [#4391](https://github.com/lovell/sharp/issues/4391)

### v0.34.1 - 7th April 2025

* TypeScript: Ensure new `autoOrient` property is optional.
  [#4362](https://github.com/lovell/sharp/pull/4362)
  [@styfle](https://github.com/styfle)

### v0.34.0 - 4th April 2025

* Breaking: Support array of input images to be joined or animated.
  [#1580](https://github.com/lovell/sharp/issues/1580)

* Breaking: Ensure `removeAlpha` removes all alpha channels.
  [#2266](https://github.com/lovell/sharp/issues/2266)

* Breaking: Non-animated GIF output defaults to no-loop instead of loop-forever.
  [#3394](https://github.com/lovell/sharp/issues/3394)

* Breaking: Support `info.size` on wide-character systems via upgrade to C++17.
  [#3943](https://github.com/lovell/sharp/issues/3943)

* Breaking: Ensure `background` metadata can be parsed by `color` package.
  [#4090](https://github.com/lovell/sharp/issues/4090)

* Add `isPalette` and `bitsPerSample` to metadata, deprecate `paletteBitDepth`.

* Expose WebP `smartDeblock` output option.

* Prevent use of linux-x64 binaries with v1 microarchitecture.

* Add `autoOrient` operation and constructor option.
  [#4151](https://github.com/lovell/sharp/pull/4151)
  [@happycollision](https://github.com/happycollision)

* TypeScript: Ensure channel counts use the correct range.
  [#4197](https://github.com/lovell/sharp/pull/4197)
  [@DavidVaness](https://github.com/DavidVaness)

* Improve support for ppc64le architecture.
  [#4203](https://github.com/lovell/sharp/pull/4203)
  [@sumitd2](https://github.com/sumitd2)

* Add `pdfBackground` constructor property.
  [#4207](https://github.com/lovell/sharp/pull/4207)
  [@calebmer](https://github.com/calebmer)

* Expose erode and dilate operations.
  [#4243](https://github.com/lovell/sharp/pull/4243)
  [@qpincon](https://github.com/qpincon)

* Add support for RGBE images. Requires libvips compiled with radiance support.
  [#4316](https://github.com/lovell/sharp/pull/4316)
  [@florentzabera](https://github.com/florentzabera)

* Allow wide-gamut HEIF output at higher bitdepths.
  [#4344](https://github.com/lovell/sharp/issues/4344)

## v0.33 - *gauge*

Requires libvips v8.15.3

### v0.33.5 - 16th August 2024

* Upgrade to libvips v8.15.3 for upstream bug fixes.

* Add `pageHeight` and `pages` to response of multi-page output.
  [#3411](https://github.com/lovell/sharp/issues/3411)

* Ensure option to force use of a globally-installed libvips works correctly.
  [#4111](https://github.com/lovell/sharp/pull/4111)
  [@project0](https://github.com/project0)

* Minimise use of `engines` property to improve yarn v1 support.
  [#4130](https://github.com/lovell/sharp/issues/4130)

* Ensure `sharp.format.heif` includes only AVIF when using prebuilt binaries.
  [#4132](https://github.com/lovell/sharp/issues/4132)

* Add support to recomb operation for 4x4 matrices.
  [#4147](https://github.com/lovell/sharp/pull/4147)
  [@ton11797](https://github.com/ton11797)

* Expose PNG text chunks as `comments` metadata.
  [#4157](https://github.com/lovell/sharp/pull/4157)
  [@nkeynes](https://github.com/nkeynes)

* Expose optional `precision` and `minAmplitude` parameters of `blur` operation.
  [#4168](https://github.com/lovell/sharp/pull/4168)
  [#4172](https://github.com/lovell/sharp/pull/4172)
  [@marcosc90](https://github.com/marcosc90)

* Ensure `keepIccProfile` avoids colour transformation where possible.
  [#4186](https://github.com/lovell/sharp/issues/4186)

* TypeScript: `chromaSubsampling` metadata is optional.
  [#4191](https://github.com/lovell/sharp/pull/4191)
  [@DavidVaness](https://github.com/DavidVaness)

### v0.33.4 - 16th May 2024

* Remove experimental status from `pipelineColourspace`.

* Reduce default concurrency when musl thread over-subscription detected.

* TypeScript: add missing definitions for `OverlayOptions`.
  [#4048](https://github.com/lovell/sharp/pull/4048)
  [@ike-gg](https://github.com/ike-gg)

* Install: add advanced option to force use of a globally-installed libvips.
  [#4060](https://github.com/lovell/sharp/issues/4060)

* Expose `bilinear` resizing kernel (and interpolator).
  [#4061](https://github.com/lovell/sharp/issues/4061)

* Ensure `extend` operation stays sequential for multi-page TIFF (regression in 0.32.0).
  [#4069](https://github.com/lovell/sharp/issues/4069)

* Tighten validation of constructor `text` integer properties.
  [#4071](https://github.com/lovell/sharp/issues/4071)

* Simplify internal StaySequential logic.
  [#4074](https://github.com/lovell/sharp/pull/4074)
  [@kleisauke](https://github.com/kleisauke)

* Ensure negate operation occurs after profile conversion.
  [#4096](https://github.com/lovell/sharp/pull/4096)
  [@adriaanmeuris](https://github.com/adriaanmeuris)

### v0.33.3 - 23rd March 2024

* Upgrade to libvips v8.15.2 for upstream bug fixes.

* Ensure `keepIccProfile` retains P3 and CMYK input profiles.
  [#3906](https://github.com/lovell/sharp/issues/3906)
  [#4008](https://github.com/lovell/sharp/issues/4008)

* Ensure `text.wrap` property can accept `word-char` as value.
  [#4028](https://github.com/lovell/sharp/pull/4028)
  [@yolopunk](https://github.com/yolopunk)

* Ensure `clone` takes a deep copy of existing options.
  [#4029](https://github.com/lovell/sharp/issues/4029)

* Add `bitdepth` option to `heif` output (prebuilt binaries support 8-bit only).
  [#4036](https://github.com/lovell/sharp/pull/4036)
  [@mertalev](https://github.com/mertalev)

### v0.33.2 - 12th January 2024

* Upgrade to libvips v8.15.1 for upstream bug fixes.

* TypeScript: add definition for `keepMetadata`.
  [#3914](https://github.com/lovell/sharp/pull/3914)
  [@abhi0498](https://github.com/abhi0498)

* Ensure `extend` operation stays sequential when copying (regression in 0.32.0).
  [#3928](https://github.com/lovell/sharp/issues/3928)

* Improve error handling for unsupported multi-page rotation.
  [#3940](https://github.com/lovell/sharp/issues/3940)

### v0.33.1 - 17th December 2023

* Add support for Yarn Plug'n'Play filesystem layout.
  [#3888](https://github.com/lovell/sharp/issues/3888)

* Emit warning when attempting to use invalid ICC profiles.
  [#3895](https://github.com/lovell/sharp/issues/3895)

* Ensure `VIPS_NOVECTOR` environment variable is respected.
  [#3897](https://github.com/lovell/sharp/pull/3897)
  [@icetee](https://github.com/icetee)

### v0.33.0 - 29th November 2023

* Drop support for Node.js 14 and 16, now requires Node.js ^18.17.0 or >= 20.3.0

* Prebuilt binaries distributed via npm registry and installed via package manager.

* Building from source requires dependency on `node-addon-api`.

* Remove `sharp.vendor`.

* Partially deprecate `withMetadata()`, use `withExif()` and `withIccProfile()`.

* Add experimental support for WebAssembly-based runtimes.
  [@RReverser](https://github.com/RReverser)

* Options for `trim` operation must be an Object, add new `lineArt` option.
  [#2363](https://github.com/lovell/sharp/issues/2363)

* Improve luminance of `tint` operation with weighting function.
  [#3338](https://github.com/lovell/sharp/issues/3338)
  [@jcupitt](https://github.com/jcupitt)

* Ensure all `Error` objects contain a `stack` property.
  [#3653](https://github.com/lovell/sharp/issues/3653)

* Make `compression` option of `heif` mandatory to help reduce HEIF vs HEIC confusion.
  [#3740](https://github.com/lovell/sharp/issues/3740)

* Ensure correct interpretation of 16-bit raw input.
  [#3808](https://github.com/lovell/sharp/issues/3808)

* Add support for `miniswhite` when using TIFF output.
  [#3812](https://github.com/lovell/sharp/pull/3812)
  [@dnsbty](https://github.com/dnsbty)

* TypeScript: add missing definition for `withMetadata` boolean.
  [#3823](https://github.com/lovell/sharp/pull/3823)
  [@uhthomas](https://github.com/uhthomas)

* Add more fine-grained control over output metadata.
  [#3824](https://github.com/lovell/sharp/issues/3824)

* Ensure multi-page extract remains sequential.
  [#3837](https://github.com/lovell/sharp/issues/3837)

## v0.32 - *flow*

Requires libvips v8.14.5

### v0.32.6 - 18th September 2023

* Upgrade to libvips v8.14.5 for upstream bug fixes.

* Ensure composite tile images are fully decoded (regression in 0.32.0).
  [#3767](https://github.com/lovell/sharp/issues/3767)

* Ensure `withMetadata` can add ICC profiles to RGB16 output.
  [#3773](https://github.com/lovell/sharp/issues/3773)

* Ensure `withMetadata` does not reduce 16-bit images to 8-bit (regression in 0.32.5).
  [#3773](https://github.com/lovell/sharp/issues/3773)

* TypeScript: Add definitions for block and unblock.
  [#3799](https://github.com/lovell/sharp/pull/3799)
  [@ldrick](https://github.com/ldrick)

### v0.32.5 - 15th August 2023

* Upgrade to libvips v8.14.4 for upstream bug fixes.

* TypeScript: Add missing `WebpPresetEnum` to definitions.
  [#3748](https://github.com/lovell/sharp/pull/3748)
  [@pilotso11](https://github.com/pilotso11)

* Ensure compilation using musl v1.2.4.
  [#3755](https://github.com/lovell/sharp/pull/3755)
  [@kleisauke](https://github.com/kleisauke)

* Ensure resize with a `fit` of `inside` respects 90/270 degree rotation.
  [#3756](https://github.com/lovell/sharp/issues/3756)

* TypeScript: Ensure `minSize` property of `WebpOptions` is boolean.
  [#3758](https://github.com/lovell/sharp/pull/3758)
  [@sho-xizz](https://github.com/sho-xizz)

* Ensure `withMetadata` adds default sRGB profile.
  [#3761](https://github.com/lovell/sharp/issues/3761)

### v0.32.4 - 21st July 2023

* Upgrade to libvips v8.14.3 for upstream bug fixes.

* Expose ability to (un)block low-level libvips operations by name.

* Prebuilt binaries: restore support for tile-based output.
  [#3581](https://github.com/lovell/sharp/issues/3581)

### v0.32.3 - 14th July 2023

* Expose `preset` option for WebP output.
  [#3639](https://github.com/lovell/sharp/issues/3639)

* Ensure decoding remains sequential for all operations (regression in 0.32.2).
  [#3725](https://github.com/lovell/sharp/issues/3725)

### v0.32.2 - 11th July 2023

* Limit HEIF output dimensions to 16384x16384, matches libvips.

* Ensure exceptions are not thrown when terminating.
  [#3569](https://github.com/lovell/sharp/issues/3569)

* Ensure the same access method is used for all inputs (regression in 0.32.0).
  [#3669](https://github.com/lovell/sharp/issues/3669)

* Improve detection of jp2 filename extensions.
  [#3674](https://github.com/lovell/sharp/pull/3674)
  [@bianjunjie1981](https://github.com/bianjunjie1981)

* Guard use of smartcrop premultiplied option to prevent warning (regression in 0.32.1).
  [#3710](https://github.com/lovell/sharp/issues/3710)

* Prevent over-compute in affine-based rotate before resize.
  [#3722](https://github.com/lovell/sharp/issues/3722)

* Allow sequential read for EXIF-based auto-orientation.
  [#3725](https://github.com/lovell/sharp/issues/3725)

### v0.32.1 - 27th April 2023

* Add experimental `unflatten` operation.
  [#3461](https://github.com/lovell/sharp/pull/3461)
  [@antonmarsden](https://github.com/antonmarsden)

* Ensure use of `flip` operation forces random access read (regression in 0.32.0).
  [#3600](https://github.com/lovell/sharp/issues/3600)

* Ensure `linear` operation works with 16-bit input (regression in 0.31.3).
  [#3605](https://github.com/lovell/sharp/issues/3605)

* Install: ensure proxy URLs are logged correctly.
  [#3615](https://github.com/lovell/sharp/pull/3615)
  [@TomWis97](https://github.com/TomWis97)

* Ensure profile-less CMYK to CMYK roundtrip skips colourspace conversion.
  [#3620](https://github.com/lovell/sharp/issues/3620)

* Add support for `modulate` operation when using non-sRGB pipeline colourspace.
  [#3620](https://github.com/lovell/sharp/issues/3620)

* Ensure `trim` operation works with CMYK images (regression in 0.31.0).
  [#3636](https://github.com/lovell/sharp/issues/3636)

* Install: coerce libc version to semver.
  [#3641](https://github.com/lovell/sharp/issues/3641)

### v0.32.0 - 24th March 2023

* Default to using sequential rather than random access read where possible.

* Replace GIF output `optimise` / `optimize` option with `reuse`.

* Add `progressive` option to GIF output for interlacing.

* Add `wrap` option to text image creation.

* Add `formatMagick` property to metadata of images loaded via *magick.

* Prefer integer (un)premultiply for faster resizing of RGBA images.

* Add `ignoreIcc` input option to ignore embedded ICC profile.

* Allow use of GPS (IFD3) EXIF metadata.
  [#2767](https://github.com/lovell/sharp/issues/2767)

* TypeScript definitions are now maintained and published directly, deprecating the `@types/sharp` package.
  [#3369](https://github.com/lovell/sharp/issues/3369)

* Prebuilt binaries: ensure macOS 10.13+ support, as documented.
  [#3438](https://github.com/lovell/sharp/issues/3438)

* Prebuilt binaries: prevent use of glib slice allocator, improves QEMU support.
  [#3448](https://github.com/lovell/sharp/issues/3448)

* Add focus point coordinates to output when using attention based crop.
  [#3470](https://github.com/lovell/sharp/pull/3470)
  [@ejoebstl](https://github.com/ejoebstl)

* Expose sharp version as `sharp.versions.sharp`.
  [#3471](https://github.com/lovell/sharp/issues/3471)

* Respect `fastShrinkOnLoad` resize option for WebP input.
  [#3516](https://github.com/lovell/sharp/issues/3516)

* Reduce sharpen `sigma` maximum from 10000 to 10.
  [#3521](https://github.com/lovell/sharp/issues/3521)

* Add support for `ArrayBuffer` input.
  [#3548](https://github.com/lovell/sharp/pull/3548)
  [@kapouer](https://github.com/kapouer)

* Add support to `extend` operation for `extendWith` to allow copy/mirror/repeat.
  [#3556](https://github.com/lovell/sharp/pull/3556)
  [@janaz](https://github.com/janaz)

* Ensure all async JS callbacks are wrapped to help avoid possible race condition.
  [#3569](https://github.com/lovell/sharp/issues/3569)

* Prebuilt binaries: support for tile-based output temporarily removed due to licensing issue.
  [#3581](https://github.com/lovell/sharp/issues/3581)

* Add support to `normalise` for `lower` and `upper` percentiles.
  [#3583](https://github.com/lovell/sharp/pull/3583)
  [@LachlanNewman](https://github.com/LachlanNewman)

## v0.31 - *eagle*

Requires libvips v8.13.3

### v0.31.3 - 21st December 2022

* Add experimental support for JPEG-XL images. Requires libvips compiled with libjxl.
  [#2731](https://github.com/lovell/sharp/issues/2731)

* Add runtime detection of V8 memory cage, ensures compatibility with Electron 21 onwards.
  [#3384](https://github.com/lovell/sharp/issues/3384)

* Expose `interFrameMaxError` and `interPaletteMaxError` GIF optimisation properties.
  [#3401](https://github.com/lovell/sharp/issues/3401)

* Allow installation on Linux with glibc patch versions e.g. Fedora 38.
  [#3423](https://github.com/lovell/sharp/issues/3423)

* Expand range of existing `sharpen` parameters to match libvips.
  [#3427](https://github.com/lovell/sharp/issues/3427)

* Prevent possible race condition awaiting metadata of Stream-based input.
  [#3451](https://github.com/lovell/sharp/issues/3451)

* Improve `extractChannel` support for 16-bit output colourspaces.
  [#3453](https://github.com/lovell/sharp/issues/3453)

* Ignore `sequentialRead` option when calculating image statistics.
  [#3462](https://github.com/lovell/sharp/issues/3462)

* Small performance improvement for operations that introduce a non-opaque background.
  [#3465](https://github.com/lovell/sharp/issues/3465)

* Ensure integral output of `linear` operation.
  [#3468](https://github.com/lovell/sharp/issues/3468)

### v0.31.2 - 4th November 2022

* Upgrade to libvips v8.13.3 for upstream bug fixes.

* Ensure manual flip, rotate, resize operation ordering (regression in 0.31.1)
  [#3391](https://github.com/lovell/sharp/issues/3391)

* Ensure auto-rotation works without resize (regression in 0.31.1)
  [#3422](https://github.com/lovell/sharp/issues/3422)

### v0.31.1 - 29th September 2022

* Upgrade to libvips v8.13.2 for upstream bug fixes.

* Ensure `close` event occurs after `end` event for Stream-based output.
  [#3313](https://github.com/lovell/sharp/issues/3313)

* Ensure `limitInputPixels` constructor option uses uint64.
  [#3349](https://github.com/lovell/sharp/pull/3349)
  [@marcosc90](https://github.com/marcosc90)

* Ensure auto-rotation works with shrink-on-load and extract (regression in 0.31.0).
  [#3352](https://github.com/lovell/sharp/issues/3352)

* Ensure AVIF output is always 8-bit.
  [#3358](https://github.com/lovell/sharp/issues/3358)

* Ensure greyscale images can be trimmed (regression in 0.31.0).
  [#3386](https://github.com/lovell/sharp/issues/3386)

### v0.31.0 - 5th September 2022

* Drop support for Node.js 12, now requires Node.js >= 14.15.0.

* GIF output now re-uses input palette if possible. Use `reoptimise` option to generate a new palette.

* Add WebP `minSize` and `mixed` options for greater control over animation frames.

* Remove previously-deprecated WebP `reductionEffort` and HEIF `speed` options. Use `effort` to control these.

* The `flip` and `flop` operations will now occur before the `rotate` operation.

* Improve `normalise` operation with use of histogram.
  [#200](https://github.com/lovell/sharp/issues/200)

* Use combined bounding box of alpha and non-alpha channels for `trim` operation.
  [#2166](https://github.com/lovell/sharp/issues/2166)

* Add Buffer and Stream support to tile-based output.
  [#2238](https://github.com/lovell/sharp/issues/2238)

* Add input `fileSuffix` and output `alias` to `format` information.
  [#2642](https://github.com/lovell/sharp/issues/2642)

* Re-introduce support for greyscale ICC profiles (temporarily removed in 0.30.2).
  [#3114](https://github.com/lovell/sharp/issues/3114)

* Add support for WebP and PackBits `compression` options with TIFF output.
  [#3198](https://github.com/lovell/sharp/issues/3198)

* Ensure OpenSlide and FITS input works with custom libvips.
  [#3226](https://github.com/lovell/sharp/issues/3226)

* Ensure `trim` operation is a no-op when it would reduce an image to nothing.
  [#3223](https://github.com/lovell/sharp/issues/3223)

* Expose `vips_text` to create an image containing rendered text.
  [#3252](https://github.com/lovell/sharp/pull/3252)
  [@brahima](https://github.com/brahima)

* Ensure only properties owned by the `withMetadata` EXIF Object are parsed.
  [#3292](https://github.com/lovell/sharp/issues/3292)

* Expand `linear` operation to allow use of per-channel arrays.
  [#3303](https://github.com/lovell/sharp/pull/3303)
  [@antonmarsden](https://github.com/antonmarsden)

* Ensure the order of `rotate`, `resize` and `extend` operations is respected where possible.
  Emit warnings when previous calls in the same pipeline will be ignored.
  [#3319](https://github.com/lovell/sharp/issues/3319)

* Ensure PNG bitdepth can be set for non-palette output.
  [#3322](https://github.com/lovell/sharp/issues/3322)

* Add trim option to provide a specific background colour.
  [#3332](https://github.com/lovell/sharp/pull/3332)
  [@mart-jansink](https://github.com/mart-jansink)

* Ensure resized image is unpremultiplied before composite.
  [#3334](https://github.com/lovell/sharp/issues/3334)

## v0.30 - *dresser*

Requires libvips v8.12.2

### v0.30.7 - 22nd June 2022

* Ensure tiled composition always works with outside resizing.
  [#3227](https://github.com/lovell/sharp/issues/3227)

* Allow WebP encoding effort of 0.
  [#3261](https://github.com/lovell/sharp/pull/3261)
  [@AlexanderTheGrey](https://github.com/AlexanderTheGrey)

* Prevent upsampling via libwebp.
  [#3267](https://github.com/lovell/sharp/pull/3267)
  [@blacha](https://github.com/blacha)

### v0.30.6 - 30th May 2022

* Allow values for `limitInputPixels` larger than 32-bit.
  [#3238](https://github.com/lovell/sharp/issues/3238)

* Ensure brew-installed `vips` can be detected (regression in 0.30.5).
  [#3239](https://github.com/lovell/sharp/issues/3239)

### v0.30.5 - 23rd May 2022

* Install: pass `PKG_CONFIG_PATH` via env rather than substitution.
  [@dwisiswant0](https://github.com/dwisiswant0)

* Add support for `--libc` flag to improve cross-platform installation.
  [#3160](https://github.com/lovell/sharp/pull/3160)
  [@joonamo](https://github.com/joonamo)

* Allow installation of prebuilt libvips binaries from filesystem.
  [#3196](https://github.com/lovell/sharp/pull/3196)
  [@ankurparihar](https://github.com/ankurparihar)

* Fix rotate-then-extract for EXIF orientation 2.
  [#3218](https://github.com/lovell/sharp/pull/3218)
  [@jakob0fischl](https://github.com/jakob0fischl)

### v0.30.4 - 18th April 2022

* Increase control over sensitivity to invalid images via `failOn`, deprecate `failOnError` (equivalent to `failOn: 'warning'`).

* Ensure `create` input image has correct bit depth and colour space.
  [#3139](https://github.com/lovell/sharp/issues/3139)

* Add support for `TypedArray` input with `byteOffset` and `length`.
  [#3146](https://github.com/lovell/sharp/pull/3146)
  [@codepage949](https://github.com/codepage949)

* Improve error message when attempting to render SVG input greater than 32767x32767.
  [#3167](https://github.com/lovell/sharp/issues/3167)

* Add missing file name to 'Input file is missing' error message.
  [#3178](https://github.com/lovell/sharp/pull/3178)
  [@Brodan](https://github.com/Brodan)

### v0.30.3 - 14th March 2022

* Allow `sharpen` options to be provided more consistently as an Object.
  [#2561](https://github.com/lovell/sharp/issues/2561)

* Expose `x1`, `y2` and `y3` parameters of `sharpen` operation.
  [#2935](https://github.com/lovell/sharp/issues/2935)

* Prevent double unpremultiply with some composite blend modes (regression in 0.30.2).
  [#3118](https://github.com/lovell/sharp/issues/3118)

### v0.30.2 - 2nd March 2022

* Improve performance and accuracy when compositing multiple images.
  [#2286](https://github.com/lovell/sharp/issues/2286)

* Expand pkgconfig search path for wider BSD support.
  [#3106](https://github.com/lovell/sharp/issues/3106)

* Ensure Windows C++ runtime is linked statically (regression in 0.30.0).
  [#3110](https://github.com/lovell/sharp/pull/3110)
  [@kleisauke](https://github.com/kleisauke)

* Temporarily ignore greyscale ICC profiles to workaround lcms bug.
  [#3112](https://github.com/lovell/sharp/issues/3112)

### v0.30.1 - 9th February 2022

* Allow use of `toBuffer` and `toFile` on the same instance.
  [#3044](https://github.com/lovell/sharp/issues/3044)

* Skip shrink-on-load for known libjpeg rounding errors.
  [#3066](https://github.com/lovell/sharp/issues/3066)
  [@kleisauke](https://github.com/kleisauke)

* Ensure withoutReduction does not interfere with contain/crop/embed.
  [#3081](https://github.com/lovell/sharp/pull/3081)
  [@kleisauke](https://github.com/kleisauke)

* Ensure affine interpolator is correctly finalised.
  [#3083](https://github.com/lovell/sharp/pull/3083)
  [@kleisauke](https://github.com/kleisauke)

### v0.30.0 - 1st February 2022

* Add support for GIF output to prebuilt binaries.

* Reduce minimum Linux ARM64v8 glibc requirement to 2.17.

* Verify prebuilt binaries with a Subresource Integrity check.

* Standardise WebP `effort` option name, deprecate `reductionEffort`.

* Standardise HEIF `effort` option name, deprecate `speed`.

* Add support for IIIF v3 tile-based output.

* Expose control over CPU effort for palette-based PNG output.
  [#2541](https://github.com/lovell/sharp/issues/2541)

* Improve animated (multi-page) image resize and extract.
  [#2789](https://github.com/lovell/sharp/pull/2789)
  [@kleisauke](https://github.com/kleisauke)

* Expose platform and architecture of vendored binaries as `sharp.vendor`.
  [#2928](https://github.com/lovell/sharp/issues/2928)

* Ensure 16-bit PNG output uses correct bitdepth.
  [#2958](https://github.com/lovell/sharp/pull/2958)
  [@gforge](https://github.com/gforge)

* Properly emit close events for duplex streams.
  [#2976](https://github.com/lovell/sharp/pull/2976)
  [@driannaude](https://github.com/driannaude)

* Expose `unlimited` option for SVG and PNG input, switches off safety features.
  [#2984](https://github.com/lovell/sharp/issues/2984)

* Add `withoutReduction` option to resize operation.
  [#3006](https://github.com/lovell/sharp/pull/3006)
  [@christopherbradleybanks](https://github.com/christopherbradleybanks)

* Add `resolutionUnit` as `tiff` option and expose in metadata.
  [#3023](https://github.com/lovell/sharp/pull/3023)
  [@ompal-sisodiya](https://github.com/ompal-sisodiya)

* Ensure rotate-then-extract works with EXIF mirroring.
  [#3024](https://github.com/lovell/sharp/issues/3024)

## v0.29 - *circle*

Requires libvips v8.11.3

### v0.29.3 - 14th November 2021

* Ensure correct dimensions when containing image resized to 1px.
  [#2951](https://github.com/lovell/sharp/issues/2951)

* Impute TIFF `xres`/`yres` from `density` provided to `withMetadata`.
  [#2952](https://github.com/lovell/sharp/pull/2952)
  [@mbklein](https://github.com/mbklein)

### v0.29.2 - 21st October 2021

* Add `timeout` function to limit processing time.

* Ensure `sharp.versions` is populated from vendored libvips.

* Remove animation properties from single page images.
  [#2890](https://github.com/lovell/sharp/issues/2890)

* Allow use of 'tif' to select TIFF output.
  [#2893](https://github.com/lovell/sharp/pull/2893)
  [@erf](https://github.com/erf)

* Improve error message on Windows for version conflict.
  [#2918](https://github.com/lovell/sharp/pull/2918)
  [@dkrnl](https://github.com/dkrnl)

* Throw error rather than exit when invalid binaries detected.
  [#2931](https://github.com/lovell/sharp/issues/2931)

### v0.29.1 - 7th September 2021

* Add `lightness` option to `modulate` operation.
  [#2846](https://github.com/lovell/sharp/pull/2846)

* Ensure correct PNG bitdepth is set based on number of colours.
  [#2855](https://github.com/lovell/sharp/issues/2855)

* Ensure background is always premultiplied when compositing.
  [#2858](https://github.com/lovell/sharp/issues/2858)

* Ensure images with P3 profiles retain full gamut.
  [#2862](https://github.com/lovell/sharp/issues/2862)

* Add support for libvips compiled with OpenJPEG.
  [#2868](https://github.com/lovell/sharp/pull/2868)

* Remove unsupported animation properties from AVIF output.
  [#2870](https://github.com/lovell/sharp/issues/2870)

* Resolve paths before comparing input/output filenames.
  [#2878](https://github.com/lovell/sharp/pull/2878)
  [@rexxars](https://github.com/rexxars)

* Allow use of speed 9 (fastest) for HEIF encoding.
  [#2879](https://github.com/lovell/sharp/pull/2879)
  [@rexxars](https://github.com/rexxars)

### v0.29.0 - 17th August 2021

* Drop support for Node.js 10, now requires Node.js >= 12.13.0.

* Add `background` property to PNG and GIF image metadata.

* Add `compression` property to HEIF image metadata.
  [#2504](https://github.com/lovell/sharp/issues/2504)

* AVIF encoding now defaults to `4:4:4` chroma subsampling.
  [#2562](https://github.com/lovell/sharp/issues/2562)

* Allow multiple platform-arch binaries in same `node_modules` installation tree.
  [#2575](https://github.com/lovell/sharp/issues/2575)

* Default to single-channel `b-w` space when `extractChannel` is used.
  [#2658](https://github.com/lovell/sharp/issues/2658)

* Allow installation directory to contain spaces (regression in v0.26.0).
  [#2777](https://github.com/lovell/sharp/issues/2777)

* Add `pipelineColourspace` operator to set the processing space.
  [#2704](https://github.com/lovell/sharp/pull/2704)
  [@Daiz](https://github.com/Daiz)

* Allow bit depth to be set when using raw input and output.
  [#2762](https://github.com/lovell/sharp/pull/2762)
  [@mart-jansink](https://github.com/mart-jansink)

* Allow `negate` to act only on non-alpha channels.
  [#2808](https://github.com/lovell/sharp/pull/2808)
  [@rexxars](https://github.com/rexxars)

## v0.28 - *bijou*

Requires libvips v8.10.6

### v0.28.3 - 24th May 2021

* Ensure presence of libvips, vendored or global, before invoking node-gyp.

* Skip shrink-on-load for multi-page WebP.
  [#2714](https://github.com/lovell/sharp/issues/2714)

* Add contrast limiting adaptive histogram equalization (CLAHE) operator.
  [#2726](https://github.com/lovell/sharp/pull/2726)
  [@baparham](https://github.com/baparham)

### v0.28.2 - 10th May 2021

* Allow `withMetadata` to set `density`.
  [#967](https://github.com/lovell/sharp/issues/967)

* Skip shrink-on-load where one dimension <4px.
  [#2653](https://github.com/lovell/sharp/issues/2653)

* Allow escaped proxy credentials.
  [#2664](https://github.com/lovell/sharp/pull/2664)
  [@msalettes](https://github.com/msalettes)

* Add `premultiplied` flag for raw pixel data input.
  [#2685](https://github.com/lovell/sharp/pull/2685)
  [@mnutt](https://github.com/mnutt)

* Detect empty input and throw a helpful error.
  [#2687](https://github.com/lovell/sharp/pull/2687)
  [@JakobJingleheimer](https://github.com/JakobJingleheimer)

* Add install-time flag to skip version compatibility checks.
  [#2692](https://github.com/lovell/sharp/pull/2692)
  [@xemle](https://github.com/xemle)

### v0.28.1 - 5th April 2021

* Ensure all installation errors are logged with a more obvious prefix.

* Allow `withMetadata` to set and update EXIF metadata.
  [#650](https://github.com/lovell/sharp/issues/650)

* Add support for OME-TIFF Sub Image File Directories (subIFD).
  [#2557](https://github.com/lovell/sharp/issues/2557)

* Allow `ensureAlpha` to set the alpha transparency level.
  [#2634](https://github.com/lovell/sharp/issues/2634)

### v0.28.0 - 29th March 2021

* Prebuilt binaries now include mozjpeg and libimagequant (BSD 2-Clause).

* Prebuilt binaries limit AVIF support to the most common 8-bit depth.

* Add `mozjpeg` option to `jpeg` method, sets mozjpeg defaults.

* Reduce the default PNG `compressionLevel` to the more commonly used 6.

* Reduce concurrency on glibc-based Linux when using the default memory allocator to help prevent fragmentation.

* Default missing edge properties of extend operation to zero.
  [#2578](https://github.com/lovell/sharp/issues/2578)

* Ensure composite does not clip top and left offsets.
  [#2594](https://github.com/lovell/sharp/pull/2594)
  [@SHG42](https://github.com/SHG42)

* Improve error handling of network failure at install time.
  [#2608](https://github.com/lovell/sharp/pull/2608)
  [@abradley](https://github.com/abradley)

* Ensure `@id` attribute can be set for IIIF tile-based output.
  [#2612](https://github.com/lovell/sharp/issues/2612)
  [@edsilv](https://github.com/edsilv)

* Ensure composite replicates the correct number of tiles for centred gravities.
  [#2626](https://github.com/lovell/sharp/issues/2626)

## v0.27 - *avif*

Requires libvips v8.10.5

### v0.27.2 - 22nd February 2021

* macOS: Prevent use of globally-installed ARM64 libvips with Rosetta x64 emulation.
  [#2460](https://github.com/lovell/sharp/issues/2460)

* Linux (musl): Prevent use of prebuilt linuxmusl-x64 binaries with musl >= 1.2.0.
  [#2570](https://github.com/lovell/sharp/issues/2570)

* Improve 16-bit grey+alpha support by using libvips' `has_alpha` detection.
  [#2569](https://github.com/lovell/sharp/issues/2569)

* Allow the use of non lower case extensions with `toFormat`.
  [#2581](https://github.com/lovell/sharp/pull/2581)
  [@florian-busch](https://github.com/florian-busch)

* Allow use of `recomb` operation with single channel input.
  [#2584](https://github.com/lovell/sharp/issues/2584)

### v0.27.1 - 27th January 2021

* Ensure TIFF is cast when using float predictor.
  [#2502](https://github.com/lovell/sharp/pull/2502)
  [@randyridge](https://github.com/randyridge)

* Add support for Uint8Array and Uint8ClampedArray input.
  [#2511](https://github.com/lovell/sharp/pull/2511)
  [@leon](https://github.com/leon)

* Revert: ensure all platforms use fontconfig for font rendering.
  [#2515](https://github.com/lovell/sharp/issues/2515)

* Expose libvips gaussnoise operation to allow creation of Gaussian noise.
  [#2527](https://github.com/lovell/sharp/pull/2527)
  [@alza54](https://github.com/alza54)

### v0.27.0 - 22nd December 2020

* Add support for AVIF to prebuilt binaries.

* Remove experimental status from `heif` output, defaults are now AVIF-centric.

* Allow negative top/left offsets for composite operation.
  [#2391](https://github.com/lovell/sharp/pull/2391)
  [@CurosMJ](https://github.com/CurosMJ)

* Ensure all platforms use fontconfig for font rendering.
  [#2399](https://github.com/lovell/sharp/issues/2399)

## v0.26 - *zoom*

Requires libvips v8.10.0

### v0.26.3 - 16th November 2020

* Expose libvips' affine operation.
  [#2336](https://github.com/lovell/sharp/pull/2336)
  [@guillevc](https://github.com/guillevc)

* Fallback to tar.gz for prebuilt libvips when Brotli not available.
  [#2412](https://github.com/lovell/sharp/pull/2412)
  [@ascorbic](https://github.com/ascorbic)

### v0.26.2 - 14th October 2020

* Add support for EXR input. Requires libvips compiled with OpenEXR.
  [#698](https://github.com/lovell/sharp/issues/698)

* Ensure support for yarn v2.
  [#2379](https://github.com/lovell/sharp/pull/2379)
  [@jalovatt](https://github.com/jalovatt)

* Add centre/center option to tile-based output.
  [#2397](https://github.com/lovell/sharp/pull/2397)
  [@beig](https://github.com/beig)

### v0.26.1 - 20th September 2020

* Ensure correct pageHeight when verifying multi-page image dimensions.
  [#2343](https://github.com/lovell/sharp/pull/2343)
  [@derom](https://github.com/derom)

* Allow input density range up to 100000 DPI.
  [#2348](https://github.com/lovell/sharp/pull/2348)
  [@stefanprobst](https://github.com/stefanprobst)

* Ensure animation-related properties can be set for Stream-based input.
  [#2369](https://github.com/lovell/sharp/pull/2369)
  [@AcrylicShrimp](https://github.com/AcrylicShrimp)

* Ensure `stats` can be calculated for 1x1 input.
  [#2372](https://github.com/lovell/sharp/issues/2372)

* Ensure animated GIF output is optimised.
  [#2376](https://github.com/lovell/sharp/issues/2376)

### v0.26.0 - 25th August 2020

* Prebuilt libvips binaries are now statically-linked and Brotli-compressed, requiring Node.js 10.16.0+.

* TIFF output `squash` is replaced by `bitdepth` to reduce to 1, 2 or 4 bit.

* JPEG output `quality` >= 90 no longer automatically sets `chromaSubsampling` to `4:4:4`.

* Add most `dominant` colour to image `stats`.
  [#640](https://github.com/lovell/sharp/issues/640)

* Add support for animated GIF (requires \*magick) and WebP output.
  [#2012](https://github.com/lovell/sharp/pull/2012)
  [@deftomat](https://github.com/deftomat)

* Add support for libvips ImageMagick v7 loaders.
  [#2258](https://github.com/lovell/sharp/pull/2258)
  [@vouillon](https://github.com/vouillon)

* Allow multi-page input via \*magick.
  [#2259](https://github.com/lovell/sharp/pull/2259)
  [@vouillon](https://github.com/vouillon)

* Add support to `withMetadata` for custom ICC profile.
  [#2271](https://github.com/lovell/sharp/pull/2271)
  [@roborourke](https://github.com/roborourke)

* Ensure prebuilt binaries for ARM default to v7 when using Electron.
  [#2292](https://github.com/lovell/sharp/pull/2292)
  [@diegodev3](https://github.com/diegodev3)

## v0.25 - *yield*

Requires libvips v8.9.1

### v0.25.4 - 12th June 2020

* Allow libvips binary location override where version is appended.
  [#2217](https://github.com/lovell/sharp/pull/2217)
  [@malice00](https://github.com/malice00)

* Enable PNG palette when setting quality, colours, colors or dither.
  [#2226](https://github.com/lovell/sharp/pull/2226)
  [@romaleev](https://github.com/romaleev)

* Add `level` constructor option to use a specific level of a multi-level image.
  Expose `levels` metadata for multi-level images.
  [#2222](https://github.com/lovell/sharp/issues/2222)

* Add support for named `alpha` channel to `extractChannel` operation.
  [#2138](https://github.com/lovell/sharp/issues/2138)

* Add experimental `sharpness` calculation to `stats()` response.
  [#2251](https://github.com/lovell/sharp/issues/2251)

* Emit `warning` event for non-critical processing problems.
  [#2032](https://github.com/lovell/sharp/issues/2032)

### v0.25.3 - 17th May 2020

* Ensure libvips is initialised only once, improves worker thread safety.
  [#2143](https://github.com/lovell/sharp/issues/2143)

* Ensure npm platform flag is respected when copying DLLs.
  [#2188](https://github.com/lovell/sharp/pull/2188)
  [@dimadeveatii](https://github.com/dimadeveatii)

* Allow SVG input with large inline images to be parsed.
  [#2195](https://github.com/lovell/sharp/issues/2195)

### v0.25.2 - 20th March 2020

* Provide prebuilt binaries for Linux ARM64v8.

* Add IIIF layout support to tile-based output.
  [#2098](https://github.com/lovell/sharp/pull/2098)
  [@edsilv](https://github.com/edsilv)

* Ensure input options are consistently and correctly detected.
  [#2118](https://github.com/lovell/sharp/issues/2118)

* Ensure N-API prebuilt binaries work on RHEL7 and its derivatives.
  [#2119](https://github.com/lovell/sharp/issues/2119)

* Ensure AsyncWorker options are persisted.
  [#2130](https://github.com/lovell/sharp/issues/2130)

### v0.25.1 - 7th March 2020

* Ensure prebuilt binaries are fetched based on N-API version.
  [#2117](https://github.com/lovell/sharp/issues/2117)

### v0.25.0 - 7th March 2020

* Remove `limitInputPixels` and `sequentialRead` previously deprecated in v0.24.0.

* Migrate internals to N-API.
  [#1282](https://github.com/lovell/sharp/issues/1282)

* Add support for 32-bit Windows.
  [#2088](https://github.com/lovell/sharp/issues/2088)

* Ensure correct ordering of rotate-then-trim operations.
  [#2087](https://github.com/lovell/sharp/issues/2087)

* Ensure composite accepts `limitInputPixels` and `sequentialRead` input options.
  [#2099](https://github.com/lovell/sharp/issues/2099)

## v0.24 - "*wit*"

Requires libvips v8.9.0.

### v0.24.1 - 15<sup>th</sup> February 2020

* Prevent use of sequentialRead for EXIF-based rotate operation.
  [#2042](https://github.com/lovell/sharp/issues/2042)

* Ensure RGBA LZW TIFF returns correct channel count.
  [#2064](https://github.com/lovell/sharp/issues/2064)

### v0.24.0 - 16<sup>th</sup> January 2020

* Drop support for Node.js 8.
  [#1910](https://github.com/lovell/sharp/issues/1910)

* Drop support for undefined input where options also provided.
  [#1768](https://github.com/lovell/sharp/issues/1768)

* Move `limitInputPixels` and `sequentialRead` to input options, deprecating functions of the same name.

* Expose `delay` and `loop` metadata for animated images.
  [#1905](https://github.com/lovell/sharp/issues/1905)

* Ensure correct colour output for 16-bit, 2-channel PNG input with ICC profile.
  [#2013](https://github.com/lovell/sharp/issues/2013)

* Prevent use of sequentialRead for rotate operations.
  [#2016](https://github.com/lovell/sharp/issues/2016)

* Correctly bind max width and height values when using withoutEnlargement.
  [#2024](https://github.com/lovell/sharp/pull/2024)
  [@BrychanOdlum](https://github.com/BrychanOdlum)

* Add support for input with 16-bit RGB profile.
  [#2037](https://github.com/lovell/sharp/issues/2037)

## v0.23 - "*vision*"

Requires libvips v8.8.1.

### v0.23.4 - 5<sup>th</sup> December 2019

* Handle zero-length Buffer objects when using Node.js v13.2.0+.

* Expose raw TIFFTAG_PHOTOSHOP metadata.
  [#1600](https://github.com/lovell/sharp/issues/1600)

* Improve thread safety by using copy-on-write when updating metadata.
  [#1986](https://github.com/lovell/sharp/issues/1986)

### v0.23.3 - 17<sup>th</sup> November 2019

* Ensure `trim` operation supports images contained in the alpha channel.
  [#1597](https://github.com/lovell/sharp/issues/1597)

* Ensure tile `overlap` option works as expected.
  [#1921](https://github.com/lovell/sharp/pull/1921)
  [@rustyguts](https://github.com/rustyguts)

* Allow compilation on FreeBSD and variants (broken since v0.23.0)
  [#1952](https://github.com/lovell/sharp/pull/1952)
  [@pouya-eghbali](https://github.com/pouya-eghbali)

* Ensure `modulate` and other colour-based operations can co-exist.
  [#1958](https://github.com/lovell/sharp/issues/1958)

### v0.23.2 - 28<sup>th</sup> October 2019

* Add `background` option to tile output operation.
  [#1924](https://github.com/lovell/sharp/pull/1924)
  [@neave](https://github.com/neave)

* Add support for Node.js 13.
  [#1932](https://github.com/lovell/sharp/pull/1932)
  [@MayhemYDG](https://github.com/MayhemYDG)

### v0.23.1 - 26<sup>th</sup> September 2019

* Ensure `sharp.format.vips` is present and correct (filesystem only).
  [#1813](https://github.com/lovell/sharp/issues/1813)

* Ensure invalid `width` and `height` provided as options to `resize` throw.
  [#1817](https://github.com/lovell/sharp/issues/1817)

* Allow use of 'heic' and 'heif' identifiers with `toFormat`.
  [#1834](https://github.com/lovell/sharp/pull/1834)
  [@jaubourg](https://github.com/jaubourg)

* Add `premultiplied` option to `composite` operation.
  [#1835](https://github.com/lovell/sharp/pull/1835)
  [@Andargor](https://github.com/Andargor)

* Allow instance reuse with differing `toBuffer` options.
  [#1860](https://github.com/lovell/sharp/pull/1860)
  [@RaboliotTheGrey](https://github.com/RaboliotTheGrey)

* Ensure image is at least 3x3 pixels before attempting trim operation.

### v0.23.0 - 29<sup>th</sup> July 2019

* Remove `overlayWith` previously deprecated in v0.22.0.

* Add experimental support for HEIF images. Requires libvips compiled with libheif.
  [#1105](https://github.com/lovell/sharp/issues/1105)

* Expose libwebp `smartSubsample` and `reductionEffort` options.
  [#1545](https://github.com/lovell/sharp/issues/1545)

* Add experimental support for Worker Threads.
  [#1558](https://github.com/lovell/sharp/issues/1558)

* Use libvips' built-in CMYK and sRGB profiles when required.
  [#1619](https://github.com/lovell/sharp/issues/1619)

* Drop support for Node.js versions 6 and 11.
  [#1674](https://github.com/lovell/sharp/issues/1674)

* Expose `skipBlanks` option for tile-based output.
  [#1687](https://github.com/lovell/sharp/pull/1687)
  [@RaboliotTheGrey](https://github.com/RaboliotTheGrey)

* Allow use of `failOnError` option with Stream-based input.
  [#1691](https://github.com/lovell/sharp/issues/1691)

* Fix rotate/extract ordering for non-90 angles.
  [#1755](https://github.com/lovell/sharp/pull/1755)
  [@iovdin](https://github.com/iovdin)

## v0.22 - "*uptake*"

Requires libvips v8.7.4.

### v0.22.1 - 25<sup>th</sup> April 2019

* Add `modulate` operation for brightness, saturation and hue.
  [#1601](https://github.com/lovell/sharp/pull/1601)
  [@Goues](https://github.com/Goues)

* Improve help messaging should `require("sharp")` fail.
  [#1638](https://github.com/lovell/sharp/pull/1638)
  [@sidharthachatterjee](https://github.com/sidharthachatterjee)

* Add support for Node 12.
  [#1668](https://github.com/lovell/sharp/issues/1668)

### v0.22.0 - 18<sup>th</sup> March 2019

* Remove functions previously deprecated in v0.21.0:
    `background`, `crop`, `embed`, `ignoreAspectRatio`, `max`, `min` and `withoutEnlargement`.

* Add `composite` operation supporting multiple images and blend modes; deprecate `overlayWith`.
  [#728](https://github.com/lovell/sharp/issues/728)

* Add support for `pages` input option for multi-page input.
  [#1566](https://github.com/lovell/sharp/issues/1566)

* Allow Stream-based input of raw pixel data.
  [#1579](https://github.com/lovell/sharp/issues/1579)

* Add support for `page` input option to GIF and PDF.
  [#1595](https://github.com/lovell/sharp/pull/1595)
  [@ramiel](https://github.com/ramiel)

## v0.21 - "*teeth*"

Requires libvips v8.7.0.

### v0.21.3 - 19<sup>th</sup> January 2019

* Input image decoding now fails fast, set `failOnError` to change this behaviour.

* Failed filesystem-based input now separates missing file and invalid format errors.
  [#1542](https://github.com/lovell/sharp/issues/1542)

### v0.21.2 - 13<sup>th</sup> January 2019

* Ensure all metadata is removed from PNG output unless `withMetadata` used.

* Ensure shortest edge is at least one pixel after resizing.
  [#1003](https://github.com/lovell/sharp/issues/1003)

* Add `ensureAlpha` operation to add an alpha channel, if missing.
  [#1153](https://github.com/lovell/sharp/issues/1153)

* Expose `pages` and `pageHeight` metadata for multi-page input images.
  [#1205](https://github.com/lovell/sharp/issues/1205)

* Expose PNG output options requiring libimagequant.
  [#1484](https://github.com/lovell/sharp/issues/1484)

* Expose underlying error message for invalid input.
  [#1505](https://github.com/lovell/sharp/issues/1505)

* Prevent mutatation of options passed to `jpeg`.
  [#1516](https://github.com/lovell/sharp/issues/1516)

* Ensure forced output format applied correctly when output chaining.
  [#1528](https://github.com/lovell/sharp/issues/1528)

### v0.21.1 - 7<sup>th</sup> December 2018

* Install: support `sharp_dist_base_url` npm config, like existing `SHARP_DIST_BASE_URL`.
  [#1422](https://github.com/lovell/sharp/pull/1422)
  [@SethWen](https://github.com/SethWen)

* Ensure `channel` metadata is correct for raw, greyscale output.
  [#1425](https://github.com/lovell/sharp/issues/1425)

* Add support for the "mitchell" kernel for image reductions.
  [#1438](https://github.com/lovell/sharp/pull/1438)
  [@Daiz](https://github.com/Daiz)

* Allow separate parameters for gamma encoding and decoding.
  [#1439](https://github.com/lovell/sharp/pull/1439)
  [@Daiz](https://github.com/Daiz)

* Build prototype with `Object.assign` to allow minification.
  [#1475](https://github.com/lovell/sharp/pull/1475)
  [@jaubourg](https://github.com/jaubourg)

* Expose libvips' recombination matrix operation.
  [#1477](https://github.com/lovell/sharp/pull/1477)
  [@fromkeith](https://github.com/fromkeith)

* Expose libvips' pyramid/tile options for TIFF output.
  [#1483](https://github.com/lovell/sharp/pull/1483)
  [@mbklein](https://github.com/mbklein)

### v0.21.0 - 4<sup>th</sup> October 2018

* Deprecate the following resize-related functions:
    `crop`, `embed`, `ignoreAspectRatio`, `max`, `min` and `withoutEnlargement`.
  Access to these is now via options passed to the `resize` function.
  For example:
    `embed('north')` is now `resize(width, height, { fit: 'contain', position: 'north' })`,
    `crop('attention')` is now `resize(width, height, { fit: 'cover', position: 'attention' })`,
    `max().withoutEnlargement()` is now `resize(width, height, { fit: 'inside', withoutEnlargement: true })`.
  [#1135](https://github.com/lovell/sharp/issues/1135)

* Deprecate the `background` function.
    Per-operation `background` options added to `resize`, `extend` and `flatten` operations.
  [#1392](https://github.com/lovell/sharp/issues/1392)

* Add `size` to `metadata` response (Stream and Buffer input only).
  [#695](https://github.com/lovell/sharp/issues/695)

* Switch from custom trim operation to `vips_find_trim`.
  [#914](https://github.com/lovell/sharp/issues/914)

* Add `chromaSubsampling` and `isProgressive` properties to `metadata` response.
  [#1186](https://github.com/lovell/sharp/issues/1186)

* Drop Node 4 support.
  [#1212](https://github.com/lovell/sharp/issues/1212)

* Enable SIMD convolution by default.
  [#1213](https://github.com/lovell/sharp/issues/1213)

* Add experimental prebuilt binaries for musl-based Linux.
  [#1379](https://github.com/lovell/sharp/issues/1379)

* Add support for arbitrary rotation angle via vips_rotate.
  [#1385](https://github.com/lovell/sharp/pull/1385)
  [@freezy](https://github.com/freezy)

## v0.20 - "*prebuild*"

Requires libvips v8.6.1.

### v0.20.8 - 5<sup>th</sup> September 2018

* Avoid race conditions when creating directories during installation.
  [#1358](https://github.com/lovell/sharp/pull/1358)
  [@ajhool](https://github.com/ajhool)

* Accept floating point values for input density parameter.
  [#1362](https://github.com/lovell/sharp/pull/1362)
  [@aeirola](https://github.com/aeirola)

### v0.20.7 - 21<sup>st</sup> August 2018

* Use copy+unlink if rename operation fails during installation.
  [#1345](https://github.com/lovell/sharp/issues/1345)

### v0.20.6 - 20<sup>th</sup> August 2018

* Add removeAlpha operation to remove alpha channel, if any.
  [#1248](https://github.com/lovell/sharp/issues/1248)

* Expose mozjpeg quant_table flag.
  [#1285](https://github.com/lovell/sharp/pull/1285)
  [@rexxars](https://github.com/rexxars)

* Allow full WebP alphaQuality range of 0-100.
  [#1290](https://github.com/lovell/sharp/pull/1290)
  [@sylvaindumont](https://github.com/sylvaindumont)

* Cache libvips binaries to reduce re-install time.
  [#1301](https://github.com/lovell/sharp/issues/1301)

* Ensure vendor platform mismatch throws error at install time.
  [#1303](https://github.com/lovell/sharp/issues/1303)

* Improve install time error messages for FreeBSD users.
  [#1310](https://github.com/lovell/sharp/issues/1310)

* Ensure extractChannel works with 16-bit images.
  [#1330](https://github.com/lovell/sharp/issues/1330)

* Expose depth option for tile-based output.
  [#1342](https://github.com/lovell/sharp/pull/1342)
  [@alundavies](https://github.com/alundavies)

* Add experimental entropy field to stats response.

### v0.20.5 - 27<sup>th</sup> June 2018

* Expose libjpeg optimize_coding flag.
  [#1265](https://github.com/lovell/sharp/pull/1265)
  [@tomlokhorst](https://github.com/tomlokhorst)

### v0.20.4 - 20<sup>th</sup> June 2018

* Prevent possible rounding error when using shrink-on-load and 90/270 degree rotation.
  [#1241](https://github.com/lovell/sharp/issues/1241)
  [@anahit42](https://github.com/anahit42)

* Ensure extractChannel sets correct single-channel colour space interpretation.
  [#1257](https://github.com/lovell/sharp/issues/1257)
  [@jeremychone](https://github.com/jeremychone)

### v0.20.3 - 29<sup>th</sup> May 2018

* Fix tint operation by ensuring LAB interpretation and allowing negative values.
  [#1235](https://github.com/lovell/sharp/issues/1235)
  [@wezside](https://github.com/wezside)

### v0.20.2 - 28<sup>th</sup> April 2018

* Add tint operation to set image chroma.
  [#825](https://github.com/lovell/sharp/pull/825)
  [@rikh42](https://github.com/rikh42)

* Add environment variable to ignore globally-installed libvips.
  [#1165](https://github.com/lovell/sharp/pull/1165)
  [@oncletom](https://github.com/oncletom)

* Add support for page selection with multi-page input (GIF/TIFF).
  [#1204](https://github.com/lovell/sharp/pull/1204)
  [@woolite64](https://github.com/woolite64)

* Add support for Group4 (CCITTFAX4) compression with TIFF output.
  [#1208](https://github.com/lovell/sharp/pull/1208)
  [@woolite64](https://github.com/woolite64)

### v0.20.1 - 17<sup>th</sup> March 2018

* Improve installation experience when a globally-installed libvips below the minimum required version is found.
  [#1148](https://github.com/lovell/sharp/issues/1148)

* Prevent smartcrop error when cumulative rounding is below target size.
  [#1154](https://github.com/lovell/sharp/issues/1154)
  [@ralrom](https://github.com/ralrom)

* Expose libvips' median filter operation.
  [#1161](https://github.com/lovell/sharp/pull/1161)
  [@BiancoA](https://github.com/BiancoA)

### v0.20.0 - 5<sup>th</sup> March 2018

* Add support for prebuilt sharp binaries on common platforms.
  [#186](https://github.com/lovell/sharp/issues/186)

## v0.19 - "*suit*"

Requires libvips v8.6.1.

### v0.19.1 - 24<sup>th</sup> February 2018

* Expose libvips' linear transform feature.
  [#1024](https://github.com/lovell/sharp/pull/1024)
  [@3epnm](https://github.com/3epnm)

* Expose angle option for tile-based output.
  [#1121](https://github.com/lovell/sharp/pull/1121)
  [@BiancoA](https://github.com/BiancoA)

* Prevent crop operation when image already at or below target dimensions.
  [#1134](https://github.com/lovell/sharp/issues/1134)
  [@pieh](https://github.com/pieh)

### v0.19.0 - 11<sup>th</sup> January 2018

* Expose offset coordinates of strategy-based crop.
  [#868](https://github.com/lovell/sharp/issues/868)
  [@mirohristov-com](https://github.com/mirohristov-com)

* PNG output now defaults to adaptiveFiltering=false, compressionLevel=9
  [#872](https://github.com/lovell/sharp/issues/872)
  [@wmertens](https://github.com/wmertens)

* Add stats feature for pixel-derived image statistics.
  [#915](https://github.com/lovell/sharp/pull/915)
  [@rnanwani](https://github.com/rnanwani)

* Add failOnError option to fail-fast on bad input image data.
  [#976](https://github.com/lovell/sharp/pull/976)
  [@mceachen](https://github.com/mceachen)

* Resize: switch to libvips' implementation, make fastShrinkOnLoad optional, remove interpolator and centreSampling options.
  [#977](https://github.com/lovell/sharp/pull/977)
  [@jardakotesovec](https://github.com/jardakotesovec)

* Attach finish event listener to a clone only for Stream-based input.
  [#995](https://github.com/lovell/sharp/issues/995)
  [@whmountains](https://github.com/whmountains)

* Add tilecache before smartcrop to avoid over-computation of previous operations.
  [#1028](https://github.com/lovell/sharp/issues/1028)
  [@coffeebite](https://github.com/coffeebite)

* Prevent toFile extension taking precedence over requested format.
  [#1037](https://github.com/lovell/sharp/issues/1037)
  [@tomgallagher](https://github.com/tomgallagher)

* Add support for gravity option to existing embed feature.
  [#1038](https://github.com/lovell/sharp/pull/1038)
  [@AzureByte](https://github.com/AzureByte)

* Expose IPTC and XMP metadata when available.
  [#1079](https://github.com/lovell/sharp/pull/1079)
  [@oaleynik](https://github.com/oaleynik)

* TIFF output: switch default predictor from 'none' to 'horizontal' to match libvips' behaviour.

## v0.18 - "*ridge*"

Requires libvips v8.5.5.

### v0.18.4 - 18<sup>th</sup> September 2017

* Ensure input Buffer really is marked as Persistent, prevents mark-sweep GC.
  [#950](https://github.com/lovell/sharp/issues/950)
  [@lfdoherty](https://github.com/lfdoherty)

### v0.18.3 - 13<sup>th</sup> September 2017

* Skip shrink-on-load when trimming.
  [#888](https://github.com/lovell/sharp/pull/888)
  [@kleisauke](https://github.com/kleisauke)

* Migrate from got to simple-get for basic auth support.
  [#945](https://github.com/lovell/sharp/pull/945)
  [@pbomb](https://github.com/pbomb)

### v0.18.2 - 1<sup>st</sup> July 2017

* Expose libvips' xres and yres properties for TIFF output.
  [#828](https://github.com/lovell/sharp/pull/828)
  [@YvesBos](https://github.com/YvesBos)

* Ensure flip and flop operations work with auto-rotate.
  [#837](https://github.com/lovell/sharp/issues/837)
  [@rexxars](https://github.com/rexxars)

* Allow binary download URL override via SHARP_DIST_BASE_URL env variable.
  [#841](https://github.com/lovell/sharp/issues/841)

* Add support for Solus Linux.
  [#857](https://github.com/lovell/sharp/pull/857)
  [@ekremkaraca](https://github.com/ekremkaraca)

### v0.18.1 - 30<sup>th</sup> May 2017

* Remove regression from #781 that could cause incorrect shrink calculation.
  [#831](https://github.com/lovell/sharp/issues/831)
  [@suprMax](https://github.com/suprMax)

### v0.18.0 - 30<sup>th</sup> May 2017

* Remove the previously-deprecated output format "option" functions:
    quality, progressive, compressionLevel, withoutAdaptiveFiltering,
    withoutChromaSubsampling, trellisQuantisation, trellisQuantization,
    overshootDeringing, optimiseScans and optimizeScans.

* Ensure maximum output dimensions are based on the format to be used.
  [#176](https://github.com/lovell/sharp/issues/176)
  [@stephanebachelier](https://github.com/stephanebachelier)

* Avoid costly (un)premultiply when using overlayWith without alpha channel.
  [#573](https://github.com/lovell/sharp/issues/573)
  [@strarsis](https://github.com/strarsis)

* Include pixel depth (e.g. "uchar") when reading metadata.
  [#577](https://github.com/lovell/sharp/issues/577)
  [@moedusa](https://github.com/moedusa)

* Add support for Buffer and Stream-based TIFF output.
  [#587](https://github.com/lovell/sharp/issues/587)
  [@strarsis](https://github.com/strarsis)

* Expose warnings from libvips via NODE_DEBUG=sharp environment variable.
  [#607](https://github.com/lovell/sharp/issues/607)
  [@puzrin](https://github.com/puzrin)

* Switch to the libvips implementation of "attention" and "entropy" crop strategies.
  [#727](https://github.com/lovell/sharp/issues/727)

* Improve performance and accuracy of nearest neighbour integral upsampling.
  [#752](https://github.com/lovell/sharp/issues/752)
  [@MrIbby](https://github.com/MrIbby)

* Constructor single argument API: allow plain object, reject null/undefined.
  [#768](https://github.com/lovell/sharp/issues/768)
  [@kub1x](https://github.com/kub1x)

* Ensure ARM64 pre-built binaries use correct C++11 ABI version.
  [#772](https://github.com/lovell/sharp/issues/772)
  [@ajiratech2](https://github.com/ajiratech2)

* Prevent aliasing by using dynamic values for shrink(-on-load).
  [#781](https://github.com/lovell/sharp/issues/781)
  [@kleisauke](https://github.com/kleisauke)

* Expose libvips' "squash" parameter to enable 1-bit TIFF output.
  [#783](https://github.com/lovell/sharp/pull/783)
  [@YvesBos](https://github.com/YvesBos)

* Add support for rotation using any multiple of +/-90 degrees.
  [#791](https://github.com/lovell/sharp/pull/791)
  [@ncoden](https://github.com/ncoden)

* Add "jpg" alias to toFormat as shortened form of "jpeg".
  [#814](https://github.com/lovell/sharp/pull/814)
  [@jingsam](https://github.com/jingsam)

## v0.17 - "*quill*"

Requires libvips v8.4.2.

### v0.17.3 - 1<sup>st</sup> April 2017

* Allow toBuffer to optionally resolve a Promise with both info and data.
  [#143](https://github.com/lovell/sharp/issues/143)
  [@salzhrani](https://github.com/salzhrani)

* Create blank image of given width, height, channels and background.
  [#470](https://github.com/lovell/sharp/issues/470)
  [@pjarts](https://github.com/pjarts)

* Add support for the "nearest" kernel for image reductions.
  [#732](https://github.com/lovell/sharp/pull/732)
  [@alice0meta](https://github.com/alice0meta)

* Add support for TIFF compression and predictor options.
  [#738](https://github.com/lovell/sharp/pull/738)
  [@kristojorg](https://github.com/kristojorg)

### v0.17.2 - 11<sup>th</sup> February 2017

* Ensure Readable side of Stream can start flowing after Writable side has finished.
  [#671](https://github.com/lovell/sharp/issues/671)
  [@danhaller](https://github.com/danhaller)

* Expose WebP alpha quality, lossless and near-lossless output options.
  [#685](https://github.com/lovell/sharp/pull/685)
  [@rnanwani](https://github.com/rnanwani)

### v0.17.1 - 15<sup>th</sup> January 2017

* Improve error messages for invalid parameters.
  [@spikeon](https://github.com/spikeon)
  [#644](https://github.com/lovell/sharp/pull/644)

* Simplify expression for finding vips-cpp libdir.
  [#656](https://github.com/lovell/sharp/pull/656)

* Allow HTTPS-over-HTTP proxy when downloading pre-compiled dependencies.
  [@wangzhiwei1888](https://github.com/wangzhiwei1888)
  [#679](https://github.com/lovell/sharp/issues/679)

### v0.17.0 - 11<sup>th</sup> December 2016

* Drop support for versions of Node prior to v4.

* Deprecate the following output format "option" functions:
    quality, progressive, compressionLevel, withoutAdaptiveFiltering,
    withoutChromaSubsampling, trellisQuantisation, trellisQuantization,
    overshootDeringing, optimiseScans and optimizeScans.
  Access to these is now via output format functions, for example `quality(n)`
    is now `jpeg({quality: n})` and/or `webp({quality: n})`.

* Autoconvert GIF and SVG input to PNG output if no other format is specified.

* Expose libvips' "centre" resize option to mimic \*magick's +0.5px convention.
  [#568](https://github.com/lovell/sharp/issues/568)

* Ensure support for embedded base64 PNG and JPEG images within an SVG.
  [#601](https://github.com/lovell/sharp/issues/601)
  [@dynamite-ready](https://github.com/dynamite-ready)

* Ensure premultiply operation occurs before box filter shrink.
  [#605](https://github.com/lovell/sharp/issues/605)
  [@CmdrShepardsPie](https://github.com/CmdrShepardsPie)
  [@teroparvinen](https://github.com/teroparvinen)

* Add support for PNG and WebP tile-based output formats (in addition to JPEG).
  [#622](https://github.com/lovell/sharp/pull/622)
  [@ppaskaris](https://github.com/ppaskaris)

* Allow use of extend with greyscale input.
  [#623](https://github.com/lovell/sharp/pull/623)
  [@ppaskaris](https://github.com/ppaskaris)

* Allow non-RGB input to embed/extend onto background with an alpha channel.
  [#646](https://github.com/lovell/sharp/issues/646)
  [@DaGaMs](https://github.com/DaGaMs)

## v0.16 - "*pencil*"

Requires libvips v8.3.3

### v0.16.2 - 22<sup>nd</sup> October 2016

* Restrict readelf usage to Linux only when detecting global libvips version.
  [#602](https://github.com/lovell/sharp/issues/602)
  [@caoko](https://github.com/caoko)

### v0.16.1 - 13<sup>th</sup> October 2016

* C++11 ABI version is now auto-detected, remove sharp-cxx11 installation flag.

* Add experimental 'attention' crop strategy.
  [#295](https://github.com/lovell/sharp/issues/295)

* Include .node extension for Meteor's require() implementation.
  [#537](https://github.com/lovell/sharp/issues/537)
  [@isjackwild](https://github.com/isjackwild)

* Ensure convolution kernel scale is clamped to a minimum value of 1.
  [#561](https://github.com/lovell/sharp/issues/561)
  [@abagshaw](https://github.com/abagshaw)

* Correct calculation of y-axis placement when overlaying image at a fixed point.
  [#566](https://github.com/lovell/sharp/issues/566)
  [@Nateowami](https://github.com/Nateowami)

### v0.16.0 - 18<sup>th</sup> August 2016

* Add pre-compiled libvips for OS X, ARMv7 and ARMv8.
  [#312](https://github.com/lovell/sharp/issues/312)

* Ensure boolean, bandbool, extractChannel ops occur before sRGB conversion.
  [#504](https://github.com/lovell/sharp/pull/504)
  [@mhirsch](https://github.com/mhirsch)

* Recalculate factors after WebP shrink-on-load to avoid round-to-zero errors.
  [#508](https://github.com/lovell/sharp/issues/508)
  [@asilvas](https://github.com/asilvas)

* Prevent boolean errors during extract operation.
  [#511](https://github.com/lovell/sharp/pull/511)
  [@mhirsch](https://github.com/mhirsch)

* Add joinChannel and toColourspace/toColorspace operations.
  [#513](https://github.com/lovell/sharp/pull/513)
  [@mhirsch](https://github.com/mhirsch)

* Add support for raw pixel data with boolean and withOverlay operations.
  [#516](https://github.com/lovell/sharp/pull/516)
  [@mhirsch](https://github.com/mhirsch)

* Prevent bandbool creating a single channel sRGB image.
  [#519](https://github.com/lovell/sharp/pull/519)
  [@mhirsch](https://github.com/mhirsch)

* Ensure ICC profiles are removed from PNG output unless withMetadata used.
  [#521](https://github.com/lovell/sharp/issues/521)
  [@ChrisPinewood](https://github.com/ChrisPinewood)

* Add alpha channels, if missing, to overlayWith images.
  [#540](https://github.com/lovell/sharp/pull/540)
  [@cmtt](https://github.com/cmtt)

* Remove deprecated interpolateWith method - use resize(w, h, { interpolator: ... })
  [#310](https://github.com/lovell/sharp/issues/310)

## v0.15 - "*outfit*"

Requires libvips v8.3.1

### v0.15.1 - 12<sup>th</sup> July 2016

* Concat Stream-based input in single operation for ~+3% perf and less GC.
  [#429](https://github.com/lovell/sharp/issues/429)
  [@papandreou](https://github.com/papandreou)

* Add alpha channel, if required, before extend operation.
  [#439](https://github.com/lovell/sharp/pull/439)
  [@frulo](https://github.com/frulo)

* Allow overlay image to be repeated across entire image via tile option.
  [#443](https://github.com/lovell/sharp/pull/443)
  [@lemnisk8](https://github.com/lemnisk8)

* Add cutout option to overlayWith feature, applies only the alpha channel of the overlay image.
  [#448](https://github.com/lovell/sharp/pull/448)
  [@kleisauke](https://github.com/kleisauke)

* Ensure scaling factors are calculated independently to prevent rounding errors.
  [#452](https://github.com/lovell/sharp/issues/452)
  [@puzrin](https://github.com/puzrin)

* Add --sharp-cxx11 flag to compile with gcc's new C++11 ABI.
  [#456](https://github.com/lovell/sharp/pull/456)
  [@kapouer](https://github.com/kapouer)

* Add top/left offset support to overlayWith operation.
  [#473](https://github.com/lovell/sharp/pull/473)
  [@rnanwani](https://github.com/rnanwani)

* Add convolve operation for kernel-based convolution.
  [#479](https://github.com/lovell/sharp/pull/479)
  [@mhirsch](https://github.com/mhirsch)

* Add greyscale option to threshold operation for colourspace conversion control.
  [#480](https://github.com/lovell/sharp/pull/480)
  [@mhirsch](https://github.com/mhirsch)

* Ensure ICC profiles are licenced for distribution.
  [#486](https://github.com/lovell/sharp/issues/486)
  [@kapouer](https://github.com/kapouer)

* Allow images with an alpha channel to work with LAB-colourspace based sharpen.
  [#490](https://github.com/lovell/sharp/issues/490)
  [@jwagner](https://github.com/jwagner)

* Add trim operation to remove "boring" edges.
  [#492](https://github.com/lovell/sharp/pull/492)
  [@kleisauke](https://github.com/kleisauke)

* Add bandbool feature for channel-wise boolean operations.
  [#496](https://github.com/lovell/sharp/pull/496)
  [@mhirsch](https://github.com/mhirsch)

* Add extractChannel operation to extract a channel from an image.
  [#497](https://github.com/lovell/sharp/pull/497)
  [@mhirsch](https://github.com/mhirsch)

* Add ability to read and write native libvips .v files.
  [#500](https://github.com/lovell/sharp/pull/500)
  [@mhirsch](https://github.com/mhirsch)

* Add boolean feature for bitwise image operations.
  [#501](https://github.com/lovell/sharp/pull/501)
  [@mhirsch](https://github.com/mhirsch)

### v0.15.0 - 21<sup>st</sup> May 2016

* Use libvips' new Lanczos 3 kernel as default for image reduction.
  Deprecate interpolateWith method, now provided as a resize option.
  [#310](https://github.com/lovell/sharp/issues/310)
  [@jcupitt](https://github.com/jcupitt)

* Take advantage of libvips v8.3 features.
  Add support for libvips' new GIF and SVG loaders.
  Pre-built binaries now include giflib and librsvg, exclude *magick.
  Use shrink-on-load for WebP input.
  Break existing sharpen API to accept sigma and improve precision.
  [#369](https://github.com/lovell/sharp/issues/369)

* Remove unnecessary (un)premultiply operations when not resizing/compositing.
  [#413](https://github.com/lovell/sharp/issues/413)
  [@jardakotesovec](https://github.com/jardakotesovec)

## v0.14 - "*needle*"

Requires libvips v8.2.3

### v0.14.1 - 16<sup>th</sup> April 2016

* Allow removal of limitation on input pixel count via limitInputPixels. Use with care.
  [#250](https://github.com/lovell/sharp/issues/250)
  [#316](https://github.com/lovell/sharp/pull/316)
  [@anandthakker](https://github.com/anandthakker)
  [@kentongray](https://github.com/kentongray)

* Use final output image for metadata passed to callback.
  [#399](https://github.com/lovell/sharp/pull/399)
  [@salzhrani](https://github.com/salzhrani)

* Add support for writing tiled images to a zip container.
  [#402](https://github.com/lovell/sharp/pull/402)
  [@felixbuenemann](https://github.com/felixbuenemann)

* Allow use of embed with 1 and 2 channel images.
  [#411](https://github.com/lovell/sharp/issues/411)
  [@janaz](https://github.com/janaz)

* Improve Electron compatibility by allowing node-gyp rebuilds without npm.
  [#412](https://github.com/lovell/sharp/issues/412)
  [@nouh](https://github.com/nouh)

### v0.14.0 - 2<sup>nd</sup> April 2016

* Add ability to extend (pad) the edges of an image.
  [#128](https://github.com/lovell/sharp/issues/128)
  [@blowsie](https://github.com/blowsie)

* Add support for Zoomify and Google tile layouts. Breaks existing tile API.
  [#223](https://github.com/lovell/sharp/issues/223)
  [@bdunnette](https://github.com/bdunnette)

* Improvements to overlayWith: differing sizes/formats, gravity, buffer input.
  [#239](https://github.com/lovell/sharp/issues/239)
  [@chrisriley](https://github.com/chrisriley)

* Add entropy-based crop strategy to remove least interesting edges.
  [#295](https://github.com/lovell/sharp/issues/295)
  [@rightaway](https://github.com/rightaway)

* Expose density metadata; set density of images from vector input.
  [#338](https://github.com/lovell/sharp/issues/338)
  [@lookfirst](https://github.com/lookfirst)

* Emit post-processing 'info' event for Stream output.
  [#367](https://github.com/lovell/sharp/issues/367)
  [@salzhrani](https://github.com/salzhrani)

* Ensure output image EXIF Orientation values are within 1-8 range.
  [#385](https://github.com/lovell/sharp/pull/385)
  [@jtobinisaniceguy](https://github.com/jtobinisaniceguy)

* Ensure ratios are not swapped when rotating 90/270 and ignoring aspect.
  [#387](https://github.com/lovell/sharp/issues/387)
  [@kleisauke](https://github.com/kleisauke)

* Remove deprecated style of calling extract API. Breaks calls using positional arguments.
  [#276](https://github.com/lovell/sharp/issues/276)

## v0.13 - "*mind*"

Requires libvips v8.2.2

### v0.13.1 - 27<sup>th</sup> February 2016

* Fix embedding onto transparent backgrounds; regression introduced in v0.13.0.
  [#366](https://github.com/lovell/sharp/issues/366)
  [@diegocsandrim](https://github.com/diegocsandrim)

### v0.13.0 - 15<sup>th</sup> February 2016

* Improve vector image support by allowing control of density/DPI.
  Switch pre-built libs from Imagemagick to Graphicsmagick.
  [#110](https://github.com/lovell/sharp/issues/110)
  [@bradisbell](https://github.com/bradisbell)

* Add support for raw, uncompressed pixel Buffer/Stream input.
  [#220](https://github.com/lovell/sharp/issues/220)
  [@mikemorris](https://github.com/mikemorris)

* Switch from libvips' C to C++ bindings, requires upgrade to v8.2.2.
  [#299](https://github.com/lovell/sharp/issues/299)

* Control number of open files in libvips' cache; breaks existing `cache` behaviour.
  [#315](https://github.com/lovell/sharp/issues/315)
  [@impomezia](https://github.com/impomezia)

* Ensure 16-bit input images can be normalised and embedded onto transparent backgrounds.
  [#339](https://github.com/lovell/sharp/issues/339)
  [#340](https://github.com/lovell/sharp/issues/340)
  [@janaz](https://github.com/janaz)

* Ensure selected format takes precedence over any unknown output filename extension.
  [#344](https://github.com/lovell/sharp/issues/344)
  [@ubaltaci](https://github.com/ubaltaci)

* Add support for libvips' PBM, PGM, PPM and FITS image format loaders.
  [#347](https://github.com/lovell/sharp/issues/347)
  [@oaleynik](https://github.com/oaleynik)

* Ensure default crop gravity is center/centre.
  [#351](https://github.com/lovell/sharp/pull/351)
  [@joelmukuthu](https://github.com/joelmukuthu)

* Improve support for musl libc systems e.g. Alpine Linux.
  [#354](https://github.com/lovell/sharp/issues/354)
  [#359](https://github.com/lovell/sharp/pull/359)
  [@download13](https://github.com/download13)
  [@wjordan](https://github.com/wjordan)

* Small optimisation when reducing by an integral factor to favour shrink over affine.

* Add support for gamma correction of images with an alpha channel.

## v0.12 - "*look*"

Requires libvips v8.2.0

### v0.12.2 - 16<sup>th</sup> January 2016

* Upgrade libvips to v8.2.0 for improved vips_shrink.

* Add pre-compiled libvips for ARMv6+ CPUs.

* Ensure 16-bit input images work with embed option.
  [#325](https://github.com/lovell/sharp/issues/325)
  [@janaz](https://github.com/janaz)

* Allow compilation with gmake to provide FreeBSD support.
  [#326](https://github.com/lovell/sharp/issues/326)
  [@c0decafe](https://github.com/c0decafe)

* Attempt to remove temporary file after installation.
  [#331](https://github.com/lovell/sharp/issues/331)
  [@dtoubelis](https://github.com/dtoubelis)

### v0.12.1 - 12<sup>th</sup> December 2015

* Allow use of SIMD vector instructions (via liborc) to be toggled on/off.
  [#172](https://github.com/lovell/sharp/issues/172)
  [@bkw](https://github.com/bkw)
  [@puzrin](https://github.com/puzrin)

* Ensure embedded ICC profiles output with perceptual intent.
  [#321](https://github.com/lovell/sharp/issues/321)
  [@vlapo](https://github.com/vlapo)

* Use the NPM-configured HTTPS proxy, if any, for binary downloads.

### v0.12.0 - 23<sup>rd</sup> November 2015

* Bundle pre-compiled libvips and its dependencies for 64-bit Linux and Windows.
  [#42](https://github.com/lovell/sharp/issues/42)

* Take advantage of libvips v8.1.0+ features.
  [#152](https://github.com/lovell/sharp/issues/152)

* Add support for 64-bit Windows. Drop support for 32-bit Windows.
  [#224](https://github.com/lovell/sharp/issues/224)
  [@sabrehagen](https://github.com/sabrehagen)

* Switch default interpolator to bicubic.
  [#289](https://github.com/lovell/sharp/issues/289)
  [@mahnunchik](https://github.com/mahnunchik)

* Pre-extract rotatation should not swap width/height.
  [#296](https://github.com/lovell/sharp/issues/296)
  [@asilvas](https://github.com/asilvas)

* Ensure 16-bit+alpha input images are (un)premultiplied correctly.
  [#301](https://github.com/lovell/sharp/issues/301)
  [@izaakschroeder](https://github.com/izaakschroeder)

* Add `threshold` operation.
  [#303](https://github.com/lovell/sharp/pull/303)
  [@dacarley](https://github.com/dacarley)

* Add `negate` operation.
  [#306](https://github.com/lovell/sharp/pull/306)
  [@dacarley](https://github.com/dacarley)

* Support `options` Object with existing `extract` operation.
  [#309](https://github.com/lovell/sharp/pull/309)
  [@papandreou](https://github.com/papandreou)

## v0.11 - "*knife*"

### v0.11.4 - 5<sup>th</sup> November 2015

* Add corners, e.g. `northeast`, to existing `gravity` option.
  [#291](https://github.com/lovell/sharp/pull/291)
  [@brandonaaron](https://github.com/brandonaaron)

* Ensure correct auto-rotation for EXIF Orientation values 2 and 4.
  [#288](https://github.com/lovell/sharp/pull/288)
  [@brandonaaron](https://github.com/brandonaaron)

* Make static linking possible via `--runtime_link` install option.
  [#287](https://github.com/lovell/sharp/pull/287)
  [@vlapo](https://github.com/vlapo)

### v0.11.3 - 8<sup>th</sup> September 2015

* Intrepret blurSigma, sharpenFlat, and sharpenJagged as double precision.
  [#263](https://github.com/lovell/sharp/pull/263)
  [@chrisriley](https://github.com/chrisriley)

### v0.11.2 - 28<sup>th</sup> August 2015

* Allow crop gravity to be provided as a String.
  [#255](https://github.com/lovell/sharp/pull/255)
  [@papandreou](https://github.com/papandreou)
* Add support for io.js v3 and Node v4.
  [#246](https://github.com/lovell/sharp/issues/246)

### v0.11.1 - 12<sup>th</sup> August 2015

* Silence MSVC warning: "C4530: C++ exception handler used, but unwind semantics are not enabled".
  [#244](https://github.com/lovell/sharp/pull/244)
  [@TheThing](https://github.com/TheThing)

* Suppress gamma correction for input image with alpha transparency.
  [#249](https://github.com/lovell/sharp/issues/249)
  [@compeak](https://github.com/compeak)

### v0.11.0 - 15<sup>th</sup> July 2015

* Allow alpha transparency compositing via new `overlayWith` method.
  [#97](https://github.com/lovell/sharp/issues/97)
  [@gasi](https://github.com/gasi)

* Expose raw ICC profile data as a Buffer when using `metadata`.
  [#129](https://github.com/lovell/sharp/issues/129)
  [@homerjam](https://github.com/homerjam)

* Allow image header updates via a parameter passed to existing `withMetadata` method.
  Provide initial support for EXIF `Orientation` tag,
  which if present is now removed when using `rotate`, `flip` or `flop`.
  [#189](https://github.com/lovell/sharp/issues/189)
  [@h2non](https://github.com/h2non)

* Tighten constructor parameter checks.
  [#221](https://github.com/lovell/sharp/issues/221)
  [@mikemorris](https://github.com/mikemorris)

* Allow one input Stream to be shared with two or more output Streams via new `clone` method.
  [#235](https://github.com/lovell/sharp/issues/235)
  [@jaubourg](https://github.com/jaubourg)

* Use `round` instead of `floor` when auto-scaling dimensions to avoid floating-point rounding errors.
  [#238](https://github.com/lovell/sharp/issues/238)
  [@richardadjogah](https://github.com/richardadjogah)

## v0.10 - "*judgment*"

### v0.10.1 - 1<sup>st</sup> June 2015

* Allow embed of image with alpha transparency onto non-transparent background.
  [#204](https://github.com/lovell/sharp/issues/204)
  [@mikemliu](https://github.com/mikemliu)

* Include C standard library for `atoi` as Xcode 6.3 appears to no longer do this.
  [#228](https://github.com/lovell/sharp/issues/228)
  [@doggan](https://github.com/doggan)

### v0.10.0 - 23<sup>rd</sup> April 2015

* Add support for Windows (x86).
  [#19](https://github.com/lovell/sharp/issues/19)
  [@DullReferenceException](https://github.com/DullReferenceException)
  [@itsananderson](https://github.com/itsananderson)

* Add support for Openslide input and DeepZoom output.
  [#146](https://github.com/lovell/sharp/issues/146)
  [@mvictoras](https://github.com/mvictoras)

* Allow arbitrary aspect ratios when resizing images via new `ignoreAspectRatio` method.
  [#192](https://github.com/lovell/sharp/issues/192)
  [@skedastik](https://github.com/skedastik)

* Enhance output image contrast by stretching its luminance to cover the full dynamic range via new `normalize` method.
  [#194](https://github.com/lovell/sharp/issues/194)
  [@bkw](https://github.com/bkw)
  [@codingforce](https://github.com/codingforce)
