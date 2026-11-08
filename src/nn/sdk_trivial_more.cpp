#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e86d60;
[[gnu::visibility("hidden")]] U32 SdkRoutine_1a5370(U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88738;
[[gnu::visibility("hidden")]] extern U8 SdkData_c57445[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e69948[];
[[gnu::visibility("hidden")]] extern U8 SdkData_c57b0d[];
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88eb8;
[[gnu::visibility("hidden")]] extern U8 SdkData_ea37d8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e4c300[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_2d0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_c75e2b[];
[[gnu::visibility("hidden")]] extern U8 SdkData_c75e84[];
[[gnu::visibility("hidden")]] extern U8 SdkData_c75edd[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_62a8e0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_9d750(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_629ca0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_633910(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6382d0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_638690(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_65c110(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6ade20(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_66e2c0(U64);
[[gnu::visibility("hidden")]] U32 SdkRoutine_69f860(U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_ca69db[];

[[gnu::visibility("hidden")]] void SdkStub_ce9a0(U64 object) {
  At<U64>(object, 0x20) = 0;
}

[[gnu::visibility("hidden")]] void SdkStub_cea10(U64 object) {
  At<U64>(object, 0x18) = 0;
}

[[gnu::visibility("hidden")]] void SdkStub_da710(U64 object) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(object, 0x18);
  if (target != 0) {
    At<Method>(At<U64>(target, 0), 0x8)(target);
  }
}

[[gnu::visibility("hidden")]] U64 SdkStub_da730(U64 object, U64 type) {
  return At<U64>(type, 8) == SdkSlot_e86d60 ? object + 0x18 : 0;
}

[[gnu::visibility("hidden")]] bool SdkStub_16d190(U64 object) {
  return SdkRoutine_1a5370(object) == 0;
}

[[gnu::visibility("hidden")]] void SdkStub_17f7d0(U64 object, U64 a1) {
  using Method = void (*)(U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x8)(target, a1);
}

[[gnu::visibility("hidden")]] void SdkStub_17f7e0(U64 object, U64 a1) {
  using Method = void (*)(U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x10)(target, a1);
}

[[gnu::visibility("hidden")]] void SdkStub_4bbf20(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] void SdkStub_4bc330(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] void SdkStub_4d3690(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x8)(object, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3df0(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x30)(object, a1, a2);
}

[[gnu::visibility("hidden")]] void SdkStub_4dffb0(U64 object) {
  At<U64>(object, 0x40) = 0;
}

[[gnu::visibility("hidden")]] void SdkStub_4e6d10(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x20)(object, a1, a2, a3);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6d40(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x38)(object, a1, a2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e7520(U64 object, U64 type) {
  return At<U64>(type, 8) == SdkSlot_e88738 ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f5e90(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(SdkData_c57445) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void SdkStub_514490(U64 self, U64 out) {
  At<U64>(out, 0) = reinterpret_cast<U64>(SdkData_e69948);
  At<U64>(out, 0x8) = At<U64>(self, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_514520(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(SdkData_c57b0d) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] void SdkStub_56ead0(U64 object, U64 a1, U64 a2,
    U64 a3) {
  using Method = void (*)(U64, U64, U64, U64);
  const U64 target = At<U64>(object, 0x8);
  At<Method>(At<U64>(target, 0), 0x10)(target, a1, a2, a3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5cb4a0() {
  return SdkRoutine_2d0(SdkSlot_e88eb8, reinterpret_cast<U64>(SdkData_ea37d8),
    reinterpret_cast<U64>(SdkData_e4c300));
}

[[gnu::visibility("hidden")]] U64 SdkStub_623ad0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(SdkData_c75e2b) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_623d40(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(SdkData_c75e84) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_623dc0(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(SdkData_c75edd) ? object + 0x8 : 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_62aa70(U64 object) {
  SdkRoutine_62a8e0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_62b2b0(U64 object) {
  SdkRoutine_629ca0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] void SdkStub_62cf80(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x190)(object, a1, a2);
}

[[gnu::visibility("hidden")]] void SdkStub_62cf90(U64 object, U64 a1, U64 a2) {
  using Method = void (*)(U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0x198)(object, a1, a2);
}

[[gnu::visibility("hidden")]] void SdkStub_632e70(U64 object, U64 a1, U64 a2,
    U64 a3, U64 a4, U64 a5, U64 a6) {
  using Method = void (*)(U64, U64, U64, U64, U64, U64, U64);
  At<Method>(At<U64>(object, 0), 0xd0)(object, a1, a2, a3, a4, a5, a6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6354e0(U64 object) {
  SdkRoutine_633910(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6383e0(U64 object) {
  SdkRoutine_6382d0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_638e20(U64 object) {
  SdkRoutine_638690(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65c120(U64 object) {
  SdkRoutine_65c110(object);
  return SdkRoutine_6ade20(object);
}

[[gnu::visibility("hidden")]] void SdkStub_6678d0(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_66e420(U64 object) {
  SdkRoutine_66e2c0(object);
  return SdkRoutine_6ade20(object);
}

[[gnu::visibility("hidden")]] bool SdkStub_69c080(U64 object) {
  return SdkRoutine_69f860(object) == 0;
}

[[gnu::visibility("hidden")]] void SdkStub_6ffa00(U64 object) {
  At<U64>(object, 0x0) = 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_73e650(U64 object, U64 type) {
  return At<U64>(type,
    8) == reinterpret_cast<U64>(SdkData_ca69db) ? object + 0x8 : 0;
}
