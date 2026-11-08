#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_251d0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_254e0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25630(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1968d0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_5aa50(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_8eac0(U64, U64, U32, U32,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_ea8a0(U64, U64, U64, U64,
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_77540(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_89360(U64, U64, U64, U64,
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_b5190(U64, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_bbec0(U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_c4780(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_107f90(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_112680(U64, U64, U64, U64,
  U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_112e50(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_114b90(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_57450(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_138670(U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1a2360(U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1cb640(U64, U64, U64, U64,
  U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_19adf0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_203220(U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_205940(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_21f420(U64, U64, U64, U64,
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_232480(U64, U64, U64, U64,
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_244840(U64, U64, U64, U64,
  U64, U64, U64, U32);

[[gnu::visibility("hidden")]] U64 CudaDriverStub_25300(U64 object) {
  return CudaDriverRoutine_251d0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_25610(U64 object) {
  return CudaDriverRoutine_254e0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_25750(U64 object) {
  return CudaDriverRoutine_25630(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_5a690(U64 object, U64 a1) {
  return CudaDriverRoutine_1968d0(object, a1, 0x18000, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_5ab60(U64 object, U64 a1) {
  return CudaDriverRoutine_5aa50(object, a1, 0x18000);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_609f0(U64 object, U64 a1) {
  return CudaDriverRoutine_8eac0(object, a1, 0x0, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_69f70(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_ea8a0(object, a1, a2, a3, a4, 0x0, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_77c40(U64 object) {
  return CudaDriverRoutine_77540(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_89350(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_89360(object, a1, a2, a3, a4, 0x0,
    0xffffffffffffffff, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_b5180(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_b5190(object, a1, a2, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_bc020(U64 object, U64 a1,
  U64 a2, U64 a3) {
  return CudaDriverRoutine_bbec0(object, a1, a2, a3, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_c54e0(U64 object, U64 a1) {
  return CudaDriverRoutine_c4780(object, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102350(U64 object) {
  return CudaDriverRoutine_107f90(object + 0x28, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_112b20(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_112680(object, a1, a2, a3, a4, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_112e40(U64 object, U64 a1) {
  return CudaDriverRoutine_112e50(object, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_112f50(U64 object, U64 a1) {
  return CudaDriverRoutine_112e50(object, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_114b80(U64 object, U64 a1) {
  return CudaDriverRoutine_114b90(object, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_124f70(U64 object, U64 a1) {
  return CudaDriverRoutine_57450(object, a1, 0x2);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_138660(U64 object, U64 a1,
  U64 a2, U64 a3) {
  return CudaDriverRoutine_138670(object, a1, a2, a3, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a2cc0(U64 object, U64 a1,
  U64 a2, U64 a3) {
  return CudaDriverRoutine_1a2360(object, a1, a2, a3, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c88e0(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_1cb640(object, a1, a2, a3, a4, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1cc9d0(U64 object) {
  return CudaDriverRoutine_19adf0(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2033a0(U64 object, U64 a1) {
  return CudaDriverRoutine_203220(object, a1, 0x0, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2066f0(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_205940(object, a1, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_21dcd0(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5) {
  return CudaDriverRoutine_21f420(object, a1, a2, a3, a4, a5, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_21dfd0(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_21f420(object, a1, a2, a3, a4, a5, a6, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_21e060(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5) {
  return CudaDriverRoutine_21f420(object, a1, a2, a3, a4, a5, 0x0, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_232630(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_232480(object, a1, a2, a3, a4, a5, a6, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2449f0(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_244840(object, a1, a2, a3, a4, a5, a6, 0x1);
}
