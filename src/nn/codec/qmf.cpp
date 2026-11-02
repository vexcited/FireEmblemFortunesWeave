#include "nn/codec/qmf.hpp"
#include "nn/codec/transforms.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using FIXP_QMF = int32_t;
using FIXP_QSS = int32_t;
using FIXP_QAS = int16_t;
using FIXP_PFT = int16_t;
using FIXP_QTW = int16_t;
using INT_PCM = int16_t;
using SCHAR = int8_t;
using INT = int;
using UINT = unsigned;
using LONG = int32_t;
using HANDLE_QMF_FILTER_BANK = QMF_FILTER_BANK*;

void FDKmemclear(void*, unsigned int);
void FDKmemmove(void*, const void*, unsigned int);

constexpr int16_t fixed_sgl(double v) {
  double value = v * 32768.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 32767 ? 32767 : value <= -32768 ? -32768 : int16_t(value);
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

static constexpr int16_t roundedCoefficient(uint32_t bits) {
  int32_t value = static_cast<int32_t>(bits);
  int32_t rounded = ((value >> 15) + 1) >> 1;
  return static_cast<int16_t>(rounded > 32767 ? 32767 : rounded);
}

static int32_t fAbs(int32_t value) {
  return fixp_abs(value);
}

static int32_t fMin(int32_t a, int32_t b) {
  return a < b ? a : b;
}

static int32_t fMultDiv2(int16_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 16);
}

static int32_t fMultDiv2(int16_t a, int16_t b) {
  return static_cast<int32_t>(a) * b;
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 32);
}

