#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10650(U64, U64, U64, U64,
  U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1f9f0(U64, U64, U64, U64,
  U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1ce20(U64, U64, U64, U64,
  U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_24ea0(U64, U64, U32, U64,
  U32, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_24ea0(U64, U64, U64, U64,
  U32, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_911e0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_90cc0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_956d0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_88ba0(U64, U64, U32, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_103390(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_107380(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1075b0(U64, U32, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1074e0(U64, U32, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_105570(U64, U32, U64, U64,
  U32);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_112a7bd[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1124c9b[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_e4750(U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_fabf0(U64, U64, U64, U32,
  U32, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_4d790(U64);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14230e0[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_107f90(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_10f540(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_5ded0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_4f840(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14232e0[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12ea60(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_77c40(U64);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1423370[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_86ae0(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_86b70(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d970(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d980(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1bace0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1a1b80(U64, U64, U64, U32,
  U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1b2350(U64, U64, U64, U64,
  U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_e5e80(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102370(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1cacf0(U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db840(U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1ddb40(U64, U64);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14347a8[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_202f80(U64, U64, U64, U64,
  U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_197b50(U64, U32, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_232640(U64, U64, U64, U64,
  U64, U32, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_244a00(U64, U64, U64, U64,
  U64, U32, U32);

[[gnu::visibility("hidden")]] U64 CudaDriverStub_4ca0(U64 object, U64, U32 a2,
  U64 a3, U64 a4, U32 a5) {
  return CudaDriverRoutine_10650(object, 0x0ul, 0x0ul, a4, a3, a2, a5);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_18080(U64 object, U64,
  U32 a2, U64 a3, U64 a4, U32 a5) {
  return CudaDriverRoutine_1f9f0(object, 0x0ul, 0x0ul, a4, a3, a2, a5);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c960(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4, U64 a5, U32 a6) {
  return CudaDriverRoutine_1ce20(object, a1, a2, a3, a4, a5, 0x0u, a6);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_25140(U64 object, U32 a1,
  U32 a2) {
  return CudaDriverRoutine_24ea0(object, 0x0ul, 0x0u, 0x0ul, a1, a2, 0xbccu);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_25160(U64 object, U64 a1,
  U64 a2, U32 a3, U32 a4) {
  return CudaDriverRoutine_24ea0(object, a1, a2, 0x0ul, a3, a4, 0xbccu);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_61880(U64 object) {
  return CudaDriverRoutine_911e0(At<U64>(object, 0x18) + 0x428);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_61930(U64 object) {
  const U64 value0 = At<U64>(At<U64>(object, 0x18), 0x428);
  return CudaDriverRoutine_90cc0(value0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_619b0(U64 object) {
  return CudaDriverRoutine_911e0(At<U64>(object, 0x18) + 0x428);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_61a30(U64 object) {
  return CudaDriverRoutine_956d0(At<U64>(object, 0x18) + 0x430);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_61ab0(U64 object) {
  return CudaDriverRoutine_956d0(At<U64>(object, 0x18) + 0x430);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_88b70(U64 object, U64 a1,
  U64 a2, U32 a3, U32 a4, U32 a5) {
  return CudaDriverRoutine_88ba0(a1, a2, a3, a4, a5, 0x0u);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_b80c0(U64 object, U64 a1) {
  return CudaDriverRoutine_103390(object + 0x68, At<U32>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_b9350(U64 object) {
  return CudaDriverRoutine_107380(At<U64>(object, 0x20), At<U32>(object,
    0x3ec));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_b9360(U64 object) {
  return CudaDriverRoutine_1075b0(At<U64>(object, 0x20), At<U32>(object,
    0x3ec), 0x0ul, 0x0ul, At<U32>(object, 0x40));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_b9660(U64 object) {
  return CudaDriverRoutine_1074e0(At<U64>(object, 0x20), At<U32>(object,
    0x3ec), 0x0ul, 0x0ul);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_baf00(U64 object, U64 a1) {
  return CudaDriverRoutine_105570(At<U64>(object, 0x20), At<U32>(object,
    0x3ec), a1, 0x0ul, At<U32>(object, 0x40));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_e4960(U64 object, U64 a1,
  U64 a2) {
  const U64 value0 = reinterpret_cast<U64>(CudaDriverData_112a7bd);
  const U64 value1 = reinterpret_cast<U64>(CudaDriverData_1124c9b);
  return CudaDriverRoutine_e4750(object, a1, a2, value0, value1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_f0f60(U64 object, U64 a1) {
  return CudaDriverRoutine_103390(object + 0xb0, At<U32>(a1, 0x0));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_f60d0(U64 object, U64 a1,
  U32 a2, U32 a3, U64 a4) {
  return CudaDriverRoutine_fabf0(object, a1, a1, a2, a3, a4, 0x0ul);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102380(U64 object) {
  return CudaDriverRoutine_4d790(At<U64>(object, 0x70));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10e9d0(U64 object) {
  const U64 value0 =
    At<U64>(At<U64>(reinterpret_cast<U64>(CudaDriverData_14230e0), 0x0), 0x0);
  return CudaDriverRoutine_107f90(value0, 0x0ul, 0x0u);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10f370(U64 object) {
  return CudaDriverRoutine_10f540(At<U64>(object, 0x40), object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10f430(U64 object, U64 a1) {
  return CudaDriverRoutine_5ded0(a1, At<U32>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1174e0(U64 object, U64 a1) {
  return CudaDriverRoutine_4f840(a1, object + 0x498, object + 0x494);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_118070(U64 object) {
  const U64 value0 = At<U64>(reinterpret_cast<U64>(CudaDriverData_14232e0),
    0x0);
  return CudaDriverRoutine_12ea60(object + 0x240, value0, object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_123f10(U64 object) {
  const U64 value0 = At<U64>(At<U64>(object, 0x8), 0x0);
  return CudaDriverRoutine_77c40(value0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12c940(U64 object) {
  const U64 value0 =
    At<U64>(At<U64>(reinterpret_cast<U64>(CudaDriverData_1423370), 0x0),
    0x0) + 0x50;
  return CudaDriverRoutine_86ae0(value0, object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12c9a0(U64 object, U64 a1) {
  const U64 value0 =
    At<U64>(At<U64>(reinterpret_cast<U64>(CudaDriverData_1423370), 0x0),
    0x0) + 0x50;
  return CudaDriverRoutine_86b70(value0, object, a1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12dd40(U64 object, U32 a1,
  U32 a2) {
  return CudaDriverRoutine_25d970(object, a2, a1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12dd60(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_25d980(object, a2, a1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1388f0(U64 object, U64 a1) {
  return CudaDriverRoutine_1bace0(a1, At<U64>(object, 0x18), 0x3u);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a28c0(U64 object, U64 a1,
  U64 a2, U32 a3) {
  return CudaDriverRoutine_1a1b80(object, a1, a2, 0x0u, a2, a3);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a2d60(U64 object, U64 a1,
  U64 a2, U64 a3, U32 a4) {
  return CudaDriverRoutine_1a1b80(object, a1, a2, 0x0u, a3, a4);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1aa8b0(U64 object, U64,
  U32 a2, U64 a3, U64 a4, U32 a5) {
  return CudaDriverRoutine_1b2350(object, 0x0ul, 0x0ul, a4, a3, a2, a5);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1b7cc0(U64 object) {
  const U64 value0 = At<U64>(At<U64>(At<U64>(object, 0x20), 0x18), 0x4b0);
  return CudaDriverRoutine_e5e80(value0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c0ac0(U64 object) {
  const U64 value0 = At<U64>(At<U64>(object, 0x50), 0x70);
  return CudaDriverRoutine_102370(value0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c3170(U64 object, U64 a1,
  U64 a2) {
  return CudaDriverRoutine_1cacf0(object, a1, a2 + 0x28, a2 + 0x18, a2 + 0x38);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db9f0(U64 object, U64 a1,
  U64 a2, U64 a3) {
  return CudaDriverRoutine_1db840(object, At<U64>(object, 0x18), a1, a2, a3);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1de4e0(U64 object, U64 a1) {
  return CudaDriverRoutine_1ddb40(a1, object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1f2870(U64 object) {
  const U64 value0 = At<U64>(At<U64>(object, 0x50), 0x70);
  return CudaDriverRoutine_102370(value0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_203210(U64 object, U64 a1,
  U64 a2, U64 a3, U64 a4) {
  const U64 value0 = At<U64>(reinterpret_cast<U64>(CudaDriverData_14347a8),
    0x118);
  return CudaDriverRoutine_202f80(object, a1, a2, a3, a4, value0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_221750(U64 object, U64 a1,
  U64 a2, U32 a3) {
  return CudaDriverRoutine_197b50(object, 0x0u, a1, a2, a3);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_22d4a0(U64 object, U64,
  U32 a2, U64 a3, U64 a4, U32 a5) {
  return CudaDriverRoutine_232640(object, 0x0ul, 0x0ul, a4, a3, a2, a5);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_23d560(U64 object, U64,
  U32 a2, U64 a3, U64 a4, U32 a5) {
  return CudaDriverRoutine_244a00(object, 0x0ul, 0x0ul, a4, a3, a2, a5);
}
