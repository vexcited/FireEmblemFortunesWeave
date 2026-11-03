/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/intensity.hpp"
#include "nn/codec/sbr_envelope.hpp"
#include "nn/codec/tns_detection.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using INT = int;
using LONG = int32_t;
void* FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
extern const int32_t invCount[80];
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

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return static_cast<int32_t>((static_cast<int64_t>(a) * b) >> 32);
}

static int32_t fMult(int32_t a, int32_t b) {
  return static_cast<int32_t>(static_cast<uint32_t>(fMultDiv2(a, b)) << 1);
}

static int32_t fPow2Div2(int32_t value) {
  return fMultDiv2(value, value);
}

static int32_t scaleValue(int32_t value, int scale) {
  return scale >= 0 ? value << scale : value >> -scale;
}

static int32_t fAbs(int32_t value) {
  return value < 0 ? -value : value;
}

static int32_t GetInvInt(int value) {
  return invCount[value];
}

typedef struct {
  FIXP_DBL corr_thresh;
  FIXP_DBL total_error_thresh;
  FIXP_DBL local_error_thresh;
  FIXP_DBL direction_deviation_thresh;
  FIXP_DBL is_region_min_loudness;
  INT min_is_sfbs;
  FIXP_DBL left_right_ratio_threshold;
} INTENSITY_PARAMETERS;
static INT calcSfbMaxScale(const FIXP_DBL* mdctSpectrum, const INT l1,
                           const INT l2) {
  INT i;
  INT sfbMaxScale;
  FIXP_DBL maxSpc;
  maxSpc = fixed_dbl(0.0);
  for (i = l1; i < l2; i++) {
    FIXP_DBL tmp = fAbs((FIXP_DBL)mdctSpectrum[i]);
    maxSpc = fixMax(maxSpc, tmp);
  }
  sfbMaxScale =
    (maxSpc == fixed_dbl(0.0)) ? (32 - 2) : CntLeadingZeros(maxSpc) - 1;
  return sfbMaxScale;
}

static void FDKaacEnc_initIsParams(INTENSITY_PARAMETERS* isParams) {
  isParams->corr_thresh = fixed_dbl(0.95f);
  isParams->total_error_thresh = fixed_dbl(0.04f);
  isParams->local_error_thresh = fixed_dbl(0.01f);
  isParams->direction_deviation_thresh = fixed_dbl(2.0f / (1 << 2));
  isParams->is_region_min_loudness = fixed_dbl(0.1f);
  isParams->min_is_sfbs = 6;
  isParams->left_right_ratio_threshold = fixed_dbl(0.7f);
}

