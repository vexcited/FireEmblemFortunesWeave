/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/intensity.hpp"
#include "nn/codec/quantization.hpp"
#include "nn/codec/scalefactors.hpp"

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

static int32_t fixp_abs(int32_t value) {
  return value < 0 ? static_cast<int32_t>(0U - static_cast<uint32_t>(value))
                   : value;
}

extern const uint8_t FDKaacEnc_huff_ltabscf[121];
static int FDKaacEnc_bitCountScalefactorDelta(int delta) {
  return FDKaacEnc_huff_ltabscf[delta + 60];
}

static const INT MAX_SCF_DELTA = 60;
static const FIXP_DBL PE_C1 = fixed_dbl(3.0f / (float)(1 << 7));
static const FIXP_DBL PE_C2 = fixed_dbl(1.3219281f / (float)(1 << 7));
static const FIXP_DBL PE_C3 = fixed_dbl(0.5593573f);
static void
FDKaacEnc_FDKaacEnc_CalcFormFactorChannel(FIXP_DBL* sfbFormFactorLdData,
                                          PSY_OUT_CHANNEL* psyOutChan) {
  INT j, sfb, sfbGrp;
  FIXP_DBL formFactor;
  int tmp0 = psyOutChan->sfbCnt;
  int tmp1 = psyOutChan->maxSfbPerGroup;
  int step = psyOutChan->sfbPerGroup;
  for (sfbGrp = 0; sfbGrp < tmp0; sfbGrp += step) {
    for (sfb = 0; sfb < tmp1; sfb++) {
      formFactor = fixed_dbl(0.0f);
      for (j = psyOutChan->sfbOffsets[sfbGrp + sfb];
           j < psyOutChan->sfbOffsets[sfbGrp + sfb + 1]; j++) {
        formFactor += sqrtFixp(fixp_abs(psyOutChan->mdctSpectrum[j])) >> 6;
      }
      sfbFormFactorLdData[sfbGrp + sfb] = CalcLdData(formFactor);
    }
    for (; sfb < psyOutChan->sfbPerGroup; sfb++) {
      sfbFormFactorLdData[sfbGrp + sfb] = fixed_dbl(-1.0f);
    }
  }
}

void FDKaacEnc_CalcFormFactor(QC_OUT_CHANNEL* qcOutChannel[(2)],
                              PSY_OUT_CHANNEL* psyOutChannel[(2)],
                              const INT nChannels) {
  INT j;
  for (j = 0; j < nChannels; j++) {
    FDKaacEnc_FDKaacEnc_CalcFormFactorChannel(
      qcOutChannel[j]->sfbFormFactorLdData, psyOutChannel[j]);
  }
}

static void
FDKaacEnc_calcSfbRelevantLines(const FIXP_DBL* const sfbFormFactorLdData,
                               const FIXP_DBL* const sfbEnergyLdData,
                               const FIXP_DBL* const sfbThresholdLdData,
                               const INT* const sfbOffsets, const INT sfbCnt,
                               const INT sfbPerGroup, const INT maxSfbPerGroup,
                               FIXP_DBL* sfbNRelevantLines) {
  INT sfbOffs, sfb;
  FIXP_DBL sfbWidthLdData;
  FIXP_DBL asPeFacLdData = fixed_dbl(0.109375);
  FIXP_DBL accu;
  FDKmemclear(sfbNRelevantLines, sfbCnt * sizeof(FIXP_DBL));
  for (sfbOffs = 0; sfbOffs < sfbCnt; sfbOffs += sfbPerGroup) {
    for (sfb = 0; sfb < maxSfbPerGroup; sfb++) {
      if ((FIXP_DBL)sfbEnergyLdData[sfbOffs + sfb] >
          (FIXP_DBL)sfbThresholdLdData[sfbOffs + sfb]) {
        INT sfbWidth =
          sfbOffsets[sfbOffs + sfb + 1] - sfbOffsets[sfbOffs + sfb];
        sfbWidthLdData = (FIXP_DBL)(sfbWidth << (32 - 1 - 7));
        sfbWidthLdData = CalcLdData(sfbWidthLdData);
        accu = sfbEnergyLdData[sfbOffs + sfb] - sfbWidthLdData - asPeFacLdData;
        accu = sfbFormFactorLdData[sfbOffs + sfb] - (accu >> 2);
        sfbNRelevantLines[sfbOffs + sfb] = CalcInvLdData(accu) >> 1;
      }
    }
  }
}

static FIXP_DBL FDKaacEnc_countSingleScfBits(INT scf, INT scfLeft,
                                             INT scfRight) {
  FIXP_DBL scfBitsFract;
  scfBitsFract = (FIXP_DBL)(FDKaacEnc_bitCountScalefactorDelta(scfLeft - scf) +
                            FDKaacEnc_bitCountScalefactorDelta(scf - scfRight));
  scfBitsFract = scfBitsFract << (32 - 1 - (2 * 7));
  return scfBitsFract;
}

static FIXP_DBL FDKaacEnc_calcSingleSpecPe(INT scf, FIXP_DBL sfbConstPePart,
                                           FIXP_DBL nLines) {
  FIXP_DBL specPe = fixed_dbl(0.0f);
  FIXP_DBL ldRatio;
  FIXP_DBL scfFract;
  scfFract = (FIXP_DBL)(scf << (32 - 1 - 7));
  ldRatio = sfbConstPePart - fMult(fixed_dbl(0.375f), scfFract);
  if (ldRatio >= PE_C1) {
    specPe = fMult(fixed_dbl(0.7f), fMult(nLines, ldRatio));
  }
  else {
    specPe =
      fMult(fixed_dbl(0.7f), fMult(nLines, (PE_C2 + fMult(PE_C3, ldRatio))));
  }
  return specPe;
}

