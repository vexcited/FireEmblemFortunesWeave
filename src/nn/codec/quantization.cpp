/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/quantization.hpp"
#include "nn/codec/sbr_frequency.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using FIXP_QTD = int16_t;
using INT = int;
using UINT = uint32_t;
using SHORT = int16_t;
using LONG = int32_t;
using UCHAR = uint8_t;
void* FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
constexpr int32_t fixed_dbl(double v) {
  double value = v * 2147483648.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 2147483647.0    ? 2147483647
         : value <= -2147483648.0 ? (-2147483647 - 1)
                                  : int32_t(value);
}

static int CntLeadingZeros(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 32);
}

static int32_t fMultDiv2(int32_t a, int16_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 16);
}

static int32_t fMultDiv2(int16_t a, int16_t b) {
  return static_cast<int32_t>(a) * b;
}

static int32_t fMult(int32_t a, int32_t b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

static int32_t scaleValue(int32_t value, int scale) {
  return scale >= 0 ? value << scale : value >> -scale;
}

static int32_t fixp_abs(int32_t value) {
  return value < 0 ? static_cast<int32_t>(0U - static_cast<uint32_t>(value))
                   : value;
}

static int CountLeadingBits(int32_t value) {
  uint32_t bits = value ^ (value >> 31);
  return (bits ? __builtin_clz(bits) : 32) - 1;
}

static constexpr int16_t qtc(int32_t value) {
  int64_t result = (static_cast<int64_t>(value) + 32768) >> 16;
  return static_cast<int16_t>(result > 32767 ? 32767 : result);
}

static int32_t fPow2(int32_t value) {
  return fMult(value, value);
}

extern const FIXP_QTD FDKaacEnc_mTab_3_4[512];
const FIXP_QTD FDKaacEnc_mTab_3_4[512] = {
  qtc(0x4c1bf829), qtc(0x4c3880de), qtc(0x4c550603), qtc(0x4c71879c),
  qtc(0x4c8e05aa), qtc(0x4caa8030), qtc(0x4cc6f72f), qtc(0x4ce36aab),
  qtc(0x4cffdaa4), qtc(0x4d1c471d), qtc(0x4d38b019), qtc(0x4d55159a),
  qtc(0x4d7177a1), qtc(0x4d8dd631), qtc(0x4daa314b), qtc(0x4dc688f3),
  qtc(0x4de2dd2a), qtc(0x4dff2df2), qtc(0x4e1b7b4d), qtc(0x4e37c53d),
  qtc(0x4e540bc5), qtc(0x4e704ee6), qtc(0x4e8c8ea3), qtc(0x4ea8cafd),
  qtc(0x4ec503f7), qtc(0x4ee13992), qtc(0x4efd6bd0), qtc(0x4f199ab4),
  qtc(0x4f35c640), qtc(0x4f51ee75), qtc(0x4f6e1356), qtc(0x4f8a34e4),
  qtc(0x4fa65321), qtc(0x4fc26e10), qtc(0x4fde85b2), qtc(0x4ffa9a0a),
  qtc(0x5016ab18), qtc(0x5032b8e0), qtc(0x504ec362), qtc(0x506acaa1),
  qtc(0x5086cea0), qtc(0x50a2cf5e), qtc(0x50becce0), qtc(0x50dac725),
  qtc(0x50f6be31), qtc(0x5112b205), qtc(0x512ea2a3), qtc(0x514a900d),
  qtc(0x51667a45), qtc(0x5182614c), qtc(0x519e4524), qtc(0x51ba25cf),
  qtc(0x51d60350), qtc(0x51f1dda7), qtc(0x520db4d6), qtc(0x522988e0),
  qtc(0x524559c6), qtc(0x52612789), qtc(0x527cf22d), qtc(0x5298b9b1),
  qtc(0x52b47e19), qtc(0x52d03f65), qtc(0x52ebfd98), qtc(0x5307b8b4),
  qtc(0x532370b9), qtc(0x533f25aa), qtc(0x535ad789), qtc(0x53768656),
  qtc(0x53923215), qtc(0x53addac6), qtc(0x53c9806b), qtc(0x53e52306),
  qtc(0x5400c298), qtc(0x541c5f24), qtc(0x5437f8ab), qtc(0x54538f2e),
  qtc(0x546f22af), qtc(0x548ab330), qtc(0x54a640b3), qtc(0x54c1cb38),
  qtc(0x54dd52c2), qtc(0x54f8d753), qtc(0x551458eb), qtc(0x552fd78d),
  qtc(0x554b5339), qtc(0x5566cbf3), qtc(0x558241bb), qtc(0x559db492),
  qtc(0x55b9247b), qtc(0x55d49177), qtc(0x55effb87), qtc(0x560b62ad),
  qtc(0x5626c6eb), qtc(0x56422842), qtc(0x565d86b4), qtc(0x5678e242),
  qtc(0x56943aee), qtc(0x56af90b9), qtc(0x56cae3a4), qtc(0x56e633b2),
  qtc(0x570180e4), qtc(0x571ccb3b), qtc(0x573812b8), qtc(0x5753575e),
  qtc(0x576e992e), qtc(0x5789d829), qtc(0x57a51450), qtc(0x57c04da6),
  qtc(0x57db842b), qtc(0x57f6b7e1), qtc(0x5811e8c9), qtc(0x582d16e6),
  qtc(0x58484238), qtc(0x58636ac0), qtc(0x587e9081), qtc(0x5899b37c),
  qtc(0x58b4d3b1), qtc(0x58cff123), qtc(0x58eb0bd3), qtc(0x590623c2),
  qtc(0x592138f2), qtc(0x593c4b63), qtc(0x59575b19), qtc(0x59726812),
  qtc(0x598d7253), qtc(0x59a879da), qtc(0x59c37eab), qtc(0x59de80c6),
  qtc(0x59f9802d), qtc(0x5a147ce0), qtc(0x5a2f76e2), qtc(0x5a4a6e34),
  qtc(0x5a6562d6), qtc(0x5a8054cb), qtc(0x5a9b4414), qtc(0x5ab630b2),
  qtc(0x5ad11aa6), qtc(0x5aec01f1), qtc(0x5b06e696), qtc(0x5b21c895),
  qtc(0x5b3ca7ef), qtc(0x5b5784a6), qtc(0x5b725ebc), qtc(0x5b8d3631),
  qtc(0x5ba80b06), qtc(0x5bc2dd3e), qtc(0x5bddacd9), qtc(0x5bf879d8),
  qtc(0x5c13443d), qtc(0x5c2e0c09), qtc(0x5c48d13e), qtc(0x5c6393dc),
  qtc(0x5c7e53e5), qtc(0x5c99115a), qtc(0x5cb3cc3c), qtc(0x5cce848d),
  qtc(0x5ce93a4e), qtc(0x5d03ed80), qtc(0x5d1e9e24), qtc(0x5d394c3b),
  qtc(0x5d53f7c7), qtc(0x5d6ea0c9), qtc(0x5d894742), qtc(0x5da3eb33),
  qtc(0x5dbe8c9e), qtc(0x5dd92b84), qtc(0x5df3c7e5), qtc(0x5e0e61c3),
  qtc(0x5e28f920), qtc(0x5e438dfc), qtc(0x5e5e2059), qtc(0x5e78b037),
  qtc(0x5e933d99), qtc(0x5eadc87e), qtc(0x5ec850e9), qtc(0x5ee2d6da),
  qtc(0x5efd5a53), qtc(0x5f17db54), qtc(0x5f3259e0), qtc(0x5f4cd5f6),
  qtc(0x5f674f99), qtc(0x5f81c6c8), qtc(0x5f9c3b87), qtc(0x5fb6add4),
  qtc(0x5fd11db3), qtc(0x5feb8b23), qtc(0x6005f626), qtc(0x60205ebd),
  qtc(0x603ac4e9), qtc(0x605528ac), qtc(0x606f8a05), qtc(0x6089e8f7),
  qtc(0x60a44583), qtc(0x60be9fa9), qtc(0x60d8f76b), qtc(0x60f34cca),
  qtc(0x610d9fc7), qtc(0x6127f062), qtc(0x61423e9e), qtc(0x615c8a7a),
  qtc(0x6176d3f9), qtc(0x61911b1b), qtc(0x61ab5fe1), qtc(0x61c5a24d),
  qtc(0x61dfe25f), qtc(0x61fa2018), qtc(0x62145b7a), qtc(0x622e9485),
  qtc(0x6248cb3b), qtc(0x6262ff9d), qtc(0x627d31ab), qtc(0x62976167),
  qtc(0x62b18ed1), qtc(0x62cbb9eb), qtc(0x62e5e2b6), qtc(0x63000933),
  qtc(0x631a2d62), qtc(0x63344f45), qtc(0x634e6edd), qtc(0x63688c2b),
  qtc(0x6382a730), qtc(0x639cbfec), qtc(0x63b6d661), qtc(0x63d0ea90),
  qtc(0x63eafc7a), qtc(0x64050c1f), qtc(0x641f1982), qtc(0x643924a2),
  qtc(0x64532d80), qtc(0x646d341f), qtc(0x6487387e), qtc(0x64a13a9e),
  qtc(0x64bb3a81), qtc(0x64d53828), qtc(0x64ef3393), qtc(0x65092cc4),
  qtc(0x652323bb), qtc(0x653d1879), qtc(0x65570b00), qtc(0x6570fb50),
  qtc(0x658ae96b), qtc(0x65a4d550), qtc(0x65bebf01), qtc(0x65d8a680),
  qtc(0x65f28bcc), qtc(0x660c6ee8), qtc(0x66264fd3), qtc(0x66402e8f),
  qtc(0x665a0b1c), qtc(0x6673e57d), qtc(0x668dbdb0), qtc(0x66a793b8),
  qtc(0x66c16795), qtc(0x66db3949), qtc(0x66f508d4), qtc(0x670ed636),
  qtc(0x6728a172), qtc(0x67426a87), qtc(0x675c3177), qtc(0x6775f643),
  qtc(0x678fb8eb), qtc(0x67a97971), qtc(0x67c337d5), qtc(0x67dcf418),
  qtc(0x67f6ae3b), qtc(0x6810663f), qtc(0x682a1c25), qtc(0x6843cfed),
  qtc(0x685d8199), qtc(0x68773129), qtc(0x6890de9f), qtc(0x68aa89fa),
  qtc(0x68c4333d), qtc(0x68ddda67), qtc(0x68f77f7a), qtc(0x69112277),
  qtc(0x692ac35e), qtc(0x69446230), qtc(0x695dfeee), qtc(0x6977999a),
  qtc(0x69913232), qtc(0x69aac8ba), qtc(0x69c45d31), qtc(0x69ddef98),
  qtc(0x69f77ff0), qtc(0x6a110e3a), qtc(0x6a2a9a77), qtc(0x6a4424a8),
  qtc(0x6a5daccc), qtc(0x6a7732e6), qtc(0x6a90b6f6), qtc(0x6aaa38fd),
  qtc(0x6ac3b8fb), qtc(0x6add36f2), qtc(0x6af6b2e2), qtc(0x6b102ccd),
  qtc(0x6b29a4b2), qtc(0x6b431a92), qtc(0x6b5c8e6f), qtc(0x6b76004a),
  qtc(0x6b8f7022), qtc(0x6ba8ddf9), qtc(0x6bc249d0), qtc(0x6bdbb3a7),
  qtc(0x6bf51b80), qtc(0x6c0e815a), qtc(0x6c27e537), qtc(0x6c414718),
  qtc(0x6c5aa6fd), qtc(0x6c7404e7), qtc(0x6c8d60d7), qtc(0x6ca6bace),
  qtc(0x6cc012cc), qtc(0x6cd968d2), qtc(0x6cf2bce1), qtc(0x6d0c0ef9),
  qtc(0x6d255f1d), qtc(0x6d3ead4b), qtc(0x6d57f985), qtc(0x6d7143cc),
  qtc(0x6d8a8c21), qtc(0x6da3d283), qtc(0x6dbd16f5), qtc(0x6dd65976),
  qtc(0x6def9a08), qtc(0x6e08d8ab), qtc(0x6e221560), qtc(0x6e3b5027),
  qtc(0x6e548902), qtc(0x6e6dbff1), qtc(0x6e86f4f5), qtc(0x6ea0280e),
  qtc(0x6eb9593e), qtc(0x6ed28885), qtc(0x6eebb5e3), qtc(0x6f04e15a),
  qtc(0x6f1e0aea), qtc(0x6f373294), qtc(0x6f505859), qtc(0x6f697c39),
  qtc(0x6f829e35), qtc(0x6f9bbe4e), qtc(0x6fb4dc85), qtc(0x6fcdf8d9),
  qtc(0x6fe7134d), qtc(0x70002be0), qtc(0x70194293), qtc(0x70325767),
  qtc(0x704b6a5d), qtc(0x70647b76), qtc(0x707d8ab1), qtc(0x70969811),
  qtc(0x70afa394), qtc(0x70c8ad3d), qtc(0x70e1b50c), qtc(0x70fabb01),
  qtc(0x7113bf1d), qtc(0x712cc161), qtc(0x7145c1ce), qtc(0x715ec064),
  qtc(0x7177bd24), qtc(0x7190b80f), qtc(0x71a9b124), qtc(0x71c2a866),
  qtc(0x71db9dd4), qtc(0x71f49170), qtc(0x720d8339), qtc(0x72267331),
  qtc(0x723f6159), qtc(0x72584db0), qtc(0x72713838), qtc(0x728a20f1),
  qtc(0x72a307db), qtc(0x72bbecf9), qtc(0x72d4d049), qtc(0x72edb1ce),
  qtc(0x73069187), qtc(0x731f6f75), qtc(0x73384b98), qtc(0x735125f3),
  qtc(0x7369fe84), qtc(0x7382d54d), qtc(0x739baa4e), qtc(0x73b47d89),
  qtc(0x73cd4efd), qtc(0x73e61eab), qtc(0x73feec94), qtc(0x7417b8b8),
  qtc(0x74308319), qtc(0x74494bb6), qtc(0x74621291), qtc(0x747ad7aa),
  qtc(0x74939b02), qtc(0x74ac5c98), qtc(0x74c51c6f), qtc(0x74ddda86),
  qtc(0x74f696de), qtc(0x750f5178), qtc(0x75280a54), qtc(0x7540c174),
  qtc(0x755976d7), qtc(0x75722a7e), qtc(0x758adc69), qtc(0x75a38c9b),
  qtc(0x75bc3b12), qtc(0x75d4e7cf), qtc(0x75ed92d4), qtc(0x76063c21),
  qtc(0x761ee3b6), qtc(0x76378994), qtc(0x76502dbc), qtc(0x7668d02e),
  qtc(0x768170eb), qtc(0x769a0ff3), qtc(0x76b2ad47), qtc(0x76cb48e7),
  qtc(0x76e3e2d5), qtc(0x76fc7b10), qtc(0x7715119a), qtc(0x772da673),
  qtc(0x7746399b), qtc(0x775ecb13), qtc(0x77775adc), qtc(0x778fe8f6),
  qtc(0x77a87561), qtc(0x77c1001f), qtc(0x77d98930), qtc(0x77f21095),
  qtc(0x780a964d), qtc(0x78231a5b), qtc(0x783b9cbd), qtc(0x78541d75),
  qtc(0x786c9c84), qtc(0x788519e9), qtc(0x789d95a6), qtc(0x78b60fbb),
  qtc(0x78ce8828), qtc(0x78e6feef), qtc(0x78ff740f), qtc(0x7917e78a),
  qtc(0x7930595f), qtc(0x7948c990), qtc(0x7961381d), qtc(0x7979a506),
  qtc(0x7992104c), qtc(0x79aa79f0), qtc(0x79c2e1f1), qtc(0x79db4852),
  qtc(0x79f3ad11), qtc(0x7a0c1031), qtc(0x7a2471b0), qtc(0x7a3cd191),
  qtc(0x7a552fd3), qtc(0x7a6d8c76), qtc(0x7a85e77d), qtc(0x7a9e40e6),
  qtc(0x7ab698b2), qtc(0x7aceeee3), qtc(0x7ae74378), qtc(0x7aff9673),
  qtc(0x7b17e7d2), qtc(0x7b303799), qtc(0x7b4885c5), qtc(0x7b60d259),
  qtc(0x7b791d55), qtc(0x7b9166b9), qtc(0x7ba9ae86), qtc(0x7bc1f4bc),
  qtc(0x7bda395c), qtc(0x7bf27c66), qtc(0x7c0abddb), qtc(0x7c22fdbb),
  qtc(0x7c3b3c07), qtc(0x7c5378c0), qtc(0x7c6bb3e5), qtc(0x7c83ed78),
  qtc(0x7c9c2579), qtc(0x7cb45be9), qtc(0x7ccc90c7), qtc(0x7ce4c414),
  qtc(0x7cfcf5d2), qtc(0x7d152600), qtc(0x7d2d549f), qtc(0x7d4581b0),
  qtc(0x7d5dad32), qtc(0x7d75d727), qtc(0x7d8dff8f), qtc(0x7da6266a),
  qtc(0x7dbe4bba), qtc(0x7dd66f7d), qtc(0x7dee91b6), qtc(0x7e06b264),
  qtc(0x7e1ed188), qtc(0x7e36ef22), qtc(0x7e4f0b34), qtc(0x7e6725bd),
  qtc(0x7e7f3ebd), qtc(0x7e975636), qtc(0x7eaf6c28), qtc(0x7ec78093),
  qtc(0x7edf9378), qtc(0x7ef7a4d7), qtc(0x7f0fb4b1), qtc(0x7f27c307),
  qtc(0x7f3fcfd8), qtc(0x7f57db25), qtc(0x7f6fe4ef), qtc(0x7f87ed36),
  qtc(0x7f9ff3fb), qtc(0x7fb7f93e), qtc(0x7fcffcff), qtc(0x7fe7ff40)};
extern const FIXP_QTD FDKaacEnc_quantTableQ[4];
const FIXP_QTD FDKaacEnc_quantTableQ[4] = {qtc(0x40000000), qtc(0x4c1bf7ff),
                                           qtc(0x5a82797f), qtc(0x6ba27e7f)};
extern const FIXP_QTD FDKaacEnc_quantTableE[4];
const FIXP_QTD FDKaacEnc_quantTableE[4] = {qtc(0x10000000), qtc(0x1ae89f99),
                                           qtc(0x2d413ccd), qtc(0x4c1bf828)};
extern const FIXP_DBL FDKaacEnc_mTab_4_3Elc[512];
const FIXP_DBL FDKaacEnc_mTab_4_3Elc[512] = {
  fixed_dbl(0.3968502629920499), fixed_dbl(0.3978840634868335),
  fixed_dbl(0.3989185359354711), fixed_dbl(0.3999536794661432),
  fixed_dbl(0.4009894932098531), fixed_dbl(0.4020259763004115),
  fixed_dbl(0.4030631278744227), fixed_dbl(0.4041009470712695),
  fixed_dbl(0.4051394330330996), fixed_dbl(0.4061785849048110),
  fixed_dbl(0.4072184018340380), fixed_dbl(0.4082588829711372),
  fixed_dbl(0.4093000274691739), fixed_dbl(0.4103418344839078),
  fixed_dbl(0.4113843031737798), fixed_dbl(0.4124274326998980),
  fixed_dbl(0.4134712222260245), fixed_dbl(0.4145156709185620),
  fixed_dbl(0.4155607779465400), fixed_dbl(0.4166065424816022),
  fixed_dbl(0.4176529636979932), fixed_dbl(0.4187000407725452),
  fixed_dbl(0.4197477728846652), fixed_dbl(0.4207961592163222),
  fixed_dbl(0.4218451989520345), fixed_dbl(0.4228948912788567),
  fixed_dbl(0.4239452353863673), fixed_dbl(0.4249962304666564),
  fixed_dbl(0.4260478757143130), fixed_dbl(0.4271001703264124),
  fixed_dbl(0.4281531135025046), fixed_dbl(0.4292067044446017),
  fixed_dbl(0.4302609423571658), fixed_dbl(0.4313158264470970),
  fixed_dbl(0.4323713559237216), fixed_dbl(0.4334275299987803),
  fixed_dbl(0.4344843478864161), fixed_dbl(0.4355418088031630),
  fixed_dbl(0.4365999119679339), fixed_dbl(0.4376586566020096),
  fixed_dbl(0.4387180419290272), fixed_dbl(0.4397780671749683),
  fixed_dbl(0.4408387315681480), fixed_dbl(0.4419000343392039),
  fixed_dbl(0.4429619747210847), fixed_dbl(0.4440245519490388),
  fixed_dbl(0.4450877652606038), fixed_dbl(0.4461516138955953),
  fixed_dbl(0.4472160970960963), fixed_dbl(0.4482812141064458),
  fixed_dbl(0.4493469641732286), fixed_dbl(0.4504133465452648),
  fixed_dbl(0.4514803604735984), fixed_dbl(0.4525480052114875),
  fixed_dbl(0.4536162800143939), fixed_dbl(0.4546851841399719),
  fixed_dbl(0.4557547168480591), fixed_dbl(0.4568248774006652),
  fixed_dbl(0.4578956650619623), fixed_dbl(0.4589670790982746),
  fixed_dbl(0.4600391187780688), fixed_dbl(0.4611117833719430),
  fixed_dbl(0.4621850721526184), fixed_dbl(0.4632589843949278),
  fixed_dbl(0.4643335193758069), fixed_dbl(0.4654086763742842),
  fixed_dbl(0.4664844546714713), fixed_dbl(0.4675608535505532),
  fixed_dbl(0.4686378722967790), fixed_dbl(0.4697155101974522),
  fixed_dbl(0.4707937665419216), fixed_dbl(0.4718726406215713),
  fixed_dbl(0.4729521317298118), fixed_dbl(0.4740322391620711),
  fixed_dbl(0.4751129622157845), fixed_dbl(0.4761943001903867),
  fixed_dbl(0.4772762523873015), fixed_dbl(0.4783588181099338),
  fixed_dbl(0.4794419966636599), fixed_dbl(0.4805257873558190),
  fixed_dbl(0.4816101894957042), fixed_dbl(0.4826952023945537),
  fixed_dbl(0.4837808253655421), fixed_dbl(0.4848670577237714),
  fixed_dbl(0.4859538987862632), fixed_dbl(0.4870413478719488),
  fixed_dbl(0.4881294043016621), fixed_dbl(0.4892180673981298),
  fixed_dbl(0.4903073364859640), fixed_dbl(0.4913972108916533),
  fixed_dbl(0.4924876899435545), fixed_dbl(0.4935787729718844),
  fixed_dbl(0.4946704593087116), fixed_dbl(0.4957627482879484),
  fixed_dbl(0.4968556392453423), fixed_dbl(0.4979491315184684),
  fixed_dbl(0.4990432244467211), fixed_dbl(0.5001379173713062),
  fixed_dbl(0.5012332096352328), fixed_dbl(0.5023291005833056),
  fixed_dbl(0.5034255895621171), fixed_dbl(0.5045226759200399),
  fixed_dbl(0.5056203590072181), fixed_dbl(0.5067186381755611),
  fixed_dbl(0.5078175127787346), fixed_dbl(0.5089169821721536),
  fixed_dbl(0.5100170457129749), fixed_dbl(0.5111177027600893),
  fixed_dbl(0.5122189526741143), fixed_dbl(0.5133207948173868),
  fixed_dbl(0.5144232285539552), fixed_dbl(0.5155262532495726),
  fixed_dbl(0.5166298682716894), fixed_dbl(0.5177340729894460),
  fixed_dbl(0.5188388667736652), fixed_dbl(0.5199442489968457),
  fixed_dbl(0.5210502190331544), fixed_dbl(0.5221567762584198),
  fixed_dbl(0.5232639200501247), fixed_dbl(0.5243716497873989),
  fixed_dbl(0.5254799648510130), fixed_dbl(0.5265888646233705),
  fixed_dbl(0.5276983484885021), fixed_dbl(0.5288084158320574),
  fixed_dbl(0.5299190660412995), fixed_dbl(0.5310302985050975),
  fixed_dbl(0.5321421126139198), fixed_dbl(0.5332545077598274),
  fixed_dbl(0.5343674833364678), fixed_dbl(0.5354810387390675),
  fixed_dbl(0.5365951733644262), fixed_dbl(0.5377098866109097),
  fixed_dbl(0.5388251778784438), fixed_dbl(0.5399410465685075),
  fixed_dbl(0.5410574920841272), fixed_dbl(0.5421745138298695),
  fixed_dbl(0.5432921112118353), fixed_dbl(0.5444102836376534),
  fixed_dbl(0.5455290305164744), fixed_dbl(0.5466483512589642),
  fixed_dbl(0.5477682452772976), fixed_dbl(0.5488887119851529),
  fixed_dbl(0.5500097507977050), fixed_dbl(0.5511313611316194),
  fixed_dbl(0.5522535424050467), fixed_dbl(0.5533762940376158),
  fixed_dbl(0.5544996154504284), fixed_dbl(0.5556235060660528),
  fixed_dbl(0.5567479653085183), fixed_dbl(0.5578729926033087),
  fixed_dbl(0.5589985873773569), fixed_dbl(0.5601247490590389),
  fixed_dbl(0.5612514770781683), fixed_dbl(0.5623787708659898),
  fixed_dbl(0.5635066298551742), fixed_dbl(0.5646350534798125),
  fixed_dbl(0.5657640411754097), fixed_dbl(0.5668935923788799),
  fixed_dbl(0.5680237065285404), fixed_dbl(0.5691543830641059),
  fixed_dbl(0.5702856214266832), fixed_dbl(0.5714174210587655),
  fixed_dbl(0.5725497814042271), fixed_dbl(0.5736827019083177),
  fixed_dbl(0.5748161820176573), fixed_dbl(0.5759502211802304),
  fixed_dbl(0.5770848188453810), fixed_dbl(0.5782199744638067),
  fixed_dbl(0.5793556874875542), fixed_dbl(0.5804919573700131),
  fixed_dbl(0.5816287835659116), fixed_dbl(0.5827661655313104),
  fixed_dbl(0.5839041027235979), fixed_dbl(0.5850425946014850),
  fixed_dbl(0.5861816406250000), fixed_dbl(0.5873212402554834),
  fixed_dbl(0.5884613929555826), fixed_dbl(0.5896020981892474),
  fixed_dbl(0.5907433554217242), fixed_dbl(0.5918851641195517),
  fixed_dbl(0.5930275237505556), fixed_dbl(0.5941704337838434),
  fixed_dbl(0.5953138936897999), fixed_dbl(0.5964579029400819),
  fixed_dbl(0.5976024610076139), fixed_dbl(0.5987475673665825),
  fixed_dbl(0.5998932214924321), fixed_dbl(0.6010394228618597),
  fixed_dbl(0.6021861709528106), fixed_dbl(0.6033334652444733),
  fixed_dbl(0.6044813052172748), fixed_dbl(0.6056296903528761),
  fixed_dbl(0.6067786201341671), fixed_dbl(0.6079280940452625),
  fixed_dbl(0.6090781115714966), fixed_dbl(0.6102286721994192),
  fixed_dbl(0.6113797754167908), fixed_dbl(0.6125314207125777),
  fixed_dbl(0.6136836075769482), fixed_dbl(0.6148363355012674),
  fixed_dbl(0.6159896039780929), fixed_dbl(0.6171434125011708),
  fixed_dbl(0.6182977605654305), fixed_dbl(0.6194526476669808),
  fixed_dbl(0.6206080733031054), fixed_dbl(0.6217640369722584),
  fixed_dbl(0.6229205381740598), fixed_dbl(0.6240775764092919),
  fixed_dbl(0.6252351511798939), fixed_dbl(0.6263932619889586),
  fixed_dbl(0.6275519083407275), fixed_dbl(0.6287110897405869),
  fixed_dbl(0.6298708056950635), fixed_dbl(0.6310310557118203),
  fixed_dbl(0.6321918392996523), fixed_dbl(0.6333531559684823),
  fixed_dbl(0.6345150052293571), fixed_dbl(0.6356773865944432),
  fixed_dbl(0.6368402995770224), fixed_dbl(0.6380037436914881),
  fixed_dbl(0.6391677184533411), fixed_dbl(0.6403322233791856),
  fixed_dbl(0.6414972579867254), fixed_dbl(0.6426628217947594),
  fixed_dbl(0.6438289143231779), fixed_dbl(0.6449955350929588),
  fixed_dbl(0.6461626836261636), fixed_dbl(0.6473303594459330),
  fixed_dbl(0.6484985620764839), fixed_dbl(0.6496672910431047),
  fixed_dbl(0.6508365458721518), fixed_dbl(0.6520063260910459),
  fixed_dbl(0.6531766312282679), fixed_dbl(0.6543474608133552),
  fixed_dbl(0.6555188143768979), fixed_dbl(0.6566906914505349),
  fixed_dbl(0.6578630915669509), fixed_dbl(0.6590360142598715),
  fixed_dbl(0.6602094590640603), fixed_dbl(0.6613834255153149),
  fixed_dbl(0.6625579131504635), fixed_dbl(0.6637329215073610),
  fixed_dbl(0.6649084501248851), fixed_dbl(0.6660844985429335),
  fixed_dbl(0.6672610663024197), fixed_dbl(0.6684381529452691),
  fixed_dbl(0.6696157580144163), fixed_dbl(0.6707938810538011),
  fixed_dbl(0.6719725216083646), fixed_dbl(0.6731516792240465),
  fixed_dbl(0.6743313534477807), fixed_dbl(0.6755115438274927),
  fixed_dbl(0.6766922499120955), fixed_dbl(0.6778734712514865),
  fixed_dbl(0.6790552073965435), fixed_dbl(0.6802374578991223),
  fixed_dbl(0.6814202223120524), fixed_dbl(0.6826035001891340),
  fixed_dbl(0.6837872910851345), fixed_dbl(0.6849715945557853),
  fixed_dbl(0.6861564101577784), fixed_dbl(0.6873417374487629),
  fixed_dbl(0.6885275759873420), fixed_dbl(0.6897139253330697),
  fixed_dbl(0.6909007850464473), fixed_dbl(0.6920881546889198),
  fixed_dbl(0.6932760338228737), fixed_dbl(0.6944644220116332),
  fixed_dbl(0.6956533188194565), fixed_dbl(0.6968427238115332),
  fixed_dbl(0.6980326365539813), fixed_dbl(0.6992230566138435),
  fixed_dbl(0.7004139835590845), fixed_dbl(0.7016054169585869),
  fixed_dbl(0.7027973563821499), fixed_dbl(0.7039898014004843),
  fixed_dbl(0.7051827515852106), fixed_dbl(0.7063762065088554),
  fixed_dbl(0.7075701657448483), fixed_dbl(0.7087646288675196),
  fixed_dbl(0.7099595954520960), fixed_dbl(0.7111550650746988),
  fixed_dbl(0.7123510373123402), fixed_dbl(0.7135475117429202),
  fixed_dbl(0.7147444879452244), fixed_dbl(0.7159419654989200),
  fixed_dbl(0.7171399439845538), fixed_dbl(0.7183384229835486),
  fixed_dbl(0.7195374020782005), fixed_dbl(0.7207368808516762),
  fixed_dbl(0.7219368588880097), fixed_dbl(0.7231373357720997),
  fixed_dbl(0.7243383110897066), fixed_dbl(0.7255397844274496),
  fixed_dbl(0.7267417553728043), fixed_dbl(0.7279442235140992),
  fixed_dbl(0.7291471884405130), fixed_dbl(0.7303506497420724),
  fixed_dbl(0.7315546070096487), fixed_dbl(0.7327590598349553),
  fixed_dbl(0.7339640078105445), fixed_dbl(0.7351694505298055),
  fixed_dbl(0.7363753875869610), fixed_dbl(0.7375818185770647),
  fixed_dbl(0.7387887430959987), fixed_dbl(0.7399961607404706),
  fixed_dbl(0.7412040711080108), fixed_dbl(0.7424124737969701),
  fixed_dbl(0.7436213684065166), fixed_dbl(0.7448307545366334),
  fixed_dbl(0.7460406317881158), fixed_dbl(0.7472509997625686),
  fixed_dbl(0.7484618580624036), fixed_dbl(0.7496732062908372),
  fixed_dbl(0.7508850440518872), fixed_dbl(0.7520973709503704),
  fixed_dbl(0.7533101865919009), fixed_dbl(0.7545234905828862),
  fixed_dbl(0.7557372825305252), fixed_dbl(0.7569515620428062),
  fixed_dbl(0.7581663287285035), fixed_dbl(0.7593815821971756),
  fixed_dbl(0.7605973220591619), fixed_dbl(0.7618135479255810),
  fixed_dbl(0.7630302594083277), fixed_dbl(0.7642474561200708),
  fixed_dbl(0.7654651376742505), fixed_dbl(0.7666833036850760),
  fixed_dbl(0.7679019537675227), fixed_dbl(0.7691210875373307),
  fixed_dbl(0.7703407046110011), fixed_dbl(0.7715608046057948),
  fixed_dbl(0.7727813871397293), fixed_dbl(0.7740024518315765),
  fixed_dbl(0.7752239983008605), fixed_dbl(0.7764460261678551),
  fixed_dbl(0.7776685350535814), fixed_dbl(0.7788915245798054),
  fixed_dbl(0.7801149943690360), fixed_dbl(0.7813389440445223),
  fixed_dbl(0.7825633732302513), fixed_dbl(0.7837882815509458),
  fixed_dbl(0.7850136686320621), fixed_dbl(0.7862395340997874),
  fixed_dbl(0.7874658775810378), fixed_dbl(0.7886926987034559),
  fixed_dbl(0.7899199970954088), fixed_dbl(0.7911477723859853),
  fixed_dbl(0.7923760242049944), fixed_dbl(0.7936047521829623),
  fixed_dbl(0.7948339559511308), fixed_dbl(0.7960636351414546),
  fixed_dbl(0.7972937893865995), fixed_dbl(0.7985244183199399),
  fixed_dbl(0.7997555215755570), fixed_dbl(0.8009870987882359),
  fixed_dbl(0.8022191495934644), fixed_dbl(0.8034516736274301),
  fixed_dbl(0.8046846705270185), fixed_dbl(0.8059181399298110),
  fixed_dbl(0.8071520814740822), fixed_dbl(0.8083864947987989),
  fixed_dbl(0.8096213795436166), fixed_dbl(0.8108567353488784),
  fixed_dbl(0.8120925618556127), fixed_dbl(0.8133288587055308),
  fixed_dbl(0.8145656255410253), fixed_dbl(0.8158028620051674),
  fixed_dbl(0.8170405677417053), fixed_dbl(0.8182787423950622),
  fixed_dbl(0.8195173856103341), fixed_dbl(0.8207564970332875),
  fixed_dbl(0.8219960763103580), fixed_dbl(0.8232361230886477),
  fixed_dbl(0.8244766370159234), fixed_dbl(0.8257176177406150),
  fixed_dbl(0.8269590649118125), fixed_dbl(0.8282009781792650),
  fixed_dbl(0.8294433571933784), fixed_dbl(0.8306862016052132),
  fixed_dbl(0.8319295110664831), fixed_dbl(0.8331732852295520),
  fixed_dbl(0.8344175237474336), fixed_dbl(0.8356622262737878),
  fixed_dbl(0.8369073924629202), fixed_dbl(0.8381530219697793),
  fixed_dbl(0.8393991144499545), fixed_dbl(0.8406456695596752),
  fixed_dbl(0.8418926869558079), fixed_dbl(0.8431401662958544),
  fixed_dbl(0.8443881072379507), fixed_dbl(0.8456365094408642),
  fixed_dbl(0.8468853725639923), fixed_dbl(0.8481346962673606),
  fixed_dbl(0.8493844802116208), fixed_dbl(0.8506347240580492),
  fixed_dbl(0.8518854274685442), fixed_dbl(0.8531365901056253),
  fixed_dbl(0.8543882116324307), fixed_dbl(0.8556402917127157),
  fixed_dbl(0.8568928300108512), fixed_dbl(0.8581458261918209),
  fixed_dbl(0.8593992799212207), fixed_dbl(0.8606531908652563),
  fixed_dbl(0.8619075586907414), fixed_dbl(0.8631623830650962),
  fixed_dbl(0.8644176636563452), fixed_dbl(0.8656734001331161),
  fixed_dbl(0.8669295921646375), fixed_dbl(0.8681862394207371),
  fixed_dbl(0.8694433415718407), fixed_dbl(0.8707008982889695),
  fixed_dbl(0.8719589092437391), fixed_dbl(0.8732173741083574),
  fixed_dbl(0.8744762925556232), fixed_dbl(0.8757356642589241),
  fixed_dbl(0.8769954888922352), fixed_dbl(0.8782557661301171),
  fixed_dbl(0.8795164956477146), fixed_dbl(0.8807776771207545),
  fixed_dbl(0.8820393102255443), fixed_dbl(0.8833013946389704),
  fixed_dbl(0.8845639300384969), fixed_dbl(0.8858269161021629),
  fixed_dbl(0.8870903525085819), fixed_dbl(0.8883542389369399),
  fixed_dbl(0.8896185750669933), fixed_dbl(0.8908833605790678),
  fixed_dbl(0.8921485951540565), fixed_dbl(0.8934142784734187),
  fixed_dbl(0.8946804102191776), fixed_dbl(0.8959469900739191),
  fixed_dbl(0.8972140177207906), fixed_dbl(0.8984814928434985),
  fixed_dbl(0.8997494151263077), fixed_dbl(0.9010177842540390),
  fixed_dbl(0.9022865999120682), fixed_dbl(0.9035558617863242),
  fixed_dbl(0.9048255695632878), fixed_dbl(0.9060957229299895),
  fixed_dbl(0.9073663215740092), fixed_dbl(0.9086373651834729),
  fixed_dbl(0.9099088534470528), fixed_dbl(0.9111807860539647),
  fixed_dbl(0.9124531626939672), fixed_dbl(0.9137259830573594),
  fixed_dbl(0.9149992468349805), fixed_dbl(0.9162729537182071),
  fixed_dbl(0.9175471033989524), fixed_dbl(0.9188216955696648),
  fixed_dbl(0.9200967299233258), fixed_dbl(0.9213722061534494),
  fixed_dbl(0.9226481239540795), fixed_dbl(0.9239244830197896),
  fixed_dbl(0.9252012830456805), fixed_dbl(0.9264785237273793),
  fixed_dbl(0.9277562047610376), fixed_dbl(0.9290343258433305),
  fixed_dbl(0.9303128866714547), fixed_dbl(0.9315918869431275),
  fixed_dbl(0.9328713263565848), fixed_dbl(0.9341512046105802),
  fixed_dbl(0.9354315214043836), fixed_dbl(0.9367122764377792),
  fixed_dbl(0.9379934694110648), fixed_dbl(0.9392751000250497),
  fixed_dbl(0.9405571679810542), fixed_dbl(0.9418396729809072),
  fixed_dbl(0.9431226147269456), fixed_dbl(0.9444059929220124),
  fixed_dbl(0.9456898072694558), fixed_dbl(0.9469740574731275),
  fixed_dbl(0.9482587432373810), fixed_dbl(0.9495438642670713),
  fixed_dbl(0.9508294202675522), fixed_dbl(0.9521154109446763),
  fixed_dbl(0.9534018360047926), fixed_dbl(0.9546886951547455),
  fixed_dbl(0.9559759881018738), fixed_dbl(0.9572637145540087),
  fixed_dbl(0.9585518742194732), fixed_dbl(0.9598404668070802),
  fixed_dbl(0.9611294920261317), fixed_dbl(0.9624189495864168),
  fixed_dbl(0.9637088391982110), fixed_dbl(0.9649991605722750),
  fixed_dbl(0.9662899134198524), fixed_dbl(0.9675810974526697),
  fixed_dbl(0.9688727123829343), fixed_dbl(0.9701647579233330),
  fixed_dbl(0.9714572337870316), fixed_dbl(0.9727501396876727),
  fixed_dbl(0.9740434753393749), fixed_dbl(0.9753372404567313),
  fixed_dbl(0.9766314347548087), fixed_dbl(0.9779260579491460),
  fixed_dbl(0.9792211097557527), fixed_dbl(0.9805165898911081),
  fixed_dbl(0.9818124980721600), fixed_dbl(0.9831088340163232),
  fixed_dbl(0.9844055974414786), fixed_dbl(0.9857027880659716),
  fixed_dbl(0.9870004056086111), fixed_dbl(0.9882984497886684),
  fixed_dbl(0.9895969203258759), fixed_dbl(0.9908958169404255),
  fixed_dbl(0.9921951393529680), fixed_dbl(0.9934948872846116),
  fixed_dbl(0.9947950604569206), fixed_dbl(0.9960956585919144),
  fixed_dbl(0.9973966814120665), fixed_dbl(0.9986981286403025)};
extern const FIXP_DBL FDKaacEnc_specExpMantTableCombElc[4][14];
const FIXP_DBL FDKaacEnc_specExpMantTableCombElc[4][14] = {
  {fixed_dbl(0.5000000000000000), fixed_dbl(0.6299605249474366),
   fixed_dbl(0.7937005259840998), fixed_dbl(0.5000000000000000),
   fixed_dbl(0.6299605249474366), fixed_dbl(0.7937005259840998),
   fixed_dbl(0.5000000000000000), fixed_dbl(0.6299605249474366),
   fixed_dbl(0.7937005259840998), fixed_dbl(0.5000000000000000),
   fixed_dbl(0.6299605249474366), fixed_dbl(0.7937005259840998),
   fixed_dbl(0.5000000000000000), fixed_dbl(0.6299605249474366)},
  {fixed_dbl(0.5946035575013605), fixed_dbl(0.7491535384383408),
   fixed_dbl(0.9438743126816935), fixed_dbl(0.5946035575013605),
   fixed_dbl(0.7491535384383408), fixed_dbl(0.9438743126816935),
   fixed_dbl(0.5946035575013605), fixed_dbl(0.7491535384383408),
   fixed_dbl(0.9438743126816935), fixed_dbl(0.5946035575013605),
   fixed_dbl(0.7491535384383408), fixed_dbl(0.9438743126816935),
   fixed_dbl(0.5946035575013605), fixed_dbl(0.7491535384383408)},
  {fixed_dbl(0.7071067811865476), fixed_dbl(0.8908987181403393),
   fixed_dbl(0.5612310241546865), fixed_dbl(0.7071067811865476),
   fixed_dbl(0.8908987181403393), fixed_dbl(0.5612310241546865),
   fixed_dbl(0.7071067811865476), fixed_dbl(0.8908987181403393),
   fixed_dbl(0.5612310241546865), fixed_dbl(0.7071067811865476),
   fixed_dbl(0.8908987181403393), fixed_dbl(0.5612310241546865),
   fixed_dbl(0.7071067811865476), fixed_dbl(0.8908987181403393)},
  {fixed_dbl(0.8408964152537145), fixed_dbl(0.5297315471796477),
   fixed_dbl(0.6674199270850172), fixed_dbl(0.8408964152537145),
   fixed_dbl(0.5297315471796477), fixed_dbl(0.6674199270850172),
   fixed_dbl(0.8408964152537145), fixed_dbl(0.5297315471796477),
   fixed_dbl(0.6674199270850172), fixed_dbl(0.8408964152537145),
   fixed_dbl(0.5297315471796477), fixed_dbl(0.6674199270850172),
   fixed_dbl(0.8408964152537145), fixed_dbl(0.5297315471796477)}};
extern const UCHAR FDKaacEnc_specExpTableComb[4][14];
const UCHAR FDKaacEnc_specExpTableComb[4][14] = {
  {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18},
  {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15, 17, 18},
  {1, 2, 4, 5, 6, 8, 9, 10, 12, 13, 14, 16, 17, 18},
  {1, 3, 4, 5, 7, 8, 9, 11, 12, 13, 15, 16, 17, 19}};
static const UINT exp2_tab_long[32] = {
  0x40000000, 0x4166C34C, 0x42D561B4, 0x444C0740, 0x45CAE0F2, 0x47521CC6,
  0x48E1E9BA, 0x4A7A77D4, 0x4C1BF829, 0x4DC69CDD, 0x4F7A9930, 0x51382182,
  0x52FF6B55, 0x54D0AD5A, 0x56AC1F75, 0x5891FAC1, 0x5A82799A, 0x5C7DD7A4,
  0x5E8451D0, 0x60962665, 0x62B39509, 0x64DCDEC3, 0x6712460B, 0x69540EC9,
  0x6BA27E65, 0x6DFDDBCC, 0x70666F76, 0x72DC8374, 0x75606374, 0x77F25CCE,
  0x7A92BE8B, 0x7D41D96E};
static const UINT exp2w_tab_long[32] = {
  0x40000000, 0x400B1818, 0x4016321B, 0x40214E0C, 0x402C6BE9, 0x40378BB4,
  0x4042AD6D, 0x404DD113, 0x4058F6A8, 0x40641E2B, 0x406F479E, 0x407A7300,
  0x4085A051, 0x4090CF92, 0x409C00C4, 0x40A733E6, 0x40B268FA, 0x40BD9FFF,
  0x40C8D8F5, 0x40D413DD, 0x40DF50B8, 0x40EA8F86, 0x40F5D046, 0x410112FA,
  0x410C57A2, 0x41179E3D, 0x4122E6CD, 0x412E3152, 0x41397DCC, 0x4144CC3B,
  0x41501CA0, 0x415B6EFB,
};
static const UINT exp2x_tab_long[32] = {
  0x40000000, 0x400058B9, 0x4000B173, 0x40010A2D, 0x400162E8, 0x4001BBA3,
  0x4002145F, 0x40026D1B, 0x4002C5D8, 0x40031E95, 0x40037752, 0x4003D011,
  0x400428CF, 0x4004818E, 0x4004DA4E, 0x4005330E, 0x40058BCE, 0x4005E48F,
  0x40063D51, 0x40069613, 0x4006EED5, 0x40074798, 0x4007A05B, 0x4007F91F,
  0x400851E4, 0x4008AAA8, 0x4009036E, 0x40095C33, 0x4009B4FA, 0x400A0DC0,
  0x400A6688, 0x400ABF4F,
};
static void FDKaacEnc_quantizeLines(INT gain, INT noOfLines,
                                    FIXP_DBL* mdctSpectrum, SHORT* quaSpectrum,
                                    INT dZoneQuantEnable) {
  int line;
  FIXP_DBL k = fixed_dbl(0.0f);
  FIXP_QTD quantizer = FDKaacEnc_quantTableQ[(-gain) & 3];
  INT quantizershift = ((-gain) >> 2) + 1;
  const INT kShift = 16;
  if (dZoneQuantEnable) {
    k = fixed_dbl(0.23f) >> kShift;
  }
  else {
    k = fixed_dbl(-0.0946f + 0.5f) >> kShift;
  }
  for (line = 0; line < noOfLines; line++) {
    FIXP_DBL accu = fMultDiv2(mdctSpectrum[line], quantizer);
    if (accu < fixed_dbl(0.0f)) {
      accu = -accu;
      INT accuShift = CntLeadingZeros(accu) - 1;
      accu <<= accuShift;
      INT tabIndex = (INT)(accu >> (32 - 2 - 9)) & (~512);
      INT totalShift = quantizershift - accuShift + 1;
      accu = fMultDiv2(FDKaacEnc_mTab_3_4[tabIndex],
                       FDKaacEnc_quantTableE[totalShift & 3]);
      totalShift = (16 - 4) - (3 * (totalShift >> 2));
      accu >>= fixMin(totalShift, 32 - 1);
      quaSpectrum[line] = (SHORT)(-((LONG)(k + accu) >> (32 - 1 - 16)));
    }
    else if (accu > fixed_dbl(0.0f)) {
      INT accuShift = CntLeadingZeros(accu) - 1;
      accu <<= accuShift;
      INT tabIndex = (INT)(accu >> (32 - 2 - 9)) & (~512);
      INT totalShift = quantizershift - accuShift + 1;
      accu = fMultDiv2(FDKaacEnc_mTab_3_4[tabIndex],
                       FDKaacEnc_quantTableE[totalShift & 3]);
      totalShift = (16 - 4) - (3 * (totalShift >> 2));
      accu >>= fixMin(totalShift, 32 - 1);
      quaSpectrum[line] = (SHORT)((LONG)(k + accu) >> (32 - 1 - 16));
    }
    else {
      quaSpectrum[line] = 0;
    }
  }
}

static void FDKaacEnc_invQuantizeLines(INT gain, INT noOfLines,
                                       SHORT* quantSpectrum,
                                       FIXP_DBL* mdctSpectrum) {
  INT iquantizermod;
  INT iquantizershift;
  INT line;
  iquantizermod = gain & 3;
  iquantizershift = gain >> 2;
  for (line = 0; line < noOfLines; line++) {
    if (quantSpectrum[line] < 0) {
      FIXP_DBL accu;
      INT ex, specExp, tabIndex;
      FIXP_DBL s, t;
      accu = (FIXP_DBL)-quantSpectrum[line];
      ex = CountLeadingBits(accu);
      accu <<= ex;
      specExp = (32 - 1) - ex;
      tabIndex = (INT)(accu >> (32 - 2 - 9)) & (~512);
      s = FDKaacEnc_mTab_4_3Elc[tabIndex];
      t = FDKaacEnc_specExpMantTableCombElc[iquantizermod][specExp];
      accu = fMult(s, t);
      specExp = FDKaacEnc_specExpTableComb[iquantizermod][specExp] - 1;
      if ((-iquantizershift - specExp) < 0) {
        accu <<= -(-iquantizershift - specExp);
      }
      else {
        accu >>= -iquantizershift - specExp;
      }
      mdctSpectrum[line] = -accu;
    }
    else if (quantSpectrum[line] > 0) {
      FIXP_DBL accu;
      INT ex, specExp, tabIndex;
      FIXP_DBL s, t;
      accu = (FIXP_DBL)(INT)quantSpectrum[line];
      ex = CountLeadingBits(accu);
      accu <<= ex;
      specExp = (32 - 1) - ex;
      tabIndex = (INT)(accu >> (32 - 2 - 9)) & (~512);
      s = FDKaacEnc_mTab_4_3Elc[tabIndex];
      t = FDKaacEnc_specExpMantTableCombElc[iquantizermod][specExp];
      accu = fMult(s, t);
      specExp = FDKaacEnc_specExpTableComb[iquantizermod][specExp] - 1;
      if ((-iquantizershift - specExp) < 0) {
        accu <<= -(-iquantizershift - specExp);
      }
      else {
        accu >>= -iquantizershift - specExp;
      }
      mdctSpectrum[line] = accu;
    }
    else {
      mdctSpectrum[line] = fixed_dbl(0.0f);
    }
  }
}

void FDKaacEnc_QuantizeSpectrum(INT sfbCnt, INT maxSfbPerGroup, INT sfbPerGroup,
                                INT* sfbOffset, FIXP_DBL* mdctSpectrum,
                                INT globalGain, INT* scalefactors,
                                SHORT* quantizedSpectrum,
                                INT dZoneQuantEnable) {
  INT sfbOffs, sfb;
  for (sfbOffs = 0; sfbOffs < sfbCnt; sfbOffs += sfbPerGroup) {
    for (sfb = 0; sfb < maxSfbPerGroup; sfb++) {
      INT scalefactor = scalefactors[sfbOffs + sfb];
      FDKaacEnc_quantizeLines(
        globalGain - scalefactor,
        sfbOffset[sfbOffs + sfb + 1] - sfbOffset[sfbOffs + sfb],
        mdctSpectrum + sfbOffset[sfbOffs + sfb],
        quantizedSpectrum + sfbOffset[sfbOffs + sfb], dZoneQuantEnable);
    }
  }
}

FIXP_DBL FDKaacEnc_calcSfbDist(FIXP_DBL* mdctSpectrum, SHORT* quantSpectrum,
                               INT noOfLines, INT gain, INT dZoneQuantEnable) {
  INT i, scale;
  FIXP_DBL xfsf;
  FIXP_DBL diff;
  FIXP_DBL invQuantSpec;
  xfsf = fixed_dbl(0.0f);
  for (i = 0; i < noOfLines; i++) {
    FDKaacEnc_quantizeLines(gain, 1, &mdctSpectrum[i], &quantSpectrum[i],
                            dZoneQuantEnable);
    if (fixp_abs(quantSpectrum[i]) > 8191) {
      return fixed_dbl(0.0f);
    }
    FDKaacEnc_invQuantizeLines(gain, 1, &quantSpectrum[i], &invQuantSpec);
    diff = fixp_abs(fixp_abs(invQuantSpec) - fixp_abs(mdctSpectrum[i] >> 1));
    scale = CountLeadingBits(diff);
    diff = scaleValue(diff, scale);
    diff = fPow2(diff);
    scale = fixMin(2 * (scale - 1), 32 - 1);
    diff = scaleValue(diff, -scale);
    xfsf = xfsf + diff;
  }
  xfsf = CalcLdData(xfsf);
  return xfsf;
}

void FDKaacEnc_calcSfbQuantEnergyAndDist(FIXP_DBL* mdctSpectrum,
                                         SHORT* quantSpectrum, INT noOfLines,
                                         INT gain, FIXP_DBL* en,
                                         FIXP_DBL* dist) {
  INT i, scale;
  FIXP_DBL invQuantSpec;
  FIXP_DBL diff;
  FIXP_DBL energy = fixed_dbl(0.0f);
  FIXP_DBL distortion = fixed_dbl(0.0f);
  for (i = 0; i < noOfLines; i++) {
    if (fixp_abs(quantSpectrum[i]) > 8191) {
      *en = fixed_dbl(0.0f);
      *dist = fixed_dbl(0.0f);
      return;
    }
    FDKaacEnc_invQuantizeLines(gain, 1, &quantSpectrum[i], &invQuantSpec);
    energy += fPow2(invQuantSpec);
    diff = fixp_abs(fixp_abs(invQuantSpec) - fixp_abs(mdctSpectrum[i] >> 1));
    scale = CountLeadingBits(diff);
    diff = scaleValue(diff, scale);
    diff = fPow2(diff);
    scale = fixMin(2 * (scale - 1), 32 - 1);
    diff = scaleValue(diff, -scale);
    distortion += diff;
  }
  *en = CalcLdData(energy) + fixed_dbl(0.03125f);
  *dist = CalcLdData(distortion);
}

FIXP_DBL CalcInvLdData(FIXP_DBL x) {
  int set_zero = (x < fixed_dbl(-31.0 / 64.0)) ? 0 : 1;
  int set_max = (x >= fixed_dbl(31.0 / 64.0)) || (x == fixed_dbl(0.0));
  FIXP_SGL frac = (FIXP_SGL)(LONG)(x & 0x3FF);
  UINT index3 = (UINT)(LONG)(x >> 10) & 0x1F;
  UINT index2 = (UINT)(LONG)(x >> 15) & 0x1F;
  UINT index1 = (UINT)(LONG)(x >> 20) & 0x1F;
  int exp = (x > fixed_dbl(0.0f)) ? (31 - (int)(x >> 25)) : (int)(-(x >> 25));
  UINT lookup1 = exp2_tab_long[index1] * set_zero;
  UINT lookup2 = exp2w_tab_long[index2];
  UINT lookup3 = exp2x_tab_long[index3];
  UINT lookup3f =
    lookup3 + (UINT)(LONG)fMultDiv2((FIXP_DBL)(0x0016302F), (FIXP_SGL)frac);
  UINT lookup12 = (UINT)(LONG)fMult((FIXP_DBL)lookup1, (FIXP_DBL)lookup2);
  UINT lookup = (UINT)(LONG)fMult((FIXP_DBL)lookup12, (FIXP_DBL)lookup3f);
  FIXP_DBL retVal = (lookup << 3) >> exp;
  if (set_max) {
    retVal = fixed_dbl(1.0f);
  }
  return retVal;
}

int32_t CalcLdData(int32_t value) {
  if (value <= 0) {
    return static_cast<int32_t>(0x80000000U);
  }
  int exponent;
  int32_t result = fLog2(value, 0, &exponent);
  return scaleValue(result, exponent - 6);
}

}
