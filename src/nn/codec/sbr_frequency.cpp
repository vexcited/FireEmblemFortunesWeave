/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-02 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/sbr_frequency.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using LONG = int32_t;
using SHORT = int16_t;
using INT = int32_t;
using UINT = uint32_t;
using UCHAR = uint8_t;
using SBR_ERROR = int;
using HANDLE_SBR_HEADER_DATA = SBR_HEADER_DATA *;
using HANDLE_FREQ_BAND_DATA = FREQ_BAND_DATA *;

static constexpr int16_t fixed_sgl(double v) {
  double value = v * 32768.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 32767 ? 32767 : value <= -32768 ? -32768 : int16_t(value);
}

static constexpr int32_t fixed_dbl(double v) {
  double value = v * 2147483648.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 2147483647.0    ? 2147483647
         : value <= -2147483648.0 ? (-2147483647 - 1)
                                  : int32_t(value);
}

static int CntLeadingZeros(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

static int CountLeadingBits(int32_t value) {
  return value ? CntLeadingZeros(value ^ (value >> 31)) - 1 : 0;
}

static int fNorm(int32_t value) {
  return CountLeadingBits(value);
}

static int fNormz(int32_t value) {
  return CntLeadingZeros(value);
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 32);
}

static int32_t fMultDiv2(int16_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 16);
}

static int32_t fMultDiv2(int16_t a, int16_t b) {
  return static_cast<int32_t>(a) * b;
}