static FIXP_DBL FDKaacEnc_countScfBitsDiff(INT* scfOld, INT* scfNew, INT sfbCnt,
                                           INT startSfb, INT stopSfb) {
  FIXP_DBL scfBitsFract;
  INT scfBitsDiff = 0;
  INT sfb = 0, sfbLast;
  INT sfbPrev, sfbNext;
  sfbLast = startSfb;
  while ((sfbLast < stopSfb) && (scfOld[sfbLast] == (-2147483647 - 1))) {
    sfbLast++;
  }
  sfbPrev = startSfb - 1;
  while ((sfbPrev >= 0) && (scfOld[sfbPrev] == (-2147483647 - 1))) {
    sfbPrev--;
  }
  if (sfbPrev >= 0) {
    scfBitsDiff +=
      FDKaacEnc_bitCountScalefactorDelta(scfNew[sfbPrev] - scfNew[sfbLast]) -
      FDKaacEnc_bitCountScalefactorDelta(scfOld[sfbPrev] - scfOld[sfbLast]);
  }
  for (sfb = sfbLast + 1; sfb < stopSfb; sfb++) {
    if (scfOld[sfb] != (-2147483647 - 1)) {
      scfBitsDiff +=
        FDKaacEnc_bitCountScalefactorDelta(scfNew[sfbLast] - scfNew[sfb]) -
        FDKaacEnc_bitCountScalefactorDelta(scfOld[sfbLast] - scfOld[sfb]);
      sfbLast = sfb;
    }
  }
  sfbNext = stopSfb;
  while ((sfbNext < sfbCnt) && (scfOld[sfbNext] == (-2147483647 - 1))) {
    sfbNext++;
  }
  if (sfbNext < sfbCnt) {
    scfBitsDiff +=
      FDKaacEnc_bitCountScalefactorDelta(scfNew[sfbLast] - scfNew[sfbNext]) -
      FDKaacEnc_bitCountScalefactorDelta(scfOld[sfbLast] - scfOld[sfbNext]);
  }
  scfBitsFract = (FIXP_DBL)(scfBitsDiff << (32 - 1 - (2 * 7)));
  return scfBitsFract;
}

static FIXP_DBL FDKaacEnc_calcSpecPeDiff(PSY_OUT_CHANNEL* psyOutChan,
                                         QC_OUT_CHANNEL*, INT* scfOld,
                                         INT* scfNew, FIXP_DBL* sfbConstPePart,
                                         FIXP_DBL* sfbFormFactorLdData,
                                         FIXP_DBL* sfbNRelevantLines,
                                         INT startSfb, INT stopSfb) {
  FIXP_DBL specPeDiff = fixed_dbl(0.0f);
  FIXP_DBL scfFract = fixed_dbl(0.0f);
  INT sfb;
  for (sfb = startSfb; sfb < stopSfb; sfb++) {
    if (scfOld[sfb] != (-2147483647 - 1)) {
      FIXP_DBL ldRatioOld, ldRatioNew, pOld, pNew;
      if (sfbConstPePart[sfb] == (FIXP_DBL)(-2147483647 - 1)) {
        sfbConstPePart[sfb] =
          ((psyOutChan->sfbEnergyLdData[sfb] - sfbFormFactorLdData[sfb] -
            fixed_dbl(0.09375f)) >>
           1) +
          fixed_dbl(0.02152255861f);
      }
      scfFract = (FIXP_DBL)(scfOld[sfb] << (32 - 1 - 7));
      ldRatioOld = sfbConstPePart[sfb] - fMult(fixed_dbl(0.375f), scfFract);
      scfFract = (FIXP_DBL)(scfNew[sfb] << (32 - 1 - 7));
      ldRatioNew = sfbConstPePart[sfb] - fMult(fixed_dbl(0.375f), scfFract);
      if (ldRatioOld >= PE_C1) {
        pOld = ldRatioOld;
      }
      else {
        pOld = PE_C2 + fMult(PE_C3, ldRatioOld);
      }
      if (ldRatioNew >= PE_C1) {
        pNew = ldRatioNew;
      }
      else {
        pNew = PE_C2 + fMult(PE_C3, ldRatioNew);
      }
      specPeDiff +=
        fMult(fixed_dbl(0.7f), fMult(sfbNRelevantLines[sfb], (pNew - pOld)));
    }
  }
  return specPeDiff;
}

static INT FDKaacEnc_improveScf(FIXP_DBL* spec, SHORT* quantSpec,
                                SHORT* quantSpecTmp, INT sfbWidth,
                                FIXP_DBL threshLdData, INT scf, INT minScf,
                                FIXP_DBL* distLdData, INT* minScfCalculated,
                                INT dZoneQuantEnable) {
  FIXP_DBL sfbDistLdData;
  INT scfBest = scf;
  INT k;
  FIXP_DBL distFactorLdData = fixed_dbl(-0.0050301265);
  sfbDistLdData =
    FDKaacEnc_calcSfbDist(spec, quantSpec, sfbWidth, scf, dZoneQuantEnable);
  *minScfCalculated = scf;
  if (sfbDistLdData > (threshLdData - distFactorLdData)) {
    INT scfEstimated = scf;
    FIXP_DBL sfbDistBestLdData = sfbDistLdData;
    INT cnt;
    cnt = 0;
    while ((sfbDistLdData > (threshLdData - distFactorLdData)) && (cnt++ < 3)) {
      scf++;
      sfbDistLdData = FDKaacEnc_calcSfbDist(spec, quantSpecTmp, sfbWidth, scf,
                                            dZoneQuantEnable);
      if (sfbDistLdData < sfbDistBestLdData) {
        scfBest = scf;
        sfbDistBestLdData = sfbDistLdData;
        for (k = 0; k < sfbWidth; k++) {
          quantSpec[k] = quantSpecTmp[k];
        }
      }
    }
    cnt = 0;
    scf = scfEstimated;
    sfbDistLdData = sfbDistBestLdData;
    while ((sfbDistLdData > (threshLdData - distFactorLdData)) && (cnt++ < 1) &&
           (scf > minScf)) {
      scf--;
      sfbDistLdData = FDKaacEnc_calcSfbDist(spec, quantSpecTmp, sfbWidth, scf,
                                            dZoneQuantEnable);
      if (sfbDistLdData < sfbDistBestLdData) {
        scfBest = scf;
        sfbDistBestLdData = sfbDistLdData;
        for (k = 0; k < sfbWidth; k++) {
          quantSpec[k] = quantSpecTmp[k];
        }
      }
      *minScfCalculated = scf;
    }
    *distLdData = sfbDistBestLdData;
  }
  else {
    FIXP_DBL sfbDistBestLdData = sfbDistLdData;
    FIXP_DBL sfbDistAllowedLdData =
      fixMin(sfbDistLdData - distFactorLdData, threshLdData);
    int cnt;
    for (cnt = 0; cnt < 3; cnt++) {
      scf++;
      sfbDistLdData = FDKaacEnc_calcSfbDist(spec, quantSpecTmp, sfbWidth, scf,
                                            dZoneQuantEnable);
      if (sfbDistLdData < sfbDistAllowedLdData) {
        *minScfCalculated = scfBest + 1;
        scfBest = scf;
        sfbDistBestLdData = sfbDistLdData;
        for (k = 0; k < sfbWidth; k++) {
          quantSpec[k] = quantSpecTmp[k];
        }
      }
    }
    *distLdData = sfbDistBestLdData;
  }
  return scfBest;
}

