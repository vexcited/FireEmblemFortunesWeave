# Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library for Android.

This tree is the AOSP `external/aac` source at tag `android-7.1.1_r1`, commit `203e3f28fbebec7011342017fafc2a0bda0ce530`, modified on 2026-11-03 to reproduce the Nintendo SDK build. The original license is in `NOTICE`.

Modifications.

- Every `#ifdef __cplusplus` C linkage guard is disabled, so all functions receive C++ linkage.
- `FDK_audio.h` no longer includes `genericStds.h`.
- Android logging includes and `android_errorWriteLog` calls are removed, and `ALOGE` expands to nothing.

Each `src/*.cpp` file is compiled through a wrapper that first includes the C system headers, `machine_type.h` and `FDK_audio.h` at global scope, then includes `genericStds.h` and the source file inside `namespace nn::codec`. This reproduces the SDK symbol names, where the audio enumerations and `LIB_INFO` stay global.
