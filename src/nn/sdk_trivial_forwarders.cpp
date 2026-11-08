#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 SdkRoutine_857220(U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85a0b0(U64, U32);
[[gnu::visibility("hidden")]] extern U8 SdkData_f2b190[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_868b70(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86f7e0(U64, U32);
[[gnu::visibility("hidden")]] extern U8 SdkData_e731d0[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e4be67[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_8584a0(U64);

[[gnu::visibility("hidden")]] U64 SdkStub_9d8b0(U64 object) {
  return SdkRoutine_857220(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_bab50(U64 object) {
  return SdkRoutine_857220(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ccbe0(U64 object) {
  return SdkRoutine_85a0b0(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_cec40(U64 object) {
  return SdkRoutine_85a0b0(object, 0x20);
}

[[gnu::visibility("hidden")]] void SdkStub_dbcf0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x90)(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ff6d0(U64 object) {
  return SdkRoutine_85a0b0(object, 0x310);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ff710(U64 object) {
  return SdkRoutine_85a0b0(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_12eff0(U64 object) {
  return SdkRoutine_857220(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 SdkStub_176920(U64 object) {
  return SdkRoutine_857220(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1a6510(U64 object) {
  return SdkRoutine_857220(object, 0x140);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1a6520(U64 object) {
  return SdkRoutine_857220(object, 0x130);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1a6ad0(U64 object) {
  return SdkRoutine_857220(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_2313e0(U64 object) {
  return SdkRoutine_857220(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_23a080(U64 object) {
  return SdkRoutine_857220(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 SdkStub_3f5790(U64 object) {
  return SdkRoutine_857220(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_3fe910() {
  return SdkRoutine_868b70(reinterpret_cast<U64>(SdkData_f2b190));
}

[[gnu::visibility("hidden")]] U64 SdkStub_456870(U64 object) {
  return SdkRoutine_857220(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_457ab0(U64 object) {
  return SdkRoutine_857220(object, 0xc0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4581d0(U64 object) {
  return SdkRoutine_857220(object, 0x358);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd2a0(U64 object) {
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] void SdkStub_4d36a0(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x10)(object, argument);
}

[[gnu::visibility("hidden")]] void SdkStub_4d36b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x20)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3da0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x0)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3db0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x10)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3dc0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x18)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3dd0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x20)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3de0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x28)(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4da060(U64 object) {
  return SdkRoutine_857220(object, 0x38);
}

[[gnu::visibility("hidden")]] void SdkStub_4e69b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x10)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6c80(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x18)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6c90(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x20)(object, argument);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6d00(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x30)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6d20(U64 object, U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x28)(object, argument);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6d30(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x30)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4e6d50(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x40)(object);
}

[[gnu::visibility("hidden")]] void SdkStub_4e7480(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_512900(U64 object) {
  return SdkRoutine_86f7e0(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_592960(U64 object) {
  return object + 0x28;
}

[[gnu::visibility("hidden")]] U64 SdkStub_592b20(U64 object) {
  return object + 0x30;
}

[[gnu::visibility("hidden")]] U64 SdkStub_5dd0e0(U64 object) {
  return object + 0x8;
}

[[gnu::visibility("hidden")]] void SdkStub_629ca0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(SdkData_e731d0) + 0x10;
}

[[gnu::visibility("hidden")]] U64 SdkStub_62aaa0(U64 object) {
  return object + 0x18;
}

[[gnu::visibility("hidden")]] U64 SdkStub_636720(U64 object) {
  return object + 0x3c0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_63cd40(U64 object) {
  return object + 0x58;
}

[[gnu::visibility("hidden")]] U64 SdkStub_646160(U64 object) {
  return object + 0x170;
}

[[gnu::visibility("hidden")]] U64 SdkStub_65b8b0(U64 object) {
  return SdkRoutine_857220(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6af990() {
  return SdkRoutine_8584a0(reinterpret_cast<U64>(SdkData_e4be67));
}

[[gnu::visibility("hidden")]] U64 SdkStub_8331f0(U64 object) {
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_83ff70(U64 object) {
  return SdkRoutine_857220(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_841da0(U64 object) {
  return SdkRoutine_857220(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_844030(U64 object) {
  return SdkRoutine_857220(object, 0x48);
}