static void FDKaacEnc_assimilateSingleScf(
  PSY_OUT_CHANNEL* psyOutChan, QC_OUT_CHANNEL* qcOutChannel, SHORT* quantSpec,
  SHORT* quantSpecTmp, INT dZoneQuantEnable, INT* scf, INT* minScf,
  FIXP_DBL* sfbDist, FIXP_DBL* sfbConstPePart, FIXP_DBL* sfbFormFactorLdData,
  FIXP_DBL* sfbNRelevantLines, INT* minScfCalculated, INT restartOnSuccess) {
  INT sfbLast, sfbAct, sfbNext;
  INT scfAct, *scfLast, *scfNext, scfMin, scfMax;
  INT sfbWidth, sfbOffs;
  FIXP_DBL enLdData;
  FIXP_DBL sfbPeOld, sfbPeNew;
  FIXP_DBL sfbDistNew;
  INT i, k;
  INT success = 0;
  FIXP_DBL deltaPe = fixed_dbl(0.0f);
  FIXP_DBL deltaPeNew, deltaPeTmp;
  INT prevScfLast[60], prevScfNext[60];
  FIXP_DBL deltaPeLast[60];
  INT updateMinScfCalculated;
  for (i = 0; i < psyOutChan->sfbCnt; i++) {
    prevScfLast[i] = 2147483647;
    prevScfNext[i] = 2147483647;
    deltaPeLast[i] = (FIXP_DBL)2147483647;
  }
  sfbLast = -1;
  sfbAct = -1;
  sfbNext = -1;
  scfLast = 0;
  scfNext = 0;
  scfMin = 2147483647;
  scfMax = 2147483647;
  do {
    sfbNext++;
    while ((sfbNext < psyOutChan->sfbCnt) &&
           (scf[sfbNext] == (-2147483647 - 1))) {
      sfbNext++;
    }
    if ((sfbLast >= 0) && (sfbAct >= 0) && (sfbNext < psyOutChan->sfbCnt)) {
      scfAct = scf[sfbAct];
      scfLast = scf + sfbLast;
      scfNext = scf + sfbNext;
      scfMin = fixMin(*scfLast, *scfNext);
      scfMax = fixMax(*scfLast, *scfNext);
    }
    else if ((sfbLast == -1) && (sfbAct >= 0) &&
             (sfbNext < psyOutChan->sfbCnt)) {
      scfAct = scf[sfbAct];
      scfLast = &scfAct;
      scfNext = scf + sfbNext;
      scfMin = *scfNext;
      scfMax = *scfNext;
    }
    else if ((sfbLast >= 0) && (sfbAct >= 0) &&
             (sfbNext == psyOutChan->sfbCnt)) {
      scfAct = scf[sfbAct];
      scfLast = scf + sfbLast;
      scfNext = &scfAct;
      scfMin = *scfLast;
      scfMax = *scfLast;
    }
    if (sfbAct >= 0) {
      scfMin = fixMax(scfMin, minScf[sfbAct]);
    }
    if ((sfbAct >= 0) && (sfbLast >= 0 || sfbNext < psyOutChan->sfbCnt) &&
        (scfAct > scfMin) && (scfAct <= scfMin + MAX_SCF_DELTA) &&
        (scfAct >= scfMax - MAX_SCF_DELTA) &&
        (*scfLast != prevScfLast[sfbAct] || *scfNext != prevScfNext[sfbAct] ||
         deltaPe < deltaPeLast[sfbAct])) {
      success = 0;
      sfbWidth =
        psyOutChan->sfbOffsets[sfbAct + 1] - psyOutChan->sfbOffsets[sfbAct];
      sfbOffs = psyOutChan->sfbOffsets[sfbAct];
      enLdData = qcOutChannel->sfbEnergyLdData[sfbAct];
      if (sfbConstPePart[sfbAct] == (FIXP_DBL)(-2147483647 - 1)) {
        sfbConstPePart[sfbAct] =
          ((enLdData - sfbFormFactorLdData[sfbAct] - fixed_dbl(0.09375f)) >>
           1) +
          fixed_dbl(0.02152255861f);
      }
      sfbPeOld = FDKaacEnc_calcSingleSpecPe(scfAct, sfbConstPePart[sfbAct],
                                            sfbNRelevantLines[sfbAct]) +
                 FDKaacEnc_countSingleScfBits(scfAct, *scfLast, *scfNext);
      deltaPeNew = deltaPe;
      updateMinScfCalculated = 1;
      do {
        scfAct--;
        if (scfAct < minScfCalculated[sfbAct] &&
            scfAct >= scfMax - MAX_SCF_DELTA) {
          sfbPeNew = FDKaacEnc_calcSingleSpecPe(scfAct, sfbConstPePart[sfbAct],
                                                sfbNRelevantLines[sfbAct]) +
                     FDKaacEnc_countSingleScfBits(scfAct, *scfLast, *scfNext);
          deltaPeTmp = deltaPe + sfbPeNew - sfbPeOld;
          if (deltaPeTmp < fixed_dbl(0.0006103515625f)) {
            sfbDistNew = FDKaacEnc_calcSfbDist(
              qcOutChannel->mdctSpectrum + sfbOffs, quantSpecTmp + sfbOffs,
              sfbWidth, scfAct, dZoneQuantEnable);
            if (sfbDistNew < sfbDist[sfbAct]) {
              scf[sfbAct] = scfAct;
              sfbDist[sfbAct] = sfbDistNew;
              for (k = 0; k < sfbWidth; k++) {
                quantSpec[sfbOffs + k] = quantSpecTmp[sfbOffs + k];
              }
              deltaPeNew = deltaPeTmp;
              success = 1;
            }
            if (updateMinScfCalculated) {
              minScfCalculated[sfbAct] = scfAct;
            }
          }
          else {
            updateMinScfCalculated = 0;
          }
        }
      } while (scfAct > scfMin);
      deltaPe = deltaPeNew;
      prevScfLast[sfbAct] = *scfLast;
      prevScfNext[sfbAct] = *scfNext;
      deltaPeLast[sfbAct] = deltaPe;
    }
    if (success && restartOnSuccess) {
      sfbLast = -1;
      sfbAct = -1;
      sfbNext = -1;
      scfLast = 0;
      scfNext = 0;
      scfMin = 2147483647;
      scfMax = 2147483647;
      success = 0;
    }
    else {
      sfbLast = sfbAct;
      sfbAct = sfbNext;
    }
  } while (sfbNext < psyOutChan->sfbCnt);
}