template <typename A, typename B> static int32_t fMult(A a, B b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

static void cplxMult(int32_t* real, int32_t* imag, int32_t a, int32_t b,
                     int16_t c, int16_t d) {
  *real = fMult(c, a) - fMult(d, b);
  *imag = fMult(d, a) + fMult(c, b);
}

static void scaleValues(int32_t* dest, const int32_t* src, int count,
                        int shift) {
  shift = fixMax(-31, fixMin(31, shift));
  for (int i = 0; i < count; ++i) {
    dest[i] = scaleValue(src[i], shift);
  }
}

static int32_t saturateRightShift(int32_t value, int scale) {
  value >>= static_cast<unsigned>(scale) & 31;
  return fixMax(-32768, fixMin(32767, value));
}

const FIXP_QTW qmf_phaseshift_cos32[32] = {
  fixed_sgl(0.99932238458835f),  fixed_sgl(0.99390697000236f),
  fixed_sgl(0.98310548743122f),  fixed_sgl(0.96697647104485f),
  fixed_sgl(0.94560732538052f),  fixed_sgl(0.91911385169006f),
  fixed_sgl(0.88763962040285f),  fixed_sgl(0.85135519310527f),
  fixed_sgl(0.81045719825259f),  fixed_sgl(0.76516726562246f),
  fixed_sgl(0.71573082528382f),  fixed_sgl(0.66241577759017f),
  fixed_sgl(0.60551104140433f),  fixed_sgl(0.54532498842205f),
  fixed_sgl(0.48218377207912f),  fixed_sgl(0.41642956009764f),
  fixed_sgl(0.34841868024943f),  fixed_sgl(0.27851968938505f),
  fixed_sgl(0.20711137619222f),  fixed_sgl(0.13458070850713f),
  fixed_sgl(0.06132073630221f),  fixed_sgl(-0.01227153828572f),
  fixed_sgl(-0.08579731234444f), fixed_sgl(-0.15885814333386f),
  fixed_sgl(-0.23105810828067f), fixed_sgl(-0.30200594931923f),
  fixed_sgl(-0.37131719395184f), fixed_sgl(-0.43861623853853f),
  fixed_sgl(-0.50353838372572f), fixed_sgl(-0.56573181078361f),
  fixed_sgl(-0.62485948814239f), fixed_sgl(-0.68060099779545f)};
const FIXP_QTW qmf_phaseshift_sin32[32] = {
  fixed_sgl(0.03680722294136f), fixed_sgl(0.11022220729388f),
  fixed_sgl(0.18303988795514f), fixed_sgl(0.25486565960451f),
  fixed_sgl(0.32531029216226f), fixed_sgl(0.39399204006105f),
  fixed_sgl(0.46053871095824f), fixed_sgl(0.52458968267847f),
  fixed_sgl(0.58579785745644f), fixed_sgl(0.64383154288979f),
  fixed_sgl(0.69837624940897f), fixed_sgl(0.74913639452346f),
  fixed_sgl(0.79583690460888f), fixed_sgl(0.83822470555484f),
  fixed_sgl(0.87607009419541f), fixed_sgl(0.90916798309052f),
  fixed_sgl(0.93733901191257f), fixed_sgl(0.96043051941557f),
  fixed_sgl(0.97831737071963f), fixed_sgl(0.99090263542778f),
  fixed_sgl(0.99811811290015f), fixed_sgl(0.99992470183914f),
  fixed_sgl(0.99631261218278f), fixed_sgl(0.98730141815786f),
  fixed_sgl(0.97293995220556f), fixed_sgl(0.95330604035419f),
  fixed_sgl(0.92850608047322f), fixed_sgl(0.89867446569395f),
  fixed_sgl(0.86397285612159f), fixed_sgl(0.82458930278503f),
  fixed_sgl(0.78073722857209f), fixed_sgl(0.73265427167241f)};
const FIXP_QTW qmf_phaseshift_cos64[64] = {
  roundedCoefficient(0x7ff62181), roundedCoefficient(0x7fa736b3),
  roundedCoefficient(0x7f0991c3), roundedCoefficient(0x7e1d93e9),
  roundedCoefficient(0x7ce3ceb1), roundedCoefficient(0x7b5d039d),
  roundedCoefficient(0x798a23b0), roundedCoefficient(0x776c4eda),
  roundedCoefficient(0x7504d344), roundedCoefficient(0x72552c84),
  roundedCoefficient(0x6f5f02b1), roundedCoefficient(0x6c24295f),
  roundedCoefficient(0x68a69e80), roundedCoefficient(0x64e88925),
  roundedCoefficient(0x60ec382f), roundedCoefficient(0x5cb420df),
  roundedCoefficient(0x5842dd54), roundedCoefficient(0x539b2aef),
  roundedCoefficient(0x4ebfe8a4), roundedCoefficient(0x49b41533),
  roundedCoefficient(0x447acd50), roundedCoefficient(0x3f1749b7),
  roundedCoefficient(0x398cdd32), roundedCoefficient(0x33def287),
  roundedCoefficient(0x2e110a62), roundedCoefficient(0x2826b928),
  roundedCoefficient(0x2223a4c5), roundedCoefficient(0x1c0b826a),
  roundedCoefficient(0x15e21444), roundedCoefficient(0x0fab272b),
  roundedCoefficient(0x096a9049), roundedCoefficient(0x03242abf),
  roundedCoefficient(0xfcdbd541), roundedCoefficient(0xf6956fb7),
  roundedCoefficient(0xf054d8d5), roundedCoefficient(0xea1debbc),
  roundedCoefficient(0xe3f47d96), roundedCoefficient(0xdddc5b3b),
  roundedCoefficient(0xd7d946d8), roundedCoefficient(0xd1eef59e),
  roundedCoefficient(0xcc210d79), roundedCoefficient(0xc67322ce),
  roundedCoefficient(0xc0e8b649), roundedCoefficient(0xbb8532b0),
  roundedCoefficient(0xb64beacd), roundedCoefficient(0xb140175c),
  roundedCoefficient(0xac64d511), roundedCoefficient(0xa7bd22ac),
  roundedCoefficient(0xa34bdf21), roundedCoefficient(0x9f13c7d1),
  roundedCoefficient(0x9b1776db), roundedCoefficient(0x97596180),
  roundedCoefficient(0x93dbd6a1), roundedCoefficient(0x90a0fd4f),
  roundedCoefficient(0x8daad37c), roundedCoefficient(0x8afb2cbc),
  roundedCoefficient(0x8893b126), roundedCoefficient(0x8675dc50),
  roundedCoefficient(0x84a2fc63), roundedCoefficient(0x831c314f),
  roundedCoefficient(0x81e26c17), roundedCoefficient(0x80f66e3d),
  roundedCoefficient(0x8058c94d), roundedCoefficient(0x8009de7f)};
const FIXP_QTW qmf_phaseshift_sin64[64] = {
  roundedCoefficient(0x03242abf), roundedCoefficient(0x096a9049),
  roundedCoefficient(0x0fab272b), roundedCoefficient(0x15e21444),
  roundedCoefficient(0x1c0b826a), roundedCoefficient(0x2223a4c5),
  roundedCoefficient(0x2826b928), roundedCoefficient(0x2e110a62),
  roundedCoefficient(0x33def287), roundedCoefficient(0x398cdd32),
  roundedCoefficient(0x3f1749b7), roundedCoefficient(0x447acd50),
  roundedCoefficient(0x49b41533), roundedCoefficient(0x4ebfe8a4),
  roundedCoefficient(0x539b2aef), roundedCoefficient(0x5842dd54),
  roundedCoefficient(0x5cb420df), roundedCoefficient(0x60ec382f),
  roundedCoefficient(0x64e88925), roundedCoefficient(0x68a69e80),
  roundedCoefficient(0x6c24295f), roundedCoefficient(0x6f5f02b1),
  roundedCoefficient(0x72552c84), roundedCoefficient(0x7504d344),
  roundedCoefficient(0x776c4eda), roundedCoefficient(0x798a23b0),
  roundedCoefficient(0x7b5d039d), roundedCoefficient(0x7ce3ceb1),
  roundedCoefficient(0x7e1d93e9), roundedCoefficient(0x7f0991c3),
  roundedCoefficient(0x7fa736b3), roundedCoefficient(0x7ff62181),
  roundedCoefficient(0x7ff62181), roundedCoefficient(0x7fa736b3),
  roundedCoefficient(0x7f0991c3), roundedCoefficient(0x7e1d93e9),
  roundedCoefficient(0x7ce3ceb1), roundedCoefficient(0x7b5d039d),
  roundedCoefficient(0x798a23b0), roundedCoefficient(0x776c4eda),
  roundedCoefficient(0x7504d344), roundedCoefficient(0x72552c84),
  roundedCoefficient(0x6f5f02b1), roundedCoefficient(0x6c24295f),
  roundedCoefficient(0x68a69e80), roundedCoefficient(0x64e88925),
  roundedCoefficient(0x60ec382f), roundedCoefficient(0x5cb420df),
  roundedCoefficient(0x5842dd54), roundedCoefficient(0x539b2aef),
  roundedCoefficient(0x4ebfe8a4), roundedCoefficient(0x49b41533),
  roundedCoefficient(0x447acd50), roundedCoefficient(0x3f1749b7),
  roundedCoefficient(0x398cdd32), roundedCoefficient(0x33def287),
  roundedCoefficient(0x2e110a62), roundedCoefficient(0x2826b928),
  roundedCoefficient(0x2223a4c5), roundedCoefficient(0x1c0b826a),
  roundedCoefficient(0x15e21444), roundedCoefficient(0x0fab272b),
  roundedCoefficient(0x096a9049), roundedCoefficient(0x03242abf)};
const FIXP_QTW qmf_phaseshift_cos_downsamp32[] = {
  roundedCoefficient(0x7fd8878e), roundedCoefficient(0x7e9d55fc),
  roundedCoefficient(0x7c29fbee), roundedCoefficient(0x78848414),
  roundedCoefficient(0x73b5ebd1), roundedCoefficient(0x6dca0d14),
  roundedCoefficient(0x66cf8120), roundedCoefficient(0x5ed77c8a),
  roundedCoefficient(0x55f5a4d2), roundedCoefficient(0x4c3fdff4),
  roundedCoefficient(0x41ce1e65), roundedCoefficient(0x36ba2014),
  roundedCoefficient(0x2b1f34eb), roundedCoefficient(0x1f19f97b),
  roundedCoefficient(0x12c8106f), roundedCoefficient(0x0647d97c),
  roundedCoefficient(0xf9b82684), roundedCoefficient(0xed37ef91),
  roundedCoefficient(0xe0e60685), roundedCoefficient(0xd4e0cb15),
  roundedCoefficient(0xc945dfec), roundedCoefficient(0xbe31e19b),
  roundedCoefficient(0xb3c0200c), roundedCoefficient(0xaa0a5b2e),
  roundedCoefficient(0xa1288376), roundedCoefficient(0x99307ee0),
  roundedCoefficient(0x9235f2ec), roundedCoefficient(0x8c4a142f),
  roundedCoefficient(0x877b7bec), roundedCoefficient(0x83d60412),
  roundedCoefficient(0x8162aa04), roundedCoefficient(0x80277872),
};
const FIXP_QTW qmf_phaseshift_sin_downsamp32[] = {
  roundedCoefficient(0x0647d97c), roundedCoefficient(0x12c8106f),
  roundedCoefficient(0x1f19f97b), roundedCoefficient(0x2b1f34eb),
  roundedCoefficient(0x36ba2014), roundedCoefficient(0x41ce1e65),
  roundedCoefficient(0x4c3fdff4), roundedCoefficient(0x55f5a4d2),
  roundedCoefficient(0x5ed77c8a), roundedCoefficient(0x66cf8120),
  roundedCoefficient(0x6dca0d14), roundedCoefficient(0x73b5ebd1),
  roundedCoefficient(0x78848414), roundedCoefficient(0x7c29fbee),
  roundedCoefficient(0x7e9d55fc), roundedCoefficient(0x7fd8878e),
  roundedCoefficient(0x7fd8878e), roundedCoefficient(0x7e9d55fc),
  roundedCoefficient(0x7c29fbee), roundedCoefficient(0x78848414),
  roundedCoefficient(0x73b5ebd1), roundedCoefficient(0x6dca0d14),
  roundedCoefficient(0x66cf8120), roundedCoefficient(0x5ed77c8a),
  roundedCoefficient(0x55f5a4d2), roundedCoefficient(0x4c3fdff4),
  roundedCoefficient(0x41ce1e65), roundedCoefficient(0x36ba2014),
  roundedCoefficient(0x2b1f34eb), roundedCoefficient(0x1f19f97b),
  roundedCoefficient(0x12c8106f), roundedCoefficient(0x0647d97c),
};
const FIXP_QTW qmf_phaseshift_cos32_cldfb[32] = {
  fixed_sgl(-7.071067e-01), fixed_sgl(7.071070e-01),  fixed_sgl(7.071064e-01),
  fixed_sgl(-7.071073e-01), fixed_sgl(-7.071061e-01), fixed_sgl(7.071076e-01),
  fixed_sgl(7.071058e-01),  fixed_sgl(-7.071080e-01), fixed_sgl(-7.071055e-01),
  fixed_sgl(7.071083e-01),  fixed_sgl(7.071052e-01),  fixed_sgl(-7.071086e-01),
  fixed_sgl(-7.071049e-01), fixed_sgl(7.071089e-01),  fixed_sgl(7.071046e-01),
  fixed_sgl(-7.071092e-01), fixed_sgl(-7.071042e-01), fixed_sgl(7.071095e-01),
  fixed_sgl(7.071039e-01),  fixed_sgl(-7.071098e-01), fixed_sgl(-7.071036e-01),
  fixed_sgl(7.071101e-01),  fixed_sgl(7.071033e-01),  fixed_sgl(-7.071104e-01),
  fixed_sgl(-7.071030e-01), fixed_sgl(7.071107e-01),  fixed_sgl(7.071027e-01),
  fixed_sgl(-7.071111e-01), fixed_sgl(-7.071024e-01), fixed_sgl(7.071114e-01),
  fixed_sgl(7.071021e-01),  fixed_sgl(-7.071117e-01),
};
const FIXP_QTW qmf_phaseshift_sin32_cldfb[32] = {
  fixed_sgl(7.071068e-01),  fixed_sgl(7.071065e-01),  fixed_sgl(-7.071072e-01),
  fixed_sgl(-7.071062e-01), fixed_sgl(7.071075e-01),  fixed_sgl(7.071059e-01),
  fixed_sgl(-7.071078e-01), fixed_sgl(-7.071056e-01), fixed_sgl(7.071081e-01),
  fixed_sgl(7.071053e-01),  fixed_sgl(-7.071084e-01), fixed_sgl(-7.071050e-01),
  fixed_sgl(7.071087e-01),  fixed_sgl(7.071047e-01),  fixed_sgl(-7.071090e-01),
  fixed_sgl(-7.071044e-01), fixed_sgl(7.071093e-01),  fixed_sgl(7.071041e-01),
  fixed_sgl(-7.071096e-01), fixed_sgl(-7.071038e-01), fixed_sgl(7.071099e-01),
  fixed_sgl(7.071034e-01),  fixed_sgl(-7.071103e-01), fixed_sgl(-7.071031e-01),
  fixed_sgl(7.071106e-01),  fixed_sgl(7.071028e-01),  fixed_sgl(-7.071109e-01),
  fixed_sgl(-7.071025e-01), fixed_sgl(7.071112e-01),  fixed_sgl(7.071022e-01),
  fixed_sgl(-7.071115e-01), fixed_sgl(-7.071019e-01),
};
const FIXP_QTW qmf_phaseshift_cos64_cldfb[64] = {
  fixed_sgl(7.071068e-01),  fixed_sgl(-7.071066e-01), fixed_sgl(-7.071070e-01),
  fixed_sgl(7.071065e-01),  fixed_sgl(7.071072e-01),  fixed_sgl(-7.071063e-01),
  fixed_sgl(-7.071074e-01), fixed_sgl(7.071061e-01),  fixed_sgl(7.071075e-01),
  fixed_sgl(-7.071059e-01), fixed_sgl(-7.071078e-01), fixed_sgl(7.071057e-01),
  fixed_sgl(7.071080e-01),  fixed_sgl(-7.071055e-01), fixed_sgl(-7.071081e-01),
  fixed_sgl(7.071053e-01),  fixed_sgl(7.071083e-01),  fixed_sgl(-7.071052e-01),
  fixed_sgl(-7.071085e-01), fixed_sgl(7.071050e-01),  fixed_sgl(7.071087e-01),
  fixed_sgl(-7.071048e-01), fixed_sgl(-7.071089e-01), fixed_sgl(7.071046e-01),
  fixed_sgl(7.071090e-01),  fixed_sgl(-7.071044e-01), fixed_sgl(-7.071092e-01),
  fixed_sgl(7.071042e-01),  fixed_sgl(7.071095e-01),  fixed_sgl(-7.071040e-01),
  fixed_sgl(-7.071096e-01), fixed_sgl(7.071038e-01),  fixed_sgl(7.071098e-01),
  fixed_sgl(-7.071037e-01), fixed_sgl(-7.071100e-01), fixed_sgl(7.071035e-01),
  fixed_sgl(7.071102e-01),  fixed_sgl(-7.071033e-01), fixed_sgl(-7.071103e-01),
  fixed_sgl(7.071031e-01),  fixed_sgl(7.071105e-01),  fixed_sgl(-7.071030e-01),
  fixed_sgl(-7.071107e-01), fixed_sgl(7.071028e-01),  fixed_sgl(7.071109e-01),
  fixed_sgl(-7.071025e-01), fixed_sgl(-7.071111e-01), fixed_sgl(7.071024e-01),
  fixed_sgl(7.071113e-01),  fixed_sgl(-7.071022e-01), fixed_sgl(-7.071115e-01),
  fixed_sgl(7.071020e-01),  fixed_sgl(7.071117e-01),  fixed_sgl(-7.071018e-01),
  fixed_sgl(-7.071118e-01), fixed_sgl(7.071016e-01),  fixed_sgl(7.071120e-01),
  fixed_sgl(-7.071015e-01), fixed_sgl(-7.071122e-01), fixed_sgl(7.071013e-01),
  fixed_sgl(7.071124e-01),  fixed_sgl(-7.071011e-01), fixed_sgl(-7.071126e-01),
  fixed_sgl(7.071009e-01),
};
const FIXP_QTW qmf_phaseshift_sin64_cldfb[64] = {
  fixed_sgl(7.071067e-01),  fixed_sgl(7.071069e-01),  fixed_sgl(-7.071065e-01),
  fixed_sgl(-7.071071e-01), fixed_sgl(7.071064e-01),  fixed_sgl(7.071073e-01),
  fixed_sgl(-7.071062e-01), fixed_sgl(-7.071075e-01), fixed_sgl(7.071060e-01),
  fixed_sgl(7.071077e-01),  fixed_sgl(-7.071058e-01), fixed_sgl(-7.071078e-01),
  fixed_sgl(7.071056e-01),  fixed_sgl(7.071080e-01),  fixed_sgl(-7.071055e-01),
  fixed_sgl(-7.071082e-01), fixed_sgl(7.071053e-01),  fixed_sgl(7.071084e-01),
  fixed_sgl(-7.071050e-01), fixed_sgl(-7.071086e-01), fixed_sgl(7.071049e-01),
  fixed_sgl(7.071088e-01),  fixed_sgl(-7.071047e-01), fixed_sgl(-7.071090e-01),
  fixed_sgl(7.071045e-01),  fixed_sgl(7.071092e-01),  fixed_sgl(-7.071043e-01),
  fixed_sgl(-7.071093e-01), fixed_sgl(7.071041e-01),  fixed_sgl(7.071095e-01),
  fixed_sgl(-7.071040e-01), fixed_sgl(-7.071097e-01), fixed_sgl(7.071038e-01),
  fixed_sgl(7.071099e-01),  fixed_sgl(-7.071036e-01), fixed_sgl(-7.071100e-01),
  fixed_sgl(7.071034e-01),  fixed_sgl(7.071103e-01),  fixed_sgl(-7.071032e-01),
  fixed_sgl(-7.071105e-01), fixed_sgl(7.071030e-01),  fixed_sgl(7.071106e-01),
  fixed_sgl(-7.071028e-01), fixed_sgl(-7.071108e-01), fixed_sgl(7.071027e-01),
  fixed_sgl(7.071110e-01),  fixed_sgl(-7.071025e-01), fixed_sgl(-7.071112e-01),
  fixed_sgl(7.071023e-01),  fixed_sgl(7.071114e-01),  fixed_sgl(-7.071021e-01),
  fixed_sgl(-7.071115e-01), fixed_sgl(7.071019e-01),  fixed_sgl(7.071117e-01),
  fixed_sgl(-7.071017e-01), fixed_sgl(-7.071120e-01), fixed_sgl(7.071015e-01),
  fixed_sgl(7.071121e-01),  fixed_sgl(-7.071013e-01), fixed_sgl(-7.071123e-01),
  fixed_sgl(7.071012e-01),  fixed_sgl(7.071125e-01),  fixed_sgl(-7.071010e-01),
  fixed_sgl(-7.071127e-01),
};
const FIXP_PFT qmf_64[325 + 5] = {
  roundedCoefficient(0x00000000), roundedCoefficient(0x01b2e41d),
  roundedCoefficient(0x2e3a7532), roundedCoefficient(0xd1c58ace),
  roundedCoefficient(0xfe4d1be3), roundedCoefficient(0xffede50e),
  roundedCoefficient(0x01d78bfc), roundedCoefficient(0x2faa221c),
  roundedCoefficient(0xd3337b3e), roundedCoefficient(0xfe70b8d1),
  roundedCoefficient(0xffed978a), roundedCoefficient(0x01fd3ba0),
  roundedCoefficient(0x311af3a4), roundedCoefficient(0xd49fd55f),
  roundedCoefficient(0xfe933dc0), roundedCoefficient(0xffefc9b9),
  roundedCoefficient(0x02244a24), roundedCoefficient(0x328cc6f0),
  roundedCoefficient(0xd60a46e6), roundedCoefficient(0xfeb48d0d),
  roundedCoefficient(0xfff0065d), roundedCoefficient(0x024bf7a1),
  roundedCoefficient(0x33ff670e), roundedCoefficient(0xd7722f04),
  roundedCoefficient(0xfed4bec3), roundedCoefficient(0xffeff6ca),
  roundedCoefficient(0x0274ba43), roundedCoefficient(0x3572ec70),
  roundedCoefficient(0xd8d7f220), roundedCoefficient(0xfef3f6ab),
  roundedCoefficient(0xffef7b8b), roundedCoefficient(0x029e35b4),
  roundedCoefficient(0x36e69691), roundedCoefficient(0xda3b176a),
  roundedCoefficient(0xff120d70), roundedCoefficient(0xffeedfa4),
  roundedCoefficient(0x02c89901), roundedCoefficient(0x385a49c3),
  roundedCoefficient(0xdb9b5b12), roundedCoefficient(0xff2ef725),
  roundedCoefficient(0xffee1650), roundedCoefficient(0x02f3e48d),
  roundedCoefficient(0x39ce0477), roundedCoefficient(0xdcf898fb),
  roundedCoefficient(0xff4aabc8), roundedCoefficient(0xffed651d),
  roundedCoefficient(0x03201116), roundedCoefficient(0x3b415115),
  roundedCoefficient(0xde529087), roundedCoefficient(0xff6542d1),
  roundedCoefficient(0xffecc31b), roundedCoefficient(0x034d01f1),
  roundedCoefficient(0x3cb41219), roundedCoefficient(0xdfa93ab5),
  roundedCoefficient(0xff7ee3f1), roundedCoefficient(0xffebe77b),
  roundedCoefficient(0x037ad438), roundedCoefficient(0x3e25b17e),
  roundedCoefficient(0xe0fc421e), roundedCoefficient(0xff975c01),
  roundedCoefficient(0xffeb50b2), roundedCoefficient(0x03a966bb),
  roundedCoefficient(0x3f962fb8), roundedCoefficient(0xe24b8f67),
  roundedCoefficient(0xffaea5d6), roundedCoefficient(0xffea9192),
  roundedCoefficient(0x03d8afe6), roundedCoefficient(0x41058bc5),
  roundedCoefficient(0xe396a45d), roundedCoefficient(0xffc4e365),
  roundedCoefficient(0xffe9ca76), roundedCoefficient(0x04083fec),
  roundedCoefficient(0x4272a385), roundedCoefficient(0xe4de0cb0),
  roundedCoefficient(0xffda17f2), roundedCoefficient(0xffe940f4),
  roundedCoefficient(0x043889c6), roundedCoefficient(0x43de620a),
  roundedCoefficient(0xe620c476), roundedCoefficient(0xffee183b),
  roundedCoefficient(0xffe88ba8), roundedCoefficient(0x04694101),
  roundedCoefficient(0x4547daea), roundedCoefficient(0xe75f8bb8),
  roundedCoefficient(0x0000e790), roundedCoefficient(0xffe83a07),
  roundedCoefficient(0x049aa82f), roundedCoefficient(0x46aea856),
  roundedCoefficient(0xe89971b7), roundedCoefficient(0x00131c75),
  roundedCoefficient(0xffe79e16), roundedCoefficient(0x04cc2fcf),
  roundedCoefficient(0x4812f848), roundedCoefficient(0xe9cea84a),
  roundedCoefficient(0x0023b989), roundedCoefficient(0xffe7746e),
  roundedCoefficient(0x04fe20be), roundedCoefficient(0x4973fef1),
  roundedCoefficient(0xeafee7f1), roundedCoefficient(0x0033b927),
  roundedCoefficient(0xffe6d466), roundedCoefficient(0x05303f88),
  roundedCoefficient(0x4ad237a2), roundedCoefficient(0xec2a3f60),
  roundedCoefficient(0x00426f36), roundedCoefficient(0xffe6afed),
  roundedCoefficient(0x05626209), roundedCoefficient(0x4c2ca3df),
  roundedCoefficient(0xed50a31d), roundedCoefficient(0x00504f41),
  roundedCoefficient(0xffe65416), roundedCoefficient(0x05950122),
  roundedCoefficient(0x4d83976c), roundedCoefficient(0xee71b2fe),
  roundedCoefficient(0x005d36df), roundedCoefficient(0xffe681c6),
  roundedCoefficient(0x05c76fed), roundedCoefficient(0x4ed62be2),
  roundedCoefficient(0xef8d4d7b), roundedCoefficient(0x006928a0),
  roundedCoefficient(0xffe66dd0), roundedCoefficient(0x05f9c051),
  roundedCoefficient(0x5024d70e), roundedCoefficient(0xf0a3959f),
  roundedCoefficient(0x007400b8), roundedCoefficient(0xffe66fab),
  roundedCoefficient(0x062bf5ec), roundedCoefficient(0x516eefb8),
  roundedCoefficient(0xf1b461ab), roundedCoefficient(0x007e0393),
  roundedCoefficient(0xffe69423), roundedCoefficient(0x065dd56a),
  roundedCoefficient(0x52b449dd), roundedCoefficient(0xf2bf6ea4),
  roundedCoefficient(0x00872c63), roundedCoefficient(0xffe6fed4),
  roundedCoefficient(0x068f8b44), roundedCoefficient(0x53f495a9),
  roundedCoefficient(0xf3c4e887), roundedCoefficient(0x008f87aa),
  roundedCoefficient(0xffe75361), roundedCoefficient(0x06c0f0c0),
  roundedCoefficient(0x552f8ff6), roundedCoefficient(0xf4c473c6),
  roundedCoefficient(0x0096dcc2), roundedCoefficient(0xffe80414),
  roundedCoefficient(0x06f1825d), roundedCoefficient(0x56654bdc),
  roundedCoefficient(0xf5be0fa9), roundedCoefficient(0x009da526),
  roundedCoefficient(0xffe85b4a), roundedCoefficient(0x0721bf22),
  roundedCoefficient(0x579505f4), roundedCoefficient(0xf6b1f3c3),
  roundedCoefficient(0x00a3508f), roundedCoefficient(0xffe954d0),
  roundedCoefficient(0x075112a2), roundedCoefficient(0x58befacc),
  roundedCoefficient(0xf79fa13a), roundedCoefficient(0x00a85e94),
  roundedCoefficient(0xffea353a), roundedCoefficient(0x077fedb3),
  roundedCoefficient(0x59e2f69e), roundedCoefficient(0xf887507c),
  roundedCoefficient(0x00acbd2f), roundedCoefficient(0xffeb3849),
  roundedCoefficient(0x07ad8c26), roundedCoefficient(0x5b001db7),
  roundedCoefficient(0xf96916f5), roundedCoefficient(0x00b06b68),
  roundedCoefficient(0xffec8409), roundedCoefficient(0x07da2b7f),
  roundedCoefficient(0x5c16d0ae), roundedCoefficient(0xfa44a069),
  roundedCoefficient(0x00b36acd), roundedCoefficient(0xffedc418),
  roundedCoefficient(0x08061671), roundedCoefficient(0x5d26be9b),
  roundedCoefficient(0xfb19b7bd), roundedCoefficient(0x00b58c8d),
  roundedCoefficient(0xffef2395), roundedCoefficient(0x08303897),
  roundedCoefficient(0x5e2f6366), roundedCoefficient(0xfbe8f5bd),
  roundedCoefficient(0x00b73ab0), roundedCoefficient(0xfff0e7ef),
  roundedCoefficient(0x08594887), roundedCoefficient(0x5f30ff5e),
  roundedCoefficient(0xfcb1d740), roundedCoefficient(0x00b85f70),
  roundedCoefficient(0xfff294c3), roundedCoefficient(0x0880ffdd),
  roundedCoefficient(0x602b0c7e), roundedCoefficient(0xfd7475d8),
  roundedCoefficient(0x00b8c6b0), roundedCoefficient(0xfff48700),
  roundedCoefficient(0x08a75da4), roundedCoefficient(0x611d58a2),
  roundedCoefficient(0xfe310657), roundedCoefficient(0x00b8fe0d),
  roundedCoefficient(0xfff681d6), roundedCoefficient(0x08cb4e23),
  roundedCoefficient(0x6207f21f), roundedCoefficient(0xfee723c6),
  roundedCoefficient(0x00b8394b), roundedCoefficient(0xfff91fc9),
  roundedCoefficient(0x08edfeaa), roundedCoefficient(0x62ea6473),
  roundedCoefficient(0xff96db8f), roundedCoefficient(0x00b74c37),
  roundedCoefficient(0xfffb42b0), roundedCoefficient(0x090ec1fc),
  roundedCoefficient(0x63c45243), roundedCoefficient(0x0040c497),
  roundedCoefficient(0x00b5c867), roundedCoefficient(0xfffdfa24),
  roundedCoefficient(0x092d7970), roundedCoefficient(0x64964062),
  roundedCoefficient(0x00e42fa2), roundedCoefficient(0x00b3d15c),
  roundedCoefficient(0x00007134), roundedCoefficient(0x0949eaac),
  roundedCoefficient(0x655f63f1), roundedCoefficient(0x01816e06),
  roundedCoefficient(0x00b1978d), roundedCoefficient(0x00039609),
  roundedCoefficient(0x0963ed46), roundedCoefficient(0x661fd6b7),
  roundedCoefficient(0x02186a92), roundedCoefficient(0x00af374c),
  roundedCoefficient(0x0006b1cf), roundedCoefficient(0x097c1ee8),
  roundedCoefficient(0x66d76724), roundedCoefficient(0x02a99097),
  roundedCoefficient(0x00abe79e), roundedCoefficient(0x0009aa3f),
  roundedCoefficient(0x099140a7), roundedCoefficient(0x6785c24c),
  roundedCoefficient(0x03343534), roundedCoefficient(0x00a8739d),
  roundedCoefficient(0x000d31b5), roundedCoefficient(0x09a3e163),
  roundedCoefficient(0x682b39a3), roundedCoefficient(0x03b8f8dc),
  roundedCoefficient(0x00a520bb), roundedCoefficient(0x0010bc63),
  roundedCoefficient(0x09b3d77f), roundedCoefficient(0x68c7269b),
  roundedCoefficient(0x0437fb0a), roundedCoefficient(0x00a1039c),
  roundedCoefficient(0x001471f8), roundedCoefficient(0x09c0e59f),
  roundedCoefficient(0x6959709c), roundedCoefficient(0x04b0adcb),
  roundedCoefficient(0x009d10bf), roundedCoefficient(0x0018703f),
  roundedCoefficient(0x09cab9f2), roundedCoefficient(0x69e29783),
  roundedCoefficient(0x05237f9d), roundedCoefficient(0x0098b855),
  roundedCoefficient(0x001c3549), roundedCoefficient(0x09d19ca9),
  roundedCoefficient(0x6a619c5e), roundedCoefficient(0x0590a67d),
  roundedCoefficient(0x009424c6), roundedCoefficient(0x002064f8),
  roundedCoefficient(0x09d52709), roundedCoefficient(0x6ad73e8d),
  roundedCoefficient(0x05f7fb90), roundedCoefficient(0x008f4bfd),
  roundedCoefficient(0x0024dd50), roundedCoefficient(0x09d5560b),
  roundedCoefficient(0x6b42a863), roundedCoefficient(0x06593912),
  roundedCoefficient(0x008a7dd7), roundedCoefficient(0x00293718),
  roundedCoefficient(0x09d1fa23), roundedCoefficient(0x6ba4629e),
  roundedCoefficient(0x06b559c3), roundedCoefficient(0x0085c217),
  roundedCoefficient(0x002d8e42), roundedCoefficient(0x09caeb0f),
  roundedCoefficient(0x6bfbdd97), roundedCoefficient(0x070bbf58),
  roundedCoefficient(0x00807994), roundedCoefficient(0x00329ab6),
  roundedCoefficient(0x09c018ce), roundedCoefficient(0x6c492216),
  roundedCoefficient(0x075ca90c), roundedCoefficient(0x007b3875),
  roundedCoefficient(0x003745f9), roundedCoefficient(0x09b18a1d),
  roundedCoefficient(0x6c8c4c79), roundedCoefficient(0x07a8127d),
  roundedCoefficient(0x0075fded), roundedCoefficient(0x003c1fa4),
  roundedCoefficient(0x099ec3dc), roundedCoefficient(0x6cc59baa),
  roundedCoefficient(0x07ee507c), roundedCoefficient(0x0070c8a5),
  roundedCoefficient(0x004103f5), roundedCoefficient(0x09881dc5),
  roundedCoefficient(0x6cf4073d), roundedCoefficient(0x082f552e),
  roundedCoefficient(0x006b47fa), roundedCoefficient(0x00465348),
  roundedCoefficient(0x096d0e21), roundedCoefficient(0x6d18520d),
  roundedCoefficient(0x086b1eec), roundedCoefficient(0x0065fde5),
  roundedCoefficient(0x004b6c46), roundedCoefficient(0x094d7ec2),
  roundedCoefficient(0x6d32730e), roundedCoefficient(0x08a24899),
  roundedCoefficient(0x006090c4), roundedCoefficient(0x0050b177),
  roundedCoefficient(0x09299ead), roundedCoefficient(0x6d41d963),
  roundedCoefficient(0x08d3e41b), roundedCoefficient(0x005b5371),
  roundedCoefficient(0x0055dba1), roundedCoefficient(0x09015651),
  roundedCoefficient(0x6d474e1d), roundedCoefficient(0x09015651),
  roundedCoefficient(0x0055dba1), roundedCoefficient(0xfe4d1be3),
  roundedCoefficient(0xd1c58ace), roundedCoefficient(0x2e3a7532),
  roundedCoefficient(0x01b2e41d), roundedCoefficient(0x00000000),
};
const FIXP_PFT qmf_cldfb_640[640] = {
  fixed_sgl((6.571760e-07) / 2.0f),  fixed_sgl((-8.010079e-06) / 2.0f),
  fixed_sgl((-1.250743e-03) / 2.0f), fixed_sgl((8.996371e-03) / 2.0f),
  fixed_sgl((5.128557e-01) / 2.0f),  fixed_sgl((4.118360e-07) / 2.0f),
  fixed_sgl((-1.469933e-05) / 2.0f), fixed_sgl((-1.194743e-03) / 2.0f),
  fixed_sgl((9.640299e-03) / 2.0f),  fixed_sgl((5.299510e-01) / 2.0f),
  fixed_sgl((8.109952e-07) / 2.0f),  fixed_sgl((4.840578e-06) / 2.0f),
  fixed_sgl((-1.151796e-03) / 2.0f), fixed_sgl((1.033126e-02) / 2.0f),
  fixed_sgl((5.470652e-01) / 2.0f),  fixed_sgl((7.099633e-07) / 2.0f),
  fixed_sgl((7.167101e-06) / 2.0f),  fixed_sgl((-1.099001e-03) / 2.0f),
  fixed_sgl((1.106959e-02) / 2.0f),  fixed_sgl((5.641523e-01) / 2.0f),
  fixed_sgl((6.834210e-07) / 2.0f),  fixed_sgl((1.088325e-05) / 2.0f),
  fixed_sgl((-1.047655e-03) / 2.0f), fixed_sgl((1.186211e-02) / 2.0f),
  fixed_sgl((5.811993e-01) / 2.0f),  fixed_sgl((4.292862e-07) / 2.0f),
  fixed_sgl((1.013260e-05) / 2.0f),  fixed_sgl((-9.862027e-04) / 2.0f),
  fixed_sgl((1.270747e-02) / 2.0f),  fixed_sgl((5.981877e-01) / 2.0f),
  fixed_sgl((-5.426597e-09) / 2.0f), fixed_sgl((5.869707e-06) / 2.0f),
  fixed_sgl((-9.294665e-04) / 2.0f), fixed_sgl((1.361072e-02) / 2.0f),
  fixed_sgl((6.151031e-01) / 2.0f),  fixed_sgl((6.355303e-08) / 2.0f),
  fixed_sgl((1.125135e-05) / 2.0f),  fixed_sgl((-9.767709e-04) / 2.0f),
  fixed_sgl((1.456209e-02) / 2.0f),  fixed_sgl((6.319284e-01) / 2.0f),
  fixed_sgl((5.490570e-07) / 2.0f),  fixed_sgl((2.015445e-05) / 2.0f),
  fixed_sgl((-1.040598e-03) / 2.0f), fixed_sgl((1.557759e-02) / 2.0f),
  fixed_sgl((6.486438e-01) / 2.0f),  fixed_sgl((1.620171e-06) / 2.0f),
  fixed_sgl((2.800456e-05) / 2.0f),  fixed_sgl((-1.146268e-03) / 2.0f),
  fixed_sgl((1.665188e-02) / 2.0f),  fixed_sgl((6.652304e-01) / 2.0f),
  fixed_sgl((-6.025110e-10) / 2.0f), fixed_sgl((8.975978e-06) / 2.0f),
  fixed_sgl((-1.292866e-03) / 2.0f), fixed_sgl((1.778249e-02) / 2.0f),
  fixed_sgl((6.816668e-01) / 2.0f),  fixed_sgl((-6.325664e-10) / 2.0f),
  fixed_sgl((8.563820e-06) / 2.0f),  fixed_sgl((-1.196638e-03) / 2.0f),
  fixed_sgl((1.897506e-02) / 2.0f),  fixed_sgl((6.979337e-01) / 2.0f),
  fixed_sgl((-4.013525e-09) / 2.0f), fixed_sgl((1.168895e-05) / 2.0f),
  fixed_sgl((-9.726699e-04) / 2.0f), fixed_sgl((2.023525e-02) / 2.0f),
  fixed_sgl((7.140087e-01) / 2.0f),  fixed_sgl((-4.244091e-09) / 2.0f),
  fixed_sgl((7.300589e-06) / 2.0f),  fixed_sgl((-8.029620e-04) / 2.0f),
  fixed_sgl((2.156305e-02) / 2.0f),  fixed_sgl((7.298746e-01) / 2.0f),
  fixed_sgl((-1.846548e-08) / 2.0f), fixed_sgl((3.965364e-06) / 2.0f),
  fixed_sgl((-6.754936e-04) / 2.0f), fixed_sgl((2.296471e-02) / 2.0f),
  fixed_sgl((7.455112e-01) / 2.0f),  fixed_sgl((-3.870537e-09) / 2.0f),
  fixed_sgl((1.374896e-06) / 2.0f),  fixed_sgl((-5.791145e-04) / 2.0f),
  fixed_sgl((2.443434e-02) / 2.0f),  fixed_sgl((7.609051e-01) / 2.0f),
  fixed_sgl((-8.883499e-10) / 2.0f), fixed_sgl((3.798520e-07) / 2.0f),
  fixed_sgl((-4.733148e-04) / 2.0f), fixed_sgl((2.597957e-02) / 2.0f),
  fixed_sgl((7.760386e-01) / 2.0f),  fixed_sgl((5.303528e-08) / 2.0f),
  fixed_sgl((4.469729e-06) / 2.0f),  fixed_sgl((-2.998740e-04) / 2.0f),
  fixed_sgl((2.760091e-02) / 2.0f),  fixed_sgl((7.908995e-01) / 2.0f),
  fixed_sgl((7.391974e-08) / 2.0f),  fixed_sgl((2.461877e-05) / 2.0f),
  fixed_sgl((7.882620e-05) / 2.0f),  fixed_sgl((2.931526e-02) / 2.0f),
  fixed_sgl((8.054701e-01) / 2.0f),  fixed_sgl((1.723217e-09) / 2.0f),
  fixed_sgl((4.005269e-05) / 2.0f),  fixed_sgl((4.708010e-04) / 2.0f),
  fixed_sgl((3.110861e-02) / 2.0f),  fixed_sgl((8.197387e-01) / 2.0f),
  fixed_sgl((2.443085e-07) / 2.0f),  fixed_sgl((5.272982e-05) / 2.0f),
  fixed_sgl((8.089812e-04) / 2.0f),  fixed_sgl((3.298151e-02) / 2.0f),
  fixed_sgl((8.336864e-01) / 2.0f),  fixed_sgl((1.387567e-08) / 2.0f),
  fixed_sgl((4.939392e-05) / 2.0f),  fixed_sgl((1.127142e-03) / 2.0f),
  fixed_sgl((3.493300e-02) / 2.0f),  fixed_sgl((8.472987e-01) / 2.0f),
  fixed_sgl((-5.690531e-06) / 2.0f), fixed_sgl((-4.256442e-05) / 2.0f),
  fixed_sgl((1.417367e-03) / 2.0f),  fixed_sgl((3.696343e-02) / 2.0f),
  fixed_sgl((8.605543e-01) / 2.0f),  fixed_sgl((3.629067e-06) / 2.0f),
  fixed_sgl((6.582328e-05) / 2.0f),  fixed_sgl((1.725030e-03) / 2.0f),
  fixed_sgl((3.907138e-02) / 2.0f),  fixed_sgl((8.734367e-01) / 2.0f),
  fixed_sgl((-5.393556e-08) / 2.0f), fixed_sgl((6.481921e-05) / 2.0f),
  fixed_sgl((1.948069e-03) / 2.0f),  fixed_sgl((4.125570e-02) / 2.0f),
  fixed_sgl((8.859232e-01) / 2.0f),  fixed_sgl((1.349944e-07) / 2.0f),
  fixed_sgl((3.367998e-05) / 2.0f),  fixed_sgl((2.033465e-03) / 2.0f),
  fixed_sgl((4.355568e-02) / 2.0f),  fixed_sgl((8.979959e-01) / 2.0f),
  fixed_sgl((7.326611e-09) / 2.0f),  fixed_sgl((4.694252e-05) / 2.0f),
  fixed_sgl((2.239143e-03) / 2.0f),  fixed_sgl((4.599068e-02) / 2.0f),
  fixed_sgl((9.096311e-01) / 2.0f),  fixed_sgl((2.399696e-07) / 2.0f),
  fixed_sgl((6.904415e-05) / 2.0f),  fixed_sgl((2.470456e-03) / 2.0f),
  fixed_sgl((4.849285e-02) / 2.0f),  fixed_sgl((9.208195e-01) / 2.0f),
  fixed_sgl((3.330982e-07) / 2.0f),  fixed_sgl((5.643103e-05) / 2.0f),
  fixed_sgl((2.630472e-03) / 2.0f),  fixed_sgl((5.105621e-02) / 2.0f),
  fixed_sgl((9.315442e-01) / 2.0f),  fixed_sgl((4.767794e-07) / 2.0f),
  fixed_sgl((7.095887e-05) / 2.0f),  fixed_sgl((2.703019e-03) / 2.0f),
  fixed_sgl((5.368313e-02) / 2.0f),  fixed_sgl((9.417976e-01) / 2.0f),
  fixed_sgl((3.428661e-07) / 2.0f),  fixed_sgl((7.872593e-05) / 2.0f),
  fixed_sgl((2.729137e-03) / 2.0f),  fixed_sgl((5.637219e-02) / 2.0f),
  fixed_sgl((9.515675e-01) / 2.0f),  fixed_sgl((8.676848e-06) / 2.0f),
  fixed_sgl((2.666445e-04) / 2.0f),  fixed_sgl((2.719749e-03) / 2.0f),
  fixed_sgl((5.911363e-02) / 2.0f),  fixed_sgl((9.608520e-01) / 2.0f),
  fixed_sgl((2.722296e-05) / 2.0f),  fixed_sgl((5.822201e-04) / 2.0f),
  fixed_sgl((2.530907e-03) / 2.0f),  fixed_sgl((6.192693e-02) / 2.0f),
  fixed_sgl((9.696426e-01) / 2.0f),  fixed_sgl((3.575651e-07) / 2.0f),
  fixed_sgl((7.870355e-05) / 2.0f),  fixed_sgl((2.225524e-03) / 2.0f),
  fixed_sgl((6.480449e-02) / 2.0f),  fixed_sgl((9.779405e-01) / 2.0f),
  fixed_sgl((6.293002e-07) / 2.0f),  fixed_sgl((7.245096e-05) / 2.0f),
  fixed_sgl((1.891972e-03) / 2.0f),  fixed_sgl((6.771675e-02) / 2.0f),
  fixed_sgl((9.857388e-01) / 2.0f),  fixed_sgl((1.070243e-06) / 2.0f),
  fixed_sgl((7.194151e-05) / 2.0f),  fixed_sgl((1.557112e-03) / 2.0f),
  fixed_sgl((7.064948e-02) / 2.0f),  fixed_sgl((9.930380e-01) / 2.0f),
  fixed_sgl((-3.225913e-07) / 2.0f), fixed_sgl((-7.679955e-05) / 2.0f),
  fixed_sgl((1.194731e-03) / 2.0f),  fixed_sgl((7.360559e-02) / 2.0f),
  fixed_sgl((9.998286e-01) / 2.0f),  fixed_sgl((-9.597516e-09) / 2.0f),
  fixed_sgl((-6.093373e-05) / 2.0f), fixed_sgl((6.415402e-04) / 2.0f),
  fixed_sgl((7.657650e-02) / 2.0f),  fixed_sgl((1.006109e+00) / 2.0f),
  fixed_sgl((-8.908041e-08) / 2.0f), fixed_sgl((-1.721347e-05) / 2.0f),
  fixed_sgl((1.092526e-04) / 2.0f),  fixed_sgl((7.955571e-02) / 2.0f),
  fixed_sgl((1.011868e+00) / 2.0f),  fixed_sgl((-2.285563e-05) / 2.0f),
  fixed_sgl((-8.882305e-05) / 2.0f), fixed_sgl((2.934876e-04) / 2.0f),
  fixed_sgl((8.251962e-02) / 2.0f),  fixed_sgl((1.017100e+00) / 2.0f),
  fixed_sgl((1.013575e-05) / 2.0f),  fixed_sgl((6.418658e-05) / 2.0f),
  fixed_sgl((5.721223e-04) / 2.0f),  fixed_sgl((8.547716e-02) / 2.0f),
  fixed_sgl((1.021799e+00) / 2.0f),  fixed_sgl((-1.706941e-05) / 2.0f),
  fixed_sgl((1.769262e-04) / 2.0f),  fixed_sgl((6.976561e-04) / 2.0f),
  fixed_sgl((8.841813e-02) / 2.0f),  fixed_sgl((1.025967e+00) / 2.0f),
  fixed_sgl((1.356728e-06) / 2.0f),  fixed_sgl((2.206341e-05) / 2.0f),
  fixed_sgl((7.376101e-04) / 2.0f),  fixed_sgl((9.133591e-02) / 2.0f),
  fixed_sgl((1.029601e+00) / 2.0f),  fixed_sgl((-1.398913e-08) / 2.0f),
  fixed_sgl((-6.538879e-06) / 2.0f), fixed_sgl((7.154124e-04) / 2.0f),
  fixed_sgl((9.421624e-02) / 2.0f),  fixed_sgl((1.032713e+00) / 2.0f),
  fixed_sgl((3.552992e-08) / 2.0f),  fixed_sgl((-1.052707e-05) / 2.0f),
  fixed_sgl((7.139920e-04) / 2.0f),  fixed_sgl((9.705240e-02) / 2.0f),
  fixed_sgl((1.035312e+00) / 2.0f),  fixed_sgl((4.211177e-07) / 2.0f),
  fixed_sgl((-9.075431e-06) / 2.0f), fixed_sgl((6.944123e-04) / 2.0f),
  fixed_sgl((9.982958e-02) / 2.0f),  fixed_sgl((1.037422e+00) / 2.0f),
  fixed_sgl((5.433719e-07) / 2.0f),  fixed_sgl((-1.748285e-05) / 2.0f),
  fixed_sgl((6.766320e-04) / 2.0f),  fixed_sgl((1.025398e-01) / 2.0f),
  fixed_sgl((1.039062e+00) / 2.0f),  fixed_sgl((8.226600e-08) / 2.0f),
  fixed_sgl((-3.498286e-05) / 2.0f), fixed_sgl((6.887784e-04) / 2.0f),
  fixed_sgl((1.051642e-01) / 2.0f),  fixed_sgl((1.040262e+00) / 2.0f),
  fixed_sgl((1.272705e-07) / 2.0f),  fixed_sgl((-4.489491e-05) / 2.0f),
  fixed_sgl((6.673250e-04) / 2.0f),  fixed_sgl((1.076972e-01) / 2.0f),
  fixed_sgl((1.041043e+00) / 2.0f),  fixed_sgl((2.542598e-07) / 2.0f),
  fixed_sgl((-5.449816e-05) / 2.0f), fixed_sgl((5.970697e-04) / 2.0f),
  fixed_sgl((1.101216e-01) / 2.0f),  fixed_sgl((1.041434e+00) / 2.0f),
  fixed_sgl((6.322770e-07) / 2.0f),  fixed_sgl((-5.874199e-05) / 2.0f),
  fixed_sgl((4.749931e-04) / 2.0f),  fixed_sgl((1.124296e-01) / 2.0f),
  fixed_sgl((1.041443e+00) / 2.0f),  fixed_sgl((2.801882e-08) / 2.0f),
  fixed_sgl((-7.934510e-05) / 2.0f), fixed_sgl((3.189336e-04) / 2.0f),
  fixed_sgl((1.146042e-01) / 2.0f),  fixed_sgl((1.041087e+00) / 2.0f),
  fixed_sgl((5.891904e-07) / 2.0f),  fixed_sgl((-8.039232e-05) / 2.0f),
  fixed_sgl((1.218226e-04) / 2.0f),  fixed_sgl((1.166399e-01) / 2.0f),
  fixed_sgl((1.040350e+00) / 2.0f),  fixed_sgl((7.301957e-07) / 2.0f),
  fixed_sgl((-9.907631e-05) / 2.0f), fixed_sgl((-1.324292e-04) / 2.0f),
  fixed_sgl((1.185243e-01) / 2.0f),  fixed_sgl((1.039228e+00) / 2.0f),
  fixed_sgl((-4.518603e-06) / 2.0f), fixed_sgl((-2.217025e-04) / 2.0f),
  fixed_sgl((-4.268575e-04) / 2.0f), fixed_sgl((1.202546e-01) / 2.0f),
  fixed_sgl((1.037683e+00) / 2.0f),  fixed_sgl((-3.561585e-06) / 2.0f),
  fixed_sgl((-2.415166e-04) / 2.0f), fixed_sgl((-7.804546e-04) / 2.0f),
  fixed_sgl((1.218184e-01) / 2.0f),  fixed_sgl((1.035694e+00) / 2.0f),
  fixed_sgl((-1.074717e-07) / 2.0f), fixed_sgl((-2.123672e-04) / 2.0f),
  fixed_sgl((-1.156680e-03) / 2.0f), fixed_sgl((1.232132e-01) / 2.0f),
  fixed_sgl((1.033206e+00) / 2.0f),  fixed_sgl((1.323268e-06) / 2.0f),
  fixed_sgl((-2.078299e-04) / 2.0f), fixed_sgl((-1.525819e-03) / 2.0f),
  fixed_sgl((1.244270e-01) / 2.0f),  fixed_sgl((1.030199e+00) / 2.0f),
  fixed_sgl((3.377815e-06) / 2.0f),  fixed_sgl((-1.885286e-04) / 2.0f),
  fixed_sgl((-1.914115e-03) / 2.0f), fixed_sgl((1.254605e-01) / 2.0f),
  fixed_sgl((1.026616e+00) / 2.0f),  fixed_sgl((5.161607e-06) / 2.0f),
  fixed_sgl((-1.728673e-04) / 2.0f), fixed_sgl((-2.292814e-03) / 2.0f),
  fixed_sgl((1.262996e-01) / 2.0f),  fixed_sgl((1.022470e+00) / 2.0f),
  fixed_sgl((5.924001e-06) / 2.0f),  fixed_sgl((-1.744842e-04) / 2.0f),
  fixed_sgl((-2.658042e-03) / 2.0f), fixed_sgl((1.269416e-01) / 2.0f),
  fixed_sgl((1.017729e+00) / 2.0f),  fixed_sgl((6.310208e-06) / 2.0f),
  fixed_sgl((-1.784193e-04) / 2.0f), fixed_sgl((-3.000423e-03) / 2.0f),
  fixed_sgl((1.273648e-01) / 2.0f),  fixed_sgl((1.012508e+00) / 2.0f),
  fixed_sgl((3.357219e-06) / 2.0f),  fixed_sgl((-2.131406e-04) / 2.0f),
  fixed_sgl((-3.318858e-03) / 2.0f), fixed_sgl((1.275561e-01) / 2.0f),
  fixed_sgl((1.006893e+00) / 2.0f),  fixed_sgl((5.189087e-06) / 2.0f),
  fixed_sgl((-2.078886e-04) / 2.0f), fixed_sgl((-3.597476e-03) / 2.0f),
  fixed_sgl((1.274568e-01) / 2.0f),  fixed_sgl((1.001463e+00) / 2.0f),
  fixed_sgl((4.178050e-06) / 2.0f),  fixed_sgl((-4.663778e-05) / 2.0f),
  fixed_sgl((-3.870852e-03) / 2.0f), fixed_sgl((1.273591e-01) / 2.0f),
  fixed_sgl((9.927544e-01) / 2.0f),  fixed_sgl((5.364807e-06) / 2.0f),
  fixed_sgl((-5.889277e-06) / 2.0f), fixed_sgl((-4.135130e-03) / 2.0f),
  fixed_sgl((1.272499e-01) / 2.0f),  fixed_sgl((9.807692e-01) / 2.0f),
  fixed_sgl((4.083719e-06) / 2.0f),  fixed_sgl((-1.774108e-05) / 2.0f),
  fixed_sgl((-4.351668e-03) / 2.0f), fixed_sgl((1.268281e-01) / 2.0f),
  fixed_sgl((9.690017e-01) / 2.0f),  fixed_sgl((3.567581e-06) / 2.0f),
  fixed_sgl((-2.599468e-08) / 2.0f), fixed_sgl((-4.517190e-03) / 2.0f),
  fixed_sgl((1.261262e-01) / 2.0f),  fixed_sgl((9.568886e-01) / 2.0f),
  fixed_sgl((3.262754e-06) / 2.0f),  fixed_sgl((1.260640e-05) / 2.0f),
  fixed_sgl((-4.636228e-03) / 2.0f), fixed_sgl((1.251477e-01) / 2.0f),
  fixed_sgl((9.443803e-01) / 2.0f),  fixed_sgl((2.041128e-06) / 2.0f),
  fixed_sgl((2.364519e-05) / 2.0f),  fixed_sgl((-4.704321e-03) / 2.0f),
  fixed_sgl((1.238869e-01) / 2.0f),  fixed_sgl((9.313874e-01) / 2.0f),
  fixed_sgl((-2.567965e-08) / 2.0f), fixed_sgl((2.806963e-05) / 2.0f),
  fixed_sgl((-4.722568e-03) / 2.0f), fixed_sgl((1.223371e-01) / 2.0f),
  fixed_sgl((9.179666e-01) / 2.0f),  fixed_sgl((2.714879e-07) / 2.0f),
  fixed_sgl((4.493916e-05) / 2.0f),  fixed_sgl((-4.663276e-03) / 2.0f),
  fixed_sgl((1.204854e-01) / 2.0f),  fixed_sgl((9.041286e-01) / 2.0f),
  fixed_sgl((2.150884e-06) / 2.0f),  fixed_sgl((5.408155e-05) / 2.0f),
  fixed_sgl((-4.554811e-03) / 2.0f), fixed_sgl((1.183233e-01) / 2.0f),
  fixed_sgl((8.899474e-01) / 2.0f),  fixed_sgl((5.818595e-06) / 2.0f),
  fixed_sgl((3.759630e-05) / 2.0f),  fixed_sgl((-4.369554e-03) / 2.0f),
  fixed_sgl((1.158359e-01) / 2.0f),  fixed_sgl((8.754641e-01) / 2.0f),
  fixed_sgl((-1.686137e-09) / 2.0f), fixed_sgl((2.515118e-05) / 2.0f),
  fixed_sgl((-4.091033e-03) / 2.0f), fixed_sgl((1.130180e-01) / 2.0f),
  fixed_sgl((8.607492e-01) / 2.0f),  fixed_sgl((-1.775191e-09) / 2.0f),
  fixed_sgl((2.406517e-05) / 2.0f),  fixed_sgl((-3.794425e-03) / 2.0f),
  fixed_sgl((1.098551e-01) / 2.0f),  fixed_sgl((8.458450e-01) / 2.0f),
  fixed_sgl((-2.222072e-09) / 2.0f), fixed_sgl((3.628511e-05) / 2.0f),
  fixed_sgl((-3.460363e-03) / 2.0f), fixed_sgl((1.063455e-01) / 2.0f),
  fixed_sgl((8.308040e-01) / 2.0f),  fixed_sgl((-1.280675e-08) / 2.0f),
  fixed_sgl((2.241546e-05) / 2.0f),  fixed_sgl((-3.064311e-03) / 2.0f),
  fixed_sgl((1.024805e-01) / 2.0f),  fixed_sgl((8.156523e-01) / 2.0f),
  fixed_sgl((-6.977078e-08) / 2.0f), fixed_sgl((1.499170e-05) / 2.0f),
  fixed_sgl((-2.621537e-03) / 2.0f), fixed_sgl((9.826251e-02) / 2.0f),
  fixed_sgl((8.004165e-01) / 2.0f),  fixed_sgl((-1.409927e-08) / 2.0f),
  fixed_sgl((5.009913e-06) / 2.0f),  fixed_sgl((-2.124648e-03) / 2.0f),
  fixed_sgl((9.368652e-02) / 2.0f),  fixed_sgl((7.851012e-01) / 2.0f),
  fixed_sgl((-2.986489e-09) / 2.0f), fixed_sgl((1.277184e-06) / 2.0f),
  fixed_sgl((-1.594861e-03) / 2.0f), fixed_sgl((8.875756e-02) / 2.0f),
  fixed_sgl((7.697093e-01) / 2.0f),  fixed_sgl((1.876022e-07) / 2.0f),
  fixed_sgl((1.580189e-05) / 2.0f),  fixed_sgl((-1.061499e-03) / 2.0f),
  fixed_sgl((8.347151e-02) / 2.0f),  fixed_sgl((7.542294e-01) / 2.0f),
  fixed_sgl((1.737277e-07) / 2.0f),  fixed_sgl((5.533953e-05) / 2.0f),
  fixed_sgl((-6.169855e-04) / 2.0f), fixed_sgl((7.783300e-02) / 2.0f),
  fixed_sgl((7.386515e-01) / 2.0f),  fixed_sgl((3.818589e-09) / 2.0f),
  fixed_sgl((8.870182e-05) / 2.0f),  fixed_sgl((-2.004823e-04) / 2.0f),
  fixed_sgl((7.184074e-02) / 2.0f),  fixed_sgl((7.229599e-01) / 2.0f),
  fixed_sgl((5.143615e-07) / 2.0f),  fixed_sgl((1.035783e-04) / 2.0f),
  fixed_sgl((2.048499e-04) / 2.0f),  fixed_sgl((6.550209e-02) / 2.0f),
  fixed_sgl((7.071448e-01) / 2.0f),  fixed_sgl((2.820292e-08) / 2.0f),
  fixed_sgl((9.990758e-05) / 2.0f),  fixed_sgl((5.621721e-04) / 2.0f),
  fixed_sgl((5.881297e-02) / 2.0f),  fixed_sgl((6.911982e-01) / 2.0f),
  fixed_sgl((4.677016e-06) / 2.0f),  fixed_sgl((1.181078e-04) / 2.0f),
  fixed_sgl((9.373975e-04) / 2.0f),  fixed_sgl((5.177965e-02) / 2.0f),
  fixed_sgl((6.751199e-01) / 2.0f),  fixed_sgl((3.361682e-06) / 2.0f),
  fixed_sgl((2.126365e-05) / 2.0f),  fixed_sgl((1.344657e-03) / 2.0f),
  fixed_sgl((4.439684e-02) / 2.0f),  fixed_sgl((6.589149e-01) / 2.0f),
  fixed_sgl((-4.880845e-08) / 2.0f), fixed_sgl((5.861800e-05) / 2.0f),
  fixed_sgl((1.812176e-03) / 2.0f),  fixed_sgl((3.666943e-02) / 2.0f),
  fixed_sgl((6.425940e-01) / 2.0f),  fixed_sgl((2.267731e-07) / 2.0f),
  fixed_sgl((5.021906e-05) / 2.0f),  fixed_sgl((2.172866e-03) / 2.0f),
  fixed_sgl((2.857528e-02) / 2.0f),  fixed_sgl((6.261725e-01) / 2.0f),
  fixed_sgl((5.158213e-09) / 2.0f),  fixed_sgl((4.150075e-05) / 2.0f),
  fixed_sgl((1.985825e-03) / 2.0f),  fixed_sgl((2.012237e-02) / 2.0f),
  fixed_sgl((6.096690e-01) / 2.0f),  fixed_sgl((-2.066962e-07) / 2.0f),
  fixed_sgl((3.799972e-05) / 2.0f),  fixed_sgl((1.697653e-03) / 2.0f),
  fixed_sgl((1.132324e-02) / 2.0f),  fixed_sgl((5.930982e-01) / 2.0f),
  fixed_sgl((4.883305e-07) / 2.0f),  fixed_sgl((6.606462e-05) / 2.0f),
  fixed_sgl((1.471167e-03) / 2.0f),  fixed_sgl((2.184257e-03) / 2.0f),
  fixed_sgl((5.764735e-01) / 2.0f),  fixed_sgl((8.254430e-07) / 2.0f),
  fixed_sgl((9.755685e-05) / 2.0f),  fixed_sgl((1.232134e-03) / 2.0f),
  fixed_sgl((-7.298198e-03) / 2.0f), fixed_sgl((5.598052e-01) / 2.0f),
  fixed_sgl((9.464783e-07) / 2.0f),  fixed_sgl((1.831121e-04) / 2.0f),
  fixed_sgl((8.990256e-04) / 2.0f),  fixed_sgl((-1.711324e-02) / 2.0f),
  fixed_sgl((5.430990e-01) / 2.0f),  fixed_sgl((-1.232693e-05) / 2.0f),
  fixed_sgl((-5.901618e-07) / 2.0f), fixed_sgl((6.150317e-04) / 2.0f),
  fixed_sgl((-2.726484e-02) / 2.0f), fixed_sgl((5.263554e-01) / 2.0f),
  fixed_sgl((3.867483e-05) / 2.0f),  fixed_sgl((-3.595054e-04) / 2.0f),
  fixed_sgl((6.307841e-04) / 2.0f),  fixed_sgl((-3.775928e-02) / 2.0f),
  fixed_sgl((5.095721e-01) / 2.0f),  fixed_sgl((-9.870548e-07) / 2.0f),
  fixed_sgl((-1.815837e-04) / 2.0f), fixed_sgl((4.366447e-04) / 2.0f),
  fixed_sgl((-4.859006e-02) / 2.0f), fixed_sgl((4.927464e-01) / 2.0f),
  fixed_sgl((-1.089501e-06) / 2.0f), fixed_sgl((-9.204876e-05) / 2.0f),
  fixed_sgl((1.498232e-04) / 2.0f),  fixed_sgl((-5.973742e-02) / 2.0f),
  fixed_sgl((4.758754e-01) / 2.0f),  fixed_sgl((-1.569003e-06) / 2.0f),
  fixed_sgl((-5.192444e-05) / 2.0f), fixed_sgl((-9.099723e-05) / 2.0f),
  fixed_sgl((-7.120357e-02) / 2.0f), fixed_sgl((4.589583e-01) / 2.0f),
  fixed_sgl((-2.778618e-07) / 2.0f), fixed_sgl((6.487880e-05) / 2.0f),
  fixed_sgl((-3.337967e-04) / 2.0f), fixed_sgl((-8.298103e-02) / 2.0f),
  fixed_sgl((4.420014e-01) / 2.0f),  fixed_sgl((6.757015e-09) / 2.0f),
  fixed_sgl((5.397065e-05) / 2.0f),  fixed_sgl((-5.599348e-04) / 2.0f),
  fixed_sgl((-9.506967e-02) / 2.0f), fixed_sgl((4.250144e-01) / 2.0f),
  fixed_sgl((1.496436e-07) / 2.0f),  fixed_sgl((2.472024e-05) / 2.0f),
  fixed_sgl((-7.677634e-04) / 2.0f), fixed_sgl((-1.074631e-01) / 2.0f),
  fixed_sgl((4.080155e-01) / 2.0f),  fixed_sgl((2.068297e-05) / 2.0f),
  fixed_sgl((9.711682e-05) / 2.0f),  fixed_sgl((-9.730460e-04) / 2.0f),
  fixed_sgl((-1.201629e-01) / 2.0f), fixed_sgl((3.910244e-01) / 2.0f),
  fixed_sgl((-9.388963e-06) / 2.0f), fixed_sgl((5.144969e-05) / 2.0f),
  fixed_sgl((-1.131860e-03) / 2.0f), fixed_sgl((-1.331545e-01) / 2.0f),
  fixed_sgl((3.740644e-01) / 2.0f),  fixed_sgl((-1.402925e-05) / 2.0f),
  fixed_sgl((-1.039264e-04) / 2.0f), fixed_sgl((-1.283281e-03) / 2.0f),
  fixed_sgl((-1.464389e-01) / 2.0f), fixed_sgl((3.571528e-01) / 2.0f),
  fixed_sgl((-2.757611e-06) / 2.0f), fixed_sgl((2.853437e-06) / 2.0f),
  fixed_sgl((-1.480543e-03) / 2.0f), fixed_sgl((-1.600062e-01) / 2.0f),
  fixed_sgl((3.403074e-01) / 2.0f),  fixed_sgl((2.945239e-08) / 2.0f),
  fixed_sgl((1.334091e-05) / 2.0f),  fixed_sgl((-1.699161e-03) / 2.0f),
  fixed_sgl((-1.738542e-01) / 2.0f), fixed_sgl((3.235299e-01) / 2.0f),
  fixed_sgl((-7.873304e-08) / 2.0f), fixed_sgl((2.443161e-05) / 2.0f),
  fixed_sgl((-1.924845e-03) / 2.0f), fixed_sgl((-1.879712e-01) / 2.0f),
  fixed_sgl((3.068187e-01) / 2.0f),  fixed_sgl((-9.897194e-07) / 2.0f),
  fixed_sgl((3.568555e-05) / 2.0f),  fixed_sgl((-2.152380e-03) / 2.0f),
  fixed_sgl((-2.023548e-01) / 2.0f), fixed_sgl((2.901491e-01) / 2.0f),
  fixed_sgl((-1.922074e-06) / 2.0f), fixed_sgl((6.193370e-05) / 2.0f),
  fixed_sgl((-2.396404e-03) / 2.0f), fixed_sgl((-2.169926e-01) / 2.0f),
  fixed_sgl((2.734977e-01) / 2.0f),  fixed_sgl((-2.765650e-07) / 2.0f),
  fixed_sgl((1.176237e-04) / 2.0f),  fixed_sgl((-2.653819e-03) / 2.0f),
  fixed_sgl((-2.318815e-01) / 2.0f), fixed_sgl((2.568176e-01) / 2.0f),
  fixed_sgl((-4.636105e-07) / 2.0f), fixed_sgl((1.635906e-04) / 2.0f),
  fixed_sgl((-2.927159e-03) / 2.0f), fixed_sgl((-2.470098e-01) / 2.0f),
  fixed_sgl((2.400768e-01) / 2.0f),  fixed_sgl((-9.607069e-07) / 2.0f),
  fixed_sgl((2.060394e-04) / 2.0f),  fixed_sgl((-3.209093e-03) / 2.0f),
  fixed_sgl((-2.623749e-01) / 2.0f), fixed_sgl((2.232277e-01) / 2.0f),
  fixed_sgl((-1.907927e-06) / 2.0f), fixed_sgl((2.346981e-04) / 2.0f),
  fixed_sgl((-3.505531e-03) / 2.0f), fixed_sgl((-2.779638e-01) / 2.0f),
  fixed_sgl((2.062605e-01) / 2.0f),  fixed_sgl((-1.551251e-08) / 2.0f),
  fixed_sgl((2.520607e-04) / 2.0f),  fixed_sgl((-3.811612e-03) / 2.0f),
  fixed_sgl((-2.937725e-01) / 2.0f), fixed_sgl((1.891590e-01) / 2.0f),
  fixed_sgl((-1.653464e-06) / 2.0f), fixed_sgl((2.556450e-04) / 2.0f),
  fixed_sgl((-4.133640e-03) / 2.0f), fixed_sgl((-3.097862e-01) / 2.0f),
  fixed_sgl((1.719726e-01) / 2.0f),  fixed_sgl((-2.043464e-06) / 2.0f),
  fixed_sgl((3.157664e-04) / 2.0f),  fixed_sgl((-4.448993e-03) / 2.0f),
  fixed_sgl((-3.259994e-01) / 2.0f), fixed_sgl((1.547461e-01) / 2.0f),
  fixed_sgl((1.622786e-05) / 2.0f),  fixed_sgl((6.205676e-04) / 2.0f),
  fixed_sgl((-4.754192e-03) / 2.0f), fixed_sgl((-3.423942e-01) / 2.0f),
  fixed_sgl((1.376150e-01) / 2.0f),  fixed_sgl((1.395221e-05) / 2.0f),
  fixed_sgl((7.847840e-04) / 2.0f),  fixed_sgl((-5.063851e-03) / 2.0f),
  fixed_sgl((-3.589627e-01) / 2.0f), fixed_sgl((1.206924e-01) / 2.0f),
  fixed_sgl((4.591010e-07) / 2.0f),  fixed_sgl((9.019129e-04) / 2.0f),
  fixed_sgl((-5.394570e-03) / 2.0f), fixed_sgl((-3.756822e-01) / 2.0f),
  fixed_sgl((1.042033e-01) / 2.0f),  fixed_sgl((-6.261944e-06) / 2.0f),
  fixed_sgl((1.054963e-03) / 2.0f),  fixed_sgl((-5.741103e-03) / 2.0f),
  fixed_sgl((-3.925409e-01) / 2.0f), fixed_sgl((8.829745e-02) / 2.0f),
  fixed_sgl((-1.606051e-05) / 2.0f), fixed_sgl((1.089429e-03) / 2.0f),
  fixed_sgl((-6.109179e-03) / 2.0f), fixed_sgl((-4.095160e-01) / 2.0f),
  fixed_sgl((7.325979e-02) / 2.0f),  fixed_sgl((-2.464228e-05) / 2.0f),
  fixed_sgl((1.122503e-03) / 2.0f),  fixed_sgl((-6.500503e-03) / 2.0f),
  fixed_sgl((-4.265950e-01) / 2.0f), fixed_sgl((5.918678e-02) / 2.0f),
  fixed_sgl((-2.976824e-05) / 2.0f), fixed_sgl((1.177515e-03) / 2.0f),
  fixed_sgl((-6.925141e-03) / 2.0f), fixed_sgl((-4.437530e-01) / 2.0f),
  fixed_sgl((4.634696e-02) / 2.0f),  fixed_sgl((-3.177468e-05) / 2.0f),
  fixed_sgl((1.226113e-03) / 2.0f),  fixed_sgl((-7.380544e-03) / 2.0f),
  fixed_sgl((-4.609829e-01) / 2.0f), fixed_sgl((3.450719e-02) / 2.0f),
  fixed_sgl((-4.373302e-05) / 2.0f), fixed_sgl((1.263569e-03) / 2.0f),
  fixed_sgl((-7.876393e-03) / 2.0f), fixed_sgl((-4.782650e-01) / 2.0f),
  fixed_sgl((2.353060e-02) / 2.0f),  fixed_sgl((-3.299004e-05) / 2.0f),
  fixed_sgl((1.287819e-03) / 2.0f),  fixed_sgl((-8.407749e-03) / 2.0f),
  fixed_sgl((-4.956175e-01) / 2.0f), fixed_sgl((1.129580e-02) / 2.0f),
};
const FIXP_PFT qmf_cldfb_320[320] = {
  fixed_sgl((5.345060e-07) / 2.0f),  fixed_sgl((-1.135471e-05) / 2.0f),
  fixed_sgl((-1.222743e-03) / 2.0f), fixed_sgl((9.318335e-03) / 2.0f),
  fixed_sgl((5.214033e-01) / 2.0f),  fixed_sgl((7.604792e-07) / 2.0f),
  fixed_sgl((6.003839e-06) / 2.0f),  fixed_sgl((-1.125398e-03) / 2.0f),
  fixed_sgl((1.070043e-02) / 2.0f),  fixed_sgl((5.556087e-01) / 2.0f),
  fixed_sgl((5.563536e-07) / 2.0f),  fixed_sgl((1.050792e-05) / 2.0f),
  fixed_sgl((-1.016929e-03) / 2.0f), fixed_sgl((1.228479e-02) / 2.0f),
  fixed_sgl((5.896935e-01) / 2.0f),  fixed_sgl((2.906322e-08) / 2.0f),
  fixed_sgl((8.560527e-06) / 2.0f),  fixed_sgl((-9.531187e-04) / 2.0f),
  fixed_sgl((1.408640e-02) / 2.0f),  fixed_sgl((6.235157e-01) / 2.0f),
  fixed_sgl((1.084614e-06) / 2.0f),  fixed_sgl((2.407951e-05) / 2.0f),
  fixed_sgl((-1.093433e-03) / 2.0f), fixed_sgl((1.611474e-02) / 2.0f),
  fixed_sgl((6.569371e-01) / 2.0f),  fixed_sgl((-6.175387e-10) / 2.0f),
  fixed_sgl((8.769899e-06) / 2.0f),  fixed_sgl((-1.244752e-03) / 2.0f),
  fixed_sgl((1.837877e-02) / 2.0f),  fixed_sgl((6.898003e-01) / 2.0f),
  fixed_sgl((-4.128808e-09) / 2.0f), fixed_sgl((9.494767e-06) / 2.0f),
  fixed_sgl((-8.878160e-04) / 2.0f), fixed_sgl((2.089915e-02) / 2.0f),
  fixed_sgl((7.219416e-01) / 2.0f),  fixed_sgl((-1.116801e-08) / 2.0f),
  fixed_sgl((2.670130e-06) / 2.0f),  fixed_sgl((-6.273041e-04) / 2.0f),
  fixed_sgl((2.369952e-02) / 2.0f),  fixed_sgl((7.532082e-01) / 2.0f),
  fixed_sgl((2.607347e-08) / 2.0f),  fixed_sgl((2.424790e-06) / 2.0f),
  fixed_sgl((-3.865944e-04) / 2.0f), fixed_sgl((2.679024e-02) / 2.0f),
  fixed_sgl((7.834691e-01) / 2.0f),  fixed_sgl((3.782148e-08) / 2.0f),
  fixed_sgl((3.233573e-05) / 2.0f),  fixed_sgl((2.748136e-04) / 2.0f),
  fixed_sgl((3.021193e-02) / 2.0f),  fixed_sgl((8.126044e-01) / 2.0f),
  fixed_sgl((1.290921e-07) / 2.0f),  fixed_sgl((5.106187e-05) / 2.0f),
  fixed_sgl((9.680615e-04) / 2.0f),  fixed_sgl((3.395726e-02) / 2.0f),
  fixed_sgl((8.404925e-01) / 2.0f),  fixed_sgl((-1.030732e-06) / 2.0f),
  fixed_sgl((1.162943e-05) / 2.0f),  fixed_sgl((1.571198e-03) / 2.0f),
  fixed_sgl((3.801740e-02) / 2.0f),  fixed_sgl((8.669955e-01) / 2.0f),
  fixed_sgl((4.052940e-08) / 2.0f),  fixed_sgl((4.924960e-05) / 2.0f),
  fixed_sgl((1.990767e-03) / 2.0f),  fixed_sgl((4.240569e-02) / 2.0f),
  fixed_sgl((8.919595e-01) / 2.0f),  fixed_sgl((1.236481e-07) / 2.0f),
  fixed_sgl((5.799333e-05) / 2.0f),  fixed_sgl((2.354800e-03) / 2.0f),
  fixed_sgl((4.724177e-02) / 2.0f),  fixed_sgl((9.152253e-01) / 2.0f),
  fixed_sgl((4.049388e-07) / 2.0f),  fixed_sgl((6.369496e-05) / 2.0f),
  fixed_sgl((2.666746e-03) / 2.0f),  fixed_sgl((5.236967e-02) / 2.0f),
  fixed_sgl((9.366709e-01) / 2.0f),  fixed_sgl((4.509857e-06) / 2.0f),
  fixed_sgl((1.726852e-04) / 2.0f),  fixed_sgl((2.724443e-03) / 2.0f),
  fixed_sgl((5.774291e-02) / 2.0f),  fixed_sgl((9.562097e-01) / 2.0f),
  fixed_sgl((1.379026e-05) / 2.0f),  fixed_sgl((3.304619e-04) / 2.0f),
  fixed_sgl((2.378216e-03) / 2.0f),  fixed_sgl((6.336571e-02) / 2.0f),
  fixed_sgl((9.737916e-01) / 2.0f),  fixed_sgl((8.497715e-07) / 2.0f),
  fixed_sgl((7.219624e-05) / 2.0f),  fixed_sgl((1.724542e-03) / 2.0f),
  fixed_sgl((6.918311e-02) / 2.0f),  fixed_sgl((9.893883e-01) / 2.0f),
  fixed_sgl((-1.660944e-07) / 2.0f), fixed_sgl((-6.886664e-05) / 2.0f),
  fixed_sgl((9.181354e-04) / 2.0f),  fixed_sgl((7.509105e-02) / 2.0f),
  fixed_sgl((1.002969e+00) / 2.0f),  fixed_sgl((-1.147235e-05) / 2.0f),
  fixed_sgl((-5.301826e-05) / 2.0f), fixed_sgl((2.013701e-04) / 2.0f),
  fixed_sgl((8.103766e-02) / 2.0f),  fixed_sgl((1.014484e+00) / 2.0f),
  fixed_sgl((-3.466829e-06) / 2.0f), fixed_sgl((1.205564e-04) / 2.0f),
  fixed_sgl((6.348892e-04) / 2.0f),  fixed_sgl((8.694765e-02) / 2.0f),
  fixed_sgl((1.023883e+00) / 2.0f),  fixed_sgl((6.713692e-07) / 2.0f),
  fixed_sgl((7.762268e-06) / 2.0f),  fixed_sgl((7.265112e-04) / 2.0f),
  fixed_sgl((9.277608e-02) / 2.0f),  fixed_sgl((1.031157e+00) / 2.0f),
  fixed_sgl((2.283238e-07) / 2.0f),  fixed_sgl((-9.801253e-06) / 2.0f),
  fixed_sgl((7.042022e-04) / 2.0f),  fixed_sgl((9.844099e-02) / 2.0f),
  fixed_sgl((1.036367e+00) / 2.0f),  fixed_sgl((3.128189e-07) / 2.0f),
  fixed_sgl((-2.623285e-05) / 2.0f), fixed_sgl((6.827052e-04) / 2.0f),
  fixed_sgl((1.038520e-01) / 2.0f),  fixed_sgl((1.039662e+00) / 2.0f),
  fixed_sgl((1.907652e-07) / 2.0f),  fixed_sgl((-4.969654e-05) / 2.0f),
  fixed_sgl((6.321974e-04) / 2.0f),  fixed_sgl((1.089094e-01) / 2.0f),
  fixed_sgl((1.041239e+00) / 2.0f),  fixed_sgl((3.301479e-07) / 2.0f),
  fixed_sgl((-6.904354e-05) / 2.0f), fixed_sgl((3.969634e-04) / 2.0f),
  fixed_sgl((1.135169e-01) / 2.0f),  fixed_sgl((1.041265e+00) / 2.0f),
  fixed_sgl((6.596931e-07) / 2.0f),  fixed_sgl((-8.973431e-05) / 2.0f),
  fixed_sgl((-5.303260e-06) / 2.0f), fixed_sgl((1.175821e-01) / 2.0f),
  fixed_sgl((1.039789e+00) / 2.0f),  fixed_sgl((-4.040094e-06) / 2.0f),
  fixed_sgl((-2.316096e-04) / 2.0f), fixed_sgl((-6.036561e-04) / 2.0f),
  fixed_sgl((1.210365e-01) / 2.0f),  fixed_sgl((1.036689e+00) / 2.0f),
  fixed_sgl((6.078980e-07) / 2.0f),  fixed_sgl((-2.100985e-04) / 2.0f),
  fixed_sgl((-1.341249e-03) / 2.0f), fixed_sgl((1.238201e-01) / 2.0f),
  fixed_sgl((1.031702e+00) / 2.0f),  fixed_sgl((4.269711e-06) / 2.0f),
  fixed_sgl((-1.806979e-04) / 2.0f), fixed_sgl((-2.103464e-03) / 2.0f),
  fixed_sgl((1.258800e-01) / 2.0f),  fixed_sgl((1.024543e+00) / 2.0f),
  fixed_sgl((6.117105e-06) / 2.0f),  fixed_sgl((-1.764517e-04) / 2.0f),
  fixed_sgl((-2.829232e-03) / 2.0f), fixed_sgl((1.271532e-01) / 2.0f),
  fixed_sgl((1.015119e+00) / 2.0f),  fixed_sgl((4.273153e-06) / 2.0f),
  fixed_sgl((-2.105146e-04) / 2.0f), fixed_sgl((-3.458167e-03) / 2.0f),
  fixed_sgl((1.275064e-01) / 2.0f),  fixed_sgl((1.004178e+00) / 2.0f),
  fixed_sgl((4.771428e-06) / 2.0f),  fixed_sgl((-2.626353e-05) / 2.0f),
  fixed_sgl((-4.002991e-03) / 2.0f), fixed_sgl((1.273045e-01) / 2.0f),
  fixed_sgl((9.867618e-01) / 2.0f),  fixed_sgl((3.825650e-06) / 2.0f),
  fixed_sgl((-8.883540e-06) / 2.0f), fixed_sgl((-4.434429e-03) / 2.0f),
  fixed_sgl((1.264771e-01) / 2.0f),  fixed_sgl((9.629451e-01) / 2.0f),
  fixed_sgl((2.651941e-06) / 2.0f),  fixed_sgl((1.812579e-05) / 2.0f),
  fixed_sgl((-4.670274e-03) / 2.0f), fixed_sgl((1.245173e-01) / 2.0f),
  fixed_sgl((9.378839e-01) / 2.0f),  fixed_sgl((1.229041e-07) / 2.0f),
  fixed_sgl((3.650440e-05) / 2.0f),  fixed_sgl((-4.692922e-03) / 2.0f),
  fixed_sgl((1.214113e-01) / 2.0f),  fixed_sgl((9.110476e-01) / 2.0f),
  fixed_sgl((3.984739e-06) / 2.0f),  fixed_sgl((4.583892e-05) / 2.0f),
  fixed_sgl((-4.462183e-03) / 2.0f), fixed_sgl((1.170796e-01) / 2.0f),
  fixed_sgl((8.827057e-01) / 2.0f),  fixed_sgl((-1.730664e-09) / 2.0f),
  fixed_sgl((2.460818e-05) / 2.0f),  fixed_sgl((-3.942729e-03) / 2.0f),
  fixed_sgl((1.114366e-01) / 2.0f),  fixed_sgl((8.532971e-01) / 2.0f),
  fixed_sgl((-7.514413e-09) / 2.0f), fixed_sgl((2.935029e-05) / 2.0f),
  fixed_sgl((-3.262337e-03) / 2.0f), fixed_sgl((1.044130e-01) / 2.0f),
  fixed_sgl((8.232281e-01) / 2.0f),  fixed_sgl((-4.193503e-08) / 2.0f),
  fixed_sgl((1.000081e-05) / 2.0f),  fixed_sgl((-2.373092e-03) / 2.0f),
  fixed_sgl((9.597452e-02) / 2.0f),  fixed_sgl((7.927589e-01) / 2.0f),
  fixed_sgl((9.230786e-08) / 2.0f),  fixed_sgl((8.539538e-06) / 2.0f),
  fixed_sgl((-1.328180e-03) / 2.0f), fixed_sgl((8.611453e-02) / 2.0f),
  fixed_sgl((7.619694e-01) / 2.0f),  fixed_sgl((8.877312e-08) / 2.0f),
  fixed_sgl((7.202067e-05) / 2.0f),  fixed_sgl((-4.087339e-04) / 2.0f),
  fixed_sgl((7.483687e-02) / 2.0f),  fixed_sgl((7.308058e-01) / 2.0f),
  fixed_sgl((2.712822e-07) / 2.0f),  fixed_sgl((1.017429e-04) / 2.0f),
  fixed_sgl((3.835110e-04) / 2.0f),  fixed_sgl((6.215753e-02) / 2.0f),
  fixed_sgl((6.991715e-01) / 2.0f),  fixed_sgl((4.019349e-06) / 2.0f),
  fixed_sgl((6.968570e-05) / 2.0f),  fixed_sgl((1.141027e-03) / 2.0f),
  fixed_sgl((4.808825e-02) / 2.0f),  fixed_sgl((6.670174e-01) / 2.0f),
  fixed_sgl((8.898233e-08) / 2.0f),  fixed_sgl((5.441853e-05) / 2.0f),
  fixed_sgl((1.992521e-03) / 2.0f),  fixed_sgl((3.262236e-02) / 2.0f),
  fixed_sgl((6.343833e-01) / 2.0f),  fixed_sgl((-1.007690e-07) / 2.0f),
  fixed_sgl((3.975024e-05) / 2.0f),  fixed_sgl((1.841739e-03) / 2.0f),
  fixed_sgl((1.572281e-02) / 2.0f),  fixed_sgl((6.013836e-01) / 2.0f),
  fixed_sgl((6.568868e-07) / 2.0f),  fixed_sgl((8.181074e-05) / 2.0f),
  fixed_sgl((1.351651e-03) / 2.0f),  fixed_sgl((-2.556970e-03) / 2.0f),
  fixed_sgl((5.681393e-01) / 2.0f),  fixed_sgl((-5.690228e-06) / 2.0f),
  fixed_sgl((9.126098e-05) / 2.0f),  fixed_sgl((7.570286e-04) / 2.0f),
  fixed_sgl((-2.218904e-02) / 2.0f), fixed_sgl((5.347272e-01) / 2.0f),
  fixed_sgl((1.884389e-05) / 2.0f),  fixed_sgl((-2.705446e-04) / 2.0f),
  fixed_sgl((5.337144e-04) / 2.0f),  fixed_sgl((-4.317467e-02) / 2.0f),
  fixed_sgl((5.011593e-01) / 2.0f),  fixed_sgl((-1.329252e-06) / 2.0f),
  fixed_sgl((-7.198660e-05) / 2.0f), fixed_sgl((2.941296e-05) / 2.0f),
  fixed_sgl((-6.547049e-02) / 2.0f), fixed_sgl((4.674168e-01) / 2.0f),
  fixed_sgl((-1.355524e-07) / 2.0f), fixed_sgl((5.942472e-05) / 2.0f),
  fixed_sgl((-4.468657e-04) / 2.0f), fixed_sgl((-8.902535e-02) / 2.0f),
  fixed_sgl((4.335079e-01) / 2.0f),  fixed_sgl((1.041631e-05) / 2.0f),
  fixed_sgl((6.091853e-05) / 2.0f),  fixed_sgl((-8.704047e-04) / 2.0f),
  fixed_sgl((-1.138130e-01) / 2.0f), fixed_sgl((3.995200e-01) / 2.0f),
  fixed_sgl((-1.170911e-05) / 2.0f), fixed_sgl((-2.623833e-05) / 2.0f),
  fixed_sgl((-1.207570e-03) / 2.0f), fixed_sgl((-1.397967e-01) / 2.0f),
  fixed_sgl((3.656086e-01) / 2.0f),  fixed_sgl((-1.364079e-06) / 2.0f),
  fixed_sgl((8.097173e-06) / 2.0f),  fixed_sgl((-1.589852e-03) / 2.0f),
  fixed_sgl((-1.669302e-01) / 2.0f), fixed_sgl((3.319187e-01) / 2.0f),
  fixed_sgl((-5.342262e-07) / 2.0f), fixed_sgl((3.005858e-05) / 2.0f),
  fixed_sgl((-2.038612e-03) / 2.0f), fixed_sgl((-1.951630e-01) / 2.0f),
  fixed_sgl((2.984839e-01) / 2.0f),  fixed_sgl((-1.099320e-06) / 2.0f),
  fixed_sgl((8.977871e-05) / 2.0f),  fixed_sgl((-2.525111e-03) / 2.0f),
  fixed_sgl((-2.244371e-01) / 2.0f), fixed_sgl((2.651577e-01) / 2.0f),
  fixed_sgl((-7.121587e-07) / 2.0f), fixed_sgl((1.848150e-04) / 2.0f),
  fixed_sgl((-3.068126e-03) / 2.0f), fixed_sgl((-2.546924e-01) / 2.0f),
  fixed_sgl((2.316523e-01) / 2.0f),  fixed_sgl((-9.617199e-07) / 2.0f),
  fixed_sgl((2.433794e-04) / 2.0f),  fixed_sgl((-3.658572e-03) / 2.0f),
  fixed_sgl((-2.858681e-01) / 2.0f), fixed_sgl((1.977098e-01) / 2.0f),
  fixed_sgl((-1.848464e-06) / 2.0f), fixed_sgl((2.857057e-04) / 2.0f),
  fixed_sgl((-4.291316e-03) / 2.0f), fixed_sgl((-3.178928e-01) / 2.0f),
  fixed_sgl((1.633594e-01) / 2.0f),  fixed_sgl((1.509004e-05) / 2.0f),
  fixed_sgl((7.026758e-04) / 2.0f),  fixed_sgl((-4.909021e-03) / 2.0f),
  fixed_sgl((-3.506784e-01) / 2.0f), fixed_sgl((1.291537e-01) / 2.0f),
  fixed_sgl((-2.901422e-06) / 2.0f), fixed_sgl((9.784381e-04) / 2.0f),
  fixed_sgl((-5.567837e-03) / 2.0f), fixed_sgl((-3.841116e-01) / 2.0f),
  fixed_sgl((9.625038e-02) / 2.0f),  fixed_sgl((-2.035140e-05) / 2.0f),
  fixed_sgl((1.105966e-03) / 2.0f),  fixed_sgl((-6.304841e-03) / 2.0f),
  fixed_sgl((-4.180555e-01) / 2.0f), fixed_sgl((6.622328e-02) / 2.0f),
  fixed_sgl((-3.077146e-05) / 2.0f), fixed_sgl((1.201814e-03) / 2.0f),
  fixed_sgl((-7.152842e-03) / 2.0f), fixed_sgl((-4.523680e-01) / 2.0f),
  fixed_sgl((4.042707e-02) / 2.0f),  fixed_sgl((-3.836153e-05) / 2.0f),
  fixed_sgl((1.275694e-03) / 2.0f),  fixed_sgl((-8.142071e-03) / 2.0f),
  fixed_sgl((-4.869413e-01) / 2.0f), fixed_sgl((1.741320e-02) / 2.0f),
};
static void qmfSynPrototypeFirSlot(HANDLE_QMF_FILTER_BANK qmf,
                                   FIXP_QMF* __restrict realSlot,
                                   FIXP_QMF* __restrict imagSlot,
                                   INT_PCM* __restrict timeOut, int stride) {
  FIXP_QSS* FilterStates = (FIXP_QSS*)qmf->FilterStates;
  int no_channels = qmf->no_channels;
  const FIXP_PFT* p_Filter = qmf->p_filter;
  int p_stride = qmf->p_stride;
  int j;
  FIXP_QSS* __restrict sta = FilterStates;
  const FIXP_PFT* __restrict p_flt, * __restrict p_fltm;
  int scale = ((32 - 16) - 1 - qmf->outScalefactor);
  p_flt = p_Filter + p_stride * 5;
  p_fltm = p_Filter + (qmf->FilterSize / 2) - p_stride * 5;
  for (j = no_channels - 1; j >= 0; j--) {
    FIXP_QMF imag = imagSlot[j];
    FIXP_QMF real = realSlot[j];
    {
      INT_PCM tmp;
      FIXP_DBL Are = (sta[0]) + fMultDiv2(p_fltm[0], real);
      if (qmf->outGain != (FIXP_DBL)0x80000000) {
        Are = fMult(Are, qmf->outGain);
      }
      tmp = (INT_PCM)(saturateRightShift(fAbs(Are), scale));
      if (Are < (FIXP_QMF)0) {
        tmp = -tmp;
      }
      timeOut[(j)*stride] = tmp;
    }
    sta[0] = sta[1] + (fMultDiv2(p_flt[4], imag));
    sta[1] = sta[2] + (fMultDiv2(p_fltm[1], real));
    sta[2] = sta[3] + (fMultDiv2(p_flt[3], imag));
    sta[3] = sta[4] + (fMultDiv2(p_fltm[2], real));
    sta[4] = sta[5] + (fMultDiv2(p_flt[2], imag));
    sta[5] = sta[6] + (fMultDiv2(p_fltm[3], real));
    sta[6] = sta[7] + (fMultDiv2(p_flt[1], imag));
    sta[7] = sta[8] + (fMultDiv2(p_fltm[4], real));
    sta[8] = (fMultDiv2(p_flt[0], imag));
    p_flt += (p_stride * 5);
    p_fltm -= (p_stride * 5);
    sta += 9;
  }
}

static void qmfSynPrototypeFirSlot_NonSymmetric(HANDLE_QMF_FILTER_BANK qmf,
                                                FIXP_QMF* __restrict realSlot,
                                                FIXP_QMF* __restrict imagSlot,
                                                INT_PCM* __restrict timeOut,
                                                int stride) {
  FIXP_QSS* FilterStates = (FIXP_QSS*)qmf->FilterStates;
  int no_channels = qmf->no_channels;
  const FIXP_PFT* p_Filter = qmf->p_filter;
  int p_stride = qmf->p_stride;
  int j;
  FIXP_QSS* __restrict sta = FilterStates;
  const FIXP_PFT* __restrict p_flt, * __restrict p_fltm;
  int scale = ((32 - 16) - 1 - qmf->outScalefactor);
  p_flt = p_Filter;
  p_fltm = &p_flt[qmf->FilterSize / 2];
  for (j = no_channels - 1; j >= 0; j--) {
    FIXP_QMF imag = imagSlot[j];
    FIXP_QMF real = realSlot[j];
    {
      INT_PCM tmp;
      FIXP_QMF Are = sta[0] + (fMultDiv2(p_fltm[4], real));
      tmp = (INT_PCM)(saturateRightShift(fAbs(Are), scale));
      if (Are < (FIXP_QMF)0) {
        tmp = -tmp;
      }
      timeOut[j * stride] = tmp;
    }
    sta[0] = sta[1] + (fMultDiv2(p_flt[4], imag));
    sta[1] = sta[2] + (fMultDiv2(p_fltm[3], real));
    sta[2] = sta[3] + (fMultDiv2(p_flt[3], imag));
    sta[3] = sta[4] + (fMultDiv2(p_fltm[2], real));
    sta[4] = sta[5] + (fMultDiv2(p_flt[2], imag));
    sta[5] = sta[6] + (fMultDiv2(p_fltm[1], real));
    sta[6] = sta[7] + (fMultDiv2(p_flt[1], imag));
    sta[7] = sta[8] + (fMultDiv2(p_fltm[0], real));
    sta[8] = (fMultDiv2(p_flt[0], imag));
    p_flt += (p_stride * 5);
    p_fltm += (p_stride * 5);
    sta += 9;
  }
}

static void qmfAnaPrototypeFirSlot(FIXP_QMF* analysisBuffer, int no_channels,
                                   const FIXP_PFT* p_filter, int p_stride,
                                   FIXP_QAS* __restrict pFilterStates) {
  int k;
  FIXP_DBL accu;
  const FIXP_PFT* __restrict p_flt = p_filter;
  FIXP_QMF* __restrict pData_0 = analysisBuffer + 2 * no_channels - 1;
  FIXP_QMF* __restrict pData_1 = analysisBuffer;
  FIXP_QAS* __restrict sta_0 = (FIXP_QAS*)pFilterStates;
  FIXP_QAS* __restrict sta_1 =
    (FIXP_QAS*)pFilterStates + (2 * 5 * no_channels) - 1;
  int pfltStep = 5 * (p_stride);
  int staStep1 = no_channels << 1;
  int staStep2 = (no_channels << 3) - 1;
  accu = fMultDiv2(p_flt[0], *sta_1);
  sta_1 -= staStep1;
  accu += fMultDiv2(p_flt[1], *sta_1);
  sta_1 -= staStep1;
  accu += fMultDiv2(p_flt[2], *sta_1);
  sta_1 -= staStep1;
  accu += fMultDiv2(p_flt[3], *sta_1);
  sta_1 -= staStep1;
  accu += fMultDiv2(p_flt[4], *sta_1);
  *pData_1++ = (accu << 1);
  sta_1 += staStep2;
  p_flt += pfltStep;
  for (k = 0; k < no_channels - 1; k++) {
    accu = fMultDiv2(p_flt[0], *sta_0);
    sta_0 += staStep1;
    accu += fMultDiv2(p_flt[1], *sta_0);
    sta_0 += staStep1;
    accu += fMultDiv2(p_flt[2], *sta_0);
    sta_0 += staStep1;
    accu += fMultDiv2(p_flt[3], *sta_0);
    sta_0 += staStep1;
    accu += fMultDiv2(p_flt[4], *sta_0);
    *pData_0-- = (accu << 1);
    sta_0 -= staStep2;
    accu = fMultDiv2(p_flt[0], *sta_1);
    sta_1 -= staStep1;
    accu += fMultDiv2(p_flt[1], *sta_1);
    sta_1 -= staStep1;
    accu += fMultDiv2(p_flt[2], *sta_1);
    sta_1 -= staStep1;
    accu += fMultDiv2(p_flt[3], *sta_1);
    sta_1 -= staStep1;
    accu += fMultDiv2(p_flt[4], *sta_1);
    *pData_1++ = (accu << 1);
    sta_1 += staStep2;
    p_flt += pfltStep;
  }
  accu = fMultDiv2(p_flt[0], *sta_0);
  sta_0 += staStep1;
  accu += fMultDiv2(p_flt[1], *sta_0);
  sta_0 += staStep1;
  accu += fMultDiv2(p_flt[2], *sta_0);
  sta_0 += staStep1;
  accu += fMultDiv2(p_flt[3], *sta_0);
  sta_0 += staStep1;
  accu += fMultDiv2(p_flt[4], *sta_0);
  *pData_0-- = (accu << 1);
  sta_0 -= staStep2;
}

static void
qmfAnaPrototypeFirSlot_NonSymmetric(FIXP_QMF* analysisBuffer, int no_channels,
                                    const FIXP_PFT* p_filter, int p_stride,
                                    FIXP_QAS* __restrict pFilterStates) {
  const FIXP_PFT* __restrict p_flt = p_filter;
  int p, k;
  for (k = 0; k < 2 * no_channels; k++) {
    FIXP_DBL accu = (FIXP_DBL)0;
    p_flt += 5 * (p_stride - 1);
    for (p = 0; p < 5; p++) {
      accu += fMultDiv2(*p_flt++, pFilterStates[2 * no_channels * p]);
    }
    analysisBuffer[2 * no_channels - 1 - k] = (accu << 1);
    pFilterStates++;
  }
}

static void qmfForwardModulationLP_even(HANDLE_QMF_FILTER_BANK anaQmf,
                                        FIXP_QMF* timeIn, FIXP_QMF* rSubband) {
  int i;
  int L = anaQmf->no_channels;
  int M = L >> 1;
  int scale = 0;
  FIXP_QMF accu;
  const FIXP_QMF* timeInTmp1 = (FIXP_QMF*)&timeIn[3 * M];
  const FIXP_QMF* timeInTmp2 = timeInTmp1;
  FIXP_QMF* rSubbandTmp = rSubband;
  rSubband[0] = timeIn[3 * M] >> 1;
  for (i = M - 1; i != 0; i--) {
    accu = ((*--timeInTmp1) >> 1) + ((*++timeInTmp2) >> 1);
    *++rSubbandTmp = accu;
  }
  timeInTmp1 = &timeIn[2 * M];
  timeInTmp2 = &timeIn[0];
  rSubbandTmp = &rSubband[M];
  for (i = L - M; i != 0; i--) {
    accu = ((*timeInTmp1--) >> 1) - ((*timeInTmp2++) >> 1);
    *rSubbandTmp++ = accu;
  }
  dct_III(rSubband, timeIn, L, &scale);
}

static void qmfForwardModulationLP_odd(HANDLE_QMF_FILTER_BANK anaQmf,
                                       const FIXP_QMF* timeIn,
                                       FIXP_QMF* rSubband) {
  int i;
  int L = anaQmf->no_channels;
  int M = L >> 1;
  int shift = (anaQmf->no_channels >> 6) + 1;
  for (i = 0; i < M; i++) {
    rSubband[M + i] = (timeIn[L - 1 - i] >> 1) - (timeIn[i] >> shift);
    rSubband[M - 1 - i] =
      (timeIn[L + i] >> 1) + (timeIn[2 * L - 1 - i] >> shift);
  }
  dct_IV(rSubband, L, &shift);
}

static void qmfForwardModulationHQ(HANDLE_QMF_FILTER_BANK anaQmf,
                                   const FIXP_QMF* __restrict timeIn,
                                   FIXP_QMF* __restrict rSubband,
                                   FIXP_QMF* __restrict iSubband) {
  int i;
  int L = anaQmf->no_channels;
  int L2 = L << 1;
  int shift = 0;
  for (i = 0; i < L; i += 2) {
    FIXP_QMF x0, x1, y0, y1;
    x0 = timeIn[i] >> 1;
    x1 = timeIn[i + 1] >> 1;
    y0 = timeIn[L2 - 1 - i] >> 1;
    y1 = timeIn[L2 - 2 - i] >> 1;
    rSubband[i] = x0 - y0;
    rSubband[i + 1] = x1 - y1;
    iSubband[i] = x0 + y0;
    iSubband[i + 1] = x1 + y1;
  }
  dct_IV(rSubband, L, &shift);
  dst_IV(iSubband, L, &shift);
  {
    {
      const FIXP_QTW* __restrict sbr_t_cos;
      const FIXP_QTW* __restrict sbr_t_sin;
      sbr_t_cos = anaQmf->t_cos;
      sbr_t_sin = anaQmf->t_sin;
      for (i = 0; i < anaQmf->lsb; i++) {
        cplxMult(&iSubband[i], &rSubband[i], iSubband[i], rSubband[i],
                 sbr_t_cos[i], sbr_t_sin[i]);
      }
    }
  }
}

void qmfAnalysisFilteringSlot(HANDLE_QMF_FILTER_BANK anaQmf, FIXP_QMF* qmfReal,
                              FIXP_QMF* qmfImag,
                              const INT_PCM* __restrict timeIn,
                              const int stride, FIXP_QMF* pWorkBuffer) {
  int i;
  int offset = anaQmf->no_channels * (5 * 2 - 1);
  {
    FIXP_QAS* __restrict FilterStatesAnaTmp =
      ((FIXP_QAS*)anaQmf->FilterStates) + offset;
    for (i = anaQmf->no_channels >> 1; i != 0; i--) {
      *FilterStatesAnaTmp++ = (FIXP_QAS)*timeIn;
      timeIn += stride;
      *FilterStatesAnaTmp++ = (FIXP_QAS)*timeIn;
      timeIn += stride;
    }
  }
  if (anaQmf->flags & 2) {
    qmfAnaPrototypeFirSlot_NonSymmetric(pWorkBuffer, anaQmf->no_channels,
                                        anaQmf->p_filter, anaQmf->p_stride,
                                        (FIXP_QAS*)anaQmf->FilterStates);
  }
  else {
    qmfAnaPrototypeFirSlot(pWorkBuffer, anaQmf->no_channels, anaQmf->p_filter,
                           anaQmf->p_stride, (FIXP_QAS*)anaQmf->FilterStates);
  }
  if (anaQmf->flags & 1) {
    if (anaQmf->flags & 4) {
      qmfForwardModulationLP_odd(anaQmf, pWorkBuffer, qmfReal);
    }
    else {
      qmfForwardModulationLP_even(anaQmf, pWorkBuffer, qmfReal);
    }
  }
  else {
    qmfForwardModulationHQ(anaQmf, pWorkBuffer, qmfReal, qmfImag);
  }
  FDKmemmove((FIXP_QAS*)anaQmf->FilterStates,
             (FIXP_QAS*)anaQmf->FilterStates + anaQmf->no_channels,
             offset * sizeof(FIXP_QAS));
}

void qmfAnalysisFiltering(HANDLE_QMF_FILTER_BANK anaQmf, FIXP_QMF** qmfReal,
                          FIXP_QMF** qmfImag, QMF_SCALE_FACTOR* scaleFactor,
                          const INT_PCM* timeIn, const int stride,
                          FIXP_QMF* pWorkBuffer) {
  int i;
  int no_channels = anaQmf->no_channels;
  scaleFactor->lb_scale = -7;
  scaleFactor->lb_scale -= anaQmf->filterScale;
  for (i = 0; i < anaQmf->no_col; i++) {
    FIXP_QMF* qmfImagSlot = nullptr;
    if (!(anaQmf->flags & 1)) {
      qmfImagSlot = qmfImag[i];
    }
    qmfAnalysisFilteringSlot(anaQmf, qmfReal[i], qmfImagSlot, timeIn, stride,
                             pWorkBuffer);
    timeIn += no_channels * stride;
  }
}

inline static void qmfInverseModulationLP_even(HANDLE_QMF_FILTER_BANK synQmf,
                                               const FIXP_QMF* qmfReal,
                                               const int scaleFactorLowBand,
                                               const int scaleFactorHighBand,
                                               FIXP_QMF* pTimeOut) {
  int i;
  int L = synQmf->no_channels;
  int M = L >> 1;
  int scale = 0;
  FIXP_QMF tmp;
  FIXP_QMF* __restrict tReal = pTimeOut;
  FIXP_QMF* __restrict tImag = pTimeOut + L;
  scaleValues(&tReal[0], &qmfReal[0], synQmf->lsb, scaleFactorLowBand);
  scaleValues(&tReal[0 + synQmf->lsb], &qmfReal[0 + synQmf->lsb],
              synQmf->usb - synQmf->lsb, scaleFactorHighBand);
  FDKmemclear(&tReal[0 + synQmf->usb], (L - synQmf->usb) * sizeof(FIXP_QMF));
  dct_II(tReal, tImag, L, &scale);
  tImag[0] = tReal[M];
  tImag[M] = (FIXP_QMF)0;
  tmp = tReal[0];
  tReal[0] = tReal[M];
  tReal[M] = tmp;
  for (i = 1; i < M / 2; i++) {
    tmp = tReal[L - i];
    tImag[M - i] = tmp;
    tImag[i + M] = -tmp;
    tmp = tReal[M + i];
    tImag[i] = tmp;
    tImag[L - i] = -tmp;
    tReal[M + i] = tReal[i];
    tReal[L - i] = tReal[M - i];
    tmp = tReal[i];
    tReal[i] = tReal[M - i];
    tReal[M - i] = tmp;
  }
  tmp = tReal[M + M / 2];
  tImag[M / 2] = tmp;
  tImag[M / 2 + M] = -tmp;
  tReal[M + M / 2] = tReal[M / 2];
}

inline static void qmfInverseModulationLP_odd(HANDLE_QMF_FILTER_BANK synQmf,
                                              const FIXP_QMF* qmfReal,
                                              const int scaleFactorLowBand,
                                              const int scaleFactorHighBand,
                                              FIXP_QMF* pTimeOut) {
  int i;
  int L = synQmf->no_channels;
  int M = L >> 1;
  int shift = 0;
  scaleValues(pTimeOut + M, qmfReal, synQmf->lsb, scaleFactorLowBand);
  scaleValues(pTimeOut + M + synQmf->lsb, qmfReal + synQmf->lsb,
              synQmf->usb - synQmf->lsb, scaleFactorHighBand);
  FDKmemclear(pTimeOut + M + synQmf->usb, (L - synQmf->usb) * sizeof(FIXP_QMF));
  dct_IV(pTimeOut + M, L, &shift);
  for (i = 0; i < M; i++) {
    pTimeOut[i] = pTimeOut[L - 1 - i];
    pTimeOut[2 * L - 1 - i] = -pTimeOut[L + i];
  }
}

inline static void
qmfInverseModulationHQ(HANDLE_QMF_FILTER_BANK synQmf, const FIXP_QMF* qmfReal,
                       const FIXP_QMF* qmfImag, const int scaleFactorLowBand,
                       const int scaleFactorHighBand, FIXP_QMF* pWorkBuffer) {
  int i;
  int L = synQmf->no_channels;
  int M = L >> 1;
  int shift = 0;
  FIXP_QMF* __restrict tReal = pWorkBuffer;
  FIXP_QMF* __restrict tImag = pWorkBuffer + L;
  if (synQmf->flags & 4) {
    for (i = 0; i < synQmf->lsb; i++) {
      cplxMult(&tImag[i], &tReal[i], scaleValue(qmfImag[i], scaleFactorLowBand),
               scaleValue(qmfReal[i], scaleFactorLowBand), synQmf->t_cos[i],
               synQmf->t_sin[i]);
    }
    for (; i < synQmf->usb; i++) {
      cplxMult(&tImag[i], &tReal[i],
               scaleValue(qmfImag[i], scaleFactorHighBand),
               scaleValue(qmfReal[i], scaleFactorHighBand), synQmf->t_cos[i],
               synQmf->t_sin[i]);
    }
  }
  if ((synQmf->flags & 4) == 0) {
    scaleValues(&tReal[0], &qmfReal[0], synQmf->lsb, scaleFactorLowBand);
    scaleValues(&tReal[0 + synQmf->lsb], &qmfReal[0 + synQmf->lsb],
                synQmf->usb - synQmf->lsb, scaleFactorHighBand);
    scaleValues(&tImag[0], &qmfImag[0], synQmf->lsb, scaleFactorLowBand);
    scaleValues(&tImag[0 + synQmf->lsb], &qmfImag[0 + synQmf->lsb],
                synQmf->usb - synQmf->lsb, scaleFactorHighBand);
  }
  FDKmemclear(&tReal[synQmf->usb],
              (synQmf->no_channels - synQmf->usb) * sizeof(FIXP_QMF));
  FDKmemclear(&tImag[synQmf->usb],
              (synQmf->no_channels - synQmf->usb) * sizeof(FIXP_QMF));
  dct_IV(tReal, L, &shift);
  dst_IV(tImag, L, &shift);
  if (synQmf->flags & 4) {
    for (i = 0; i < M; i++) {
      FIXP_QMF r1, i1, r2, i2;
      r1 = tReal[i];
      i2 = tImag[L - 1 - i];
      r2 = tReal[L - i - 1];
      i1 = tImag[i];
      tReal[i] = (r1 - i1) >> 1;
      tImag[L - 1 - i] = -(r1 + i1) >> 1;
      tReal[L - i - 1] = (r2 - i2) >> 1;
      tImag[i] = -(r2 + i2) >> 1;
    }
  }
  else {
    for (i = 0; i < M; i++) {
      FIXP_QMF r1, i1, r2, i2;
      r1 = -tReal[i];
      i2 = -tImag[L - 1 - i];
      r2 = -tReal[L - i - 1];
      i1 = -tImag[i];
      tReal[i] = (r1 - i1) >> 1;
      tImag[L - 1 - i] = -(r1 + i1) >> 1;
      tReal[L - i - 1] = (r2 - i2) >> 1;
      tImag[i] = -(r2 + i2) >> 1;
    }
  }
}

void qmfSynthesisFilteringSlot(HANDLE_QMF_FILTER_BANK synQmf,
                               const FIXP_QMF* realSlot,
                               const FIXP_QMF* imagSlot,
                               const int scaleFactorLowBand,
                               const int scaleFactorHighBand, INT_PCM* timeOut,
                               const int stride, FIXP_QMF* pWorkBuffer) {
  if (!(synQmf->flags & 1)) {
    qmfInverseModulationHQ(synQmf, realSlot, imagSlot, scaleFactorLowBand,
                           scaleFactorHighBand, pWorkBuffer);
  }
  else {
    if (synQmf->flags & 4) {
      qmfInverseModulationLP_odd(synQmf, realSlot, scaleFactorLowBand,
                                 scaleFactorHighBand, pWorkBuffer);
    }
    else {
      qmfInverseModulationLP_even(synQmf, realSlot, scaleFactorLowBand,
                                  scaleFactorHighBand, pWorkBuffer);
    }
  }
  if (synQmf->flags & 2) {
    qmfSynPrototypeFirSlot_NonSymmetric(
      synQmf, pWorkBuffer, pWorkBuffer + synQmf->no_channels, timeOut, stride);
  }
  else {
    qmfSynPrototypeFirSlot(synQmf, pWorkBuffer,
                           pWorkBuffer + synQmf->no_channels, timeOut, stride);
  }
}

void qmfSynthesisFiltering(HANDLE_QMF_FILTER_BANK synQmf,
                           FIXP_QMF** QmfBufferReal, FIXP_QMF** QmfBufferImag,
                           const QMF_SCALE_FACTOR* scaleFactor,
                           const INT ov_len, INT_PCM* timeOut, const INT stride,
                           FIXP_QMF* pWorkBuffer) {
  int i;
  int L = synQmf->no_channels;
  SCHAR scaleFactorHighBand;
  SCHAR scaleFactorLowBand_ov, scaleFactorLowBand_no_ov;
  scaleFactorHighBand = -7 - scaleFactor->hb_scale;
  scaleFactorLowBand_ov = -7 - scaleFactor->ov_lb_scale;
  scaleFactorLowBand_no_ov = -7 - scaleFactor->lb_scale;
  for (i = 0; i < synQmf->no_col; i++) {
    const FIXP_DBL* QmfBufferImagSlot = nullptr;
    SCHAR scaleFactorLowBand =
      (i < ov_len) ? scaleFactorLowBand_ov : scaleFactorLowBand_no_ov;
    if (!(synQmf->flags & 1)) {
      QmfBufferImagSlot = QmfBufferImag[i];
    }
    qmfSynthesisFilteringSlot(synQmf, QmfBufferReal[i], QmfBufferImagSlot,
                              scaleFactorLowBand, scaleFactorHighBand,
                              timeOut + (i * L * stride), stride, pWorkBuffer);
  }
}

static int qmfInitFilterBank(HANDLE_QMF_FILTER_BANK h_Qmf, void* pFilterStates,
                             int noCols, int lsb, int usb, int no_channels,
                             UINT flags) {
  FDKmemclear(h_Qmf, sizeof(QMF_FILTER_BANK));
  if (flags & 16) {
    return -1;
  }
  if (!(flags & 16) && (flags & 4)) {
    flags |= 2;
    h_Qmf->filterScale = 1;
    h_Qmf->p_stride = 1;
    switch (no_channels) {
      case 64:
        h_Qmf->t_cos = qmf_phaseshift_cos64_cldfb;
        h_Qmf->t_sin = qmf_phaseshift_sin64_cldfb;
        h_Qmf->p_filter = qmf_cldfb_640;
        h_Qmf->FilterSize = 640;
        break;
      case 32:
        h_Qmf->t_cos = qmf_phaseshift_cos32_cldfb;
        h_Qmf->t_sin = qmf_phaseshift_sin32_cldfb;
        h_Qmf->p_filter = qmf_cldfb_320;
        h_Qmf->FilterSize = 320;
        break;
      default:
        return -1;
    }
  }
  if (!(flags & 16) && ((flags & 4) == 0)) {
    switch (no_channels) {
      case 64:
        h_Qmf->p_filter = qmf_64;
        h_Qmf->t_cos = qmf_phaseshift_cos64;
        h_Qmf->t_sin = qmf_phaseshift_sin64;
        h_Qmf->p_stride = 1;
        h_Qmf->FilterSize = 640;
        h_Qmf->filterScale = 0;
        break;
      case 32:
        h_Qmf->p_filter = qmf_64;
        if (flags & 64) {
          h_Qmf->t_cos = qmf_phaseshift_cos_downsamp32;
          h_Qmf->t_sin = qmf_phaseshift_sin_downsamp32;
        }
        else {
          h_Qmf->t_cos = qmf_phaseshift_cos32;
          h_Qmf->t_sin = qmf_phaseshift_sin32;
        }
        h_Qmf->p_stride = 2;
        h_Qmf->FilterSize = 640;
        h_Qmf->filterScale = 0;
        break;
      default:
        return -1;
    }
  }
  h_Qmf->flags = flags;
  h_Qmf->no_channels = no_channels;
  h_Qmf->no_col = noCols;
  h_Qmf->lsb = lsb;
  h_Qmf->usb = fMin(usb, h_Qmf->no_channels);
  h_Qmf->FilterStates = (void*)pFilterStates;
  h_Qmf->outScalefactor = 7 + 1 + h_Qmf->filterScale;
  if ((h_Qmf->p_stride == 2) || ((flags & 4) && (no_channels == 32))) {
    h_Qmf->outScalefactor -= 1;
  }
  h_Qmf->outGain = (FIXP_DBL)0x80000000;
  return (0);
}

static inline void qmfAdaptFilterStates(HANDLE_QMF_FILTER_BANK synQmf,
                                        int scaleFactorDiff) {
  if (synQmf == nullptr || synQmf->FilterStates == nullptr) {
    return;
  }
  scaleValues((FIXP_QSS*)synQmf->FilterStates,
              synQmf->no_channels * (5 * 2 - 1), scaleFactorDiff);
}

int qmfInitAnalysisFilterBank(HANDLE_QMF_FILTER_BANK h_Qmf,
                              FIXP_QAS* pFilterStates, int noCols, int lsb,
                              int usb, int no_channels, int flags) {
  int err = qmfInitFilterBank(h_Qmf, pFilterStates, noCols, lsb, usb,
                              no_channels, flags);
  if (!(flags & 8) && (h_Qmf->FilterStates != nullptr)) {
    FDKmemclear(h_Qmf->FilterStates,
                (2 * 5 - 1) * h_Qmf->no_channels * sizeof(FIXP_QAS));
  }
  return err;
}

int qmfInitSynthesisFilterBank(HANDLE_QMF_FILTER_BANK h_Qmf,
                               FIXP_QSS* pFilterStates, int noCols, int lsb,
                               int usb, int no_channels, int flags) {
  int oldOutScale = h_Qmf->outScalefactor;
  int err = qmfInitFilterBank(h_Qmf, pFilterStates, noCols, lsb, usb,
                              no_channels, flags);
  if (h_Qmf->FilterStates != nullptr) {
    if (!(flags & 8)) {
      FDKmemclear(h_Qmf->FilterStates,
                  (2 * 5 - 1) * h_Qmf->no_channels * sizeof(FIXP_QSS));
    }
    else {
      qmfAdaptFilterStates(h_Qmf, oldOutScale - h_Qmf->outScalefactor);
    }
  }
  return err;
}

void qmfChangeOutScalefactor(HANDLE_QMF_FILTER_BANK synQmf,
                             int outScalefactor) {
  if (synQmf == nullptr || synQmf->FilterStates == nullptr) {
    return;
  }
  outScalefactor += 7 + 1 + synQmf->filterScale;
  if ((synQmf->p_stride == 2) ||
      ((synQmf->flags & 4) && (synQmf->no_channels == 32))) {
    outScalefactor -= 1;
  }
  if (synQmf->outScalefactor != outScalefactor) {
    int diff;
    if (outScalefactor > (16 - 1)) {
      outScalefactor = 16 - 1;
    }
    else if (outScalefactor < (1 - 16)) {
      outScalefactor = 1 - 16;
    }
    diff = synQmf->outScalefactor - outScalefactor;
    qmfAdaptFilterStates(synQmf, diff);
    synQmf->outScalefactor = outScalefactor;
  }
}

void qmfChangeOutGain(HANDLE_QMF_FILTER_BANK synQmf, FIXP_DBL outputGain) {
  synQmf->outGain = outputGain;
}

}

/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  See licenses/fdk-aac/LICENSE.txt and QMF_CHANGES.md.
*/
