The JPEG sampling sources adapt libjpeg-turbo 1.5.0 jcsample.c, jdsample.c, jdsample.h, jerror.h, and the downsampling algorithms in simd/jsimd_arm64_neon.S.

The SDK structure views replace upstream declarations. The recovered vertical fancy upsampler and its dispatch branch follow the SDK instructions. The scalar downsampling kernels retain input edge expansion. The SIMD downsampling kernels are expressed as scalar C++ and retain their output padding without modifying input rows. Capability detection remains an external dependency.

The original authors are retained in README.ijg and SIMD_LICENSE.txt. The changes do not claim instruction matching or the original SIMD performance.
