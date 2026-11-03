/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/quantization.hpp"
#include "nn/codec/sbr_envelope.hpp"
#include "nn/codec/sbr_frequency.hpp"
#include "nn/codec/sbr_noise.hpp"
#include "nn/codec/tns_configuration.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using INT = int;
using UINT = unsigned int;
using UCHAR = uint8_t;
using SCHAR = int8_t;
extern const int32_t invCount[80];
void* FDKmemcpy(void*, const void*, unsigned int);
void* FDKmemmove(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);

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

static int32_t GetInvInt(int value) {
  return invCount[value];
}

static int32_t scaleValue(int32_t value, int shift) {
  return shift >= 0 ? value << shift : value >> -shift;
}

void FDKsbrEnc_Shellsort_fract(FIXP_DBL* in, INT n) {
  FIXP_DBL v;
  INT i, j;
  INT inc = 1;
  do {
    inc = 3 * inc + 1;
  } while (inc <= n);
  do {
    inc = inc / 3;
    for (i = inc + 1; i <= n; i++) {
      v = in[i - 1];
      j = i;
      while (in[j - inc - 1] > v) {
        in[j - 1] = in[j - inc - 1];
        j -= inc;
        if (j <= inc) {
          break;
        }
      }
      in[j - 1] = v;
    }
  } while (inc > 1);
}

static const FIXP_DBL quantStepsSbr[4] = {0x00400000, 0x02800000, 0x03800000,
                                          0x04c00000};
static const FIXP_DBL quantStepsOrig[4] = {0x00000000, 0x00c00000, 0x01c00000,
                                           0x02800000};
static const FIXP_DBL nrgBorders[4] = {0x0c800000, 0x0f000000, 0x11800000,
                                       0x14000000};
static const DETECTOR_PARAMETERS detectorParamsAAC = {
  quantStepsSbr,
  quantStepsOrig,
  nrgBorders,
  4,
  4,
  4,
  {{INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF, INVF_OFF},
   {INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF}},
  {{INVF_LOW_LEVEL, INVF_LOW_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_LOW_LEVEL, INVF_LOW_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF}},
  {-4, -3, -2, -1, 0}};
static const FIXP_DBL hysteresis = 0x00400000;
static const DETECTOR_PARAMETERS detectorParamsAACSpeech = {
  quantStepsSbr,
  quantStepsOrig,
  nrgBorders,
  4,
  4,
  4,
  {{INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF}},
  {{INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_LOW_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF},
   {INVF_HIGH_LEVEL, INVF_HIGH_LEVEL, INVF_MID_LEVEL, INVF_OFF, INVF_OFF}},
  {-4, -3, -2, -1, 0}};
