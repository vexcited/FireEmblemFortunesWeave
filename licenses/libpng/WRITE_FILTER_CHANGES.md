# PNG write filter adaptation.

`src/image/png_write_filter.cpp` adapts write-filter selection and row filtering from libpng 1.6.37 `pngwutil.c`.
The original copyright notices are retained in the source.
The libpng license is in `LICENSE`.

This version uses the recovered SDK state layout and prefixed external symbols.
It keeps the filter and flush features observed in the original binary.
Unrelated writing features and debug output are omitted.
The shared row-info field is named `row_bytes`.
Formatting and integer aliases are adapted for this repository.
