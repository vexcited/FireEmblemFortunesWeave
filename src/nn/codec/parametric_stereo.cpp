/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/parametric_stereo.hpp"
#include "nn/codec/transforms.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using LONG = int32_t;
using INT = int32_t;
using UINT = uint32_t;
using UCHAR = uint8_t;
using SCHAR = int8_t;
using SBR_ERROR = int;

void FDKmemclear(void*, unsigned int);
void FDKmemcpy(void*, const void*, unsigned int);

static void assignTimeSlotsPS(int32_t*, int32_t**, int, int);
constexpr int16_t fixed_sgl(double v) {
  double value = v * 32768.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 32767 ? 32767 : value <= -32768 ? -32768 : int16_t(value);
}

constexpr int32_t fixed_dbl(double v) {
  double value = v * 2147483648.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 2147483647.0    ? 2147483647
         : value <= -2147483648.0 ? (-2147483647 - 1)
                                  : int32_t(value);
}

static int CntLeadingZeros(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

static int32_t fixp_abs(int32_t value) {
  return value < 0 ? static_cast<int32_t>(0U - value) : value;
}

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int fixMax(int a, int b) {
  return a > b ? a : b;
}

static int32_t scaleValue(int32_t value, int shift) {
  return shift >= 0
           ? static_cast<int32_t>(static_cast<uint32_t>(value) << (shift & 31))
           : value >> (-shift & 31);
}

static void scaleValues(int32_t* data, int count, int shift) {
  shift = fixMax(-31, fixMin(31, shift));
  for (int i = 0; i < count; ++i) {
    data[i] = scaleValue(data[i], shift);
  }
}

static int getScalefactor(const int32_t* data, int count) {
  uint32_t magnitude = 0;
  for (int i = 0; i < count; ++i) {
    magnitude |= data[i] ^ (data[i] >> 31);
  }
  return fixMax(0, CntLeadingZeros(magnitude) - 1);
}

static int32_t fAbs(int32_t value) {
  return fixp_abs(value);
}

static int32_t fMin(int32_t a, int32_t b) {
  return a < b ? a : b;
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 32);
}

static int32_t fMultDiv2(int16_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 16);
}

static int32_t fMultDiv2(int32_t a, int16_t b) {
  return fMultDiv2(b, a);
}

template <typename A, typename B> static int32_t fMult(A a, B b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

template <typename A, typename B>
static int32_t fMultAddDiv2(int32_t value, A a, B b) {
  return value + fMultDiv2(a, b);
}

template <typename A, typename B>
static int32_t fMultAdd(int32_t value, A a, B b) {
  return static_cast<int32_t>(static_cast<uint32_t>(value + fMultDiv2(a, b))
                              << 1);
}

static void cplxMultDiv2(int32_t* real, int32_t* imag, int32_t a, int32_t b,
                         int16_t c, int16_t d) {
  *real = fMultDiv2(a, c) - fMultDiv2(b, d);
  *imag = fMultDiv2(a, d) + fMultDiv2(b, c);
}

static int32_t scaleFactorAt(const int32_t* table, int index, int count) {
  return index >= 0 && index < count ? table[index] : 0;
}

static void fft_8(int32_t* data) {
  int scale = 0;
  fft(8, data, &scale);
}

extern const FIXP_DBL decayScaleFactTable[64];
const FIXP_DBL decayScaleFactTable[64] = {
  fixed_dbl(1.000000), fixed_dbl(1.000000), fixed_dbl(1.000000),
  fixed_dbl(1.000000), fixed_dbl(0.950000), fixed_dbl(0.900000),
  fixed_dbl(0.850000), fixed_dbl(0.800000), fixed_dbl(0.750000),
  fixed_dbl(0.700000), fixed_dbl(0.650000), fixed_dbl(0.600000),
  fixed_dbl(0.550000), fixed_dbl(0.500000), fixed_dbl(0.450000),
  fixed_dbl(0.400000), fixed_dbl(0.350000), fixed_dbl(0.300000),
  fixed_dbl(0.250000), fixed_dbl(0.200000), fixed_dbl(0.150000),
  fixed_dbl(0.100000), fixed_dbl(0.050000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000), fixed_dbl(0.000000), fixed_dbl(0.000000),
  fixed_dbl(0.000000)};
extern const FIXP_DBL ScaleFactors[(2 * (7) + 1)];
const FIXP_DBL ScaleFactors[(2 * (7) + 1)] = {
  0x5a5ded00, 0x59cd0400, 0x58c29680, 0x564c2e80, 0x52a3d480,
  0x4c8be080, 0x46df3080, 0x40000000, 0x384ba5c0, 0x304c2980,
  0x24e9f640, 0x1b4a2940, 0x11b5c0a0, 0x0b4e2540, 0x0514ea90};
extern const FIXP_DBL ScaleFactorsFine[(2 * (15) + 1)];
const FIXP_DBL ScaleFactorsFine[(2 * (15) + 1)] = {
  0x5a825c00, 0x5a821c00, 0x5a815100, 0x5a7ed000, 0x5a76e600, 0x5a5ded00,
  0x5a39b880, 0x59f1fd00, 0x5964d680, 0x5852ca00, 0x564c2e80, 0x54174480,
  0x50ea7500, 0x4c8be080, 0x46df3080, 0x40000000, 0x384ba5c0, 0x304c2980,
  0x288dd240, 0x217a2900, 0x1b4a2940, 0x13c5ece0, 0x0e2b0090, 0x0a178ef0,
  0x072ab798, 0x0514ea90, 0x02dc5944, 0x019bf87c, 0x00e7b173, 0x00824b8b,
  0x00494568};
extern const FIXP_DBL Alphas[((8))];
const FIXP_DBL Alphas[((8))] = {0x00000000, 0x0b6b5be0, 0x12485f80, 0x1da2fa40,
                                0x2637ebc0, 0x3243f6c0, 0x466b7480, 0x6487ed80};
extern const FIXP_SGL aAllpassLinkDecaySer[(3)];
const FIXP_SGL aAllpassLinkDecaySer[(3)] = {
  static_cast<int16_t>((static_cast<int32_t>(0x53625b00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x4848af00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x3ea94d00)) >> 16)};
extern const FIXP_SGL aaFractDelayPhaseFactorReQmf[(64)];
const FIXP_SGL aaFractDelayPhaseFactorReQmf[(64)] = {
  static_cast<int16_t>((static_cast<int32_t>(0x68b92180)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xde396900)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80650380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xcb537e40)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5beb8f00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x72f29200)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xf1f43c50)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x83896280)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xb9b99c00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x4cda8f00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7a576e00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x060799e0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x89be5280)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xa9dab600)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x3be51b00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7eb91900)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x19f4f540)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x92dcb380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x9c1ad700)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x29761940)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7ffbf500)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x2d3eb180)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x9eab0a00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x90d0aa80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x1601bcc0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7e180e80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x3f6b3940)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xacdeeb00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x88435b00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x0202a768)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x79194f80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5007fd00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xbd1ecf00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x82a8d100)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xedf6e5e0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x711f3500)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5eac4480)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xcf0447c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80245f80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xda5cd4c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x665c0800)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x6afbc500)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xe21e85e0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80c5e500)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xc7b003c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x59139f80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x74a8e400)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xf5f51f40)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x84896680)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xb6662b00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x4999b600)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7b76a300)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x0a0b0650)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x8b572b80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xa6ec4580)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x384fda80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7f3a1f00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x1de19ec0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x95045000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x99a3e180)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x25a30740)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7fdb9e80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x30fbdb00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xa153d500)) >> 16)};
extern const FIXP_SGL aaFractDelayPhaseFactorImQmf[(64)];
const FIXP_SGL aaFractDelayPhaseFactorImQmf[(64)] = {
  static_cast<int16_t>((static_cast<int32_t>(0xb6663a80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x84896200)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xf5f50c70)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x74a8dc80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5913ad00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xc7b01480)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80c5e300)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xe21e73a0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x6afbba80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x665c1380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xda5ce6c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80246080)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xcf043640)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5eac3800)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x711f3e00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xedf6f8a0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x82a8d500)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xbd1ebe80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5007ee00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x79195580)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x0202ba40)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x88436180)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xacdedc80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x3f6b28c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7e181180)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x1601cf40)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x90d0b380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x9eaafd80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x2d3e9fc0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7ffbf580)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x29762b00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x9c1ae280)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x92dca980)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x19f4e2c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7eb91680)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x3be52b80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xa9dac400)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x89be4b80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x06078710)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7a576880)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x4cda9e00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xb9b9ac00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x83895e00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xf1f42990)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x72f28a00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5beb9c00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xcb538f40)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80650200)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xde3956c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x68b91680)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x68b92c00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xde397b40)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80650500)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xcb536d00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5beb8180)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x72f29a80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xf1f44f10)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x83896700)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xb9b98c80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x4cda8000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7a577380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x0607acb8)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x89be5a00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xa9daa800)) >> 16)};
extern const FIXP_SGL aaFractDelayPhaseFactorReSubQmf20[(12)];
const FIXP_SGL aaFractDelayPhaseFactorReSubQmf20[(12)] = {
  static_cast<int16_t>((static_cast<int32_t>(0x7e807380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x72b9bb00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x5c44ee80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x3d3938c0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x72b9bb00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x7e807380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xba914700)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x050677b0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x895cc380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x834e4900)) >> 16)};
