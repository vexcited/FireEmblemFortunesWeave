#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern U8 CudaDriverData_26ee00[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_13b6326[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430010[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430040[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_251d0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_254e0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25630(U64, U32);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14325d0[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1432610[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12de40(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98490(U64, U32);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1434760[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_86a90(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_108070(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_106940(U64, U32);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_143bd80[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1412140[];
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12dea0(U64);
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1431f70[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1431fa0[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430070[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14300a0[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14300d0[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1431fd0[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1432080[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430100[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14320b0[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430130[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1432288[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430160[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14322e8[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1432348[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_14322b8[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1432378[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1430190[];
[[gnu::visibility("hidden")]] extern U8 CudaDriverData_1432318[];

[[gnu::visibility("hidden")]] U64 CudaDriverStub_380() {
  return reinterpret_cast<U64>(CudaDriverData_26ee00);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_390() {
  return reinterpret_cast<U64>(CudaDriverData_13b6326);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_8210() {
  return reinterpret_cast<U64>(CudaDriverData_1430010);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c8b0() {
  return reinterpret_cast<U64>(CudaDriverData_1430040);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_251c0(U64 object) {
  return CudaDriverRoutine_251d0(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_254d0(U64 object) {
  return CudaDriverRoutine_254e0(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_25620(U64 object) {
  return CudaDriverRoutine_25630(object, 0x1);
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_55e00(U64 object) {
  return At<U32>(object, 0xbc) == 3u;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_77cd0() {
  return reinterpret_cast<U64>(CudaDriverData_14325d0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_78870() {
  return
    CudaDriverRoutine_12de40(reinterpret_cast<U64>(CudaDriverData_1432610));
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_86e80(U64 object) {
  return At<U64>(object, 0x20) != 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_972a0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x8)(object);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_972b0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x10)(object);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_972c0(U64 object,
    U64 argument) {
  using Method = void (*)(U64, U64);
  At<Method>(At<U64>(object, 0), 0x18)(object, argument);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_972e0(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x28)(object);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_97300(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x38)(object);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_97320(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0x48)(object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_98590(U64 object) {
  return CudaDriverRoutine_98490(object, 0x1);
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_985a0(U64 object) {
  return At<U32>(object, 0xbc) == 2u;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_9ab70(U64 object) {
  return At<U32>(object, 0xc50) == 5u;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_9ac10(U64 object) {
  return At<U32>(object, 0xc50) == 6u;
}

[[gnu::visibility("hidden")]] U8 CudaDriverStub_9afa0(U64 object) {
  return At<U8>(object, 0xd28);
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_9eab0(U64 object) {
  return At<U32>(object, 0xc0) != 3020u;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_b9300(U64 object) {
  return At<U64>(object, 0x420) != 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_d2c10() {
  return CudaDriverRoutine_86a90(reinterpret_cast<U64>(CudaDriverData_1434760));
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_d4800(U64 object) {
  return At<U64>(object, 0x150) != 0;
}

[[gnu::visibility("hidden")]] U8 CudaDriverStub_efe90(U64 object) {
  return At<U8>(object, 0x7c);
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_f1460(U64 object) {
  return At<U32>(object, 0x78) == 2u;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_f1470(U64 object) {
  return At<U64>(object, 0x28) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_f2fe0(U64 object) {
  return At<U32>(object, 0x78) == 0u;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_f78c0(U64 object) {
  return At<U32>(object, 0x0) == 3u;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102040(U64 object) {
  return object + 0x40;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102050(U64 object) {
  return object + 0xa8;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_102360(U64 object) {
  CudaDriverRoutine_108070(object + 0x28);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_105c00(U64 object) {
  return CudaDriverRoutine_106940(object, 0x1);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10e9f0() {
  const U64 value = At<U64>(reinterpret_cast<U64>(CudaDriverData_143bd80),
    0x0);
  return CudaDriverRoutine_108070(value);
}

[[gnu::visibility("hidden")]] U8 CudaDriverStub_10eba0(U64 object) {
  return At<U8>(object, 0x160);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_121020() {
  return reinterpret_cast<U64>(CudaDriverData_1412140);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_121ff0(U64 object) {
  return object + 0x38;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_122010(U64 object, U8 value) {
  At<U8>(object, 0x40) = value;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_126ec0(U64 object) {
  CudaDriverRoutine_12dea0(object + 0x3a8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_197d80(U64 object) {
  using Method = void (*)(U64);
  At<Method>(At<U64>(object, 0), 0xa0)(object);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1aec70() {
  return reinterpret_cast<U64>(CudaDriverData_1431f70);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1aec80() {
  return reinterpret_cast<U64>(CudaDriverData_1431fa0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1aec90() {
  return reinterpret_cast<U64>(CudaDriverData_1430070);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1aeca0() {
  return reinterpret_cast<U64>(CudaDriverData_14300a0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1aecb0() {
  return reinterpret_cast<U64>(CudaDriverData_14300d0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1b2c50() {
  return reinterpret_cast<U64>(CudaDriverData_1431fd0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1bc4e0() {
  return reinterpret_cast<U64>(CudaDriverData_1432080);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1d03b0() {
  return reinterpret_cast<U64>(CudaDriverData_1430100);
}

[[gnu::visibility("hidden")]] U8 CudaDriverStub_1d9a90(U64 object) {
  return At<U8>(object, 0x50);
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_1dbf40(U64 object) {
  return At<U64>(object, 0x168) != 0;
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_1dbff0(U64 object) {
  return At<U64>(object, 0x210) != 0;
}

[[gnu::visibility("hidden")]] U8 CudaDriverStub_1dc6e0(U64 object) {
  return At<U8>(object, 0x170);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1ee210() {
  return reinterpret_cast<U64>(CudaDriverData_14320b0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1f8040() {
  return reinterpret_cast<U64>(CudaDriverData_1430130);
}

[[gnu::visibility("hidden")]] bool CudaDriverStub_201570(U64 object) {
  return At<U64>(object, 0x0) == 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_228ea0() {
  return reinterpret_cast<U64>(CudaDriverData_1432288);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2300c0() {
  return reinterpret_cast<U64>(CudaDriverData_1430160);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_231730() {
  return reinterpret_cast<U64>(CudaDriverData_14322e8);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_232ea0() {
  return reinterpret_cast<U64>(CudaDriverData_1432348);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_238f50() {
  return reinterpret_cast<U64>(CudaDriverData_14322b8);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_242170() {
  return reinterpret_cast<U64>(CudaDriverData_1432378);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_242480() {
  return reinterpret_cast<U64>(CudaDriverData_1430190);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_243af0() {
  return reinterpret_cast<U64>(CudaDriverData_1432318);
}