typedef const FIXP_DBL FIR_FILTER[3];
static const FIR_FILTER fir_2 = {0x10000000, 0x30000000, 0x40000000};
static void calculateDetectorValues(FIXP_DBL** quotaMatrixOrig,
                                    SCHAR* indexVector, FIXP_DBL* nrgVector,
                                    DETECTOR_VALUES* detectorValues,
                                    INT startChannel, INT stopChannel,
                                    INT startIndex, INT stopIndex,
                                    INT numberOfStrongest) {
  INT i, temp, j;
  const FIXP_DBL* filter = fir_2;
  FIXP_DBL origQuotaMeanStrongest, sbrQuotaMeanStrongest;
  FIXP_DBL origQuota, sbrQuota;
  FIXP_DBL invIndex, invChannel, invTemp;
  FIXP_DBL quotaVecOrig[64], quotaVecSbr[64];
  FDKmemclear(quotaVecOrig, 64 * sizeof(FIXP_DBL));
  FDKmemclear(quotaVecSbr, 64 * sizeof(FIXP_DBL));
  invIndex = GetInvInt(stopIndex - startIndex);
  invChannel = GetInvInt(stopChannel - startChannel);
  detectorValues->avgNrg = fixed_dbl(0.0f);
  for (j = startIndex; j < stopIndex; j++) {
    for (i = startChannel; i < stopChannel; i++) {
      quotaVecOrig[i] += fMult(quotaMatrixOrig[j][i], invIndex);
      if (indexVector[i] != -1) {
        quotaVecSbr[i] += fMult(quotaMatrixOrig[j][indexVector[i]], invIndex);
      }
    }
    detectorValues->avgNrg += fMult(nrgVector[j], invIndex);
  }
  origQuota = fixed_dbl(0.0f);
  sbrQuota = fixed_dbl(0.0f);
  for (i = startChannel; i < stopChannel; i++) {
    origQuota += fMultDiv2(quotaVecOrig[i], invChannel);
    sbrQuota += fMultDiv2(quotaVecSbr[i], invChannel);
  }
  FDKsbrEnc_Shellsort_fract(quotaVecOrig + startChannel,
                            stopChannel - startChannel);
  FDKsbrEnc_Shellsort_fract(quotaVecSbr + startChannel,
                            stopChannel - startChannel);
  origQuotaMeanStrongest = fixed_dbl(0.0f);
  sbrQuotaMeanStrongest = fixed_dbl(0.0f);
  temp =
    (stopChannel - startChannel < numberOfStrongest ? stopChannel - startChannel
                                                    : numberOfStrongest);
  invTemp = GetInvInt(temp);
  for (i = 0; i < temp; i++) {
    origQuotaMeanStrongest +=
      fMultDiv2(quotaVecOrig[i + stopChannel - temp], invTemp);
    sbrQuotaMeanStrongest +=
      fMultDiv2(quotaVecSbr[i + stopChannel - temp], invTemp);
  }
  detectorValues->origQuotaMax = quotaVecOrig[stopChannel - 1];
  detectorValues->sbrQuotaMax = quotaVecSbr[stopChannel - 1];
  FDKmemmove(detectorValues->origQuotaMean, detectorValues->origQuotaMean + 1,
             2 * sizeof(FIXP_DBL));
  FDKmemmove(detectorValues->sbrQuotaMean, detectorValues->sbrQuotaMean + 1,
             2 * sizeof(FIXP_DBL));
  FDKmemmove(detectorValues->origQuotaMeanStrongest,
             detectorValues->origQuotaMeanStrongest + 1, 2 * sizeof(FIXP_DBL));
  FDKmemmove(detectorValues->sbrQuotaMeanStrongest,
             detectorValues->sbrQuotaMeanStrongest + 1, 2 * sizeof(FIXP_DBL));
  detectorValues->origQuotaMean[2] = origQuota << 1;
  detectorValues->sbrQuotaMean[2] = sbrQuota << 1;
  detectorValues->origQuotaMeanStrongest[2] = origQuotaMeanStrongest << 1;
  detectorValues->sbrQuotaMeanStrongest[2] = sbrQuotaMeanStrongest << 1;
  detectorValues->origQuotaMeanFilt = fixed_dbl(0.0f);
  detectorValues->sbrQuotaMeanFilt = fixed_dbl(0.0f);
  detectorValues->origQuotaMeanStrongestFilt = fixed_dbl(0.0f);
  detectorValues->sbrQuotaMeanStrongestFilt = fixed_dbl(0.0f);
  for (i = 0; i < 2 + 1; i++) {
    detectorValues->origQuotaMeanFilt +=
      fMult(detectorValues->origQuotaMean[i], filter[i]);
    detectorValues->sbrQuotaMeanFilt +=
      fMult(detectorValues->sbrQuotaMean[i], filter[i]);
    detectorValues->origQuotaMeanStrongestFilt +=
      fMult(detectorValues->origQuotaMeanStrongest[i], filter[i]);
    detectorValues->sbrQuotaMeanStrongestFilt +=
      fMult(detectorValues->sbrQuotaMeanStrongest[i], filter[i]);
  }
}

static INT findRegion(FIXP_DBL currVal, const FIXP_DBL* borders,
                      const INT numBorders) {
  INT i;
  if (currVal < borders[0]) {
    return 0;
  }
  for (i = 1; i < numBorders; i++) {
    if (currVal >= borders[i - 1] && currVal < borders[i]) {
      return i;
    }
  }
  if (currVal >= borders[numBorders - 1]) {
    return numBorders;
  }
  return 0;
}

