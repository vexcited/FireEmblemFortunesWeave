#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] void NgxRoutine_e30b0();
[[gnu::visibility("hidden")]] extern U8 NgxData_93955e[];
[[gnu::visibility("hidden")]] void NgxRoutine_e30c0();
[[gnu::visibility("hidden")]] void NgxRoutine_e30d0();
[[gnu::visibility("hidden")]] U64 NgxRoutine_77080(U64);
[[gnu::visibility("hidden")]] extern U8 NgxData_2b6aec0[];
[[gnu::visibility("hidden")]] void NgxRoutine_9af80();
[[gnu::visibility("hidden")]] void NgxRoutine_9ea40();
[[gnu::visibility("hidden")]] extern U8 NgxData_f0288[];
[[gnu::visibility("hidden")]] void NgxRoutine_e2d90();
[[gnu::visibility("hidden")]] void NgxRoutine_b5d10();
[[gnu::visibility("hidden")]] void NgxRoutine_b9d60();
[[gnu::visibility("hidden")]] void NgxRoutine_be660();
[[gnu::visibility("hidden")]] U64 NgxRoutine_be660(U64);
[[gnu::visibility("hidden")]] void NgxRoutine_bed80();
[[gnu::visibility("hidden")]] extern U8 NgxData_f3636[];
[[gnu::visibility("hidden")]] void NgxRoutine_e3850();
[[gnu::visibility("hidden")]] void NgxRoutine_baf00();
[[gnu::visibility("hidden")]] void NgxRoutine_e39d0();

[[gnu::visibility("hidden")]] void NgxStub_20() {
}

[[gnu::visibility("hidden")]] void NgxStub_320() {
  NgxRoutine_e30b0();
}

[[gnu::visibility("hidden")]] U64 NgxStub_410() {
  return reinterpret_cast<U64>(NgxData_93955e);
}

[[gnu::visibility("hidden")]] void NgxStub_420() {
  NgxRoutine_e30c0();
}

[[gnu::visibility("hidden")]] void NgxStub_430() {
  NgxRoutine_e30d0();
}

[[gnu::visibility("hidden")]] void NgxStub_6990() {
}

[[gnu::visibility("hidden")]] void NgxStub_69e0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6a30() {
}

[[gnu::visibility("hidden")]] void NgxStub_6a80() {
}

[[gnu::visibility("hidden")]] void NgxStub_6ad0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6b30() {
}

[[gnu::visibility("hidden")]] void NgxStub_6b90() {
}

[[gnu::visibility("hidden")]] void NgxStub_6be0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6c30() {
}

[[gnu::visibility("hidden")]] void NgxStub_6c80() {
}

[[gnu::visibility("hidden")]] void NgxStub_6cd0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6d20() {
}

[[gnu::visibility("hidden")]] void NgxStub_6d70() {
}

[[gnu::visibility("hidden")]] void NgxStub_6dc0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6e10() {
}

[[gnu::visibility("hidden")]] void NgxStub_6e60() {
}

[[gnu::visibility("hidden")]] void NgxStub_6eb0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6f00() {
}

[[gnu::visibility("hidden")]] void NgxStub_6f50() {
}

[[gnu::visibility("hidden")]] void NgxStub_6fa0() {
}

[[gnu::visibility("hidden")]] void NgxStub_6ff0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7040() {
}

[[gnu::visibility("hidden")]] void NgxStub_7090() {
}

[[gnu::visibility("hidden")]] void NgxStub_70e0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7130() {
}

[[gnu::visibility("hidden")]] void NgxStub_7180() {
}

[[gnu::visibility("hidden")]] void NgxStub_71d0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7220() {
}

[[gnu::visibility("hidden")]] void NgxStub_7270() {
}

[[gnu::visibility("hidden")]] void NgxStub_72c0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7310() {
}

[[gnu::visibility("hidden")]] void NgxStub_7360() {
}

[[gnu::visibility("hidden")]] void NgxStub_73b0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7400() {
}

[[gnu::visibility("hidden")]] void NgxStub_7450() {
}

[[gnu::visibility("hidden")]] void NgxStub_74a0() {
}

[[gnu::visibility("hidden")]] void NgxStub_74f0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7540() {
}

[[gnu::visibility("hidden")]] void NgxStub_7590() {
}

[[gnu::visibility("hidden")]] void NgxStub_75e0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7640() {
}

[[gnu::visibility("hidden")]] void NgxStub_76a0() {
}

[[gnu::visibility("hidden")]] void NgxStub_76f0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7740() {
}

[[gnu::visibility("hidden")]] void NgxStub_7790() {
}

[[gnu::visibility("hidden")]] void NgxStub_77e0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7830() {
}

[[gnu::visibility("hidden")]] void NgxStub_7880() {
}

[[gnu::visibility("hidden")]] void NgxStub_78d0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7920() {
}

[[gnu::visibility("hidden")]] void NgxStub_7970() {
}

[[gnu::visibility("hidden")]] void NgxStub_79c0() {
}

[[gnu::visibility("hidden")]] void NgxStub_7a10() {
}

[[gnu::visibility("hidden")]] void NgxStub_7a60() {
}

[[gnu::visibility("hidden")]] void NgxStub_7ab0() {
}

[[gnu::visibility("hidden")]] U32 NgxStub_27b20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 NgxStub_27e00() {
  return 2;
}

[[gnu::visibility("hidden")]] void NgxStub_29c90() {
}