static void FDKaacEnc_prepareIntensityDecision(
  const FIXP_DBL* sfbEnergyLeft, const FIXP_DBL* sfbEnergyRight,
  const FIXP_DBL* sfbEnergyLdDataLeft, const FIXP_DBL* sfbEnergyLdDataRight,
  const FIXP_DBL* mdctSpectrumLeft, const FIXP_DBL* mdctSpectrumRight,
  const INTENSITY_PARAMETERS* isParams, FIXP_DBL* hrrErr, INT* isMask,
  FIXP_DBL* realScale, FIXP_DBL* normSfbLoudness, const INT sfbCnt,
  const INT sfbPerGroup, const INT maxSfbPerGroup, const INT* sfbOffset) {
  INT j, sfb, sfboffs;
  INT grpCounter;
  FIXP_DBL overallLoudness[4];
  FIXP_DBL channelCorr[60];
  FIXP_DBL ml, mr;
  FIXP_DBL prod_lr;
  FIXP_DBL square_l, square_r;
  FIXP_DBL tmp_l, tmp_r;
  FIXP_DBL inv_n;
  FDKmemclear(channelCorr, 60 * sizeof(FIXP_DBL));
  FDKmemclear(normSfbLoudness, 60 * sizeof(FIXP_DBL));
  FDKmemclear(overallLoudness, 4 * sizeof(FIXP_DBL));
  FDKmemclear(realScale, 60 * sizeof(FIXP_DBL));
  for (grpCounter = 0, sfboffs = 0; sfboffs < sfbCnt;
       sfboffs += sfbPerGroup, grpCounter++) {
    overallLoudness[grpCounter] = fixed_dbl(0.0f);
    for (sfb = 0; sfb < maxSfbPerGroup; sfb++) {
      INT sL, sR, s;
      FIXP_DBL isValue = sfbEnergyLdDataLeft[sfb + sfboffs] -
                         sfbEnergyLdDataRight[sfb + sfboffs];
      realScale[sfb + sfboffs] =
        fixMin(fixed_dbl(60.f / (1 << (1 + 6))),
               fixMax(fixed_dbl(-60.f / (1 << (1 + 6))), isValue));
      sL = fixMax(0, (CntLeadingZeros(sfbEnergyLeft[sfb + sfboffs]) - 1));
      sR = fixMax(0, (CntLeadingZeros(sfbEnergyRight[sfb + sfboffs]) - 1));
      s = (fixMin(sL, sR) >> 2) << 2;
      normSfbLoudness[sfb + sfboffs] =
        sqrtFixp(sqrtFixp(((sfbEnergyLeft[sfb + sfboffs] << s) >> 1) +
                          ((sfbEnergyRight[sfb + sfboffs] << s) >> 1))) >>
        (s >> 2);
      overallLoudness[grpCounter] += normSfbLoudness[sfb + sfboffs] >> 6;
      if ((sfbEnergyLeft[sfb + sfboffs] >=
           fMult(isParams->left_right_ratio_threshold,
                 sfbEnergyRight[sfb + sfboffs])) &&
          (fMult(isParams->left_right_ratio_threshold,
                 sfbEnergyLeft[sfb + sfboffs]) <=
           sfbEnergyRight[sfb + sfboffs])) {
        hrrErr[sfb + sfboffs] = fixed_dbl(1.0 / 8.0);
      }
    }
  }
  for (grpCounter = 0, sfboffs = 0; sfboffs < sfbCnt;
       sfboffs += sfbPerGroup, grpCounter++) {
    INT invOverallLoudnessSF;
    FIXP_DBL invOverallLoudness;
    if (overallLoudness[grpCounter] == fixed_dbl(0.0)) {
      invOverallLoudness = fixed_dbl(0.0);
      invOverallLoudnessSF = 0;
    }
    else {
      invOverallLoudness =
        fDivNorm((FIXP_DBL)0x7fffffff, overallLoudness[grpCounter],
                 &invOverallLoudnessSF);
      invOverallLoudnessSF = invOverallLoudnessSF - 6 + 1;
    }
    invOverallLoudnessSF =
      fixMin(fixMax(invOverallLoudnessSF, -(32 - 1)), 32 - 1);
    for (sfb = 0; sfb < maxSfbPerGroup; sfb++) {
      FIXP_DBL tmp;
      tmp = fMultDiv2((normSfbLoudness[sfb + sfboffs] >> 6) << 6,
                      invOverallLoudness);
      normSfbLoudness[sfb + sfboffs] = scaleValue(tmp, invOverallLoudnessSF);
      channelCorr[sfb + sfboffs] = fixed_dbl(0.0f);
      inv_n = GetInvInt(
        (sfbOffset[sfb + sfboffs + 1] - sfbOffset[sfb + sfboffs]) >> 1);
      if (inv_n > fixed_dbl(0.0f)) {
        INT s, sL, sR;
        ml = fixed_dbl(0.0f);
        mr = fixed_dbl(0.0f);
        prod_lr = fixed_dbl(0.0f);
        square_l = fixed_dbl(0.0f);
        square_r = fixed_dbl(0.0f);
        sL = calcSfbMaxScale(mdctSpectrumLeft, sfbOffset[sfb + sfboffs],
                             sfbOffset[sfb + sfboffs + 1]);
        sR = calcSfbMaxScale(mdctSpectrumRight, sfbOffset[sfb + sfboffs],
                             sfbOffset[sfb + sfboffs + 1]);
        s = fixMin(sL, sR);
        for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
             j++) {
          ml += fMultDiv2((mdctSpectrumLeft[j] << s), inv_n);
          mr += fMultDiv2((mdctSpectrumRight[j] << s), inv_n);
        }
        ml = fMultDiv2(ml, inv_n);
        mr = fMultDiv2(mr, inv_n);
        for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
             j++) {
          tmp_l = fMultDiv2((mdctSpectrumLeft[j] << s), inv_n) - ml;
          tmp_r = fMultDiv2((mdctSpectrumRight[j] << s), inv_n) - mr;
          prod_lr += fMultDiv2(tmp_l, tmp_r);
          square_l += fPow2Div2(tmp_l);
          square_r += fPow2Div2(tmp_r);
        }
        prod_lr = prod_lr << 1;
        square_l = square_l << 1;
        square_r = square_r << 1;
        if (square_l > fixed_dbl(0.0f) && square_r > fixed_dbl(0.0f)) {
          INT channelCorrSF = 0;
          sL = fixMax(0, (CntLeadingZeros(square_l) - 1));
          sR = fixMax(0, (CntLeadingZeros(square_r) - 1));
          s = ((sL + sR) >> 1) << 1;
          sL = fixMin(sL, s);
          sR = s - sL;
          tmp = fMult(square_l << sL, square_r << sR);
          tmp = sqrtFixp(tmp);
          if (prod_lr < fixed_dbl(0.0f)) {
            channelCorr[sfb + sfboffs] =
              -(fDivNorm(-prod_lr, tmp, &channelCorrSF));
          }
          else {
            channelCorr[sfb + sfboffs] =
              (fDivNorm(prod_lr, tmp, &channelCorrSF));
          }
          channelCorrSF = fixMin(
            fixMax((channelCorrSF + ((sL + sR) >> 1)), -(32 - 1)), 32 - 1);
          if (channelCorrSF < 0) {
            channelCorr[sfb + sfboffs] =
              channelCorr[sfb + sfboffs] >> (-channelCorrSF);
          }
          else {
            if (fAbs(channelCorr[sfb + sfboffs]) >
                (((FIXP_DBL)0x7fffffff) >> channelCorrSF)) {
              if (channelCorr[sfb + sfboffs] < fixed_dbl(0.0f)) {
                channelCorr[sfb + sfboffs] = -(FIXP_DBL)0x7fffffff;
              }
              else {
                channelCorr[sfb + sfboffs] = (FIXP_DBL)0x7fffffff;
              }
            }
            else {
              channelCorr[sfb + sfboffs] = channelCorr[sfb + sfboffs]
                                           << channelCorrSF;
            }
          }
        }
      }
      if (hrrErr[sfb + sfboffs] == fixed_dbl(1.0 / 8.0)) {
        continue;
      }
      hrrErr[sfb + sfboffs] =
        fMultDiv2((fixed_dbl(0.25f) - (channelCorr[sfb + sfboffs] >> 2)),
                  normSfbLoudness[sfb + sfboffs]);
      if (fAbs(channelCorr[sfb + sfboffs]) >= isParams->corr_thresh) {
        isMask[sfb + sfboffs] = 1;
      }
    }
  }
}

