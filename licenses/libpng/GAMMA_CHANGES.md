# PNG gamma table adaptation.

`src/image/png_gamma.cpp` adapts gamma-table construction and destruction from libpng 1.6.37 `png.c`.
The original copyright notices are retained in the source.
The libpng license is in `LICENSE`.

This version uses the recovered SDK state layout and prefixed external symbols.
It includes the observed 8-bit and 16-bit table paths and eleven-bit precision limit for reduced output.
The reciprocal and gamma correction helpers remain external dependencies.
The 16-bit table builder computes its floating-point reciprocal only on the nonlinear path.
The product helper preserves the original ARM64 conversion before the overflow check.
This conversion can set the floating-point invalid flag even when the helper returns zero.
Strict floating-point exception handling is required when compiling this component.
Debug output and unrelated libpng functions are omitted.