[[gnu::visibility("hidden")]] U64 NgxStub_33430() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void NgxStub_38db0(U64 object, U8 value) {
  At<U8>(object, 0x92e) = value;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39810() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39830() {
  return 48;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39840() {
  return 24;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39850() {
  return 64;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39860() {
  return 40;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39870() {
  return 408;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39880() {
  return 248;
}

[[gnu::visibility("hidden")]] U32 NgxStub_39890() {
  return 240;
}

[[gnu::visibility("hidden")]] U32 NgxStub_398a0() {
  return 328;
}

[[gnu::visibility("hidden")]] U32 NgxStub_398b0() {
  return 88;
}

[[gnu::visibility("hidden")]] U32 NgxStub_398c0() {
  return 16;
}

[[gnu::visibility("hidden")]] U32 NgxStub_398d0() {
  return 128;
}

[[gnu::visibility("hidden")]] U32 NgxStub_398e0() {
  return 96;
}

[[gnu::visibility("hidden")]] U32 NgxStub_3a150(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 NgxStub_3a160(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] U32 NgxStub_3a170(U64 object) {
  return At<U32>(object, 0x48);
}

[[gnu::visibility("hidden")]] U32 NgxStub_70c30() {
  return 376;
}

[[gnu::visibility("hidden")]] U32 NgxStub_70c40() {
  return 392;
}

[[gnu::visibility("hidden")]] U32 NgxStub_70c50() {
  return 656;
}

[[gnu::visibility("hidden")]] void NgxStub_768c0(U64 object) {
  NgxRoutine_77080(object + 0x18);
}

[[gnu::visibility("hidden")]] U32 NgxStub_772a0() {
  return 176;
}

[[gnu::visibility("hidden")]] U64 NgxStub_977a0() {
  return reinterpret_cast<U64>(NgxData_2b6aec0);
}

[[gnu::visibility("hidden")]] void NgxStub_9ea30() {
  NgxRoutine_9af80();
}

[[gnu::visibility("hidden")]] void NgxStub_a24f0() {
  NgxRoutine_9ea40();
}

[[gnu::visibility("hidden")]] U32 NgxStub_a45a0(U64 object) {
  return At<U32>(object, 0x328);
}

[[gnu::visibility("hidden")]] U32 NgxStub_a45b0(U64 object) {
  return At<U32>(object, 0x32c);
}

[[gnu::visibility("hidden")]] U32 NgxStub_a6a60() {
  return 0xffffffff;
}

[[gnu::visibility("hidden")]] U8 NgxStub_a6a90(U64 object) {
  return At<U8>(object, 0x331);
}

[[gnu::visibility("hidden")]] U8 NgxStub_a6aa0(U64 object) {
  return At<U8>(object, 0x330);
}

[[gnu::visibility("hidden")]] U32 NgxStub_a6ad0() {
  return 0xfffffffd;
}

[[gnu::visibility("hidden")]] U64 NgxStub_a9d20() {
  return reinterpret_cast<U64>(NgxData_f0288);
}

[[gnu::visibility("hidden")]] void NgxStub_b2890() {
  NgxRoutine_e2d90();
}

[[gnu::visibility("hidden")]] void NgxStub_b5e80() {
  NgxRoutine_b5d10();
}

[[gnu::visibility("hidden")]] U32 NgxStub_b6290() {
  return 1;
}

[[gnu::visibility("hidden")]] void NgxStub_b9fc0() {
  NgxRoutine_b9d60();
}

[[gnu::visibility("hidden")]] void NgxStub_baf00() {
}

[[gnu::visibility("hidden")]] U64 NgxStub_baf60() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void NgxStub_bc9e0() {
  NgxRoutine_be660();
}

[[gnu::visibility("hidden")]] U32 NgxStub_bca80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 NgxStub_bcb90() {
  return 0xffffffff;
}

[[gnu::visibility("hidden")]] void NgxStub_bccc0(U64 object) {
  NgxRoutine_be660(object + 0x10);
}

[[gnu::visibility("hidden")]] void NgxStub_bce70(U64 object) {
  NgxRoutine_be660(object + 0x8);
}

[[gnu::visibility("hidden")]] void NgxStub_bd2e0(U64 object) {
  NgxRoutine_be660(object + 0x18);
}

[[gnu::visibility("hidden")]] void NgxStub_be570() {
  NgxRoutine_bed80();
}

[[gnu::visibility("hidden")]] U64 NgxStub_bea60() {
  return reinterpret_cast<U64>(NgxData_f3636);
}

[[gnu::visibility("hidden")]] void NgxStub_bed80() {
  NgxRoutine_e3850();
}

[[gnu::visibility("hidden")]] void NgxStub_c0410() {
  NgxRoutine_baf00();
}

[[gnu::visibility("hidden")]] U32 NgxStub_ceb10() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 NgxStub_d1910() {
  return 255;
}

[[gnu::visibility("hidden")]] void NgxStub_d1ce0() {
}

[[gnu::visibility("hidden")]] U64 NgxStub_d8570() {
  return 0xffffffffffffffff;
}

[[gnu::visibility("hidden")]] U32 NgxStub_dbc00() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 NgxStub_dd120() {
  return 4;
}

[[gnu::visibility("hidden")]] U8 NgxStub_dd900(U64 object) {
  return At<U8>(object, 0x10);
}

[[gnu::visibility("hidden")]] U32 NgxStub_dd910(U64 object) {
  return At<U32>(object, 0x10);
}

[[gnu::visibility("hidden")]] U8 NgxStub_dd920(U64 object) {
  return At<U8>(object, 0x11);
}

[[gnu::visibility("hidden")]] U32 NgxStub_dd930(U64 object) {
  return At<U32>(object, 0x14);
}

[[gnu::visibility("hidden")]] void NgxStub_e2360() {
  NgxRoutine_e39d0();
}
