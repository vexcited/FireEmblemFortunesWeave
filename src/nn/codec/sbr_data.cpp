/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/sbr_data.hpp"
#include "nn/codec/sbr_frequency.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using LONG = int32_t;
using SHORT = int16_t;
using INT = int32_t;
using UINT = uint32_t;
using UCHAR = uint8_t;
using SCHAR = int8_t;
using SBR_ERROR = int;
using INVF_MODE = int32_t;
using COUPLING_MODE = int32_t;
using HANDLE_SBR_HEADER_DATA = SBR_HEADER_DATA*;
using HANDLE_SBR_FRAME_DATA = SBR_FRAME_DATA*;
using HANDLE_SBR_PREV_FRAME_DATA = SBR_PREV_FRAME_DATA*;
using HANDLE_FREQ_BAND_DATA = FREQ_BAND_DATA*;
void* FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
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

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int fixMax(int a, int b) {
  return a > b ? a : b;
}

static int32_t fMultDiv2(int16_t a, int16_t b) {
  return static_cast<int32_t>(a) * b;
}

static int32_t fMult(int16_t a, int16_t b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

extern const FIXP_SGL FDK_sbrDecoder_invTable[256];
const FIXP_SGL FDK_sbrDecoder_invTable[256] = {
  0x7f80, 0x7f01, 0x7e83, 0x7e07, 0x7d8b, 0x7d11, 0x7c97, 0x7c1e, 0x7ba6,
  0x7b2f, 0x7ab9, 0x7a44, 0x79cf, 0x795c, 0x78e9, 0x7878, 0x7807, 0x7796,
  0x7727, 0x76b9, 0x764b, 0x75de, 0x7572, 0x7506, 0x749c, 0x7432, 0x73c9,
  0x7360, 0x72f9, 0x7292, 0x722c, 0x71c6, 0x7161, 0x70fd, 0x709a, 0x7037,
  0x6fd5, 0x6f74, 0x6f13, 0x6eb3, 0x6e54, 0x6df5, 0x6d97, 0x6d39, 0x6cdc,
  0x6c80, 0x6c24, 0x6bc9, 0x6b6f, 0x6b15, 0x6abc, 0x6a63, 0x6a0b, 0x69b3,
  0x695c, 0x6906, 0x68b0, 0x685a, 0x6806, 0x67b1, 0x675e, 0x670a, 0x66b8,
  0x6666, 0x6614, 0x65c3, 0x6572, 0x6522, 0x64d2, 0x6483, 0x6434, 0x63e6,
  0x6399, 0x634b, 0x62fe, 0x62b2, 0x6266, 0x621b, 0x61d0, 0x6185, 0x613b,
  0x60f2, 0x60a8, 0x6060, 0x6017, 0x5fcf, 0x5f88, 0x5f41, 0x5efa, 0x5eb4,
  0x5e6e, 0x5e28, 0x5de3, 0x5d9f, 0x5d5a, 0x5d17, 0x5cd3, 0x5c90, 0x5c4d,
  0x5c0b, 0x5bc9, 0x5b87, 0x5b46, 0x5b05, 0x5ac4, 0x5a84, 0x5a44, 0x5a05,
  0x59c6, 0x5987, 0x5949, 0x590a, 0x58cd, 0x588f, 0x5852, 0x5815, 0x57d9,
  0x579d, 0x5761, 0x5725, 0x56ea, 0x56af, 0x5675, 0x563b, 0x5601, 0x55c7,
  0x558e, 0x5555, 0x551c, 0x54e3, 0x54ab, 0x5473, 0x543c, 0x5405, 0x53ce,
  0x5397, 0x5360, 0x532a, 0x52f4, 0x52bf, 0x5289, 0x5254, 0x521f, 0x51eb,
  0x51b7, 0x5183, 0x514f, 0x511b, 0x50e8, 0x50b5, 0x5082, 0x5050, 0x501d,
  0x4feb, 0x4fba, 0x4f88, 0x4f57, 0x4f26, 0x4ef5, 0x4ec4, 0x4e94, 0x4e64,
  0x4e34, 0x4e04, 0x4dd5, 0x4da6, 0x4d77, 0x4d48, 0x4d19, 0x4ceb, 0x4cbd,
  0x4c8f, 0x4c61, 0x4c34, 0x4c07, 0x4bd9, 0x4bad, 0x4b80, 0x4b54, 0x4b27,
  0x4afb, 0x4acf, 0x4aa4, 0x4a78, 0x4a4d, 0x4a22, 0x49f7, 0x49cd, 0x49a2,
  0x4978, 0x494e, 0x4924, 0x48fa, 0x48d1, 0x48a7, 0x487e, 0x4855, 0x482d,
  0x4804, 0x47dc, 0x47b3, 0x478b, 0x4763, 0x473c, 0x4714, 0x46ed, 0x46c5,
  0x469e, 0x4677, 0x4651, 0x462a, 0x4604, 0x45de, 0x45b8, 0x4592, 0x456c,
  0x4546, 0x4521, 0x44fc, 0x44d7, 0x44b2, 0x448d, 0x4468, 0x4444, 0x441f,
  0x43fb, 0x43d7, 0x43b3, 0x4390, 0x436c, 0x4349, 0x4325, 0x4302, 0x42df,
  0x42bc, 0x4299, 0x4277, 0x4254, 0x4232, 0x4210, 0x41ee, 0x41cc, 0x41aa,
  0x4189, 0x4167, 0x4146, 0x4125, 0x4104, 0x40e3, 0x40c2, 0x40a1, 0x4081,
  0x4060, 0x4040, 0x4020, 0x4000};
static inline FIXP_SGL FDK_getNumOctavesDiv8(INT a, INT b) {
  return ((SHORT)((LONG)(CalcLdInt(b) - CalcLdInt(a)) >> (16 - 3)));
}

inline void FDK_add_MantExp(FIXP_SGL a_m, SCHAR a_e, FIXP_SGL b_m, SCHAR b_e,
                            FIXP_SGL* ptrSum_m, SCHAR* ptrSum_e) {
  FIXP_DBL accu;
  int shift;
  int shiftAbs;
  FIXP_DBL shiftedMantissa;
  FIXP_DBL otherMantissa;
  shift = (int)(a_e - b_e);
  shiftAbs = (shift > 0) ? shift : -shift;
  shiftAbs = (shiftAbs < 32 - 1) ? shiftAbs : 32 - 1;
  shiftedMantissa =
    (shift > 0)
      ? (static_cast<int32_t>(static_cast<uint32_t>(static_cast<int32_t>(b_m))
                              << 16) >>
         shiftAbs)
      : (static_cast<int32_t>(static_cast<uint32_t>(static_cast<int32_t>(a_m))
                              << 16) >>
         shiftAbs);
  otherMantissa = (shift > 0)
                    ? static_cast<int32_t>(
                        static_cast<uint32_t>(static_cast<int32_t>(a_m)) << 16)
                    : static_cast<int32_t>(
                        static_cast<uint32_t>(static_cast<int32_t>(b_m)) << 16);
  *ptrSum_e = (shift > 0) ? a_e : b_e;
  accu = (shiftedMantissa >> 1) + (otherMantissa >> 1);
  if ((accu >= (fixed_dbl(0.5f) - (FIXP_DBL)1)) || (accu <= fixed_dbl(-0.5f))) {
    *ptrSum_e += 1;
  }
  else {
    accu = (shiftedMantissa + otherMantissa);
  }
  *ptrSum_m = static_cast<int16_t>((accu) >> 16);
}

static inline void FDK_divide_MantExp(FIXP_SGL a_m, SCHAR a_e, FIXP_SGL b_m,
                                      SCHAR b_e, FIXP_SGL* ptrResult_m,
                                      SCHAR* ptrResult_e) {
  int preShift, postShift, index, shift;
  FIXP_DBL ratio_m;
  FIXP_SGL bInv_m = fixed_sgl(0.0f);
  preShift = CntLeadingZeros(static_cast<int32_t>(
    static_cast<uint32_t>(static_cast<int32_t>(b_m)) << 16));
  shift = (16 - 2 - 8 - preShift);
  index = (shift < 0) ? (LONG)b_m << (-shift) : (LONG)b_m >> shift;
  index &= (1 << (8 + 1)) - 1;
  index--;
  index = index >> 1;
  bInv_m = (index < 0) ? bInv_m : FDK_sbrDecoder_invTable[index];
  ratio_m = (index < 0)
              ? static_cast<int32_t>(
                  static_cast<uint32_t>(static_cast<int32_t>(a_m >> 1)) << 16)
              : fMultDiv2(bInv_m, a_m);
  postShift = CntLeadingZeros(ratio_m) - 1;
  *ptrResult_m = static_cast<int16_t>((ratio_m << postShift) >> 16);
  *ptrResult_e = a_e - b_e + 1 + preShift - postShift;
}

static void decodeEnvelope(HANDLE_SBR_HEADER_DATA hHeaderData,
                           HANDLE_SBR_FRAME_DATA h_sbr_data,
                           HANDLE_SBR_PREV_FRAME_DATA h_prev_data,
                           HANDLE_SBR_PREV_FRAME_DATA h_prev_data_otherChannel);
static void sbr_envelope_unmapping(HANDLE_SBR_HEADER_DATA hHeaderData,
                                   HANDLE_SBR_FRAME_DATA h_data_left,
                                   HANDLE_SBR_FRAME_DATA h_data_right);
static void requantizeEnvelopeData(HANDLE_SBR_FRAME_DATA h_sbr_data,
                                   int ampResolution);
static void
deltaToLinearPcmEnvelopeDecoding(HANDLE_SBR_HEADER_DATA hHeaderData,
                                 HANDLE_SBR_FRAME_DATA h_sbr_data,
                                 HANDLE_SBR_PREV_FRAME_DATA h_prev_data);
static void decodeNoiseFloorlevels(HANDLE_SBR_HEADER_DATA hHeaderData,
                                   HANDLE_SBR_FRAME_DATA h_sbr_data,
                                   HANDLE_SBR_PREV_FRAME_DATA h_prev_data);
static void timeCompensateFirstEnvelope(HANDLE_SBR_HEADER_DATA hHeaderData,
                                        HANDLE_SBR_FRAME_DATA h_sbr_data,
                                        HANDLE_SBR_PREV_FRAME_DATA h_prev_data);
static int checkEnvelopeData(HANDLE_SBR_HEADER_DATA hHeaderData,
                             HANDLE_SBR_FRAME_DATA h_sbr_data,
                             HANDLE_SBR_PREV_FRAME_DATA h_prev_data);
static int indexLow2High(int offset, int index, int res) {
  if (res == 0) {
    if (offset >= 0) {
      if (index < offset) {
        return (index);
      }
      else {
        return (2 * index - offset);
      }
    }
    else {
      offset = -offset;
      if (index < offset) {
        return (2 * index + index);
      }
      else {
        return (2 * index + offset);
      }
    }
  }
  else {
    return (index);
  }
}

static void mapLowResEnergyVal(FIXP_SGL currVal, FIXP_SGL* prevData, int offset,
                               int index, int res) {
  if (res == 0) {
    if (offset >= 0) {
      if (index < offset) {
        prevData[index] = currVal;
      }
      else {
        prevData[2 * index - offset] = currVal;
        prevData[2 * index + 1 - offset] = currVal;
      }
    }
    else {
      offset = -offset;
      if (index < offset) {
        prevData[3 * index] = currVal;
        prevData[3 * index + 1] = currVal;
        prevData[3 * index + 2] = currVal;
      }
      else {
        prevData[2 * index + offset] = currVal;
        prevData[2 * index + 1 + offset] = currVal;
      }
    }
  }
  else {
    prevData[index] = currVal;
  }
}

void decodeSbrData(HANDLE_SBR_HEADER_DATA hHeaderData,
                   HANDLE_SBR_FRAME_DATA h_data_left,
                   HANDLE_SBR_PREV_FRAME_DATA h_prev_data_left,
                   HANDLE_SBR_FRAME_DATA h_data_right,
                   HANDLE_SBR_PREV_FRAME_DATA h_prev_data_right) {
  FIXP_SGL tempSfbNrgPrev[48];
  int errLeft;
  FDKmemcpy(tempSfbNrgPrev, h_prev_data_left->sfb_nrg_prev,
            48 * sizeof(FIXP_SGL));
  decodeEnvelope(hHeaderData, h_data_left, h_prev_data_left, h_prev_data_right);
  decodeNoiseFloorlevels(hHeaderData, h_data_left, h_prev_data_left);
  if (h_data_right != nullptr) {
    errLeft = hHeaderData->frameErrorFlag;
    decodeEnvelope(hHeaderData, h_data_right, h_prev_data_right,
                   h_prev_data_left);
    decodeNoiseFloorlevels(hHeaderData, h_data_right, h_prev_data_right);
    if (!errLeft && hHeaderData->frameErrorFlag) {
      FDKmemcpy(h_prev_data_left->sfb_nrg_prev, tempSfbNrgPrev,
                48 * sizeof(FIXP_SGL));
      decodeEnvelope(hHeaderData, h_data_left, h_prev_data_left,
                     h_prev_data_right);
    }
    if (h_data_left->coupling) {
      sbr_envelope_unmapping(hHeaderData, h_data_left, h_data_right);
    }
  }
}

static void sbr_envelope_unmapping(HANDLE_SBR_HEADER_DATA hHeaderData,
                                   HANDLE_SBR_FRAME_DATA h_data_left,
                                   HANDLE_SBR_FRAME_DATA h_data_right) {
  int i;
  FIXP_SGL tempL_m, tempR_m, tempRplus1_m, newL_m, newR_m;
  SCHAR tempL_e, tempR_e, tempRplus1_e, newL_e, newR_e;
  for (i = 0; i < h_data_left->nScaleFactors; i++) {
    tempR_m = (FIXP_SGL)((LONG)h_data_right->iEnvelope[i] & 0xffc0);
    tempR_e = (SCHAR)((LONG)h_data_right->iEnvelope[i] & 0x3f);
    tempR_e -= (18 + 16);
    tempL_m = (FIXP_SGL)((LONG)h_data_left->iEnvelope[i] & 0xffc0);
    tempL_e = (SCHAR)((LONG)h_data_left->iEnvelope[i] & 0x3f);
    tempL_e -= 16;
    FDK_add_MantExp(tempR_m, tempR_e, fixed_sgl(0.5f), 1, &tempRplus1_m,
                    &tempRplus1_e);
    FDK_divide_MantExp(tempL_m, tempL_e + 1, tempRplus1_m, tempRplus1_e,
                       &newR_m, &newR_e);
    if (newR_m >= ((FIXP_SGL)32767 - ((FIXP_SGL)(1 << (6 - 1))))) {
      newR_m >>= 1;
      newR_e += 1;
    }
    newL_m = static_cast<int16_t>((fMult(tempR_m, newR_m)) >> 16);
    newL_e = tempR_e + newR_e;
    h_data_right->iEnvelope[i] =
      ((FIXP_SGL)((SHORT)(FIXP_SGL)(newR_m + ((FIXP_SGL)(1 << (6 - 1)))) &
                  0xffc0)) +
      (FIXP_SGL)((SHORT)(FIXP_SGL)(newR_e + 16) & 0x3f);
    h_data_left->iEnvelope[i] =
      ((FIXP_SGL)((SHORT)(FIXP_SGL)(newL_m + ((FIXP_SGL)(1 << (6 - 1)))) &
                  0xffc0)) +
      (FIXP_SGL)((SHORT)(FIXP_SGL)(newL_e + 16) & 0x3f);
  }
  for (i = 0; i < hHeaderData->freqBandData.nNfb *
                    h_data_left->frameInfo.nNoiseEnvelopes;
       i++) {
    tempL_e = (SCHAR)(6 - (LONG)h_data_left->sbrNoiseFloorLevel[i]);
    tempR_e = (SCHAR)((LONG)h_data_right->sbrNoiseFloorLevel[i] - 12);
    FDK_add_MantExp(fixed_sgl(0.5f), 1 + tempR_e, fixed_sgl(0.5f), 1,
                    &tempRplus1_m, &tempRplus1_e);
    FDK_divide_MantExp(fixed_sgl(0.5f), tempL_e + 2, tempRplus1_m, tempRplus1_e,
                       &newR_m, &newR_e);
    newL_m = newR_m;
    newL_e = newR_e + tempR_e;
    h_data_right->sbrNoiseFloorLevel[i] =
      ((FIXP_SGL)((SHORT)(FIXP_SGL)(newR_m + ((FIXP_SGL)(1 << (6 - 1)))) &
                  0xffc0)) +
      (FIXP_SGL)((SHORT)(FIXP_SGL)(newR_e + 38) & 0x3f);
    h_data_left->sbrNoiseFloorLevel[i] =
      ((FIXP_SGL)((SHORT)(FIXP_SGL)(newL_m + ((FIXP_SGL)(1 << (6 - 1)))) &
                  0xffc0)) +
      (FIXP_SGL)((SHORT)(FIXP_SGL)(newL_e + 38) & 0x3f);
  }
}

static void leanSbrConcealment(HANDLE_SBR_HEADER_DATA hHeaderData,
                               HANDLE_SBR_FRAME_DATA h_sbr_data,
                               HANDLE_SBR_PREV_FRAME_DATA h_prev_data) {
  FIXP_SGL target;
  FIXP_SGL step;
  int i;
  int currentStartPos =
    ((0) > (h_prev_data->stopPos - hHeaderData->numberTimeSlots)
       ? (0)
       : (h_prev_data->stopPos - hHeaderData->numberTimeSlots));
  int currentStopPos = hHeaderData->numberTimeSlots;
  h_sbr_data->ampResolutionCurrentFrame = h_prev_data->ampRes;
  h_sbr_data->coupling = h_prev_data->coupling;
  for (i = 0; i < 5; i++) {
    h_sbr_data->sbr_invf_mode[i] = h_prev_data->sbr_invf_mode[i];
  }
  h_sbr_data->frameInfo.nEnvelopes = 1;
  h_sbr_data->frameInfo.borders[0] = currentStartPos;
  h_sbr_data->frameInfo.borders[1] = currentStopPos;
  h_sbr_data->frameInfo.freqRes[0] = 1;
  h_sbr_data->frameInfo.tranEnv = -1;
  h_sbr_data->frameInfo.nNoiseEnvelopes = 1;
  h_sbr_data->frameInfo.bordersNoise[0] = currentStartPos;
  h_sbr_data->frameInfo.bordersNoise[1] = currentStopPos;
  h_sbr_data->nScaleFactors = hHeaderData->freqBandData.nSfb[1];
  h_sbr_data->domain_vec[0] = 1;
  if (h_sbr_data->coupling == 2) {
    target = (FIXP_SGL)(12 << 0);
    step = (FIXP_SGL)1;
  }
  else {
    target = fixed_sgl(0.0f);
    step = (FIXP_SGL)(1 << 0);
  }
  if (hHeaderData->bs_info.ampResolution == 0) {
    target <<= 1;
    step <<= 1;
  }
  for (i = 0; i < h_sbr_data->nScaleFactors; i++) {
    if (h_prev_data->sfb_nrg_prev[i] > target) {
      h_sbr_data->iEnvelope[i] = -step;
    }
    else {
      h_sbr_data->iEnvelope[i] = step;
    }
  }
  h_sbr_data->domain_vec_noise[0] = 1;
  for (i = 0; i < hHeaderData->freqBandData.nNfb; i++) {
    h_sbr_data->sbrNoiseFloorLevel[i] = fixed_sgl(0.0f);
  }
  FDKmemclear(h_sbr_data->addHarmonics, 48);
}

static void decodeEnvelope(HANDLE_SBR_HEADER_DATA hHeaderData,
                           HANDLE_SBR_FRAME_DATA h_sbr_data,
                           HANDLE_SBR_PREV_FRAME_DATA h_prev_data,
                           HANDLE_SBR_PREV_FRAME_DATA otherChannel) {
  int i;
  int fFrameError = hHeaderData->frameErrorFlag;
  FIXP_SGL tempSfbNrgPrev[48];
  if (!fFrameError) {
    if (h_prev_data->frameErrorFlag) {
      if (h_sbr_data->domain_vec[0] != 0) {
        fFrameError = 1;
      }
    }
    else {
      if (h_sbr_data->frameInfo.borders[0] !=
          h_prev_data->stopPos - hHeaderData->numberTimeSlots) {
        if (h_sbr_data->domain_vec[0] == 1) {
          fFrameError = 1;
        }
        else {
          fFrameError = 1;
        }
      }
    }
  }
  if (fFrameError) {
    leanSbrConcealment(hHeaderData, h_sbr_data, h_prev_data);
    deltaToLinearPcmEnvelopeDecoding(hHeaderData, h_sbr_data, h_prev_data);
  }
  else {
    if (h_prev_data->frameErrorFlag) {
      timeCompensateFirstEnvelope(hHeaderData, h_sbr_data, h_prev_data);
      if (h_sbr_data->coupling != h_prev_data->coupling) {
        for (i = 0; i < hHeaderData->freqBandData.nSfb[1]; i++) {
          if (h_prev_data->coupling == 2) {
            h_prev_data->sfb_nrg_prev[i] = otherChannel->sfb_nrg_prev[i];
          }
          else if (h_sbr_data->coupling == 1) {
            h_prev_data->sfb_nrg_prev[i] =
              (h_prev_data->sfb_nrg_prev[i] + otherChannel->sfb_nrg_prev[i]) >>
              1;
          }
          else if (h_sbr_data->coupling == 2) {
            h_prev_data->sfb_nrg_prev[i] = (FIXP_SGL)(12 << 0);
          }
        }
      }
    }
    FDKmemcpy(tempSfbNrgPrev, h_prev_data->sfb_nrg_prev, 48 * sizeof(FIXP_SGL));
    deltaToLinearPcmEnvelopeDecoding(hHeaderData, h_sbr_data, h_prev_data);
    fFrameError = checkEnvelopeData(hHeaderData, h_sbr_data, h_prev_data);
    if (fFrameError) {
      hHeaderData->frameErrorFlag = 1;
      FDKmemcpy(h_prev_data->sfb_nrg_prev, tempSfbNrgPrev,
                48 * sizeof(FIXP_SGL));
      decodeEnvelope(hHeaderData, h_sbr_data, h_prev_data, otherChannel);
      return;
    }
  }
  requantizeEnvelopeData(h_sbr_data, h_sbr_data->ampResolutionCurrentFrame);
  hHeaderData->frameErrorFlag = fFrameError;
}

static int checkEnvelopeData(HANDLE_SBR_HEADER_DATA hHeaderData,
                             HANDLE_SBR_FRAME_DATA h_sbr_data,
                             HANDLE_SBR_PREV_FRAME_DATA h_prev_data) {
  FIXP_SGL* iEnvelope = h_sbr_data->iEnvelope;
  FIXP_SGL* sfb_nrg_prev = h_prev_data->sfb_nrg_prev;
  int i = 0, errorFlag = 0;
  FIXP_SGL sbr_max_energy =
    (h_sbr_data->ampResolutionCurrentFrame == 1) ? (35 << 0) : ((35 << 0) << 1);
  for (i = 0; i < h_sbr_data->nScaleFactors; i++) {
    if (iEnvelope[i] > sbr_max_energy) {
      errorFlag = 1;
    }
    if (iEnvelope[i] < fixed_sgl(0.0f)) {
      errorFlag = 1;
    }
  }
  for (i = 0; i < hHeaderData->freqBandData.nSfb[1]; i++) {
    sfb_nrg_prev[i] = fixMax(sfb_nrg_prev[i], fixed_sgl(0.0f));
    sfb_nrg_prev[i] = fixMin(sfb_nrg_prev[i], sbr_max_energy);
  }
  return (errorFlag);
}

static void limitNoiseLevels(HANDLE_SBR_HEADER_DATA hHeaderData,
                             HANDLE_SBR_FRAME_DATA h_sbr_data) {
  int i;
  int nNfb = hHeaderData->freqBandData.nNfb;
  for (i = 0; i < h_sbr_data->frameInfo.nNoiseEnvelopes * nNfb; i++) {
    h_sbr_data->sbrNoiseFloorLevel[i] =
      fixMin(h_sbr_data->sbrNoiseFloorLevel[i], ((FIXP_SGL)35));
    h_sbr_data->sbrNoiseFloorLevel[i] =
      fixMax(h_sbr_data->sbrNoiseFloorLevel[i], ((FIXP_SGL)0));
  }
}

static void
timeCompensateFirstEnvelope(HANDLE_SBR_HEADER_DATA hHeaderData,
                            HANDLE_SBR_FRAME_DATA h_sbr_data,
                            HANDLE_SBR_PREV_FRAME_DATA h_prev_data) {
  int i, nScalefactors;
  FRAME_INFO* pFrameInfo = &h_sbr_data->frameInfo;
  UCHAR* nSfb = hHeaderData->freqBandData.nSfb;
  int estimatedStartPos = h_prev_data->stopPos - hHeaderData->numberTimeSlots;
  int refLen, newLen, shift;
  FIXP_SGL deltaExp;
  refLen = pFrameInfo->borders[1] - pFrameInfo->borders[0];
  newLen = pFrameInfo->borders[1] - estimatedStartPos;
  if (newLen <= 0) {
    newLen = refLen;
    estimatedStartPos = pFrameInfo->borders[0];
  }
  deltaExp = FDK_getNumOctavesDiv8(newLen, refLen);
  shift = (16 - 1 - 0 - 1 + h_sbr_data->ampResolutionCurrentFrame - 3);
  deltaExp = deltaExp >> shift;
  pFrameInfo->borders[0] = estimatedStartPos;
  pFrameInfo->bordersNoise[0] = estimatedStartPos;
  if (h_sbr_data->coupling != 2) {
    nScalefactors = (pFrameInfo->freqRes[0]) ? nSfb[1] : nSfb[0];
    for (i = 0; i < nScalefactors; i++) {
      h_sbr_data->iEnvelope[i] = h_sbr_data->iEnvelope[i] + deltaExp;
    }
  }
}

static void requantizeEnvelopeData(HANDLE_SBR_FRAME_DATA h_sbr_data,
                                   int ampResolution) {
  int i;
  FIXP_SGL mantissa;
  int ampShift = 1 - ampResolution;
  int exponent;
  for (i = 0; i < h_sbr_data->nScaleFactors; i++) {
    exponent = (LONG)h_sbr_data->iEnvelope[i];
    mantissa =
      (exponent & ampShift) ? fixed_sgl(0.707106781186548f) : fixed_sgl(0.5f);
    exponent = exponent >> ampShift;
    exponent += 7 + 16;
    h_sbr_data->iEnvelope[i] =
      (FIXP_SGL)(((LONG)mantissa & 0xffc0) | (exponent & 0x3f));
  }
}

static void
deltaToLinearPcmEnvelopeDecoding(HANDLE_SBR_HEADER_DATA hHeaderData,
                                 HANDLE_SBR_FRAME_DATA h_sbr_data,
                                 HANDLE_SBR_PREV_FRAME_DATA h_prev_data) {
  int i, domain, no_of_bands, band, freqRes;
  FIXP_SGL* sfb_nrg_prev = h_prev_data->sfb_nrg_prev;
  FIXP_SGL* ptr_nrg = h_sbr_data->iEnvelope;
  int offset =
    2 * hHeaderData->freqBandData.nSfb[0] - hHeaderData->freqBandData.nSfb[1];
  for (i = 0; i < h_sbr_data->frameInfo.nEnvelopes; i++) {
    domain = h_sbr_data->domain_vec[i];
    freqRes = h_sbr_data->frameInfo.freqRes[i];
    no_of_bands = hHeaderData->freqBandData.nSfb[freqRes];
    if (domain == 0) {
      mapLowResEnergyVal(*ptr_nrg, sfb_nrg_prev, offset, 0, freqRes);
      ptr_nrg++;
      for (band = 1; band < no_of_bands; band++) {
        *ptr_nrg = *ptr_nrg + *(ptr_nrg - 1);
        mapLowResEnergyVal(*ptr_nrg, sfb_nrg_prev, offset, band, freqRes);
        ptr_nrg++;
      }
    }
    else {
      for (band = 0; band < no_of_bands; band++) {
        *ptr_nrg =
          *ptr_nrg + sfb_nrg_prev[indexLow2High(offset, band, freqRes)];
        mapLowResEnergyVal(*ptr_nrg, sfb_nrg_prev, offset, band, freqRes);
        ptr_nrg++;
      }
    }
  }
}

static void decodeNoiseFloorlevels(HANDLE_SBR_HEADER_DATA hHeaderData,
                                   HANDLE_SBR_FRAME_DATA h_sbr_data,
                                   HANDLE_SBR_PREV_FRAME_DATA h_prev_data) {
  int i;
  int nNfb = hHeaderData->freqBandData.nNfb;
  int nNoiseFloorEnvelopes = h_sbr_data->frameInfo.nNoiseEnvelopes;
  if (h_sbr_data->domain_vec_noise[0] == 0) {
    FIXP_SGL noiseLevel = h_sbr_data->sbrNoiseFloorLevel[0];
    for (i = 1; i < nNfb; i++) {
      noiseLevel += h_sbr_data->sbrNoiseFloorLevel[i];
      h_sbr_data->sbrNoiseFloorLevel[i] = noiseLevel;
    }
  }
  else {
    for (i = 0; i < nNfb; i++) {
      h_sbr_data->sbrNoiseFloorLevel[i] += h_prev_data->prevNoiseLevel[i];
    }
  }
  if (nNoiseFloorEnvelopes > 1) {
    if (h_sbr_data->domain_vec_noise[1] == 0) {
      FIXP_SGL noiseLevel = h_sbr_data->sbrNoiseFloorLevel[nNfb];
      for (i = nNfb + 1; i < 2 * nNfb; i++) {
        noiseLevel += h_sbr_data->sbrNoiseFloorLevel[i];
        h_sbr_data->sbrNoiseFloorLevel[i] = noiseLevel;
      }
    }
    else {
      for (i = 0; i < nNfb; i++) {
        h_sbr_data->sbrNoiseFloorLevel[i + nNfb] +=
          h_sbr_data->sbrNoiseFloorLevel[i];
      }
    }
  }
  limitNoiseLevels(hHeaderData, h_sbr_data);
  for (i = 0; i < nNfb; i++) {
    h_prev_data->prevNoiseLevel[i] =
      h_sbr_data->sbrNoiseFloorLevel[i + nNfb * (nNoiseFloorEnvelopes - 1)];
  }
  if (!h_sbr_data->coupling) {
    int nf_e;
    for (i = 0; i < nNoiseFloorEnvelopes * nNfb; i++) {
      nf_e = 6 - (LONG)h_sbr_data->sbrNoiseFloorLevel[i] + 1 + 38;
      h_sbr_data->sbrNoiseFloorLevel[i] =
        (FIXP_SGL)(((LONG)fixed_sgl(0.5f)) + (nf_e & 0x3f));
    }
  }
}

}
