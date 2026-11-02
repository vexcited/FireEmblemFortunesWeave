# PNG palette quantization.

`src/image/png_quantize.cpp` adapts `png_set_quantize` from libpng 1.6.37.
The original source is [pngrtran.c](https://github.com/pnggroup/libpng/blob/v1.6.37/pngrtran.c).
The accompanying LICENSE retains the original terms and notices.

The source uses the recovered SDK field offsets and exported symbol names.
The input-state check is expressed as a local helper.
Quantization uses five bits per color channel.
Feature macros and color-distance macros are resolved, debug macros are removed, and formatting is adjusted.
Allocation and diagnostic functions remain external calls.
