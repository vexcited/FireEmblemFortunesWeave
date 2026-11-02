# PNG read initialization.

`src/image/png_read_setup.cpp` adapts the read initialization routines from libpng 1.6.37.
The original source is [pngrtran.c](https://github.com/pnggroup/libpng/blob/v1.6.37/pngrtran.c).
The accompanying LICENSE retains the original terms and notices.

The source uses the recovered SDK state and color-space layouts.
Feature conditionals and integer composition macros are resolved.
Debug macros are removed and formatting is adjusted.
Gamma arithmetic, gamma table construction, color-space coefficient setup, and diagnostics remain external calls.