static INVF_MODE decisionAlgorithm(const DETECTOR_PARAMETERS* detectorParams,
                                   DETECTOR_VALUES* detectorValues,
                                   INT transientFlag, INT* prevRegionSbr,
                                   INT* prevRegionOrig) {
  INT invFiltLevel, regionSbr, regionOrig, regionNrg;
  const FIXP_DBL* quantStepsSbr = detectorParams->quantStepsSbr;
  const FIXP_DBL* quantStepsOrig = detectorParams->quantStepsOrig;
  const FIXP_DBL* nrgBorders = detectorParams->nrgBorders;
  const INT numRegionsSbr = detectorParams->numRegionsSbr;
  const INT numRegionsOrig = detectorParams->numRegionsOrig;
  const INT numRegionsNrg = detectorParams->numRegionsNrg;
  FIXP_DBL quantStepsSbrTmp[10];
  FIXP_DBL quantStepsOrigTmp[10];
  FIXP_DBL origQuotaMeanFilt;
  FIXP_DBL sbrQuotaMeanFilt;
  FIXP_DBL nrg;
  origQuotaMeanFilt =
    (fMultDiv2(
      fixed_dbl(2.f * 0.375f),
      (FIXP_DBL)(CalcLdData((detectorValues->origQuotaMeanFilt > (FIXP_DBL)1
                               ? detectorValues->origQuotaMeanFilt
                               : (FIXP_DBL)1)) +
                 fixed_dbl(0.31143075889f))))
    << 0;
  sbrQuotaMeanFilt =
    (fMultDiv2(
      fixed_dbl(2.f * 0.375f),
      (FIXP_DBL)(CalcLdData((detectorValues->sbrQuotaMeanFilt > (FIXP_DBL)1
                               ? detectorValues->sbrQuotaMeanFilt
                               : (FIXP_DBL)1)) +
                 fixed_dbl(0.31143075889f))))
    << 0;
  nrg = (fMultDiv2(fixed_dbl(2.f * 0.375f),
                   (FIXP_DBL)(CalcLdData(detectorValues->avgNrg + (FIXP_DBL)1) +
                              fixed_dbl(0.0625f) + fixed_dbl(0.6875f))))
        << 0;
  FDKmemcpy(quantStepsSbrTmp, quantStepsSbr, numRegionsSbr * sizeof(FIXP_DBL));
  FDKmemcpy(quantStepsOrigTmp, quantStepsOrig,
            numRegionsOrig * sizeof(FIXP_DBL));
  if (*prevRegionSbr < numRegionsSbr) {
    quantStepsSbrTmp[*prevRegionSbr] =
      quantStepsSbr[*prevRegionSbr] + hysteresis;
  }
  if (*prevRegionSbr > 0) {
    quantStepsSbrTmp[*prevRegionSbr - 1] =
      quantStepsSbr[*prevRegionSbr - 1] - hysteresis;
  }
  if (*prevRegionOrig < numRegionsOrig) {
    quantStepsOrigTmp[*prevRegionOrig] =
      quantStepsOrig[*prevRegionOrig] + hysteresis;
  }
  if (*prevRegionOrig > 0) {
    quantStepsOrigTmp[*prevRegionOrig - 1] =
      quantStepsOrig[*prevRegionOrig - 1] - hysteresis;
  }
  regionSbr = findRegion(sbrQuotaMeanFilt, quantStepsSbrTmp, numRegionsSbr);
  regionOrig = findRegion(origQuotaMeanFilt, quantStepsOrigTmp, numRegionsOrig);
  regionNrg = findRegion(nrg, nrgBorders, numRegionsNrg);
  *prevRegionSbr = regionSbr;
  *prevRegionOrig = regionOrig;
  invFiltLevel = (transientFlag == 1)
                   ? detectorParams->regionSpaceTransient[regionSbr][regionOrig]
                   : detectorParams->regionSpace[regionSbr][regionOrig];
  invFiltLevel = (invFiltLevel + detectorParams->EnergyCompFactor[regionNrg] > 0
                    ? invFiltLevel + detectorParams->EnergyCompFactor[regionNrg]
                    : 0);
  return (INVF_MODE)(invFiltLevel);
}

