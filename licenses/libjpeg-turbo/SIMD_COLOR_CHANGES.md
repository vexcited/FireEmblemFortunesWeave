This component adapts the RGB and YCbCr color kernels from libjpeg-turbo 1.5.0 jsimd_arm64_neon.S and their dispatch from jsimd_arm64.c.

- Assembly arithmetic is expressed as C++ integer operations.
- The observed coefficients, rounding, saturation, channel layouts, alpha bytes, and RGB565 byte order are preserved.
- Fast and slow load or store variants share the same arithmetic implementation.
- SDK symbol names and observed structure offsets replace upstream ABI declarations.
- The observed feature word starts at seven. Environment-based initialization remains outside this component.
- Instruction scheduling, prefetching, performance, and caller-clobbered FPSR saturation flags are not reproduced.

The original notices and distribution conditions are preserved in SIMD_LICENSE.txt.