extern const FIXP_SGL aaFractDelayPhaseFactorImSubQmf20[(12)];
const FIXP_SGL aaFractDelayPhaseFactorImSubQmf20[(12)] = {
  static_cast<int16_t>((static_cast<int32_t>(0xec791720)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xc73ca080)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xa748ea00)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x8f976980)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x38c35f80)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x1386e8e0)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x9477d000)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x80194380)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0xcff26140)) >> 16),
  static_cast<int16_t>((static_cast<int32_t>(0x1ce70d40)) >> 16)};
extern const FIXP_SGL aaFractDelayPhaseFactorSerReQmf[(64)][(3)];
const FIXP_SGL aaFractDelayPhaseFactorSerReQmf[(64)][(3)] = {
  {static_cast<int16_t>((static_cast<int32_t>(0x63e52480)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x6d73af00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xc7b01280)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xf7c31cb0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x83896200)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8aee2700)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x0202b330)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x9bfab500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7d572c80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x1893b960)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x34ac7fc0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7abf7980)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x99a3ee00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x58eead80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x9eab0580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xd77dae40)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x3be52140)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x819b8500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7b769d80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xb3a12280)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf9f86878)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x37c519c0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x81e7ef80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7ff16880)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xcf043cc0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x3e8b2340)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x68b92280)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xb9e4a900)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x5eac3980)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80a05200)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xc094cd00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xd051dc80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x85a89400)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x53483b00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x0a0af5e0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7cb1b680)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7eb91900)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x2006e8c0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x2d3ea680)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xa0ec1c00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x95044180)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x880d2180)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa4147300)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xf0282870)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x42e13f80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x694c4a00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x79195200)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x71374780)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf1f43550)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xff6593ea)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80c5e280)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8e39ec00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xd689e480)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x97648100)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x6d235300)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x110a20c0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x5913a800)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x785d4f80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xb9b99a00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x5e440880)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x88436100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xdece7000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x12091320)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8309f800)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7f9afd00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xada33f00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x25a31700)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30cc3600)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x90d0ab80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7f7cbe80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa9dabf00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x45182580)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x4999cb80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc0681c80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7641ac80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80194380)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xe9fe3300)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc95184c0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80246000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x4d55d800)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xde396fc0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7e324000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x711f3f00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x275ce480)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x53211700)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xa6343580)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xb3256780)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x85997b80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x8b572680)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xe89ba660)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x19f4f780)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x64c4e100)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7ffbf580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7493a380)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x1de18100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x070897f0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x8d0d6a80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x91ed6f00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xaff81380)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x932db000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x5007fb00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x0970feb0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x72f28d00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x758d6500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xe21e6cc0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x63436f80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80040b00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xe63d7600)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xe60b1ae0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x84ea5c80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x74a8e100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xa7f07500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x4cda8980)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x29a6d340)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xacdeda80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7e93d600)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x8ee0c980)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x4b662680)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x21c6a280)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc7258c80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7fdb9f00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8006d500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x1601ba60)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc2830940)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x89be4c80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x471cf100)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xb6664400)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7f3fb800)) >> 16)}};
extern const FIXP_SGL aaFractDelayPhaseFactorSerImQmf[(64)][(3)];
const FIXP_SGL aaFractDelayPhaseFactorSerImQmf[(64)][(3)] = {
  {static_cast<int16_t>((static_cast<int32_t>(0xaff80c80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xbda29e00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x8d0d6f00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8043ee80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x1de18a20)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcc3e7840)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7ffbf500)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x4fdfc180)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x19f4ee40)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7d9e4c00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x8b572300)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x244a2940)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xb3256f00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xa3f0a500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x53211e00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x86944500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x711f3a80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xebc72040)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xde3966c0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x66b87e00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80246080)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x73362c00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xe9fe3c40)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x03d1d110)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7641b000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x90520c80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x4999c380)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x94e80a80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa9dab800)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x0ca570e0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x90d0b000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x76c9bc80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x25a32000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x61338500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7f9afc80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xe318f060)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x120909c0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x84124e00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x88435d80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xaa4d2f80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xb9b9a200)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x2cae1800)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x5913ae80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7f040680)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x6d234e00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x48c6a100)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xd689db80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc44860c0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80c5e380)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80005d00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf1f43eb0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc55a3a00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x79195500)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x49c3de00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x42e13700)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7edc5b00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa4146c80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x2b8c2c00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x95044680)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xa968c100)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x2d3eaf40)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8460fd80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7eb91780)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xe44621e0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x0a0aec80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x61fb5c00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x85a89100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x76555780)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xc094d500)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x0b71f790)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x5eac4000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x94401a80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x68b91d80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x90ea3980)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xcf043440)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x05067a08)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x81e7f180)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x73bb6d00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf9f871e0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x65ff0e00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7b76a000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xea9664c0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x3be518c0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8633e880)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x9eaaff00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xa4c84500)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x99a3f400)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x2571eac0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x34ac8840)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7dd82b00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7d572a80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x4eed8400)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x0202a9c4)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcb249700)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x83896000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80318200)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xc7b01b00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xbeab7580)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x63e52a80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x4364b700)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x63e51f00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7fa6bd00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xc7b00a00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x32a67940)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x83896400)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xaf2fd200)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x0202bc9c)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x829e6e80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7d572e80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xdcde6b80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x34ac7700)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x5ce4e280)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x99a3e880)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x79089c00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x9eab0b80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x1307ae80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x3be52980)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x30fbc540)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x98906880)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7b769b00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x89be5100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8d51b300)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf9f85f10)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xfd62ee24)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x81e7ee00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x70439680)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xcf044580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcf043ac0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x6a6d9600)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x68b92800)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7641af00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xf2275f80)) >> 16)}};
extern const FIXP_SGL aaFractDelayPhaseFactorSerReSubQmf20[(12)][(3)];
const FIXP_SGL aaFractDelayPhaseFactorSerReSubQmf20[(12)][(3)] = {
  {static_cast<int16_t>((static_cast<int32_t>(0x7e2df000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7a7d0580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7ed03e00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x6fec9a80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x5133cc80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7573df00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x55063900)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x0c8bd360)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x636c0400)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x3084ca00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xc3a94580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x4a0d6700)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x80000000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x6fec9a80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x5133cc80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7573df00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x7e2df000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7a7d0580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7ed03e00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa4c84280)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xb8e31300)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xd5af0140)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf0f488a0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8275a100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x1a72e360)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80aaa680)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x471ced00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x9d2ead80)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x9477d100)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x7d8a5f00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8151df80)) >> 16)}};
extern const FIXP_SGL aaFractDelayPhaseFactorSerImSubQmf20[(12)][(3)];
const FIXP_SGL aaFractDelayPhaseFactorSerImSubQmf20[(12)][(3)] = {
  {static_cast<int16_t>((static_cast<int32_t>(0xea7d08a0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xdad7f3c0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xee9c9f60)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xc1e54140)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x9d0dfe80)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xcd1e7300)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa051a580)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x809dc980)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xaf61c400)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x898d4e00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x8f1d3400)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x97988280)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x00000000)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x3e1abec0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x62f20180)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x32e18d00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x1582f760)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x25280c40)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x116360a0)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xa6343800)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x6a6d9880)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x87327a00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x80e32200)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xe70747c0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x82c32b00)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0xf2f42420)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0x6a6d9880)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xaea47080)) >> 16)},
  {static_cast<int16_t>((static_cast<int32_t>(0x456eba00)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xe70747c0)) >> 16),
   static_cast<int16_t>((static_cast<int32_t>(0xedaa8640)) >> 16)}};
extern const FIXP_SGL p8_13_20[13];
const FIXP_SGL p8_13_20[13] = {fixed_sgl(0.00746082949812f),
                               fixed_sgl(0.02270420949825f),
                               fixed_sgl(0.04546865930473f),
                               fixed_sgl(0.07266113929591f),
                               fixed_sgl(0.09885108575264f),
                               fixed_sgl(0.11793710567217f),
                               fixed_sgl(0.125f),
                               fixed_sgl(0.11793710567217f),
                               fixed_sgl(0.09885108575264f),
                               fixed_sgl(0.07266113929591f),
                               fixed_sgl(0.04546865930473f),
                               fixed_sgl(0.02270420949825f),
                               fixed_sgl(0.00746082949812f)};
extern const FIXP_SGL p2_13_20[13];
const FIXP_SGL p2_13_20[13] = {fixed_sgl(0.0f), fixed_sgl(0.01899487526049f),
                               fixed_sgl(0.0f), fixed_sgl(-0.07293139167538f),
                               fixed_sgl(0.0f), fixed_sgl(0.30596630545168f),
                               fixed_sgl(0.5f), fixed_sgl(0.30596630545168f),
                               fixed_sgl(0.0f), fixed_sgl(-0.07293139167538f),
                               fixed_sgl(0.0f), fixed_sgl(0.01899487526049f),
                               fixed_sgl(0.0f)};
extern const UCHAR aAllpassLinkDelaySer[];
const UCHAR aAllpassLinkDelaySer[] = {3, 4, 5};
extern const UCHAR delayIndexQmf[(64)];
const UCHAR delayIndexQmf[(64)] = {
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
  14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
  14, 14, 14, 1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,
  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1};
extern const UCHAR groupBorders20[((10) + (12)) + 1];
const UCHAR groupBorders20[((10) + (12)) + 1] = {
  6, 7, 0, 1, 2, 3, 9, 8, 10, 11, 3, 4, 5, 6, 7, 8, 9, 11, 14, 18, 23, 35, 64};
