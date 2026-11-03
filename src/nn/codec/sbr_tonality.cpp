/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/sbr_tonality.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using INT = int;
using UINT = unsigned int;
using UCHAR = uint8_t;
using SCHAR = int8_t;
void* FDKmemcpy(void*, const void*, unsigned int);
void* FDKmemmove(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
int32_t schur_div(int32_t, int32_t, int);
constexpr int32_t fixed_dbl(double v) {
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

static int32_t fixp_abs(int32_t value) {
  return value < 0 ? static_cast<int32_t>(0U - value) : value;
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

void FDKsbrEnc_CalculateTonalityQuotas(HANDLE_SBR_TON_CORR_EST hTonCorr,
                                       FIXP_DBL** sourceBufferReal,
                                       FIXP_DBL** sourceBufferImag, INT usb,
                                       INT qmfScale) {
  INT i, k, r, r2, timeIndex, autoCorrScaling;
  INT startIndexMatrix = hTonCorr->startIndexMatrix;
  INT totNoEst = hTonCorr->numberOfEstimates;
  INT noEstPerFrame = hTonCorr->numberOfEstimatesPerFrame;
  INT move = hTonCorr->move;
  INT noQmfChannels = hTonCorr->noQmfChannels;
  INT buffLen = hTonCorr->bufferLength;
  INT stepSize = hTonCorr->stepSize;
  INT* pBlockLength = hTonCorr->lpcLength;
  INT** signMatrix = hTonCorr->signMatrix;
  FIXP_DBL* nrgVector = hTonCorr->nrgVector;
  FIXP_DBL** quotaMatrix = hTonCorr->quotaMatrix;
  FIXP_DBL* pNrgVectorFreq = hTonCorr->nrgVectorFreq;
  FIXP_DBL* realBuf;
  FIXP_DBL* imagBuf;
  FIXP_DBL alphar[2], alphai[2], fac;
  ACORR_COEFS ac[1] = {};
  FIXP_DBL realBufRef[2 * 32 * 8] = {};
  realBuf = realBufRef;
  imagBuf = realBuf + 32 * 8;
  for (i = 0; i < move; i++) {
    FDKmemcpy(quotaMatrix[i], quotaMatrix[i + noEstPerFrame],
              noQmfChannels * sizeof(FIXP_DBL));
    FDKmemcpy(signMatrix[i], signMatrix[i + noEstPerFrame],
              noQmfChannels * sizeof(INT));
  }
  FDKmemmove(nrgVector, nrgVector + noEstPerFrame, move * sizeof(FIXP_DBL));
  FDKmemclear(nrgVector + startIndexMatrix,
              (totNoEst - startIndexMatrix) * sizeof(FIXP_DBL));
  FDKmemclear(pNrgVectorFreq, noQmfChannels * sizeof(FIXP_DBL));
  for (r = 0; r < usb; r++) {
    int blockLength;
    k = hTonCorr->nextSample;
    timeIndex = startIndexMatrix;
    if (realBuf != realBufRef) {
      realBuf -= 32;
      imagBuf -= 32;
    }
    else {
      realBuf += 32 * (8 - 1);
      imagBuf += 32 * (8 - 1);
      for (i = 0; i < buffLen; i++) {
        int v;
        FIXP_DBL* ptr;
        ptr = realBuf + i;
        for (v = 0; v < 8; v++) {
          ptr[0] = sourceBufferReal[i][r + v];
          ptr[0 + 32 * 8] = sourceBufferImag[i][r + v];
          ptr -= 32;
        }
      }
    }
    blockLength = pBlockLength[0];
    while (k <= buffLen - blockLength) {
      autoCorrScaling =
        fixMin(getScalefactor(&realBuf[k - 2], 2 + blockLength),
               getScalefactor(&imagBuf[k - 2], 2 + blockLength));
      autoCorrScaling = fixMax(0, autoCorrScaling - 1);
      scaleValues(&realBuf[k - 2], 2 + blockLength, autoCorrScaling);
      scaleValues(&imagBuf[k - 2], 2 + blockLength, autoCorrScaling);
      autoCorrScaling <<= 1;
      autoCorrScaling +=
        autoCorr2nd_cplx(ac, realBuf + k, imagBuf + k, blockLength);
      if (ac->det == fixed_dbl(0.0f)) {
        alphar[1] = alphai[1] = fixed_dbl(0.0f);
        alphar[0] = (ac->r01r) >> 2;
        alphai[0] = (ac->r01i) >> 2;
        fac = fMultDiv2(ac->r00r, ac->r11r) >> 1;
      }
      else {
        alphar[1] = (fMultDiv2(ac->r01r, ac->r12r) >> 1) -
                    (fMultDiv2(ac->r01i, ac->r12i) >> 1) -
                    (fMultDiv2(ac->r02r, ac->r11r) >> 1);
        alphai[1] = (fMultDiv2(ac->r01i, ac->r12r) >> 1) +
                    (fMultDiv2(ac->r01r, ac->r12i) >> 1) -
                    (fMultDiv2(ac->r02i, ac->r11r) >> 1);
        alphar[0] = (fMultDiv2(ac->r01r, ac->det) >> (ac->det_scale + 1)) +
                    fMult(alphar[1], ac->r12r) + fMult(alphai[1], ac->r12i);
        alphai[0] = (fMultDiv2(ac->r01i, ac->det) >> (ac->det_scale + 1)) +
                    fMult(alphai[1], ac->r12r) - fMult(alphar[1], ac->r12i);
        fac =
          fMultDiv2(ac->r00r, fMult(ac->det, ac->r11r)) >> (ac->det_scale + 1);
      }
      if (fac == fixed_dbl(0.0f)) {
        quotaMatrix[timeIndex][r] = fixed_dbl(0.0f);
        signMatrix[timeIndex][r] = 0;
      }
      else {
        FIXP_DBL tmp, num, denom;
        INT numShift, denomShift, commonShift;
        INT sign;
        num = fMultDiv2(alphar[0], ac->r01r) + fMultDiv2(alphai[0], ac->r01i) -
              fMultDiv2(alphar[1], fMult(ac->r02r, ac->r11r)) -
              fMultDiv2(alphai[1], fMult(ac->r02i, ac->r11r));
        num = fixp_abs(num);
        denom = (fac >> 1) + (fMultDiv2(fac, fixed_dbl(0.524288f)) >> 19) - num;
        denom = fixp_abs(denom);
        num = fMult(num, fixed_dbl(0.524288f));
        numShift = CountLeadingBits(num) - 2;
        num = scaleValue(num, numShift);
        denomShift = CountLeadingBits(denom);
        denom = (FIXP_DBL)denom << denomShift;
        if ((num > fixed_dbl(0.0f)) && (denom != fixed_dbl(0.0f))) {
          commonShift = fixMin(numShift - denomShift + 19, 32 - 1);
          if (commonShift < 0) {
            commonShift = -commonShift;
            tmp = schur_div(num, denom, 16);
            commonShift = fixMin(commonShift, CountLeadingBits(tmp));
            quotaMatrix[timeIndex][r] = tmp << commonShift;
          }
          else {
            quotaMatrix[timeIndex][r] =
              schur_div(num, denom, 16) >> commonShift;
          }
        }
        else {
          quotaMatrix[timeIndex][r] = fixed_dbl(0.0f);
        }
        if (ac->r11r != fixed_dbl(0.0f)) {
          if (((ac->r01r >= fixed_dbl(0.0f)) &&
               (ac->r11r >= fixed_dbl(0.0f))) ||
              ((ac->r01r < fixed_dbl(0.0f)) && (ac->r11r < fixed_dbl(0.0f)))) {
            sign = 1;
          }
          else {
            sign = -1;
          }
        }
        else {
          sign = 1;
        }
        if (sign < 0) {
          r2 = r;
        }
        else {
          r2 = r + 1;
        }
        signMatrix[timeIndex][r] = 1 - 2 * (r2 & 0x1);
      }
      nrgVector[timeIndex] +=
        ((ac->r00r) >> fixMin(32 - 1, (2 * qmfScale + autoCorrScaling + 4)));
      pNrgVectorFreq[r] =
        pNrgVectorFreq[r] +
        ((ac->r00r) >> fixMin(32 - 1, (2 * qmfScale + autoCorrScaling + 4)));
      blockLength = pBlockLength[1];
      k += stepSize;
      timeIndex++;
    }
  }
}

void FDKsbrEnc_TonCorrParamExtr(
  HANDLE_SBR_TON_CORR_EST hTonCorr, INVF_MODE* infVec, FIXP_DBL* noiseLevels,
  INT* missingHarmonicFlag, UCHAR* missingHarmonicsIndex,
  UCHAR* envelopeCompensation, const SBR_FRAME_INFO* frameInfo,
  UCHAR* transientInfo, UCHAR* freqBandTable, INT nSfb, XPOS_MODE xposType,
  UINT sbrSyntaxFlags) {
  INT band;
  INT transientFlag = transientInfo[1];
  INT transientPos = transientInfo[0];
  INT transientFrame, transientFrameInvfEst;
  INVF_MODE* infVecPtr;
  transientFrame = 0;
  if (hTonCorr->transientNextFrame) {
    transientFrame = 1;
    hTonCorr->transientNextFrame = 0;
    if (transientFlag) {
      if (transientPos + hTonCorr->transientPosOffset >=
          frameInfo->borders[frameInfo->nEnvelopes]) {
        hTonCorr->transientNextFrame = 1;
      }
    }
  }
  else {
    if (transientFlag) {
      if (transientPos + hTonCorr->transientPosOffset <
          frameInfo->borders[frameInfo->nEnvelopes]) {
        transientFrame = 1;
        hTonCorr->transientNextFrame = 0;
      }
      else {
        hTonCorr->transientNextFrame = 1;
      }
    }
  }
  transientFrameInvfEst = transientFrame;
  if (hTonCorr->switchInverseFilt) {
    FDKsbrEnc_qmfInverseFilteringDetector(
      &hTonCorr->sbrInvFilt, hTonCorr->quotaMatrix, hTonCorr->nrgVector,
      hTonCorr->indexVector, hTonCorr->frameStartIndexInvfEst,
      hTonCorr->numberOfEstimatesPerFrame + hTonCorr->frameStartIndexInvfEst,
      transientFrameInvfEst, infVec);
  }
  if (xposType == XPOS_LC) {
    FDKsbrEnc_SbrMissingHarmonicsDetectorQmf(
      &hTonCorr->sbrMissingHarmonicsDetector, hTonCorr->quotaMatrix,
      hTonCorr->signMatrix, hTonCorr->indexVector, frameInfo, transientInfo,
      missingHarmonicFlag, missingHarmonicsIndex, freqBandTable, nSfb,
      envelopeCompensation, hTonCorr->nrgVectorFreq);
  }
  else {
    *missingHarmonicFlag = 0;
    FDKmemclear(missingHarmonicsIndex, nSfb * sizeof(UCHAR));
  }
  infVecPtr = hTonCorr->sbrInvFilt.prevInvfMode;
  FDKsbrEnc_sbrNoiseFloorEstimateQmf(
    &hTonCorr->sbrNoiseFloorEstimate, frameInfo, noiseLevels,
    hTonCorr->quotaMatrix, hTonCorr->indexVector, *missingHarmonicFlag,
    hTonCorr->frameStartIndex, hTonCorr->numberOfEstimatesPerFrame,
    transientFrame, infVecPtr, sbrSyntaxFlags);
  for (band = 0; band < hTonCorr->sbrInvFilt.noDetectorBands; band++) {
    hTonCorr->sbrInvFilt.prevInvfMode[band] = infVec[band];
  }
}

static int findClosestEntry(INT goalSb, UCHAR* v_k_master, INT numMaster,
                            INT direction) {
  INT index;
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

static int resetPatch(HANDLE_SBR_TON_CORR_EST hTonCorr, INT xposctrl,
                      INT highBandStartSb, UCHAR* v_k_master, INT numMaster,
                      INT fs, INT noChannels) {
  INT patch, k, i;
  INT targetStopBand;
  SBR_ENCODER_PATCH_PARAM* patchParam = hTonCorr->patchParam;
  INT sbGuard = hTonCorr->guard;
  INT sourceStartBand;
  INT patchDistance;
  INT numBandsInPatch;
  INT lsb = v_k_master[0];
  INT usb = v_k_master[numMaster];
  INT xoverOffset = highBandStartSb - v_k_master[0];
  INT goalSb;
  if (xposctrl == 1) {
    lsb += xoverOffset;
    xoverOffset = 0;
  }
  goalSb = (INT)((2 * noChannels * 16000 + (fs >> 1)) / fs);
  goalSb = findClosestEntry(goalSb, v_k_master, numMaster, 1);
  sourceStartBand = hTonCorr->shiftStartSb + xoverOffset;
  targetStopBand = lsb + xoverOffset;
  patch = 0;
  while (targetStopBand < usb) {
    if (patch >= 6) {
      return (1);
    }
    patchParam[patch].guardStartBand = targetStopBand;
    targetStopBand += sbGuard;
    patchParam[patch].targetStartBand = targetStopBand;
    numBandsInPatch = goalSb - targetStopBand;
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
    if (numBandsInPatch <= 0) {
      patch--;
    }
    else {
      patchParam[patch].sourceStartBand = targetStopBand - patchDistance;
      patchParam[patch].targetBandOffs = patchDistance;
      patchParam[patch].numBandsInPatch = numBandsInPatch;
      patchParam[patch].sourceStopBand =
        patchParam[patch].sourceStartBand + numBandsInPatch;
      targetStopBand += patchParam[patch].numBandsInPatch;
    }
    sourceStartBand = hTonCorr->shiftStartSb;
    if (fixp_abs(targetStopBand - goalSb) < 3) {
      goalSb = usb;
    }
    patch++;
  }
  patch--;
  if (patchParam[patch].numBandsInPatch < 3 && patch > 0) {
    patch--;
    targetStopBand =
      patchParam[patch].targetStartBand + patchParam[patch].numBandsInPatch;
  }
  hTonCorr->noOfPatches = patch + 1;
  for (k = 0; k < hTonCorr->patchParam[0].guardStartBand; k++) {
    hTonCorr->indexVector[k] = k;
  }
  for (i = 0; i < hTonCorr->noOfPatches; i++) {
    INT sourceStart = hTonCorr->patchParam[i].sourceStartBand;
    INT targetStart = hTonCorr->patchParam[i].targetStartBand;
    INT numberOfBands = hTonCorr->patchParam[i].numBandsInPatch;
    INT startGuardBand = hTonCorr->patchParam[i].guardStartBand;
    for (k = 0; k < (targetStart - startGuardBand); k++) {
      hTonCorr->indexVector[startGuardBand + k] = -1;
    }
    for (k = 0; k < numberOfBands; k++) {
      hTonCorr->indexVector[targetStart + k] = sourceStart + k;
    }
  }
  return (0);
}

int FDKsbrEnc_InitTonCorrParamExtr(INT frameSize,
                                   HANDLE_SBR_TON_CORR_EST hTonCorr,
                                   HANDLE_SBR_CONFIG_DATA sbrCfg, INT timeSlots,
                                   INT xposCtrl, INT ana_max_level,
                                   INT noiseBands, INT noiseFloorOffset,
                                   UINT useSpeechConfig) {
  INT nCols = sbrCfg->noQmfSlots;
  INT fs = sbrCfg->sampleFreq;
  INT noQmfChannels = sbrCfg->noQmfBands;
  INT highBandStartSb = sbrCfg->freqBandTable[0][0];
  UCHAR* v_k_master = sbrCfg->v_k_master;
  INT numMaster = sbrCfg->num_Master;
  UCHAR** freqBandTable = sbrCfg->freqBandTable;
  INT* nSfb = sbrCfg->nSfb;
  INT i;
  if (sbrCfg->sbrSyntaxFlags & 1) {
    switch (timeSlots) {
      case 15:
        hTonCorr->lpcLength[0] = 8 - 2;
        hTonCorr->lpcLength[1] = 7 - 2;
        hTonCorr->numberOfEstimates = 3;
        hTonCorr->numberOfEstimatesPerFrame = 2;
        hTonCorr->frameStartIndexInvfEst = 0;
        // The SDK uses four slots for low-delay frames too.
        hTonCorr->transientPosOffset = 4;
        break;
      case 16:
        hTonCorr->lpcLength[0] = 8 - 2;
        hTonCorr->lpcLength[1] = 8 - 2;
        hTonCorr->numberOfEstimates = 3;
        hTonCorr->numberOfEstimatesPerFrame = 2;
        hTonCorr->frameStartIndexInvfEst = 0;
        // The SDK uses four slots for low-delay frames too.
        hTonCorr->transientPosOffset = 4;
        break;
    }
  }
  else {
    switch (timeSlots) {
      case 16:
        hTonCorr->lpcLength[0] = 16 - 2;
        hTonCorr->lpcLength[1] = 16 - 2;
        hTonCorr->numberOfEstimates = 4;
        hTonCorr->numberOfEstimatesPerFrame = sbrCfg->noQmfSlots / 16;
        hTonCorr->frameStartIndexInvfEst = 0;
        hTonCorr->transientPosOffset = 4;
        break;
      case 15:
        hTonCorr->lpcLength[0] = 15 - 2;
        hTonCorr->lpcLength[1] = 15 - 2;
        hTonCorr->numberOfEstimates = 4;
        hTonCorr->numberOfEstimatesPerFrame = sbrCfg->noQmfSlots / 15;
        hTonCorr->frameStartIndexInvfEst = 0;
        hTonCorr->transientPosOffset = 4;
        break;
      default:
        return -1;
    }
  }
  hTonCorr->bufferLength = nCols;
  hTonCorr->stepSize = hTonCorr->lpcLength[0] + 2;
  hTonCorr->nextSample = 2;
  hTonCorr->move =
    hTonCorr->numberOfEstimates - hTonCorr->numberOfEstimatesPerFrame;
  hTonCorr->startIndexMatrix =
    hTonCorr->numberOfEstimates - hTonCorr->numberOfEstimatesPerFrame;
  hTonCorr->frameStartIndex = 0;
  hTonCorr->prevTransientFlag = 0;
  hTonCorr->transientNextFrame = 0;
  hTonCorr->noQmfChannels = noQmfChannels;
  for (i = 0; i < hTonCorr->numberOfEstimates; i++) {
    FDKmemclear(hTonCorr->quotaMatrix[i], sizeof(FIXP_DBL) * noQmfChannels);
    FDKmemclear(hTonCorr->signMatrix[i], sizeof(INT) * noQmfChannels);
  }
  hTonCorr->guard = 0;
  hTonCorr->shiftStartSb = 1;
  if (resetPatch(hTonCorr, xposCtrl, highBandStartSb, v_k_master, numMaster, fs,
                 noQmfChannels)) {
    return (1);
  }
  if (FDKsbrEnc_InitSbrNoiseFloorEstimate(
        &hTonCorr->sbrNoiseFloorEstimate, ana_max_level, freqBandTable[0],
        nSfb[0], noiseBands, noiseFloorOffset, timeSlots, useSpeechConfig)) {
    return (1);
  }
  if (FDKsbrEnc_initInvFiltDetector(
        &hTonCorr->sbrInvFilt, hTonCorr->sbrNoiseFloorEstimate.freqBandTableQmf,
        hTonCorr->sbrNoiseFloorEstimate.noNoiseBands, useSpeechConfig)) {
    return (1);
  }
  if (FDKsbrEnc_InitSbrMissingHarmonicsDetector(
        &hTonCorr->sbrMissingHarmonicsDetector, fs, frameSize, nSfb[1],
        noQmfChannels, hTonCorr->numberOfEstimates, hTonCorr->move,
        hTonCorr->numberOfEstimatesPerFrame, sbrCfg->sbrSyntaxFlags)) {
    return (1);
  }
  return (0);
}

int FDKsbrEnc_ResetTonCorrParamExtr(HANDLE_SBR_TON_CORR_EST hTonCorr,
                                    INT xposctrl, INT highBandStartSb,
                                    UCHAR* v_k_master, INT numMaster, INT fs,
                                    UCHAR** freqBandTable, INT* nSfb,
                                    INT noQmfChannels) {
  hTonCorr->guard = 0;
  hTonCorr->shiftStartSb = 1;
  if (resetPatch(hTonCorr, xposctrl, highBandStartSb, v_k_master, numMaster, fs,
                 noQmfChannels)) {
    return (1);
  }
  if (FDKsbrEnc_resetSbrNoiseFloorEstimate(&hTonCorr->sbrNoiseFloorEstimate,
                                           freqBandTable[0], nSfb[0])) {
    return (1);
  }
  if (FDKsbrEnc_resetInvFiltDetector(
        &hTonCorr->sbrInvFilt, hTonCorr->sbrNoiseFloorEstimate.freqBandTableQmf,
        hTonCorr->sbrNoiseFloorEstimate.noNoiseBands)) {
    return (1);
  }
  if (FDKsbrEnc_ResetSbrMissingHarmonicsDetector(
        &hTonCorr->sbrMissingHarmonicsDetector, nSfb[1])) {
    return (1);
  }
  return (0);
}

}
