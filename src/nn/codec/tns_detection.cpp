#include "nn/codec/tns_detection.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using INT = int32_t;
using LONG = int32_t;
void FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
int32_t fDivNorm(int32_t, int32_t, int32_t*);
int32_t schur_div(int32_t, int32_t, int32_t);
static constexpr int32_t fixed(double value) {
  double scaled = value * 2147483648.0 + (value >= 0 ? 0.5 : -0.5);
  return scaled >= 2147483647.0    ? 2147483647
         : scaled <= -2147483648.0 ? (-2147483647 - 1)
                                   : int32_t(scaled);
}

static int32_t fixp_abs(int32_t value) {
  return value < 0 ? int32_t(0U - uint32_t(value)) : value;
}

static int32_t FDKabs(int32_t value) {
  return fixp_abs(value);
}

static int32_t fAbs(int32_t value) {
  return fixp_abs(value);
}

static int fixMax(int a, int b) {
  return a > b ? a : b;
}

static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int CountLeadingBits(int32_t value) {
  return value ? __builtin_clrsb(value) : 0;
}

static int fNormz(uint32_t value) {
  return value ? __builtin_clz(value) : 32;
}

static int32_t fMultDiv2(int32_t a, int32_t b) {
  return int32_t((int64_t(a) * b) >> 32);
}

static int32_t fMult(int32_t a, int32_t b) {
  return int32_t(uint32_t(fMultDiv2(a, b)) << 1);
}

static int32_t fPow2(int32_t value) {
  return fMult(value, value);
}

static int32_t fPow2Div2(int32_t value) {
  return fMultDiv2(value, value);
}

static int32_t scaleValue(int32_t value, int shift) {
  return shift >= 0 ? int32_t(uint32_t(value) << (shift & 31))
                    : value >> (-shift & 31);
}

static const FIXP_DBL invSqrtTab[128] = {
  0x5a827999, 0x5a287e03, 0x59cf8cbb, 0x5977a0ab, 0x5920b4de, 0x58cac480,
  0x5875cade, 0x5821c364, 0x57cea99c, 0x577c792f, 0x572b2ddf, 0x56dac38d,
  0x568b3631, 0x563c81df, 0x55eea2c3, 0x55a19521, 0x55555555, 0x5509dfd0,
  0x54bf311a, 0x547545d0, 0x542c1aa3, 0x53e3ac5a, 0x539bf7cc, 0x5354f9e6,
  0x530eafa4, 0x52c91617, 0x52842a5e, 0x523fe9ab, 0x51fc513f, 0x51b95e6b,
  0x51770e8e, 0x51355f19, 0x50f44d88, 0x50b3d768, 0x5073fa4f, 0x5034b3e6,
  0x4ff601df, 0x4fb7e1f9, 0x4f7a5201, 0x4f3d4fce, 0x4f00d943, 0x4ec4ec4e,
  0x4e8986e9, 0x4e4ea718, 0x4e144ae8, 0x4dda7072, 0x4da115d9, 0x4d683948,
  0x4d2fd8f4, 0x4cf7f31b, 0x4cc08604, 0x4c898fff, 0x4c530f64, 0x4c1d0293,
  0x4be767f5, 0x4bb23df9, 0x4b7d8317, 0x4b4935ce, 0x4b1554a6, 0x4ae1de2a,
  0x4aaed0f0, 0x4a7c2b92, 0x4a49ecb3, 0x4a1812fa, 0x49e69d16, 0x49b589bb,
  0x4984d7a4, 0x49548591, 0x49249249, 0x48f4fc96, 0x48c5c34a, 0x4896e53c,
  0x48686147, 0x483a364c, 0x480c6331, 0x47dee6e0, 0x47b1c049, 0x4784ee5f,
  0x4758701c, 0x472c447c, 0x47006a80, 0x46d4e130, 0x46a9a793, 0x467ebcb9,
  0x46541fb3, 0x4629cf98, 0x45ffcb80, 0x45d61289, 0x45aca3d5, 0x45837e88,
  0x455aa1ca, 0x45320cc8, 0x4509beb0, 0x44e1b6b4, 0x44b9f40b, 0x449275ec,
  0x446b3b95, 0x44444444, 0x441d8f3b, 0x43f71bbe, 0x43d0e917, 0x43aaf68e,
  0x43854373, 0x435fcf14, 0x433a98c5, 0x43159fdb, 0x42f0e3ae, 0x42cc6397,
  0x42a81ef5, 0x42841527, 0x4260458d, 0x423caf8c, 0x4219528b, 0x41f62df1,
  0x41d3412a, 0x41b08ba1, 0x418e0cc7, 0x416bc40d, 0x4149b0e4, 0x4127d2c3,
  0x41062920, 0x40e4b374, 0x40c3713a, 0x40a261ef, 0x40818511, 0x4060da21,
  0x404060a1, 0x40201814};
