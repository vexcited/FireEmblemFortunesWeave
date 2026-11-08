#include <stdint.h>

using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] void CudaDriverRoutine_25cf00();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_f9e0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_194f20();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1db800();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_19a4f0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_19a600();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_19a660();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_22d210();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1d140();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_b4840();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_202b60();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_12e340(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12e340();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_55720();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_58b40();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_59430();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_8e9c0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_8eb90();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12e2e0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_8e240();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_8ede0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_99c50();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25cf30();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_77520();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_8f360();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_90d90();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_91820();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_91940();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_91a80();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_b5190();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102e00(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12db60();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12db80();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12dc40();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_5df40();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1162c0();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1a2960(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_86e30();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d870();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d880(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d890(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_25d8a0(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d910();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d920();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d930();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d940();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d950();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25d990();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25da70();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25dac0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25db20();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_25db40();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1381f0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_9aee0();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2226e0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_222660(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_96e40(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1a2080();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1a26e0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b0630();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1a2ae0(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1d2bb0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1db7c0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_39530();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_398a0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1db280();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1db390();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_628d0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_62bc0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_196970();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_61b00();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_61ba0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_61d40();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_61ea0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_62140();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_62c60();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_63500();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_634f0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_63750();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_638a0();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1dbfc0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db1a0(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1c0900();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10c6b0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10c750();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12e900();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_57450();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_8e230();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_4f840();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12e380();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12e430();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10c800();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10c840();
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1db800(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102370(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1123e0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_112540();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_4bee0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_4c120();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_4c350();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_bbd80();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1dfd30();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_2071e0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_231940();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_de3c0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_de3a0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_19f2c0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_19fcc0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_19fd60();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10c1d0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12d250();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12d470();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12d5d0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12d8b0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12d910();

[[gnu::visibility("hidden")]] void CudaDriverStub_20() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2b0() {
  CudaDriverRoutine_25cf00();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_a60() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_3500() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_35c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_39c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_39d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_39e0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_4ab0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_4ac0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_4af0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_4b00() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_4b50(U64 object, U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_4b60() {
  return 512;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_5010() {
  CudaDriverRoutine_f9e0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_53f0() {
  CudaDriverRoutine_194f20();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_79a0() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_79b0() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_7f00(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_8190() {
  CudaDriverRoutine_1db800();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_84e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8970() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8f10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_9220() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_9230() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_97a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_98a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_99f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_9a80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_9a90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_a1f0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_a240() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_a250() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_a260() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_e7b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_e7c0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_f7f0() {
  CudaDriverRoutine_19a4f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_f800() {
  CudaDriverRoutine_19a600();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_f810() {
  CudaDriverRoutine_19a660();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_130a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_15d40() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_15e00() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_161c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_161d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_161e0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_17600() {
  CudaDriverRoutine_22d210();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_17610() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_17620() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_17650() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_17660() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_17f60(U64 object, U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_17f70() {
  return 512;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_18460() {
  CudaDriverRoutine_f9e0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c050() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c060() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1c5a0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1c830() {
  CudaDriverRoutine_1db800();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1c970() {
  CudaDriverRoutine_1d140();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1d120() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_26730() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_28300() {
  CudaDriverRoutine_b4840();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_4c3e0() {
  CudaDriverRoutine_202b60();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_4c470() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_4f840() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_4f8b0(U64 object) {
  return CudaDriverRoutine_12e340(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50670() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50680() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50760() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50770() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50930() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50940() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50cc0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50cd0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50ce0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_50cf0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_51670() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_51b20() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_51d40() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_54930() {
  CudaDriverRoutine_12e340();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_54b20() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_559f0() {
  CudaDriverRoutine_55720();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_55df0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_57450() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_58750() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_58760() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_58770() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_58780() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_58e00() {
  CudaDriverRoutine_58b40();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_5a6f0(U64 object) {
  return At<U64>(At<U64>(object, 0x0), 0x8);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_5bb90(U64 object) {
  return At<U32>(object, 0x20);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_5c420() {
  CudaDriverRoutine_59430();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_60250() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_609d0() {
  CudaDriverRoutine_8e9c0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_609e0() {
  CudaDriverRoutine_8eb90();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_60a00() {
  CudaDriverRoutine_12e2e0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_60a20() {
  CudaDriverRoutine_8e240();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_60c80() {
  CudaDriverRoutine_8ede0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_60f20() {
  CudaDriverRoutine_99c50();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_61890() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_618a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_640d0() {
  CudaDriverRoutine_25cf30();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_66c50() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_67bb0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_680c0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_680d0() {
  return 2;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_69890() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_69f60() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_69f80() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_69f90() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_69fa0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_69fb0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a050() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a060() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a070() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a080() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a090() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a0a0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a0b0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a0c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a0d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6a0e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6bcd0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_6cfc0() {
  CudaDriverRoutine_12e340();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_6fda0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_72060() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_72070() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_761a0() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_761f0() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76240() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76250() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76260() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76270() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76280() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76470() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76480() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_764d0() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76530() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76540() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_76550() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_765b0() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_765c0() {
  return 46;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_765d0() {
  return 46;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_76a80() {
  CudaDriverRoutine_12e340();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_76cf0() {
  CudaDriverRoutine_12e340();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_77520() {
  CudaDriverRoutine_77520();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_7f8e0(U64 object) {
  return At<U64>(object, 0x58);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_82b40() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_82b50() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8b270(U64 object) {
  return At<U32>(object, 0x0);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8b280(U64 object) {
  return At<U32>(object, 0x4);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8e1f0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8e230() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8f350() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_8f4a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_921e0() {
  CudaDriverRoutine_8f360();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_92320() {
  CudaDriverRoutine_90d90();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_927d0() {
  CudaDriverRoutine_91820();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_927e0() {
  CudaDriverRoutine_91940();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_92840() {
  CudaDriverRoutine_91a80();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_943c0() {
  return 2;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_94430() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_95c70() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_99850(U64 object) {
  return At<U32>(object, 0xa4);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_99860(U64 object) {
  return At<U32>(object, 0x38);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_9b050(U64 object) {
  return At<U64>(object, 0x4220);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_9e1d0(U64 object) {
  return At<U32>(object, 0x3e58);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_b58d0() {
  CudaDriverRoutine_b5190();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_b7fa0(U64 object) {
  return At<U64>(object, 0x98);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_be840() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_be940() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_be950() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_be990() {
  return 400;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_de8d0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_e1da0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_e1e20() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_e1e90() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_e1ea0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_e1eb0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_e1ec0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_e1ed0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_e1ee0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_e1ef0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_ee000() {
  return 3;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_f0f50(U64 object) {
  return At<U64>(object, 0x0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_f0f70(U64 object) {
  return At<U64>(object, 0xe0);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_f2df0(U64 object) {
  return CudaDriverRoutine_102e00(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] void CudaDriverStub_101ef0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102060(U64 object) {
  return At<U64>(object, 0xf8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_102070(U64 object,
    U64 value) {
  At<U64>(object, 0xf8) = value;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102370(U64 object) {
  return At<U64>(object, 0x10);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_102390(U64 object) {
  return At<U32>(object, 0x80);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102e00(U64 object) {
  return At<U64>(object, 0x60);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_102f00(U64 object) {
  return At<U64>(At<U64>(object, 0xa8), 0x58);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_107f90() {
  CudaDriverRoutine_12db60();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_108070() {
  CudaDriverRoutine_12db80();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_108fc0() {
  CudaDriverRoutine_12dc40();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_10f710() {
  CudaDriverRoutine_5df40();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_10f720(U64 object) {
  return At<U32>(object, 0x8);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_10f730(U64 object) {
  return At<U64>(object, 0x20);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_10f740(U64 object) {
  return At<U32>(object, 0x28);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_112b30(U64 object) {
  return At<U64>(object, 0x30);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_112e30(U64 object) {
  return At<U64>(object, 0x350);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_116790() {
  CudaDriverRoutine_1162c0();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_121090() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1210a0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1210b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1210c0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_122310(U64 object) {
  return At<U64>(At<U64>(object, 0xe8), 0x38);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_122320(U64 object) {
  return At<U64>(At<U64>(object, 0xe8), 0x40);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_122330(U64 object) {
  return At<U64>(At<U64>(object, 0xe8), 0x58);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_122340(U64 object) {
  return At<U64>(At<U64>(object, 0xe8), 0x50);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_122350(U64 object) {
  return At<U64>(At<U64>(object, 0xe8), 0x48);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1223e0(U64 object) {
  return At<U64>(object, 0x18);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1223f0(U64 object) {
  return At<U64>(object, 0x28);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_127ff0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128000() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128010() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128020() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128030() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128040() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128050() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128060() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128070() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128080() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128090() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1280a0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1280b0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1280c0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1280d0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1280e0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1280f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128100() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128110() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128120() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128130() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128140() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128150() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1281f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1282c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1282d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1282e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1282f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128300() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128310() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128320() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128330() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128340() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128350() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128360() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128370() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128380() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128390() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1283a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128960() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128970() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128980() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128990() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1289a0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1289b0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1289c0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1289d0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1289e0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1289f0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128a00() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128a10() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128a20() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128a30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128ab0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_128ac0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128af0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128b00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128b10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128b20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128b30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128b90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128c00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128c10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128c20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128c30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128c40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128d40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128d50() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128e00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128e10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128f00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_128f10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129100() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129110() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129120() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_129130() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129140() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_129150() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129160() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_129170() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129180() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_129190() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1291a0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1291b0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1291c0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1291d0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1291e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1291f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129200() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129210() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129220() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129230() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129240() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1292b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129340() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129350() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129360() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129370() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129380() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_129390() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1293a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1293b0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1293c0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1293d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1293e0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1293f0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129400() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129410() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_129420() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1294e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12bf50(U64 object) {
  return CudaDriverRoutine_1a2960(At<U64>(object, 0x28));
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12c8a0() {
  CudaDriverRoutine_86e30();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12d100(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12db40() {
  CudaDriverRoutine_25d870();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12db50(U64 object) {
  return CudaDriverRoutine_25d880(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12db60(U64 object) {
  return CudaDriverRoutine_25d890(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12db70() {
  return 0xffffffff;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12db80(U64 object) {
  return CudaDriverRoutine_25d8a0(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12dc90() {
  CudaDriverRoutine_25d910();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12dca0() {
  CudaDriverRoutine_25d920();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12dcb0() {
  return 0x40000000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12dcc0() {
  return 0x1f400000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12dcd0() {
  return 4;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12dce0() {
  CudaDriverRoutine_25d930();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12dcf0() {
  CudaDriverRoutine_25d940();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12dd00() {
  CudaDriverRoutine_25d950();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12dd30() {
  return 100;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12dd70() {
  CudaDriverRoutine_25d990();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_12e260() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12e320() {
  return 4096;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12e330() {
  CudaDriverRoutine_25da70();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12e470() {
  CudaDriverRoutine_25dac0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12e550() {
  CudaDriverRoutine_25db20();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_12e580() {
  CudaDriverRoutine_25db40();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_12e650() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1320f0() {
  return 8;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132840() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132850() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132860() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132870() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132880() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132ba0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132d40() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_132ec0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133120() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1332c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133470() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133480() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133490() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1334a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1334c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133620() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133780() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133a60() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133bf0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133c00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133c10() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133c20() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133c40() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133da0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_133f40() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134040() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1342e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134680() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1347e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134940() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134a90() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134aa0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134ab0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134ac0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134ae0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134ca0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_134e80() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_135000() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_135180() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1354e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_135600() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_135760() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_135960() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_135e40() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136110() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136120() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136140() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1362c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1362d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1362e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1362f0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136300() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136310() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136320() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136330() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136340() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136350() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136360() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136370() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136380() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136400() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1366a0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1366b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1366c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1366d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1366e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136820() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136830() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136840() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136850() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136860() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1369b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1369c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1369d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1369e0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136a00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136b60() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136cb0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136cc0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136cd0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136ce0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136cf0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136d00() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136d20() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136e60() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136e70() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136e80() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136e90() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136ea0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136eb0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_136ec0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137030() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137040() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137060() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137160() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137350() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137360() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137370() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137380() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137390() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1373a0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1373c0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137700() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137710() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137720() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137730() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137740() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137820() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137890() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1378b0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1378d0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1378f0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137910() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137930() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137950() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137960() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137970() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137980() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_137990() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1379a0() {
  return 3;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1380a0() {
  return 3;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_138310() {
  CudaDriverRoutine_1381f0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_138960() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_138970() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_138b10() {
  CudaDriverRoutine_9aee0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_138b80() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_198590() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19ade0() {
  return 0x100000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d8d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d8e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d8f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d900() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d910() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d920() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d930() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d950() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d960() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d970() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d980() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d990() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d9a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d9b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d9c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d9d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d9e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19d9f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da50() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da60() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da70() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da80() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19da90() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19daa0() {
  return 32;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19dab0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19dac0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19dad0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19dae0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19daf0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db50() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db60() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db70() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19db80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_19e100(U64 object) {
  return At<U32>(object, 0x58);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a0740() {
  CudaDriverRoutine_12e340();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a0ee0(U64 object) {
  return CudaDriverRoutine_2226e0(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a0ef0(U64 object) {
  return CudaDriverRoutine_222660(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a0f00(U64 object) {
  return CudaDriverRoutine_96e40(At<U64>(object, 0x10));
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a16d0(U64 object,
    U32 value) {
  At<U32>(object, 0x24) = value;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a2060() {
  CudaDriverRoutine_1a2080();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1a26c0(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a26d0() {
  CudaDriverRoutine_1a26e0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a2900() {
  CudaDriverRoutine_1a2080();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a2ae0() {
  CudaDriverRoutine_1a26e0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a2d50() {
  CudaDriverRoutine_1a26e0();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a4690(U64 object) {
  return At<U64>(object, 0x80);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a4c70(U64 object,
    U64 value) {
  At<U64>(object, 0x88) = value;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a4c80(U64 object) {
  return At<U64>(object, 0x88);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1a56f0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a7e90() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a8160() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a8230() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1a9040(U64 object) {
  return At<U32>(At<U64>(object, 0x40), 0xed8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a9fa0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1a9fb0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1a9fe0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1a9ff0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1aa790(U64 object,
    U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1aa7a0() {
  return 512;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1aac00() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1aacd0() {
  CudaDriverRoutine_1b0630();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1ab7f0() {
  CudaDriverRoutine_194f20();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1abf50() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ae630() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ae640() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1ae960(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1aebf0() {
  CudaDriverRoutine_1db800();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1af2a0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1b02f0() {
  CudaDriverRoutine_19a4f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1b0300() {
  CudaDriverRoutine_19a600();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1b0310() {
  CudaDriverRoutine_19a660();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1b46a0(U64 object) {
  return CudaDriverRoutine_1a2960(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1b46f0(U64 object) {
  return CudaDriverRoutine_1a2ae0(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1b5ad0() {
  return 1;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1b7d60(U64 object,
    U64 value) {
  At<U64>(object, 0x10) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf5e0() {
  return 0x1000000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf5f0() {
  return 0x3000000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf620() {
  return 0x5000000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf8c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf8d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf8e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf8f0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf9b0() {
  return 0x8000000;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1bf9e0(U64 object) {
  return At<U32>(At<U64>(object, 0x40), 0xed8);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c0af0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1c0b00() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c3190() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c51f0() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c5200() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c5f50() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c5f60() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c70c0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c7b10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c7ee0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c7ef0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c7f00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c7f10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c80c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c83e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8c70() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8c80() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8c90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8ca0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8cb0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8cc0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8cd0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8ce0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8cf0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8d00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8d10() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c8d20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1c95d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca6c0() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca6d0() {
  return 10;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca6e0() {
  return 10;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca8d0() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca8e0() {
  return 11;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca8f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ca900() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1cd130() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cd140(U64 object,
    U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1cd150() {
  return 512;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cd1c0(U64 object,
    U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1cd1d0() {
  return 512;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cd330() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cd8b0() {
  CudaDriverRoutine_1d2bb0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cdc70() {
  CudaDriverRoutine_194f20();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cf9b0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cf9c0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cf9d0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1cf9e0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1cfc60() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1cfc70() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1d0120(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d0330() {
  CudaDriverRoutine_1db7c0();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1d0960() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1d0970() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d2930() {
  CudaDriverRoutine_19a4f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d2940() {
  CudaDriverRoutine_19a600();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d2950() {
  CudaDriverRoutine_19a660();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d3790() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1d49f0() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1d4a00() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1d4a10() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1d4a20() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1d8c10(U64 object) {
  return At<U64>(object, 0xb8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d8f50() {
  CudaDriverRoutine_39530();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1d8f60() {
  CudaDriverRoutine_398a0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1d9330() {
  return 1;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1db190() {
  CudaDriverRoutine_1db280();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db1a0(U64 object) {
  return At<U64>(object, 0x50);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1db380() {
  CudaDriverRoutine_1db390();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db750(U64 object) {
  return At<U64>(object, 0x200);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db760(U64 object) {
  return At<U64>(object, 0x208);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db7a0(U64 object) {
  return At<U64>(At<U64>(object, 0x48), 0x70);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db7b0(U64 object) {
  return At<U64>(At<U64>(object, 0x48), 0x68);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1db800(U64 object) {
  return At<U64>(object, 0x68);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dbab0(U64 object) {
  return At<U64>(object, 0x70);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dbf50(U64 object) {
  return At<U64>(object, 0x168);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dbf90(U64 object) {
  return At<U64>(object, 0x40);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dbfa0(U64 object) {
  return At<U64>(object, 0x78);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dbfb0(U64 object) {
  return At<U64>(At<U64>(object, 0x48), 0x80);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dbfc0(U64 object) {
  return At<U64>(object, 0x48);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dc330(U64 object) {
  return At<U64>(object, 0x188);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1dd190(U64 object) {
  return At<U64>(object, 0x148);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ddb10() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ddb20() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1de400() {
  return 24576;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1dfd30() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e0010() {
  return 1;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e0020() {
  CudaDriverRoutine_628d0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e0070() {
  CudaDriverRoutine_62bc0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e0080() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e0a70() {
  CudaDriverRoutine_196970();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1010() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1020() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1030() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1040() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1050() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1060() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1380() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1390() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e13a0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e13b0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e13c0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e13d0() {
  CudaDriverRoutine_61b00();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e13e0() {
  CudaDriverRoutine_61ba0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e13f0() {
  CudaDriverRoutine_61d40();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e1400() {
  CudaDriverRoutine_61ea0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e1410() {
  CudaDriverRoutine_62140();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1420() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1430() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1440() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1500() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1510() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1520(U64 object) {
  return At<U32>(object, 0x1c);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1530() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e1910() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e19b0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e2150() {
  CudaDriverRoutine_62c60();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e2620() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e2630() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e2640() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e2650() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e26d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e26e0() {
  return 1024;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e2d70() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e2d80() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e2d90() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3900() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3910() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3d20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3d30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3dc0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3dd0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e3de0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e3df0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e3e00() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e44b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e45c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e45d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e45e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e45f0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e4600() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e4780() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e50a0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e50b0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e52a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e52b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e53c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e53d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e53e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e53f0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5760() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5770() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5790() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5820() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5830() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5840() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5920() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5930() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5940() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5950() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5960() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5970() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5980() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e5990() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e59a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e59b0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e59c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e59d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e59e0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e59f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a10() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a20() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e5a30() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a40() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a50() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a70() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a80() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5a90() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1e5b00(U64 object) {
  return CudaDriverRoutine_12e340(At<U64>(object, 0x3f00));
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5f00() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e5f10() {
  return 101;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e6210() {
  return 86;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e6220() {
  CudaDriverRoutine_63500();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e6230() {
  CudaDriverRoutine_634f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e6240() {
  CudaDriverRoutine_63750();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e6250() {
  CudaDriverRoutine_638a0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1e6260() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e73a0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e73b0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e73c0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7650() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7660() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e76d0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e76e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e76f0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7700() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7a70() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7a80() {
  return 801;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1e7a90() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7ab0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1e7b10() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eaab0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eaca0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eacb0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eacc0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eaeb0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eaec0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eb310() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eb7b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eb970() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eba40() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eba50() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eba60() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eba70() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1eba80() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1eba90() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebaa0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebab0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebac0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebad0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebae0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebaf0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb00() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb10() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb20() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb30() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb40() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb50() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb60() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb70() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb80() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebb90() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebba0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ebbb0() {
  return 801;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1ee180(U64 object) {
  return CudaDriverRoutine_1dbfc0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1ee190(U64 object) {
  return CudaDriverRoutine_1db1a0(At<U64>(object, 0x8));
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ee1c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ee1d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ee1e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ee1f0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1ee200() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f1400() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f17b0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f17c0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f17d0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f17e0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f18c0(U64 object) {
  return At<U32>(At<U64>(object, 0x40), 0xed8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f2830() {
  CudaDriverRoutine_1c0900();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f28a0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f28b0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f3020() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f4550() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f4720() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f5510(U64 object,
    U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f5520() {
  return 512;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f5660() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f5bf0() {
  CudaDriverRoutine_1d2bb0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f5fd0() {
  CudaDriverRoutine_194f20();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f7570() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f7580() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f7590() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f75a0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f78a0() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1f78b0() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1f7d80(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f7fc0() {
  CudaDriverRoutine_1db7c0();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1f8550() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1f8560() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f9b30() {
  CudaDriverRoutine_19a4f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f9b40() {
  CudaDriverRoutine_19a600();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1f9b50() {
  CudaDriverRoutine_19a660();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc810() {
  CudaDriverRoutine_10c6b0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc820() {
  CudaDriverRoutine_10c750();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc830() {
  CudaDriverRoutine_12e900();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc840() {
  CudaDriverRoutine_57450();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc850() {
  CudaDriverRoutine_8e230();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc860() {
  CudaDriverRoutine_4f840();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc9c0() {
  CudaDriverRoutine_12e380();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc9d0() {
  CudaDriverRoutine_12e430();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc9e0() {
  CudaDriverRoutine_10c800();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_1fc9f0() {
  CudaDriverRoutine_10c840();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1fca70() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_1fcd80() {
  return 1;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_1ff640(U64 object) {
  return CudaDriverRoutine_1db800(At<U64>(object, 0x0));
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_204600(U64 object) {
  return At<U64>(At<U64>(object, 0x38), 0x8);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_204610(U64 object) {
  return At<U32>(object, 0x24);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2052c0(U64 object) {
  return At<U64>(object, 0x180);
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2052d0(U64 object) {
  return CudaDriverRoutine_102370(At<U64>(object, 0x120));
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2054a0() {
  CudaDriverRoutine_1123e0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2054b0() {
  CudaDriverRoutine_112540();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_209790() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_209a00() {
  CudaDriverRoutine_4bee0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_209a10() {
  CudaDriverRoutine_4c120();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_209a20() {
  CudaDriverRoutine_4c350();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_20f100() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_20f110() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_20f120() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_20f130() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_20f650() {
  return 45;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_20f660() {
  return 45;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_210b50() {
  return 45;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_210bc0() {
  return 45;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2118d0() {
  return 45;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2118e0() {
  return 45;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_215f10() {
  return 999;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_21b2c0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21bc10() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_21e0d0() {
  CudaDriverRoutine_bbd80();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_21f690() {
  CudaDriverRoutine_1dfd30();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_21f6a0() {
  CudaDriverRoutine_1dfd30();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21f940() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21f950() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21f960() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb10() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb20() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb30() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb40() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb50() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb60() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fb70() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fcc0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fcd0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fce0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fcf0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd00() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd10() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd20() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd30() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd40() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd50() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd60() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd70() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd80() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fd90() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fda0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fdb0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fdc0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fdd0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fde0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fdf0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe00() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe10() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe20() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe30() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe40() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe50() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe60() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe70() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe80() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fe90() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fec0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_21fed0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220ab0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220ac0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220ad0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220ae0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220af0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220dc0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220e00() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_220e40() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_221060() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_221070() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_221080() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_221090() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2210a0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2210b0() {
  return 18;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2214e0() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_222170() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_226ef0() {
  CudaDriverRoutine_12e340();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_227fc0() {
  CudaDriverRoutine_2071e0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2286a0() {
  return 101;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_229500() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22bec0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_22bf80() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22c200() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22c210() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22c220() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22c230() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22d2e0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_22d2f0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22d320() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22d330() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22d380(U64 object,
    U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22d390() {
  return 512;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22d790() {
  CudaDriverRoutine_231940();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22db70() {
  CudaDriverRoutine_194f20();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22f3b0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22f3c0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_22f3d0() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22f840() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_22f850() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_22fda0(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_230040() {
  CudaDriverRoutine_1db800();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2305d0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2305e0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_231610() {
  CudaDriverRoutine_19a4f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_231620() {
  CudaDriverRoutine_19a600();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_231630() {
  CudaDriverRoutine_19a660();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_234f50() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_234f60() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_235000() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_235320() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_235410() {
  return 1;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_235640() {
  CudaDriverRoutine_de3c0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_235660() {
  CudaDriverRoutine_de3a0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_235a30() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_235a40() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_235ba0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_235c10() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_235c20() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_236190() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2362b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237240() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237270() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237280() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237290() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2372a0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2372f0() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2374a0() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2375d0(U64 object) {
  return At<U32>(At<U64>(object, 0x40), 0xc50);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2375e0(U64 object) {
  return At<U32>(At<U64>(object, 0x40), 0xc54);
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2376b0() {
  return 1;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237880() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237b80() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_237b90() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_238250() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_238260() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_238270() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_238f40() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_2395e0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23bfa0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_23c060() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23c330() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23c340() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23c350() {
  return 801;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23c360() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23d3a0() {
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_23d3b0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23d3e0() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23d3f0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23d440(U64 object,
    U32 value) {
  At<U32>(object, 0x8c) = value;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23d450() {
  return 512;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23db30() {
  return 0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23db40() {
  CudaDriverRoutine_19f2c0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23db50() {
  CudaDriverRoutine_19fcc0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23db60() {
  CudaDriverRoutine_19fd60();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23dd20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23df10() {
  return 10;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23df20() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23e530() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23e540() {
  return 0;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_23f970() {
  return 10;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_23fc70() {
  CudaDriverRoutine_231940();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_240060() {
  CudaDriverRoutine_194f20();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2418d0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2418e0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2418f0() {
}

[[gnu::visibility("hidden")]] void CudaDriverStub_241900() {
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_241c00() {
  return 999;
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_241c10() {
  return 999;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_242160(U64 object) {
  return At<U64>(object, 0x8);
}

[[gnu::visibility("hidden")]] void CudaDriverStub_242400() {
  CudaDriverRoutine_1db800();
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_242990() {
  return 0x0;
}

[[gnu::visibility("hidden")]] U64 CudaDriverStub_2429a0() {
  return 0x0;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2439d0() {
  CudaDriverRoutine_19a4f0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2439e0() {
  CudaDriverRoutine_19a600();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2439f0() {
  CudaDriverRoutine_19a660();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_2466d0() {
  CudaDriverRoutine_10c1d0();
}

[[gnu::visibility("hidden")]] U32 CudaDriverStub_246b40() {
  return 801;
}

[[gnu::visibility("hidden")]] void CudaDriverStub_246ba0() {
  CudaDriverRoutine_12d250();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_246bb0() {
  CudaDriverRoutine_12d470();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_246c50() {
  CudaDriverRoutine_12d5d0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_246c60() {
  CudaDriverRoutine_12d8b0();
}

[[gnu::visibility("hidden")]] void CudaDriverStub_246c70() {
  CudaDriverRoutine_12d910();
}
