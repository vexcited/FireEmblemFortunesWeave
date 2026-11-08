#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_df240(U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_8ede0(U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_8ec20(U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_5ded0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10f760(U64, U64, U64, U64,
  U64, U64, U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10e060(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_b4790(U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1a2360(U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_26210(U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1cb640(U64, U64, U64, U64,
  U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1dcea0(U64, U64, U32, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_218620(U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_de3c0(U32);

[[gnu::visibility("hidden")]] U64 CudaDriverStub_50690(U64 object) {
  return CudaDriverRoutine_df240(0x3);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_60970(U64 object) {
  return CudaDriverRoutine_8ede0(0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_60980(U64 object) {
  return CudaDriverRoutine_8ede0(0x3);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_60990(U64 object) {
  return CudaDriverRoutine_8ede0(0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_609a0(U64 object) {
  return CudaDriverRoutine_8ede0(0x2);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_60a10(U64 object) {
  return CudaDriverRoutine_8ec20(0x0, object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10f440(U64 object, U64 a1) {
  return CudaDriverRoutine_5ded0(a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10fdf0(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5) {
  return CudaDriverRoutine_10f760(object, a1, a2, a3, a4, 0x0, 0x40, a5);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_111420(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_10f760(object, a1, a2, a3, a4, a5, 0x20, a6);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_111430(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_10f760(object, a1, a2, a3, a4, a5, 0x40, a6);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_127760(U64 object, U64 a1) {
  return CudaDriverRoutine_10e060(a1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_128ad0(U64 object) {
  return CudaDriverRoutine_b4790(0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_128ae0(U64 object) {
  return CudaDriverRoutine_b4790(0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a2350(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_1a2360(object, a1, a2, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a2960(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_1a2360(object, a1, a2, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1b73f0(U64 object) {
  return CudaDriverRoutine_26210(0x0, 0xc8);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c88f0(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_1cb640(object, a1, a2, a3, 0x0, a4);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dd000(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_1dcea0(object, a1, 0x1, a2);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2169e0(U64 object, U64 a1,
  U64, U64 a3, U64 a4) {
  return CudaDriverRoutine_218620(object, a1, a3, a4, 0x2724);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_217530(U64 object, U64 a1,
  U64, U64 a3, U64 a4) {
  return CudaDriverRoutine_218620(object, a1, a3, a4, 0x2af8);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_235650(U64 object) {
  return CudaDriverRoutine_de3c0(0x0);
}
