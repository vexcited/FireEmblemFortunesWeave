#include "nn/codec/tns.hpp"

namespace nn::codec {
using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using INT = int32_t;
void FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);
static int32_t fixp_abs(int32_t value) {
  return value < 0 ? int32_t(0U - uint32_t(value)) : value;
}
static int32_t FDKabs(int32_t value) {
  return fixp_abs(value);
}
static int32_t fixMax(int32_t a, int32_t b) {
  return a > b ? a : b;
}
static int CountLeadingBits(int32_t value) {
  return value ? __builtin_clrsb(value) : 0;
}
static int32_t fMult(int32_t a, int32_t b) {
  return int32_t(uint32_t((int64_t(a) * b) >> 32) << 1);
}
static int32_t fMultAddDiv2(int32_t value, int16_t a, int32_t b) {
  return int32_t(uint32_t(value) + uint32_t((int64_t(a) * b) >> 16));
}
extern const FIXP_DBL FDKaacEnc_tnsEncCoeff3[8];
const FIXP_DBL FDKaacEnc_tnsEncCoeff3[8] = {
  (FIXP_DBL)0x81f1d201, (FIXP_DBL)0x91261481, (FIXP_DBL)0xadb92301,
  (FIXP_DBL)0xd438af00, (FIXP_DBL)0x00000000, (FIXP_DBL)0x37898080,
  (FIXP_DBL)0x64130dff, (FIXP_DBL)0x7cca6fff};
extern const FIXP_DBL FDKaacEnc_tnsEncCoeff4[16];
const FIXP_DBL FDKaacEnc_tnsEncCoeff4[16] = {
  (FIXP_DBL)0x808bc881, (FIXP_DBL)0x84e2e581, (FIXP_DBL)0x8d6b4a01,
  (FIXP_DBL)0x99da9201, (FIXP_DBL)0xa9c45701, (FIXP_DBL)0xbc9dde81,
  (FIXP_DBL)0xd1c2d500, (FIXP_DBL)0xe87ae540, (FIXP_DBL)0x00000000,
  (FIXP_DBL)0x1a9cd9c0, (FIXP_DBL)0x340ff240, (FIXP_DBL)0x4b3c8bff,
  (FIXP_DBL)0x5f1f5e7f, (FIXP_DBL)0x6ed9eb7f, (FIXP_DBL)0x79bc387f,
  (FIXP_DBL)0x7f4c7e7f};
