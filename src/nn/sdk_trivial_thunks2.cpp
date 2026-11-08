#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 SdkRoutine_e44d0(U64, U64, U32, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_eb350(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_ef9a0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e5400(U64, U64, U32, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f34f0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134780(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134af0(U64, U64, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134260(U64, bool, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85dc20(U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85e380(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1a3ba0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1b7170(U64, U64, bool, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1b9510(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ba4b0(U64, U64, U32, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1bfbe0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1bfdb0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1d98f4(U64, U64, U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1977c0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_4912a0(U64, U64, U64, U32, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_197230(U64, U64, U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_491410(U64, U64, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_195ab0(U64, U64, U64, U32, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_19bd50(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_494900(U64, U64, U64, U32, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_19b760(U64, U64, U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_494ab0(U64, U64, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_199f70(U64, U64, U64, U32, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_53d9c0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_57ea10(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_57eb60(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f1e30(U64, bool, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_57ee90(U64, bool, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_860a00(U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5a3b30(U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5f9d80(U64, U32, U64, U32, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5f9ed0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_875b30(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_64ab10(U64, U64, U64, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_64f9e0(U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6671d0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6975b0(U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1a49a0(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6efa90(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6efbc0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f0190(U64, U64, U32, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f0ad0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f0bf0(U64, U64, U64, U64, U32,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5c37f0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f0d30(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f0e60(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6efcf0(U64, U64, U32, bool, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f1920(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f1a30(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5a31d0(U64, U64, bool, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f3350(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f3480(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5100(U64, U64, U64, U32, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5230(U64, bool, bool, U32, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ddd40(U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5550(U64, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_2bc7d0(U64, U32, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5ce0(U64, U32, U32, U32, U32,
  U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6050(U64, U32, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f61a0(U64, U32, U64, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6300(U64, bool, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5a32e0(U64, U64, bool, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f73a0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f74e0(U64, U64, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f26e0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7e70(U64, bool, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f9f40(U64, U32, bool, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fa060(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fa2e0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fa4b0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fa770(U64, U32, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fa9b0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fb5d0(U64, U64, U64, U32, U32,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fa670(U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fc7f0(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fc960(U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fcfa0(U64, U64, U64, U64, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fd0f0(U64, U64, U64, U64, U32,
  U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_761380(U64, U64, U64, U64, U64,
  U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_7619b0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5c5990(U64, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fb0a0(U64, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_2bb6f0(U64, U32, U32, U32, U32,
  U32);

[[gnu::visibility("hidden")]] U64 SdkStub_e3ea0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_e44d0(object + 0x8, a1, 0x301, a2, 0x301, 0x5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3ec0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_e44d0(object + 0x8, a1, 0x301, a2, 0x301, 0x6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ef360(U64 object, U32 a1) {
  return SdkRoutine_eb350(object + 0x8, a1, 0x12f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ef6a0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_ef9a0(object + 0x8, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_f0a80(U64 object, U64 a1, U32 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_e5400(object + 0x8, a1, a2, a3, a4, 0x19);
}

[[gnu::visibility("hidden")]] U64 SdkStub_f4490(U64 object) {
  return SdkRoutine_f34f0(object + 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133cc0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_134780(object + 0x8, a1, a2, 0xe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133d70(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4) {
  return SdkRoutine_134af0(object + 0x8, a1, a2, a3, a4, 0x15);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133e10(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x1c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1692f0(U64 object, U64 a1) {
  return SdkRoutine_85dc20(object + 0x50, a1 + 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_17e5c0(U64 object) {
  return SdkRoutine_85e380(object + 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1a2db0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1a3ba0(object + 0x8, a1, a2, 0x9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b60c0(U64 object, U64 a1, bool a2) {
  return SdkRoutine_1b7170(object + 0x8, a1, a2, 0x33);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b8d10(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b9510(object + 0x8, a1, 0x10, a2, 0x64);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1ba390(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ba4b0(object + 0x8, a1, 0x1000, a2, 0x100, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1bc8d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1bfbe0(object + 0x8, a1, 0xd0, a2, 0x1a4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1bc8f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1bfdb0(object + 0x8, a1, 0xd0, a2, 0x1a5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1bd140(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b9510(object + 0x8, a1, 0x10, a2, 0x6e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1be6a0(U64 object, U32 a1) {
  return SdkRoutine_eb350(object + 0x8, a1, 0x3e6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1bf210(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ba4b0(object + 0x8, a1, 0x1000, a2, 0x100, 0x3e8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1bf930(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b9510(object + 0x8, a1, 0x10, a2, 0x14);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1d8a0c(U64 object, U64 a1, U64 a2,
  U32 a3, U32 a4) {
  return SdkRoutine_1d98f4(object + 0x8, a1, a2, a3, a4, 0x64);
}

[[gnu::visibility("hidden")]] U64 SdkStub_490ea0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_1977c0(object + 0x8, a1, a2, a3, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_490eb0(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_4912a0(object + 0x8, a1, a2, a3, a4, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_490ec0(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_4912a0(object + 0x8, a1, a2, a3, a4, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_490ed0(U64 object, U64 a1, U64 a2,
  U32 a3, U32 a4) {
  return SdkRoutine_197230(object + 0x8, a1, a2, a3, a4, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_490ef0(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4) {
  return SdkRoutine_491410(object + 0x8, a1, a2, a3, a4, 0x5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_490f70(U64 object, U64 a1, U64 a2,
  U32 a3, U32 a4, U32 a5) {
  return SdkRoutine_195ab0(object + 0x8, a1, a2, a3, a4, a5, 0x9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_494510(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_19bd50(object + 0x8, a1, a2, a3, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_494520(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_494900(object + 0x8, a1, a2, a3, a4, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_494530(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_494900(object + 0x8, a1, a2, a3, a4, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_494540(U64 object, U64 a1, U64 a2,
  U32 a3, U32 a4) {
  return SdkRoutine_19b760(object + 0x8, a1, a2, a3, a4, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_494560(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4) {
  return SdkRoutine_494ab0(object + 0x8, a1, a2, a3, a4, 0x5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4945e0(U64 object, U64 a1, U64 a2,
  U32 a3, U32 a4, U32 a5) {
  return SdkRoutine_199f70(object + 0x8, a1, a2, a3, a4, a5, 0x9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_53d9a0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_53d9c0(a1, a2, a3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e510(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_57ea10(object + 0x8, a1, a2, 0x198);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e530(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x58, a2, 0x19a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e570(U64 object, bool a1) {
  return SdkRoutine_f1e30(object + 0x8, a1, 0x1f4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e580(U64 object, bool a1, U32 a2) {
  return SdkRoutine_57ee90(object + 0x8, a1, a2, 0x1fe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583e60(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x58, a2, 0xd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583e80(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x100, a2, 0xe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583ea0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x40, a2, 0xf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583ec0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x40, a2, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583f70(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x40, a2, 0x65);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583f90(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x100, a2, 0x66);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583ff0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x298, a2, 0xc8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5840c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57eb60(object + 0x8, a1, 0x40, a2, 0x12d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_596ee4(U64 object) {
  return SdkRoutine_860a00(0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a3900(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_5a3b30(object + 0x8, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a3910(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_5a3b30(object + 0x8, a1, a2, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a3920(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_5a3b30(object + 0x8, a1, a2, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5f92d0(U64 object, U32 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_5f9d80(object + 0x8, a1, a2, a3, a4, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5f9300(U64 object, U64 a1, U32 a2,
  U64 a3) {
  return SdkRoutine_5f9ed0(object + 0x8, a1, a2, a3, 0xa);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6165a0(U64 object, U64 a1) {
  return SdkRoutine_875b30(a1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_64a250(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_64ab10(object, a1, a2, a3, 0x0, a4, 0x22);
}

[[gnu::visibility("hidden")]] U64 SdkStub_64fb90(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_64f9e0(object, a1, 0x0, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6671a0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6671d0(object, a1, a2 + 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6979e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6975b0(object, a1, 0x0, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ee9d0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x16);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eea60(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x38);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eea70(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6efa90(object + 0x8, a1, a2, 0x3a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeaa0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x3c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeab0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x3d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeac0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6efa90(object + 0x8, a1, a2, 0x3e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eead0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x3f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeae0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6efa90(object + 0x8, a1, a2, 0x41);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeaf0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1a3ba0(object + 0x8, a1, a2, 0x42);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeb00(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1a3ba0(object + 0x8, a1, a2, 0x43);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eec50(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6efbc0(object + 0x8, a1, a2, a3, 0x53);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eec90(U64 object, U64 a1, U32 a2,
  U64 a3) {
  return SdkRoutine_6f0190(object + 0x8, a1, a2, a3, 0x744, 0x56);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eedf0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1a3ba0(object + 0x8, a1, a2, 0x7a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eee00(U64 object, U64 a1, U32 a2,
  U64 a3) {
  return SdkRoutine_6f0ad0(object + 0x8, a1, a2, a3, 0x7b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeea0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6efbc0(object + 0x8, a1, a2, a3, 0x83);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eeed0(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4, U64 a5) {
  return SdkRoutine_6f0bf0(object + 0x8, a1, a2, a3, a4, a5, 0x85);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eef40(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_5c37f0(object + 0x8, a1, a2, 0xc8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eef50(U64 object, U64 a1, U32 a2,
  U64 a3) {
  return SdkRoutine_6f0d30(object + 0x8, a1, a2, a3, 0xc9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eef60(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6f0e60(object + 0x8, a1, a2, a3, 0xca);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef0b0(U64 object, U64 a1, U32 a2,
  bool a3) {
  return SdkRoutine_6efcf0(object + 0x8, a1, a2, a3, 0xd4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef240(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f1920(object + 0x8, a1, a2, 0x193);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef250(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6f1a30(object + 0x8, a1, a2, a3, 0x194);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef260(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f1920(object + 0x8, a1, a2, 0x195);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef270(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6f1a30(object + 0x8, a1, a2, a3, 0x196);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef420(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a31d0(object + 0x8, a1, a2, 0x20a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef430(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a31d0(object + 0x8, a1, a2, 0x20b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef5e0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0xbc0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef5f0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f3350(object + 0x8, a1, a2, 0xbc1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef600(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f3480(object + 0x8, a1, a2, 0xbc2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef610(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0xbc3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef800(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1a3ba0(object + 0x8, a1, a2, 0xc4e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4280(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1a3ba0(object + 0x8, a1, a2, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f42e0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x17);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4370(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x3e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4440(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_6f5100(object + 0x8, a1, a2, a3, a4, 0x86);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4470(U64 object, U64 a1, U64 a2,
  U32 a3, U64 a4) {
  return SdkRoutine_6f5100(object + 0x8, a1, a2, a3, a4, 0x88);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4480(U64 object, bool a1, bool a2,
  U32 a3, U64 a4) {
  return SdkRoutine_6f5230(object + 0x8, a1, a2, a3, a4, 0x89);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4500(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_1ddd40(object + 0x8, a1, a2, 0x91);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4520(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_1ddd40(object + 0x8, a1, a2, 0x93);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4540(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_1ddd40(object + 0x8, a1, a2, 0x95);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4560(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_1ddd40(object + 0x8, a1, a2, 0x97);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4620(U64 object, U64 a1, U32 a2,
  U32 a3) {
  return SdkRoutine_6f5550(object + 0x8, a1, a2, a3, 0xcd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4640(U64 object, U64 a1, U32 a2,
  U32 a3) {
  return SdkRoutine_6f5550(object + 0x8, a1, a2, a3, 0xce);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f46f0(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0xd7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4720(U64 object, U32 a1, U32 a2,
  U64 a3) {
  return SdkRoutine_2bc7d0(object + 0x8, a1, a2, a3, 0xdd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4760(U64 object, U32 a1, U32 a2,
  U32 a3, U32 a4, U32 a5, U64 a6) {
  return SdkRoutine_6f5ce0(object + 0x8, a1, a2, a3, a4, a5, a6, 0xe0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f47d0(U64 object, U32 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6f6050(object + 0x8, a1, a2, a3, a4, 0xe5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f47e0(U64 object, U32 a1, U64 a2,
  U64 a3, U64 a4, U64 a5) {
  return SdkRoutine_6f61a0(object + 0x8, a1, a2, a3, a4, a5, 0xe6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4830(U64 object, bool a1, U64 a2) {
  return SdkRoutine_6f6300(object + 0x8, a1, a2, 0xeb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4960(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a32e0(object + 0x8, a1, a2, 0xfe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a40(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a32e0(object + 0x8, a1, a2, 0x148);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4aa0(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x190);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4ab0(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x192);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4ac0(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x193);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4ad0(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x194);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4ae0(U64 object, bool a1, U64 a2) {
  return SdkRoutine_6f6300(object + 0x8, a1, a2, 0x1f4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4b00(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6f73a0(object + 0x8, a1, a2, a3, 0x226);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4b10(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4) {
  return SdkRoutine_6f74e0(object + 0x8, a1, a2, a3, a4, 0x227);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4b20(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f26e0(object + 0x8, a1, a2, 0x228);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4ba0(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x25e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4cd0(U64 object, bool a1, U64 a2) {
  return SdkRoutine_6f7e70(object + 0x8, a1, a2, 0x26b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f87b0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6efa90(object + 0x8, a1, a2, 0xd4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f87c0(U64 object, U32 a1, bool a2,
  U64 a3) {
  return SdkRoutine_6f9f40(object + 0x8, a1, a2, a3, 0xd5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f87f0(U64 object, U64 a1, U32 a2,
  U64 a3) {
  return SdkRoutine_6fa060(object + 0x8, a1, a2, a3, 0xd8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8810(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa2e0(object + 0x8, a1, 0x804, a2, 0xda);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8860(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x3f4, a2, 0xde);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8880(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x218, a2, 0xdf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f88a0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x64, a2, 0xe0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f88d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x118, a2, 0xe2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f88f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x218, a2, 0xe3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8910(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6efa90(object + 0x8, a1, a2, 0xe6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8920(U64 object, U32 a1, bool a2,
  U64 a3) {
  return SdkRoutine_6f9f40(object + 0x8, a1, a2, a3, 0xe7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8940(U64 object, U32 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fa770(object + 0x8, a1, a2, a3, 0xe8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8950(U64 object, U32 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fa770(object + 0x8, a1, a2, a3, 0xe9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f89e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x28, a2, 0xfb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a00(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x3f4, a2, 0xfc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a20(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fa4b0(object + 0x8, a1, 0x54, a2, 0xfd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a40(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x12d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a60(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fa9b0(object + 0x8, a1, a2, a3, 0x133);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a80(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_1977c0(object + 0x8, a1, a2, a3, 0x135);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8b00(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f1920(object + 0x8, a1, a2, 0x13c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8b20(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f1920(object + 0x8, a1, a2, 0x13e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8b60(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a31d0(object + 0x8, a1, a2, 0x142);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8d20(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x20a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f30(U64 object, U64 a1, U64 a2,
  U32 a3, U32 a4, U64 a5) {
  return SdkRoutine_6fb5d0(object + 0x8, a1, a2, a3, a4, a5, 0x2d2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f50(U64 object, U32 a1, U64 a2) {
  return SdkRoutine_6fa670(object + 0x8, a1, a2, 0x2d3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f96d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc7f0(object + 0x8, a1, 0x54, a2, 0x4fc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f96f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc7f0(object + 0x8, a1, 0x60, a2, 0x4fd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9710(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc7f0(object + 0x8, a1, 0x34, a2, 0x4fe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9730(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc7f0(object + 0x8, a1, 0x34, a2, 0x4ff);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9750(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc960(object + 0x8, a1, 0x54, a2, 0x500);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9770(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc960(object + 0x8, a1, 0x60, a2, 0x501);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9790(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc960(object + 0x8, a1, 0x34, a2, 0x502);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f97b0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc960(object + 0x8, a1, 0x34, a2, 0x503);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f99f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc960(object + 0x8, a1, 0x8, a2, 0x517);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9c30(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4, U32 a5) {
  return SdkRoutine_6fcfa0(object + 0x8, a1, a2, a3, a4, a5, 0x5a5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9ca0(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4, U32 a5, U32 a6) {
  return SdkRoutine_6fd0f0(object + 0x8, a1, a2, a3, a4, a5, a6, 0x5a9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_744020(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a32e0(object + 0x8, a1, a2, 0x1f5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_760650(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U32 a5, U32 a6) {
  return SdkRoutine_761380(object + 0x8, a1, a2, a3, a4, a5, a6, 0x12f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_762060(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_7619b0(object + 0x8, a1, a2, 0x193);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d670(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d6b0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x19);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d6d0(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x1b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d750(U64 object, U32 a1, U32 a2) {
  return SdkRoutine_5c5990(object + 0x8, a1, a2, 0x78);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d780(U64 object, bool a1) {
  return SdkRoutine_134260(object + 0x8, a1, 0x92);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d790(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0x97);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d7a0(U64 object, U32 a1, U32 a2) {
  return SdkRoutine_5c5990(object + 0x8, a1, a2, 0x98);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d7f0(U64 object, U64 a1, bool a2) {
  return SdkRoutine_5a32e0(object + 0x8, a1, a2, 0x9c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d800(U64 object, U64 a1, U32 a2,
  U32 a3) {
  return SdkRoutine_6fb0a0(object + 0x8, a1, a2, a3, 0x9d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d820(U64 object, U32 a1, U32 a2,
  U32 a3, U32 a4) {
  return SdkRoutine_2bb6f0(object + 0x8, a1, a2, a3, a4, 0x9e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d840(U64 object, U32 a1) {
  return SdkRoutine_1a49a0(object + 0x8, a1, 0xa0);
}