static void FDKaacEnc_finalizeIntensityDecision(
  const FIXP_DBL* hrrErr, INT* isMask, const FIXP_DBL* realIsScale,
  const FIXP_DBL* normSfbLoudness, const INTENSITY_PARAMETERS* isParams,
  const INT sfbCnt, const INT sfbPerGroup, const INT maxSfbPerGroup) {
  INT sfb, sfboffs, j;
  FIXP_DBL isScaleLast = fixed_dbl(0.0f);
  INT isStartValueFound = 0;
  for (sfboffs = 0; sfboffs < sfbCnt; sfboffs += sfbPerGroup) {
    INT startIsSfb = 0;
    INT inIsBlock = 0;
    INT currentIsSfbCount = 0;
    FIXP_DBL overallHrrError = fixed_dbl(0.0f);
    FIXP_DBL isRegionLoudness = fixed_dbl(0.0f);
    for (sfb = 0; sfb < maxSfbPerGroup; sfb++) {
      if (isMask[sfboffs + sfb] == 1) {
        if (currentIsSfbCount == 0) {
          startIsSfb = sfboffs + sfb;
        }
        if (isStartValueFound == 0) {
          isScaleLast = realIsScale[sfboffs + sfb];
          isStartValueFound = 1;
        }
        inIsBlock = 1;
        currentIsSfbCount++;
        overallHrrError += hrrErr[sfboffs + sfb] >> (6 - 3);
        isRegionLoudness += normSfbLoudness[sfboffs + sfb] >> 6;
      }
      else {
        if (inIsBlock) {
          overallHrrError += hrrErr[sfboffs + sfb] >> (6 - 3);
          isRegionLoudness += normSfbLoudness[sfboffs + sfb] >> 6;
          if ((hrrErr[sfboffs + sfb] < (isParams->local_error_thresh >> 3)) &&
              (overallHrrError < (isParams->total_error_thresh >> 6))) {
            currentIsSfbCount++;
            isMask[sfboffs + sfb] = 1;
          }
          else {
            inIsBlock = 0;
          }
        }
      }
      if (inIsBlock) {
        if (fAbs(isScaleLast - realIsScale[sfboffs + sfb]) <
            (isParams->direction_deviation_thresh >> (1 + 6 - 2))) {
          isScaleLast = realIsScale[sfboffs + sfb];
        }
        else {
          isMask[sfboffs + sfb] = 0;
          inIsBlock = 0;
          currentIsSfbCount--;
        }
      }
      if (currentIsSfbCount > 0 && (!inIsBlock || sfb == maxSfbPerGroup - 1)) {
        if (currentIsSfbCount < isParams->min_is_sfbs ||
            (isRegionLoudness < isParams->is_region_min_loudness >> 6)) {
          for (j = startIsSfb; j <= sfboffs + sfb; j++) {
            isMask[j] = 0;
          }
          isScaleLast = fixed_dbl(0.0f);
          isStartValueFound = 0;
          for (j = 0; j < startIsSfb; j++) {
            if (isMask[j] != 0) {
              isScaleLast = realIsScale[j];
              isStartValueFound = 1;
            }
          }
        }
        currentIsSfbCount = 0;
        overallHrrError = fixed_dbl(0.0f);
        isRegionLoudness = fixed_dbl(0.0f);
      }
    }
  }
}

