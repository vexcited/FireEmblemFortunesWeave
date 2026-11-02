# PNG read transformations.

`src/image/png_read.cpp` adapts the read transformation routines from libpng 1.6.37.
The original source is [pngrtran.c](https://github.com/pnggroup/libpng/blob/v1.6.37/pngrtran.c).
The accompanying LICENSE retains the original terms and notices.

The source uses the recovered SDK state layout and exported symbol names.
Feature conditionals are resolved for the observed implementation.
Row size fields use `row_bytes` in the C++ interface.
The original error text is preserved.
Debug macros are removed, integer composition formulas are expanded, and formatting is adjusted.
Palette expansion, byte swapping, and other shared row helpers remain external calls.
