#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 GameData_1f52638[];
[[gnu::visibility("hidden")]] U64 GameRoutine_651250(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_2198f28[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09b70(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09f50(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09b80(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f65dd0[];
[[gnu::visibility("hidden")]] extern U8 GameData_219c9f8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_277240(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f4eed0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0c2c0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f8abf8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8ac80[];
[[gnu::visibility("hidden")]] extern U8 GameData_2143000[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1a0cee0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b358[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b440[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b530[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b580[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b5c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b600[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b640[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b680[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b6c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8b700[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8c1c0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8c670[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8cb38[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8cc68[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f8d4f8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f4efb4[];
[[gnu::visibility("hidden")]] extern U8 GameData_21c6978[];
[[gnu::visibility("hidden")]] U64 GameRoutine_a85600(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21cd108[];
[[gnu::visibility("hidden")]] U64 GameRoutine_7450c0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_745b40(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21ca2f8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_765b20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_849600(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21c9718[];
[[gnu::visibility("hidden")]] U64 GameRoutine_125d600(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21f3cc0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_d6f4f0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2265eb8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_636ca0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d6f1a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_d6f2a0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e1d3c0(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_2203490[];
[[gnu::visibility("hidden")]] U64 GameRoutine_e9c500(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_e9bf00(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_22190c0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_1006a90(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21ec7a8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_f906b0(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1006e20(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1041ae0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_f90970(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_2219080[];
[[gnu::visibility("hidden")]] U64 GameRoutine_10047e0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21f4cc0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_ec0820(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_ec0ae0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21f3cb8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_d8ce40(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21f3cd8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_10c0870(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_22190c8[];
[[gnu::visibility("hidden")]] U64 GameRoutine_f36600(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_10c0c60(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_21ec7c0[];
[[gnu::visibility("hidden")]] U64 GameRoutine_cb9a30(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_cb9e40(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1157bf0(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21c9758[];
[[gnu::visibility("hidden")]] U64 GameRoutine_f38dc0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1a9f09e[];
[[gnu::visibility("hidden")]] U64 GameRoutine_143a790(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_1469d90(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_1abd655[];
[[gnu::visibility("hidden")]] U64 GameRoutine_149edd0(U64);
[[gnu::visibility("hidden")]] extern U8 GameData_1ab1801[];
[[gnu::visibility("hidden")]] U64 GameRoutine_161fdc0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_15be5e0(U64, U32);
[[gnu::visibility("hidden")]] U64 GameRoutine_16ddaa0(U64, U32);
[[gnu::visibility("hidden")]] extern U8 GameData_21f4000[];
[[gnu::visibility("hidden")]] U64 GameRoutine_138a380(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_138e060(U64);
[[gnu::visibility("hidden")]] U64 GameRoutine_15be0e0(U64, U32);

[[gnu::visibility("hidden")]] void GameStub_4e940(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f52638) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_f90d0(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_fa380(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_fb7c0(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_fcc00(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_107da0(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_109060(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_10dd90(U64 object) {
  return GameRoutine_651250(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 GameStub_10dde0(U64 object) {
  return GameRoutine_651250(object, 0x78);
}

[[gnu::visibility("hidden")]] U64 GameStub_10de20(U64 object) {
  return GameRoutine_651250(object, 0x90);
}

[[gnu::visibility("hidden")]] U64 GameStub_119040() {
  return GameRoutine_1a09b70(reinterpret_cast<U64>(GameData_2198f28));
}

[[gnu::visibility("hidden")]] U64 GameStub_119050() {
  return GameRoutine_1a09f50(reinterpret_cast<U64>(GameData_2198f28));
}

[[gnu::visibility("hidden")]] U64 GameStub_119060() {
  return GameRoutine_1a09b80(reinterpret_cast<U64>(GameData_2198f28));
}

[[gnu::visibility("hidden")]] void GameStub_123090(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123140(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1231f0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1232a0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123350(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123400(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1234b0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123560(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123610(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1236c0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123770(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123820(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1238d0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123980(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_123a30(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_125b10(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0xb0)(target);
}

[[gnu::visibility("hidden")]] void GameStub_137d20(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_137dd0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_137e80(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x30)(target);
}

[[gnu::visibility("hidden")]] void GameStub_137f30(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x48)(target);
}

[[gnu::visibility("hidden")]] void GameStub_137fe0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x48)(target);
}

[[gnu::visibility("hidden")]] void GameStub_138090(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x48)(target);
}

[[gnu::visibility("hidden")]] void GameStub_1383e0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x58)(target);
}

[[gnu::visibility("hidden")]] void GameStub_138490(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x60)(target);
}

[[gnu::visibility("hidden")]] void GameStub_138540(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x60)(target);
}

[[gnu::visibility("hidden")]] void GameStub_13c080(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x108)(target);
}

[[gnu::visibility("hidden")]] void GameStub_13c130(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x108)(target);
}

[[gnu::visibility("hidden")]] void GameStub_13c1e0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x108)(target);
}

[[gnu::visibility("hidden")]] void GameStub_13d1d0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_13d310(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_13d450(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_13d520(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x178)(target);
}

[[gnu::visibility("hidden")]] void GameStub_13d5d0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x178)(target);
}

[[gnu::visibility("hidden")]] void GameStub_13d680(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x178)(target);
}

[[gnu::visibility("hidden")]] void GameStub_164130(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f65dd0) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_164150(U64 object) {
  return GameRoutine_651250(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_189b60(U64 object) {
  return GameRoutine_651250(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 GameStub_189c20(U64 object) {
  return GameRoutine_651250(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 GameStub_189cc0(U64 object) {
  return GameRoutine_651250(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 GameStub_189db0(U64 object) {
  return GameRoutine_651250(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_2775d0(U64 object) {
  return GameRoutine_651250(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_2780b0(U64 object) {
  return GameRoutine_651250(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 GameStub_2780e0() {
  return GameRoutine_277240(reinterpret_cast<U64>(GameData_219c9f8));
}

[[gnu::visibility("hidden")]] void GameStub_27ba20(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x28)(object, argument);
}

[[gnu::visibility("hidden")]] U64 GameStub_27f350(U64 object) {
  return object + 0x240;
}

[[gnu::visibility("hidden")]] void GameStub_27fdc0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x28)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_28ba80(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28ba90(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28baa0(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bab0(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bac0(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bad0(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bae0(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28baf0(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bb00(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28bb10(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28d450(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 GameStub_28db00(U64 object) {
  return object + 0x248;
}

[[gnu::visibility("hidden")]] void GameStub_290fd0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x28)(object);
}

[[gnu::visibility("hidden")]] void GameStub_291d60(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x20)(object, argument);
}

[[gnu::visibility("hidden")]] U64 GameStub_2937b0(U64 object) {
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_2937c0(U64 object) {
  return GameRoutine_651250(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 GameStub_293b10(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 GameStub_296640(U64 object) {
  return object + 0x300;
}

[[gnu::visibility("hidden")]] U64 GameStub_296e90(U64 object) {
  return GameRoutine_651250(object, 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_29b720(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x28)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a0360(U64 object) {
  return GameRoutine_651250(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a3e70(U64 object) {
  return GameRoutine_651250(object, 0x78);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a3f20(U64 object) {
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a4ec0(U64 object) {
  return GameRoutine_651250(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_2a6de0(U64 object) {
  return GameRoutine_651250(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_2ac810(U64 object) {
  return object + 0x250;
}

[[gnu::visibility("hidden")]] void GameStub_2adf60(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x28)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_2af0a0(U64 object) {
  return GameRoutine_651250(object, 0x48);
}

[[gnu::visibility("hidden")]] void GameStub_2b3450(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x18)(object);
}

[[gnu::visibility("hidden")]] void GameStub_2b3460(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x18)(object);
}

[[gnu::visibility("hidden")]] void GameStub_2b3470(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x18)(object);
}

[[gnu::visibility("hidden")]] void GameStub_2b3520(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x88)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_2b3940(U64 object) {
  return GameRoutine_651250(object, 0x80);
}

[[gnu::visibility("hidden")]] U64 GameStub_2b4900(U64 object) {
  return GameRoutine_651250(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 GameStub_2b9860(U64 object) {
  return GameRoutine_651250(object, 0x30);
}

[[gnu::visibility("hidden")]] void GameStub_2ba460(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x30);
  At<Method>(At<U64>(target, 0), 0x40)(target);
}

[[gnu::visibility("hidden")]] U64 GameStub_2fe770() {
  return GameRoutine_1a0c2c0(reinterpret_cast<U64>(GameData_1f4eed0));
}

[[gnu::visibility("hidden")]] void GameStub_55d860(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0xa0)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_55d870(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0xa0)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_55e770(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x10);
  At<Method>(At<U64>(target, 0), 0xf0)(target);
}

[[gnu::visibility("hidden")]] void GameStub_560fa0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8abf8) + 0x10;
}

[[gnu::visibility("hidden")]] void GameStub_561430(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8ac80) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_569f40() {
  return GameRoutine_1a0cee0(reinterpret_cast<U64>(GameData_2143000));
}

[[gnu::visibility("hidden")]] U64 GameStub_573330(U64 object) {
  return object + 0x90;
}

[[gnu::visibility("hidden")]] void GameStub_575d70(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b358) + 0x10;
}

[[gnu::visibility("hidden")]] void GameStub_579230(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b440) + 0x10;
}

[[gnu::visibility("hidden")]] void GameStub_580cf0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b530) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_580d10(U64 object) {
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_580d30(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b580) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_580d50(U64 object) {
  return GameRoutine_651250(object, 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_580da0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b5c0) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_580dc0(U64 object) {
  return GameRoutine_651250(object, 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_580e10(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b600) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_580e30(U64 object) {
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_580e50(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b640) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_580e70(U64 object) {
  return GameRoutine_651250(object, 0x28);
}

[[gnu::visibility("hidden")]] void GameStub_580f20(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b680) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_580f40(U64 object) {
  return GameRoutine_651250(object, 0x38);
}

[[gnu::visibility("hidden")]] void GameStub_581060(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b6c0) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_581080(U64 object) {
  return GameRoutine_651250(object, 0x20);
}

[[gnu::visibility("hidden")]] void GameStub_581100(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8b700) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_581120(U64 object) {
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_583e80(U64 object) {
  return GameRoutine_651250(object, 0x8);
}

[[gnu::visibility("hidden")]] void GameStub_587f20(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8c1c0) + 0x10;
}

[[gnu::visibility("hidden")]] void GameStub_58fc10(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x100)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_58fd10(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x110)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_594700(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x100)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_5947c0(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x110)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_597140(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8c670) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_597930(U64 object) {
  return GameRoutine_651250(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_599e90(U64 object) {
  return GameRoutine_651250(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_59eb90(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8cb38) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_59ebb0(U64 object) {
  return GameRoutine_651250(object, 0x18);
}

[[gnu::visibility("hidden")]] void GameStub_5a40b0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8cc68) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_5c7ae0(U64 object) {
  return GameRoutine_651250(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 GameStub_5c7b40(U64 object) {
  return object + 0x48;
}

[[gnu::visibility("hidden")]] U64 GameStub_5c7d40(U64 object) {
  return object + 0x30;
}

[[gnu::visibility("hidden")]] void GameStub_5d3f00(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f8d4f8) + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_5d3f20(U64 object) {
  return GameRoutine_651250(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 GameStub_5e0920(U64 object) {
  return GameRoutine_651250(object, 0x80);
}

[[gnu::visibility("hidden")]] U64 GameStub_5e1fc0(U64 object) {
  return GameRoutine_651250(object, 0xa0);
}

[[gnu::visibility("hidden")]] U64 GameStub_5ea070(U64 object) {
  return GameRoutine_651250(object, 0x68);
}

[[gnu::visibility("hidden")]] U64 GameStub_5ea080(U64 object) {
  return GameRoutine_651250(object, 0x68);
}

[[gnu::visibility("hidden")]] U64 GameStub_5ea090(U64 object) {
  return GameRoutine_651250(object, 0x68);
}

[[gnu::visibility("hidden")]] U64 GameStub_5eaee0(U64 object) {
  return GameRoutine_651250(object, 0x88);
}

[[gnu::visibility("hidden")]] U64 GameStub_5f6760(U64 object) {
  return GameRoutine_651250(object, 0x90);
}

[[gnu::visibility("hidden")]] U64 GameStub_5fc6c0() {
  return GameRoutine_1a0c2c0(reinterpret_cast<U64>(GameData_1f4efb4));
}

[[gnu::visibility("hidden")]] void GameStub_64c1a0(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x18)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_654870(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_654a40(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_668040(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_66ce30(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_689780(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_7271c0() {
  return GameRoutine_a85600(At<U64>(reinterpret_cast<U64>(GameData_21c6978),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_743180(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_75cf00(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_75d0c0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_75f1a0() {
  return GameRoutine_7450c0(At<U64>(reinterpret_cast<U64>(GameData_21cd108),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_75f1b0() {
  return GameRoutine_745b40(At<U64>(reinterpret_cast<U64>(GameData_21cd108),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_77f740(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_77ff60(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7810a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7815d0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7819a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7a71a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7ab4e0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7ab7d0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7abb50(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_7ac620(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_7b5890() {
  return GameRoutine_765b20(At<U64>(reinterpret_cast<U64>(GameData_21ca2f8),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_7b9060(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_7bc480(U64 object) {
  return object + 0x10;
}

[[gnu::visibility("hidden")]] U64 GameStub_7bc490(U64 object) {
  return object + 0x10;
}

[[gnu::visibility("hidden")]] void GameStub_803d60(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_8361b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_846e10(U64 object) {
  return GameRoutine_849600(object, 0xf);
}

[[gnu::visibility("hidden")]] U64 GameStub_8483f0(U64 object) {
  return GameRoutine_849600(object, 0x10);
}

[[gnu::visibility("hidden")]] void GameStub_857d10(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_857ff0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_8589f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_858cc0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_8a1170(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_8b07b0() {
  return GameRoutine_125d600(At<U64>(reinterpret_cast<U64>(GameData_21c9718),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_8b3130(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_8f2910(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_8f3870(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_8f84b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_8f88b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_900a70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_914800() {
  return GameRoutine_d6f4f0(At<U64>(reinterpret_cast<U64>(GameData_21f3cc0),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_9188b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_944040(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_94e4f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_94e720(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_973070(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_9c0e20(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x248)(object);
}

[[gnu::visibility("hidden")]] void GameStub_9d08b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_9d17c0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_a49f10(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_a52e40(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_a79480(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_adbc30(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_adbee0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_adc190(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_b481e0(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b4ad00(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b52010(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b520f0(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b54c60(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b56e80(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b5a470(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b5c1b0(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b5f640(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b5f720(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b5f800(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b5f8e0(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b62450(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b62530(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b64ff0(U64, U64 out) {
  At<U16>(out, 0x0) = 514;
}

[[gnu::visibility("hidden")]] void GameStub_b661b0(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b67f10(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b69260(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b6a1d0(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b6cd70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_b6ce90(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_b6e070(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b6eb20(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b6f290(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b70020(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b70880(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b70ef0(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b70fd0(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b71c70(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b74190(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b77110(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b78620(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b7b170(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_b7b250(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b7df30(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_b7e010(U64, U64 out) {
  At<U16>(out, 0x6) = 21;
}

[[gnu::visibility("hidden")]] void GameStub_bc93e0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_becab0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_bfa9e0(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_c495c0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_c5d8a0(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_c5d980(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] void GameStub_cb5390(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_cdd030(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_d0b9e0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_d69930(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_d70730() {
  return GameRoutine_636ca0(At<U64>(reinterpret_cast<U64>(GameData_2265eb8),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_d70c80(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_d88270() {
  return GameRoutine_d6f1a0(At<U64>(reinterpret_cast<U64>(GameData_21f3cc0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_d8a0f0() {
  return GameRoutine_d6f2a0(At<U64>(reinterpret_cast<U64>(GameData_21f3cc0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_df60d0(U64 object) {
  return object + 0x48;
}

[[gnu::visibility("hidden")]] U64 GameStub_df71f0(U64 object) {
  return object + 0x48;
}

[[gnu::visibility("hidden")]] void GameStub_dfe660(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_dfe9f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_dfec90(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_e14420(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_e1d770(U64 object) {
  return GameRoutine_e1d3c0(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_e1d780(U64 object) {
  return GameRoutine_e1d3c0(object, 0x2);
}

[[gnu::visibility("hidden")]] U64 GameStub_e1d790(U64 object) {
  return GameRoutine_e1d3c0(object, 0x3);
}

[[gnu::visibility("hidden")]] void GameStub_e204f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_e61d80() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e63090() {
  return GameRoutine_e9bf00(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e63460() {
  return GameRoutine_1006a90(At<U64>(reinterpret_cast<U64>(GameData_22190c0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e63470() {
  return GameRoutine_f906b0(At<U64>(reinterpret_cast<U64>(GameData_21ec7a8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e63bf0() {
  return GameRoutine_1006e20(At<U64>(reinterpret_cast<U64>(GameData_22190c0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e64330(U64 object) {
  return GameRoutine_1041ae0(object, 0xf);
}

[[gnu::visibility("hidden")]] U64 GameStub_e646b0(U64 object) {
  return GameRoutine_1041ae0(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 GameStub_e65310() {
  return GameRoutine_f90970(At<U64>(reinterpret_cast<U64>(GameData_21ec7a8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e65d20() {
  return GameRoutine_10047e0(At<U64>(reinterpret_cast<U64>(GameData_2219080),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e661b0() {
  return GameRoutine_ec0820(At<U64>(reinterpret_cast<U64>(GameData_21f4cc0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e69010() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e6a9a0() {
  return GameRoutine_ec0ae0(At<U64>(reinterpret_cast<U64>(GameData_21f4cc0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_e6fcf0() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_e7f0e0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_e929c0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_eaebb0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x10)(object);
}

[[gnu::visibility("hidden")]] void GameStub_eb4e70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_f0e880(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_f2abd0() {
  return GameRoutine_d8ce40(At<U64>(reinterpret_cast<U64>(GameData_21f3cb8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_f2c0a0() {
  return GameRoutine_10c0870(At<U64>(reinterpret_cast<U64>(GameData_21f3cd8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_f335a0() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_f34560(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_f347a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_f37c60() {
  return GameRoutine_f36600(At<U64>(reinterpret_cast<U64>(GameData_22190c8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_f37d50() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_f5d3d0() {
  return GameRoutine_10c0c60(At<U64>(reinterpret_cast<U64>(GameData_21f3cd8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_f9c080() {
  return GameRoutine_10c0c60(At<U64>(reinterpret_cast<U64>(GameData_21f3cd8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_f9d200() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_fb3120() {
  return GameRoutine_e9c500(At<U64>(reinterpret_cast<U64>(GameData_2203490),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_fca8b0() {
  return GameRoutine_cb9a30(At<U64>(reinterpret_cast<U64>(GameData_21ec7c0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1000bf0() {
  return GameRoutine_10c0c60(At<U64>(reinterpret_cast<U64>(GameData_21f3cd8),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1028d30() {
  return GameRoutine_cb9e40(At<U64>(reinterpret_cast<U64>(GameData_21ec7c0),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_10295d0() {
  return GameRoutine_cb9e40(At<U64>(reinterpret_cast<U64>(GameData_21ec7c0),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_1051050(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1051430(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1052110(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1052590(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1052a70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1052f40(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_10643a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1089260(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1089360(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_108a250(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_10d3b10(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1152bf0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1153140(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1157fb0(U64 object) {
  return GameRoutine_1157bf0(object, 0x1);
}

[[gnu::visibility("hidden")]] void GameStub_11608e0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1161920(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1161cd0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_11c3700(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_11c6430(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_11c6bf0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_11f75f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_11ffe20(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_12f2bb0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_12f2cc0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_12f2dd0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_12f2ee0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_13881d0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_138f590() {
  return GameRoutine_f38dc0(At<U64>(reinterpret_cast<U64>(GameData_21c9758),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_13faa50(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_13fe090(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1402bf0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1403670(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1403b40(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_14393c0() {
  return GameRoutine_143a790(reinterpret_cast<U64>(GameData_1a9f09e));
}

[[gnu::visibility("hidden")]] void GameStub_1439820(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_143c070() {
  return GameRoutine_143a790(reinterpret_cast<U64>(GameData_1a9f09e));
}

[[gnu::visibility("hidden")]] U64 GameStub_143c9d0() {
  return GameRoutine_143a790(reinterpret_cast<U64>(GameData_1a9f09e));
}

[[gnu::visibility("hidden")]] void GameStub_1456fd0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_1469d80(U64 object) {
  return GameRoutine_1469d90(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_146b320(U64 object) {
  return GameRoutine_1469d90(object, 0x2);
}

[[gnu::visibility("hidden")]] void GameStub_146ea20(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_148d810(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_149efb0() {
  return GameRoutine_149edd0(reinterpret_cast<U64>(GameData_1abd655));
}

[[gnu::visibility("hidden")]] U64 GameStub_149efc0() {
  return GameRoutine_149edd0(reinterpret_cast<U64>(GameData_1ab1801));
}

[[gnu::visibility("hidden")]] void GameStub_14cc690(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_15b16e0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_15b17f0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_15cad60(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x440)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1611f10(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] U64 GameStub_16199e0(U64 object) {
  return GameRoutine_161fdc0(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 GameStub_1619a00(U64 object) {
  return GameRoutine_15be5e0(object, 0x2);
}

[[gnu::visibility("hidden")]] U64 GameStub_1619a10(U64 object) {
  return GameRoutine_15be5e0(object, 0x3);
}

[[gnu::visibility("hidden")]] void GameStub_16225e0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x1d0)(target);
}

[[gnu::visibility("hidden")]] void GameStub_16226d0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x1d0)(target);
}

[[gnu::visibility("hidden")]] void GameStub_16228e0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x1d0)(target);
}

[[gnu::visibility("hidden")]] void GameStub_16229d0(U64, U64 other) {
  using Method = void (*)(U64);
  const U64 target = At<U64>(other, 0x0);
  At<Method>(At<U64>(target, 0), 0x1d0)(target);
}

[[gnu::visibility("hidden")]] void GameStub_166b0f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_166b390(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_166b670(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_166bdd0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_169a7b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16a5510(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x260)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_16a5520(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x268)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_16a5a00(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x340)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_16a5a10(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x350)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_16a89c0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16a8f40(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16a9060(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16a93d0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16a9530(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16afa80(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x90)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16d8b70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_16edbb0(U64 object) {
  return object + 0x3b8;
}

[[gnu::visibility("hidden")]] void GameStub_16fc310(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16fc870(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_16fd690(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1712b10(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x350)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_1712b20(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x340)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_1712b80(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x270)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_1712b90(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x278)(object, argument);
}

[[gnu::visibility("hidden")]] void GameStub_1733900(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1734250(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_177fc60(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1780650(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1783d40(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x478)(object);
}

[[gnu::visibility("hidden")]] void GameStub_17930c0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_17944b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_17c7b70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x20)(object);
}

[[gnu::visibility("hidden")]] void GameStub_17c7b90(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x18)(object);
}

[[gnu::visibility("hidden")]] void GameStub_17e1bd0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_18470c0(U64 object) {
  return object + 0x90;
}

[[gnu::visibility("hidden")]] U64 GameStub_1848160(U64 object) {
  return object + 0x90;
}

[[gnu::visibility("hidden")]] void GameStub_1849fc0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1852080(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_1852190(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_1852540(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1852640(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1853ff0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_186f750(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_186fc80(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_187a2c0(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_187c460(U64 object) {
  At<U32>(At<U64>(object, 0x8), 0) += 1;
}

[[gnu::visibility("hidden")]] void GameStub_1881da0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_18d6260(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_19030e0(U64 object) {
  return GameRoutine_16ddaa0(object, 0x3);
}

[[gnu::visibility("hidden")]] void GameStub_1918e70(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1919250(U64, U64 out) {
  At<U16>(out, 0x6) = 42;
}

[[gnu::visibility("hidden")]] U64 GameStub_1944e00(U64 object) {
  return object + 0x20;
}

[[gnu::visibility("hidden")]] U64 GameStub_1944e10(U64 object) {
  return object + 0x20;
}

[[gnu::visibility("hidden")]] U64 GameStub_19590c0() {
  return GameRoutine_138a380(At<U64>(reinterpret_cast<U64>(GameData_21f4000),
    0x0));
}

[[gnu::visibility("hidden")]] U64 GameStub_1959910() {
  return GameRoutine_138e060(At<U64>(reinterpret_cast<U64>(GameData_21f4000),
    0x0));
}

[[gnu::visibility("hidden")]] void GameStub_1988110(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 GameStub_19fc040(U64 object) {
  return GameRoutine_15be0e0(object, 0x2);
}

[[gnu::visibility("hidden")]] U64 GameStub_19fc050(U64 object) {
  return GameRoutine_15be0e0(object, 0x3);
}

[[gnu::visibility("hidden")]] U64 GameStub_19fc060(U64 object) {
  return GameRoutine_15be0e0(object, 0x9);
}

[[gnu::visibility("hidden")]] void GameStub_1a083f0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void GameStub_1a08c90(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}
