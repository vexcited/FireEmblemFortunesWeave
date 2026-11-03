/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/sbr_transposer.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using LONG = int32_t;
using SHORT = int16_t;
using INT = int32_t;
using UINT = uint32_t;
using UCHAR = uint8_t;
using USHORT = uint16_t;
using SBR_ERROR = int;
using HANDLE_SBR_LPP_TRANS = SBR_LPP_TRANS *;

void FDKmemclear(void *, unsigned int);

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

static constexpr int32_t fixed_runtime_dbl(float v) {
  return int32_t(v * 2147483648.0f + (v > 0 ? 0.5f : -0.5f));
}

static int CntLeadingZeros(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

static int CountLeadingBits(int32_t value) {
  return value ? CntLeadingZeros(value ^ (value >> 31)) - 1 : 0;
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

static int32_t fAbs(int32_t value) {
  return fixp_abs(value);
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

template <typename A> static int32_t fPow2(A value) {
  return fMult(value, value);
}

static int32_t fPow2Div2(int32_t value) {
  return fMultDiv2(value, value);
}

static int32_t scaleValue(int32_t value, int shift) {
  return shift >= 0 ? static_cast<int32_t>(static_cast<uint32_t>(value)
                                           << (shift & 31))
                    : value >> (-shift & 31);
}

static void scaleValues(int32_t *data, int count, int shift) {
  shift = fixMax(-31, fixMin(31, shift));
  for (int i = 0; i < count; ++i) {
    data[i] = scaleValue(data[i], shift);
  }
}

static int getScalefactor(const int32_t *data, int count) {
  uint32_t magnitude = 0;
  for (int i = 0; i < count; ++i) {
    magnitude |= data[i] ^ (data[i] >> 31);
  }
  return fixMax(0, CntLeadingZeros(magnitude) - 1);
}

const USHORT FDK_sbrDecoder_sbr_whFactorsIndex[9] = {
    0, 5000, 6000, 6500, 7000, 7500, 8000, 9000, 10000};
const FIXP_DBL FDK_sbrDecoder_sbr_whFactorsTable[9][6] = {
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
    {fixed_dbl(0.00f), fixed_dbl(0.6f), fixed_dbl(0.75f), fixed_dbl(0.90f),
     fixed_dbl(0.98f)},
};
INT autoCorr2nd_real(ACORR_COEFS *ac, const FIXP_DBL *reBuffer, const int len) {
  int j, autoCorrScaling, mScale;
  FIXP_DBL accu1, accu2, accu3, accu4, accu5;
  const FIXP_DBL *pReBuf;
  const FIXP_DBL *realBuf = reBuffer;
  pReBuf = realBuf - 2;
  accu5 =
      ((fMultDiv2(pReBuf[0], pReBuf[2]) + fMultDiv2(pReBuf[1], pReBuf[3])) >>
       ((5)));
  pReBuf++;
  accu1 = fPow2Div2(pReBuf[0]) >> ((5));
  accu3 = fMultDiv2(pReBuf[0], pReBuf[1]) >> ((5));
  pReBuf++;
  for (j = (len - 2) >> 1; j != 0; j--, pReBuf += 2) {
    accu1 += ((fPow2Div2(pReBuf[0]) + fPow2Div2(pReBuf[1])) >> ((5)));
    accu3 +=
        ((fMultDiv2(pReBuf[0], pReBuf[1]) + fMultDiv2(pReBuf[1], pReBuf[2])) >>
         ((5)));
    accu5 +=
        ((fMultDiv2(pReBuf[0], pReBuf[2]) + fMultDiv2(pReBuf[1], pReBuf[3])) >>
         ((5)));
  }
  accu2 = (fPow2Div2(realBuf[-2]) >> ((5)));
  accu2 += accu1;
  accu1 += (fPow2Div2(realBuf[len - 2]) >> ((5)));
  accu4 = (fMultDiv2(realBuf[-1], realBuf[-2]) >> ((5)));
  accu4 += accu3;
  accu3 += (fMultDiv2(realBuf[len - 1], realBuf[len - 2]) >> ((5)));
  mScale = CntLeadingZeros(
               (accu1 | accu2 | fAbs(accu3) | fAbs(accu4) | fAbs(accu5))) -
           1;
  autoCorrScaling = mScale - 1 - (5);
  ac->r11r = accu1 << mScale;
  ac->r22r = accu2 << mScale;
  ac->r01r = accu3 << mScale;
  ac->r12r = accu4 << mScale;
  ac->r02r = accu5 << mScale;
  ac->det = (fMultDiv2(ac->r11r, ac->r22r) - fMultDiv2(ac->r12r, ac->r12r));
  mScale = CountLeadingBits(fAbs(ac->det));
  ac->det <<= mScale;
  ac->det_scale = mScale - 1;
  return autoCorrScaling;
}

INT autoCorr2nd_cplx(ACORR_COEFS *ac, const FIXP_DBL *reBuffer,
                     const FIXP_DBL *imBuffer, const int len) {
  int j, autoCorrScaling, mScale, len_scale;
  FIXP_DBL accu0, accu1, accu2, accu3, accu4, accu5, accu6, accu7, accu8;
  const FIXP_DBL *pReBuf, *pImBuf;
  const FIXP_DBL *realBuf = reBuffer;
  const FIXP_DBL *imagBuf = imBuffer;
  (len > 64) ? (len_scale = 6) : (len_scale = 5);
  accu1 = accu3 = accu5 = accu7 = accu8 = fixed_dbl(0.0f);
  pReBuf = realBuf - 2, pImBuf = imagBuf - 2;
  accu7 +=
      ((fMultDiv2(pReBuf[2], pReBuf[0]) + fMultDiv2(pImBuf[2], pImBuf[0])) >>
       len_scale);
  accu8 +=
      ((fMultDiv2(pImBuf[2], pReBuf[0]) - fMultDiv2(pReBuf[2], pImBuf[0])) >>
       len_scale);
  pReBuf = realBuf - 1, pImBuf = imagBuf - 1;
  for (j = (len - 1); j != 0; j--, pReBuf++, pImBuf++) {
    accu1 += ((static_cast<uint32_t>(fPow2Div2(pReBuf[0])) +
               static_cast<uint32_t>(fPow2Div2(pImBuf[0]))) >>
              len_scale);
    accu3 +=
        ((fMultDiv2(pReBuf[0], pReBuf[1]) + fMultDiv2(pImBuf[0], pImBuf[1])) >>
         len_scale);
    accu5 +=
        ((fMultDiv2(pImBuf[1], pReBuf[0]) - fMultDiv2(pReBuf[1], pImBuf[0])) >>
         len_scale);
    accu7 +=
        ((fMultDiv2(pReBuf[2], pReBuf[0]) + fMultDiv2(pImBuf[2], pImBuf[0])) >>
         len_scale);
    accu8 +=
        ((fMultDiv2(pImBuf[2], pReBuf[0]) - fMultDiv2(pReBuf[2], pImBuf[0])) >>
         len_scale);
  }
  accu2 = ((static_cast<uint32_t>(fPow2Div2(realBuf[-2])) +
            static_cast<uint32_t>(fPow2Div2(imagBuf[-2]))) >>
           len_scale);
  accu2 += accu1;
  accu1 += ((static_cast<uint32_t>(fPow2Div2(realBuf[len - 2])) +
             static_cast<uint32_t>(fPow2Div2(imagBuf[len - 2]))) >>
            len_scale);
  accu0 = ((static_cast<uint32_t>(fPow2Div2(realBuf[len - 1])) +
            static_cast<uint32_t>(fPow2Div2(imagBuf[len - 1]))) >>
           len_scale) -
          ((static_cast<uint32_t>(fPow2Div2(realBuf[-1])) +
            static_cast<uint32_t>(fPow2Div2(imagBuf[-1]))) >>
           len_scale);
  accu0 += accu1;
  accu4 = ((fMultDiv2(realBuf[-1], realBuf[-2]) +
            fMultDiv2(imagBuf[-1], imagBuf[-2])) >>
           len_scale);
  accu4 += accu3;
  accu3 += ((fMultDiv2(realBuf[len - 1], realBuf[len - 2]) +
             fMultDiv2(imagBuf[len - 1], imagBuf[len - 2])) >>
            len_scale);
  accu6 = ((fMultDiv2(imagBuf[-1], realBuf[-2]) -
            fMultDiv2(realBuf[-1], imagBuf[-2])) >>
           len_scale);
  accu6 += accu5;
  accu5 += ((fMultDiv2(imagBuf[len - 1], realBuf[len - 2]) -
             fMultDiv2(realBuf[len - 1], imagBuf[len - 2])) >>
            len_scale);
  mScale =
      CntLeadingZeros((accu0 | accu1 | accu2 | fAbs(accu3) | fAbs(accu4) |
                       fAbs(accu5) | fAbs(accu6) | fAbs(accu7) | fAbs(accu8))) -
      1;
  autoCorrScaling = mScale - 1 - len_scale;
  ac->r00r = (FIXP_DBL)accu0 << mScale;
  ac->r11r = (FIXP_DBL)accu1 << mScale;
  ac->r22r = (FIXP_DBL)accu2 << mScale;
  ac->r01r = (FIXP_DBL)accu3 << mScale;
  ac->r12r = (FIXP_DBL)accu4 << mScale;
  ac->r01i = (FIXP_DBL)accu5 << mScale;
  ac->r12i = (FIXP_DBL)accu6 << mScale;
  ac->r02r = (FIXP_DBL)accu7 << mScale;
  ac->r02i = (FIXP_DBL)accu8 << mScale;
  ac->det = (fMultDiv2(ac->r11r, ac->r22r) >> 1) -
            ((static_cast<uint32_t>(fMultDiv2(ac->r12r, ac->r12r)) +
              static_cast<uint32_t>(fMultDiv2(ac->r12i, ac->r12i))) >>
             1);
  mScale = CountLeadingBits(fAbs(ac->det));
  ac->det <<= mScale;
  ac->det_scale = mScale - 2;
  return autoCorrScaling;
}

static FIXP_DBL mapInvfMode(INVF_MODE mode, INVF_MODE prevMode,
                            WHITENING_FACTORS whFactors) {
  switch (mode) {
    case INVF_LOW_LEVEL:
      if (prevMode == INVF_OFF) {
        return whFactors.transitionLevel;
      }
      else {
        return whFactors.lowLevel;
      }
    case INVF_MID_LEVEL:
      return whFactors.midLevel;
    case INVF_HIGH_LEVEL:
      return whFactors.highLevel;
    default:
      if (prevMode == INVF_LOW_LEVEL) {
        return whFactors.transitionLevel;
      }
      else {
        return whFactors.off;
      }
  }
}

static void inverseFilteringLevelEmphasis(HANDLE_SBR_LPP_TRANS hLppTrans,
                                          UCHAR nInvfBands,
                                          INVF_MODE *sbr_invf_mode,
                                          INVF_MODE *sbr_invf_mode_prev,
                                          FIXP_DBL *bwVector) {
  for (int i = 0; i < nInvfBands; i++) {
    FIXP_DBL accu;
    FIXP_DBL bwTmp = mapInvfMode(sbr_invf_mode[i], sbr_invf_mode_prev[i],
                                 hLppTrans->pSettings->whFactors);
    if (bwTmp < hLppTrans->bwVectorOld[i]) {
      accu = fMultDiv2(fixed_dbl(0.75f), bwTmp) +
             fMultDiv2(fixed_dbl(0.25f), hLppTrans->bwVectorOld[i]);
    }
    else {
      accu = fMultDiv2(fixed_dbl(0.90625f), bwTmp) +
             fMultDiv2(fixed_dbl(0.09375f), hLppTrans->bwVectorOld[i]);
    }
    if (accu < fixed_dbl(0.015625f) >> 1) {
      bwVector[i] = fixed_dbl(0.0f);
    }
    else {
      bwVector[i] = fixMin(accu << 1, fixed_dbl(0.99609375f));
    }
  }
}

void lppTransposer(HANDLE_SBR_LPP_TRANS hLppTrans,
                   QMF_SCALE_FACTOR *sbrScaleFactor, FIXP_DBL **qmfBufferReal,
                   FIXP_DBL *degreeAlias, FIXP_DBL **qmfBufferImag,
                   const int useLP, const int timeStep, const int firstSlotOffs,
                   const int lastSlotOffs, const int nInvfBands,
                   INVF_MODE *sbr_invf_mode, INVF_MODE *sbr_invf_mode_prev) {
  INT bwIndex[6] = {};
  FIXP_DBL bwVector[6] = {};
  int i;
  int loBand, start, stop;
  TRANSPOSER_SETTINGS *pSettings = hLppTrans->pSettings;
  PATCH_PARAM *patchParam = pSettings->patchParam;
  int patch;
  FIXP_SGL alphar[2], a0r, a1r;
  FIXP_SGL alphai[2], a0i = 0, a1i = 0;
  FIXP_SGL bw = fixed_sgl(0.0f);
  int autoCorrLength;
  FIXP_DBL k1, k1_below = 0, k1_below2 = 0;
  ACORR_COEFS ac = {};
  int startSample;
  int stopSample;
  int stopSampleClear;
  int comLowBandScale;
  int ovLowBandShift;
  int lowBandShift;
  int targetStopBand;
  alphai[0] = fixed_sgl(0.0f);
  alphai[1] = fixed_sgl(0.0f);
  startSample = firstSlotOffs * timeStep;
  stopSample = pSettings->nCols + lastSlotOffs * timeStep;
  inverseFilteringLevelEmphasis(hLppTrans, nInvfBands, sbr_invf_mode,
                                sbr_invf_mode_prev, bwVector);
  stopSampleClear = stopSample;
  autoCorrLength = pSettings->nCols + pSettings->overlap;
  targetStopBand = patchParam[pSettings->noOfPatches - 1].targetStartBand +
                   patchParam[pSettings->noOfPatches - 1].numBandsInPatch;
  int memSize = ((64) - targetStopBand) * sizeof(FIXP_DBL);
  if (!useLP) {
    for (i = startSample; i < stopSampleClear; i++) {
      FDKmemclear(&qmfBufferReal[i][targetStopBand], memSize);
      FDKmemclear(&qmfBufferImag[i][targetStopBand], memSize);
    }
  }
  else {
    for (i = startSample; i < stopSampleClear; i++) {
      FDKmemclear(&qmfBufferReal[i][targetStopBand], memSize);
    }
  }
  FDKmemclear(bwIndex, pSettings->noOfPatches * sizeof(INT));
  comLowBandScale =
      fixMin(sbrScaleFactor->ov_lb_scale, sbrScaleFactor->lb_scale);
  ovLowBandShift = sbrScaleFactor->ov_lb_scale - comLowBandScale;
  lowBandShift = sbrScaleFactor->lb_scale - comLowBandScale;
  if (!useLP) {
    start = pSettings->lbStartPatching;
    stop = pSettings->lbStopPatching;
  }
  else {
    start = fixMax(1, pSettings->lbStartPatching - 2);
    stop = patchParam[0].targetStartBand;
  }
  for (loBand = start; loBand < stop; loBand++) {
    FIXP_DBL lowBandReal[(((1024) / (32)) + (6)) + 2] = {};
    FIXP_DBL *plowBandReal = lowBandReal;
    FIXP_DBL **pqmfBufferReal = qmfBufferReal;
    FIXP_DBL lowBandImag[(((1024) / (32)) + (6)) + 2] = {};
    FIXP_DBL *plowBandImag = lowBandImag;
    FIXP_DBL **pqmfBufferImag = qmfBufferImag;
    int resetLPCCoeffs = 0;
    int dynamicScale = 32 - 1 - 2;
    int acDetScale = 0;
    for (i = 0; i < 2; i++) {
      *plowBandReal++ = hLppTrans->lpcFilterStatesReal[i][loBand];
      if (!useLP) {
        *plowBandImag++ = hLppTrans->lpcFilterStatesImag[i][loBand];
      }
    }
    if (!useLP) {
      for (i = 0; i < pSettings->nCols + pSettings->overlap; i++) {
        *plowBandReal++ = (*pqmfBufferReal++)[loBand];
        *plowBandImag++ = (*pqmfBufferImag++)[loBand];
      }
    }
    else {
      for (i = 0; i < ((pSettings->overlap + pSettings->nCols) >> 1); i++) {
        *plowBandReal++ = (*pqmfBufferReal++)[loBand];
        *plowBandReal++ = (*pqmfBufferReal++)[loBand];
      }
      if (pSettings->nCols & 1) {
        *plowBandReal++ = (*pqmfBufferReal++)[loBand];
      }
    }
    dynamicScale = fixMin(dynamicScale,
                          getScalefactor(lowBandReal, 2 + pSettings->overlap) +
                              ovLowBandShift);
    dynamicScale = fixMin(
        dynamicScale,
        getScalefactor(&lowBandReal[2 + pSettings->overlap], pSettings->nCols) +
            lowBandShift);
    if (!useLP) {
      dynamicScale = fixMin(
          dynamicScale,
          getScalefactor(lowBandImag, 2 + pSettings->overlap) + ovLowBandShift);
      dynamicScale = fixMin(dynamicScale,
                            getScalefactor(&lowBandImag[2 + pSettings->overlap],
                                           pSettings->nCols) +
                                lowBandShift);
    }
    dynamicScale = fixMax(0, dynamicScale - 1);
    scaleValues(&lowBandReal[0], 2 + pSettings->overlap,
                dynamicScale - ovLowBandShift);
    scaleValues(&lowBandReal[2 + pSettings->overlap], pSettings->nCols,
                dynamicScale - lowBandShift);
    if (!useLP) {
      scaleValues(&lowBandImag[0], 2 + pSettings->overlap,
                  dynamicScale - ovLowBandShift);
      scaleValues(&lowBandImag[2 + pSettings->overlap], pSettings->nCols,
                  dynamicScale - lowBandShift);
    }
    if (!useLP) {
      acDetScale += autoCorr2nd_cplx(&ac, lowBandReal + 2, lowBandImag + 2,
                                     autoCorrLength);
    }
    else {
      acDetScale += autoCorr2nd_real(&ac, lowBandReal + 2, autoCorrLength);
    }
    acDetScale += 2 * (comLowBandScale + dynamicScale);
    acDetScale *= 2;
    acDetScale += ac.det_scale;
    if (acDetScale > 126) {
      resetLPCCoeffs = 1;
    }
    alphar[1] = fixed_sgl(0.0f);
    if (!useLP) {
      alphai[1] = fixed_sgl(0.0f);
    }
    if (ac.det != fixed_dbl(0.0f)) {
      FIXP_DBL tmp, absTmp, absDet;
      absDet = fixp_abs(ac.det);
      if (!useLP) {
        tmp = (fMultDiv2(ac.r01r, ac.r12r) >> (2 - 1)) -
              ((fMultDiv2(ac.r01i, ac.r12i) + fMultDiv2(ac.r02r, ac.r11r)) >>
               (2 - 1));
      }
      else {
        tmp = (fMultDiv2(ac.r01r, ac.r12r) >> (2 - 1)) -
              (fMultDiv2(ac.r02r, ac.r11r) >> (2 - 1));
      }
      absTmp = fixp_abs(tmp);
      {
        INT scale;
        FIXP_DBL result = fDivNorm(absTmp, absDet, &scale);
        scale = scale + ac.det_scale;
        if ((scale > 0) && (result >= (FIXP_DBL)2147483647 >> scale)) {
          resetLPCCoeffs = 1;
        }
        else {
          alphar[1] = static_cast<int16_t>((scaleValue(result, scale)) >> 16);
          if ((tmp < fixed_runtime_dbl(0.0f)) ^
              (ac.det < fixed_runtime_dbl(0.0f))) {
            alphar[1] = -alphar[1];
          }
        }
      }
      if (!useLP) {
        tmp = (fMultDiv2(ac.r01i, ac.r12r) >> (2 - 1)) +
              ((fMultDiv2(ac.r01r, ac.r12i) -
                (FIXP_DBL)fMultDiv2(ac.r02i, ac.r11r)) >>
               (2 - 1));
        absTmp = fixp_abs(tmp);
        {
          INT scale;
          FIXP_DBL result = fDivNorm(absTmp, absDet, &scale);
          scale = scale + ac.det_scale;
          if ((scale > 0) && (result >= (FIXP_DBL)2147483647 >> scale)) {
            resetLPCCoeffs = 1;
          }
          else {
            alphai[1] = static_cast<int16_t>((scaleValue(result, scale)) >> 16);
            if ((tmp < fixed_runtime_dbl(0.0f)) ^
                (ac.det < fixed_runtime_dbl(0.0f))) {
              alphai[1] = -alphai[1];
            }
          }
        }
      }
    }
    alphar[0] = fixed_sgl(0.0f);
    if (!useLP) {
      alphai[0] = fixed_sgl(0.0f);
    }
    if (ac.r11r != fixed_dbl(0.0f)) {
      FIXP_DBL tmp, absTmp;
      if (!useLP) {
        tmp = (ac.r01r >> (2 + 1)) +
              (fMultDiv2(alphar[1], ac.r12r) + fMultDiv2(alphai[1], ac.r12i));
      }
      else {
        if (ac.r01r >= fixed_dbl(0.0f)) {
          tmp = (ac.r01r >> (2 + 1)) + fMultDiv2(alphar[1], ac.r12r);
        }
        else {
          tmp = -((-ac.r01r) >> (2 + 1)) + fMultDiv2(alphar[1], ac.r12r);
        }
      }
      absTmp = fixp_abs(tmp);
      if (absTmp >= (ac.r11r >> 1)) {
        resetLPCCoeffs = 1;
      }
      else {
        INT scale;
        FIXP_DBL result = fDivNorm(absTmp, fixp_abs(ac.r11r), &scale);
        alphar[0] = static_cast<int16_t>((scaleValue(result, scale + 1)) >> 16);
        if ((tmp > fixed_runtime_dbl(0.0f)) ^
            (ac.r11r < fixed_runtime_dbl(0.0f))) {
          alphar[0] = -alphar[0];
        }
      }
      if (!useLP) {
        tmp = (ac.r01i >> (2 + 1)) +
              (fMultDiv2(alphai[1], ac.r12r) - fMultDiv2(alphar[1], ac.r12i));
        absTmp = fixp_abs(tmp);
        if (absTmp >= (ac.r11r >> 1)) {
          resetLPCCoeffs = 1;
        }
        else {
          INT scale;
          FIXP_DBL result = fDivNorm(absTmp, fixp_abs(ac.r11r), &scale);
          alphai[0] =
              static_cast<int16_t>((scaleValue(result, scale + 1)) >> 16);
          if ((tmp > fixed_runtime_dbl(0.0f)) ^
              (ac.r11r < fixed_runtime_dbl(0.0f))) {
            alphai[0] = -alphai[0];
          }
        }
      }
    }
    if (!useLP) {
      if ((fMultDiv2(alphar[0], alphar[0]) + fMultDiv2(alphai[0], alphai[0])) >=
          fixed_dbl(0.5f)) {
        resetLPCCoeffs = 1;
      }
      if ((fMultDiv2(alphar[1], alphar[1]) + fMultDiv2(alphai[1], alphai[1])) >=
          fixed_dbl(0.5f)) {
        resetLPCCoeffs = 1;
      }
    }
    if (resetLPCCoeffs) {
      alphar[0] = fixed_sgl(0.0f);
      alphar[1] = fixed_sgl(0.0f);
      if (!useLP) {
        alphai[0] = fixed_sgl(0.0f);
        alphai[1] = fixed_sgl(0.0f);
      }
    }
    if (useLP) {
      if (ac.r11r == fixed_dbl(0.0f)) {
        k1 = fixed_dbl(0.0f);
      }
      else {
        if (fixp_abs(ac.r01r) >= fixp_abs(ac.r11r)) {
          if (fMultDiv2(ac.r01r, ac.r11r) < fixed_runtime_dbl(0.0f)) {
            k1 = (FIXP_DBL)2147483647;
          }
          else {
            k1 = (FIXP_DBL)((-2147483647 - 1) + 1);
          }
        }
        else {
          INT scale;
          FIXP_DBL result =
              fDivNorm(fixp_abs(ac.r01r), fixp_abs(ac.r11r), &scale);
          k1 = scaleValue(result, scale);
          if (!((ac.r01r < fixed_runtime_dbl(0.0f)) ^
                (ac.r11r < fixed_runtime_dbl(0.0f)))) {
            k1 = -k1;
          }
        }
      }
      if (loBand > 1) {
        FIXP_DBL deg = (FIXP_DBL)2147483647 - fPow2(k1_below);
        degreeAlias[loBand] = fixed_dbl(0.0f);
        if (((loBand & 1) == 0) && (k1 < fixed_dbl(0.0f))) {
          if (k1_below < fixed_dbl(0.0f)) {
            degreeAlias[loBand] = (FIXP_DBL)2147483647;
            if (k1_below2 > fixed_dbl(0.0f)) {
              degreeAlias[loBand - 1] = deg;
            }
          }
          else if (k1_below2 > fixed_dbl(0.0f)) {
            degreeAlias[loBand] = deg;
          }
        }
        if (((loBand & 1) == 1) && (k1 > fixed_dbl(0.0f))) {
          if (k1_below > fixed_dbl(0.0f)) {
            degreeAlias[loBand] = (FIXP_DBL)2147483647;
            if (k1_below2 < fixed_dbl(0.0f)) {
              degreeAlias[loBand - 1] = deg;
            }
          }
          else if (k1_below2 < fixed_dbl(0.0f)) {
            degreeAlias[loBand] = deg;
          }
        }
      }
      k1_below2 = k1_below;
      k1_below = k1;
    }
    patch = 0;
    while (patch < pSettings->noOfPatches) {
      int hiBand = loBand + patchParam[patch].targetBandOffs;
      if (loBand < patchParam[patch].sourceStartBand ||
          loBand >= patchParam[patch].sourceStopBand) {
        patch++;
        continue;
      }
      while (hiBand >= pSettings->bwBorders[bwIndex[patch]]) {
        bwIndex[patch]++;
      }
      bw = static_cast<int16_t>((bwVector[bwIndex[patch]]) >> 16);
      a0r = static_cast<int16_t>((fMult(bw, alphar[0])) >> 16);
      if (!useLP) {
        a0i = static_cast<int16_t>((fMult(bw, alphai[0])) >> 16);
      }
      bw = static_cast<int16_t>((fPow2(bw)) >> 16);
      a1r = static_cast<int16_t>((fMult(bw, alphar[1])) >> 16);
      if (!useLP) {
        a1i = static_cast<int16_t>((fMult(bw, alphai[1])) >> 16);
      }
      if (bw <= fixed_sgl(0.0f)) {
        if (!useLP) {
          int descale = fixMin(32 - 1, (2 + dynamicScale));
          for (i = startSample; i < stopSample; i++) {
            qmfBufferReal[i][hiBand] = lowBandReal[2 + i] >> descale;
            qmfBufferImag[i][hiBand] = lowBandImag[2 + i] >> descale;
          }
        }
        else {
          int descale = fixMin(32 - 1, (2 + dynamicScale));
          for (i = startSample; i < stopSample; i++) {
            qmfBufferReal[i][hiBand] = lowBandReal[2 + i] >> descale;
          }
        }
      }
      else {
        if (!useLP) {
          int descale = fixMin(32 - 1, (2 + dynamicScale));
          for (i = startSample; i < stopSample; i++) {
            FIXP_DBL accu1, accu2;
            accu1 = (fMultDiv2(a0r, lowBandReal[2 + i - 1]) -
                     fMultDiv2(a0i, lowBandImag[2 + i - 1]) +
                     fMultDiv2(a1r, lowBandReal[2 + i - 2]) -
                     fMultDiv2(a1i, lowBandImag[2 + i - 2])) >>
                    dynamicScale;
            accu2 = (fMultDiv2(a0i, lowBandReal[2 + i - 1]) +
                     fMultDiv2(a0r, lowBandImag[2 + i - 1]) +
                     fMultDiv2(a1i, lowBandReal[2 + i - 2]) +
                     fMultDiv2(a1r, lowBandImag[2 + i - 2])) >>
                    dynamicScale;
            qmfBufferReal[i][hiBand] =
                (lowBandReal[2 + i] >> descale) + (accu1 << 1);
            qmfBufferImag[i][hiBand] =
                (lowBandImag[2 + i] >> descale) + (accu2 << 1);
          }
        }
        else {
          int descale = fixMin(32 - 1, (2 + dynamicScale));
          for (i = startSample; i < stopSample; i++) {
            FIXP_DBL accu1;
            accu1 = (fMultDiv2(a0r, lowBandReal[2 + i - 1]) +
                     fMultDiv2(a1r, lowBandReal[2 + i - 2])) >>
                    dynamicScale;
            qmfBufferReal[i][hiBand] =
                (lowBandReal[2 + i] >> descale) + (accu1 << 1);
          }
        }
      }
      patch++;
    }
  }
  if (useLP) {
    for (loBand = pSettings->lbStartPatching;
         loBand < pSettings->lbStopPatching; loBand++) {
      patch = 0;
      while (patch < pSettings->noOfPatches) {
        UCHAR hiBand = loBand + patchParam[patch].targetBandOffs;
        if (loBand < patchParam[patch].sourceStartBand ||
            loBand >= patchParam[patch].sourceStopBand || hiBand >= (64)) {
          patch++;
          continue;
        }
        if (hiBand != patchParam[patch].targetStartBand) {
          degreeAlias[hiBand] = degreeAlias[loBand];
        }
        patch++;
      }
    }
  }
  for (i = 0; i < nInvfBands; i++) {
    hLppTrans->bwVectorOld[i] = bwVector[i];
  }
  sbrScaleFactor->hb_scale = comLowBandScale - (2);
}

SBR_ERROR
createLppTransposer(HANDLE_SBR_LPP_TRANS hs, TRANSPOSER_SETTINGS *pSettings,
                    const int highBandStartSb, UCHAR *v_k_master,
                    const int numMaster, const int usb, const int timeSlots,
                    const int nCols, UCHAR *noiseBandTable,
                    const int noNoiseBands, UINT fs, const int chan,
                    const int overlap) {
  hs->pSettings = pSettings;
  pSettings->nCols = nCols;
  pSettings->overlap = overlap;
  switch (timeSlots) {
    case 15:
    case 16:
      break;
    default:
      return 5;
  }
  if (chan == 0) {
    hs->pSettings->nCols = nCols;
    return resetLppTransposer(hs, highBandStartSb, v_k_master, numMaster,
                              noiseBandTable, noNoiseBands, usb, fs);
  }
  return 0;
}

static int findClosestEntry(UCHAR goalSb, UCHAR *v_k_master, UCHAR numMaster,
                            UCHAR direction) {
  int index;
  if (goalSb <= v_k_master[0]) {
    return v_k_master[0];
  }
  if (goalSb >= v_k_master[numMaster]) {
    return v_k_master[numMaster];
  }
  if (direction) {
    index = 0;
    while (v_k_master[index] < goalSb) {
      index++;
    }
  }
  else {
    index = numMaster;
    while (v_k_master[index] > goalSb) {
      index--;
    }
  }
  return v_k_master[index];
}

SBR_ERROR
resetLppTransposer(HANDLE_SBR_LPP_TRANS hLppTrans, UCHAR highBandStartSb,
                   UCHAR *v_k_master, UCHAR numMaster, UCHAR *noiseBandTable,
                   UCHAR noNoiseBands, UCHAR usb, UINT fs) {
  TRANSPOSER_SETTINGS *pSettings = hLppTrans->pSettings;
  PATCH_PARAM *patchParam = pSettings->patchParam;
  int i, patch;
  int targetStopBand;
  int sourceStartBand;
  int patchDistance;
  int numBandsInPatch;
  int lsb = v_k_master[0];
  int xoverOffset = highBandStartSb - lsb;
  int startFreqHz;
  int desiredBorder;
  usb = fixMin(usb, v_k_master[numMaster]);
  if (lsb - 1 < 4) {
    return 5;
  }
  desiredBorder = (((2048000 * 2) / fs) + 1) >> 1;
  desiredBorder = findClosestEntry(desiredBorder, v_k_master, numMaster, 1);
  sourceStartBand = 1 + xoverOffset;
  targetStopBand = lsb + xoverOffset;
  patch = 0;
  while (targetStopBand < usb) {
    if (patch > 6) {
      return 5;
    }
    patchParam[patch].guardStartBand = targetStopBand;
    patchParam[patch].targetStartBand = targetStopBand;
    numBandsInPatch = desiredBorder - targetStopBand;
    if (numBandsInPatch >= lsb - sourceStartBand) {
      patchDistance = targetStopBand - sourceStartBand;
      patchDistance = patchDistance & ~1;
      numBandsInPatch = lsb - (targetStopBand - patchDistance);
      numBandsInPatch = findClosestEntry(targetStopBand + numBandsInPatch,
                                         v_k_master, numMaster, 0) -
                        targetStopBand;
    }
    patchDistance = numBandsInPatch + targetStopBand - lsb;
    patchDistance = (patchDistance + 1) & ~1;
    if (numBandsInPatch > 0) {
      patchParam[patch].sourceStartBand = targetStopBand - patchDistance;
      patchParam[patch].targetBandOffs = patchDistance;
      patchParam[patch].numBandsInPatch = numBandsInPatch;
      patchParam[patch].sourceStopBand =
          patchParam[patch].sourceStartBand + numBandsInPatch;
      targetStopBand += patchParam[patch].numBandsInPatch;
      patch++;
    }
    sourceStartBand = 1;
    if (desiredBorder - targetStopBand < 3) {
      desiredBorder = usb;
    }
  }
  patch--;
  if ((patch > 0) && (patchParam[patch].numBandsInPatch < 3)) {
    patch--;
    targetStopBand =
        patchParam[patch].targetStartBand + patchParam[patch].numBandsInPatch;
  }
  if (patch >= 6) {
    return 5;
  }
  pSettings->noOfPatches = patch + 1;
  pSettings->lbStartPatching = targetStopBand;
  pSettings->lbStopPatching = 0;
  for (patch = 0; patch < pSettings->noOfPatches; patch++) {
    pSettings->lbStartPatching =
        fixMin(pSettings->lbStartPatching, patchParam[patch].sourceStartBand);
    pSettings->lbStopPatching =
        fixMax(pSettings->lbStopPatching, patchParam[patch].sourceStopBand);
  }
  for (i = 0; i < noNoiseBands; i++) {
    pSettings->bwBorders[i] = noiseBandTable[i + 1];
  }
  startFreqHz = ((lsb + xoverOffset) * fs) >> 7;
  for (i = 1; i < 9; i++) {
    if (startFreqHz < FDK_sbrDecoder_sbr_whFactorsIndex[i]) {
      break;
    }
  }
  i--;
  pSettings->whFactors.off = FDK_sbrDecoder_sbr_whFactorsTable[i][0];
  pSettings->whFactors.transitionLevel =
      FDK_sbrDecoder_sbr_whFactorsTable[i][1];
  pSettings->whFactors.lowLevel = FDK_sbrDecoder_sbr_whFactorsTable[i][2];
  pSettings->whFactors.midLevel = FDK_sbrDecoder_sbr_whFactorsTable[i][3];
  pSettings->whFactors.highLevel = FDK_sbrDecoder_sbr_whFactorsTable[i][4];
  return 0;
}

}