FIXP_DBL invSqrtNorm2(FIXP_DBL op, INT* shift) {
  FIXP_DBL val = op;
  FIXP_DBL reg1, reg2, regtmp;
  if (val == fixed(0.0)) {
    *shift = 1;
    return ((LONG)1);
  }
  *shift = fNormz(val) - 1;
  val <<= *shift;
  *shift += 2;
  reg1 = invSqrtTab[(INT)(val >> (32 - 1 - (7 + 1))) & 127];
  reg2 = fixed(0.0625f);
  regtmp = fPow2Div2(reg1);
  regtmp = reg2 - fMultDiv2(regtmp, val);
  reg1 += (fMultDiv2(regtmp, reg1) << 4);
  if (*shift & 0x00000001) {
    reg2 = fixed(0.707106781186547524400844362104849f);
    reg1 = fMultDiv2(reg1, reg2) << 2;
  }
  *shift = *shift >> 1;
  return (reg1);
}

extern const FIXP_DBL FDKaacEnc_tnsCoeff3Borders[8];
const FIXP_DBL FDKaacEnc_tnsCoeff3Borders[8] = {
  (FIXP_DBL)0x80000001, (FIXP_DBL)0x87b826df, (FIXP_DBL)0x9df24154,
  (FIXP_DBL)0xbfffffe5, (FIXP_DBL)0xe9c5e578, (FIXP_DBL)0x1c7b90f0,
  (FIXP_DBL)0x4fce83a9, (FIXP_DBL)0x7352f2c3};
extern const FIXP_DBL FDKaacEnc_tnsCoeff4Borders[16];
const FIXP_DBL FDKaacEnc_tnsCoeff4Borders[16] = {
  (FIXP_DBL)0x80000001, (FIXP_DBL)0x822deff0, (FIXP_DBL)0x88a4bfe6,
  (FIXP_DBL)0x932c159d, (FIXP_DBL)0xa16827c2, (FIXP_DBL)0xb2dcde27,
  (FIXP_DBL)0xc6f20b91, (FIXP_DBL)0xdcf89c64, (FIXP_DBL)0xf4308ce1,
  (FIXP_DBL)0x0d613054, (FIXP_DBL)0x278dde80, (FIXP_DBL)0x4000001b,
  (FIXP_DBL)0x55a6127b, (FIXP_DBL)0x678dde8f, (FIXP_DBL)0x74ef0ed7,
  (FIXP_DBL)0x7d33f0da};
