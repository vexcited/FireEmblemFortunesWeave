#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] U64 SdkRoutine_858be0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_e4ced8[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_859310(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_e4cf18[];
[[gnu::visibility("hidden")]] extern U8 SdkData_bbbd5c[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_859bb0(U64, U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e4100(U64, U64, U32, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85e360(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_e87080[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_85f6e0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1baa90(U64, U64, U32, U64, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1beb60(U64, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] extern U8 SdkData_e03d0[];
[[gnu::visibility("hidden")]] extern U8 SdkData_f01178[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e4c300[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_2d0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_f012a8[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_860d90(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_860da0(U64, U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_f27ee8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_f28480[];
[[gnu::visibility("hidden")]] extern U8 SdkData_f28c98[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_867460(U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_4379e0(U64, U64, U16, U16);
[[gnu::visibility("hidden")]] U64 SdkRoutine_437b60(U64, U16, U16);
[[gnu::visibility("hidden")]] U64 SdkRoutine_437da0(U64, U16, U16);
[[gnu::visibility("hidden")]] U64 SdkRoutine_4380a0(U64, U16, U16);
[[gnu::visibility("hidden")]] extern U8 SdkData_f39af8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_f39b30[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_4c1bd0(U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_361a40[];
[[gnu::visibility("hidden")]] extern U8 SdkData_ea37a8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_f64818[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_58bd60(U64, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] extern U8 SdkData_f65100[];
[[gnu::visibility("hidden")]] extern U8 SdkData_f65598[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_860a00(U32);
[[gnu::visibility("hidden")]] extern U8 SdkData_f65e38[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_8591f0(U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_875410(U64, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_ea3a98[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_5fb200(U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_62de80(U64, U64, U8);
[[gnu::visibility("hidden")]] U64 SdkRoutine_624280(U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_624540(U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_63de00(U64, U32, U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_e89d30[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e89c10[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_668c40(U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_695b00(U64, U64, U32);
[[gnu::visibility("hidden")]] extern U8 SdkData_e89060[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f0320(U64, U64, U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f04b0(U64, U64, U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f2fd0(U64, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f3190(U64, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fcad0(U64, U64, U32, U64, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fccb0(U64, U64, U32, U64, U32,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_761130(U64, U64, U32, U64, U64,
  U32, U32, U32);

[[gnu::visibility("hidden")]] U64 SdkStub_ae0e0(U64 object, U64 a1) {
  return SdkRoutine_858be0(a1, object + 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_aea90(U64 object, U64 a1) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e4ced8);
  return SdkRoutine_859310(value0, object, a1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_aeab0(U64 object, U64 a1) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e4cf18);
  return SdkRoutine_859310(value0, object, a1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_b93b0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_bbbd5c);
  return SdkRoutine_859bb0(object, a1, a2, a3, a4, value0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3e40(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_e4100(object + 0x8, a1, 0x301u, a2, a3, 0x0u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_17c6e0(U64 object, U64 a1) {
  return SdkRoutine_85e360(object, a1, At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U64 SdkStub_1a2490(U64 object) {
  const U64 value0 = At<U64>(reinterpret_cast<U64>(SdkData_e87080), 0x0);
  return SdkRoutine_85f6e0(value0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1ba480(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_1baa90(object + 0x8, a1, 0x1000u, a2, 0x100u, a3, 0x64u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1be340(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_1beb60(object + 0x8, a1, 0x1000u, a2, 0x123u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1e20d0(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f01178);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1e2690(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f012a8);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1e6d10(U64 object, U64 a1) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_bbbd5c);
  return SdkRoutine_860d90(object, value0, a1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1e7e60(U64 object, U64 a1) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_bbbd5c);
  return SdkRoutine_860da0(object, value0, a1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_2ae260(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f27ee8);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_2aed80(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f28480);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_2bdc40(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f28c98);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_3623a0(U64 object, U32 a1, U32 a2,
  U32 a3) {
  return SdkRoutine_867460(a1, a2, a3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_430440(U64 object) {
  const U16 value0 = At<U16>(At<U64>(object, 0x40), 0x9a);
  const U16 value1 = At<U16>(At<U64>(object, 0x40), 0x9c);
  return SdkRoutine_4379e0(object, At<U64>(object, 0x60), value0, value1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4320e0(U64 object) {
  const U16 value0 = At<U16>(At<U64>(object, 0x40), 0x9a);
  const U16 value1 = At<U16>(At<U64>(object, 0x40), 0x9c);
  return SdkRoutine_437b60(object, value0, value1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_432130(U64 object) {
  const U16 value0 = At<U16>(At<U64>(object, 0x40), 0x9a);
  const U16 value1 = At<U16>(At<U64>(object, 0x40), 0x9c);
  return SdkRoutine_437da0(object, value0, value1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_432180(U64 object) {
  const U16 value0 = At<U16>(At<U64>(object, 0x40), 0x9a);
  const U16 value1 = At<U16>(At<U64>(object, 0x40), 0x9c);
  return SdkRoutine_4380a0(object, value0, value1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_476850(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f39af8);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_476bf0(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f39b30);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd500(U64 object) {
  return SdkRoutine_4c1bd0(object, At<U64>(object, 0x18));
}

[[gnu::visibility("hidden")]] U64 SdkStub_5859f0(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_361a40);
  const U64 value1 = reinterpret_cast<U64>(SdkData_ea37a8);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_587430(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f64818);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_589fc0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_58bd60(object + 0x8, a1, 0x1438u, a2, 0x38u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_58da60(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f65100);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5957f0(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f65598);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_596ee4(U64 object) {
  return SdkRoutine_860a00(0x1u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a2ed0(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = reinterpret_cast<U64>(SdkData_f65e38);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5d4210(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_8591f0(a1, At<U64>(a2, 0x8));
}

[[gnu::visibility("hidden")]] U64 SdkStub_5de480(U64 object, U64 a1) {
  return SdkRoutine_875410(a1, At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U64 SdkStub_5ec080(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_361a40);
  const U64 value1 = reinterpret_cast<U64>(SdkData_ea3a98);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5fbf90(U64 object, U64 a1) {
  return SdkRoutine_5fb200(a1, object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_639640(U64 object) {
  return SdkRoutine_62de80(At<U64>(object, 0x8), At<U64>(object, 0x18),
    At<U8>(object, 0x32));
}

[[gnu::visibility("hidden")]] U64 SdkStub_63def0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_624280(At<U64>(object, 0x88), object, a1, a2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_63df10(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_624540(At<U64>(object, 0x88), object, a1, a2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_63e0d0(U64 object) {
  return SdkRoutine_63de00(At<U64>(object, 0x8), At<U32>(object, 0x24),
    object + 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_656780(U64 object) {
  const U64 value0 = At<U64>(reinterpret_cast<U64>(SdkData_e89d30), 0x0);
  const U64 value1 = At<U64>(reinterpret_cast<U64>(SdkData_e89c10), 0x0);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66cad0(U64 object, U64 a1) {
  return SdkRoutine_668c40(a1, At<U64>(object, 0x30));
}

[[gnu::visibility("hidden")]] U64 SdkStub_6a4c80(U64 object) {
  return SdkRoutine_695b00(object, At<U64>(object, 0x1eb8), At<U32>(object,
    0x1ec0));
}

[[gnu::visibility("hidden")]] U64 SdkStub_6b5970(U64 object) {
  const U64 value0 = reinterpret_cast<U64>(SdkData_e03d0);
  const U64 value1 = At<U64>(reinterpret_cast<U64>(SdkData_e89060), 0x0);
  const U64 value2 = reinterpret_cast<U64>(SdkData_e4c300);
  return SdkRoutine_2d0(value0, value1, value2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eecb0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6f0320(object + 0x8, a1, a2, 0x744u, a3, 0x57u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eecd0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6f04b0(object + 0x8, a1, a2, 0xc8u, a3, 0x58u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef5a0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f2fd0(object + 0x8, a1, 0x58u, a2, 0xbbeu);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef5c0(U64 object, U64 a1, U32 a2) {
  return SdkRoutine_6f3190(object + 0x8, a1, 0x58u, a2, 0xbbfu);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f97d0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fcad0(object + 0x8, a1, 0x54u, a2, 0x81u, a3, 0x504u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f97f0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fcad0(object + 0x8, a1, 0x60u, a2, 0x81u, a3, 0x505u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9810(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fcad0(object + 0x8, a1, 0x34u, a2, 0x81u, a3, 0x506u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9830(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fcad0(object + 0x8, a1, 0x34u, a2, 0x81u, a3, 0x507u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9850(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fccb0(object + 0x8, a1, 0x54u, a2, 0x81u, a3, 0x508u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9870(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fccb0(object + 0x8, a1, 0x60u, a2, 0x81u, a3, 0x509u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9890(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fccb0(object + 0x8, a1, 0x34u, a2, 0x81u, a3, 0x50au);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f98b0(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fccb0(object + 0x8, a1, 0x34u, a2, 0x81u, a3, 0x50bu);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9930(U64 object, U64 a1, U64 a2,
  U32 a3) {
  return SdkRoutine_6fcad0(object + 0x8, a1, 0x8u, a2, 0x81u, a3, 0x513u);
}

[[gnu::visibility("hidden")]] U64 SdkStub_760620(U64 object, U64 a1, U64 a2,
  U64 a3, U32 a4, U32 a5) {
  return SdkRoutine_761130(object + 0x8, a1, 0x480u, a2, a3, a4, a5, 0x12eu);
}