static void FDKaacEnc_assimilateMultipleScf(
  PSY_OUT_CHANNEL* psyOutChan, QC_OUT_CHANNEL* qcOutChannel, SHORT* quantSpec,
  SHORT* quantSpecTmp, INT dZoneQuantEnable, INT* scf, INT* minScf,
  FIXP_DBL* sfbDist, FIXP_DBL* sfbConstPePart, FIXP_DBL* sfbFormFactorLdData,
  FIXP_DBL* sfbNRelevantLines) {
  INT sfb, startSfb, stopSfb;
  INT scfTmp[60], scfMin, scfMax, scfAct;
  INT possibleRegionFound;
  INT sfbWidth, sfbOffs, i, k;
  FIXP_DBL sfbDistNew[60], distOldSum, distNewSum;
  INT deltaScfBits;
  FIXP_DBL deltaSpecPe;
  FIXP_DBL deltaPe = fixed_dbl(0.0f);
  FIXP_DBL deltaPeNew;
  INT sfbCnt = psyOutChan->sfbCnt;
  scfMin = 2147483647;
  scfMax = (-2147483647 - 1);
  for (sfb = 0; sfb < sfbCnt; sfb++) {
    if (scf[sfb] != (-2147483647 - 1)) {
      scfMin = fixMin(scfMin, scf[sfb]);
      scfMax = fixMax(scfMax, scf[sfb]);
    }
  }
  if (scfMax != (-2147483647 - 1) && scfMax <= scfMin + MAX_SCF_DELTA) {
    scfAct = scfMax;
    do {
      scfAct--;
      for (i = 0; i < 60; i++) {
        scfTmp[i] = scf[i];
      }
      stopSfb = 0;
      do {
        sfb = stopSfb;
        while (sfb < sfbCnt &&
               (scf[sfb] == (-2147483647 - 1) || scf[sfb] <= scfAct)) {
          sfb++;
        }
        startSfb = sfb;
        sfb++;
        while (sfb < sfbCnt &&
               (scf[sfb] == (-2147483647 - 1) || scf[sfb] > scfAct)) {
          sfb++;
        }
        stopSfb = sfb;
        possibleRegionFound = 0;
        if (startSfb < sfbCnt) {
          possibleRegionFound = 1;
          for (sfb = startSfb; sfb < stopSfb; sfb++) {
            if (scf[sfb] != (-2147483647 - 1)) {
              if (scfAct < minScf[sfb]) {
                possibleRegionFound = 0;
                break;
              }
            }
          }
        }
        if (possibleRegionFound) {
          for (sfb = startSfb; sfb < stopSfb; sfb++) {
            if (scfTmp[sfb] != (-2147483647 - 1)) {
              scfTmp[sfb] = scfAct;
            }
          }
          deltaScfBits =
            FDKaacEnc_countScfBitsDiff(scf, scfTmp, sfbCnt, startSfb, stopSfb);
          deltaSpecPe = FDKaacEnc_calcSpecPeDiff(
            psyOutChan, qcOutChannel, scf, scfTmp, sfbConstPePart,
            sfbFormFactorLdData, sfbNRelevantLines, startSfb, stopSfb);
          deltaPeNew = deltaPe + (FIXP_DBL)deltaScfBits + deltaSpecPe;
          if (deltaPeNew < fixed_dbl(0.0006103515625f)) {
            distOldSum = distNewSum = fixed_dbl(0.0f);
            for (sfb = startSfb; sfb < stopSfb; sfb++) {
              if (scfTmp[sfb] != (-2147483647 - 1)) {
                distOldSum += CalcInvLdData(sfbDist[sfb]) >> 3;
                sfbWidth =
                  psyOutChan->sfbOffsets[sfb + 1] - psyOutChan->sfbOffsets[sfb];
                sfbOffs = psyOutChan->sfbOffsets[sfb];
                sfbDistNew[sfb] = FDKaacEnc_calcSfbDist(
                  qcOutChannel->mdctSpectrum + sfbOffs, quantSpecTmp + sfbOffs,
                  sfbWidth, scfAct, dZoneQuantEnable);
                if (sfbDistNew[sfb] > qcOutChannel->sfbThresholdLdData[sfb]) {
                  distNewSum = distOldSum << 1;
                  break;
                }
                distNewSum += CalcInvLdData(sfbDistNew[sfb]) >> 3;
              }
            }
            if (distNewSum < distOldSum) {
              deltaPe = deltaPeNew;
              for (sfb = startSfb; sfb < stopSfb; sfb++) {
                if (scf[sfb] != (-2147483647 - 1)) {
                  sfbWidth = psyOutChan->sfbOffsets[sfb + 1] -
                             psyOutChan->sfbOffsets[sfb];
                  sfbOffs = psyOutChan->sfbOffsets[sfb];
                  scf[sfb] = scfAct;
                  sfbDist[sfb] = sfbDistNew[sfb];
                  for (k = 0; k < sfbWidth; k++) {
                    quantSpec[sfbOffs + k] = quantSpecTmp[sfbOffs + k];
                  }
                }
              }
            }
          }
        }
      } while (stopSfb <= sfbCnt);
    } while (scfAct > scfMin);
  }
}