void FDKaacEnc_IntensityStereoProcessing(
  FIXP_DBL* sfbEnergyLeft, FIXP_DBL* sfbEnergyRight, FIXP_DBL* mdctSpectrumLeft,
  FIXP_DBL* mdctSpectrumRight, FIXP_DBL* sfbThresholdLeft,
  FIXP_DBL* sfbThresholdRight, FIXP_DBL* sfbThresholdLdDataRight, FIXP_DBL*,
  FIXP_DBL* sfbSpreadEnRight, FIXP_DBL* sfbEnergyLdDataLeft,
  FIXP_DBL* sfbEnergyLdDataRight, INT* msDigest, INT* msMask, const INT sfbCnt,
  const INT sfbPerGroup, const INT maxSfbPerGroup, const INT* sfbOffset,
  const INT allowIS, INT* isBook, INT* isScale, PNS_DATA* pnsData[2]) {
  INT sfb, sfboffs, j;
  FIXP_DBL scale;
  FIXP_DBL lr;
  FIXP_DBL hrrErr[60];
  FIXP_DBL normSfbLoudness[60];
  FIXP_DBL realIsScale[60];
  INTENSITY_PARAMETERS isParams;
  INT isMask[60];
  FDKmemclear((void*)isBook, sfbCnt * sizeof(INT));
  FDKmemclear((void*)isMask, sfbCnt * sizeof(INT));
  FDKmemclear((void*)realIsScale, sfbCnt * sizeof(FIXP_DBL));
  FDKmemclear((void*)isScale, sfbCnt * sizeof(INT));
  FDKmemclear((void*)hrrErr, sfbCnt * sizeof(FIXP_DBL));
  if (!allowIS) {
    return;
  }
  FDKaacEnc_initIsParams(&isParams);
  FDKaacEnc_prepareIntensityDecision(
    sfbEnergyLeft, sfbEnergyRight, sfbEnergyLdDataLeft, sfbEnergyLdDataRight,
    mdctSpectrumLeft, mdctSpectrumRight, &isParams, hrrErr, isMask, realIsScale,
    normSfbLoudness, sfbCnt, sfbPerGroup, maxSfbPerGroup, sfbOffset);
  FDKaacEnc_finalizeIntensityDecision(hrrErr, isMask, realIsScale,
                                      normSfbLoudness, &isParams, sfbCnt,
                                      sfbPerGroup, maxSfbPerGroup);
  for (sfb = 0; sfb < sfbCnt; sfb += sfbPerGroup) {
    for (sfboffs = 0; sfboffs < maxSfbPerGroup; sfboffs++) {
      INT sL, sR;
      FIXP_DBL inv_n;
      msMask[sfb + sfboffs] = 0;
      if (isMask[sfb + sfboffs] == 0) {
        continue;
      }
      if ((sfbEnergyLeft[sfb + sfboffs] < sfbThresholdLeft[sfb + sfboffs]) &&
          (fMult(fixed_dbl(1.0f / 1.5f), sfbEnergyRight[sfb + sfboffs]) >
           sfbThresholdRight[sfb + sfboffs])) {
        continue;
      }
      if (pnsData[0]) {
        if (pnsData[0]->pnsFlag[sfb + sfboffs]) {
          pnsData[0]->pnsFlag[sfb + sfboffs] = 0;
        }
        if (pnsData[1]->pnsFlag[sfb + sfboffs]) {
          pnsData[1]->pnsFlag[sfb + sfboffs] = 0;
        }
      }
      inv_n = GetInvInt(
        (sfbOffset[sfb + sfboffs + 1] - sfbOffset[sfb + sfboffs]) >> 1);
      sL = calcSfbMaxScale(mdctSpectrumLeft, sfbOffset[sfb + sfboffs],
                           sfbOffset[sfb + sfboffs + 1]);
      sR = calcSfbMaxScale(mdctSpectrumRight, sfbOffset[sfb + sfboffs],
                           sfbOffset[sfb + sfboffs + 1]);
      lr = fixed_dbl(0.0f);
      for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
           j++) {
        lr += fMultDiv2(
          fMultDiv2(mdctSpectrumLeft[j] << sL, mdctSpectrumRight[j] << sR),
          inv_n);
      }
      lr = lr << 1;
      if (lr < fixed_dbl(0.0f)) {
        INT s0, s1, s2;
        FIXP_DBL tmp, d, ed = fixed_dbl(0.0f);
        s0 = fixMin(sL, sR);
        for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
             j++) {
          d = ((mdctSpectrumLeft[j] << s0) >> 1) -
              ((mdctSpectrumRight[j] << s0) >> 1);
          ed += fMultDiv2(d, d) >> (6 - 1);
        }
        msMask[sfb + sfboffs] = 1;
        tmp = fDivNorm(sfbEnergyLeft[sfb + sfboffs], ed, &s1);
        s2 = (s1) + (2 * s0) - 2 - 6;
        if (s2 & 1) {
          tmp = tmp >> 1;
          s2 = s2 + 1;
        }
        s2 = (s2 >> 1) + 1;
        s2 = fixMin(fixMax(s2, -(32 - 1)), (32 - 1));
        scale = sqrtFixp(tmp);
        if (s2 < 0) {
          s2 = -s2;
          for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
               j++) {
            mdctSpectrumLeft[j] = (fMultDiv2(mdctSpectrumLeft[j], scale) -
                                   fMultDiv2(mdctSpectrumRight[j], scale)) >>
                                  s2;
            mdctSpectrumRight[j] = fixed_dbl(0.0f);
          }
        }
        else {
          for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
               j++) {
            mdctSpectrumLeft[j] = (fMultDiv2(mdctSpectrumLeft[j], scale) -
                                   fMultDiv2(mdctSpectrumRight[j], scale))
                                  << s2;
            mdctSpectrumRight[j] = fixed_dbl(0.0f);
          }
        }
      }
      else {
        INT s0, s1, s2;
        FIXP_DBL tmp, s, es = fixed_dbl(0.0f);
        s0 = fixMin(sL, sR);
        for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
             j++) {
          s = ((mdctSpectrumLeft[j] << s0) >> 1) +
              ((mdctSpectrumRight[j] << s0) >> 1);
          es += fMultDiv2(s, s) >> (6 - 1);
        }
        msMask[sfb + sfboffs] = 0;
        tmp = fDivNorm(sfbEnergyLeft[sfb + sfboffs], es, &s1);
        s2 = (s1) + (2 * s0) - 2 - 6;
        if (s2 & 1) {
          tmp = tmp >> 1;
          s2 = s2 + 1;
        }
        s2 = (s2 >> 1) + 1;
        s2 = fixMin(fixMax(s2, -(32 - 1)), (32 - 1));
        scale = sqrtFixp(tmp);
        if (s2 < 0) {
          s2 = -s2;
          for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
               j++) {
            mdctSpectrumLeft[j] = (fMultDiv2(mdctSpectrumLeft[j], scale) +
                                   fMultDiv2(mdctSpectrumRight[j], scale)) >>
                                  s2;
            mdctSpectrumRight[j] = fixed_dbl(0.0f);
          }
        }
        else {
          for (j = sfbOffset[sfb + sfboffs]; j < sfbOffset[sfb + sfboffs + 1];
               j++) {
            mdctSpectrumLeft[j] = (fMultDiv2(mdctSpectrumLeft[j], scale) +
                                   fMultDiv2(mdctSpectrumRight[j], scale))
                                  << s2;
            mdctSpectrumRight[j] = fixed_dbl(0.0f);
          }
        }
      }
      isBook[sfb + sfboffs] = 15;
      if (realIsScale[sfb + sfboffs] < fixed_dbl(0.0f)) {
        isScale[sfb + sfboffs] = (INT)(((realIsScale[sfb + sfboffs] >> 1) -
                                        fixed_dbl(0.5f / (1 << (1 + 6 + 1)))) >>
                                       (32 - 1 - 1 - 6 - 1)) +
                                 1;
      }
      else {
        isScale[sfb + sfboffs] = (INT)(((realIsScale[sfb + sfboffs] >> 1) +
                                        fixed_dbl(0.5f / (1 << (1 + 6 + 1)))) >>
                                       (32 - 1 - 1 - 6 - 1));
      }
      sfbEnergyRight[sfb + sfboffs] = fixed_dbl(0.0f);
      sfbEnergyLdDataRight[sfb + sfboffs] = fixed_dbl(-1.0f);
      sfbThresholdRight[sfb + sfboffs] = fixed_dbl(0.0f);
      sfbThresholdLdDataRight[sfb + sfboffs] = fixed_dbl(-0.515625f);
      sfbSpreadEnRight[sfb + sfboffs] = fixed_dbl(0.0f);
      *msDigest = 1;
    }
  }
}

FIXP_DBL sqrtFixp(FIXP_DBL op) {
  INT tmp_exp = 0;
  FIXP_DBL tmp_inv = invSqrtNorm2(op, &tmp_exp);
  return ((FIXP_DBL)(fMultDiv2((op << (tmp_exp - 1)), tmp_inv) << 2));
}

}
