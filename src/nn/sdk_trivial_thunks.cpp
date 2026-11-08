#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e86c48;
[[gnu::visibility("hidden")]] U64 SdkRoutine_859220(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_857220(U64, U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e86c58;
[[gnu::visibility("hidden")]] U64 SdkRoutine_ce840(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85a0b0(U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_cea20(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85aa70(U64, U64, U32);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e86d10;
[[gnu::visibility("hidden")]] U64 SdkRoutine_e4310(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e5170(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f10c0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_ea990(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_eb890(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f2470(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e46a0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e5a40(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e5c10(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e5ff0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e5040(U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_ebcc0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_ebfe0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_ec130(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e52b0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_ecbe0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e86e10;
[[gnu::visibility("hidden")]] U64 SdkRoutine_12c0c0(U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e86e18;
[[gnu::visibility("hidden")]] U64 SdkRoutine_133630(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134130(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1344d0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1349f0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134c20(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134ea0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_134fb0(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_176130(U64, U64, U64, U64, U64,
  U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_176270(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_176380(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1764a0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1765e0(U64, U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1a3a80(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85fa40(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1b6eb0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_e3a20(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1b69a0(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1b96e0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1b9c20(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1bca60(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f2150(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1d3890(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1d46d8(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1d971c(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1da334(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1d835c(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1e9720(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1e9880(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ecad0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_856190(U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_3fc360(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_868c80(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_868cb0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f2740(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88398;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883a0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883a8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883b0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883b8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883c0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883c8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883d0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883d8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883e0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883e8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883f0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e883f8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88400;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88408;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88410;
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d7b0(U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88420;
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d850(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d860(U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88540;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88530;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88520;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88670;
[[gnu::visibility("hidden")]] U64 SdkRoutine_86e860(U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88730;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88778;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88768;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88758;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88900;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88780;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88908;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e889e8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e889e0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88a28;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88a30;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88a90;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88aa8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88aa0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88a98;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ac8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ae0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ae8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b00;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b50;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b28;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b80;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b48;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b88;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88b20;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ba8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ca8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ce0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88cd8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88cd0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88cc8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88c50;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88cf0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88ce8;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88cc0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e88dc0;
[[gnu::visibility("hidden")]] U64 SdkRoutine_e7a50(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_efbd0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_57ed20(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_584630(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1df3d0(U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5a3df0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_199360(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5ffc20(U64, U64, U32);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e89940;
[[gnu::visibility("hidden")]] U64 SdkRoutine_629ca0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_9d750(U64);
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e899e0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e89ad0;
[[gnu::visibility("hidden")]] extern const U64 SdkSlot_e89b10;
[[gnu::visibility("hidden")]] U64 SdkRoutine_65fce0(U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6638a0(U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_668a70(U64, U64, U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_669000(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_66ba40(U64, U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_66bd00(U64, U64, U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_688e40(U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_691060(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6913c0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ed700(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1959a0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f09b0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f1660(U64, U64, U64, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f17e0(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ea790(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f20f0(U64, U64, U64, U64, U64,
  U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f22d0(U64, U64, U64, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f2570(U64, U64, U64, U64, U64,
  U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5c4e10(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5c57e0(U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f2d80(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f2ea0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f35b0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f36f0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_2b4ef0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f4d90(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1e6480(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f4eb0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5c50e0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ddc20(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1dd950(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_400a50(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_49e600(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5670(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1eadb0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5780(U64, U64, U64, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5a60(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5b80(U64, U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5e10(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f5f30(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6400(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6510(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6630(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6880(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f6ec0(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7010(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7130(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7260(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7620(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7d60(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_2b4b70(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f7f80(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f80b0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f81e0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f8330(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f9e20(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_1ea890(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fb2d0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fb700(U64, U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6f1fe0(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fb850(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_2c82ac(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fb970(U64, U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fba90(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fbcd0(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fbdf0(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fbf10(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fc050(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fc410(U64, U64, U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_6fc680(U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_595da0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87ab60(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_760b70(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_761e10(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_4918b0(U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_76dd00(U64, U64, U64, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_76e140(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_76e560(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_76e6a0(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_76e800(U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_76eb00(U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87c850(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87c890(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87c8b0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87cfe0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87c9c0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_87d570(U64);

[[gnu::visibility("hidden")]] U64 SdkStub_adb70(U64 object) {
  At<U64>(object, 0) = SdkSlot_e86c48 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ae020(U64 object) {
  At<U64>(object, 0) = SdkSlot_e86c58 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x58);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ce950(U64 object) {
  SdkRoutine_ce840(object);
  return SdkRoutine_85a0b0(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ceb30(U64 object) {
  SdkRoutine_cea20(object);
  return SdkRoutine_85a0b0(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_cebc0(U64 object, U64 a1) {
  return SdkRoutine_85aa70(object, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_cec00(U64 object) {
  At<U64>(object, 0) = SdkSlot_e86d10 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_da6e0(U64 object) {
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e1a90(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x200, 0x25);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e31c0(U64 object, U64 a1) {
  return SdkRoutine_e5170(object + 0x8, a1, 0x25b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3200(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_f10c0(object + 0x8, a1, a2, 0x200, 0x25f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3310(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_f10c0(object + 0x8, a1, a2, 0x200, 0x278);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3450(U64 object, U64 a1) {
  return SdkRoutine_ea990(object + 0x8, a1, 0x100, 0x320);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3480(U64 object, U64 a1) {
  return SdkRoutine_eb890(object + 0x8, a1, 0x334);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3490(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_f2470(object + 0x8, a1, a2, 0x3e9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e34a0(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x301, 0x3ea);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3e60(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x301, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3e70(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x301, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3e80(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x301, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3e90(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x301, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e3ee0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_e46a0(object + 0x8, a1, a2, 0x301, 0x7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e4060(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_e5a40(object + 0x8, a1, a2, 0x301, 0xb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e4070(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_e5a40(object + 0x8, a1, a2, 0x301, 0xc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e4080(U64 object, U64 a1) {
  return SdkRoutine_e4310(object + 0x8, a1, 0x301, 0xd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e4090(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_e5c10(object + 0x8, a1, a2, 0x301, 0xe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_e40f0(U64 object, U64 a1) {
  return SdkRoutine_e5ff0(object + 0x8, a1, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ea940(U64 object, U64 a1) {
  return SdkRoutine_ea990(object + 0x8, a1, 0x60, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_eb6c0(U64 object) {
  return SdkRoutine_e5040(object + 0x8, 0x42);
}

[[gnu::visibility("hidden")]] U64 SdkStub_eb6f0(U64 object, U64 a1) {
  return SdkRoutine_ebcc0(object + 0x8, a1, 0x47);
}

[[gnu::visibility("hidden")]] U64 SdkStub_eb710(U64 object, U64 a1) {
  return SdkRoutine_eb890(object + 0x8, a1, 0x49);
}

[[gnu::visibility("hidden")]] U64 SdkStub_eb760(U64 object, U64 a1) {
  return SdkRoutine_ebfe0(object + 0x8, a1, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_eb770(U64 object, U64 a1) {
  return SdkRoutine_ec130(object + 0x8, a1, 0x51);
}

[[gnu::visibility("hidden")]] U64 SdkStub_eb780(U64 object, U64 a1) {
  return SdkRoutine_ebfe0(object + 0x8, a1, 0x60);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ebad0(U64 object, U64 a1) {
  return SdkRoutine_e52b0(object + 0x8, a1, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ecac0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_ecbe0(object + 0x8, a1, a2, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ecae0(U64 object) {
  return SdkRoutine_e5040(object + 0x8, 0x22);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ecb10(U64 object) {
  return SdkRoutine_e5040(object + 0x8, 0x24);
}

[[gnu::visibility("hidden")]] U64 SdkStub_ecbd0(U64 object, U64 a1) {
  return SdkRoutine_ebfe0(object + 0x8, a1, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_f0a60(U64 object, U64 a1) {
  return SdkRoutine_e5170(object + 0x8, a1, 0x17);
}

[[gnu::visibility("hidden")]] U64 SdkStub_f0a70(U64 object, U64 a1) {
  return SdkRoutine_e52b0(object + 0x8, a1, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_12f3c0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e86e10 + 0x10;
  SdkRoutine_12c0c0(object);
  return SdkRoutine_857220(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 SdkStub_12f5c0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e86e18 + 0x10;
  SdkRoutine_12c0c0(object);
  return SdkRoutine_857220(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133400(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_133630(object + 0x8, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133410(U64 object, U64 a1) {
  return SdkRoutine_e5170(object + 0x8, a1, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133bb0(U64 object, U64 a1) {
  return SdkRoutine_134130(object + 0x8, a1, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133bd0(U64 object, U64 a1) {
  return SdkRoutine_134130(object + 0x8, a1, 0x5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133c90(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0xc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133d50(U64 object, U64 a1) {
  return SdkRoutine_1349f0(object + 0x8, a1, 0x13);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133d60(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x14);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133db0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_134c20(object + 0x8, a1, a2, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133e00(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_134ea0(object + 0x8, a1, a2, 0x1b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_133e20(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_134fb0(object + 0x8, a1, a2, a3, 0x1d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1760d0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6) {
  return SdkRoutine_176130(object + 0x8, a1, a2, a3, a4, a5, a6, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1760e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1760f0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_176380(object + 0x8, a1, a2, a3, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_176100(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_176110(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1764a0(object + 0x8, a1, a2, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_176120(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_1765e0(object + 0x8, a1, a2, a3, a4, 0xa);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1a2da0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1a3a80(object + 0x8, a1, a2, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b4000(U64 object) {
  SdkRoutine_85fa40(object);
  return SdkRoutine_857220(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b60a0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b6eb0(object + 0x8, a1, a2, 0x6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b64f0(U64 object, U64 a1) {
  return SdkRoutine_e3a20(object + 0x8, a1, 0x8c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b6530(U64 object, U64 a1) {
  return SdkRoutine_e3a20(object + 0x8, a1, 0xa0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b6900(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b69a0(object + 0x8, a1, a2, 0x80, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b74d0(U64 object) {
  return SdkRoutine_e5040(object + 0x8, 0x3e7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b7ea0(U64 object, U64 a1) {
  return SdkRoutine_ea990(object + 0x8, a1, 0x80, 0x16);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b8420(U64 object, U64 a1) {
  return SdkRoutine_e52b0(object + 0x8, a1, 0xd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b8a80(U64 object, U64 a1) {
  return SdkRoutine_ea990(object + 0x8, a1, 0x801, 0x98);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b8de0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b96e0(object + 0x8, a1, a2, 0x71);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b8e00(U64 object, U64 a1) {
  return SdkRoutine_ebfe0(object + 0x8, a1, 0x79);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1b90f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b9c20(object + 0x8, a1, a2, 0x8c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1bca10(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1bca60(object + 0x8, a1, a2, 0x80, 0x64);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1be330(U64 object, U64 a1) {
  return SdkRoutine_ea990(object + 0x8, a1, 0x1000, 0x122);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1be3f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_f2150(object + 0x8, a1, a2, 0x190);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1d6798(U64 object, U64 a1) {
  return SdkRoutine_1d3890(object + 0x8, a1, 0xdc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1d8904(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1d46d8(object + 0x8, a1, a2, 0x20, 0xf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1d89e4(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1d971c(object + 0x8, a1, a2, 0x42);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1d8bc4(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_1da334(object + 0x8, a1, a2, a3, 0xb5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1d8ca4(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1d835c(object + 0x8, a1, a2, 0x1f4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1e96d0(U64 object, U64 a1) {
  return SdkRoutine_1e9720(object + 0x8, a1, 0x100, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1e9700(U64 object, U64 a1) {
  return SdkRoutine_1e9880(object + 0x8, a1, 0x40, 0x2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_1ec120(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ecad0(object + 0x8, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_317e30(U64 object) {
  return SdkRoutine_856190(object + 0xc, 0x0, 0x36a8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_3fc400(U64 object) {
  SdkRoutine_3fc360(object);
  return SdkRoutine_857220(object, 0x6f0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_40ebc0(U64 object) {
  SdkRoutine_868c80(object);
  return SdkRoutine_857220(object, 0x10b0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_40ec00(U64 object) {
  SdkRoutine_868cb0(object);
  return SdkRoutine_857220(object, 0x4010);
}

[[gnu::visibility("hidden")]] U64 SdkStub_495690(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_f2740(object + 0x8, a1, a2, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd3f0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88398 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd530(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883a0 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd5a0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883a8 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd600(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883b0 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd660(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883b8 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd6c0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883c0 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd720(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883c8 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd780(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883d0 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd7e0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883d8 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd840(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883e0 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd8a0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883e8 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd900(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883f0 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd960(U64 object) {
  At<U64>(object, 0) = SdkSlot_e883f8 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cd9c0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88400 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cda20(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88408 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cda80(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88410 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4cdd30(U64 object) {
  SdkRoutine_86d7b0(object);
  return SdkRoutine_857220(object, 0x5c0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4d3380(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88420 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4d9cb0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88540 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4d9d70(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88530 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4da010(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88520 + 0x10;
  SdkRoutine_859220(object);
  return SdkRoutine_857220(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e4920(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88670 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e7250(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88730 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e7ca0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88778 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e7ce0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88768 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e7d60(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88758 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f1300(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88900 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f43f0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88780 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f4b70(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88908 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_504410(U64 object) {
  At<U64>(object, 0) = SdkSlot_e889e8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_504450(U64 object) {
  At<U64>(object, 0) = SdkSlot_e889e0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_50aad0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88a28 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_512940(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88a30 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_51f570(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88a90 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_526c00(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88aa8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_526e90(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88aa0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5272e0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88a98 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_528330(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ac8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5298e0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ae0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_52d330(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ae8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_534440(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b00 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_536390(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b50 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_536680(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b28 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_538b10(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b80 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_53ae80(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b48 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_53cc70(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b88 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_53d080(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88b20 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_542d80(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ba8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_561890(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ca8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_562360(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ce0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5623a0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88cd8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5623e0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88cd0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_562420(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88cc8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_564810(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88c50 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86e860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_564f70(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88cf0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5654b0(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88ce8 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_565c70(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88cc0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_577860(U64 object) {
  At<U64>(object, 0) = SdkSlot_e88dc0 + 0x10;
  SdkRoutine_86d850(object);
  return SdkRoutine_86d860(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e470(U64 object, U64 a1) {
  return SdkRoutine_e7a50(object + 0x8, a1, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e4a0(U64 object, U64 a1) {
  return SdkRoutine_eb890(object + 0x8, a1, 0x192);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e4b0(U64 object, U64 a1) {
  return SdkRoutine_e7a50(object + 0x8, a1, 0x193);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e4e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b96e0(object + 0x8, a1, a2, 0x195);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e4f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1b96e0(object + 0x8, a1, a2, 0x196);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e500(U64 object, U64 a1) {
  return SdkRoutine_efbd0(object + 0x8, a1, 0x197);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e520(U64 object, U64 a1) {
  return SdkRoutine_e5170(object + 0x8, a1, 0x199);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e550(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57ed20(object + 0x8, a1, a2, 0x19b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e560(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_57ed20(object + 0x8, a1, a2, 0x19c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e640(U64 object, U64 a1) {
  return SdkRoutine_e5170(object + 0x8, a1, 0x515);
}

[[gnu::visibility("hidden")]] U64 SdkStub_57e650(U64 object, U64 a1) {
  return SdkRoutine_e5170(object + 0x8, a1, 0x516);
}

[[gnu::visibility("hidden")]] U64 SdkStub_583fb0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_584630(object + 0x8, a1, a2, 0x100, 0x67);
}

[[gnu::visibility("hidden")]] U64 SdkStub_584010(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_584630(object + 0x8, a1, a2, 0x298, 0xc9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_595b40(U64 object, U64 a1) {
  return SdkRoutine_1e9720(object + 0x8, a1, 0x100, 0x5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_595b50(U64 object, U64 a1) {
  return SdkRoutine_1e9720(object + 0x8, a1, 0x100, 0xa);
}

[[gnu::visibility("hidden")]] U64 SdkStub_595b60(U64 object, U64 a1) {
  return SdkRoutine_1e9720(object + 0x8, a1, 0x8, 0xb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a3160(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x67);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a3190(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x6a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5a39f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_5a3df0(object + 0x8, a1, a2, 0x7d0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5f92f0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5f93d0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5ffc00(U64 object, U64 a1) {
  return SdkRoutine_5ffc20(object, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_62b400(U64 object) {
  At<U64>(object, 0) = SdkSlot_e89940 + 0x10;
  SdkRoutine_629ca0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_62ed50(U64 object) {
  At<U64>(object, 0) = SdkSlot_e899e0 + 0x10;
  SdkRoutine_629ca0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_639750(U64 object) {
  At<U64>(object, 0) = SdkSlot_e89ad0 + 0x10;
  SdkRoutine_629ca0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_63e190(U64 object) {
  At<U64>(object, 0) = SdkSlot_e89b10 + 0x10;
  SdkRoutine_629ca0(object);
  return SdkRoutine_9d750(object);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65fcd0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_65fce0(object, a1, a2, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_664a40(U64 object, U64 a1) {
  return SdkRoutine_6638a0(object, a1, 0x0, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_668c20(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_668a70(object, a1, a2, a3, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_669170(U64 object, U64 a1) {
  return SdkRoutine_669000(object, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66bce0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_66ba40(object, a1, a2, a3, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66bfa0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_66bd00(object, a1, a2, a3, 0x0, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66fe10(U64 object) {
  return SdkRoutine_688e40(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_691370(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_691060(object, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_691650(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6913c0(object, a1, a2, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eea10(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ed700(object + 0x8, a1, a2, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eea20(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x29);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eed70(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x67);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eed80(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x68);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eedd0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x78);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eede0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f09b0(object + 0x8, a1, a2, 0x79);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eee60(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x80);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6eef20(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x8a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef180(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5) {
  return SdkRoutine_6f1660(object + 0x8, a1, a2, a3, a4, a5, 0x132);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef1d0(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x137);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef1f0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f17e0(object + 0x8, a1, a2, a3, 0x140);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef200(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x141);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef2f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea790(object + 0x8, a1, a2, 0x1f8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef300(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea790(object + 0x8, a1, a2, 0x1f9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef350(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6f20f0(object + 0x8, a1, a2, a3, a4, 0x100, 0x1fe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef380(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5) {
  return SdkRoutine_6f22d0(object + 0x8, a1, a2, a3, a4, a5, 0x201);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef3b0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5, U64 a6) {
  return SdkRoutine_6f2570(object + 0x8, a1, a2, a3, a4, a5, a6, 0x203);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef4c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x3e8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef540(U64 object, U64 a1) {
  return SdkRoutine_5c4e10(object + 0x8, a1, 0x50, 0xbb8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef550(U64 object, U64 a1) {
  return SdkRoutine_5c57e0(object + 0x8, a1, 0x50, 0xbb9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef560(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xbba);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef570(U64 object, U64 a1) {
  return SdkRoutine_6f2d80(object + 0x8, a1, 0xbbb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef580(U64 object, U64 a1) {
  return SdkRoutine_6f2ea0(object + 0x8, a1, 0xbbc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef590(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xbbd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef620(U64 object, U64 a1) {
  return SdkRoutine_5c4e10(object + 0x8, a1, 0x80, 0xbc4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef630(U64 object, U64 a1) {
  return SdkRoutine_5c57e0(object + 0x8, a1, 0x80, 0xbc5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef640(U64 object, U64 a1) {
  return SdkRoutine_6f35b0(object + 0x8, a1, 0xbc6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef650(U64 object, U64 a1) {
  return SdkRoutine_6f36f0(object + 0x8, a1, 0xbc7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef660(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f17e0(object + 0x8, a1, a2, a3, 0xc26);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef7f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0xc47);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6ef8c0(U64 object, U64 a1) {
  return SdkRoutine_134130(object + 0x8, a1, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4210(U64 object, U64 a1) {
  return SdkRoutine_2b4ef0(object + 0x8, a1, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4240(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4250(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f4d90(object + 0x8, a1, a2, 0xd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4260(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4270(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4290(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0x11);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f42c0(U64 object, U64 a1) {
  return SdkRoutine_6f4eb0(object + 0x8, a1, 0x15);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f42d0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x16);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f42f0(U64 object, U64 a1) {
  return SdkRoutine_6f4eb0(object + 0x8, a1, 0x19);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4300(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x1a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4320(U64 object, U64 a1) {
  return SdkRoutine_5c50e0(object + 0x8, a1, 0x1f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4330(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4350(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x3c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f43a0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x6f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f43b0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x70);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f43d0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x79);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f43e0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x7a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4400(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x83);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4410(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x84);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f44a0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x8c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f44b0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ddc20(object + 0x8, a1, a2, 0x8d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f44c0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x8e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f44f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1dd950(object + 0x8, a1, a2, 0x90);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4510(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1dd950(object + 0x8, a1, a2, 0x92);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4530(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1dd950(object + 0x8, a1, a2, 0x94);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4550(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1dd950(object + 0x8, a1, a2, 0x96);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4570(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_400a50(object + 0x8, a1, a2, 0x98);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4590(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xa1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f45a0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xa2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f45c0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xab);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f45d0(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0xac);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f45e0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xc9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f45f0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xca);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4600(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xcb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4610(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_49e600(object + 0x8, a1, a2, 0xcc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4660(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xcf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4670(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xd0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4680(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5670(object + 0x8, a1, a2, 0xd1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4690(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1eadb0(object + 0x8, a1, a2, 0xd2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f46a0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5) {
  return SdkRoutine_6f5780(object + 0x8, a1, a2, a3, a4, a5, 0xd3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f46d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5a60(object + 0x8, a1, a2, 0xd5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f46e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5a60(object + 0x8, a1, a2, 0xd6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4700(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xd8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4710(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6f5b80(object + 0x8, a1, a2, a3, a4, 0xd9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4740(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xde);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4750(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xdf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4780(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5e10(object + 0x8, a1, a2, 0xe1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f47b0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5f30(object + 0x8, a1, a2, 0xe3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f47c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ed700(object + 0x8, a1, a2, 0xe4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f47f0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xe7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4800(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xe8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4810(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xe9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4820(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1eadb0(object + 0x8, a1, a2, 0xea);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4840(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xec);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4850(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1eadb0(object + 0x8, a1, a2, 0xed);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4870(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xef);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4880(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f6400(object + 0x8, a1, a2, 0xf1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4890(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f6510(object + 0x8, a1, a2, 0xf2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f48a0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xf3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f48b0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xf4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f48c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f6400(object + 0x8, a1, a2, 0xf5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f48d0(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f6630(object + 0x8, a1, a2, a3, 0xf6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4910(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xf9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4920(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f6880(object + 0x8, a1, a2, a3, 0xfa);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4940(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5670(object + 0x8, a1, a2, 0xfc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4950(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xfd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4970(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0xff);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4980(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x100);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4990(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x101);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f49f0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x143);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a00(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f6ec0(object + 0x8, a1, a2, a3, 0x144);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a10(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x145);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a20(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x146);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a30(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x147);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a50(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x149);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a60(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f7010(object + 0x8, a1, a2, 0x14a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a70(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x14b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a80(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f7130(object + 0x8, a1, a2, 0x14c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4a90(U64 object, U64 a1) {
  return SdkRoutine_6f7260(object + 0x8, a1, 0x15e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4af0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1eadb0(object + 0x8, a1, a2, 0x1f5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4b30(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f7620(object + 0x8, a1, a2, a3, 0x258);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4b50(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0x25a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4b70(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x25c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4bc0(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0x260);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4bd0(U64 object, U64 a1) {
  return SdkRoutine_1e9880(object + 0x8, a1, 0x1a8, 0x261);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4c40(U64 object, U64 a1) {
  return SdkRoutine_1e9720(object + 0x8, a1, 0x1a8, 0x265);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4cb0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f7d60(object + 0x8, a1, a2, 0x269);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4cc0(U64 object, U64 a1) {
  return SdkRoutine_2b4b70(object + 0x8, a1, 0x26a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4ce0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f7d60(object + 0x8, a1, a2, 0x26c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4cf0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f7f80(object + 0x8, a1, a2, 0x26d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d00(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f80b0(object + 0x8, a1, a2, 0x26e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d10(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f81e0(object + 0x8, a1, a2, 0x28a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d20(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x28b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d30(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x28c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d40(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_134c20(object + 0x8, a1, a2, 0x2bc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d60(U64 object, U64 a1) {
  return SdkRoutine_6f8330(object + 0x8, a1, 0x7d1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d70(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x7d2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f4d80(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xbb8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f86d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f9e20(object + 0x8, a1, a2, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8700(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x6f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8720(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x83);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8740(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x97);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8770(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0xb5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8850(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f9e20(object + 0x8, a1, a2, 0xdd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f89b0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5e10(object + 0x8, a1, a2, 0xf5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a50(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x132);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8a90(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea890(object + 0x8, a1, a2, 0x136);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8b90(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5670(object + 0x8, a1, a2, 0x145);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8c00(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea890(object + 0x8, a1, a2, 0x14c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8c10(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x14d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8cd0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x201);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8e60(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_176270(object + 0x8, a1, a2, 0x2bc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f00(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fb2d0(object + 0x8, a1, a2, 0x2c8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f60(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fb700(object + 0x8, a1, a2, a3, a4, 0x2d4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f70(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fb700(object + 0x8, a1, a2, a3, a4, 0x2d5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f80(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6f1fe0(object + 0x8, a1, a2, a3, 0x2d6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8f90(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fb850(object + 0x8, a1, a2, a3, 0x2d7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8fa0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x2d8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8fb0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x2d9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8fc0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x2da);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8fd0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x2db);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8fe0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fb700(object + 0x8, a1, a2, a3, a4, 0x2dc);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f8ff0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_2c82ac(object + 0x8, a1, a2, 0x2dd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9000(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fb970(object + 0x8, a1, a2, a3, a4, 0x2de);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9010(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_2c82ac(object + 0x8, a1, a2, 0x2df);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9020(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_2c82ac(object + 0x8, a1, a2, 0x2e0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9030(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fba90(object + 0x8, a1, a2, a3, 0x2e1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9040(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fba90(object + 0x8, a1, a2, a3, 0x2e2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9050(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fb700(object + 0x8, a1, a2, a3, a4, 0x2e3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9060(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_2c82ac(object + 0x8, a1, a2, 0x2e4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9070(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x2e5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9080(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0x2e6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f90a0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fb700(object + 0x8, a1, a2, a3, a4, 0x2e8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f90b0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_2c82ac(object + 0x8, a1, a2, 0x2e9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f90c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f6400(object + 0x8, a1, a2, 0x2ea);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9180(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5670(object + 0x8, a1, a2, 0x329);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f91d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea790(object + 0x8, a1, a2, 0x335);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f91e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea790(object + 0x8, a1, a2, 0x336);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f91f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea790(object + 0x8, a1, a2, 0x337);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9200(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea790(object + 0x8, a1, a2, 0x338);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9210(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fbcd0(object + 0x8, a1, a2, a3, 0x339);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9220(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fbcd0(object + 0x8, a1, a2, a3, 0x33a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9230(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fbdf0(object + 0x8, a1, a2, a3, 0x33b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9240(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fbdf0(object + 0x8, a1, a2, a3, 0x33c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9250(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fbdf0(object + 0x8, a1, a2, a3, 0x33d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9260(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fbf10(object + 0x8, a1, a2, 0x33e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9270(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_6fc050(object + 0x8, a1, a2, a3, 0x33f);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9350(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1ea890(object + 0x8, a1, a2, 0x3ef);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f93b0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6f5a60(object + 0x8, a1, a2, 0x3f4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f94e0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4) {
  return SdkRoutine_6fc410(object + 0x8, a1, a2, a3, a4, 0x46e);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f95c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc680(object + 0x8, a1, a2, 0x54, 0x4e3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f95d0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc680(object + 0x8, a1, a2, 0x60, 0x4e4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f95e0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc680(object + 0x8, a1, a2, 0x34, 0x4e5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f95f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_6fc680(object + 0x8, a1, a2, 0x34, 0x4e6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9680(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_1eadb0(object + 0x8, a1, a2, 0x4f7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f96b0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x4fa);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9b60(U64 object, U64 a1) {
  return SdkRoutine_1e9720(object + 0x8, a1, 0xc, 0x552);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9c50(U64 object, U64 a1) {
  return SdkRoutine_1959a0(object + 0x8, a1, 0x5a6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9d70(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_400a50(object + 0x8, a1, a2, 0x5bf);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9d90(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x5c1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6f9e00(U64 object, U64 a1) {
  return SdkRoutine_595da0(object + 0x8, a1, 0x5d2);
}

[[gnu::visibility("hidden")]] U64 SdkStub_73fac0(U64 object) {
  SdkRoutine_87ab60(object);
  return SdkRoutine_857220(object, 0x1a0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_760470(U64 object, U64 a1) {
  return SdkRoutine_ea990(object + 0x8, a1, 0x480, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_7604a0(U64 object, U64 a1) {
  return SdkRoutine_ebfe0(object + 0x8, a1, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_760570(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_760b70(object + 0x8, a1, a2, a3, 0xca);
}

[[gnu::visibility("hidden")]] U64 SdkStub_760740(U64 object, U64 a1) {
  return SdkRoutine_e3a20(object + 0x8, a1, 0x190);
}

[[gnu::visibility("hidden")]] U64 SdkStub_761dc0(U64 object, U64 a1) {
  return SdkRoutine_5c4e10(object + 0x8, a1, 0x480, 0x1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_761de0(U64 object, U64 a1) {
  return SdkRoutine_761e10(object + 0x8, a1, 0x3);
}

[[gnu::visibility("hidden")]] U64 SdkStub_761df0(U64 object, U64 a1) {
  return SdkRoutine_4918b0(object + 0x8, a1, 0x4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_761e00(U64 object, U64 a1) {
  return SdkRoutine_4918b0(object + 0x8, a1, 0x5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d690(U64 object, U64 a1) {
  return SdkRoutine_1349f0(object + 0x8, a1, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d6a0(U64 object, U64 a1, U64 a2,
  U64 a3, U64 a4, U64 a5) {
  return SdkRoutine_76dd00(object + 0x8, a1, a2, a3, a4, a5, 0x9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d6c0(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x1a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d6e0(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x1c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d710(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x29);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d770(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_76e140(object + 0x8, a1, a2, 0x8d);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d7c0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_134c20(object + 0x8, a1, a2, 0x99);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d7d0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x9a);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d7e0(U64 object, U64 a1) {
  return SdkRoutine_199360(object + 0x8, a1, 0x9b);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d850(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xb4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d860(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0xb5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d8a0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_76e560(object + 0x8, a1, a2, 0x12c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d8b0(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x1f4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d8c0(U64 object, U64 a1) {
  return SdkRoutine_1344d0(object + 0x8, a1, 0x1f5);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d8d0(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0x1f6);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d8e0(U64 object, U64 a1) {
  return SdkRoutine_1e6480(object + 0x8, a1, 0x1f7);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d8f0(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_76e6a0(object + 0x8, a1, a2, 0x1f8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d900(U64 object, U64 a1, U64 a2) {
  return SdkRoutine_76e800(object + 0x8, a1, a2, 0x1f9);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d940(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x1fb);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d960(U64 object) {
  return SdkRoutine_1df3d0(object + 0x8, 0x1fd);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d970(U64 object, U64 a1) {
  return SdkRoutine_2b4b70(object + 0x8, a1, 0x1fe);
}

[[gnu::visibility("hidden")]] U64 SdkStub_76d980(U64 object, U64 a1, U64 a2,
  U64 a3) {
  return SdkRoutine_76eb00(object + 0x8, a1, a2, a3, 0x1ff);
}

[[gnu::visibility("hidden")]] U64 SdkStub_7d3420(U64 object) {
  SdkRoutine_87c850(object);
  return SdkRoutine_857220(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_7d34e0(U64 object) {
  SdkRoutine_87c890(object);
  return SdkRoutine_857220(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_7d3600(U64 object) {
  SdkRoutine_87c8b0(object);
  return SdkRoutine_857220(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_7f5950(U64 object) {
  SdkRoutine_87cfe0(object);
  return SdkRoutine_857220(object, 0xa8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_82d340(U64 object) {
  SdkRoutine_87c9c0(object);
  return SdkRoutine_857220(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_84c610(U64 object) {
  SdkRoutine_87d570(object);
  return SdkRoutine_857220(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_84c640(U64 object) {
  SdkRoutine_87d570(object);
  return SdkRoutine_857220(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_84c670(U64 object) {
  SdkRoutine_87d570(object);
  return SdkRoutine_857220(object, 0x20);
}