static void FDKaacEnc_FDKaacEnc_assimilateMultipleScf2(
  PSY_OUT_CHANNEL* psyOutChan, QC_OUT_CHANNEL* qcOutChannel, SHORT* quantSpec,
  SHORT* quantSpecTmp, INT dZoneQuantEnable, INT* scf, INT* minScf,
  FIXP_DBL* sfbDist, FIXP_DBL* sfbConstPePart, FIXP_DBL* sfbFormFactorLdData,
  FIXP_DBL* sfbNRelevantLines) {
  INT sfb, startSfb, stopSfb;
  INT scfTmp[60], scfAct, scfNew;
  INT scfPrev, scfNext, scfPrevNextMin, scfPrevNextMax, scfLo, scfHi;
  INT scfMin, scfMax;
  INT* sfbOffs = psyOutChan->sfbOffsets;
  FIXP_DBL sfbDistNew[60], sfbDistMax[60];
  FIXP_DBL distOldSum, distNewSum;
  INT deltaScfBits;
  FIXP_DBL deltaSpecPe;
  FIXP_DBL deltaPe = fixed_dbl(0.0f);
  FIXP_DBL deltaPeNew = fixed_dbl(0.0f);
  INT sfbCnt = psyOutChan->sfbCnt;
  INT bSuccess, bCheckScf;
  INT i, k;
  scfMin = 2147483647;
  scfMax = (-2147483647 - 1);
  for (sfb = 0; sfb < sfbCnt; sfb++) {
    if (scf[sfb] != (-2147483647 - 1)) {
      scfMin = fixMin(scfMin, scf[sfb]);
      scfMax = fixMax(scfMax, scf[sfb]);
    }
  }
  stopSfb = 0;
  scfAct = (-2147483647 - 1);
  do {
    scfPrev = scfAct;
    sfb = stopSfb;
    while (sfb < sfbCnt && (scf[sfb] == (-2147483647 - 1))) {
      sfb++;
    }
    startSfb = sfb;
    scfAct = scf[startSfb];
    sfb++;
    while (sfb < sfbCnt &&
           ((scf[sfb] == (-2147483647 - 1)) || (scf[sfb] == scf[startSfb]))) {
      sfb++;
    }
    stopSfb = sfb;
    if (stopSfb < sfbCnt) {
      scfNext = scf[stopSfb];
    }
    else {
      scfNext = scfAct;
    }
    if (scfPrev == (-2147483647 - 1)) {
      scfPrev = scfAct;
    }
    scfPrevNextMax = fixMax(scfPrev, scfNext);
    scfPrevNextMin = fixMin(scfPrev, scfNext);
    scfHi = fixMax(scfPrevNextMax, scfAct);
    if (scfPrevNextMax >= scfAct) {
      scfLo = fixMin(scfAct, scfPrevNextMin);
    }
    else {
      scfLo = scfPrevNextMax;
    }
    if (startSfb < sfbCnt && scfHi - scfLo <= MAX_SCF_DELTA) {
      if (scfHi > scf[startSfb]) {
        for (sfb = startSfb; sfb < stopSfb; sfb++) {
          if (scf[sfb] != (-2147483647 - 1)) {
            sfbDistMax[sfb] = fMult(fixed_dbl(1.0f / 3.0f),
                                    qcOutChannel->sfbThresholdLdData[sfb]) +
                              fMult(fixed_dbl(1.0f / 3.0f), sfbDist[sfb]) +
                              fMult(fixed_dbl(1.0f / 3.0f), sfbDist[sfb]);
            sfbDistMax[sfb] =
              fixMax(sfbDistMax[sfb], qcOutChannel->sfbEnergyLdData[sfb] -
                                        fixed_dbl(0.15571537944));
            sfbDistMax[sfb] =
              fixMin(sfbDistMax[sfb], qcOutChannel->sfbThresholdLdData[sfb]);
          }
        }
        bCheckScf = 1;
        for (scfNew = scf[startSfb] + 1; scfNew <= scfHi; scfNew++) {
          for (k = 0; k < 60; k++) {
            scfTmp[k] = scf[k];
          }
          for (sfb = startSfb; sfb < stopSfb; sfb++) {
            if (scfTmp[sfb] != (-2147483647 - 1)) {
              scfTmp[sfb] = scfNew;
            }
          }
          deltaScfBits =
            FDKaacEnc_countScfBitsDiff(scf, scfTmp, sfbCnt, startSfb, stopSfb);
          deltaSpecPe = FDKaacEnc_calcSpecPeDiff(
            psyOutChan, qcOutChannel, scf, scfTmp, sfbConstPePart,
            sfbFormFactorLdData, sfbNRelevantLines, startSfb, stopSfb);
          deltaPeNew = deltaPe + (FIXP_DBL)deltaScfBits + deltaSpecPe;
          if (deltaPeNew < fixed_dbl(0.0f)) {
            bSuccess = 1;
            for (sfb = startSfb; sfb < stopSfb; sfb++) {
              if (scfTmp[sfb] != (-2147483647 - 1)) {
                sfbDistNew[sfb] = FDKaacEnc_calcSfbDist(
                  qcOutChannel->mdctSpectrum + sfbOffs[sfb],
                  quantSpecTmp + sfbOffs[sfb], sfbOffs[sfb + 1] - sfbOffs[sfb],
                  scfNew, dZoneQuantEnable);
                if (sfbDistNew[sfb] > sfbDistMax[sfb]) {
                  bSuccess = 0;
                  if (sfbDistNew[sfb] == qcOutChannel->sfbEnergyLdData[sfb]) {
                    bCheckScf = 0;
                  }
                  break;
                }
              }
            }
            if (bCheckScf == 0) {
              break;
            }
            if (bSuccess) {
              deltaPe = deltaPeNew;
              for (sfb = startSfb; sfb < stopSfb; sfb++) {
                if (scf[sfb] != (-2147483647 - 1)) {
                  scf[sfb] = scfNew;
                  sfbDist[sfb] = sfbDistNew[sfb];
                  for (k = 0; k < sfbOffs[sfb + 1] - sfbOffs[sfb]; k++) {
                    quantSpec[sfbOffs[sfb] + k] =
                      quantSpecTmp[sfbOffs[sfb] + k];
                  }
                }
              }
            }
          }
        }
      }
      if (scfAct == scf[startSfb] && scfLo < scfAct &&
          scfMax - scfMin <= MAX_SCF_DELTA) {
        int bminScfViolation = 0;
        for (k = 0; k < 60; k++) {
          scfTmp[k] = scf[k];
        }
        scfNew = scfLo;
        for (sfb = startSfb; sfb < stopSfb; sfb++) {
          if (scfTmp[sfb] != (-2147483647 - 1)) {
            scfTmp[sfb] = scfNew;
            if (scfNew < minScf[sfb]) {
              bminScfViolation = 1;
            }
          }
        }
        if (!bminScfViolation) {
          deltaScfBits =
            FDKaacEnc_countScfBitsDiff(scf, scfTmp, sfbCnt, startSfb, stopSfb);
          deltaSpecPe = FDKaacEnc_calcSpecPeDiff(
            psyOutChan, qcOutChannel, scf, scfTmp, sfbConstPePart,
            sfbFormFactorLdData, sfbNRelevantLines, startSfb, stopSfb);
          deltaPeNew = deltaPe + (FIXP_DBL)deltaScfBits + deltaSpecPe;
        }
        if (!bminScfViolation && deltaPeNew < fixed_dbl(0.0f)) {
          distOldSum = distNewSum = fixed_dbl(0.0f);
          for (sfb = startSfb; sfb < stopSfb; sfb++) {
            if (scfTmp[sfb] != (-2147483647 - 1)) {
              distOldSum += CalcInvLdData(sfbDist[sfb]) >> 3;
              sfbDistNew[sfb] = FDKaacEnc_calcSfbDist(
                qcOutChannel->mdctSpectrum + sfbOffs[sfb],
                quantSpecTmp + sfbOffs[sfb], sfbOffs[sfb + 1] - sfbOffs[sfb],
                scfNew, dZoneQuantEnable);
              if (sfbDistNew[sfb] > qcOutChannel->sfbThresholdLdData[sfb]) {
                distNewSum = distOldSum << 1;
                break;
              }
              distNewSum += CalcInvLdData(sfbDistNew[sfb]) >> 3;
            }
          }
          if (distNewSum < fMult(fixed_dbl(0.8f), distOldSum)) {
            deltaPe = deltaPeNew;
            for (sfb = startSfb; sfb < stopSfb; sfb++) {
              if (scf[sfb] != (-2147483647 - 1)) {
                scf[sfb] = scfNew;
                sfbDist[sfb] = sfbDistNew[sfb];
                for (k = 0; k < sfbOffs[sfb + 1] - sfbOffs[sfb]; k++) {
                  quantSpec[sfbOffs[sfb] + k] = quantSpecTmp[sfbOffs[sfb] + k];
                }
              }
            }
          }
        }
      }
      if (scfMax - scfMin <= MAX_SCF_DELTA - 3) {
        for (k = 0; k < sfbCnt; k++) {
          scfTmp[k] = scf[k];
        }
        for (i = 0; i < 3; i++) {
          scfNew = scfTmp[startSfb] - 1;
          for (sfb = startSfb; sfb < stopSfb; sfb++) {
            if (scfTmp[sfb] != (-2147483647 - 1)) {
              scfTmp[sfb] = scfNew;
            }
          }
          deltaScfBits =
            FDKaacEnc_countScfBitsDiff(scf, scfTmp, sfbCnt, startSfb, stopSfb);
          deltaPeNew = deltaPe + (FIXP_DBL)deltaScfBits;
          if (deltaPeNew <= fixed_dbl(0.0f)) {
            bSuccess = 1;
            distOldSum = distNewSum = fixed_dbl(0.0f);
            for (sfb = startSfb; sfb < stopSfb; sfb++) {
              if (scfTmp[sfb] != (-2147483647 - 1)) {
                FIXP_DBL sfbEnQ;
                FDKaacEnc_calcSfbQuantEnergyAndDist(
                  qcOutChannel->mdctSpectrum + sfbOffs[sfb],
                  quantSpec + sfbOffs[sfb], sfbOffs[sfb + 1] - sfbOffs[sfb],
                  scfNew, &sfbEnQ, &sfbDistNew[sfb]);
                distOldSum += CalcInvLdData(sfbDist[sfb]) >> 3;
                distNewSum += CalcInvLdData(sfbDistNew[sfb]) >> 3;
                if ((sfbDistNew[sfb] >
                     (sfbDist[sfb] + fixed_dbl(0.00259488556167f))) ||
                    (sfbEnQ < (qcOutChannel->sfbEnergyLdData[sfb] -
                               fixed_dbl(0.00778722686652f)))) {
                  bSuccess = 0;
                  break;
                }
              }
            }
            if (distNewSum < distOldSum && bSuccess) {
              deltaPe = deltaPeNew;
              for (sfb = startSfb; sfb < stopSfb; sfb++) {
                if (scf[sfb] != (-2147483647 - 1)) {
                  scf[sfb] = scfNew;
                  sfbDist[sfb] = sfbDistNew[sfb];
                }
              }
            }
          }
        }
      }
    }
  } while (stopSfb <= sfbCnt);
}

