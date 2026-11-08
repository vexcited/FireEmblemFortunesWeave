#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 GameRoutine_10f160(U64, U32, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_29f230(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0bd60(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_2a83d0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0b180(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5662f0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_567ce0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5fd220(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_5deca0(U64, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_8ab230(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_8ab560(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_9a4300(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_716d80(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_f5c3f0(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_f9e060(U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_17598e0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_1488fb0(U32, U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1596720(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_194f6c0(U64);

[[gnu::visibility("hidden")]] U64 GameStub_10f3d0(U64 object, U64 a1) {
  return GameRoutine_10f160(object, 0x0, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_10f3e0(U64 object, U64 a1) {
  return GameRoutine_10f160(object, 0x1, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_10f3f0(U64 object, U64 a1) {
  return GameRoutine_10f160(object, 0x2, a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_279c60(U64 object, U64 a1) {
  return GameRoutine_29f230(a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bb20(U64 object) {
  return GameRoutine_1a0bd60(0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a8ae0(U64 object, U64 a1) {
  return GameRoutine_2a83d0(object, a1, object + 0x10c);
}

[[gnu::visibility("hidden")]] U64 GameStub_2b4bb0(U64 object) {
  return GameRoutine_1a0b180(object + 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_561290(U64 object, U64 a1) {
  return GameRoutine_5662f0(a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_561720(U64 object, U64 a1) {
  return GameRoutine_567ce0(a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_58c820(U64 object, U64, U64 a2) {
  return GameRoutine_5fd220(object, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_5d3ef0(U64 object, U64 a1, U64 a2) {
  return GameRoutine_5deca0(a1, a2);
}

[[gnu::visibility("hidden")]] U64 GameStub_665c00(U64 object) {
  return GameRoutine_8ab230(0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_725640(U64 object) {
  return GameRoutine_8ab560(0x6);
}

[[gnu::visibility("hidden")]] U64 GameStub_727030(U64 object) {
  return GameRoutine_9a4300(0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_9f4520(U64 object, U64 a1) {
  return GameRoutine_716d80(a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_e623e0(U64 object) {
  return GameRoutine_8ab230(0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_f5c3e0(U64 object) {
  return GameRoutine_f5c3f0(0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_f9e050(U64 object) {
  return GameRoutine_f9e060(0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1029c20(U64 object) {
  return GameRoutine_17598e0(object, object + 0x98, 0x7);
}

[[gnu::visibility("hidden")]] U64 GameStub_104ed00(U64 object) {
  return GameRoutine_8ab560(0x7);
}

[[gnu::visibility("hidden")]] U64 GameStub_1466ec0(U64 object) {
  return GameRoutine_17598e0(object, object + 0xc0, 0x6);
}

[[gnu::visibility("hidden")]] U64 GameStub_14894b0(U64 object) {
  return GameRoutine_1488fb0(0xa, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_14894c0(U64 object) {
  return GameRoutine_1488fb0(0x5, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_14894d0(U64 object) {
  return GameRoutine_1488fb0(0x7, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_14894e0(U64 object) {
  return GameRoutine_1488fb0(0x8, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_14894f0(U64 object) {
  return GameRoutine_1488fb0(0x11, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1489500(U64 object) {
  return GameRoutine_1488fb0(0x1, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1489510(U64 object) {
  return GameRoutine_1488fb0(0x9, 0x0);
}

[[gnu::visibility("hidden")]] U64 GameStub_1655ab0(U64 object, U64 a1) {
  return GameRoutine_1596720(a1);
}

[[gnu::visibility("hidden")]] U64 GameStub_194e8c0(U64 object, U64 a1) {
  return GameRoutine_194f6c0(a1);
}