extern const UCHAR bins2groupMap20[((10) + (12))];
const UCHAR bins2groupMap20[((10) + (12))] = {
  1, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
extern const FIXP_DBL invCount[80];
const FIXP_DBL invCount[80] = {
  0x00000000, 0x7fffffff, 0x40000000, 0x2aaaaaab, 0x20000000, 0x1999999a,
  0x15555555, 0x12492492, 0x10000000, 0x0e38e38e, 0x0ccccccd, 0x0ba2e8ba,
  0x0aaaaaab, 0x09d89d8a, 0x09249249, 0x08888889, 0x08000000, 0x07878788,
  0x071c71c7, 0x06bca1af, 0x06666666, 0x06186186, 0x05d1745d, 0x0590b216,
  0x05555555, 0x051eb852, 0x04ec4ec5, 0x04bda12f, 0x04924925, 0x0469ee58,
  0x04444444, 0x04210842, 0x04000000, 0x03e0f83e, 0x03c3c3c4, 0x03a83a84,
  0x038e38e4, 0x03759f23, 0x035e50d8, 0x03483483, 0x03333333, 0x031f3832,
  0x030c30c3, 0x02fa0be8, 0x02e8ba2f, 0x02d82d83, 0x02c8590b, 0x02b93105,
  0x02aaaaab, 0x029cbc15, 0x028f5c29, 0x02828283, 0x02762762, 0x026a439f,
  0x025ed098, 0x0253c825, 0x02492492, 0x023ee090, 0x0234f72c, 0x022b63cc,
  0x02222222, 0x02192e2a, 0x02108421, 0x02082082, 0x02000000, 0x01f81f82,
  0x01f07c1f, 0x01e9131b, 0x01e1e1e2, 0x01dae607, 0x01d41d42, 0x01cd8569,
  0x01c71c72, 0x01c0e070, 0x01bacf91, 0x01b4e81b, 0x01af286c, 0x01a98ef6,
  0x01a41a42, 0x019ec8e9};
FIXP_DBL schur_div(FIXP_DBL num, FIXP_DBL denum, INT count) {
  INT L_num = (LONG)num >> 1;
  INT L_denum = (LONG)denum >> 1;
  INT div = 0;
  INT k = count;
  if (L_num != 0) {
    while (--k) {
      div <<= 1;
      L_num <<= 1;
      if (L_num >= L_denum) {
        L_num -= L_denum;
        div++;
      }
    }
  }
  return (FIXP_DBL)(div << (32 - count));
}

static FIXP_DBL GetInvInt(int value) {
  return invCount[value];
}

static inline FIXP_DBL fixp_sin_cos_residual_inline(FIXP_DBL x, int scale,
                                                    FIXP_DBL* sine,
                                                    FIXP_DBL* cosine) {
  FIXP_DBL residual;
  int s;
  int shift = (31 - scale - 9 - 1);
  int ssign = 1;
  int csign = 1;
  residual = fMult(x, fixed_dbl(1.0 / (3.14159265358979323846)));
  s = ((LONG)residual) >> shift;
  residual &= ((1 << shift) - 1);
  residual = fMult(residual, fixed_dbl((3.14159265358979323846) / 4.0)) << 2;
  residual <<= scale;
  if (s & ((1 << 9) << 1)) {
    ssign = -ssign;
  }
  if ((s + (1 << 9)) & ((1 << 9) << 1)) {
    csign = -csign;
  }
  s = fAbs(s);
  s &= (((1 << 9) << 1) - 1);
  if (s > (1 << 9)) {
    s = ((1 << 9) << 1) - s;
  }
  {
    LONG sl, cl;
    if (s > (1 << (9 - 1))) {
      FIXP_SPK tmp;
      s = (1 << 9) - s;
      tmp = SineTable512[s];
      sl = (LONG)tmp.v.re;
      cl = (LONG)tmp.v.im;
    }
    else {
      FIXP_SPK tmp;
      tmp = SineTable512[s];
      sl = (LONG)tmp.v.im;
      cl = (LONG)tmp.v.re;
    }
    *sine = (FIXP_DBL)((sl * ssign) << (32 - 16));
    *cosine = (FIXP_DBL)((cl * csign) << (32 - 16));
  }
  return residual;
}

static inline void inline_fixp_cos_sin(FIXP_DBL x1, FIXP_DBL x2,
                                       const int scale, FIXP_DBL* out) {
  FIXP_DBL residual, error0, error1, sine, cosine;
  residual = fixp_sin_cos_residual_inline(x1, scale, &sine, &cosine);
  error0 = fMultDiv2(sine, residual);
  error1 = fMultDiv2(cosine, residual);
  *out++ = cosine - (error0 << 1);
  *out++ = sine + (error1 << 1);
  residual = fixp_sin_cos_residual_inline(x2, scale, &sine, &cosine);
  error0 = fMultDiv2(sine, residual);
  error1 = fMultDiv2(cosine, residual);
  *out++ = cosine - (error0 << 1);
  *out++ = sine + (error1 << 1);
}

SBR_ERROR
InitHybridFilterBank(HANDLE_HYBRID hs, SCHAR frameSize, SCHAR noBands,
                     const UCHAR* pResolution) {
  SCHAR i;
  UCHAR maxNoChannels = 0;
  for (i = 0; i < noBands; i++) {
    hs->pResolution[i] = pResolution[i];
    if (pResolution[i] > maxNoChannels) {
      maxNoChannels = pResolution[i];
    }
  }
  hs->nQmfBands = noBands;
  hs->frameSize = frameSize;
  hs->qmfBufferMove = 13 - 1;
  hs->sf_mQmfBuffer = 0;
  return 0;
}

static void slotBasedDualChannelFiltering(const FIXP_DBL* pQmfReal,
                                          const FIXP_DBL* pQmfImag,
                                          FIXP_DBL* mHybridReal,
                                          FIXP_DBL* mHybridImag) {
  FIXP_DBL t1, t3, t5, t6;
  t1 = fMultDiv2(p2_13_20[1], ((pQmfReal[1] >> 1) + (pQmfReal[11] >> 1)));
  t3 = fMultDiv2(p2_13_20[3], ((pQmfReal[3] >> 1) + (pQmfReal[9] >> 1)));
  t5 = fMultDiv2(p2_13_20[5], ((pQmfReal[5] >> 1) + (pQmfReal[7] >> 1)));
  t6 = fMultDiv2(p2_13_20[6], (pQmfReal[6] >> 1));
  mHybridReal[0] = (t1 + t3 + t5 + t6) << 2;
  mHybridReal[1] = (-t1 - t3 - t5 + t6) << 2;
  t1 = fMultDiv2(p2_13_20[1], ((pQmfImag[1] >> 1) + (pQmfImag[11] >> 1)));
  t3 = fMultDiv2(p2_13_20[3], ((pQmfImag[3] >> 1) + (pQmfImag[9] >> 1)));
  t5 = fMultDiv2(p2_13_20[5], ((pQmfImag[5] >> 1) + (pQmfImag[7] >> 1)));
  t6 = fMultDiv2(p2_13_20[6], pQmfImag[6] >> 1);
  mHybridImag[0] = (t1 + t3 + t5 + t6) << 2;
  mHybridImag[1] = (-t1 - t3 - t5 + t6) << 2;
}

static const FIXP_SGL cr[13] = {
  static_cast<int16_t>(((-fixed_dbl(0.70710678118655f))) >> 16),
  static_cast<int16_t>(((-fixed_dbl(0.38268343236509f))) >> 16),
  static_cast<int16_t>((fixed_dbl(0.f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.38268343236509f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.70710678118655f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.92387953251129f)) >> 16),
  static_cast<int16_t>((fixed_dbl(1.f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.92387953251129f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.70710678118655f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.38268343236509f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.f)) >> 16),
  static_cast<int16_t>(((-fixed_dbl(0.38268343236509f))) >> 16),
  static_cast<int16_t>(((-fixed_dbl(0.70710678118655f))) >> 16)};
static const FIXP_SGL ci[13] = {
  static_cast<int16_t>((fixed_dbl(0.70710678118655f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.92387953251129f)) >> 16),
  static_cast<int16_t>((fixed_dbl(1.f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.92387953251129f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.70710678118655f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.38268343236509f)) >> 16),
  static_cast<int16_t>((fixed_dbl(0.f)) >> 16),
  static_cast<int16_t>((-fixed_dbl(0.38268343236509f)) >> 16),
  static_cast<int16_t>((-fixed_dbl(0.70710678118655f)) >> 16),
  static_cast<int16_t>((-fixed_dbl(0.92387953251129f)) >> 16),
  static_cast<int16_t>((-fixed_dbl(1.f)) >> 16),
  static_cast<int16_t>((-fixed_dbl(0.92387953251129f)) >> 16),
  static_cast<int16_t>((-fixed_dbl(0.70710678118655f)) >> 16)};
static void slotBasedEightChannelFiltering(const FIXP_DBL* pQmfReal,
                                           const FIXP_DBL* pQmfImag,
                                           FIXP_DBL* mHybridReal,
                                           FIXP_DBL* mHybridImag) {
  int bin;
  FIXP_DBL _fft[128 + 8 - 1];
  FIXP_DBL* fft =
    (FIXP_DBL*)((reinterpret_cast<uintptr_t>(_fft) + 7) & ~uintptr_t(7));
  const FIXP_SGL* p = p8_13_20;
  FIXP_DBL accu1, accu2, accu3, accu4;
  cplxMultDiv2(&accu1, &accu2, pQmfReal[6], pQmfImag[6], cr[6], ci[6]);
  fft[(0 << 1)] = fMultDiv2(p[6], accu1);
  fft[((0 << 1) + 1)] = fMultDiv2(p[6], accu2);
  cplxMultDiv2(&accu1, &accu2, pQmfReal[7], pQmfImag[7], cr[7], ci[7]);
  fft[(1 << 1)] = fMultDiv2(p[7], accu1);
  fft[((1 << 1) + 1)] = fMultDiv2(p[7], accu2);
  cplxMultDiv2(&accu1, &accu2, pQmfReal[0], pQmfImag[0], cr[0], ci[0]);
  accu1 = fMultDiv2(p[0], accu1);
  accu2 = fMultDiv2(p[0], accu2);
  cplxMultDiv2(&accu3, &accu4, pQmfReal[8], pQmfImag[8], cr[8], ci[8]);
  accu3 = fMultDiv2(p[8], accu3);
  accu4 = fMultDiv2(p[8], accu4);
  fft[(2 << 1)] = accu1 + accu3;
  fft[((2 << 1) + 1)] = accu2 + accu4;
  cplxMultDiv2(&accu1, &accu2, pQmfReal[1], pQmfImag[1], cr[1], ci[1]);
  accu1 = fMultDiv2(p[1], accu1);
  accu2 = fMultDiv2(p[1], accu2);
  cplxMultDiv2(&accu3, &accu4, pQmfReal[9], pQmfImag[9], cr[9], ci[9]);
  accu3 = fMultDiv2(p[9], accu3);
  accu4 = fMultDiv2(p[9], accu4);
  fft[(3 << 1)] = accu1 + accu3;
  fft[((3 << 1) + 1)] = accu2 + accu4;
  cplxMultDiv2(&accu1, &accu2, pQmfReal[2], pQmfImag[2], cr[2], ci[2]);
  accu1 = fMultDiv2(p[2], accu1);
  accu2 = fMultDiv2(p[2], accu2);
  cplxMultDiv2(&accu3, &accu4, pQmfReal[10], pQmfImag[10], cr[10], ci[10]);
  accu3 = fMultDiv2(p[10], accu3);
  accu4 = fMultDiv2(p[10], accu4);
  fft[(4 << 1)] = accu1 + accu3;
  fft[((4 << 1) + 1)] = accu2 + accu4;
  cplxMultDiv2(&accu1, &accu2, pQmfReal[3], pQmfImag[3], cr[3], ci[3]);
  accu1 = fMultDiv2(p[3], accu1);
  accu2 = fMultDiv2(p[3], accu2);
  cplxMultDiv2(&accu3, &accu4, pQmfReal[11], pQmfImag[11], cr[11], ci[11]);
  accu3 = fMultDiv2(p[11], accu3);
  accu4 = fMultDiv2(p[11], accu4);
  fft[(5 << 1)] = accu1 + accu3;
  fft[((5 << 1) + 1)] = accu2 + accu4;
  cplxMultDiv2(&accu1, &accu2, pQmfReal[4], pQmfImag[4], cr[4], ci[4]);
  accu1 = fMultDiv2(p[4], accu1);
  accu2 = fMultDiv2(p[4], accu2);
  cplxMultDiv2(&accu3, &accu4, pQmfReal[12], pQmfImag[12], cr[12], ci[12]);
  accu3 = fMultDiv2(p[12], accu3);
  accu4 = fMultDiv2(p[12], accu4);
  fft[(6 << 1)] = accu1 + accu3;
  fft[((6 << 1) + 1)] = accu2 + accu4;
  cplxMultDiv2(&accu1, &accu2, pQmfReal[5], pQmfImag[5], cr[5], ci[5]);
  fft[(7 << 1)] = fMultDiv2(p[5], accu1);
  fft[((7 << 1) + 1)] = fMultDiv2(p[5], accu2);
  fft_8(fft);
  for (bin = 0; bin < 8; bin++) {
    mHybridReal[bin] = fft[(bin << 1)] << 4;
    mHybridImag[bin] = fft[((bin << 1) + 1)] << 4;
  }
}

void fillHybridDelayLine(FIXP_DBL** fixpQmfReal, FIXP_DBL**,
                         FIXP_DBL fixpHybridLeftR[12],
                         FIXP_DBL fixpHybridLeftI[12],
                         FIXP_DBL fixpHybridRightR[12],
                         FIXP_DBL fixpHybridRightI[12], HANDLE_HYBRID hHybrid) {
  int i;
  for (i = 0; i < 6; i++) {
    slotBasedHybridAnalysis(fixpQmfReal[i], fixpQmfReal[i], fixpHybridLeftR,
                            fixpHybridLeftI, hHybrid);
  }
  FDKmemcpy(fixpHybridRightR, fixpHybridLeftR, sizeof(FIXP_DBL) * (12));
  FDKmemcpy(fixpHybridRightI, fixpHybridLeftI, sizeof(FIXP_DBL) * (12));
}

void slotBasedHybridAnalysis(FIXP_DBL* fixpQmfReal, FIXP_DBL* fixpQmfImag,
                             FIXP_DBL fixpHybridReal[12],
                             FIXP_DBL fixpHybridImag[12],
                             HANDLE_HYBRID hHybrid) {
  int k, band;
  HYBRID_RES hybridRes;
  int chOffset = 0;
  FIXP_DBL pTempRealSlot[4 * 13];
  FIXP_DBL* pTempImagSlot = pTempRealSlot + 13;
  FIXP_DBL* pWorkRealSlot = pTempImagSlot + 13;
  FIXP_DBL* pWorkImagSlot = pWorkRealSlot + 13;
  for (band = 0; band < hHybrid->nQmfBands; band++) {
    hybridRes = (HYBRID_RES)hHybrid->pResolution[band];
    FDKmemcpy(pWorkRealSlot, hHybrid->mQmfBufferRealSlot[band],
              hHybrid->qmfBufferMove * sizeof(FIXP_DBL));
    FDKmemcpy(pWorkImagSlot, hHybrid->mQmfBufferImagSlot[band],
              hHybrid->qmfBufferMove * sizeof(FIXP_DBL));
    pWorkRealSlot[hHybrid->qmfBufferMove] = fixpQmfReal[band];
    pWorkImagSlot[hHybrid->qmfBufferMove] = fixpQmfImag[band];
    FDKmemcpy(hHybrid->mQmfBufferRealSlot[band], pWorkRealSlot + 1,
              hHybrid->qmfBufferMove * sizeof(FIXP_DBL));
    FDKmemcpy(hHybrid->mQmfBufferImagSlot[band], pWorkImagSlot + 1,
              hHybrid->qmfBufferMove * sizeof(FIXP_DBL));
    if (fixpQmfReal) {
      switch (hybridRes) {
        case HYBRID_2_REAL:
          slotBasedDualChannelFiltering(pWorkRealSlot, pWorkImagSlot,
                                        pTempRealSlot, pTempImagSlot);
          break;
        case HYBRID_8_CPLX:
          slotBasedEightChannelFiltering(pWorkRealSlot, pWorkImagSlot,
                                         pTempRealSlot, pTempImagSlot);
          break;
        default:
          break;
      }
      for (k = 0; k < (SCHAR)hybridRes; k++) {
        fixpHybridReal[chOffset + k] = pTempRealSlot[k];
        fixpHybridImag[chOffset + k] = pTempImagSlot[k];
      }
      chOffset += hybridRes;
    }
  }
  fixpHybridReal[3] += fixpHybridReal[4];
  fixpHybridImag[3] += fixpHybridImag[4];
  fixpHybridReal[4] = (FIXP_DBL)0;
  fixpHybridImag[4] = (FIXP_DBL)0;
  fixpHybridReal[2] += fixpHybridReal[5];
  fixpHybridImag[2] += fixpHybridImag[5];
  fixpHybridReal[5] = (FIXP_DBL)0;
  fixpHybridImag[5] = (FIXP_DBL)0;
}

void slotBasedHybridSynthesis(FIXP_DBL* fixpHybridReal,
                              FIXP_DBL* fixpHybridImag, FIXP_DBL* fixpQmfReal,
                              FIXP_DBL* fixpQmfImag, HANDLE_HYBRID hHybrid) {
  int k, band;
  HYBRID_RES hybridRes;
  int chOffset = 0;
  for (band = 0; band < hHybrid->nQmfBands; band++) {
    FIXP_DBL qmfReal = fixed_dbl(0.f);
    FIXP_DBL qmfImag = fixed_dbl(0.f);
    hybridRes = (HYBRID_RES)hHybrid->pResolution[band];
    for (k = 0; k < (SCHAR)hybridRes; k++) {
      qmfReal += fixpHybridReal[chOffset + k];
      qmfImag += fixpHybridImag[chOffset + k];
    }
    fixpQmfReal[band] = qmfReal;
    fixpQmfImag[band] = qmfImag;
    chOffset += hybridRes;
  }
}

SBR_ERROR ResetPsDec(HANDLE_PS_DEC h_ps_d) {
  SBR_ERROR errorInfo = 0;
  INT i;
  const UCHAR noQmfBandsInHybrid20 = 3;
  const UCHAR aHybridResolution20[] = {HYBRID_8_CPLX, HYBRID_2_REAL,
                                       HYBRID_2_REAL};
  h_ps_d->specificTo.mpeg.delayBufIndex = 0;
  h_ps_d->specificTo.mpeg.lastUsb = 0;
  h_ps_d->specificTo.mpeg.scaleFactorPsDelayBuffer = -(32 - 1);
  FDKmemclear(h_ps_d->specificTo.mpeg.aDelayBufIndexDelayQmf,
              ((64) - (23)) * sizeof(UCHAR));
  h_ps_d->specificTo.mpeg.noSampleDelay = delayIndexQmf[0];
  for (i = 0; i < (3); i++) {
    h_ps_d->specificTo.mpeg.aDelayRBufIndexSer[i] = 0;
  }
  h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[0] =
    h_ps_d->specificTo.mpeg.aaQmfDelayBufReal;
  assignTimeSlotsPS(h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[0] +
                      ((64) - (23)),
                    &h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[1],
                    h_ps_d->specificTo.mpeg.noSampleDelay - 1, ((35) - (23)));
  h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[0] =
    h_ps_d->specificTo.mpeg.aaQmfDelayBufImag;
  assignTimeSlotsPS(h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[0] +
                      ((64) - (23)),
                    &h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[1],
                    h_ps_d->specificTo.mpeg.noSampleDelay - 1, ((35) - (23)));
  errorInfo =
    InitHybridFilterBank(&h_ps_d->specificTo.mpeg.hybrid, h_ps_d->noSubSamples,
                         noQmfBandsInHybrid20, aHybridResolution20);
  for (i = 0; i < ((10) + (12)); i++) {
    h_ps_d->specificTo.mpeg.h11rPrev[i] = fixed_dbl(0.5f);
    h_ps_d->specificTo.mpeg.h12rPrev[i] = fixed_dbl(0.5f);
  }
  FDKmemclear(h_ps_d->specificTo.mpeg.h21rPrev,
              sizeof(h_ps_d->specificTo.mpeg.h21rPrev));
  FDKmemclear(h_ps_d->specificTo.mpeg.h22rPrev,
              sizeof(h_ps_d->specificTo.mpeg.h22rPrev));
  return errorInfo;
}

void ResetPsDeCor(HANDLE_PS_DEC h_ps_d) {
  INT i;
  FDKmemclear(h_ps_d->specificTo.mpeg.aPeakDecayFastBin,
              (20) * sizeof(FIXP_DBL));
  FDKmemclear(h_ps_d->specificTo.mpeg.aPrevNrgBin, (20) * sizeof(FIXP_DBL));
  FDKmemclear(h_ps_d->specificTo.mpeg.aPrevPeakDiffBin,
              (20) * sizeof(FIXP_DBL));
  FDKmemclear(h_ps_d->specificTo.mpeg.aPowerPrevScal, (20) * sizeof(SCHAR));
  for (i = 0; i < (23); i++) {
    FDKmemclear(h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerQmf[i],
                (12) * sizeof(FIXP_DBL));
    FDKmemclear(h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerQmf[i],
                (12) * sizeof(FIXP_DBL));
  }
  for (i = 0; i < (12); i++) {
    FDKmemclear(h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerSubQmf[i],
                (12) * sizeof(FIXP_DBL));
    FDKmemclear(h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerSubQmf[i],
                (12) * sizeof(FIXP_DBL));
  }
}

static void deCorrelateSlotBased(
  HANDLE_PS_DEC h_ps_d, FIXP_DBL* mHybridRealLeft, FIXP_DBL* mHybridImagLeft,
  SCHAR sf_mHybridLeft, FIXP_DBL* rIntBufferLeft, FIXP_DBL* iIntBufferLeft,
  SCHAR sf_IntBuffer, FIXP_DBL* mHybridRealRight, FIXP_DBL* mHybridImagRight,
  FIXP_DBL* rIntBufferRight, FIXP_DBL* iIntBufferRight);
static void applySlotBasedRotation(
  HANDLE_PS_DEC h_ps_d, FIXP_DBL* mHybridRealLeft, FIXP_DBL* mHybridImagLeft,
  FIXP_DBL* QmfLeftReal, FIXP_DBL* QmfLeftImag, FIXP_DBL* mHybridRealRight,
  FIXP_DBL* mHybridImagRight, FIXP_DBL* QmfRightReal, FIXP_DBL* QmfRightImag);
static int getScaleFactorPsStatesBuffer(HANDLE_PS_DEC h_ps_d) {
  INT i;
  int scale = 32 - 1;
  for (i = 0; i < (3); i++) {
    scale = fMin(scale,
                 getScalefactor(
                   h_ps_d->specificTo.mpeg.hybrid.mQmfBufferRealSlot[i], (12)));
    scale = fMin(scale,
                 getScalefactor(
                   h_ps_d->specificTo.mpeg.hybrid.mQmfBufferImagSlot[i], (12)));
  }
  for (i = 0; i < (2); i++) {
    scale = fMin(
      scale,
      getScalefactor(h_ps_d->specificTo.mpeg.aaRealDelayBufferQmf[i], (23)));
    scale = fMin(
      scale,
      getScalefactor(h_ps_d->specificTo.mpeg.aaImagDelayBufferQmf[i], (23)));
  }
  for (i = 0; i < (2); i++) {
    scale = fMin(
      scale,
      getScalefactor(h_ps_d->specificTo.mpeg.aaRealDelayBufferSubQmf[i], (12)));
    scale = fMin(
      scale,
      getScalefactor(h_ps_d->specificTo.mpeg.aaImagDelayBufferSubQmf[i], (12)));
  }
  for (i = 0; i < (23); i++) {
    scale = fMin(scale,
                 getScalefactor(
                   h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerQmf[i], (12)));
    scale = fMin(scale,
                 getScalefactor(
                   h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerQmf[i], (12)));
  }
  for (i = 0; i < (12); i++) {
    scale = fMin(
      scale, getScalefactor(
               h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerSubQmf[i], (12)));
    scale = fMin(
      scale, getScalefactor(
               h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerSubQmf[i], (12)));
  }
  for (i = 0; i < (14); i++) {
    INT len;
    if (i == 0) {
      len = (64) - (23);
    }
    else {
      len = (35) - (23);
    }
    scale = fMin(
      scale,
      getScalefactor(h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[i], len));
    scale = fMin(
      scale,
      getScalefactor(h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[i], len));
  }
  return (scale);
}

static void scalePsStatesBuffer(HANDLE_PS_DEC h_ps_d, int scale) {
  INT i;
  if (scale < 0) {
    scale = fixMax((INT)scale, (INT) - (32 - 1));
  }
  else {
    scale = fixMin((INT)scale, (INT)32 - 1);
  }
  for (i = 0; i < (3); i++) {
    scaleValues(h_ps_d->specificTo.mpeg.hybrid.mQmfBufferRealSlot[i], (12),
                scale);
    scaleValues(h_ps_d->specificTo.mpeg.hybrid.mQmfBufferImagSlot[i], (12),
                scale);
  }
  for (i = 0; i < (2); i++) {
    scaleValues(h_ps_d->specificTo.mpeg.aaRealDelayBufferQmf[i], (23), scale);
    scaleValues(h_ps_d->specificTo.mpeg.aaImagDelayBufferQmf[i], (23), scale);
  }
  for (i = 0; i < (2); i++) {
    scaleValues(h_ps_d->specificTo.mpeg.aaRealDelayBufferSubQmf[i], (12),
                scale);
    scaleValues(h_ps_d->specificTo.mpeg.aaImagDelayBufferSubQmf[i], (12),
                scale);
  }
  for (i = 0; i < (23); i++) {
    scaleValues(h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerQmf[i], (12),
                scale);
    scaleValues(h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerQmf[i], (12),
                scale);
  }
  for (i = 0; i < (12); i++) {
    scaleValues(h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerSubQmf[i], (12),
                scale);
    scaleValues(h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerSubQmf[i], (12),
                scale);
  }
  for (i = 0; i < (14); i++) {
    INT len;
    if (i == 0) {
      len = (64) - (23);
    }
    else {
      len = (35) - (23);
    }
    scaleValues(h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[i], len, scale);
    scaleValues(h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[i], len, scale);
  }
  scale <<= 1;
  scaleValues(h_ps_d->specificTo.mpeg.aPeakDecayFastBin, (20), scale);
  scaleValues(h_ps_d->specificTo.mpeg.aPrevPeakDiffBin, (20), scale);
  scaleValues(h_ps_d->specificTo.mpeg.aPrevNrgBin, (20), scale);
}

void scalFilterBankValues(
  HANDLE_PS_DEC h_ps_d, FIXP_DBL** fixpQmfReal, FIXP_DBL** fixpQmfImag, int lsb,
  int scaleFactorLowBandSplitLow, int scaleFactorLowBandSplitHigh,
  SCHAR* scaleFactorLowBand_lb, SCHAR* scaleFactorLowBand_hb,
  int scaleFactorHighBands, INT* scaleFactorHighBand, INT noCols) {
  INT maxScal;
  INT i;
  scaleFactorHighBands = -scaleFactorHighBands;
  scaleFactorLowBandSplitLow = -scaleFactorLowBandSplitLow;
  scaleFactorLowBandSplitHigh = -scaleFactorLowBandSplitHigh;
  maxScal = fixMax(scaleFactorHighBands, fixMax(scaleFactorLowBandSplitLow,
                                                scaleFactorLowBandSplitHigh));
  {
    int headroom = getScaleFactorPsStatesBuffer(h_ps_d);
    maxScal =
      fixMax(maxScal, (INT)(h_ps_d->specificTo.mpeg.scaleFactorPsDelayBuffer -
                            headroom));
    maxScal += 1;
  }
  if (maxScal != scaleFactorLowBandSplitLow) {
    INT scale = scaleFactorLowBandSplitLow - maxScal;
    for (i = 0; i < (6); i++) {
      scaleValues(fixpQmfReal[i], lsb, scale);
      scaleValues(fixpQmfImag[i], lsb, scale);
    }
  }
  if (maxScal != scaleFactorLowBandSplitHigh) {
    INT scale = scaleFactorLowBandSplitHigh - maxScal;
    for (i = (6); i < (6) + noCols; i++) {
      scaleValues(fixpQmfReal[i], lsb, scale);
      scaleValues(fixpQmfImag[i], lsb, scale);
    }
  }
  if (maxScal != scaleFactorHighBands) {
    INT scale = scaleFactorHighBands - maxScal;
    for (i = 0; i < noCols; i++) {
      scaleValues(&fixpQmfReal[i][lsb], (64) - lsb, scale);
      scaleValues(&fixpQmfImag[i][lsb], (64) - lsb, scale);
    }
  }
  if (maxScal != h_ps_d->specificTo.mpeg.scaleFactorPsDelayBuffer) {
    scalePsStatesBuffer(
      h_ps_d, (h_ps_d->specificTo.mpeg.scaleFactorPsDelayBuffer - maxScal));
  }
  h_ps_d->specificTo.mpeg.hybrid.sf_mQmfBuffer = maxScal;
  h_ps_d->specificTo.mpeg.scaleFactorPsDelayBuffer = maxScal;
  *scaleFactorHighBand += maxScal - scaleFactorHighBands;
  h_ps_d->rescal = maxScal - scaleFactorLowBandSplitHigh;
  h_ps_d->sf_IntBuffer = maxScal;
  *scaleFactorLowBand_lb += maxScal - scaleFactorLowBandSplitLow;
  *scaleFactorLowBand_hb += maxScal - scaleFactorLowBandSplitHigh;
}

void rescalFilterBankValues(HANDLE_PS_DEC h_ps_d, FIXP_DBL** QmfBufferReal,
                            FIXP_DBL** QmfBufferImag, int lsb, INT noCols) {
  int i;
  for (i = noCols; i < noCols + (6); i++) {
    scaleValues(QmfBufferReal[i], lsb, h_ps_d->rescal);
    scaleValues(QmfBufferImag[i], lsb, h_ps_d->rescal);
  }
}

static void
deCorrelateSlotBased(HANDLE_PS_DEC h_ps_d, FIXP_DBL* mHybridRealLeft,
                     FIXP_DBL* mHybridImagLeft, SCHAR, FIXP_DBL* rIntBufferLeft,
                     FIXP_DBL* iIntBufferLeft, SCHAR,
                     FIXP_DBL* mHybridRealRight, FIXP_DBL* mHybridImagRight,
                     FIXP_DBL* rIntBufferRight, FIXP_DBL* iIntBufferRight) {
  INT i, m, sb, gr, bin;
  FIXP_DBL peakDiff, nrg, transRatio;
  FIXP_DBL* __restrict aaLeftReal;
  FIXP_DBL* __restrict aaLeftImag;
  FIXP_DBL* __restrict aaRightReal;
  FIXP_DBL* __restrict aaRightImag;
  FIXP_DBL* __restrict pRealDelayBuffer;
  FIXP_DBL* __restrict pImagDelayBuffer;
  FIXP_DBL aaPowerSlot[(20)];
  FIXP_DBL aaTransRatioSlot[(20)];
  aaLeftReal = mHybridRealLeft;
  aaLeftImag = mHybridImagLeft;
  aaPowerSlot[0] = (fMultAddDiv2(fMultDiv2(aaLeftReal[0], aaLeftReal[0]),
                                 aaLeftImag[0], aaLeftImag[0]) >>
                    3) +
                   (fMultAddDiv2(fMultDiv2(aaLeftReal[7], aaLeftReal[7]),
                                 aaLeftImag[7], aaLeftImag[7]) >>
                    3);
  aaPowerSlot[1] = (fMultAddDiv2(fMultDiv2(aaLeftReal[1], aaLeftReal[1]),
                                 aaLeftImag[1], aaLeftImag[1]) >>
                    3) +
                   (fMultAddDiv2(fMultDiv2(aaLeftReal[6], aaLeftReal[6]),
                                 aaLeftImag[6], aaLeftImag[6]) >>
                    3);
  aaPowerSlot[2] = fMultAddDiv2(fMultDiv2(aaLeftReal[2], aaLeftReal[2]),
                                aaLeftImag[2], aaLeftImag[2]) >>
                   3;
  aaPowerSlot[3] = fMultAddDiv2(fMultDiv2(aaLeftReal[3], aaLeftReal[3]),
                                aaLeftImag[3], aaLeftImag[3]) >>
                   3;
  aaPowerSlot[4] = fMultAddDiv2(fMultDiv2(aaLeftReal[9], aaLeftReal[9]),
                                aaLeftImag[9], aaLeftImag[9]) >>
                   3;
  aaPowerSlot[5] = fMultAddDiv2(fMultDiv2(aaLeftReal[8], aaLeftReal[8]),
                                aaLeftImag[8], aaLeftImag[8]) >>
                   3;
  aaPowerSlot[6] = fMultAddDiv2(fMultDiv2(aaLeftReal[10], aaLeftReal[10]),
                                aaLeftImag[10], aaLeftImag[10]) >>
                   3;
  aaPowerSlot[7] = fMultAddDiv2(fMultDiv2(aaLeftReal[11], aaLeftReal[11]),
                                aaLeftImag[11], aaLeftImag[11]) >>
                   3;
  for (bin = 8; bin < (20); bin++) {
    FIXP_DBL slotNrg = fixed_dbl(0.f);
    for (i = groupBorders20[bin + 2]; i < groupBorders20[bin + 3]; i++) {
      slotNrg += fMultAddDiv2(fMultDiv2(rIntBufferLeft[i], rIntBufferLeft[i]),
                              iIntBufferLeft[i], iIntBufferLeft[i]) >>
                 3;
    }
    aaPowerSlot[bin] = slotNrg;
  }
  for (bin = 0; bin < (20); bin++) {
    h_ps_d->specificTo.mpeg.aPeakDecayFastBin[bin] =
      fMult(h_ps_d->specificTo.mpeg.aPeakDecayFastBin[bin],
            (fixed_dbl(0.765928338364649f)));
    if (h_ps_d->specificTo.mpeg.aPeakDecayFastBin[bin] < aaPowerSlot[bin]) {
      h_ps_d->specificTo.mpeg.aPeakDecayFastBin[bin] = aaPowerSlot[bin];
    }
    peakDiff = fMultAdd((h_ps_d->specificTo.mpeg.aPrevPeakDiffBin[bin] >> 1),
                        (fixed_dbl(1.0f - (0.75f))),
                        h_ps_d->specificTo.mpeg.aPeakDecayFastBin[bin] -
                          aaPowerSlot[bin] -
                          h_ps_d->specificTo.mpeg.aPrevPeakDiffBin[bin]);
    h_ps_d->specificTo.mpeg.aPrevPeakDiffBin[bin] = peakDiff;
    nrg = h_ps_d->specificTo.mpeg.aPrevNrgBin[bin] +
          fMult((fixed_dbl(1.0f - (0.75f))),
                aaPowerSlot[bin] - h_ps_d->specificTo.mpeg.aPrevNrgBin[bin]);
    nrg = fixMax(nrg, fixed_dbl(0.f));
    h_ps_d->specificTo.mpeg.aPrevNrgBin[bin] = nrg;
    nrg = fMult(nrg, (fixed_dbl(2.0 / 3.0)));
    if (peakDiff <= nrg || peakDiff == fixed_dbl(0.0)) {
      aaTransRatioSlot[bin] = (FIXP_DBL)2147483647;
    }
    else if (nrg <= fixed_dbl(0.0f)) {
      aaTransRatioSlot[bin] = fixed_dbl(0.f);
    }
    else {
      INT scale_left = fixMax(0, CntLeadingZeros(peakDiff) - 1);
      aaTransRatioSlot[bin] =
        schur_div(nrg << scale_left, peakDiff << scale_left, 16);
    }
  }
  FIXP_DBL rTmp, iTmp, rTmp0, iTmp0, rR0, iR0;
  INT TempDelay = h_ps_d->specificTo.mpeg.delayBufIndex;
  pRealDelayBuffer = h_ps_d->specificTo.mpeg.aaRealDelayBufferSubQmf[TempDelay];
  pImagDelayBuffer = h_ps_d->specificTo.mpeg.aaImagDelayBufferSubQmf[TempDelay];
  aaLeftReal = mHybridRealLeft;
  aaLeftImag = mHybridImagLeft;
  aaRightReal = mHybridRealRight;
  aaRightImag = mHybridImagRight;
  for (gr = 0; gr < (10); gr++) {
    transRatio = aaTransRatioSlot[bins2groupMap20[gr]];
    sb = groupBorders20[gr];
    rTmp0 = pRealDelayBuffer[sb];
    iTmp0 = pImagDelayBuffer[sb];
    pRealDelayBuffer[sb] = aaLeftReal[sb];
    pImagDelayBuffer[sb] = aaLeftImag[sb];
    cplxMultDiv2(&rR0, &iR0, rTmp0, iTmp0,
                 aaFractDelayPhaseFactorReSubQmf20[sb],
                 aaFractDelayPhaseFactorImSubQmf20[sb]);
    rR0 <<= 1;
    iR0 <<= 1;
    FIXP_DBL* pAaaRealDelayRBufferSerSubQmf =
      h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerSubQmf[sb];
    FIXP_DBL* pAaaImagDelayRBufferSerSubQmf =
      h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerSubQmf[sb];
    for (m = 0; m < (3); m++) {
      INT tmpDelayRSer = h_ps_d->specificTo.mpeg.aDelayRBufIndexSer[m];
      rTmp0 = pAaaRealDelayRBufferSerSubQmf[tmpDelayRSer];
      iTmp0 = pAaaImagDelayRBufferSerSubQmf[tmpDelayRSer];
      cplxMultDiv2(&rTmp, &iTmp, rTmp0, iTmp0,
                   aaFractDelayPhaseFactorSerReSubQmf20[sb][m],
                   aaFractDelayPhaseFactorSerImSubQmf20[sb][m]);
      rTmp = (rTmp - fMultDiv2(aAllpassLinkDecaySer[m], rR0)) << 1;
      iTmp = (iTmp - fMultDiv2(aAllpassLinkDecaySer[m], iR0)) << 1;
      pAaaRealDelayRBufferSerSubQmf[tmpDelayRSer] =
        rR0 + fMult(aAllpassLinkDecaySer[m], rTmp);
      pAaaImagDelayRBufferSerSubQmf[tmpDelayRSer] =
        iR0 + fMult(aAllpassLinkDecaySer[m], iTmp);
      rR0 = rTmp;
      iR0 = iTmp;
      pAaaRealDelayRBufferSerSubQmf += aAllpassLinkDelaySer[m];
      pAaaImagDelayRBufferSerSubQmf += aAllpassLinkDelaySer[m];
    }
    aaRightReal[sb] = fMult(transRatio, rR0);
    aaRightImag[sb] = fMult(transRatio, iR0);
  }
  scaleValues(mHybridRealLeft, (12), -(2));
  scaleValues(mHybridImagLeft, (12), -(2));
  scaleValues(mHybridRealRight, (12), -(2));
  scaleValues(mHybridImagRight, (12), -(2));
  aaLeftReal = rIntBufferLeft;
  aaLeftImag = iIntBufferLeft;
  aaRightReal = rIntBufferRight;
  aaRightImag = iIntBufferRight;
  pRealDelayBuffer = h_ps_d->specificTo.mpeg.aaRealDelayBufferQmf[TempDelay];
  pImagDelayBuffer = h_ps_d->specificTo.mpeg.aaImagDelayBufferQmf[TempDelay];
  for (gr = (10); gr < ((10) + (12)) - 2; gr++) {
    transRatio = aaTransRatioSlot[bins2groupMap20[gr]];
    for (sb = groupBorders20[gr]; sb < groupBorders20[gr + 1]; sb++) {
      FIXP_DBL resR, resI;
      FIXP_DBL decayScaleFactor = decayScaleFactTable[sb];
      rTmp0 = pRealDelayBuffer[sb];
      iTmp0 = pImagDelayBuffer[sb];
      pRealDelayBuffer[sb] = aaLeftReal[sb];
      pImagDelayBuffer[sb] = aaLeftImag[sb];
      cplxMultDiv2(&rR0, &iR0, rTmp0, iTmp0, aaFractDelayPhaseFactorReQmf[sb],
                   aaFractDelayPhaseFactorImQmf[sb]);
      rR0 <<= 1;
      iR0 <<= 1;
      resR = fMult(decayScaleFactor, rR0);
      resI = fMult(decayScaleFactor, iR0);
      FIXP_DBL* pAaaRealDelayRBufferSerQmf =
        h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerQmf[sb];
      FIXP_DBL* pAaaImagDelayRBufferSerQmf =
        h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerQmf[sb];
      for (m = 0; m < (3); m++) {
        INT tmpDelayRSer = h_ps_d->specificTo.mpeg.aDelayRBufIndexSer[m];
        rTmp0 = pAaaRealDelayRBufferSerQmf[tmpDelayRSer];
        iTmp0 = pAaaImagDelayRBufferSerQmf[tmpDelayRSer];
        cplxMultDiv2(&rTmp, &iTmp, rTmp0, iTmp0,
                     aaFractDelayPhaseFactorSerReQmf[sb][m],
                     aaFractDelayPhaseFactorSerImQmf[sb][m]);
        rTmp = (rTmp - fMultDiv2(aAllpassLinkDecaySer[m], resR)) << 1;
        iTmp = (iTmp - fMultDiv2(aAllpassLinkDecaySer[m], resI)) << 1;
        resR = fMult(decayScaleFactor, rTmp);
        resI = fMult(decayScaleFactor, iTmp);
        pAaaRealDelayRBufferSerQmf[tmpDelayRSer] =
          rR0 + fMult(aAllpassLinkDecaySer[m], resR);
        pAaaImagDelayRBufferSerQmf[tmpDelayRSer] =
          iR0 + fMult(aAllpassLinkDecaySer[m], resI);
        rR0 = rTmp;
        iR0 = iTmp;
        pAaaRealDelayRBufferSerQmf += aAllpassLinkDelaySer[m];
        pAaaImagDelayRBufferSerQmf += aAllpassLinkDelaySer[m];
      }
      aaRightReal[sb] = fMult(transRatio, rR0);
      aaRightImag[sb] = fMult(transRatio, iR0);
    }
  }
  for (gr = 20; gr < ((10) + (12)); gr++) {
    INT sbStart = groupBorders20[gr];
    INT sbStop = groupBorders20[gr + 1];
    UCHAR* pDelayBufIdx =
      &h_ps_d->specificTo.mpeg.aDelayBufIndexDelayQmf[sbStart - (23)];
    transRatio = aaTransRatioSlot[bins2groupMap20[gr]];
    for (sb = sbStart; sb < sbStop; sb++) {
      rR0 =
        h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[*pDelayBufIdx][sb - (23)];
      iR0 =
        h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[*pDelayBufIdx][sb - (23)];
      h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[*pDelayBufIdx][sb - (23)] =
        aaLeftReal[sb];
      h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[*pDelayBufIdx][sb - (23)] =
        aaLeftImag[sb];
      aaRightReal[sb] = fMult(transRatio, rR0);
      aaRightImag[sb] = fMult(transRatio, iR0);
      if (++(*pDelayBufIdx) >= delayIndexQmf[sb]) {
        *pDelayBufIdx = 0;
      }
      pDelayBufIdx++;
    }
  }
  if (++h_ps_d->specificTo.mpeg.delayBufIndex >= (2)) {
    h_ps_d->specificTo.mpeg.delayBufIndex = 0;
  }
  for (m = 0; m < (3); m++) {
    if (++h_ps_d->specificTo.mpeg.aDelayRBufIndexSer[m] >=
        aAllpassLinkDelaySer[m]) {
      h_ps_d->specificTo.mpeg.aDelayRBufIndexSer[m] = 0;
    }
  }
  scaleValues(&rIntBufferLeft[(3)], (64) - (3), -(2));
  scaleValues(&iIntBufferLeft[(3)], (64) - (3), -(2));
  scaleValues(&rIntBufferRight[(3)], (64) - (3), -(2));
  scaleValues(&iIntBufferRight[(3)], (64) - (3), -(2));
}

void initSlotBasedRotation(HANDLE_PS_DEC h_ps_d, int env, int usb) {
  INT group = 0;
  INT bin = 0;
  INT noIidSteps;
  FIXP_SGL invL;
  FIXP_DBL ScaleL, ScaleR;
  FIXP_DBL Alpha, Beta;
  FIXP_DBL h11r, h12r, h21r, h22r;
  const FIXP_DBL* PScaleFactors;
  if (env == 0) {
    if ((usb > h_ps_d->specificTo.mpeg.lastUsb) &&
        h_ps_d->specificTo.mpeg.lastUsb) {
      INT i, k, length;
      for (i = h_ps_d->specificTo.mpeg.lastUsb; i < (23); i++) {
        FDKmemclear(h_ps_d->specificTo.mpeg.aaaRealDelayRBufferSerQmf[i],
                    (12) * sizeof(FIXP_DBL));
        FDKmemclear(h_ps_d->specificTo.mpeg.aaaImagDelayRBufferSerQmf[i],
                    (12) * sizeof(FIXP_DBL));
      }
      for (k = 0; k < (2); k++) {
        FDKmemclear(h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[k],
                    (23) * sizeof(FIXP_DBL));
      }
      length = (usb - (23)) * sizeof(FIXP_DBL);
      if (length > 0) {
        FDKmemclear(h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[0], length);
        FDKmemclear(h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[0], length);
      }
      length = (fixMin((35), (INT)usb) - (23)) * sizeof(FIXP_DBL);
      if (length > 0) {
        for (k = 1; k < h_ps_d->specificTo.mpeg.noSampleDelay; k++) {
          FDKmemclear(h_ps_d->specificTo.mpeg.pAaRealDelayBufferQmf[k], length);
          FDKmemclear(h_ps_d->specificTo.mpeg.pAaImagDelayBufferQmf[k], length);
        }
      }
    }
    h_ps_d->specificTo.mpeg.lastUsb = usb;
  }
  if (h_ps_d->bsData[h_ps_d->processSlot].mpeg.bFineIidQ) {
    PScaleFactors = ScaleFactorsFine;
    noIidSteps = (15);
  }
  else {
    PScaleFactors = ScaleFactors;
    noIidSteps = (7);
  }
  for (group = 0; group < ((10) + (12)); group++) {
    bin = bins2groupMap20[group];
    ScaleR = scaleFactorAt(
      PScaleFactors,
      noIidSteps + h_ps_d->specificTo.mpeg.coef.aaIidIndexMapped[env][bin],
      2 * noIidSteps + 1);
    ScaleL = scaleFactorAt(
      PScaleFactors,
      noIidSteps - h_ps_d->specificTo.mpeg.coef.aaIidIndexMapped[env][bin],
      2 * noIidSteps + 1);
    Beta = fMult(
      fMult(
        (h_ps_d->specificTo.mpeg.coef.aaIccIndexMapped[env][bin] < 0
           ? 0
           : Alphas[h_ps_d->specificTo.mpeg.coef.aaIccIndexMapped[env][bin]]),
        (ScaleR - ScaleL)),
      ((FIXP_DBL)0x5a827980));
    Alpha =
      (h_ps_d->specificTo.mpeg.coef.aaIccIndexMapped[env][bin] < 0
         ? 0
         : Alphas[h_ps_d->specificTo.mpeg.coef.aaIccIndexMapped[env][bin]]) >>
      1;
    {
      FIXP_DBL trigData[4];
      inline_fixp_cos_sin(Beta + Alpha, Beta - Alpha, 2, trigData);
      h11r = fMult(ScaleL, trigData[0]);
      h12r = fMult(ScaleR, trigData[2]);
      h21r = fMult(ScaleL, trigData[1]);
      h22r = fMult(ScaleR, trigData[3]);
    }
    invL = static_cast<int16_t>(
      (GetInvInt(
        h_ps_d->bsData[h_ps_d->processSlot].mpeg.aEnvStartStop[env + 1] -
        h_ps_d->bsData[h_ps_d->processSlot].mpeg.aEnvStartStop[env])) >>
      16);
    h_ps_d->specificTo.mpeg.coef.H11r[group] =
      h_ps_d->specificTo.mpeg.h11rPrev[group];
    h_ps_d->specificTo.mpeg.coef.H12r[group] =
      h_ps_d->specificTo.mpeg.h12rPrev[group];
    h_ps_d->specificTo.mpeg.coef.H21r[group] =
      h_ps_d->specificTo.mpeg.h21rPrev[group];
    h_ps_d->specificTo.mpeg.coef.H22r[group] =
      h_ps_d->specificTo.mpeg.h22rPrev[group];
    h_ps_d->specificTo.mpeg.coef.DeltaH11r[group] =
      fMult(h11r - h_ps_d->specificTo.mpeg.coef.H11r[group], invL);
    h_ps_d->specificTo.mpeg.coef.DeltaH12r[group] =
      fMult(h12r - h_ps_d->specificTo.mpeg.coef.H12r[group], invL);
    h_ps_d->specificTo.mpeg.coef.DeltaH21r[group] =
      fMult(h21r - h_ps_d->specificTo.mpeg.coef.H21r[group], invL);
    h_ps_d->specificTo.mpeg.coef.DeltaH22r[group] =
      fMult(h22r - h_ps_d->specificTo.mpeg.coef.H22r[group], invL);
    h_ps_d->specificTo.mpeg.h11rPrev[group] = h11r;
    h_ps_d->specificTo.mpeg.h12rPrev[group] = h12r;
    h_ps_d->specificTo.mpeg.h21rPrev[group] = h21r;
    h_ps_d->specificTo.mpeg.h22rPrev[group] = h22r;
  }
}

static void applySlotBasedRotation(
  HANDLE_PS_DEC h_ps_d, FIXP_DBL* mHybridRealLeft, FIXP_DBL* mHybridImagLeft,
  FIXP_DBL* QmfLeftReal, FIXP_DBL* QmfLeftImag, FIXP_DBL* mHybridRealRight,
  FIXP_DBL* mHybridImagRight, FIXP_DBL* QmfRightReal, FIXP_DBL* QmfRightImag) {
  INT group;
  INT subband;
  FIXP_DBL* __restrict HybrLeftReal;
  FIXP_DBL* __restrict HybrLeftImag;
  FIXP_DBL* __restrict HybrRightReal;
  FIXP_DBL* __restrict HybrRightImag;
  FIXP_DBL tmpLeft, tmpRight;
  HybrLeftReal = mHybridRealLeft;
  HybrLeftImag = mHybridImagLeft;
  HybrRightReal = mHybridRealRight;
  HybrRightImag = mHybridImagRight;
  for (group = 0; group < (10); group++) {
    h_ps_d->specificTo.mpeg.coef.H11r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH11r[group];
    h_ps_d->specificTo.mpeg.coef.H12r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH12r[group];
    h_ps_d->specificTo.mpeg.coef.H21r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH21r[group];
    h_ps_d->specificTo.mpeg.coef.H22r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH22r[group];
    subband = groupBorders20[group];
    tmpLeft = fMultAddDiv2(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H11r[group],
                                     HybrLeftReal[subband]),
                           h_ps_d->specificTo.mpeg.coef.H21r[group],
                           HybrRightReal[subband]);
    tmpRight = fMultAddDiv2(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H12r[group],
                                      HybrLeftReal[subband]),
                            h_ps_d->specificTo.mpeg.coef.H22r[group],
                            HybrRightReal[subband]);
    HybrLeftReal[subband] = tmpLeft << 1;
    HybrRightReal[subband] = tmpRight << 1;
    tmpLeft = fMultAdd(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H11r[group],
                                 HybrLeftImag[subband]),
                       h_ps_d->specificTo.mpeg.coef.H21r[group],
                       HybrRightImag[subband]);
    tmpRight = fMultAdd(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H12r[group],
                                  HybrLeftImag[subband]),
                        h_ps_d->specificTo.mpeg.coef.H22r[group],
                        HybrRightImag[subband]);
    HybrLeftImag[subband] = tmpLeft;
    HybrRightImag[subband] = tmpRight;
  }
  HybrLeftReal = QmfLeftReal;
  HybrLeftImag = QmfLeftImag;
  HybrRightReal = QmfRightReal;
  HybrRightImag = QmfRightImag;
  for (; group < ((10) + (12)); group++) {
    h_ps_d->specificTo.mpeg.coef.H11r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH11r[group];
    h_ps_d->specificTo.mpeg.coef.H12r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH12r[group];
    h_ps_d->specificTo.mpeg.coef.H21r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH21r[group];
    h_ps_d->specificTo.mpeg.coef.H22r[group] +=
      h_ps_d->specificTo.mpeg.coef.DeltaH22r[group];
    for (subband = groupBorders20[group]; subband < groupBorders20[group + 1];
         subband++) {
      tmpLeft = fMultAdd(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H11r[group],
                                   HybrLeftReal[subband]),
                         h_ps_d->specificTo.mpeg.coef.H21r[group],
                         HybrRightReal[subband]);
      tmpRight = fMultAdd(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H12r[group],
                                    HybrLeftReal[subband]),
                          h_ps_d->specificTo.mpeg.coef.H22r[group],
                          HybrRightReal[subband]);
      HybrLeftReal[subband] = tmpLeft;
      HybrRightReal[subband] = tmpRight;
      tmpLeft = fMultAdd(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H11r[group],
                                   HybrLeftImag[subband]),
                         h_ps_d->specificTo.mpeg.coef.H21r[group],
                         HybrRightImag[subband]);
      tmpRight = fMultAdd(fMultDiv2(h_ps_d->specificTo.mpeg.coef.H12r[group],
                                    HybrLeftImag[subband]),
                          h_ps_d->specificTo.mpeg.coef.H22r[group],
                          HybrRightImag[subband]);
      HybrLeftImag[subband] = tmpLeft;
      HybrRightImag[subband] = tmpRight;
    }
  }
}

