/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/quantization.hpp"
#include "nn/codec/sbr_envelope.hpp"
#include "nn/codec/sbr_harmonics.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using INT = int;
using LONG = int32_t;
using UINT = unsigned int;
using UCHAR = uint8_t;
using SCHAR = int8_t;
extern const int32_t invCount[80];
void* FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
int32_t schur_div(int32_t, int32_t, int);
constexpr int32_t fixed_dbl(double v) {
  double value = v * 2147483648.0 + (v >= 0 ? 0.5 : -0.5);
  return value >= 2147483647.0    ? 2147483647
         : value <= -2147483648.0 ? (-2147483647 - 1)
                                  : int32_t(value);
}

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int fixMax(int a, int b) {
  return a > b ? a : b;
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 32);
}

static int32_t fMult(int32_t a, int32_t b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

static int CountLeadingBits(int32_t value) {
  uint32_t bits = value ^ (value >> 31);
  return (bits ? __builtin_clz(bits) : 32) - 1;
}

static int32_t GetInvInt(int value) {
  return invCount[value];
}

static int32_t fixp_abs(int32_t value) {
  return value < 0 ? static_cast<int32_t>(0U - static_cast<uint32_t>(value))
                   : value;
}

static int32_t scaleValue(int32_t v, int shift) {
  return shift >= 0 ? v << shift : v >> -shift;
}

FIXP_DBL FDKsbrEnc_LSI_divide_scale_fract(FIXP_DBL num, FIXP_DBL denom,
                                          FIXP_DBL scale) {
  FIXP_DBL tmp = fixed_dbl(0.0f);
  if (num != fixed_dbl(0.0f)) {
    INT shiftCommon;
    INT shiftNum = CountLeadingBits(num);
    INT shiftDenom = (denom ? CountLeadingBits(denom) : 0);
    INT shiftScale = (scale ? CountLeadingBits(scale) : 0);
    num = num << shiftNum;
    scale = scale << shiftScale;
    tmp = fMultDiv2(num, scale);
    if (denom > (tmp >> fixMin(shiftNum + shiftScale - 1, (32 - 1)))) {
      denom = denom << shiftDenom;
      tmp = schur_div(tmp, denom, 15);
      shiftCommon = fixMin((shiftNum - shiftDenom + shiftScale - 1), (32 - 1));
      if (shiftCommon < 0) {
        tmp <<= -shiftCommon;
      }
      else {
        tmp >>= shiftCommon;
      }
    }
    else {
      tmp = (FIXP_DBL)2147483647;
    }
  }
  return (tmp);
}

static const DETECTOR_PARAMETERS_MH paramsAac = {
  9,
  {fixed_dbl(20.0f * (1e-6f)), fixed_dbl(1.26f * (1e-6f)),
   fixed_dbl(15.0f * (1e-6f)), fixed_dbl((1.0f / 15.0f) * (1e-6f)),
   fixed_dbl(1.26f * (1e-6f)), fixed_dbl(0.3f) >> 2, fixed_dbl(0.1f) >> 2,
   fixed_dbl(0.3f), fixed_dbl(0.5f), fixed_dbl(-0.000112993269),
   fixed_dbl(-0.000112993269), fixed_dbl(-0.005030126483f)},
  50};
static const DETECTOR_PARAMETERS_MH paramsAacLd = {
  16,
  {fixed_dbl(25.0f * (1e-6f)), fixed_dbl(1.26f * (1e-6f)),
   fixed_dbl(15.0f * (1e-6f)), fixed_dbl((1.0f / 15.0f) * (1e-6f)),
   fixed_dbl(1.26f * (1e-6f)), fixed_dbl(0.3f) >> 2, fixed_dbl(0.1f) >> 2,
   fixed_dbl(0.3f), fixed_dbl(0.2f), fixed_dbl(-0.000112993269),
   fixed_dbl(-0.000112993269), fixed_dbl(-0.005030126483f)},
  50};
static void diff(FIXP_DBL* pTonalityOrig, FIXP_DBL* pDiffMapped2Scfb,
                 const UCHAR* pFreqBandTable, INT nScfb, SCHAR* indexVector) {
  UCHAR i, ll, lu, k;
  FIXP_DBL maxValOrig, maxValSbr, tmp;
  INT scale;
  for (i = 0; i < nScfb; i++) {
    ll = pFreqBandTable[i];
    lu = pFreqBandTable[i + 1];
    maxValOrig = fixed_dbl(0.0f);
    maxValSbr = fixed_dbl(0.0f);
    for (k = ll; k < lu; k++) {
      maxValOrig = fixMax(maxValOrig, pTonalityOrig[k]);
      maxValSbr = fixMax(maxValSbr, pTonalityOrig[indexVector[k]]);
    }
    if ((maxValSbr >= fixed_dbl((1e-6f)))) {
      tmp = fDivNorm(maxValOrig, maxValSbr, &scale);
      pDiffMapped2Scfb[i] = scaleValue(fMult(tmp, fixed_dbl(0.524288f)),
                                       fixMax(-(32 - 1), (scale - 19)));
    }
    else {
      pDiffMapped2Scfb[i] = maxValOrig;
    }
  }
}

static void calculateFlatnessMeasure(FIXP_DBL* pQuotaBuffer, SCHAR* indexVector,
                                     FIXP_DBL* pSfmOrigVec,
                                     FIXP_DBL* pSfmSbrVec,
                                     const UCHAR* pFreqBandTable, INT nSfb) {
  INT i, j;
  FIXP_DBL invBands, tmp1, tmp2;
  INT shiftFac0, shiftFacSum0;
  INT shiftFac1, shiftFacSum1;
  FIXP_DBL accu;
  for (i = 0; i < nSfb; i++) {
    INT ll = pFreqBandTable[i];
    INT lu = pFreqBandTable[i + 1];
    pSfmOrigVec[i] = (FIXP_DBL)(2147483647 >> 2);
    pSfmSbrVec[i] = (FIXP_DBL)(2147483647 >> 2);
    if (lu - ll > 1) {
      FIXP_DBL amOrig, amTransp, gmOrig, gmTransp, sfmOrig, sfmTransp;
      invBands = GetInvInt(lu - ll);
      shiftFacSum0 = 0;
      shiftFacSum1 = 0;
      amOrig = amTransp = fixed_dbl(0.0f);
      gmOrig = gmTransp = (FIXP_DBL)2147483647;
      for (j = ll; j < lu; j++) {
        sfmOrig = pQuotaBuffer[j];
        sfmTransp = pQuotaBuffer[indexVector[j]];
        amOrig += fMult(sfmOrig, invBands);
        amTransp += fMult(sfmTransp, invBands);
        shiftFac0 = CountLeadingBits(sfmOrig);
        shiftFac1 = CountLeadingBits(sfmTransp);
        gmOrig = fMult(gmOrig, sfmOrig << shiftFac0);
        gmTransp = fMult(gmTransp, sfmTransp << shiftFac1);
        shiftFacSum0 += shiftFac0;
        shiftFacSum1 += shiftFac1;
      }
      if (gmOrig > fixed_dbl(0.0f)) {
        tmp1 = CalcLdData(gmOrig);
        tmp1 = fMult(invBands, tmp1);
        accu = (FIXP_DBL)-shiftFacSum0 << (32 - 1 - 8);
        tmp2 = fMultDiv2(invBands, accu) << (2 + 1);
        tmp2 = tmp1 + tmp2;
        gmOrig = CalcInvLdData(tmp2);
      }
      else {
        gmOrig = fixed_dbl(0.0f);
      }
      if (gmTransp > fixed_dbl(0.0f)) {
        tmp1 = CalcLdData(gmTransp);
        tmp1 = fMult(invBands, tmp1);
        accu = (FIXP_DBL)-shiftFacSum1 << (32 - 1 - 8);
        tmp2 = fMultDiv2(invBands, accu) << (2 + 1);
        tmp2 = tmp1 + tmp2;
        gmTransp = CalcInvLdData(tmp2);
      }
      else {
        gmTransp = fixed_dbl(0.0f);
      }
      if (amOrig != fixed_dbl(0.0f)) {
        pSfmOrigVec[i] =
          FDKsbrEnc_LSI_divide_scale_fract(gmOrig, amOrig, (2147483647 >> 2));
      }
      if (amTransp != fixed_dbl(0.0f)) {
        pSfmSbrVec[i] = FDKsbrEnc_LSI_divide_scale_fract(gmTransp, amTransp,
                                                         (2147483647 >> 2));
      }
    }
  }
}

static void calculateDetectorInput(FIXP_DBL** pQuotaBuffer, SCHAR* indexVector,
                                   FIXP_DBL** tonalityDiff, FIXP_DBL** pSfmOrig,
                                   FIXP_DBL** pSfmSbr,
                                   const UCHAR* freqBandTable, INT nSfb,
                                   INT noEstPerFrame, INT move) {
  INT est;
  for (est = 0; est < noEstPerFrame; est++) {
    diff(pQuotaBuffer[est + move], tonalityDiff[est + move], freqBandTable,
         nSfb, indexVector);
    calculateFlatnessMeasure(pQuotaBuffer[est + move], indexVector,
                             pSfmOrig[est + move], pSfmSbr[est + move],
                             freqBandTable, nSfb);
  }
}

static void removeLowPassDetection(UCHAR* pAddHarmSfb,
                                   UCHAR** pDetectionVectors, INT start,
                                   INT stop, INT nSfb,
                                   const UCHAR* pFreqBandTable,
                                   FIXP_DBL* pNrgVector, THRES_HOLDS mhThresh) {
  INT i, est;
  INT maxDerivPos = pFreqBandTable[nSfb];
  INT numBands = pFreqBandTable[nSfb];
  FIXP_DBL nrgLow, nrgHigh;
  FIXP_DBL nrgLD64, nrgLowLD64, nrgHighLD64, nrgDiffLD64;
  FIXP_DBL valLD64, maxValLD64, maxValAboveLD64;
  INT bLPsignal = 0;
  maxValLD64 = fixed_dbl(-1.0f);
  for (i = numBands - 1 - 2; i > pFreqBandTable[0]; i--) {
    nrgLow = pNrgVector[i];
    nrgHigh = pNrgVector[i + 2];
    if (nrgLow != fixed_dbl(0.0f) && nrgLow > nrgHigh) {
      nrgLowLD64 = CalcLdData(nrgLow >> 1);
      nrgDiffLD64 = CalcLdData((nrgLow >> 1) - (nrgHigh >> 1));
      valLD64 = nrgDiffLD64 - nrgLowLD64;
      if (valLD64 > maxValLD64) {
        maxDerivPos = i;
        maxValLD64 = valLD64;
      }
      if (maxValLD64 > mhThresh.derivThresMaxLD64) {
        break;
      }
    }
  }
  maxValAboveLD64 = fixed_dbl(-1.0f);
  for (i = numBands - 1 - 2; i > maxDerivPos + 2; i--) {
    nrgLow = pNrgVector[i];
    nrgHigh = pNrgVector[i + 2];
    if (nrgLow != fixed_dbl(0.0f) && nrgLow > nrgHigh) {
      nrgLowLD64 = CalcLdData(nrgLow >> 1);
      nrgDiffLD64 = CalcLdData((nrgLow >> 1) - (nrgHigh >> 1));
      valLD64 = nrgDiffLD64 - nrgLowLD64;
      if (valLD64 > maxValAboveLD64) {
        maxValAboveLD64 = valLD64;
      }
    }
    else {
      if (nrgHigh != fixed_dbl(0.0f) && nrgHigh > nrgLow) {
        nrgHighLD64 = CalcLdData(nrgHigh >> 1);
        nrgDiffLD64 = CalcLdData((nrgHigh >> 1) - (nrgLow >> 1));
        valLD64 = nrgDiffLD64 - nrgHighLD64;
        if (valLD64 > maxValAboveLD64) {
          maxValAboveLD64 = valLD64;
        }
      }
    }
  }
  if (maxValLD64 > mhThresh.derivThresMaxLD64 &&
      maxValAboveLD64 < mhThresh.derivThresAboveLD64) {
    bLPsignal = 1;
    for (i = maxDerivPos - 1; i > maxDerivPos - 5 && i >= 0; i--) {
      if (pNrgVector[i] != fixed_dbl(0.0f) &&
          pNrgVector[i] > pNrgVector[maxDerivPos + 2]) {
        nrgDiffLD64 =
          CalcLdData((pNrgVector[i] >> 1) - (pNrgVector[maxDerivPos + 2] >> 1));
        nrgLD64 = CalcLdData(pNrgVector[i] >> 1);
        valLD64 = nrgDiffLD64 - nrgLD64;
        if (valLD64 < mhThresh.derivThresBelowLD64) {
          bLPsignal = 0;
          break;
        }
      }
      else {
        bLPsignal = 0;
        break;
      }
    }
  }
  if (bLPsignal) {
    for (i = 0; i < nSfb; i++) {
      if (maxDerivPos >= pFreqBandTable[i] &&
          maxDerivPos < pFreqBandTable[i + 1]) {
        break;
      }
    }
    if (pAddHarmSfb[i]) {
      pAddHarmSfb[i] = 0;
      for (est = start; est < stop; est++) {
        pDetectionVectors[est][i] = 0;
      }
    }
  }
}

static INT isDetectionOfNewToneAllowed(
  const SBR_FRAME_INFO* pFrameInfo, INT* pDetectionStartPos, INT noEstPerFrame,
  INT prevTransientFrame, INT prevTransientPos, INT prevTransientFlag,
  INT transientPosOffset, INT transientFlag, INT transientPos, INT deltaTime,
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR h_sbrMissingHarmonicsDetector) {
  INT transientFrame, newDetectionAllowed;
  transientFrame = 0;
  if (transientFlag) {
    if (transientPos + transientPosOffset <
        pFrameInfo->borders[pFrameInfo->nEnvelopes]) {
      transientFrame = 1;
    }
    if (noEstPerFrame > 1) {
      if (transientPos + transientPosOffset >
          h_sbrMissingHarmonicsDetector->timeSlots >> 1) {
        *pDetectionStartPos = noEstPerFrame;
      }
      else {
        *pDetectionStartPos = noEstPerFrame >> 1;
      }
    }
    else {
      *pDetectionStartPos = noEstPerFrame;
    }
  }
  else {
    if (prevTransientFlag && !prevTransientFrame) {
      transientFrame = 1;
      *pDetectionStartPos = 0;
    }
  }
  newDetectionAllowed = 0;
  if (transientFrame) {
    newDetectionAllowed = 1;
  }
  else {
    if (prevTransientFrame &&
        fixp_abs(pFrameInfo->borders[0] -
                 (prevTransientPos + transientPosOffset -
                  h_sbrMissingHarmonicsDetector->timeSlots)) < deltaTime) {
      newDetectionAllowed = 1;
    }
    *pDetectionStartPos = 0;
  }
  h_sbrMissingHarmonicsDetector->previousTransientFlag = transientFlag;
  h_sbrMissingHarmonicsDetector->previousTransientFrame = transientFrame;
  h_sbrMissingHarmonicsDetector->previousTransientPos = transientPos;
  return (newDetectionAllowed);
}

static void transientCleanUp(FIXP_DBL** quotaBuffer, INT nSfb,
                             UCHAR** detectionVectors, UCHAR* pAddHarmSfb,
                             UCHAR* pPrevAddHarmSfb, INT** signBuffer,
                             const UCHAR* pFreqBandTable, INT start, INT stop,
                             INT newDetectionAllowed, FIXP_DBL* pNrgVector,
                             THRES_HOLDS mhThresh) {
  INT i, j, li, ui, est;
  for (est = start; est < stop; est++) {
    for (i = 0; i < nSfb; i++) {
      pAddHarmSfb[i] = pAddHarmSfb[i] || detectionVectors[est][i];
    }
  }
  if (newDetectionAllowed == 1) {
    for (i = 0; i < nSfb - 1; i++) {
      li = pFreqBandTable[i];
      ui = pFreqBandTable[i + 1];
      if (pAddHarmSfb[i] && pAddHarmSfb[i + 1]) {
        FIXP_DBL maxVal1, maxVal2;
        INT maxPos1, maxPos2, maxPosTime1, maxPosTime2;
        li = pFreqBandTable[i];
        ui = pFreqBandTable[i + 1];
        maxPosTime1 = start;
        maxPos1 = li;
        maxVal1 = quotaBuffer[start][li];
        for (est = start; est < stop; est++) {
          for (j = li; j < ui; j++) {
            if (quotaBuffer[est][j] > maxVal1) {
              maxVal1 = quotaBuffer[est][j];
              maxPos1 = j;
              maxPosTime1 = est;
            }
          }
        }
        li = pFreqBandTable[i + 1];
        ui = pFreqBandTable[i + 2];
        maxPosTime2 = start;
        maxPos2 = li;
        maxVal2 = quotaBuffer[start][li];
        for (est = start; est < stop; est++) {
          for (j = li; j < ui; j++) {
            if (quotaBuffer[est][j] > maxVal2) {
              maxVal2 = quotaBuffer[est][j];
              maxPos2 = j;
              maxPosTime2 = est;
            }
          }
        }
        if (maxPos2 - maxPos1 < 2) {
          if (pPrevAddHarmSfb[i] == 1 && pPrevAddHarmSfb[i + 1] == 0) {
            pAddHarmSfb[i + 1] = 0;
            for (est = start; est < stop; est++) {
              detectionVectors[est][i + 1] = 0;
            }
          }
          else {
            if (pPrevAddHarmSfb[i] == 0 && pPrevAddHarmSfb[i + 1] == 1) {
              pAddHarmSfb[i] = 0;
              for (est = start; est < stop; est++) {
                detectionVectors[est][i] = 0;
              }
            }
            else {
              if (maxVal1 > maxVal2) {
                if (signBuffer[maxPosTime1][maxPos2] < 0 &&
                    signBuffer[maxPosTime1][maxPos1] > 0) {
                  pAddHarmSfb[i + 1] = 0;
                  for (est = start; est < stop; est++) {
                    detectionVectors[est][i + 1] = 0;
                  }
                }
              }
              else {
                if (signBuffer[maxPosTime2][maxPos2] < 0 &&
                    signBuffer[maxPosTime2][maxPos1] > 0) {
                  pAddHarmSfb[i] = 0;
                  for (est = start; est < stop; est++) {
                    detectionVectors[est][i] = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    removeLowPassDetection(pAddHarmSfb, detectionVectors, start, stop, nSfb,
                           pFreqBandTable, pNrgVector, mhThresh);
  }
  else {
    for (i = 0; i < nSfb; i++) {
      if (pAddHarmSfb[i] - pPrevAddHarmSfb[i] > 0) {
        pAddHarmSfb[i] = 0;
      }
    }
  }
}

static void detection(FIXP_DBL* quotaBuffer, FIXP_DBL* pDiffVecScfb, INT nSfb,
                      UCHAR* pHarmVec, const UCHAR* pFreqBandTable,
                      FIXP_DBL* sfmOrig, FIXP_DBL* sfmSbr,
                      GUIDE_VECTORS guideVectors, GUIDE_VECTORS newGuideVectors,
                      THRES_HOLDS mhThresh) {
  INT i, j, ll, lu;
  FIXP_DBL thresTemp, thresOrig;
  for (i = 0; i < nSfb; i++) {
    thresTemp = (guideVectors.guideVectorDiff[i] != fixed_dbl(0.0f))
                  ? fixMax(fMult(mhThresh.decayGuideDiff,
                                 guideVectors.guideVectorDiff[i]),
                           mhThresh.thresHoldDiffGuide)
                  : mhThresh.thresHoldDiff;
    thresTemp = fixMin(thresTemp, mhThresh.thresHoldDiff);
    if (pDiffVecScfb[i] > thresTemp) {
      pHarmVec[i] = 1;
      newGuideVectors.guideVectorDiff[i] = pDiffVecScfb[i];
    }
    else {
      if (guideVectors.guideVectorDiff[i] != fixed_dbl(0.0f)) {
        guideVectors.guideVectorOrig[i] = mhThresh.thresHoldToneGuide;
      }
    }
  }
  for (i = 0; i < nSfb; i++) {
    ll = pFreqBandTable[i];
    lu = pFreqBandTable[i + 1];
    thresOrig =
      fixMax(fMult(guideVectors.guideVectorOrig[i], mhThresh.decayGuideOrig),
             mhThresh.thresHoldToneGuide);
    thresOrig = fixMin(thresOrig, mhThresh.thresHoldTone);
    if (guideVectors.guideVectorOrig[i] != fixed_dbl(0.0f)) {
      for (j = ll; j < lu; j++) {
        if (quotaBuffer[j] > thresOrig) {
          pHarmVec[i] = 1;
          newGuideVectors.guideVectorOrig[i] = quotaBuffer[j];
        }
      }
    }
  }
  thresOrig = mhThresh.thresHoldTone;
  for (i = 0; i < nSfb; i++) {
    ll = pFreqBandTable[i];
    lu = pFreqBandTable[i + 1];
    if (pHarmVec[i] == 0) {
      if (lu - ll > 1) {
        for (j = ll; j < lu; j++) {
          if (quotaBuffer[j] > thresOrig &&
              (sfmSbr[i] > mhThresh.sfmThresSbr &&
               sfmOrig[i] < mhThresh.sfmThresOrig)) {
            pHarmVec[i] = 1;
            newGuideVectors.guideVectorOrig[i] = quotaBuffer[j];
          }
        }
      }
      else {
        if (i < nSfb - 1) {
          ll = pFreqBandTable[i];
          if (i > 0) {
            if (quotaBuffer[ll] > mhThresh.thresHoldTone &&
                (pDiffVecScfb[i + 1] < mhThresh.invThresHoldTone ||
                 pDiffVecScfb[i - 1] < mhThresh.invThresHoldTone)) {
              pHarmVec[i] = 1;
              newGuideVectors.guideVectorOrig[i] = quotaBuffer[ll];
            }
          }
          else {
            if (quotaBuffer[ll] > mhThresh.thresHoldTone &&
                pDiffVecScfb[i + 1] < mhThresh.invThresHoldTone) {
              pHarmVec[i] = 1;
              newGuideVectors.guideVectorOrig[i] = quotaBuffer[ll];
            }
          }
        }
      }
    }
  }
}

static void detectionWithPrediction(
  FIXP_DBL** quotaBuffer, FIXP_DBL** pDiffVecScfb, INT** signBuffer, INT nSfb,
  const UCHAR* pFreqBandTable, FIXP_DBL** sfmOrig, FIXP_DBL** sfmSbr,
  UCHAR** detectionVectors, UCHAR* pPrevAddHarmSfb, GUIDE_VECTORS* guideVectors,
  INT, INT detectionStart, INT totNoEst, INT newDetectionAllowed,
  INT* pAddHarmFlag, UCHAR* pAddHarmSfb, FIXP_DBL* pNrgVector,
  const DETECTOR_PARAMETERS_MH* mhParams) {
  INT est = 0, i;
  INT start;
  FDKmemclear(pAddHarmSfb, nSfb * sizeof(UCHAR));
  if (newDetectionAllowed) {
    if (totNoEst > 1) {
      start = detectionStart + 1;
      if (start != 0) {
        FDKmemcpy(guideVectors[start].guideVectorDiff,
                  guideVectors[0].guideVectorDiff, nSfb * sizeof(FIXP_DBL));
        FDKmemcpy(guideVectors[start].guideVectorOrig,
                  guideVectors[0].guideVectorOrig, nSfb * sizeof(FIXP_DBL));
        FDKmemclear(guideVectors[start - 1].guideVectorDetected,
                    nSfb * sizeof(UCHAR));
      }
    }
    else {
      start = 0;
    }
  }
  else {
    start = 0;
  }
  for (est = start; est < totNoEst; est++) {
    if (est > 0) {
      FDKmemcpy(guideVectors[est].guideVectorDetected,
                detectionVectors[est - 1], nSfb * sizeof(UCHAR));
    }
    FDKmemclear(detectionVectors[est], nSfb * sizeof(UCHAR));
    if (est < totNoEst - 1) {
      FDKmemclear(guideVectors[est + 1].guideVectorDiff,
                  nSfb * sizeof(FIXP_DBL));
      FDKmemclear(guideVectors[est + 1].guideVectorOrig,
                  nSfb * sizeof(FIXP_DBL));
      FDKmemclear(guideVectors[est + 1].guideVectorDetected,
                  nSfb * sizeof(UCHAR));
      detection(quotaBuffer[est], pDiffVecScfb[est], nSfb,
                detectionVectors[est], pFreqBandTable, sfmOrig[est],
                sfmSbr[est], guideVectors[est], guideVectors[est + 1],
                mhParams->thresHolds);
    }
    else {
      FDKmemclear(guideVectors[est].guideVectorDiff, nSfb * sizeof(FIXP_DBL));
      FDKmemclear(guideVectors[est].guideVectorOrig, nSfb * sizeof(FIXP_DBL));
      FDKmemclear(guideVectors[est].guideVectorDetected, nSfb * sizeof(UCHAR));
      detection(quotaBuffer[est], pDiffVecScfb[est], nSfb,
                detectionVectors[est], pFreqBandTable, sfmOrig[est],
                sfmSbr[est], guideVectors[est], guideVectors[est],
                mhParams->thresHolds);
    }
  }
  transientCleanUp(quotaBuffer, nSfb, detectionVectors, pAddHarmSfb,
                   pPrevAddHarmSfb, signBuffer, pFreqBandTable, start, totNoEst,
                   newDetectionAllowed, pNrgVector, mhParams->thresHolds);
  *pAddHarmFlag = 0;
  for (i = 0; i < nSfb; i++) {
    if (pAddHarmSfb[i]) {
      *pAddHarmFlag = 1;
      break;
    }
  }
  FDKmemcpy(pPrevAddHarmSfb, pAddHarmSfb, nSfb * sizeof(UCHAR));
  // The SDK copies four bytes per band from this byte buffer.
  FDKmemcpy(guideVectors[0].guideVectorDetected, pAddHarmSfb,
            nSfb * sizeof(INT));
  for (i = 0; i < nSfb; i++) {
    guideVectors[0].guideVectorDiff[i] = fixed_dbl(0.0f);
    guideVectors[0].guideVectorOrig[i] = fixed_dbl(0.0f);
    if (pAddHarmSfb[i] == 1) {
      for (est = start; est < totNoEst; est++) {
        if (guideVectors[est].guideVectorDiff[i] != fixed_dbl(0.0f)) {
          guideVectors[0].guideVectorDiff[i] =
            guideVectors[est].guideVectorDiff[i];
        }
        if (guideVectors[est].guideVectorOrig[i] != fixed_dbl(0.0f)) {
          guideVectors[0].guideVectorOrig[i] =
            guideVectors[est].guideVectorOrig[i];
        }
      }
    }
  }
}

static void calculateCompVector(UCHAR* pAddHarmSfb, FIXP_DBL** pTonalityMatrix,
                                INT** pSignMatrix, UCHAR* pEnvComp, INT nSfb,
                                const UCHAR* freqBandTable, INT totNoEst,
                                INT maxComp, UCHAR* pPrevEnvComp,
                                INT newDetectionAllowed) {
  INT scfBand, est, l, ll, lu, maxPosF, maxPosT;
  FIXP_DBL maxVal;
  INT compValue;
  FIXP_DBL tmp;
  FDKmemclear(pEnvComp, nSfb * sizeof(UCHAR));
  for (scfBand = 0; scfBand < nSfb; scfBand++) {
    if (pAddHarmSfb[scfBand]) {
      ll = freqBandTable[scfBand];
      lu = freqBandTable[scfBand + 1];
      maxPosF = 0;
      maxPosT = 0;
      maxVal = fixed_dbl(0.0f);
      for (est = 0; est < totNoEst; est++) {
        for (l = ll; l < lu; l++) {
          if (pTonalityMatrix[est][l] > maxVal) {
            maxVal = pTonalityMatrix[est][l];
            maxPosF = l;
            maxPosT = est;
          }
        }
      }
      if (maxPosF == ll && scfBand) {
        if (!pAddHarmSfb[scfBand - 1]) {
          if (pSignMatrix[maxPosT][maxPosF - 1] > 0 &&
              pSignMatrix[maxPosT][maxPosF] < 0) {
            tmp = fixp_abs(
              (FIXP_DBL)CalcLdData(pTonalityMatrix[maxPosT][maxPosF - 1]) +
              fixed_dbl(0.31143075889f));
            tmp = (tmp >> (32 - 1 - 6 - 1)) + (FIXP_DBL)1;
            compValue = ((INT)(LONG)tmp) >> 1;
            if (compValue > maxComp) {
              compValue = maxComp;
            }
            pEnvComp[scfBand - 1] = compValue;
          }
        }
      }
      if (maxPosF == lu - 1 && scfBand + 1 < nSfb) {
        if (!pAddHarmSfb[scfBand + 1]) {
          if (pSignMatrix[maxPosT][maxPosF] > 0 &&
              pSignMatrix[maxPosT][maxPosF + 1] < 0) {
            tmp = fixp_abs(
              (FIXP_DBL)CalcLdData(pTonalityMatrix[maxPosT][maxPosF + 1]) +
              fixed_dbl(0.31143075889f));
            tmp = (tmp >> (32 - 1 - 6 - 1)) + (FIXP_DBL)1;
            compValue = ((INT)(LONG)tmp) >> 1;
            if (compValue > maxComp) {
              compValue = maxComp;
            }
            pEnvComp[scfBand + 1] = compValue;
          }
        }
      }
    }
  }
  if (newDetectionAllowed == 0) {
    for (scfBand = 0; scfBand < nSfb; scfBand++) {
      if (pEnvComp[scfBand] != 0 && pPrevEnvComp[scfBand] == 0) {
        pEnvComp[scfBand] = 0;
      }
    }
  }
  FDKmemcpy(pPrevEnvComp, pEnvComp, nSfb * sizeof(UCHAR));
}

void FDKsbrEnc_SbrMissingHarmonicsDetectorQmf(
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR h_sbrMHDet, FIXP_DBL** pQuotaBuffer,
  INT** pSignBuffer, SCHAR* indexVector, const SBR_FRAME_INFO* pFrameInfo,
  const UCHAR* pTranInfo, INT* pAddHarmonicsFlag,
  UCHAR* pAddHarmonicsScaleFactorBands, const UCHAR* freqBandTable, INT nSfb,
  UCHAR* envelopeCompensation, FIXP_DBL* pNrgVector) {
  INT transientFlag = pTranInfo[1];
  INT transientPos = pTranInfo[0];
  INT newDetectionAllowed;
  INT transientDetStart = 0;
  UCHAR** detectionVectors = h_sbrMHDet->detectionVectors;
  INT move = h_sbrMHDet->move;
  INT noEstPerFrame = h_sbrMHDet->noEstPerFrame;
  INT totNoEst = h_sbrMHDet->totNoEst;
  INT prevTransientFlag = h_sbrMHDet->previousTransientFlag;
  INT prevTransientFrame = h_sbrMHDet->previousTransientFrame;
  INT transientPosOffset = h_sbrMHDet->transientPosOffset;
  INT prevTransientPos = h_sbrMHDet->previousTransientPos;
  GUIDE_VECTORS* guideVectors = h_sbrMHDet->guideVectors;
  INT deltaTime = h_sbrMHDet->mhParams->deltaTime;
  INT maxComp = h_sbrMHDet->mhParams->maxComp;
  int est;
  FIXP_DBL* sfmSbr[4];
  FIXP_DBL* sfmOrig[4];
  FIXP_DBL* tonalityDiff[4];
  for (est = 0; est < 4 / 2; est++) {
    sfmSbr[est] = h_sbrMHDet->sfmSbr[est];
    sfmOrig[est] = h_sbrMHDet->sfmOrig[est];
    tonalityDiff[est] = h_sbrMHDet->tonalityDiff[est];
  }
  FIXP_DBL scratch_mem[(3 * 4 / 2 * 48)] = {};
  FIXP_DBL* scratch = scratch_mem;
  for (; est < 4; est++) {
    sfmSbr[est] = scratch;
    scratch += 48;
    sfmOrig[est] = scratch;
    scratch += 48;
    tonalityDiff[est] = scratch;
    scratch += 48;
  }
  newDetectionAllowed = isDetectionOfNewToneAllowed(
    pFrameInfo, &transientDetStart, noEstPerFrame, prevTransientFrame,
    prevTransientPos, prevTransientFlag, transientPosOffset, transientFlag,
    transientPos, deltaTime, h_sbrMHDet);
  calculateDetectorInput(pQuotaBuffer, indexVector, tonalityDiff, sfmOrig,
                         sfmSbr, freqBandTable, nSfb, noEstPerFrame, move);
  detectionWithPrediction(pQuotaBuffer, tonalityDiff, pSignBuffer, nSfb,
                          freqBandTable, sfmOrig, sfmSbr, detectionVectors,
                          h_sbrMHDet->guideScfb, guideVectors, noEstPerFrame,
                          transientDetStart, totNoEst, newDetectionAllowed,
                          pAddHarmonicsFlag, pAddHarmonicsScaleFactorBands,
                          pNrgVector, h_sbrMHDet->mhParams);
  calculateCompVector(pAddHarmonicsScaleFactorBands, pQuotaBuffer, pSignBuffer,
                      envelopeCompensation, nSfb, freqBandTable, totNoEst,
                      maxComp, h_sbrMHDet->prevEnvelopeCompensation,
                      newDetectionAllowed);
  for (est = 0; est < move; est++) {
    FDKmemcpy(tonalityDiff[est], tonalityDiff[est + noEstPerFrame],
              sizeof(FIXP_DBL) * 48);
    FDKmemcpy(sfmOrig[est], sfmOrig[est + noEstPerFrame],
              sizeof(FIXP_DBL) * 48);
    FDKmemcpy(sfmSbr[est], sfmSbr[est + noEstPerFrame], sizeof(FIXP_DBL) * 48);
  }
}

INT FDKsbrEnc_InitSbrMissingHarmonicsDetector(
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR hSbrMHDet, INT sampleFreq,
  INT frameSize, INT nSfb, INT qmfNoChannels, INT totNoEst, INT move,
  INT noEstPerFrame, UINT sbrSyntaxFlags) {
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR hs = hSbrMHDet;
  int i;
  if (sbrSyntaxFlags & 1) {
    switch (frameSize) {
      case 1024:
      case 512:
        // The SDK uses four slots for low-delay frames too.
        hs->transientPosOffset = 4;
        hs->timeSlots = 16;
        break;
      case 960:
      case 480:
        hs->transientPosOffset = 4;
        hs->timeSlots = 15;
        break;
      default:
        return -1;
    }
  }
  else {
    switch (frameSize) {
      case 2048:
      case 1024:
        hs->transientPosOffset = 4;
        hs->timeSlots = 16;
        break;
      case 1920:
      case 960:
        hs->transientPosOffset = 4;
        hs->timeSlots = 15;
        break;
      default:
        return -1;
    }
  }
  if (sbrSyntaxFlags & 1) {
    hs->mhParams = &paramsAacLd;
  }
  else {
    hs->mhParams = &paramsAac;
  }
  hs->qmfNoChannels = qmfNoChannels;
  hs->sampleFreq = sampleFreq;
  hs->nSfb = nSfb;
  hs->totNoEst = totNoEst;
  hs->move = move;
  hs->noEstPerFrame = noEstPerFrame;
  for (i = 0; i < totNoEst; i++) {
    FDKmemclear(hs->guideVectors[i].guideVectorDiff, sizeof(FIXP_DBL) * 48);
    FDKmemclear(hs->guideVectors[i].guideVectorOrig, sizeof(FIXP_DBL) * 48);
    FDKmemclear(hs->detectionVectors[i], sizeof(UCHAR) * 48);
    FDKmemclear(hs->guideVectors[i].guideVectorDetected, sizeof(UCHAR) * 48);
  }
  for (i = 0; i < 4 / 2; i++) {
    FDKmemclear(hs->tonalityDiff[i], sizeof(FIXP_DBL) * 48);
    FDKmemclear(hs->sfmOrig[i], sizeof(FIXP_DBL) * 48);
    FDKmemclear(hs->sfmSbr[i], sizeof(FIXP_DBL) * 48);
  }
  FDKmemclear(hs->prevEnvelopeCompensation, sizeof(UCHAR) * 48);
  FDKmemclear(hs->guideScfb, sizeof(UCHAR) * 48);
  hs->previousTransientFlag = 0;
  hs->previousTransientFrame = 0;
  hs->previousTransientPos = 0;
  return (0);
}

INT FDKsbrEnc_ResetSbrMissingHarmonicsDetector(
  HANDLE_SBR_MISSING_HARMONICS_DETECTOR hSbrMissingHarmonicsDetector,
  INT nSfb) {
  int i;
  FIXP_DBL tempGuide[48];
  UCHAR tempGuideInt[48];
  INT nSfbPrev;
  nSfbPrev = hSbrMissingHarmonicsDetector->nSfb;
  hSbrMissingHarmonicsDetector->nSfb = nSfb;
  FDKmemcpy(tempGuideInt, hSbrMissingHarmonicsDetector->guideScfb,
            nSfbPrev * sizeof(UCHAR));
  if (nSfb > nSfbPrev) {
    for (i = 0; i < (nSfb - nSfbPrev); i++) {
      hSbrMissingHarmonicsDetector->guideScfb[i] = 0;
    }
    for (i = 0; i < nSfbPrev; i++) {
      hSbrMissingHarmonicsDetector->guideScfb[i + (nSfb - nSfbPrev)] =
        tempGuideInt[i];
    }
  }
  else {
    for (i = 0; i < nSfb; i++) {
      hSbrMissingHarmonicsDetector->guideScfb[i] =
        tempGuideInt[i + (nSfbPrev - nSfb)];
    }
  }
  FDKmemcpy(tempGuide,
            hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorDiff,
            nSfbPrev * sizeof(FIXP_DBL));
  if (nSfb > nSfbPrev) {
    for (i = 0; i < (nSfb - nSfbPrev); i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorDiff[i] =
        fixed_dbl(0.0f);
    }
    for (i = 0; i < nSfbPrev; i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0]
        .guideVectorDiff[i + (nSfb - nSfbPrev)] = tempGuide[i];
    }
  }
  else {
    for (i = 0; i < nSfb; i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorDiff[i] =
        tempGuide[i + (nSfbPrev - nSfb)];
    }
  }
  FDKmemcpy(tempGuide,
            hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorOrig,
            nSfbPrev * sizeof(FIXP_DBL));
  if (nSfb > nSfbPrev) {
    for (i = 0; i < (nSfb - nSfbPrev); i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorOrig[i] =
        fixed_dbl(0.0f);
    }
    for (i = 0; i < nSfbPrev; i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0]
        .guideVectorOrig[i + (nSfb - nSfbPrev)] = tempGuide[i];
    }
  }
  else {
    for (i = 0; i < nSfb; i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorOrig[i] =
        tempGuide[i + (nSfbPrev - nSfb)];
    }
  }
  FDKmemcpy(tempGuideInt,
            hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorDetected,
            nSfbPrev * sizeof(UCHAR));
  if (nSfb > nSfbPrev) {
    for (i = 0; i < (nSfb - nSfbPrev); i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorDetected[i] = 0;
    }
    for (i = 0; i < nSfbPrev; i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0]
        .guideVectorDetected[i + (nSfb - nSfbPrev)] = tempGuideInt[i];
    }
  }
  else {
    for (i = 0; i < nSfb; i++) {
      hSbrMissingHarmonicsDetector->guideVectors[0].guideVectorDetected[i] =
        tempGuideInt[i + (nSfbPrev - nSfb)];
    }
  }
  FDKmemcpy(tempGuideInt,
            hSbrMissingHarmonicsDetector->prevEnvelopeCompensation,
            nSfbPrev * sizeof(UCHAR));
  if (nSfb > nSfbPrev) {
    for (i = 0; i < (nSfb - nSfbPrev); i++) {
      hSbrMissingHarmonicsDetector->prevEnvelopeCompensation[i] = 0;
    }
    for (i = 0; i < nSfbPrev; i++) {
      hSbrMissingHarmonicsDetector
        ->prevEnvelopeCompensation[i + (nSfb - nSfbPrev)] = tempGuideInt[i];
    }
  }
  else {
    for (i = 0; i < nSfb; i++) {
      hSbrMissingHarmonicsDetector->prevEnvelopeCompensation[i] =
        tempGuideInt[i + (nSfbPrev - nSfb)];
    }
  }
  return 0;
}

}