static INT FDKaacEnc_AutoToParcor(FIXP_DBL* __restrict input,
                                  FIXP_DBL* __restrict reflCoeff,
                                  const INT numOfCoeff) {
  INT i, j, scale = 0;
  FIXP_DBL tmp, parcorWorkBuffer[12];
  INT predictionGain = (INT)(1000);
  FIXP_DBL* __restrict workBuffer = parcorWorkBuffer;
  const FIXP_DBL autoCorr_0 = input[0];
  FDKmemclear(reflCoeff, numOfCoeff * sizeof(FIXP_DBL));
  if ((FIXP_DBL)input[0] == fixed(0.0)) {
    return (predictionGain);
  }
  FDKmemcpy(workBuffer, &input[1], numOfCoeff * sizeof(FIXP_DBL));
  for (i = 0; i < numOfCoeff; i++) {
    LONG sign = ((LONG)workBuffer[0] >> (32 - 1));
    tmp = (FIXP_DBL)((LONG)workBuffer[0] ^ sign);
    if (input[0] < tmp)
      break;
    tmp = (FIXP_DBL)((LONG)schur_div(tmp, input[0], 16) ^ (~sign));
    reflCoeff[i] = tmp;
    for (j = numOfCoeff - i - 1; j >= 0; j--) {
      FIXP_DBL accu1 = fMult(tmp, input[j]);
      FIXP_DBL accu2 = fMult(tmp, workBuffer[j]);
      workBuffer[j] += accu1;
      input[j] += accu2;
    }
    workBuffer++;
  }
  if (input[0] == 0) {
    input[0] = 1;
  }
  tmp = fMult((FIXP_DBL)((LONG)1000 << 21),
              fDivNorm(fAbs(autoCorr_0), fAbs(input[0]), &scale));
  if (fMultDiv2(autoCorr_0, input[0]) < fixed(0.0f)) {
    tmp = -tmp;
  }
  predictionGain = (LONG)scaleValue(tmp, scale - 21);
  return (predictionGain);
}

static INT FDKaacEnc_Search3(FIXP_DBL parcor) {
  INT i, index = 0;
  for (i = 0; i < 8; i++) {
    if (parcor > FDKaacEnc_tnsCoeff3Borders[i])
      index = i;
  }
  return (index - 4);
}

static INT FDKaacEnc_Search4(FIXP_DBL parcor) {
  INT i, index = 0;
  for (i = 0; i < 16; i++) {
    if (parcor > FDKaacEnc_tnsCoeff4Borders[i])
      index = i;
  }
  return (index - 8);
}

static void FDKaacEnc_Parcor2Index(const FIXP_DBL* parcor,
                                   INT* __restrict index, const INT order,
                                   const INT bitsPerCoeff) {
  INT i;
  for (i = 0; i < order; i++) {
    if (bitsPerCoeff == 3)
      index[i] = FDKaacEnc_Search3(parcor[i]);
    else
      index[i] = FDKaacEnc_Search4(parcor[i]);
  }
}

static inline INT FDKaacEnc_ScaleUpSpectrum(FIXP_DBL* dest, const FIXP_DBL* src,
                                            const INT startLine,
                                            const INT stopLine) {
  INT i, scale;
  FIXP_DBL maxVal = fixed(0.f);
  for (i = startLine; i < stopLine; i++) {
    maxVal = fixMax(maxVal, fixp_abs(src[i]));
  }
  scale = CountLeadingBits(maxVal);
  for (i = startLine; i < stopLine; i++) {
    dest[i] = src[i] << scale;
  }
  return scale;
}

static inline FIXP_DBL FDKaacEnc_CalcAutoCorrValue(const FIXP_DBL* spectrum,
                                                   const INT startLine,
                                                   const INT stopLine,
                                                   const INT lag,
                                                   const INT scale) {
  int i;
  FIXP_DBL result = fixed(0.f);
  if (lag == 0) {
    for (i = startLine; i < stopLine; i++) {
      result += (fPow2(spectrum[i]) >> scale);
    }
  }
  else {
    for (i = startLine; i < (stopLine - lag); i++) {
      result += (fMult(spectrum[i], spectrum[i + lag]) >> scale);
    }
  }
  return result;
}

static inline FIXP_DBL FDKaacEnc_AutoCorrNormFac(const FIXP_DBL value,
                                                 const INT scale, INT* sc) {
  FIXP_DBL retValue;
  FIXP_DBL A, B;
  if (scale >= 0) {
    A = value;
    B = fixed(0.0000000037252902984619140625f) >> fixMin(32 - 1, scale);
  }
  else {
    A = value >> fixMin(32 - 1, (-scale));
    B = fixed(0.0000000037252902984619140625f);
  }
  if (A > B) {
    int shift = 0;
    FIXP_DBL tmp = invSqrtNorm2(value, &shift);
    retValue = fMult(tmp, tmp);
    *sc += (2 * shift);
  }
  else {
    retValue = (FIXP_DBL)2147483647;
    *sc += scale + 28;
  }
  return retValue;
}