void FDKsbrEnc_qmfInverseFilteringDetector(HANDLE_SBR_INV_FILT_EST hInvFilt,
                                           FIXP_DBL** quotaMatrix,
                                           FIXP_DBL* nrgVector,
                                           SCHAR* indexVector, INT startIndex,
                                           INT stopIndex, INT transientFlag,
                                           INVF_MODE* infVec) {
  INT band;
  for (band = 0; band < hInvFilt->noDetectorBands; band++) {
    INT startChannel = hInvFilt->freqBandTableInvFilt[band];
    INT stopChannel = hInvFilt->freqBandTableInvFilt[band + 1];
    calculateDetectorValues(quotaMatrix, indexVector, nrgVector,
                            &hInvFilt->detectorValues[band], startChannel,
                            stopChannel, startIndex, stopIndex,
                            hInvFilt->numberOfStrongest);
    infVec[band] = decisionAlgorithm(
      hInvFilt->detectorParams, &hInvFilt->detectorValues[band], transientFlag,
      &hInvFilt->prevRegionSbr[band], &hInvFilt->prevRegionOrig[band]);
  }
}

INT FDKsbrEnc_initInvFiltDetector(HANDLE_SBR_INV_FILT_EST hInvFilt,
                                  INT* freqBandTableDetector,
                                  INT numDetectorBands, UINT useSpeechConfig) {
  INT i;
  FDKmemclear(hInvFilt, sizeof(SBR_INV_FILT_EST));
  hInvFilt->detectorParams =
    (useSpeechConfig) ? &detectorParamsAACSpeech : &detectorParamsAAC;
  hInvFilt->noDetectorBandsMax = numDetectorBands;
  for (i = 0; i < hInvFilt->noDetectorBandsMax; i++) {
    FDKmemclear(&hInvFilt->detectorValues[i], sizeof(DETECTOR_VALUES));
    hInvFilt->prevInvfMode[i] = INVF_OFF;
    hInvFilt->prevRegionOrig[i] = 0;
    hInvFilt->prevRegionSbr[i] = 0;
  }
  FDKsbrEnc_resetInvFiltDetector(hInvFilt, freqBandTableDetector,
                                 hInvFilt->noDetectorBandsMax);
  return (0);
}

INT FDKsbrEnc_resetInvFiltDetector(HANDLE_SBR_INV_FILT_EST hInvFilt,
                                   INT* freqBandTableDetector,
                                   INT numDetectorBands) {
  hInvFilt->numberOfStrongest = 1;
  FDKmemcpy(hInvFilt->freqBandTableInvFilt, freqBandTableDetector,
            (numDetectorBands + 1) * sizeof(INT));
  hInvFilt->noDetectorBands = numDetectorBands;
  return (0);
}

static const FIXP_DBL smoothFilter[4] = {0x077f813d, 0x19999995, 0x2bb3b1f5,
                                         0x33333335};
static const FIXP_DBL QuantOffset = (INT)0xfc000000;
static void smoothingOfNoiseLevels(FIXP_DBL* NoiseLevels, INT nEnvelopes,
                                   INT noNoiseBands,
                                   FIXP_DBL prevNoiseLevels[4][10],
                                   const FIXP_DBL* smoothFilter,
                                   INT transientFlag) {
  INT i, band, env;
  FIXP_DBL accu;
  for (env = 0; env < nEnvelopes; env++) {
    if (transientFlag) {
      for (i = 0; i < 4; i++) {
        FDKmemcpy(prevNoiseLevels[i], NoiseLevels + env * noNoiseBands,
                  noNoiseBands * sizeof(FIXP_DBL));
      }
    }
    else {
      for (i = 1; i < 4; i++) {
        FDKmemcpy(prevNoiseLevels[i - 1], prevNoiseLevels[i],
                  noNoiseBands * sizeof(FIXP_DBL));
      }
      FDKmemcpy(prevNoiseLevels[4 - 1], NoiseLevels + env * noNoiseBands,
                noNoiseBands * sizeof(FIXP_DBL));
    }
    for (band = 0; band < noNoiseBands; band++) {
      accu = fixed_dbl(0.0f);
      for (i = 0; i < 4; i++) {
        accu += fMultDiv2(smoothFilter[i], prevNoiseLevels[i][band]);
      }
      NoiseLevels[band + env * noNoiseBands] = accu << 1;
    }
  }
}