static void FDKaacEnc_FDKaacEnc_EstimateScaleFactorsChannel(
  QC_OUT_CHANNEL* qcOutChannel, PSY_OUT_CHANNEL* psyOutChannel, INT* scf,
  INT* globalGain, FIXP_DBL* sfbFormFactorLdData, const INT invQuant,
  SHORT* quantSpec, const INT dZoneQuantEnable) {
  INT i, j, sfb, sfbOffs;
  INT scfInt;
  INT maxSf;
  INT minSf;
  FIXP_DBL threshLdData;
  FIXP_DBL energyLdData;
  FIXP_DBL energyPartLdData;
  FIXP_DBL thresholdPartLdData;
  FIXP_DBL scfFract;
  FIXP_DBL maxSpec;
  FIXP_DBL absSpec;
  INT minScfCalculated[60];
  FIXP_DBL sfbDistLdData[60];
  SHORT quantSpecTmp[(1024)] = {};
  INT minSfMaxQuant[60];
  FIXP_DBL threshConstLdData = fixed_dbl(0.04304511722f);
  FIXP_DBL convConst = fixed_dbl(0.30102999566f);
  FIXP_DBL c1Const = fixed_dbl(-0.27083183594f);
  if (invQuant > 0) {
    FDKmemclear(quantSpec, (1024) * sizeof(SHORT));
  }
  for (i = 0; i < psyOutChannel->sfbCnt; i++) {
    scf[i] = (-2147483647 - 1);
  }
  for (i = 0; i < 60; i++) {
    minSfMaxQuant[i] = (-2147483647 - 1);
  }
  for (sfbOffs = 0; sfbOffs < psyOutChannel->sfbCnt;
       sfbOffs += psyOutChannel->sfbPerGroup) {
    for (sfb = 0; sfb < psyOutChannel->maxSfbPerGroup; sfb++) {
      threshLdData = qcOutChannel->sfbThresholdLdData[sfbOffs + sfb];
      energyLdData = qcOutChannel->sfbEnergyLdData[sfbOffs + sfb];
      sfbDistLdData[sfbOffs + sfb] = energyLdData;
      if (energyLdData > threshLdData) {
        FIXP_DBL tmp;
        energyPartLdData =
          sfbFormFactorLdData[sfbOffs + sfb] + fixed_dbl(0.09375f);
        thresholdPartLdData = threshConstLdData + threshLdData;
        scfFract = thresholdPartLdData - energyPartLdData;
        scfFract = fMult(convConst, scfFract);
        scfFract = scfFract + fMult(fixed_dbl(0.8585f), scfFract >> 3);
        scfInt = (INT)(scfFract >> ((32 - 1) - 3 - 6));
        maxSpec = fixed_dbl(0.0f);
        for (j = psyOutChannel->sfbOffsets[sfbOffs + sfb];
             j < psyOutChannel->sfbOffsets[sfbOffs + sfb + 1]; j++) {
          absSpec = fixp_abs(qcOutChannel->mdctSpectrum[j]);
          maxSpec = (absSpec > maxSpec) ? absSpec : maxSpec;
        }
        tmp = CalcLdData(maxSpec);
        if (c1Const > fixed_dbl(-1.f) - tmp) {
          minSfMaxQuant[sfbOffs + sfb] =
            ((INT)((c1Const + tmp) >> ((32 - 1) - 8))) + 1;
        }
        else {
          minSfMaxQuant[sfbOffs + sfb] =
            ((INT)(fixed_dbl(-1.f) >> ((32 - 1) - 8))) + 1;
        }
        scfInt = fixMax(scfInt, minSfMaxQuant[sfbOffs + sfb]);
        if (invQuant > 0) {
          scfInt = FDKaacEnc_improveScf(
            qcOutChannel->mdctSpectrum +
              psyOutChannel->sfbOffsets[sfbOffs + sfb],
            quantSpec + psyOutChannel->sfbOffsets[sfbOffs + sfb],
            quantSpecTmp + psyOutChannel->sfbOffsets[sfbOffs + sfb],
            psyOutChannel->sfbOffsets[sfbOffs + sfb + 1] -
              psyOutChannel->sfbOffsets[sfbOffs + sfb],
            threshLdData, scfInt, minSfMaxQuant[sfbOffs + sfb],
            &sfbDistLdData[sfbOffs + sfb], &minScfCalculated[sfbOffs + sfb],
            dZoneQuantEnable);
        }
        scf[sfbOffs + sfb] = scfInt;
      }
    }
  }
  if (invQuant > 1) {
    FIXP_DBL sfbConstPePart[60];
    FIXP_DBL sfbNRelevantLines[60];
    for (i = 0; i < psyOutChannel->sfbCnt; i++) {
      sfbConstPePart[i] = (FIXP_DBL)(-2147483647 - 1);
    }
    FDKaacEnc_calcSfbRelevantLines(
      sfbFormFactorLdData, qcOutChannel->sfbEnergyLdData,
      qcOutChannel->sfbThresholdLdData, psyOutChannel->sfbOffsets,
      psyOutChannel->sfbCnt, psyOutChannel->sfbPerGroup,
      psyOutChannel->maxSfbPerGroup, sfbNRelevantLines);
    FDKaacEnc_assimilateSingleScf(
      psyOutChannel, qcOutChannel, quantSpec, quantSpecTmp, dZoneQuantEnable,
      scf, minSfMaxQuant, sfbDistLdData, sfbConstPePart, sfbFormFactorLdData,
      sfbNRelevantLines, minScfCalculated, 1);
    if (invQuant > 1) {
      FDKaacEnc_assimilateMultipleScf(
        psyOutChannel, qcOutChannel, quantSpec, quantSpecTmp, dZoneQuantEnable,
        scf, minSfMaxQuant, sfbDistLdData, sfbConstPePart, sfbFormFactorLdData,
        sfbNRelevantLines);
      FDKaacEnc_assimilateMultipleScf(
        psyOutChannel, qcOutChannel, quantSpec, quantSpecTmp, dZoneQuantEnable,
        scf, minSfMaxQuant, sfbDistLdData, sfbConstPePart, sfbFormFactorLdData,
        sfbNRelevantLines);
      FDKaacEnc_FDKaacEnc_assimilateMultipleScf2(
        psyOutChannel, qcOutChannel, quantSpec, quantSpecTmp, dZoneQuantEnable,
        scf, minSfMaxQuant, sfbDistLdData, sfbConstPePart, sfbFormFactorLdData,
        sfbNRelevantLines);
    }
  }
  minSf = 2147483647;
  for (sfbOffs = 0; sfbOffs < psyOutChannel->sfbCnt;
       sfbOffs += psyOutChannel->sfbPerGroup) {
    for (sfb = 0; sfb < psyOutChannel->maxSfbPerGroup; sfb++) {
      if (scf[sfbOffs + sfb] != (-2147483647 - 1)) {
        minSf = fixMin(minSf, scf[sfbOffs + sfb]);
      }
    }
  }
  for (sfbOffs = 0; sfbOffs < psyOutChannel->sfbCnt;
       sfbOffs += psyOutChannel->sfbPerGroup) {
    for (sfb = 0; sfb < psyOutChannel->maxSfbPerGroup; sfb++) {
      if ((scf[sfbOffs + sfb] != (-2147483647 - 1)) &&
          (minSf + MAX_SCF_DELTA) < scf[sfbOffs + sfb]) {
        scf[sfbOffs + sfb] = minSf + MAX_SCF_DELTA;
        if (invQuant > 0) {
          sfbDistLdData[sfbOffs + sfb] = FDKaacEnc_calcSfbDist(
            qcOutChannel->mdctSpectrum +
              psyOutChannel->sfbOffsets[sfbOffs + sfb],
            quantSpec + psyOutChannel->sfbOffsets[sfbOffs + sfb],
            psyOutChannel->sfbOffsets[sfbOffs + sfb + 1] -
              psyOutChannel->sfbOffsets[sfbOffs + sfb],
            scf[sfbOffs + sfb], dZoneQuantEnable);
        }
      }
    }
  }
  maxSf = (-2147483647 - 1);
  for (sfbOffs = 0; sfbOffs < psyOutChannel->sfbCnt;
       sfbOffs += psyOutChannel->sfbPerGroup) {
    for (sfb = 0; sfb < psyOutChannel->maxSfbPerGroup; sfb++) {
      maxSf = fixMax(maxSf, scf[sfbOffs + sfb]);
    }
  }
  if (maxSf > (-2147483647 - 1)) {
    *globalGain = maxSf;
    for (sfbOffs = 0; sfbOffs < psyOutChannel->sfbCnt;
         sfbOffs += psyOutChannel->sfbPerGroup) {
      for (sfb = 0; sfb < psyOutChannel->maxSfbPerGroup; sfb++) {
        if (scf[sfbOffs + sfb] == (-2147483647 - 1)) {
          scf[sfbOffs + sfb] = 0;
          for (j = psyOutChannel->sfbOffsets[sfbOffs + sfb];
               j < psyOutChannel->sfbOffsets[sfbOffs + sfb + 1]; j++) {
            qcOutChannel->mdctSpectrum[j] = fixed_dbl(0.0f);
          }
        }
        else {
          scf[sfbOffs + sfb] = maxSf - scf[sfbOffs + sfb];
        }
      }
    }
  }
  else {
    *globalGain = 0;
    for (sfbOffs = 0; sfbOffs < psyOutChannel->sfbCnt;
         sfbOffs += psyOutChannel->sfbPerGroup) {
      for (sfb = 0; sfb < psyOutChannel->maxSfbPerGroup; sfb++) {
        scf[sfbOffs + sfb] = 0;
        for (j = psyOutChannel->sfbOffsets[sfbOffs + sfb];
             j < psyOutChannel->sfbOffsets[sfbOffs + sfb + 1]; j++) {
          qcOutChannel->mdctSpectrum[j] = fixed_dbl(0.0f);
        }
      }
    }
  }
}

void FDKaacEnc_EstimateScaleFactors(PSY_OUT_CHANNEL* psyOutChannel[],
                                    QC_OUT_CHANNEL* qcOutChannel[],
                                    const int invQuant,
                                    const INT dZoneQuantEnable,
                                    const int nChannels) {
  int ch;
  for (ch = 0; ch < nChannels; ch++) {
    FDKaacEnc_FDKaacEnc_EstimateScaleFactorsChannel(
      qcOutChannel[ch], psyOutChannel[ch], qcOutChannel[ch]->scf,
      &qcOutChannel[ch]->globalGain, qcOutChannel[ch]->sfbFormFactorLdData,
      invQuant, qcOutChannel[ch]->quantSpec, dZoneQuantEnable);
  }
}

}