static void FDKaacEnc_MergedAutoCorrelation(
  const FIXP_DBL* spectrum, const INT isLowDelay,
  const FIXP_DBL acfWindow[2][12 + 3 + 1], const INT lpcStartLine[2],
  const INT lpcStopLine, const INT maxOrder, const INT acfSplit[2],
  FIXP_DBL* _rxx1, FIXP_DBL* _rxx2) {
  int i, idx0, idx1, idx2, idx3, idx4, lag;
  FIXP_DBL rxx1_0, rxx2_0, rxx3_0, rxx4_0;
  FIXP_DBL pSpectrum[1024];
  FDKmemclear(&_rxx1[0], sizeof(FIXP_DBL) * (maxOrder + 1));
  FDKmemclear(&_rxx2[0], sizeof(FIXP_DBL) * (maxOrder + 1));
  idx0 = idx1 = idx2 = idx3 = idx4 = 0;
  if ((acfSplit[1] == -1) || (acfSplit[0] == -1)) {
    idx0 = lpcStartLine[1];
    i = lpcStopLine - lpcStartLine[1];
    idx1 = idx0 + i / 4;
    idx2 = idx0 + i / 2;
    idx3 = idx0 + i * 3 / 4;
    idx4 = lpcStopLine;
  }
  else {
    i = (lpcStopLine - lpcStartLine[0]) / 3;
    idx0 = lpcStartLine[1];
    idx1 = lpcStartLine[0];
    idx2 = idx1 + i;
    idx3 = idx2 + i;
    idx4 = lpcStopLine;
  }
  INT sc1 = FDKaacEnc_ScaleUpSpectrum(pSpectrum, spectrum, idx0, idx1);
  INT sc2 = FDKaacEnc_ScaleUpSpectrum(pSpectrum, spectrum, idx1, idx2);
  INT sc3 = FDKaacEnc_ScaleUpSpectrum(pSpectrum, spectrum, idx2, idx3);
  INT sc4 = FDKaacEnc_ScaleUpSpectrum(pSpectrum, spectrum, idx3, idx4);
  INT nsc1, nsc2, nsc3, nsc4;
  for (nsc1 = 1; (1 << nsc1) < (idx1 - idx0); nsc1++)
    ;
  for (nsc2 = 1; (1 << nsc2) < (idx2 - idx1); nsc2++)
    ;
  for (nsc3 = 1; (1 << nsc3) < (idx3 - idx2); nsc3++)
    ;
  for (nsc4 = 1; (1 << nsc4) < (idx4 - idx3); nsc4++)
    ;
  rxx1_0 = FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx0, idx1, 0, nsc1);
  rxx2_0 = FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx1, idx2, 0, nsc2);
  rxx3_0 = FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx2, idx3, 0, nsc3);
  rxx4_0 = FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx3, idx4, 0, nsc4);
  if (rxx1_0 != fixed(0.f)) {
    INT sc_fac1 = -1;
    FIXP_DBL fac1 =
      FDKaacEnc_AutoCorrNormFac(rxx1_0, ((-2 * sc1) + nsc1), &sc_fac1);
    _rxx1[0] = scaleValue(fMult(rxx1_0, fac1), sc_fac1);
    if (isLowDelay) {
      for (lag = 1; lag <= maxOrder; lag++) {
        FIXP_DBL x1 =
          FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx0, idx1, lag, nsc1);
        _rxx1[lag] =
          fMult(scaleValue(fMult(x1, fac1), sc_fac1), acfWindow[1][lag]);
      }
    }
    else {
      for (lag = 1; lag <= maxOrder; lag++) {
        if ((3 * lag) <= maxOrder + 3) {
          FIXP_DBL x1 =
            FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx0, idx1, lag, nsc1);
          _rxx1[lag] =
            fMult(scaleValue(fMult(x1, fac1), sc_fac1), acfWindow[1][3 * lag]);
        }
      }
    }
  }
  if (!((rxx2_0 == fixed(0.f)) && (rxx3_0 == fixed(0.f)) &&
        (rxx4_0 == fixed(0.f)))) {
    FIXP_DBL fac2, fac3, fac4;
    fac2 = fac3 = fac4 = fixed(0.f);
    INT sc_fac2, sc_fac3, sc_fac4;
    sc_fac2 = sc_fac3 = sc_fac4 = 0;
    if (rxx2_0 != fixed(0.f)) {
      fac2 = FDKaacEnc_AutoCorrNormFac(rxx2_0, ((-2 * sc2) + nsc2), &sc_fac2);
      sc_fac2 -= 2;
    }
    if (rxx3_0 != fixed(0.f)) {
      fac3 = FDKaacEnc_AutoCorrNormFac(rxx3_0, ((-2 * sc3) + nsc3), &sc_fac3);
      sc_fac3 -= 2;
    }
    if (rxx4_0 != fixed(0.f)) {
      fac4 = FDKaacEnc_AutoCorrNormFac(rxx4_0, ((-2 * sc4) + nsc4), &sc_fac4);
      sc_fac4 -= 2;
    }
    _rxx2[0] = scaleValue(fMult(rxx2_0, fac2), sc_fac2) +
               scaleValue(fMult(rxx3_0, fac3), sc_fac3) +
               scaleValue(fMult(rxx4_0, fac4), sc_fac4);
    for (lag = 1; lag <= maxOrder; lag++) {
      FIXP_DBL x2 =
        scaleValue(
          fMult(FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx1, idx2, lag, nsc2),
                fac2),
          sc_fac2) +
        scaleValue(
          fMult(FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx2, idx3, lag, nsc3),
                fac3),
          sc_fac3) +
        scaleValue(
          fMult(FDKaacEnc_CalcAutoCorrValue(pSpectrum, idx3, idx4, lag, nsc4),
                fac4),
          sc_fac4);
      _rxx2[lag] = fMult(x2, acfWindow[0][lag]);
    }
  }
}

