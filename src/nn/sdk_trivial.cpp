#include <stdint.h>

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] void SdkRoutine_3ee0();
[[gnu::visibility("hidden")]] void SdkRoutine_4010();
[[gnu::visibility("hidden")]] U64 SdkRoutine_858b40(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_856810();
[[gnu::visibility("hidden")]] void SdkRoutine_af760();
[[gnu::visibility("hidden")]] void SdkRoutine_af400();
[[gnu::visibility("hidden")]] void SdkRoutine_af580();
[[gnu::visibility("hidden")]] void SdkRoutine_b1a10();
[[gnu::visibility("hidden")]] void SdkRoutine_858b60();
[[gnu::visibility("hidden")]] void SdkRoutine_858b80();
[[gnu::visibility("hidden")]] void SdkRoutine_b1bb0();
[[gnu::visibility("hidden")]] void SdkRoutine_b1bc0();
[[gnu::visibility("hidden")]] void SdkRoutine_859730();
[[gnu::visibility("hidden")]] void SdkRoutine_859740();
[[gnu::visibility("hidden")]] void SdkRoutine_859750();
[[gnu::visibility("hidden")]] void SdkRoutine_859770();
[[gnu::visibility("hidden")]] void SdkRoutine_859780();
[[gnu::visibility("hidden")]] void SdkRoutine_859790();
[[gnu::visibility("hidden")]] void SdkRoutine_8597a0();
[[gnu::visibility("hidden")]] void SdkRoutine_8597b0();
[[gnu::visibility("hidden")]] void SdkRoutine_8597c0();
[[gnu::visibility("hidden")]] void SdkRoutine_8597d0();
[[gnu::visibility("hidden")]] void SdkRoutine_8597e0();
[[gnu::visibility("hidden")]] void SdkRoutine_8597f0();
[[gnu::visibility("hidden")]] void SdkRoutine_859810();
[[gnu::visibility("hidden")]] void SdkRoutine_859820();
[[gnu::visibility("hidden")]] void SdkRoutine_859830();
[[gnu::visibility("hidden")]] void SdkRoutine_859840();
[[gnu::visibility("hidden")]] void SdkRoutine_859850();
[[gnu::visibility("hidden")]] void SdkRoutine_859860();
[[gnu::visibility("hidden")]] void SdkRoutine_859870();
[[gnu::visibility("hidden")]] void SdkRoutine_859880();
[[gnu::visibility("hidden")]] void SdkRoutine_859890();
[[gnu::visibility("hidden")]] void SdkRoutine_8598a0();
[[gnu::visibility("hidden")]] void SdkRoutine_8598b0();
[[gnu::visibility("hidden")]] void SdkRoutine_8598c0();
[[gnu::visibility("hidden")]] void SdkRoutine_8598d0();
[[gnu::visibility("hidden")]] void SdkRoutine_8598e0();
[[gnu::visibility("hidden")]] void SdkRoutine_8598f0();
[[gnu::visibility("hidden")]] void SdkRoutine_859900();
[[gnu::visibility("hidden")]] void SdkRoutine_859910();
[[gnu::visibility("hidden")]] void SdkRoutine_859920();
[[gnu::visibility("hidden")]] void SdkRoutine_859930();
[[gnu::visibility("hidden")]] void SdkRoutine_859940();
[[gnu::visibility("hidden")]] void SdkRoutine_859950();
[[gnu::visibility("hidden")]] void SdkRoutine_859990();
[[gnu::visibility("hidden")]] void SdkRoutine_8599b0();
[[gnu::visibility("hidden")]] void SdkRoutine_8599c0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_ce840(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_cea20(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85af80(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_f3740(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_1a5378();
[[gnu::visibility("hidden")]] U64 SdkRoutine_859aa0(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_85e2f0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_858df0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_858b90(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_858d70(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_859c90();
[[gnu::visibility("hidden")]] void SdkRoutine_860140();
[[gnu::visibility("hidden")]] void SdkRoutine_85cac0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_8626a0(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_8626a0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_862c40(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_862eb0(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_863c10();
[[gnu::visibility("hidden")]] void SdkRoutine_1d3d98();
[[gnu::visibility("hidden")]] void SdkRoutine_858d70();
[[gnu::visibility("hidden")]] void SdkRoutine_868c70();
[[gnu::visibility("hidden")]] void SdkRoutine_868ca0();
[[gnu::visibility("hidden")]] void SdkRoutine_8578d0();
[[gnu::visibility("hidden")]] void SdkRoutine_857400();
[[gnu::visibility("hidden")]] U64 SdkRoutine_85bb10(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d7b0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d790(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d800(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d930(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d950(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86d9c0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86da30(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86db60(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86db70(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86db90(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dbd0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dbe0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dc00(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dc10(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dc20(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dc30(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86dc60(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_86dcd0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_86df20(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86def0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_85bbc0(U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_bbfb26[];
[[gnu::visibility("hidden")]] extern U8 SdkData_bc8492[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e683f8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e699b8[];
[[gnu::visibility("hidden")]] void SdkRoutine_871380();
[[gnu::visibility("hidden")]] void SdkRoutine_86def0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_5d3c00(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86aad0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86aae0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_86aaf0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_5e85e0(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_5f7a90();
[[gnu::visibility("hidden")]] void SdkRoutine_875b10();
[[gnu::visibility("hidden")]] void SdkRoutine_875b30();
[[gnu::visibility("hidden")]] void SdkRoutine_5fb210();
[[gnu::visibility("hidden")]] extern U8 SdkData_c65110[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_6195f0(U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_e72850[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e728d0[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e72950[];
[[gnu::visibility("hidden")]] void SdkRoutine_6243e0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_629f40(U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_e730f0[];
[[gnu::visibility("hidden")]] void SdkRoutine_9d750();
[[gnu::visibility("hidden")]] extern U8 SdkData_c76f82[];
[[gnu::visibility("hidden")]] extern U8 SdkData_10406b8[];
[[gnu::visibility("hidden")]] void SdkRoutine_6292b0();
[[gnu::visibility("hidden")]] void SdkRoutine_639ce8();
[[gnu::visibility("hidden")]] void SdkRoutine_63b428();
[[gnu::visibility("hidden")]] U64 SdkRoutine_6247e0(U64);
[[gnu::visibility("hidden")]] U64 SdkRoutine_624920(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_644b24();
[[gnu::visibility("hidden")]] extern U8 SdkData_e74d60[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e74dd0[];
[[gnu::visibility("hidden")]] extern U8 SdkData_ea63b8[];
[[gnu::visibility("hidden")]] void SdkRoutine_64f9e0();
[[gnu::visibility("hidden")]] void SdkRoutine_691020();
[[gnu::visibility("hidden")]] void SdkRoutine_691370();
[[gnu::visibility("hidden")]] void SdkRoutine_691380();
[[gnu::visibility("hidden")]] void SdkRoutine_691650();
[[gnu::visibility("hidden")]] void SdkRoutine_691660();
[[gnu::visibility("hidden")]] void SdkRoutine_691760();
[[gnu::visibility("hidden")]] extern U8 SdkData_e74e40[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_649830(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_65c2d0();
[[gnu::visibility("hidden")]] void SdkRoutine_875b20();
[[gnu::visibility("hidden")]] void SdkRoutine_875e40();
[[gnu::visibility("hidden")]] void SdkRoutine_875e30();
[[gnu::visibility("hidden")]] void SdkRoutine_875b00();
[[gnu::visibility("hidden")]] void SdkRoutine_875c20();
[[gnu::visibility("hidden")]] void SdkRoutine_875d90();
[[gnu::visibility("hidden")]] void SdkRoutine_875da0();
[[gnu::visibility("hidden")]] void SdkRoutine_875d80();
[[gnu::visibility("hidden")]] void SdkRoutine_6589a0();
[[gnu::visibility("hidden")]] void SdkRoutine_66d8e0();
[[gnu::visibility("hidden")]] void SdkRoutine_664890();
[[gnu::visibility("hidden")]] U64 SdkRoutine_66f560(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_6671d0();
[[gnu::visibility("hidden")]] void SdkRoutine_6975b0();
[[gnu::visibility("hidden")]] extern U8 SdkData_e798f8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_e799e8[];
[[gnu::visibility("hidden")]] extern U8 SdkData_ea8998[];
[[gnu::visibility("hidden")]] void SdkRoutine_69f620();
[[gnu::visibility("hidden")]] extern U8 SdkData_ea8c58[];
[[gnu::visibility("hidden")]] U64 SdkRoutine_66f730(U64);
[[gnu::visibility("hidden")]] void SdkRoutine_6addf0();
[[gnu::visibility("hidden")]] void SdkRoutine_876b50();
[[gnu::visibility("hidden")]] extern U8 SdkData_e7c830[];
[[gnu::visibility("hidden")]] void SdkRoutine_87ae00();
[[gnu::visibility("hidden")]] void SdkRoutine_87ae10();
[[gnu::visibility("hidden")]] void SdkRoutine_772960();
[[gnu::visibility("hidden")]] void SdkRoutine_7786b0();
[[gnu::visibility("hidden")]] U64 SdkRoutine_87c7f0(U64);
[[gnu::visibility("hidden")]] extern U8 SdkData_bb85d1[];
[[gnu::visibility("hidden")]] extern U8 SdkData_bc40b0[];
[[gnu::visibility("hidden")]] void SdkRoutine_7ed750();
[[gnu::visibility("hidden")]] void SdkRoutine_7f2dd0();
[[gnu::visibility("hidden")]] extern U8 SdkData_cfff70[];

[[gnu::visibility("hidden")]] void SdkStub_40() {
}

[[gnu::visibility("hidden")]] void SdkStub_3b60() {
  SdkRoutine_3ee0();
}

[[gnu::visibility("hidden")]] void SdkStub_3b80() {
  SdkRoutine_4010();
}

[[gnu::visibility("hidden")]] void SdkStub_9ecc0() {
}

[[gnu::visibility("hidden")]] void SdkStub_ae060(U64 object) {
  SdkRoutine_858b40(object + 0x30);
}

[[gnu::visibility("hidden")]] void SdkStub_ae090(U64 object) {
  SdkRoutine_858b40(object + 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_aea80() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void SdkStub_afbd0() {
  SdkRoutine_856810();
}

[[gnu::visibility("hidden")]] void SdkStub_b1a10() {
  SdkRoutine_af760();
}

[[gnu::visibility("hidden")]] void SdkStub_b1bb0() {
  SdkRoutine_af400();
}

[[gnu::visibility("hidden")]] void SdkStub_b1bc0() {
  SdkRoutine_af580();
}

[[gnu::visibility("hidden")]] void SdkStub_b4680() {
  SdkRoutine_b1a10();
}

[[gnu::visibility("hidden")]] void SdkStub_b5390() {
  SdkRoutine_858b60();
}

[[gnu::visibility("hidden")]] void SdkStub_b53a0() {
  SdkRoutine_858b80();
}

[[gnu::visibility("hidden")]] void SdkStub_b53b0() {
  SdkRoutine_b1bb0();
}

[[gnu::visibility("hidden")]] void SdkStub_b53c0() {
  SdkRoutine_b1bc0();
}

[[gnu::visibility("hidden")]] void SdkStub_b56b0() {
  SdkRoutine_859730();
}

[[gnu::visibility("hidden")]] void SdkStub_b56c0() {
  SdkRoutine_859740();
}

[[gnu::visibility("hidden")]] void SdkStub_b56d0() {
  SdkRoutine_859750();
}

[[gnu::visibility("hidden")]] void SdkStub_b56f0() {
  SdkRoutine_859770();
}

[[gnu::visibility("hidden")]] void SdkStub_b5700() {
  SdkRoutine_859780();
}

[[gnu::visibility("hidden")]] void SdkStub_b5710() {
  SdkRoutine_859790();
}

[[gnu::visibility("hidden")]] void SdkStub_b5720() {
  SdkRoutine_8597a0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5730() {
  SdkRoutine_8597b0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5740() {
  SdkRoutine_8597c0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5750() {
  SdkRoutine_8597d0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5760() {
  SdkRoutine_8597e0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5770() {
  SdkRoutine_8597f0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5840() {
  SdkRoutine_859810();
}

[[gnu::visibility("hidden")]] void SdkStub_b5850() {
  SdkRoutine_859820();
}

[[gnu::visibility("hidden")]] void SdkStub_b5860() {
  SdkRoutine_859830();
}

[[gnu::visibility("hidden")]] void SdkStub_b5870() {
  SdkRoutine_859840();
}

[[gnu::visibility("hidden")]] void SdkStub_b5880() {
  SdkRoutine_859850();
}

[[gnu::visibility("hidden")]] void SdkStub_b5890() {
  SdkRoutine_859860();
}

[[gnu::visibility("hidden")]] void SdkStub_b58a0() {
  SdkRoutine_859870();
}

[[gnu::visibility("hidden")]] void SdkStub_b58b0() {
  SdkRoutine_859880();
}

[[gnu::visibility("hidden")]] void SdkStub_b58c0() {
  SdkRoutine_859890();
}

[[gnu::visibility("hidden")]] void SdkStub_b58d0() {
  SdkRoutine_8598a0();
}

[[gnu::visibility("hidden")]] void SdkStub_b58e0() {
  SdkRoutine_8598b0();
}

[[gnu::visibility("hidden")]] void SdkStub_b58f0() {
  SdkRoutine_8598c0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5900() {
  SdkRoutine_8598d0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5910() {
  SdkRoutine_8598e0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5920() {
  SdkRoutine_8598f0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5930() {
  SdkRoutine_859900();
}

[[gnu::visibility("hidden")]] void SdkStub_b5940() {
  SdkRoutine_859910();
}

[[gnu::visibility("hidden")]] void SdkStub_b5950() {
  SdkRoutine_859920();
}

[[gnu::visibility("hidden")]] void SdkStub_b5960() {
  SdkRoutine_859930();
}

[[gnu::visibility("hidden")]] void SdkStub_b5970() {
  SdkRoutine_859940();
}

[[gnu::visibility("hidden")]] void SdkStub_b5980() {
  SdkRoutine_859950();
}

[[gnu::visibility("hidden")]] void SdkStub_b59e0() {
  SdkRoutine_859990();
}

[[gnu::visibility("hidden")]] void SdkStub_b5a70() {
  SdkRoutine_8599b0();
}

[[gnu::visibility("hidden")]] void SdkStub_b5a80() {
  SdkRoutine_8599c0();
}

[[gnu::visibility("hidden")]] U32 SdkStub_b9230() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_ce9b0(U64 object) {
  SdkRoutine_ce840(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_ceb60(U64 object) {
  SdkRoutine_cea20(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_da830(U64 object) {
  SdkRoutine_85af80(object + 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_f4480(U64 object) {
  SdkRoutine_f3740(object + 0x10);
}

[[gnu::visibility("hidden")]] void SdkStub_12f000(U64 object, U64 value) {
  At<U64>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_130420(U64 object, U64 value) {
  At<U64>(object, 0x40) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_14d4b0() {
}

[[gnu::visibility("hidden")]] void SdkStub_14e5f0() {
}

[[gnu::visibility("hidden")]] void SdkStub_169820(U64 object) {
  SdkRoutine_858b40(object + 0x228);
}

[[gnu::visibility("hidden")]] void SdkStub_16d1b0() {
  SdkRoutine_1a5378();
}

[[gnu::visibility("hidden")]] void SdkStub_179880(U64 object) {
  SdkRoutine_859aa0(object + 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_17bec0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_17bed0() {
  SdkRoutine_85e2f0();
}

[[gnu::visibility("hidden")]] U32 SdkStub_17bf80() {
  return 523;
}

[[gnu::visibility("hidden")]] void SdkStub_17bf90() {
}

[[gnu::visibility("hidden")]] void SdkStub_17c260() {
  SdkRoutine_85e2f0();
}

[[gnu::visibility("hidden")]] void SdkStub_17c270(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_17ccf0(U64 object) {
  SdkRoutine_858df0(object + 0x70);
}

[[gnu::visibility("hidden")]] void SdkStub_17cd00(U64 object) {
  SdkRoutine_858b90(object + 0x70);
}

[[gnu::visibility("hidden")]] void SdkStub_17d7c0(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_17df60() {
  return 523;
}

[[gnu::visibility("hidden")]] void SdkStub_181840(U64 object) {
  SdkRoutine_858d70(object + 0x28);
}

[[gnu::visibility("hidden")]] void SdkStub_186ce0() {
  SdkRoutine_859c90();
}

[[gnu::visibility("hidden")]] void SdkStub_1b2350() {
  SdkRoutine_860140();
}

[[gnu::visibility("hidden")]] void SdkStub_22f670() {
  SdkRoutine_85cac0();
}

[[gnu::visibility("hidden")]] void SdkStub_2346b0(U64 object) {
  SdkRoutine_8626a0(object + 0x10);
}

[[gnu::visibility("hidden")]] void SdkStub_234890() {
  SdkRoutine_8626a0();
}

[[gnu::visibility("hidden")]] void SdkStub_23b490(U64 object) {
  SdkRoutine_862c40(object + 0x70);
}

[[gnu::visibility("hidden")]] void SdkStub_23b560(U64 object) {
  SdkRoutine_862eb0(object + 0x70);
}

[[gnu::visibility("hidden")]] void SdkStub_23b720(U64 object) {
  SdkRoutine_859aa0(object + 0x20);
}

[[gnu::visibility("hidden")]] U32 SdkStub_24bb00(U64 object) {
  return At<U32>(object, 0x150);
}

[[gnu::visibility("hidden")]] U32 SdkStub_24bb90(U64 object) {
  return At<U32>(object, 0x5c);
}

[[gnu::visibility("hidden")]] void SdkStub_27a2c0() {
  SdkRoutine_863c10();
}

[[gnu::visibility("hidden")]] void SdkStub_2b7590() {
}

[[gnu::visibility("hidden")]] void SdkStub_2c57f8() {
  SdkRoutine_1d3d98();
}

[[gnu::visibility("hidden")]] void SdkStub_2c8538() {
  SdkRoutine_1d3d98();
}

[[gnu::visibility("hidden")]] void SdkStub_361a40() {
  SdkRoutine_858d70();
}

[[gnu::visibility("hidden")]] bool SdkStub_3623b0(U64 object) {
  return At<U64>(object, 0x10) != 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_362400(U64 object) {
  return At<U32>(object, 0x30);
}

[[gnu::visibility("hidden")]] U32 SdkStub_362410(U64 object) {
  return At<U32>(object, 0x34);
}

[[gnu::visibility("hidden")]] void SdkStub_40ebf0() {
  SdkRoutine_868c70();
}

[[gnu::visibility("hidden")]] void SdkStub_40ec30() {
  SdkRoutine_868ca0();
}

[[gnu::visibility("hidden")]] U64 SdkStub_4137b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_4137c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_4137d0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_4137e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_4137f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_413800() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_430430() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_432e00(U64 object) {
  return At<U32>(At<U64>(object, 0x40), 0x78);
}

[[gnu::visibility("hidden")]] void SdkStub_459c40() {
  SdkRoutine_8578d0();
}

[[gnu::visibility("hidden")]] void SdkStub_459c50() {
  SdkRoutine_857400();
}

[[gnu::visibility("hidden")]] void SdkStub_4bc320() {
}

[[gnu::visibility("hidden")]] void SdkStub_4cd570(U64 object) {
  SdkRoutine_85bb10(object + 0x20);
}

[[gnu::visibility("hidden")]] void SdkStub_4cdd20(U64 object) {
  SdkRoutine_86d7b0(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4ce270(U64 object) {
  SdkRoutine_86d790(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4ceb10(U64 object) {
  SdkRoutine_86d800(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4cecc0(U64 object) {
  SdkRoutine_86d930(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4cf100(U64 object) {
  SdkRoutine_86d950(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4cf8e0(U64 object) {
  SdkRoutine_86d9c0(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d0b60(U64 object) {
  SdkRoutine_86da30(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d0e10(U64 object) {
  SdkRoutine_86db60(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d1170(U64 object) {
  SdkRoutine_86db70(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d18e0(U64 object) {
  SdkRoutine_86db90(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d2090(U64 object) {
  SdkRoutine_86dbd0(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d2300(U64 object) {
  SdkRoutine_86dbe0(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d2600(U64 object) {
  SdkRoutine_86dc00(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d27c0(U64 object) {
  SdkRoutine_86dc10(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d2a40(U64 object) {
  SdkRoutine_86dc20(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d2cd0(U64 object) {
  SdkRoutine_86dc30(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d2f70(U64 object) {
  SdkRoutine_86dc60(object - 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_4d3f00() {
  SdkRoutine_86dcd0();
}

[[gnu::visibility("hidden")]] void SdkStub_4da050(U64 object) {
  SdkRoutine_86df20(object + 0x18);
}

[[gnu::visibility("hidden")]] void SdkStub_4decd0() {
}

[[gnu::visibility("hidden")]] void SdkStub_4dece0(U64 object) {
  SdkRoutine_86def0(object + 0x18);
}

[[gnu::visibility("hidden")]] U32 SdkStub_4dffa0() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_4dffc0(U64 object) {
  SdkRoutine_85bbc0(object + 0x20);
}

[[gnu::visibility("hidden")]] U32 SdkStub_4e0040() {
  return 0xffffffff;
}

[[gnu::visibility("hidden")]] U32 SdkStub_4e0060() {
  return 0xfffffc0e;
}

[[gnu::visibility("hidden")]] U32 SdkStub_4e64d0() {
  return 0xffffd8eb;
}

[[gnu::visibility("hidden")]] U64 SdkStub_4e64e0() {
  return reinterpret_cast<U64>(SdkData_bbfb26);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f43e0() {
  return reinterpret_cast<U64>(SdkData_bc8492);
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f5eb0() {
  return reinterpret_cast<U64>(SdkData_e683f8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_4f8560() {
  return 0xffffffda;
}

[[gnu::visibility("hidden")]] U64 SdkStub_4f8570() {
  return 0xffffffffffffffda;
}

[[gnu::visibility("hidden")]] U32 SdkStub_4f89f0(U64 object) {
  return At<U32>(object, 0x14);
}

[[gnu::visibility("hidden")]] U32 SdkStub_500c00() {
  return 16;
}

[[gnu::visibility("hidden")]] void SdkStub_512910(U64 object, U64 value) {
  At<U64>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_512920(U64 object, U32 value) {
  At<U32>(object, 0xc0) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_512930(U64 object) {
  return At<U32>(object, 0xc0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_514540() {
  return reinterpret_cast<U64>(SdkData_e699b8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54e2f0(U64 object) {
  return At<U64>(object, 0xb8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54e420(U64 object) {
  return At<U64>(object, 0xf8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54faa0(U64 object) {
  return At<U64>(object, 0xc0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54fab0(U64 object) {
  return At<U64>(object, 0xc8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54fac0(U64 object) {
  return At<U64>(object, 0xd0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54fad0(U64 object) {
  return At<U64>(object, 0xd8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_54fae0(U64 object) {
  return At<U64>(object, 0xb0);
}

[[gnu::visibility("hidden")]] void SdkStub_5541b0() {
  SdkRoutine_871380();
}

[[gnu::visibility("hidden")]] U64 SdkStub_55d620(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 SdkStub_55d630(U64 object) {
  return At<U64>(object, 0x68);
}

[[gnu::visibility("hidden")]] U64 SdkStub_55d640(U64 object) {
  return At<U64>(object, 0x70);
}

[[gnu::visibility("hidden")]] U64 SdkStub_55d7b0(U64 object) {
  return At<U64>(object, 0x40);
}

[[gnu::visibility("hidden")]] void SdkStub_563ea0(U64 object) {
  SdkRoutine_86def0(object + 0x20);
}

[[gnu::visibility("hidden")]] void SdkStub_563f60() {
  SdkRoutine_86def0();
}

[[gnu::visibility("hidden")]] void SdkStub_564320(U64 object) {
  SdkRoutine_86def0(object + 0x18);
}

[[gnu::visibility("hidden")]] void SdkStub_592a00(U64 object, U8 value) {
  At<U8>(object, 0x3) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_592b30(U64 object, U64 value) {
  At<U64>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_5d3be0(U64 object) {
  return SdkRoutine_5d3c00(At<U64>(object, 0xb8));
}

[[gnu::visibility("hidden")]] U32 SdkStub_5dde60() {
  return 3186;
}

[[gnu::visibility("hidden")]] U64 SdkStub_5de960(U64 object) {
  return SdkRoutine_86aad0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 SdkStub_5de970(U64 object) {
  return SdkRoutine_86aae0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 SdkStub_5de980(U64 object) {
  return SdkRoutine_86aaf0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U8 SdkStub_5e7330(U64 object) {
  return At<U8>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_5e7340(U64 object) {
  return At<U64>(object, 0x40);
}

[[gnu::visibility("hidden")]] U32 SdkStub_5e74d0() {
  return 626;
}

[[gnu::visibility("hidden")]] U64 SdkStub_5e76e0(U64 object) {
  return SdkRoutine_5e85e0(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U16 SdkStub_5e7ad0(U64 object) {
  return At<U16>(object, 0x38);
}

[[gnu::visibility("hidden")]] void SdkStub_5e7ae0(U64 object, U32 value) {
  At<U32>(object, 0x34) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_5eda70() {
}

[[gnu::visibility("hidden")]] void SdkStub_5ee9e0() {
}

[[gnu::visibility("hidden")]] void SdkStub_5f7cc0() {
  SdkRoutine_5f7a90();
}

[[gnu::visibility("hidden")]] void SdkStub_5fb200() {
  SdkRoutine_875b10();
}

[[gnu::visibility("hidden")]] void SdkStub_5fb210() {
  SdkRoutine_875b30();
}

[[gnu::visibility("hidden")]] void SdkStub_5fbfa0() {
  SdkRoutine_5fb210();
}

[[gnu::visibility("hidden")]] U64 SdkStub_602440(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] U32 SdkStub_607f20(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] void SdkStub_60b450() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_60b820() {
  return 2;
}

[[gnu::visibility("hidden")]] U64 SdkStub_617760() {
  return reinterpret_cast<U64>(SdkData_c65110);
}

[[gnu::visibility("hidden")]] void SdkStub_617b40(U64 object) {
  SdkRoutine_6195f0(object + 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_623af0() {
  return reinterpret_cast<U64>(SdkData_e72850);
}

[[gnu::visibility("hidden")]] U64 SdkStub_623d60() {
  return reinterpret_cast<U64>(SdkData_e728d0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_623de0() {
  return reinterpret_cast<U64>(SdkData_e72950);
}

[[gnu::visibility("hidden")]] void SdkStub_62441c() {
  SdkRoutine_6243e0();
}

[[gnu::visibility("hidden")]] void SdkStub_629310(U64 object) {
  SdkRoutine_629f40(object + 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_629350() {
  return reinterpret_cast<U64>(SdkData_e730f0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_62aab0(U64 object) {
  return At<U64>(object, 0x468);
}

[[gnu::visibility("hidden")]] U64 SdkStub_62aac0(U64 object) {
  return At<U64>(object, 0x470);
}

[[gnu::visibility("hidden")]] U8 SdkStub_62b4c0(U64 object) {
  return At<U8>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_62b4e0(U64 object) {
  return At<U32>(object, 0xc);
}

[[gnu::visibility("hidden")]] void SdkStub_62b4f0() {
  SdkRoutine_9d750();
}

[[gnu::visibility("hidden")]] U32 SdkStub_62b810() {
  return 30;
}

[[gnu::visibility("hidden")]] U64 SdkStub_62b890() {
  return reinterpret_cast<U64>(SdkData_c76f82);
}

[[gnu::visibility("hidden")]] U32 SdkStub_62b8a0() {
  return 0x17bb0000;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62ba70() {
  return 0x80000000;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62ba80() {
  return 100;
}

[[gnu::visibility("hidden")]] U64 SdkStub_62ba90() {
  return 0xffffffffffffffff;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62bab0() {
  return 0x10000;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62bac0() {
  return 40;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62caa0() {
  return 512;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62cab0() {
  return 15;
}

[[gnu::visibility("hidden")]] U64 SdkStub_62cac0() {
  return reinterpret_cast<U64>(SdkData_10406b8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_62cb10() {
  return 21;
}

[[gnu::visibility("hidden")]] U32 SdkStub_62cb50() {
  return 49;
}

[[gnu::visibility("hidden")]] U64 SdkStub_62d0e0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U8 SdkStub_634110(U64 object) {
  return At<U8>(object, 0xe4);
}

[[gnu::visibility("hidden")]] U64 SdkStub_636730(U64 object) {
  return At<U64>(object, 0x110);
}

[[gnu::visibility("hidden")]] U64 SdkStub_636740(U64 object) {
  return At<U64>(object, 0x108);
}

[[gnu::visibility("hidden")]] void SdkStub_6369e0() {
  SdkRoutine_6292b0();
}

[[gnu::visibility("hidden")]] void SdkStub_639d3c() {
  SdkRoutine_639ce8();
}

[[gnu::visibility("hidden")]] void SdkStub_63b48c() {
  SdkRoutine_63b428();
}

[[gnu::visibility("hidden")]] U64 SdkStub_63de00(U64 object) {
  return SdkRoutine_6247e0(At<U64>(object, 0x88));
}

[[gnu::visibility("hidden")]] U64 SdkStub_63de10(U64 object) {
  return SdkRoutine_624920(At<U64>(object, 0x88));
}

[[gnu::visibility("hidden")]] void SdkStub_644c4c() {
  SdkRoutine_644b24();
}

[[gnu::visibility("hidden")]] U64 SdkStub_6457b0() {
  return reinterpret_cast<U64>(SdkData_e74d60);
}

[[gnu::visibility("hidden")]] void SdkStub_645830() {
}

[[gnu::visibility("hidden")]] U64 SdkStub_645b80(U64 object) {
  return At<U64>(object, 0xf0);
}

[[gnu::visibility("hidden")]] U32 SdkStub_645dd0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_645de0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_645df0(U64 object) {
  return At<U32>(At<U64>(object, 0xf0), 0x88);
}

[[gnu::visibility("hidden")]] void SdkStub_646140() {
}

[[gnu::visibility("hidden")]] void SdkStub_646150() {
}

[[gnu::visibility("hidden")]] U64 SdkStub_646860() {
  return reinterpret_cast<U64>(SdkData_e74dd0);
}

[[gnu::visibility("hidden")]] U32 SdkStub_646870() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_646880() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_646890() {
  return 1;
}

[[gnu::visibility("hidden")]] void SdkStub_6468b0() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_646a10() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_6496b0(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_6496e0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6496f0(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_649700(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_649710(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] void SdkStub_649770() {
}

[[gnu::visibility("hidden")]] U64 SdkStub_649810(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_649820(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_649830(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_649840() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_64a0d0() {
  return reinterpret_cast<U64>(SdkData_ea63b8);
}

[[gnu::visibility("hidden")]] void SdkStub_64a460() {
}

[[gnu::visibility("hidden")]] void SdkStub_64a470() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_64a760() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_64a770() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_64a7d0() {
  return 10;
}

[[gnu::visibility("hidden")]] void SdkStub_64aa70() {
}

[[gnu::visibility("hidden")]] void SdkStub_64aa80() {
}

[[gnu::visibility("hidden")]] void SdkStub_64aa90() {
}

[[gnu::visibility("hidden")]] void SdkStub_64aaa0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64aab0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64aaf0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ab00() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_64af40() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64af50() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64af60() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64af70() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64af80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64af90() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64afa0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64afb0() {
  return 1;
}

[[gnu::visibility("hidden")]] void SdkStub_64b060(U64 object, U64 value) {
  At<U64>(object, 0x78) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_64b070(U64 object, U64 value) {
  At<U64>(object, 0x80) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_64b080(U64 object) {
  return At<U64>(object, 0x78);
}

[[gnu::visibility("hidden")]] U64 SdkStub_64b090(U64 object) {
  return At<U64>(object, 0x80);
}

[[gnu::visibility("hidden")]] void SdkStub_64b0a0(U64 object, U8 value) {
  At<U8>(object, 0x14) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_64b290(U64 object, U8 value) {
  At<U8>(object, 0x15) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_64b410(U64 object, U32 value) {
  At<U32>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] U8 SdkStub_64ced0(U64 object) {
  return At<U8>(object, 0x11);
}

[[gnu::visibility("hidden")]] void SdkStub_64cee0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64fba0() {
  SdkRoutine_64f9e0();
}

[[gnu::visibility("hidden")]] void SdkStub_64fbb0(U64 object, U32 value) {
  At<U32>(object, 0x90) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_64fbc0(U64 object, U32 value) {
  At<U32>(object, 0x94) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_64fbd0(U64 object) {
  return At<U32>(object, 0x90);
}

[[gnu::visibility("hidden")]] U32 SdkStub_64fbe0(U64 object) {
  return At<U32>(object, 0x94);
}

[[gnu::visibility("hidden")]] void SdkStub_64ff10() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff30() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff40() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff50() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff60() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff70() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff80() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ff90() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ffa0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ffb0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ffc0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ffd0() {
}

[[gnu::visibility("hidden")]] void SdkStub_64ffe0() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_650060(U64 object) {
  return At<U32>(object, 0x4);
}

[[gnu::visibility("hidden")]] void SdkStub_650080(U64 object, U32 value) {
  At<U32>(object, 0x4) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_650b90(U64 object) {
  return At<U32>(object, 0x4);
}

[[gnu::visibility("hidden")]] U32 SdkStub_650ba0(U64 object) {
  return At<U32>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_650c80(U64 object) {
  return At<U32>(object, 0x0);
}

[[gnu::visibility("hidden")]] U32 SdkStub_650ca0() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_650cb0() {
  SdkRoutine_691020();
}

[[gnu::visibility("hidden")]] void SdkStub_650cc0() {
  SdkRoutine_691370();
}

[[gnu::visibility("hidden")]] void SdkStub_650cd0() {
  SdkRoutine_691380();
}

[[gnu::visibility("hidden")]] void SdkStub_650ce0() {
  SdkRoutine_691650();
}

[[gnu::visibility("hidden")]] void SdkStub_650cf0() {
  SdkRoutine_691380();
}

[[gnu::visibility("hidden")]] void SdkStub_650d00() {
  SdkRoutine_691650();
}

[[gnu::visibility("hidden")]] void SdkStub_650d30() {
  SdkRoutine_691660();
}

[[gnu::visibility("hidden")]] void SdkStub_650d70() {
  SdkRoutine_691760();
}

[[gnu::visibility("hidden")]] void SdkStub_650d80(U64 object, U32 value) {
  At<U32>(object, 0x4) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_650d90() {
}

[[gnu::visibility("hidden")]] void SdkStub_650da0(U64 object, U32 value) {
  At<U32>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_650db0() {
}

[[gnu::visibility("hidden")]] void SdkStub_6540f0() {
}

[[gnu::visibility("hidden")]] bool SdkStub_654120(U64 object) {
  return At<U32>(object, 0x1c80) != 0u;
}

[[gnu::visibility("hidden")]] U64 SdkStub_656180() {
  return reinterpret_cast<U64>(SdkData_e74e40);
}

[[gnu::visibility("hidden")]] void SdkStub_6566e0() {
}

[[gnu::visibility("hidden")]] void SdkStub_656870(U64 object, U64 value) {
  At<U64>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_656890(U64 object, U64 value) {
  At<U64>(object, 0x20) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6568a0(U64 object, U64 value) {
  At<U64>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6570f0(U64 object, U64 value) {
  At<U64>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6589a0() {
}

[[gnu::visibility("hidden")]] void SdkStub_659bb0(U64 object, U64 value) {
  At<U64>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_659bc0(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] void SdkStub_659bd0(U64 object, U32 value) {
  At<U32>(object, 0x20) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_659be0(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] void SdkStub_659c20(U64 object, U32 value) {
  At<U32>(object, 0x24) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_659c30(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] void SdkStub_659c40(U64 object, U32 value) {
  At<U32>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_659c50(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_659c70(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_659c80(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_659cd0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_659d20(U64 object, U32 value) {
  At<U32>(object, 0x34) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_659d30(U64 object) {
  return At<U32>(object, 0x34);
}

[[gnu::visibility("hidden")]] void SdkStub_659da0(U64 object, U32 value) {
  At<U32>(object, 0xb0) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_659db0(U64 object, U32 value) {
  At<U32>(object, 0xb4) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_659dc0(U64 object, U32 value) {
  At<U32>(object, 0xb8) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_659dd0(U64 object, U32 value) {
  At<U32>(object, 0xbc) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_659e40(U64 object, float value) {
  At<float>(object, 0x60) = value;
}

[[gnu::visibility("hidden")]] float SdkStub_659e50(U64 object) {
  return At<float>(object, 0x60);
}

[[gnu::visibility("hidden")]] void SdkStub_659e70(U64 object, U8 value) {
  At<U8>(object, 0x78) = value;
}

[[gnu::visibility("hidden")]] U8 SdkStub_659e80(U64 object) {
  return At<U8>(object, 0x78);
}

[[gnu::visibility("hidden")]] void SdkStub_659ec0(U64 object, U32 value) {
  At<U32>(object, 0x7c) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_659ed0(U64 object) {
  return At<U32>(object, 0x7c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_65a030() {
  return 0;
}

[[gnu::visibility("hidden")]] void SdkStub_65b710(U64 object) {
  SdkRoutine_649830(object + 0x130);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65b8c0(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65b8d0(U64 object) {
  return At<U64>(object, 0x38);
}

[[gnu::visibility("hidden")]] void SdkStub_65b8e0() {
  SdkRoutine_858d70();
}

[[gnu::visibility("hidden")]] U64 SdkStub_65b9c0(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65b9d0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_65ba30() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_65ba40(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65ba50(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65ba60(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] void SdkStub_65c110() {
  SdkRoutine_65c2d0();
}

[[gnu::visibility("hidden")]] void SdkStub_65c5d0() {
  SdkRoutine_875b20();
}

[[gnu::visibility("hidden")]] U64 SdkStub_65c680() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void SdkStub_65cb50() {
  SdkRoutine_875e40();
}

[[gnu::visibility("hidden")]] void SdkStub_65cb60() {
  SdkRoutine_875e30();
}

[[gnu::visibility("hidden")]] void SdkStub_65cc80() {
  SdkRoutine_875b00();
}

[[gnu::visibility("hidden")]] void SdkStub_65cce0() {
  SdkRoutine_875b30();
}

[[gnu::visibility("hidden")]] U64 SdkStub_65ccf0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void SdkStub_65cd00() {
}

[[gnu::visibility("hidden")]] void SdkStub_65cd10() {
  SdkRoutine_875c20();
}

[[gnu::visibility("hidden")]] U32 SdkStub_65cd20() {
  return 1;
}

[[gnu::visibility("hidden")]] void SdkStub_65cd80() {
  SdkRoutine_875d90();
}

[[gnu::visibility("hidden")]] void SdkStub_65cd90() {
  SdkRoutine_875da0();
}

[[gnu::visibility("hidden")]] void SdkStub_65cda0() {
  SdkRoutine_875d80();
}

[[gnu::visibility("hidden")]] void SdkStub_65cf40(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_65cf90(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] void SdkStub_65d000(U64 object, U64 value) {
  At<U64>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d010(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] void SdkStub_65d020(U64 object, U64 value) {
  At<U64>(object, 0x30) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d030(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] void SdkStub_65d040(U64 object, U32 value) {
  At<U32>(object, 0x4) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d050(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d060(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d070(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U32 SdkStub_65d080(U64 object) {
  return At<U32>(object, 0x4);
}

[[gnu::visibility("hidden")]] void SdkStub_65d460() {
  SdkRoutine_6589a0();
}

[[gnu::visibility("hidden")]] void SdkStub_65d470() {
  SdkRoutine_6589a0();
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d480(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_65d4f0(U64 object) {
  return At<U64>(object, 0x38);
}

[[gnu::visibility("hidden")]] U32 SdkStub_65d510(U64 object) {
  return At<U32>(object, 0x58);
}

[[gnu::visibility("hidden")]] void SdkStub_65d570() {
  SdkRoutine_66d8e0();
}

[[gnu::visibility("hidden")]] U32 SdkStub_65ed60() {
  return 1;
}

[[gnu::visibility("hidden")]] U8 SdkStub_660d30(U64 object) {
  return At<U8>(object, 0x0);
}

[[gnu::visibility("hidden")]] void SdkStub_660d80(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_660d90(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_660da0(U64 object, U32 value) {
  At<U32>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_660db0(U64 object) {
  return At<U32>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_660dd0(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_660e10(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] U32 SdkStub_660e20(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] U32 SdkStub_660e40(U64 object) {
  return At<U32>(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 SdkStub_660e50(U64 object) {
  return At<U64>(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 SdkStub_660e70(U64 object) {
  return At<U64>(object, 0x50);
}

[[gnu::visibility("hidden")]] U32 SdkStub_660e80(U64 object) {
  return At<U32>(object, 0x48);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662d70(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x4);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662d80(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662d90() {
  return 208;
}

[[gnu::visibility("hidden")]] U32 SdkStub_662da0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_662dd0(U64 object) {
  return At<U64>(At<U64>(object, 0x8), 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_662de0(U64 object) {
  return At<U64>(At<U64>(object, 0x8), 0x18);
}

[[gnu::visibility("hidden")]] U64 SdkStub_662df0(U64 object) {
  return At<U64>(At<U64>(object, 0x8), 0x20);
}

[[gnu::visibility("hidden")]] U64 SdkStub_662e00(U64 object) {
  return At<U64>(At<U64>(object, 0x8), 0x28);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e10(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x30);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e20(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x34);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e30(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x38);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e40(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x3c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e50(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x40);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e60(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x44);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e70(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x48);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e80(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x4c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662e90(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x50);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662ed0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x58);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662ee0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x5c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662ef0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x60);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662f00(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x64);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662f10(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x68);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662f20(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x6c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662f40(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x70);
}

[[gnu::visibility("hidden")]] U32 SdkStub_662f50(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x74);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663140(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x8c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6631a0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x98);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6631b0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0x9c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663330(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xbc);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663340(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xc0);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663350(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xc4);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663360(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xc8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663370(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xcc);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663390() {
  return 216;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6633d0() {
  return 224;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6633e0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xd8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6633f0(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xdc);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663420(U64 object) {
  return At<U32>(At<U64>(object, 0x8), 0xd4);
}

[[gnu::visibility("hidden")]] void SdkStub_663460(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6634a0(U64 object, U32 value) {
  At<U32>(object, 0x20) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_6637b0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6637c0(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] U32 SdkStub_663820(U64 object) {
  return At<U32>(object, 0x3c);
}

[[gnu::visibility("hidden")]] U64 SdkStub_663830(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] void SdkStub_663840(U64 object, U32 value) {
  At<U32>(object, 0x44) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_663870(U64 object) {
  return At<U32>(object, 0x44);
}

[[gnu::visibility("hidden")]] void SdkStub_663880(U64 object, U64 value) {
  At<U64>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_663890(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] void SdkStub_6666a0() {
  SdkRoutine_664890();
}

[[gnu::visibility("hidden")]] U64 SdkStub_666730(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_666740(U64 object) {
  return At<U64>(object, 0x2838);
}

[[gnu::visibility("hidden")]] void SdkStub_6667c0(U64 object) {
  SdkRoutine_66f560(object + 0x28);
}

[[gnu::visibility("hidden")]] void SdkStub_666c20(U64 object, U64 value) {
  At<U64>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_666cb0(U64 object, float value) {
  At<float>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_666d70(U64 object, float value) {
  At<float>(object, 0x14) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_666d90(U64 object, float value) {
  At<float>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_666da0(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] float SdkStub_666e20(U64 object) {
  return At<float>(object, 0x10);
}

[[gnu::visibility("hidden")]] float SdkStub_666ee0(U64 object) {
  return At<float>(object, 0x14);
}

[[gnu::visibility("hidden")]] float SdkStub_666f00(U64 object) {
  return At<float>(object, 0x18);
}

[[gnu::visibility("hidden")]] void SdkStub_666f40() {
}

[[gnu::visibility("hidden")]] float SdkStub_666fc0(U64 object) {
  return At<float>(object, 0x18);
}

[[gnu::visibility("hidden")]] float SdkStub_667080(U64 object) {
  return At<float>(object, 0x1c);
}

[[gnu::visibility("hidden")]] void SdkStub_6671b0() {
}

[[gnu::visibility("hidden")]] void SdkStub_6671c0() {
  SdkRoutine_6671d0();
}

[[gnu::visibility("hidden")]] U64 SdkStub_667420(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_667430(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_667440(U64 object) {
  return At<U32>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_667500() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U8 SdkStub_667830(U64 object) {
  return At<U8>(object, 0x2);
}

[[gnu::visibility("hidden")]] void SdkStub_6678e0(U64 object, U32 value) {
  At<U32>(object, 0x0) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6678f0(U64 object, U32 value) {
  At<U32>(object, 0x4) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_667900(U64 object) {
  return At<U32>(object, 0x0);
}

[[gnu::visibility("hidden")]] U32 SdkStub_667910(U64 object) {
  return At<U32>(object, 0x4);
}

[[gnu::visibility("hidden")]] void SdkStub_6695e0(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669630(U64 object, U32 value) {
  At<U32>(object, 0x20) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669640(U64 object, U32 value) {
  At<U32>(object, 0x24) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669650(U64 object, U32 value) {
  At<U32>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669660(U64 object, U32 value) {
  At<U32>(object, 0x2c) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669670(U64 object, U32 value) {
  At<U32>(object, 0x30) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6696b0(U64 object, U32 value) {
  At<U32>(object, 0x34) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6696c0(U64 object, U32 value) {
  At<U32>(object, 0x38) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6696d0(U64 object, U32 value) {
  At<U32>(object, 0x3c) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6696f0(U64 object, U32 value) {
  At<U32>(object, 0x50) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669710(U64 object, U32 value) {
  At<U32>(object, 0x5c) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_669720(U64 object, U32 value) {
  At<U32>(object, 0x58) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_669730(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669740(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669750(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669760(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669770(U64 object) {
  return At<U32>(object, 0x2c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669780(U64 object) {
  return At<U32>(object, 0x30);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669790(U64 object) {
  return At<U32>(object, 0x34);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6697a0(U64 object) {
  return At<U32>(object, 0x38);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6697b0(U64 object) {
  return At<U32>(object, 0x3c);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6697f0(U64 object) {
  return At<U32>(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_669800(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669870(U64 object) {
  return At<U32>(object, 0x58);
}

[[gnu::visibility("hidden")]] U64 SdkStub_669880(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_669890(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U32 SdkStub_669e10(U64 object) {
  return At<U32>(object, 0x5c);
}

[[gnu::visibility("hidden")]] void SdkStub_669e20(U64 object, U64 value) {
  At<U64>(object, 0x60) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_66b2f0(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] U16 SdkStub_66b300(U64 object) {
  return At<U16>(object, 0x24);
}

[[gnu::visibility("hidden")]] U16 SdkStub_66b310(U64 object) {
  return At<U16>(object, 0x26);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66b3a0(U64 object) {
  return At<U32>(object, 0x50);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66b3b0(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] void SdkStub_66b430() {
}

[[gnu::visibility("hidden")]] U64 SdkStub_66b8a0(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66b8b0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66b8c0(U64 object) {
  return At<U32>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c0b0(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c1b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void SdkStub_66c230(U64 object, U64 value) {
  At<U64>(object, 0x8) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_66c280(U64 object, U64 value) {
  At<U64>(object, 0x18) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_66c2b0(U64 object, U64 value) {
  At<U64>(object, 0x28) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_66c2c0(U64 object, U32 value) {
  At<U32>(object, 0x14) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_66c2d0(U64 object, U32 value) {
  At<U32>(object, 0x30) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c310(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66c320(U64 object) {
  return At<U32>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c360(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66c370(U64 object) {
  return At<U32>(object, 0x14);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c380(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66c390(U64 object) {
  return At<U32>(object, 0x30);
}

[[gnu::visibility("hidden")]] void SdkStub_66c690(U64 object, U64 value) {
  At<U64>(object, 0x30) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c730(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66c740(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66c750(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66c8c0(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] U32 SdkStub_66c8d0(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] U64 SdkStub_66f410(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void SdkStub_66fa70() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_672b70(U64 object) {
  return At<U32>(object, 0x58);
}

[[gnu::visibility("hidden")]] void SdkStub_672b80(U64 object, U32 value) {
  At<U32>(object, 0x58) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_672b90(U64 object) {
  return At<U32>(object, 0x5c);
}

[[gnu::visibility("hidden")]] void SdkStub_672ba0(U64 object, U32 value) {
  At<U32>(object, 0x5c) = value;
}

[[gnu::visibility("hidden")]] U32 SdkStub_672bb0(U64 object) {
  return At<U32>(object, 0x60);
}

[[gnu::visibility("hidden")]] void SdkStub_672bc0(U64 object, U32 value) {
  At<U32>(object, 0x60) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_672c30(U64 object, U64 value) {
  At<U64>(object, 0x1768) = value;
}

[[gnu::visibility("hidden")]] void SdkStub_6979f0() {
  SdkRoutine_6975b0();
}

[[gnu::visibility("hidden")]] U64 SdkStub_69be40() {
  return reinterpret_cast<U64>(SdkData_e798f8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_69c010(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U64 SdkStub_69c020(U64 object) {
  return At<U64>(object, 0x70);
}

[[gnu::visibility("hidden")]] U64 SdkStub_69c030(U64 object) {
  return At<U64>(object, 0x70);
}

[[gnu::visibility("hidden")]] U64 SdkStub_69c320(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d160() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d170() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d1d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d240() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d410() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d420() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69d460() {
  return 6;
}

[[gnu::visibility("hidden")]] U64 SdkStub_69d9d0() {
  return reinterpret_cast<U64>(SdkData_e799e8);
}

[[gnu::visibility("hidden")]] U64 SdkStub_69f850() {
  return reinterpret_cast<U64>(SdkData_ea8998);
}

[[gnu::visibility("hidden")]] void SdkStub_69f860() {
  SdkRoutine_69f620();
}

[[gnu::visibility("hidden")]] U32 SdkStub_69fa00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69fa10() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69fac0() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69fad0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_69fae0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_6a05d0() {
  return reinterpret_cast<U64>(SdkData_ea8c58);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a05e0() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a05f0() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0600() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0610() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0620() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0630() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0640() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0650() {
  return 6;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a0660() {
  return 6;
}

[[gnu::visibility("hidden")]] void SdkStub_6a1940(U64 object) {
  SdkRoutine_66f730(object + 0x28);
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a1de0() {
  return 840;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a1df0() {
  return 3564;
}

[[gnu::visibility("hidden")]] U64 SdkStub_6a23b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 SdkStub_6a23c0(U64 object) {
  return At<U64>(object, 0x170);
}

[[gnu::visibility("hidden")]] U64 SdkStub_6a2470(U64 object) {
  return At<U64>(object, 0x1768);
}

[[gnu::visibility("hidden")]] void SdkStub_6a4ab0(U64 object, U64 value) {
  At<U64>(object, 0x1dc8) = value;
}

[[gnu::visibility("hidden")]] U64 SdkStub_6a4b50(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] void SdkStub_6a52e0() {
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a8f60() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a8f70() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a9a90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a9aa0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a9ab0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6a9ac0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6aa550() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6aa560() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ab1c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ab1d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac450() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac590() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac5a0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac5b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac5c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac5d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac5e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac5f0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac600() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac8b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac8c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac9c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ac9d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6acad0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6acae0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6acd00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ad2b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ad550() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 SdkStub_6adbe0() {
  return 3;
}

[[gnu::visibility("hidden")]] void SdkStub_6ade40() {
  SdkRoutine_6addf0();
}

[[gnu::visibility("hidden")]] void SdkStub_6b06b0() {
  SdkRoutine_876b50();
}

[[gnu::visibility("hidden")]] U32 SdkStub_6ff840() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 SdkStub_73e670() {
  return reinterpret_cast<U64>(SdkData_e7c830);
}

[[gnu::visibility("hidden")]] void SdkStub_7535c0() {
  SdkRoutine_87ae00();
}

[[gnu::visibility("hidden")]] void SdkStub_755e60() {
  SdkRoutine_87ae10();
}

[[gnu::visibility("hidden")]] float SdkStub_75a7b0(U64 object) {
  return At<float>(object, 0x8c);
}

[[gnu::visibility("hidden")]] void SdkStub_773780() {
  SdkRoutine_772960();
}

[[gnu::visibility("hidden")]] void SdkStub_7789a0() {
  SdkRoutine_7786b0();
}

[[gnu::visibility("hidden")]] U32 SdkStub_7bc750() {
  return 42;
}

[[gnu::visibility("hidden")]] U64 SdkStub_7d3310(U64 object) {
  return SdkRoutine_87c7f0(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U64 SdkStub_7d34d0() {
  return reinterpret_cast<U64>(SdkData_bb85d1);
}

[[gnu::visibility("hidden")]] U64 SdkStub_7d6350() {
  return reinterpret_cast<U64>(SdkData_bc40b0);
}

[[gnu::visibility("hidden")]] void SdkStub_7e8160() {
}

[[gnu::visibility("hidden")]] void SdkStub_7ed740() {
  SdkRoutine_7ed750();
}

[[gnu::visibility("hidden")]] void SdkStub_7f2dc0() {
  SdkRoutine_7f2dd0();
}

[[gnu::visibility("hidden")]] U64 SdkStub_812730() {
  return 0xffffffffffffffff;
}

[[gnu::visibility("hidden")]] void SdkStub_812770() {
}

[[gnu::visibility("hidden")]] U64 SdkStub_812780() {
  return 0xffffffffffffffff;
}

[[gnu::visibility("hidden")]] void SdkStub_8127c0() {
}

[[gnu::visibility("hidden")]] U64 SdkStub_81c760() {
  return reinterpret_cast<U64>(SdkData_cfff70);
}