void ApplyPsSlot(HANDLE_PS_DEC h_ps_d, FIXP_DBL** rIntBufferLeft,
                 FIXP_DBL** iIntBufferLeft, FIXP_DBL* rIntBufferRight,
                 FIXP_DBL* iIntBufferRight) {
  FIXP_DBL hybridRealLeft[(12)];
  FIXP_DBL hybridImagLeft[(12)];
  FIXP_DBL hybridRealRight[(12)];
  FIXP_DBL hybridImagRight[(12)];
  SCHAR sf_IntBuffer = h_ps_d->sf_IntBuffer;
  FDKmemclear(hybridRealLeft, (12) * sizeof(FIXP_DBL));
  FDKmemclear(hybridImagLeft, (12) * sizeof(FIXP_DBL));
  FDKmemclear(hybridRealRight, (12) * sizeof(FIXP_DBL));
  FDKmemclear(hybridImagRight, (12) * sizeof(FIXP_DBL));
  if (h_ps_d->procFrameBased == 1) {
    h_ps_d->procFrameBased = 0;
    fillHybridDelayLine(rIntBufferLeft, iIntBufferLeft, hybridRealLeft,
                        hybridImagLeft, hybridRealRight, hybridImagRight,
                        &h_ps_d->specificTo.mpeg.hybrid);
  }
  slotBasedHybridAnalysis(rIntBufferLeft[6], iIntBufferLeft[6], hybridRealLeft,
                          hybridImagLeft, &h_ps_d->specificTo.mpeg.hybrid);
  SCHAR hybridScal = h_ps_d->specificTo.mpeg.hybrid.sf_mQmfBuffer;
  deCorrelateSlotBased(h_ps_d, hybridRealLeft, hybridImagLeft, hybridScal,
                       rIntBufferLeft[0], iIntBufferLeft[0], sf_IntBuffer,
                       hybridRealRight, hybridImagRight, rIntBufferRight,
                       iIntBufferRight);
  applySlotBasedRotation(h_ps_d, hybridRealLeft, hybridImagLeft,
                         rIntBufferLeft[0], iIntBufferLeft[0], hybridRealRight,
                         hybridImagRight, rIntBufferRight, iIntBufferRight);
  slotBasedHybridSynthesis(hybridRealLeft, hybridImagLeft, rIntBufferLeft[0],
                           iIntBufferLeft[0], &h_ps_d->specificTo.mpeg.hybrid);
  slotBasedHybridSynthesis(hybridRealRight, hybridImagRight, rIntBufferRight,
                           iIntBufferRight, &h_ps_d->specificTo.mpeg.hybrid);
}

static void assignTimeSlotsPS(FIXP_DBL* bufAdr, FIXP_DBL** bufPtr,
                              const int numSlots, const int numChan) {
  FIXP_DBL* ptr;
  int slot;
  ptr = bufAdr;
  for (slot = 0; slot < numSlots; slot++) {
    bufPtr[slot] = ptr;
    ptr += numChan;
  }
}

}