static void qmfBasedNoiseFloorDetection(
  FIXP_DBL* noiseLevel, FIXP_DBL** quotaMatrixOrig, SCHAR* indexVector,
  INT startIndex, INT stopIndex, INT startChannel, INT stopChannel,
  FIXP_DBL ana_max_level, FIXP_DBL noiseFloorOffset, INT missingHarmonicFlag,
  FIXP_DBL weightFac, INVF_MODE diffThres, INVF_MODE inverseFilteringLevel) {
  INT scale, l, k;
  FIXP_DBL meanOrig = fixed_dbl(0.0f), meanSbr = fixed_dbl(0.0f), diff;
  FIXP_DBL invIndex = GetInvInt(stopIndex - startIndex);
  FIXP_DBL invChannel = GetInvInt(stopChannel - startChannel);
  FIXP_DBL accu;
  if (missingHarmonicFlag == 1) {
    for (l = startChannel; l < stopChannel; l++) {
      accu = fixed_dbl(0.0f);
      for (k = startIndex; k < stopIndex; k++) {
        accu += fMultDiv2(quotaMatrixOrig[k][l], invIndex);
      }
      meanOrig = fixMax(meanOrig, (accu << 1));
      accu = fixed_dbl(0.0f);
      for (k = startIndex; k < stopIndex; k++) {
        accu += fMultDiv2(quotaMatrixOrig[k][indexVector[l]], invIndex);
      }
      meanSbr = fixMax(meanSbr, (accu << 1));
    }
  }
  else {
    for (l = startChannel; l < stopChannel; l++) {
      accu = fixed_dbl(0.0f);
      for (k = startIndex; k < stopIndex; k++) {
        accu += fMultDiv2(quotaMatrixOrig[k][l], invIndex);
      }
      meanOrig += fMult((accu << 1), invChannel);
      accu = fixed_dbl(0.0f);
      for (k = startIndex; k < stopIndex; k++) {
        accu += fMultDiv2(quotaMatrixOrig[k][indexVector[l]], invIndex);
      }
      meanSbr += fMult((accu << 1), invChannel);
    }
  }
  if (meanOrig <= fixed_dbl(0.000976562f * (1e-6f)) &&
      meanSbr <= fixed_dbl(0.000976562f * (1e-6f))) {
    meanOrig = fixed_dbl(101.5936673f * (1e-6f));
    meanSbr = fixed_dbl(101.5936673f * (1e-6f));
  }
  meanOrig = fixMax(meanOrig, fixed_dbl((1e-6f)));
  meanSbr = fixMax(meanSbr, fixed_dbl((1e-6f)));
  if (missingHarmonicFlag == 1 || inverseFilteringLevel == INVF_MID_LEVEL ||
      inverseFilteringLevel == INVF_LOW_LEVEL ||
      inverseFilteringLevel == INVF_OFF || inverseFilteringLevel <= diffThres) {
    diff = fixed_dbl((1e-6f));
  }
  else {
    accu = fDivNorm(meanSbr, meanOrig, &scale);
    diff = fixMax(fixed_dbl((1e-6f)),
                  fMult(fixed_dbl(0.524288f), fMult(weightFac, accu)) >>
                    (19 - scale));
  }
  accu = fDivNorm(diff, meanOrig, &scale);
  scale -= 2;
  if ((scale > 0) && (accu > ((FIXP_DBL)2147483647) >> scale)) {
    *noiseLevel = (FIXP_DBL)2147483647;
  }
  else {
    *noiseLevel = scaleValue(accu, scale);
  }
  if (!missingHarmonicFlag) {
    *noiseLevel =
      fixMin(fMult(*noiseLevel, noiseFloorOffset), (FIXP_DBL)2147483647 >> (4))
      << (4);
  }
  *noiseLevel = fixMin(*noiseLevel, ana_max_level);
}