INT FDKaacEnc_TnsDetect(TNS_DATA* tnsData, const TNS_CONFIG* tC,
                        TNS_INFO* tnsInfo, INT sfbCnt, FIXP_DBL* spectrum,
                        INT subBlockNumber, INT blockType) {
  FIXP_DBL rxx1[12 + 1];
  FIXP_DBL rxx2[12 + 1];
  FIXP_DBL parcor_tmp[12];
  int i;
  TNS_SUBBLOCK_INFO* tsbi =
    (blockType == 2) ? &tnsData->dataRaw.Short.subBlockInfo[subBlockNumber]
                     : &tnsData->dataRaw.Long.subBlockInfo;
  tnsData->filtersMerged = 0;
  tsbi->tnsActive[0] = 0;
  tsbi->predictionGain[0] = 1000;
  tsbi->tnsActive[1] = 0;
  tsbi->predictionGain[1] = 1000;
  tnsInfo->numOfFilters[subBlockNumber] = 0;
  tnsInfo->coefRes[subBlockNumber] = tC->coefRes;
  for (i = 0; i < tC->maxOrder; i++) {
    tnsInfo->coef[subBlockNumber][0][i] = tnsInfo->coef[subBlockNumber][1][i] =
      0;
  }
  tnsInfo->length[subBlockNumber][0] = tnsInfo->length[subBlockNumber][1] = 0;
  tnsInfo->order[subBlockNumber][0] = tnsInfo->order[subBlockNumber][1] = 0;
  if ((tC->tnsActive) && (tC->maxOrder > 0)) {
    int sumSqrCoef;
    FDKaacEnc_MergedAutoCorrelation(
      spectrum, tC->isLowDelay, tC->acfWindow, tC->lpcStartLine,
      tC->lpcStopLine, tC->maxOrder, tC->confTab.acfSplit, rxx1, rxx2);
    tsbi->predictionGain[0] =
      FDKaacEnc_AutoToParcor(rxx2, parcor_tmp, tC->confTab.tnsLimitOrder[0]);
    FDKaacEnc_Parcor2Index(parcor_tmp, tnsInfo->coef[subBlockNumber][0],
                           tC->confTab.tnsLimitOrder[0], tC->coefRes);
    for (i = tC->confTab.tnsLimitOrder[0] - 1; i >= 0; i--) {
      if (tnsInfo->coef[subBlockNumber][0][i] != 0) {
        break;
      }
    }
    tnsInfo->order[subBlockNumber][0] = i + 1;
    sumSqrCoef = 0;
    for (; i >= 0; i--) {
      sumSqrCoef += tnsInfo->coef[subBlockNumber][0][i] *
                    tnsInfo->coef[subBlockNumber][0][i];
    }
    tnsInfo->direction[subBlockNumber][0] = tC->confTab.tnsFilterDirection[0];
    tnsInfo->length[subBlockNumber][0] = sfbCnt - tC->lpcStartBand[0];
    if ((tsbi->predictionGain[0] > tC->confTab.threshOn[0]) ||
        (sumSqrCoef > (tC->confTab.tnsLimitOrder[0] / 2 + 2))) {
      tsbi->tnsActive[0] = 1;
      tnsInfo->numOfFilters[subBlockNumber]++;
      if ((blockType != 2) && (tC->confTab.filterEnabled[1]) &&
          (tC->confTab.seperateFiltersAllowed)) {
        INT predGain = FDKaacEnc_AutoToParcor(rxx1, parcor_tmp,
                                              tC->confTab.tnsLimitOrder[1]);
        FDKaacEnc_Parcor2Index(parcor_tmp, tnsInfo->coef[subBlockNumber][1],
                               tC->confTab.tnsLimitOrder[1], tC->coefRes);
        for (i = tC->confTab.tnsLimitOrder[1] - 1; i >= 0; i--) {
          if (tnsInfo->coef[subBlockNumber][1][i] != 0) {
            break;
          }
        }
        tnsInfo->order[subBlockNumber][1] = i + 1;
        sumSqrCoef = 0;
        for (; i >= 0; i--) {
          sumSqrCoef += tnsInfo->coef[subBlockNumber][1][i] *
                        tnsInfo->coef[subBlockNumber][1][i];
        }
        tnsInfo->direction[subBlockNumber][1] =
          tC->confTab.tnsFilterDirection[1];
        tnsInfo->length[subBlockNumber][1] =
          tC->lpcStartBand[0] - tC->lpcStartBand[1];
        if (((predGain > tC->confTab.threshOn[1]) &&
             (predGain < (16000 * tC->confTab.tnsLimitOrder[1]))) ||
            ((sumSqrCoef > 9) &&
             (sumSqrCoef < 22 * tC->confTab.tnsLimitOrder[1]))) {
          tsbi->tnsActive[1] = 1;
          sumSqrCoef = 0;
          for (i = 0; i < tC->confTab.tnsLimitOrder[1]; i++) {
            sumSqrCoef += FDKabs(tnsInfo->coef[subBlockNumber][0][i] -
                                 tnsInfo->coef[subBlockNumber][1][i]);
          }
          if ((sumSqrCoef < 2) && (tnsInfo->direction[subBlockNumber][1] ==
                                   tnsInfo->direction[subBlockNumber][0])) {
            tnsData->filtersMerged = 1;
            tnsInfo->length[subBlockNumber][0] = sfbCnt - tC->lpcStartBand[1];
            for (; i < tnsInfo->order[subBlockNumber][0]; i++) {
              if (FDKabs(tnsInfo->coef[subBlockNumber][0][i]) > 1) {
                break;
              }
            }
            for (i--; i >= 0; i--) {
              if (tnsInfo->coef[subBlockNumber][0][i] != 0) {
                break;
              }
            }
            if (i < tnsInfo->order[subBlockNumber][0]) {
              tnsInfo->order[subBlockNumber][0] = i + 1;
            }
          }
          else {
            tnsInfo->numOfFilters[subBlockNumber]++;
          }
        }
        tsbi->predictionGain[1] = predGain;
      }
    }
  }
  return 0;
}
}

/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  See licenses/fdk-aac/LICENSE.txt and TNS_DETECTION_CHANGES.md.
*/