static void FDKaacEnc_Index2Parcor(const INT* index,
                                   FIXP_DBL* __restrict parcor, const INT order,
                                   const INT bitsPerCoeff) {
  INT i;
  for (i = 0; i < order; i++)
    parcor[i] = bitsPerCoeff == 4 ? FDKaacEnc_tnsEncCoeff4[index[i] + 8]
                                  : FDKaacEnc_tnsEncCoeff3[index[i] + 4];
}
static INT FDKaacEnc_ParcorToLpc(const FIXP_DBL* reflCoeff,
                                 FIXP_DBL* __restrict LpcCoeff,
                                 const INT numOfCoeff,
                                 FIXP_DBL* __restrict workBuffer) {
  INT i, j;
  INT shiftval, par2LpcShiftVal = 6;
  FIXP_DBL maxVal = 0;
  LpcCoeff[0] = reflCoeff[0] >> par2LpcShiftVal;
  for (i = 1; i < numOfCoeff; i++) {
    for (j = 0; j < i; j++) {
      workBuffer[j] = LpcCoeff[i - 1 - j];
    }
    for (j = 0; j < i; j++) {
      LpcCoeff[j] += fMult(reflCoeff[i], workBuffer[j]);
    }
    LpcCoeff[i] = reflCoeff[i] >> par2LpcShiftVal;
  }
  for (i = 0; i < numOfCoeff; i++) {
    maxVal = fixMax(maxVal, (FIXP_DBL)fixp_abs(LpcCoeff[i]));
  }
  shiftval = CountLeadingBits(maxVal);
  shiftval = (shiftval >= par2LpcShiftVal) ? par2LpcShiftVal : shiftval;
  for (i = 0; i < numOfCoeff; i++)
    LpcCoeff[i] = LpcCoeff[i] << shiftval;
  return (par2LpcShiftVal - shiftval);
}
static void FDKaacEnc_AnalysisFilter(FIXP_DBL* __restrict signal,
                                     const INT numOfLines,
                                     const FIXP_DBL* predictorCoeff,
                                     const INT order, const INT lpcGainFactor) {
  FIXP_DBL statusVar[12];
  INT i, j;
  const INT shift = lpcGainFactor + 1;
  FIXP_DBL tmp;
  if (order > 0) {
    INT idx = 0;
    FIXP_SGL coeff[2 * 12];
    const FIXP_SGL* pCoeff;
    for (i = 0; i < order; i++) {
      coeff[i] = int16_t((predictorCoeff[i]) >> 16);
    }
    FDKmemcpy(&coeff[order], coeff, order * sizeof(FIXP_SGL));
    FDKmemclear(statusVar, order * sizeof(FIXP_DBL));
    for (j = 0; j < numOfLines; j++) {
      pCoeff = &coeff[(order - idx)];
      tmp = 0;
      for (i = 0; i < order; i++) {
        tmp = fMultAddDiv2(tmp, pCoeff[i], statusVar[i]);
      }
      if (--idx < 0) {
        idx = order - 1;
      }
      statusVar[idx] = signal[j];
      signal[j] = (tmp << shift) + signal[j];
    }
  }
}
void FDKaacEnc_TnsSync(TNS_DATA* tnsDataDest, const TNS_DATA* tnsDataSrc,
                       TNS_INFO* tnsInfoDest, TNS_INFO* tnsInfoSrc,
                       const INT blockTypeDest, const INT blockTypeSrc,
                       const TNS_CONFIG* tC) {
  int i, w, absDiff, nWindows;
  TNS_SUBBLOCK_INFO* sbInfoDest;
  const TNS_SUBBLOCK_INFO* sbInfoSrc;
  if ((blockTypeSrc == 2 && blockTypeDest != 2) ||
      (blockTypeDest == 2 && blockTypeSrc != 2)) {
    return;
  }
  if (blockTypeDest != 2) {
    sbInfoDest = &tnsDataDest->dataRaw.Long.subBlockInfo;
    sbInfoSrc = &tnsDataSrc->dataRaw.Long.subBlockInfo;
    nWindows = 1;
  }
  else {
    sbInfoDest = &tnsDataDest->dataRaw.Short.subBlockInfo[0];
    sbInfoSrc = &tnsDataSrc->dataRaw.Short.subBlockInfo[0];
    nWindows = 8;
  }
  for (w = 0; w < nWindows; w++) {
    const TNS_SUBBLOCK_INFO* pSbInfoSrcW = sbInfoSrc + w;
    TNS_SUBBLOCK_INFO* pSbInfoDestW = sbInfoDest + w;
    INT doSync = 1, absDiffSum = 0;
    if (pSbInfoDestW->tnsActive[0] || pSbInfoSrcW->tnsActive[0]) {
      for (i = 0; i < tC->maxOrder; i++) {
        absDiff =
          FDKabs(tnsInfoDest->coef[w][0][i] - tnsInfoSrc->coef[w][0][i]);
        absDiffSum += absDiff;
        if ((absDiff > 1) || (absDiffSum > 2)) {
          doSync = 0;
          break;
        }
      }
      if (doSync) {
        if (pSbInfoSrcW->tnsActive[0]) {
          if ((!pSbInfoDestW->tnsActive[0]) ||
              ((pSbInfoDestW->tnsActive[0]) &&
               (tnsInfoDest->numOfFilters[w] > tnsInfoSrc->numOfFilters[w]))) {
            pSbInfoDestW->tnsActive[0] = tnsInfoDest->numOfFilters[w] = 1;
          }
          tnsDataDest->filtersMerged = tnsDataSrc->filtersMerged;
          tnsInfoDest->order[w][0] = tnsInfoSrc->order[w][0];
          tnsInfoDest->length[w][0] = tnsInfoSrc->length[w][0];
          tnsInfoDest->direction[w][0] = tnsInfoSrc->direction[w][0];
          tnsInfoDest->coefCompress[w][0] = tnsInfoSrc->coefCompress[w][0];
          for (i = 0; i < tC->maxOrder; i++) {
            tnsInfoDest->coef[w][0][i] = tnsInfoSrc->coef[w][0][i];
          }
        }
        else
          pSbInfoDestW->tnsActive[0] = tnsInfoDest->numOfFilters[w] = 0;
      }
    }
  }
}
INT FDKaacEnc_TnsEncode(TNS_INFO* tnsInfo, TNS_DATA* tnsData, const INT,
                        const TNS_CONFIG* tC, const INT, FIXP_DBL* spectrum,
                        const INT subBlockNumber, const INT blockType) {
  INT i, startLine, stopLine;
  if (((blockType == 2) &&
       (!tnsData->dataRaw.Short.subBlockInfo[subBlockNumber].tnsActive[0])) ||
      ((blockType != 2) &&
       (!tnsData->dataRaw.Long.subBlockInfo.tnsActive[0]))) {
    return 1;
  }
  startLine =
    (tnsData->filtersMerged) ? tC->lpcStartLine[1] : tC->lpcStartLine[0];
  stopLine = tC->lpcStopLine;
  for (i = 0; i < tnsInfo->numOfFilters[subBlockNumber]; i++) {
    if (tnsInfo->order[subBlockNumber][i] <= 0) {
      startLine = tC->lpcStartLine[1];
      stopLine = tC->lpcStartLine[0];
      continue;
    }
    INT lpcGainFactor;
    FIXP_DBL LpcCoeff[12];
    FIXP_DBL workBuffer[12];
    FIXP_DBL parcor_tmp[12];
    FDKaacEnc_Index2Parcor(tnsInfo->coef[subBlockNumber][i], parcor_tmp,
                           tnsInfo->order[subBlockNumber][i], tC->coefRes);
    lpcGainFactor = FDKaacEnc_ParcorToLpc(
      parcor_tmp, LpcCoeff, tnsInfo->order[subBlockNumber][i], workBuffer);
    FDKaacEnc_AnalysisFilter(&spectrum[startLine], stopLine - startLine,
                             LpcCoeff, tnsInfo->order[subBlockNumber][i],
                             lpcGainFactor);
    startLine = tC->lpcStartLine[1];
    stopLine = tC->lpcStartLine[0];
  }
  return (0);
}
}

/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  See licenses/fdk-aac/LICENSE.txt and TNS_CHANGES.md.
*/