void FDKsbrEnc_sbrNoiseFloorEstimateQmf(
  HANDLE_SBR_NOISE_FLOOR_ESTIMATE h_sbrNoiseFloorEstimate,
  const SBR_FRAME_INFO* frame_info, FIXP_DBL* noiseLevels,
  FIXP_DBL** quotaMatrixOrig, SCHAR* indexVector, INT missingHarmonicsFlag,
  INT startIndex, UINT numberOfEstimatesPerFrame, int transientFrame,
  INVF_MODE* pInvFiltLevels, UINT sbrSyntaxFlags) {
  INT nNoiseEnvelopes, startPos[2], stopPos[2], env, band;
  INT noNoiseBands = h_sbrNoiseFloorEstimate->noNoiseBands;
  INT* freqBandTable = h_sbrNoiseFloorEstimate->freqBandTableQmf;
  nNoiseEnvelopes = frame_info->nNoiseEnvelopes;
  if (sbrSyntaxFlags & 1) {
    nNoiseEnvelopes = 1;
    startPos[0] = startIndex;
    stopPos[0] =
      startIndex +
      (numberOfEstimatesPerFrame < 2 ? numberOfEstimatesPerFrame : 2);
  }
  else if (nNoiseEnvelopes == 1) {
    startPos[0] = startIndex;
    stopPos[0] = startIndex + 2;
  }
  else {
    startPos[0] = startIndex;
    stopPos[0] = startIndex + 1;
    startPos[1] = startIndex + 1;
    stopPos[1] = startIndex + 2;
  }
  for (env = 0; env < nNoiseEnvelopes; env++) {
    for (band = 0; band < noNoiseBands; band++) {
      qmfBasedNoiseFloorDetection(
        &noiseLevels[band + env * noNoiseBands], quotaMatrixOrig, indexVector,
        startPos[env], stopPos[env], freqBandTable[band],
        freqBandTable[band + 1], h_sbrNoiseFloorEstimate->ana_max_level,
        h_sbrNoiseFloorEstimate->noiseFloorOffset[band], missingHarmonicsFlag,
        h_sbrNoiseFloorEstimate->weightFac, h_sbrNoiseFloorEstimate->diffThres,
        pInvFiltLevels[band]);
    }
  }
  smoothingOfNoiseLevels(noiseLevels, nNoiseEnvelopes,
                         h_sbrNoiseFloorEstimate->noNoiseBands,
                         h_sbrNoiseFloorEstimate->prevNoiseLevels,
                         h_sbrNoiseFloorEstimate->smoothFilter, transientFrame);
  for (env = 0; env < nNoiseEnvelopes; env++) {
    for (band = 0; band < noNoiseBands; band++) {
      noiseLevels[band + env * noNoiseBands] =
        (FIXP_DBL)fixed_dbl(0.09375f) -
        (FIXP_DBL)CalcLdData(noiseLevels[band + env * noNoiseBands] +
                             (FIXP_DBL)1) +
        QuantOffset;
    }
  }
}

static INT downSampleLoRes(INT* v_result, INT num_result,
                           const UCHAR* freqBandTableRef, INT num_Ref) {
  INT step;
  INT i, j;
  INT org_length, result_length;
  INT v_index[48 / 2];
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
  if (i != num_result) {
    return (1);
  }
  for (j = 0; j <= i; j++) {
    v_result[j] = freqBandTableRef[v_index[j]];
  }
  return (0);
}