template <typename A, typename B> static int32_t fMult(A a, B b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

template <typename A, typename B>
static int32_t fMultAddDiv2(int32_t sum, A a, B b) {
  return static_cast<int32_t>(static_cast<uint32_t>(sum) + fMultDiv2(a, b));
}

static const FIXP_DBL ldIntCoeff[] = {
    -2147483647, 0x00000000, 0x02000000, 0x032b8034, 0x04000000, 0x04a4d3c2,
    0x052b8034,  0x059d5da0, 0x06000000, 0x06570069, 0x06a4d3c2, 0x06eb3a9f,
    0x072b8034,  0x0766a009, 0x079d5da0, 0x07d053f7, 0x08000000, 0x082cc7ee,
    0x08570069,  0x087ef05b, 0x08a4d3c2, 0x08c8ddd4, 0x08eb3a9f, 0x090c1050,
    0x092b8034,  0x0949a785, 0x0966a009, 0x0982809d, 0x099d5da0, 0x09b74949,
    0x09d053f7,  0x09e88c6b, 0x0a000000, 0x0a16bad3, 0x0a2cc7ee, 0x0a423162,
    0x0a570069,  0x0a6b3d79, 0x0a7ef05b, 0x0a92203d, 0x0aa4d3c2, 0x0ab7110e,
    0x0ac8ddd4,  0x0ada3f60, 0x0aeb3a9f, 0x0afbd42b, 0x0b0c1050, 0x0b1bf312,
    0x0b2b8034,  0x0b3abb40, 0x0b49a785, 0x0b584822, 0x0b66a009, 0x0b74b1fd,
    0x0b82809d,  0x0b900e61, 0x0b9d5da0, 0x0baa708f, 0x0bb74949, 0x0bc3e9ca,
    0x0bd053f7,  0x0bdc899b, 0x0be88c6b, 0x0bf45e09, 0x0c000000, 0x0c0b73cb,
    0x0c16bad3,  0x0c21d671, 0x0c2cc7ee, 0x0c379085, 0x0c423162, 0x0c4caba8,
    0x0c570069,  0x0c6130af, 0x0c6b3d79, 0x0c7527b9, 0x0c7ef05b, 0x0c88983f,
    0x0c92203d,  0x0c9b8926, 0x0ca4d3c2, 0x0cae00d2, 0x0cb7110e, 0x0cc0052b,
    0x0cc8ddd4,  0x0cd19bb0, 0x0cda3f60, 0x0ce2c97d, 0x0ceb3a9f, 0x0cf39355,
    0x0cfbd42b,  0x0d03fda9, 0x0d0c1050, 0x0d140ca0, 0x0d1bf312, 0x0d23c41d,
    0x0d2b8034,  0x0d3327c7, 0x0d3abb40, 0x0d423b08, 0x0d49a785, 0x0d510118,
    0x0d584822,  0x0d5f7cff, 0x0d66a009, 0x0d6db197, 0x0d74b1fd, 0x0d7ba190,
    0x0d82809d,  0x0d894f75, 0x0d900e61, 0x0d96bdad, 0x0d9d5da0, 0x0da3ee7f,
    0x0daa708f,  0x0db0e412, 0x0db74949, 0x0dbda072, 0x0dc3e9ca, 0x0dca258e,
    0x0dd053f7,  0x0dd6753e, 0x0ddc899b, 0x0de29143, 0x0de88c6b, 0x0dee7b47,
    0x0df45e09,  0x0dfa34e1, 0x0e000000, 0x0e05bf94, 0x0e0b73cb, 0x0e111cd2,
    0x0e16bad3,  0x0e1c4dfb, 0x0e21d671, 0x0e275460, 0x0e2cc7ee, 0x0e323143,
    0x0e379085,  0x0e3ce5d8, 0x0e423162, 0x0e477346, 0x0e4caba8, 0x0e51daa8,
    0x0e570069,  0x0e5c1d0b, 0x0e6130af, 0x0e663b74, 0x0e6b3d79, 0x0e7036db,
    0x0e7527b9,  0x0e7a1030, 0x0e7ef05b, 0x0e83c857, 0x0e88983f, 0x0e8d602e,
    0x0e92203d,  0x0e96d888, 0x0e9b8926, 0x0ea03232, 0x0ea4d3c2, 0x0ea96df0,
    0x0eae00d2,  0x0eb28c7f, 0x0eb7110e, 0x0ebb8e96, 0x0ec0052b, 0x0ec474e4,
    0x0ec8ddd4,  0x0ecd4012, 0x0ed19bb0, 0x0ed5f0c4, 0x0eda3f60, 0x0ede8797,
    0x0ee2c97d,  0x0ee70525, 0x0eeb3a9f, 0x0eef69ff, 0x0ef39355, 0x0ef7b6b4,
    0x0efbd42b,  0x0effebcd, 0x0f03fda9, 0x0f0809cf, 0x0f0c1050, 0x0f10113b,
    0x0f140ca0,  0x0f18028d, 0x0f1bf312, 0x0f1fde3d, 0x0f23c41d, 0x0f27a4c0,
    0x0f2b8034};
static const FIXP_SGL ldCoeff[10] = {
    fixed_sgl(-1.0),       fixed_sgl(-1.0 / 2.0), fixed_sgl(-1.0 / 3.0),
    fixed_sgl(-1.0 / 4.0), fixed_sgl(-1.0 / 5.0), fixed_sgl(-1.0 / 6.0),
    fixed_sgl(-1.0 / 7.0), fixed_sgl(-1.0 / 8.0), fixed_sgl(-1.0 / 9.0),
    fixed_sgl(-1.0 / 10.0)};
const UCHAR FDK_sbrDecoder_sbr_start_freq_16[16] = {
    16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
const UCHAR FDK_sbrDecoder_sbr_start_freq_22[16] = {
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 28, 30};
const UCHAR FDK_sbrDecoder_sbr_start_freq_24[16] = {
    11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 27, 29, 32};
const UCHAR FDK_sbrDecoder_sbr_start_freq_32[16] = {
    10, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 27, 29, 32};
const UCHAR FDK_sbrDecoder_sbr_start_freq_44[16] = {
    8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 23, 25, 28, 32};
const UCHAR FDK_sbrDecoder_sbr_start_freq_48[16] = {
    7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 22, 24, 27, 31};
const UCHAR FDK_sbrDecoder_sbr_start_freq_64[16] = {
    6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 21, 23, 26, 30};
const UCHAR FDK_sbrDecoder_sbr_start_freq_88[16] = {
    5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 16, 18, 20, 23, 27, 31};
const FIXP_DBL FDK_sbrDecoder_sbr_limiterBandsPerOctaveDiv4_DBL[4] = {
    fixed_dbl(1.0f / 4.0f), fixed_dbl(1.2f / 4.0f), fixed_dbl(2.0f / 4.0f),
    fixed_dbl(3.0f / 4.0f)};
FIXP_DBL CalcLdInt(INT i) {
  if ((i > 0) && (i < 193)) {
    return ldIntCoeff[i];
  }
  else {
    return (0);
  }
}

FIXP_DBL fMultNorm(FIXP_DBL f1, FIXP_DBL f2, INT *result_e) {
  INT product = 0;
  INT norm_f1, norm_f2;
  if ((f1 == (FIXP_DBL)0) || (f2 == (FIXP_DBL)0)) {
    *result_e = 0;
    return (FIXP_DBL)0;
  }
  norm_f1 = CountLeadingBits(f1);
  f1 = f1 << norm_f1;
  norm_f2 = CountLeadingBits(f2);
  f2 = f2 << norm_f2;
  product = fMult(f1, f2);
  *result_e = -(norm_f1 + norm_f2);
  return (FIXP_DBL)product;
}

FIXP_DBL fLog2(FIXP_DBL x_m, INT x_e, INT *result_e) {
  FIXP_DBL result_m;
  if (x_m <= fixed_dbl(0.0f)) {
    *result_e = 32 - 1;
    return fixed_dbl(-1.0f);
  }
  {
    FIXP_DBL px2_m, x2_m;
    {
      INT b_norm;
      b_norm = fNormz(x_m) - 1;
      x2_m = x_m << b_norm;
      x_e = x_e - b_norm;
    }
    x2_m = -(x2_m + fixed_dbl(-1.0));
    result_m = fixed_dbl(0.0);
    px2_m = x2_m;
    for (int i = 0; i < 10; i++) {
      result_m = fMultAddDiv2(result_m, ldCoeff[i], px2_m);
      px2_m = fMult(px2_m, x2_m);
    }
    result_m = fMultAddDiv2(result_m, result_m,
                            fixed_dbl(2.0 * 0.4426950408889634073599246810019));
    if (x_e != 0) {
      int enorm;
      enorm = 32 - fNorm((FIXP_DBL)x_e);
      result_m =
          (result_m >> (enorm - 1)) + ((FIXP_DBL)x_e << (32 - 1 - enorm));
      *result_e = enorm;
    }
    else {
      *result_e = 1;
    }
  }
  return result_m;
}

static inline FIXP_SGL FDK_getNumOctavesDiv8(INT a, INT b) {
  return ((SHORT)((LONG)(CalcLdInt(b) - CalcLdInt(a)) >> (16 - 3)));
}

static int numberOfBands(FIXP_SGL bpo_div16, int start, int stop, int warpFlag);
static void CalcBands(UCHAR *diff, UCHAR start, UCHAR stop, UCHAR num_bands);
static SBR_ERROR modifyBands(UCHAR max_band, UCHAR *diff, UCHAR length);
static void cumSum(UCHAR start_value, UCHAR *diff, UCHAR length,
                   UCHAR *start_adress);
static UCHAR getStartBand(UINT fs, UCHAR startFreq, UINT headerDataFlags) {
  (void)headerDataFlags;
  INT band;
  UINT fsMapped;
  fsMapped = fs;
  switch (fsMapped) {
    case 96000:
    case 88200:
      band = FDK_sbrDecoder_sbr_start_freq_88[startFreq];
      break;
    case 64000:
      band = FDK_sbrDecoder_sbr_start_freq_64[startFreq];
      break;
    case 48000:
      band = FDK_sbrDecoder_sbr_start_freq_48[startFreq];
      break;
    case 44100:
      band = FDK_sbrDecoder_sbr_start_freq_44[startFreq];
      break;
    case 32000:
      band = FDK_sbrDecoder_sbr_start_freq_32[startFreq];
      break;
    case 24000:
      band = FDK_sbrDecoder_sbr_start_freq_24[startFreq];
      break;
    case 22050:
      band = FDK_sbrDecoder_sbr_start_freq_22[startFreq];
      break;
    case 16000:
      band = FDK_sbrDecoder_sbr_start_freq_16[startFreq];
      break;
    default:
      band = 255;
  }
  return band;
}

static UCHAR getStopBand(UINT fs, UCHAR stopFreq, UINT headerDataFlags,
                         UCHAR k0) {
  UCHAR k2;
  if (stopFreq < 14) {
    INT stopMin;
    UCHAR diff_tot[29 + 50] = {};
    UCHAR *diff0 = diff_tot;
    UCHAR *diff1 = diff_tot + 29;
    if (fs < 32000) {
      stopMin = (((2 * 6000 * 2 * (64)) / fs) + 1) >> 1;
    }
    else {
      if (fs < 64000) {
        stopMin = (((2 * 8000 * 2 * (64)) / fs) + 1) >> 1;
      }
      else {
        stopMin = (((2 * 10000 * 2 * (64)) / fs) + 1) >> 1;
      }
    }
    CalcBands(diff0, stopMin, 64, 13);
    shellsort(diff0, 13);
    cumSum(stopMin, diff0, 13, diff1);
    k2 = diff1[stopFreq];
  }
  else if (stopFreq == 14) {
    k2 = 2 * k0;
  }
  else {
    k2 = 3 * k0;
  }
  if (k2 > (64)) {
    k2 = (64);
  }
  if (((k2 - k0) > 48) || (k2 <= k0)) {
    return 255;
  }
  if (headerDataFlags & (4 | 8)) {
    if ((fs >= 42000) && ((k2 - k0) > 35)) {
      return 255;
    }
    if ((fs >= 46009) && ((k2 - k0) > 32)) {
      return 255;
    }
  }
  else {
    if ((fs == 44100) && ((k2 - k0) > 35)) {
      return 255;
    }
    if ((fs >= 48000) && ((k2 - k0) > 32)) {
      return 255;
    }
  }
  return k2;
}

SBR_ERROR
sbrdecUpdateFreqScale(UCHAR *v_k_master, UCHAR *numMaster, UINT fs,
                      HANDLE_SBR_HEADER_DATA hHeaderData, UINT flags) {
  FIXP_SGL bpo_div16;
  INT dk = 0;
  UCHAR k0, k2, i;
  UCHAR num_bands0 = 0;
  UCHAR num_bands1 = 0;
  UCHAR diff_tot[29 + 50] = {};
  UCHAR *diff0 = diff_tot;
  UCHAR *diff1 = diff_tot + 29;
  INT k2_achived;
  INT k2_diff;
  INT incr = 0;
  k0 = getStartBand(fs, hHeaderData->bs_data.startFreq, flags);
  if (k0 == 255) {
    return 5;
  }
  k2 = getStopBand(fs, hHeaderData->bs_data.stopFreq, flags, k0);
  if (k2 == 255) {
    return 5;
  }
  if (hHeaderData->bs_data.freqScale > 0) {
    INT k1;
    if (hHeaderData->bs_data.freqScale == 1) {
      bpo_div16 = fixed_sgl(12.0f / 16.0f);
    }
    else if (hHeaderData->bs_data.freqScale == 2) {
      bpo_div16 = fixed_sgl(10.0f / 16.0f);
    }
    else {
      bpo_div16 = fixed_sgl(8.0f / 16.0f);
    }
    if (1000 * k2 > 2245 * k0) {
      k1 = 2 * k0;
      num_bands0 = numberOfBands(bpo_div16, k0, k1, 0);
      num_bands1 =
          numberOfBands(bpo_div16, k1, k2, hHeaderData->bs_data.alterScale);
      if (num_bands0 < 1) {
        return 5;
      }
      if (num_bands1 < 1) {
        return 5;
      }
      CalcBands(diff0, k0, k1, num_bands0);
      shellsort(diff0, num_bands0);
      if (diff0[0] == 0) {
        return 5;
      }
      cumSum(k0, diff0, num_bands0, v_k_master);
      CalcBands(diff1, k1, k2, num_bands1);
      shellsort(diff1, num_bands1);
      if (diff0[num_bands0 - 1] > diff1[0]) {
        SBR_ERROR err;
        err = modifyBands(diff0[num_bands0 - 1], diff1, num_bands1);
        if (err) {
          return 5;
        }
      }
      cumSum(k1, diff1, num_bands1, &v_k_master[num_bands0]);
      *numMaster = num_bands0 + num_bands1;
    }
    else {
      k1 = k2;
      num_bands0 = numberOfBands(bpo_div16, k0, k1, 0);
      if (num_bands0 < 1) {
        return 5;
      }
      CalcBands(diff0, k0, k1, num_bands0);
      shellsort(diff0, num_bands0);
      if (diff0[0] == 0) {
        return 5;
      }
      cumSum(k0, diff0, num_bands0, v_k_master);
      *numMaster = num_bands0;
    }
  }
  else {
    if (hHeaderData->bs_data.alterScale == 0) {
      dk = 1;
      num_bands0 = (k2 - k0) & 254;
    }
    else {
      dk = 2;
      num_bands0 = (((k2 - k0) >> 1) + 1) & 254;
    }
    if (num_bands0 < 1) {
      return 5;
    }
    k2_achived = k0 + num_bands0 * dk;
    k2_diff = k2 - k2_achived;
    for (i = 0; i < num_bands0; i++) {
      diff_tot[i] = dk;
    }
    if (k2_diff < 0) {
      incr = 1;
      i = 0;
    }
    if (k2_diff > 0) {
      incr = -1;
      i = num_bands0 - 1;
    }
    while (k2_diff != 0) {
      diff_tot[i] = diff_tot[i] - incr;
      i = i + incr;
      k2_diff = k2_diff + incr;
    }
    cumSum(k0, diff_tot, num_bands0, v_k_master);
    *numMaster = num_bands0;
  }
  if (*numMaster < 1) {
    return 5;
  }
  return 0;
}

static FIXP_SGL calcFactorPerBand(int k_start, int k_stop, int num_bands) {
  FIXP_DBL bandfactor = fixed_dbl(0.25f);
  FIXP_DBL step = fixed_dbl(0.125f);
  int direction = 1;
  FIXP_DBL start = k_start << (32 - 8);
  FIXP_DBL stop = k_stop << (32 - 8);
  FIXP_DBL temp;
  int j, i = 0;
  while (step > fixed_dbl(0.0f)) {
    i++;
    temp = stop;
    for (j = 0; j < num_bands; j++) {
      temp = fMultDiv2(temp, bandfactor) << 2;
    }
    if (temp < start) {
      if (direction == 0) {
        step = (FIXP_DBL)((LONG)step >> 1);
      }
      direction = 1;
      bandfactor = bandfactor + step;
    }
    else {
      if (direction == 1) {
        step = (FIXP_DBL)((LONG)step >> 1);
      }
      direction = 0;
      bandfactor = bandfactor - step;
    }
    if (i > 100) {
      step = fixed_dbl(0.0f);
    }
  }
  return static_cast<int16_t>((bandfactor << 1) >> 16);
}

static int numberOfBands(FIXP_SGL bpo_div16, int start, int stop,
                         int warpFlag) {
  FIXP_SGL num_bands_div128;
  int num_bands;
  num_bands_div128 = static_cast<int16_t>(
      (fMult(FDK_getNumOctavesDiv8(start, stop), bpo_div16)) >> 16);
  if (warpFlag) {
    num_bands_div128 = static_cast<int16_t>(
        (fMult(num_bands_div128, fixed_sgl(25200.0 / 32768.0))) >> 16);
  }
  num_bands_div128 = num_bands_div128 + fixed_sgl(1.0f / 128.0f);
  num_bands = 2 * ((LONG)num_bands_div128 >> (16 - 7));
  return (num_bands);
}

static void CalcBands(UCHAR *diff, UCHAR start, UCHAR stop, UCHAR num_bands) {
  int i;
  int previous;
  int current;
  FIXP_SGL exact, temp;
  FIXP_SGL bandfactor = calcFactorPerBand(start, stop, num_bands);
  previous = stop;
  exact = (FIXP_SGL)(stop << (16 - 8));
  for (i = num_bands - 1; i >= 0; i--) {
    exact = static_cast<int16_t>((fMult(exact, bandfactor)) >> 16);
    temp = exact + fixed_sgl(128.0 / 32768.0);
    current = (LONG)temp >> (16 - 8);
    diff[i] = previous - current;
    previous = current;
  }
}

static void cumSum(UCHAR start_value, UCHAR *diff, UCHAR length,
                   UCHAR *start_adress) {
  int i;
  start_adress[0] = start_value;
  for (i = 1; i <= length; i++) {
    start_adress[i] = start_adress[i - 1] + diff[i - 1];
  }
}

static SBR_ERROR modifyBands(UCHAR max_band_previous, UCHAR *diff,
                             UCHAR length) {
  int change = max_band_previous - diff[0];
  if (change > (diff[length - 1] - diff[0]) >> 1) {
    change = (diff[length - 1] - diff[0]) >> 1;
  }
  diff[0] += change;
  diff[length - 1] -= change;
  shellsort(diff, length);
  return 0;
}

static void sbrdecUpdateHiRes(UCHAR *h_hires, UCHAR *num_hires,
                              UCHAR *v_k_master, UCHAR num_bands,
                              UCHAR xover_band) {
  UCHAR i;
  *num_hires = num_bands - xover_band;
  for (i = xover_band; i <= num_bands; i++) {
    h_hires[i - xover_band] = v_k_master[i];
  }
}

static void sbrdecUpdateLoRes(UCHAR *h_lores, UCHAR *num_lores, UCHAR *h_hires,
                              UCHAR num_hires) {
  UCHAR i;
  if ((num_hires & 1) == 0) {
    *num_lores = num_hires >> 1;
    for (i = 0; i <= *num_lores; i++) {
      h_lores[i] = h_hires[i * 2];
    }
  }
  else {
    *num_lores = (num_hires + 1) >> 1;
    h_lores[0] = h_hires[0];
    for (i = 1; i <= *num_lores; i++) {
      h_lores[i] = h_hires[i * 2 - 1];
    }
  }
}

void sbrdecDownSampleLoRes(UCHAR *v_result, UCHAR num_result,
                           UCHAR *freqBandTableRef, UCHAR num_Ref) {
  int step;
  int i, j;
  int org_length, result_length;
  int v_index[48 >> 1] = {};
  org_length = num_Ref;
  result_length = num_result;
  v_index[0] = 0;
  i = 0;
  while (org_length > 0) {
    i++;
    step = org_length / result_length;
    org_length = org_length - step;
    result_length--;
    v_index[i] = v_index[i - 1] + step;
  }
  for (j = 0; j <= i; j++) {
    v_result[j] = freqBandTableRef[v_index[j]];
  }
}

void shellsort(UCHAR *in, UCHAR n) {
  int i, j, v, w;
  int inc = 1;
  do {
    inc = 3 * inc + 1;
  } while (inc <= n);
  do {
    inc = inc / 3;
    for (i = inc; i < n; i++) {
      v = in[i];
      j = i;
      while ((w = in[j - inc]) > v) {
        in[j] = w;
        j -= inc;
        if (j < inc) {
          break;
        }
      }
      in[j] = v;
    }
  } while (inc > 1);
}

SBR_ERROR
resetFreqBandTables(HANDLE_SBR_HEADER_DATA hHeaderData, const UINT flags) {
  SBR_ERROR err = 0;
  int k2, kx, lsb, usb;
  int intTemp;
  UCHAR nBandsLo, nBandsHi;
  HANDLE_FREQ_BAND_DATA hFreq = &hHeaderData->freqBandData;
  err = sbrdecUpdateFreqScale(hFreq->v_k_master, &hFreq->numMaster,
                              hHeaderData->sbrProcSmplRate, hHeaderData, flags);
  if (err || (hHeaderData->bs_info.xover_band > hFreq->numMaster)) {
    return 5;
  }
  sbrdecUpdateHiRes(hFreq->freqBandTable[1], &nBandsHi, hFreq->v_k_master,
                    hFreq->numMaster, hHeaderData->bs_info.xover_band);
  sbrdecUpdateLoRes(hFreq->freqBandTable[0], &nBandsLo, hFreq->freqBandTable[1],
                    nBandsHi);
  hFreq->nSfb[0] = nBandsLo;
  hFreq->nSfb[1] = nBandsHi;
  if (!(nBandsLo > 0) || (nBandsLo > (48 >> 1))) {
    return 5;
  }
  lsb = hFreq->freqBandTable[0][0];
  usb = hFreq->freqBandTable[0][nBandsLo];
  if ((lsb > (32)) || (lsb >= usb)) {
    return 5;
  }
  k2 = hFreq->freqBandTable[1][nBandsHi];
  kx = hFreq->freqBandTable[1][0];
  if (hHeaderData->bs_data.noise_bands == 0) {
    hFreq->nNfb = 1;
  }
  else {
    intTemp = (LONG)FDK_getNumOctavesDiv8(kx, k2) >> 2;
    intTemp = intTemp * hHeaderData->bs_data.noise_bands;
    intTemp = intTemp + (LONG)fixed_sgl(0.5f / 32.0f);
    intTemp = intTemp >> (16 - 1 - 5);
    if (intTemp == 0) {
      intTemp = 1;
    }
    hFreq->nNfb = intTemp;
  }
  hFreq->nInvfBands = hFreq->nNfb;
  if (hFreq->nNfb > 5) {
    return 5;
  }
  sbrdecDownSampleLoRes(hFreq->freqBandTableNoise, hFreq->nNfb,
                        hFreq->freqBandTable[0], nBandsLo);
  hFreq->lowSubband = lsb;
  hFreq->highSubband = usb;
  return 0;
}

SBR_ERROR
ResetLimiterBands(UCHAR *limiterBandTable, UCHAR *noLimiterBands,
                  UCHAR *freqBandTable, int noFreqBands,
                  const PATCH_PARAM *patchParam, int noPatches,
                  int limiterBands) {
  int i, k, isPatchBorder[2], loLimIndex, hiLimIndex, tempNoLim, nBands;
  UCHAR workLimiterBandTable[48 / 2 + 6 + 1] = {};
  int patchBorders[6 + 1] = {};
  int kx, k2;
  int lowSubband = freqBandTable[0];
  int highSubband = freqBandTable[noFreqBands];
  if (limiterBands == 0) {
    limiterBandTable[0] = 0;
    limiterBandTable[1] = highSubband - lowSubband;
    nBands = 1;
  }
  else {
    for (i = 0; i < noPatches; i++) {
      patchBorders[i] = patchParam[i].guardStartBand - lowSubband;
    }
    patchBorders[i] = highSubband - lowSubband;
    for (k = 0; k <= noFreqBands; k++) {
      workLimiterBandTable[k] = freqBandTable[k] - lowSubband;
    }
    for (k = 1; k < noPatches; k++) {
      workLimiterBandTable[noFreqBands + k] = patchBorders[k];
    }
    tempNoLim = nBands = noFreqBands + noPatches - 1;
    shellsort(workLimiterBandTable, tempNoLim + 1);
    loLimIndex = 0;
    hiLimIndex = 1;
    while (hiLimIndex <= tempNoLim) {
      FIXP_DBL div_m, oct_m, temp;
      INT div_e = 0, oct_e = 0, temp_e = 0;
      k2 = workLimiterBandTable[hiLimIndex] + lowSubband;
      kx = workLimiterBandTable[loLimIndex] + lowSubband;
      div_m = fDivNorm(k2, kx, &div_e);
      oct_m = fLog2(div_m, div_e, &oct_e);
      temp = fMultNorm(
          oct_m, FDK_sbrDecoder_sbr_limiterBandsPerOctaveDiv4_DBL[limiterBands],
          &temp_e);
      temp_e += oct_e + 2;
      if (temp >> (5 - temp_e) < fixed_dbl(0.49f) >> 5) {
        if (workLimiterBandTable[hiLimIndex] ==
            workLimiterBandTable[loLimIndex]) {
          workLimiterBandTable[hiLimIndex] = highSubband;
          nBands--;
          hiLimIndex++;
          continue;
        }
        isPatchBorder[0] = isPatchBorder[1] = 0;
        for (k = 0; k <= noPatches; k++) {
          if (workLimiterBandTable[hiLimIndex] == patchBorders[k]) {
            isPatchBorder[1] = 1;
            break;
          }
        }
        if (!isPatchBorder[1]) {
          workLimiterBandTable[hiLimIndex] = highSubband;
          nBands--;
          hiLimIndex++;
          continue;
        }
        for (k = 0; k <= noPatches; k++) {
          if (workLimiterBandTable[loLimIndex] == patchBorders[k]) {
            isPatchBorder[0] = 1;
            break;
          }
        }
        if (!isPatchBorder[0]) {
          workLimiterBandTable[loLimIndex] = highSubband;
          nBands--;
        }
      }
      loLimIndex = hiLimIndex;
      hiLimIndex++;
    }
    shellsort(workLimiterBandTable, tempNoLim + 1);
    if (nBands > 12 || nBands <= 0) {
      return 5;
    }
    for (k = 0; k <= nBands; k++) {
      limiterBandTable[k] = workLimiterBandTable[k];
    }
  }
  *noLimiterBands = nBands;
  return 0;
}

}