INT FDKsbrEnc_InitSbrNoiseFloorEstimate(
  HANDLE_SBR_NOISE_FLOOR_ESTIMATE h_sbrNoiseFloorEstimate, INT ana_max_level,
  const UCHAR* freqBandTable, INT nSfb, INT noiseBands, INT noiseFloorOffset,
  INT timeSlots, UINT useSpeechConfig) {
  INT i, qexp, qtmp;
  FIXP_DBL tmp, exp;
  FDKmemclear(h_sbrNoiseFloorEstimate, sizeof(SBR_NOISE_FLOOR_ESTIMATE));
  h_sbrNoiseFloorEstimate->smoothFilter = smoothFilter;
  if (useSpeechConfig) {
    h_sbrNoiseFloorEstimate->weightFac = (FIXP_DBL)2147483647;
    h_sbrNoiseFloorEstimate->diffThres = INVF_LOW_LEVEL;
  }
  else {
    h_sbrNoiseFloorEstimate->weightFac = fixed_dbl(0.25f);
    h_sbrNoiseFloorEstimate->diffThres = INVF_MID_LEVEL;
  }
  h_sbrNoiseFloorEstimate->timeSlots = timeSlots;
  h_sbrNoiseFloorEstimate->noiseBands = noiseBands;
  switch (ana_max_level) {
    case 6:
      h_sbrNoiseFloorEstimate->ana_max_level = (FIXP_DBL)2147483647;
      break;
    case 3:
      h_sbrNoiseFloorEstimate->ana_max_level = fixed_dbl(0.5);
      break;
    case -3:
      h_sbrNoiseFloorEstimate->ana_max_level = fixed_dbl(0.125);
      break;
    default:
      h_sbrNoiseFloorEstimate->ana_max_level = (FIXP_DBL)2147483647;
      break;
  }
  if (FDKsbrEnc_resetSbrNoiseFloorEstimate(h_sbrNoiseFloorEstimate,
                                           freqBandTable, nSfb)) {
    return (1);
  }
  if (noiseFloorOffset == 0) {
    tmp = ((FIXP_DBL)2147483647) >> (4);
  }
  else {
    exp = fDivNorm((FIXP_DBL)noiseFloorOffset, 3, &qexp);
    tmp = fPow(2, 32 - 1, exp, qexp, &qtmp);
    tmp = scaleValue(tmp, qtmp - (4));
  }
  for (i = 0; i < h_sbrNoiseFloorEstimate->noNoiseBands; i++) {
    h_sbrNoiseFloorEstimate->noiseFloorOffset[i] = tmp;
  }
  return (0);
}

INT FDKsbrEnc_resetSbrNoiseFloorEstimate(
  HANDLE_SBR_NOISE_FLOOR_ESTIMATE h_sbrNoiseFloorEstimate,
  const UCHAR* freqBandTable, INT nSfb) {
  INT k2, kx;
  k2 = freqBandTable[nSfb];
  kx = freqBandTable[0];
  if (h_sbrNoiseFloorEstimate->noiseBands == 0) {
    h_sbrNoiseFloorEstimate->noNoiseBands = 1;
  }
  else {
    FIXP_DBL tmp, ratio, lg2;
    INT ratio_e, qlg2, nNoiseBands;
    ratio = fDivNorm(k2, kx, &ratio_e);
    lg2 = fLog2(ratio, ratio_e, &qlg2);
    tmp = fMult((FIXP_DBL)(h_sbrNoiseFloorEstimate->noiseBands << 24), lg2);
    tmp = scaleValue(tmp, qlg2 - 23);
    nNoiseBands = (INT)((tmp + (FIXP_DBL)1) >> 1);
    if (nNoiseBands > 5) {
      nNoiseBands = 5;
    }
    if (nNoiseBands == 0) {
      nNoiseBands = 1;
    }
    h_sbrNoiseFloorEstimate->noNoiseBands = nNoiseBands;
  }
  return (downSampleLoRes(h_sbrNoiseFloorEstimate->freqBandTableQmf,
                          h_sbrNoiseFloorEstimate->noNoiseBands, freqBandTable,
                          nSfb));
}

}
