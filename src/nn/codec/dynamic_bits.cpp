/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/aac_huffman.hpp"
#include "nn/codec/dynamic_bits.hpp"

namespace nn::codec {
using INT = int;
using UINT = uint32_t;
using SHORT = int16_t;
static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int fixp_abs(int value) {
  return value < 0 ? int32_t(0U - uint32_t(value)) : value;
}

extern const uint8_t FDKaacEnc_huff_ltabscf[121];
static int FDKaacEnc_bitCountScalefactorDelta(int delta) {
  return FDKaacEnc_huff_ltabscf[delta + 60];
}

enum codeBookNo {
  CODE_BOOK_ZERO_NO = 0,
  CODE_BOOK_1_NO = 1,
  CODE_BOOK_2_NO = 2,
  CODE_BOOK_3_NO = 3,
  CODE_BOOK_4_NO = 4,
  CODE_BOOK_5_NO = 5,
  CODE_BOOK_6_NO = 6,
  CODE_BOOK_7_NO = 7,
  CODE_BOOK_8_NO = 8,
  CODE_BOOK_9_NO = 9,
  CODE_BOOK_10_NO = 10,
  CODE_BOOK_ESC_NO = 11,
  CODE_BOOK_RES_NO = 12,
  CODE_BOOK_PNS_NO = 13,
  CODE_BOOK_IS_OUT_OF_PHASE_NO = 14,
  CODE_BOOK_IS_IN_PHASE_NO = 15
};
enum codeBookNdx {
  CODE_BOOK_ZERO_NDX,
  CODE_BOOK_1_NDX,
  CODE_BOOK_2_NDX,
  CODE_BOOK_3_NDX,
  CODE_BOOK_4_NDX,
  CODE_BOOK_5_NDX,
  CODE_BOOK_6_NDX,
  CODE_BOOK_7_NDX,
  CODE_BOOK_8_NDX,
  CODE_BOOK_9_NDX,
  CODE_BOOK_10_NDX,
  CODE_BOOK_ESC_NDX,
  CODE_BOOK_RES_NDX,
  CODE_BOOK_PNS_NDX,
  CODE_BOOK_IS_OUT_OF_PHASE_NDX,
  CODE_BOOK_IS_IN_PHASE_NDX,
  NUMBER_OF_CODE_BOOKS
};
enum codeBookLav {
  CODE_BOOK_ZERO_LAV = 0,
  CODE_BOOK_1_LAV = 1,
  CODE_BOOK_2_LAV = 1,
  CODE_BOOK_3_LAV = 2,
  CODE_BOOK_4_LAV = 2,
  CODE_BOOK_5_LAV = 4,
  CODE_BOOK_6_LAV = 4,
  CODE_BOOK_7_LAV = 7,
  CODE_BOOK_8_LAV = 7,
  CODE_BOOK_9_LAV = 12,
  CODE_BOOK_10_LAV = 12,
  CODE_BOOK_ESC_LAV = 16,
  CODE_BOOK_SCF_LAV = 60,
  CODE_BOOK_PNS_LAV = 60
};
extern const SHORT FDKaacEnc_sideInfoTabLong[51 + 1];
const SHORT FDKaacEnc_sideInfoTabLong[51 + 1] = {
  0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009,
  0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009,
  0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009,
  0x0009, 0x0009, 0x0009, 0x0009, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e,
  0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e,
  0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e};
extern const SHORT FDKaacEnc_sideInfoTabShort[15 + 1];
const SHORT FDKaacEnc_sideInfoTabShort[15 + 1] = {
  0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x0007, 0x000a,
  0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000a, 0x000d, 0x000d};
typedef INT (*lookUpTable)[CODE_BOOK_ESC_NDX + 1];
static INT FDKaacEnc_getSideInfoBits(const SECTION_INFO* const huffsection,
                                     const SHORT* const sideInfoTab,
                                     const INT useHCR) {
  INT sideInfoBits;
  if (useHCR &&
      ((huffsection->codeBook == 11) || (huffsection->codeBook >= 16))) {
    sideInfoBits = 5;
  }
  else {
    sideInfoBits = sideInfoTab[huffsection->sfbCnt];
  }
  return (sideInfoBits);
}

static void FDKaacEnc_buildBitLookUp(const SHORT* const quantSpectrum,
                                     const INT maxSfb,
                                     const INT* const sfbOffset,
                                     const UINT* const sfbMax,
                                     INT bitLookUp[51][CODE_BOOK_ESC_NDX + 1],
                                     SECTION_INFO* const huffsection) {
  INT i, sfbWidth;
  for (i = 0; i < maxSfb; i++) {
    huffsection[i].sfbCnt = 1;
    huffsection[i].sfbStart = i;
    huffsection[i].sectionBits = 536870911;
    huffsection[i].codeBook = -1;
    sfbWidth = sfbOffset[i + 1] - sfbOffset[i];
    FDKaacEnc_bitCount(quantSpectrum + sfbOffset[i], sfbWidth, sfbMax[i],
                       bitLookUp[i]);
  }
}

static INT FDKaacEnc_findBestBook(const INT* const bc, INT* const book,
                                  const INT) {
  INT minBits = 536870911, j;
  int end = CODE_BOOK_ESC_NDX;
  for (j = 0; j <= end; j++) {
    if (bc[j] < minBits) {
      minBits = bc[j];
      *book = j;
    }
  }
  return (minBits);
}

static INT FDKaacEnc_findMinMergeBits(const INT* const bc1,
                                      const INT* const bc2, const INT) {
  INT minBits = 536870911, j;
  int end = CODE_BOOK_ESC_NDX;
  for (j = 0; j <= end; j++) {
    if (bc1[j] + bc2[j] < minBits) {
      minBits = bc1[j] + bc2[j];
    }
  }
  return (minBits);
}

static void FDKaacEnc_mergeBitLookUp(INT* const bc1, const INT* const bc2) {
  int j;
  for (j = 0; j <= CODE_BOOK_ESC_NDX; j++) {
    bc1[j] = fixMin(bc1[j] + bc2[j], 536870911);
  }
}

static INT FDKaacEnc_findMaxMerge(const INT* const mergeGainLookUp,
                                  const SECTION_INFO* const huffsection,
                                  const INT maxSfb, INT* const maxNdx) {
  INT i, maxMergeGain = 0;
  for (i = 0; i + huffsection[i].sfbCnt < maxSfb; i += huffsection[i].sfbCnt) {
    if (mergeGainLookUp[i] > maxMergeGain) {
      maxMergeGain = mergeGainLookUp[i];
      *maxNdx = i;
    }
  }
  return (maxMergeGain);
}

static INT
FDKaacEnc_CalcMergeGain(const SECTION_INFO* const huffsection,
                        const INT bitLookUp[51][CODE_BOOK_ESC_NDX + 1],
                        const SHORT* const sideInfoTab, const INT ndx1,
                        const INT ndx2, const INT useVCB11) {
  INT MergeGain, MergeBits, SplitBits;
  MergeBits =
    sideInfoTab[huffsection[ndx1].sfbCnt + huffsection[ndx2].sfbCnt] +
    FDKaacEnc_findMinMergeBits(bitLookUp[ndx1], bitLookUp[ndx2], useVCB11);
  SplitBits = huffsection[ndx1].sectionBits + huffsection[ndx2].sectionBits;
  MergeGain = SplitBits - MergeBits;
  if ((huffsection[ndx1].codeBook == CODE_BOOK_PNS_NO) ||
      (huffsection[ndx2].codeBook == CODE_BOOK_PNS_NO) ||
      (huffsection[ndx1].codeBook == CODE_BOOK_IS_OUT_OF_PHASE_NO) ||
      (huffsection[ndx2].codeBook == CODE_BOOK_IS_OUT_OF_PHASE_NO) ||
      (huffsection[ndx1].codeBook == CODE_BOOK_IS_IN_PHASE_NO) ||
      (huffsection[ndx2].codeBook == CODE_BOOK_IS_IN_PHASE_NO)) {
    MergeGain = -1;
  }
  return (MergeGain);
}

static void FDKaacEnc_gmStage0(SECTION_INFO* const __restrict huffsection,
                               const INT bitLookUp[51][CODE_BOOK_ESC_NDX + 1],
                               const INT maxSfb, const INT* const noiseNrg,
                               const INT* const isBook) {
  INT i;
  for (i = 0; i < maxSfb; i++) {
    if (huffsection[i].sectionBits == 536870911) {
      if (noiseNrg[i] != int32_t(0x80000000U)) {
        huffsection[i].codeBook = CODE_BOOK_PNS_NO;
        huffsection[i].sectionBits = 0;
      }
      else if (isBook[i]) {
        huffsection[i].codeBook = isBook[i];
        huffsection[i].sectionBits = 0;
      }
      else {
        huffsection[i].sectionBits =
          FDKaacEnc_findBestBook(bitLookUp[i], &(huffsection[i].codeBook), 0);
      }
    }
  }
}

static void FDKaacEnc_gmStage1(SECTION_INFO* const __restrict huffsection,
                               INT bitLookUp[51][CODE_BOOK_ESC_NDX + 1],
                               const INT maxSfb, const SHORT* const sideInfoTab,
                               const INT useVCB11) {
  INT mergeStart = 0, mergeEnd;
  do {
    for (mergeEnd = mergeStart + 1; mergeEnd < maxSfb; mergeEnd++) {
      if (huffsection[mergeStart].codeBook != huffsection[mergeEnd].codeBook)
        break;
      huffsection[mergeStart].sfbCnt++;
      huffsection[mergeStart].sectionBits += huffsection[mergeEnd].sectionBits;
      FDKaacEnc_mergeBitLookUp(bitLookUp[mergeStart], bitLookUp[mergeEnd]);
    }
    huffsection[mergeStart].sectionBits += FDKaacEnc_getSideInfoBits(
      &huffsection[mergeStart], sideInfoTab, useVCB11);
    huffsection[mergeEnd - 1].sfbStart = huffsection[mergeStart].sfbStart;
    mergeStart = mergeEnd;
  } while (mergeStart < maxSfb);
}

static void FDKaacEnc_gmStage2(SECTION_INFO* const __restrict huffsection,
                               INT* const __restrict mergeGainLookUp,
                               INT bitLookUp[51][CODE_BOOK_ESC_NDX + 1],
                               const INT maxSfb, const SHORT* const sideInfoTab,
                               const INT useVCB11) {
  INT i;
  for (i = 0; i + huffsection[i].sfbCnt < maxSfb; i += huffsection[i].sfbCnt) {
    mergeGainLookUp[i] =
      FDKaacEnc_CalcMergeGain(huffsection, bitLookUp, sideInfoTab, i,
                              i + huffsection[i].sfbCnt, useVCB11);
  }
  while (1) {
    INT maxMergeGain, maxNdx = 0, maxNdxNext, maxNdxLast;
    maxMergeGain =
      FDKaacEnc_findMaxMerge(mergeGainLookUp, huffsection, maxSfb, &maxNdx);
    if (maxMergeGain <= 0)
      break;
    maxNdxNext = maxNdx + huffsection[maxNdx].sfbCnt;
    huffsection[maxNdx].sfbCnt += huffsection[maxNdxNext].sfbCnt;
    huffsection[maxNdx].sectionBits +=
      huffsection[maxNdxNext].sectionBits - maxMergeGain;
    FDKaacEnc_mergeBitLookUp(bitLookUp[maxNdx], bitLookUp[maxNdxNext]);
    if (maxNdx != 0) {
      maxNdxLast = huffsection[maxNdx - 1].sfbStart;
      mergeGainLookUp[maxNdxLast] = FDKaacEnc_CalcMergeGain(
        huffsection, bitLookUp, sideInfoTab, maxNdxLast, maxNdx, useVCB11);
    }
    maxNdxNext = maxNdx + huffsection[maxNdx].sfbCnt;
    huffsection[maxNdxNext - 1].sfbStart = huffsection[maxNdx].sfbStart;
    if (maxNdxNext < maxSfb)
      mergeGainLookUp[maxNdx] = FDKaacEnc_CalcMergeGain(
        huffsection, bitLookUp, sideInfoTab, maxNdx, maxNdxNext, useVCB11);
  }
}

static void FDKaacEnc_noiselessCounter(
  SECTION_DATA* const __restrict sectionData, INT mergeGainLookUp[51],
  INT bitLookUp[51][CODE_BOOK_ESC_NDX + 1], const SHORT* const quantSpectrum,
  const UINT* const maxValueInSfb, const INT* const sfbOffset,
  const INT blockType, const INT* const noiseNrg, const INT* const isBook,
  const INT useVCB11) {
  INT grpNdx, i;
  const SHORT* sideInfoTab = nullptr;
  SECTION_INFO* huffsection;
  switch (blockType) {
    case 0:
    case 1:
    case 3:
      sideInfoTab = FDKaacEnc_sideInfoTabLong;
      break;
    case 2:
      sideInfoTab = FDKaacEnc_sideInfoTabShort;
      break;
  }
  sectionData->noOfSections = 0;
  sectionData->huffmanBits = 0;
  sectionData->sideInfoBits = 0;
  if (sectionData->maxSfbPerGroup == 0)
    return;
  for (grpNdx = 0; grpNdx < sectionData->sfbCnt;
       grpNdx += sectionData->sfbPerGroup) {
    huffsection = sectionData->huffsection + sectionData->noOfSections;
    FDKaacEnc_buildBitLookUp(quantSpectrum, sectionData->maxSfbPerGroup,
                             sfbOffset + grpNdx, maxValueInSfb + grpNdx,
                             bitLookUp, huffsection);
    FDKaacEnc_gmStage0(huffsection, bitLookUp, sectionData->maxSfbPerGroup,
                       noiseNrg + grpNdx, isBook + grpNdx);
    FDKaacEnc_gmStage1(huffsection, bitLookUp, sectionData->maxSfbPerGroup,
                       sideInfoTab, useVCB11);
    FDKaacEnc_gmStage2(huffsection, mergeGainLookUp, bitLookUp,
                       sectionData->maxSfbPerGroup, sideInfoTab, useVCB11);
    for (i = 0; i < sectionData->maxSfbPerGroup; i += huffsection[i].sfbCnt) {
      if ((huffsection[i].codeBook == CODE_BOOK_PNS_NO) ||
          (huffsection[i].codeBook == CODE_BOOK_IS_OUT_OF_PHASE_NO) ||
          (huffsection[i].codeBook == CODE_BOOK_IS_IN_PHASE_NO)) {
        huffsection[i].sectionBits = 0;
      }
      else {
        FDKaacEnc_findBestBook(bitLookUp[i], &(huffsection[i].codeBook),
                               useVCB11);
        sectionData->huffmanBits +=
          huffsection[i].sectionBits -
          FDKaacEnc_getSideInfoBits(&huffsection[i], sideInfoTab, useVCB11);
      }
      huffsection[i].sfbStart += grpNdx;
      sectionData->sideInfoBits +=
        FDKaacEnc_getSideInfoBits(&huffsection[i], sideInfoTab, useVCB11);
      sectionData->huffsection[sectionData->noOfSections++] = huffsection[i];
    }
  }
}

static void FDKaacEnc_scfCount(const INT* const scalefacGain,
                               const UINT* const maxValueInSfb,
                               SECTION_DATA* const __restrict sectionData,
                               const INT* const isScale) {
  INT i, j, k, m, n;
  INT lastValScf = 0;
  INT deltaScf = 0;
  INT found = 0;
  INT scfSkipCounter = 0;
  INT lastValIs = 0;
  sectionData->scalefacBits = 0;
  if (scalefacGain == nullptr)
    return;
  sectionData->firstScf = 0;
  for (i = 0; i < sectionData->noOfSections; i++) {
    if (sectionData->huffsection[i].codeBook != CODE_BOOK_ZERO_NO) {
      sectionData->firstScf = sectionData->huffsection[i].sfbStart;
      lastValScf = scalefacGain[sectionData->firstScf];
      break;
    }
  }
  for (i = 0; i < sectionData->noOfSections; i++) {
    if ((sectionData->huffsection[i].codeBook ==
         CODE_BOOK_IS_OUT_OF_PHASE_NO) ||
        (sectionData->huffsection[i].codeBook == CODE_BOOK_IS_IN_PHASE_NO)) {
      for (j = sectionData->huffsection[i].sfbStart;
           j < sectionData->huffsection[i].sfbStart +
                 sectionData->huffsection[i].sfbCnt;
           j++) {
        INT deltaIs = isScale[j] - lastValIs;
        lastValIs = isScale[j];
        sectionData->scalefacBits +=
          FDKaacEnc_bitCountScalefactorDelta(deltaIs);
      }
    }
    else if ((sectionData->huffsection[i].codeBook != CODE_BOOK_ZERO_NO) &&
             (sectionData->huffsection[i].codeBook != CODE_BOOK_PNS_NO)) {
      INT tmp = sectionData->huffsection[i].sfbStart +
                sectionData->huffsection[i].sfbCnt;
      for (j = sectionData->huffsection[i].sfbStart; j < tmp; j++) {
        if (maxValueInSfb[j] == 0) {
          found = 0;
          if (scfSkipCounter == 0) {
            if (j == (tmp - 1))
              found = 0;
            else {
              for (k = (j + 1); k < tmp; k++) {
                if (maxValueInSfb[k] != 0) {
                  found = 1;
                  if ((fixp_abs(scalefacGain[k] - lastValScf)) <=
                      CODE_BOOK_SCF_LAV)
                    deltaScf = 0;
                  else {
                    deltaScf = lastValScf - scalefacGain[j];
                    lastValScf = scalefacGain[j];
                    scfSkipCounter = 0;
                  }
                  break;
                }
                scfSkipCounter++;
              }
            }
            for (m = (i + 1); (m < sectionData->noOfSections) && (found == 0);
                 m++) {
              if ((sectionData->huffsection[m].codeBook != CODE_BOOK_ZERO_NO) &&
                  (sectionData->huffsection[m].codeBook != CODE_BOOK_PNS_NO)) {
                INT end = sectionData->huffsection[m].sfbStart +
                          sectionData->huffsection[m].sfbCnt;
                for (n = sectionData->huffsection[m].sfbStart; n < end; n++) {
                  if (maxValueInSfb[n] != 0) {
                    found = 1;
                    if (fixp_abs(scalefacGain[n] - lastValScf) <=
                        CODE_BOOK_SCF_LAV)
                      deltaScf = 0;
                    else {
                      deltaScf = lastValScf - scalefacGain[j];
                      lastValScf = scalefacGain[j];
                      scfSkipCounter = 0;
                    }
                    break;
                  }
                  scfSkipCounter++;
                }
              }
            }
            if (found == 0) {
              deltaScf = 0;
              scfSkipCounter = 0;
            }
          }
          else {
            deltaScf = 0;
            scfSkipCounter--;
          }
        }
        else {
          deltaScf = lastValScf - scalefacGain[j];
          lastValScf = scalefacGain[j];
        }
        sectionData->scalefacBits +=
          FDKaacEnc_bitCountScalefactorDelta(deltaScf);
      }
    }
  }
}

static void FDKaacEnc_noiseCount(SECTION_DATA* const __restrict sectionData,
                                 const INT* const noiseNrg) {
  INT noisePCMFlag = 1;
  INT lastValPns = 0, deltaPns;
  int i, j;
  sectionData->noiseNrgBits = 0;
  for (i = 0; i < sectionData->noOfSections; i++) {
    if (sectionData->huffsection[i].codeBook == CODE_BOOK_PNS_NO) {
      int sfbStart = sectionData->huffsection[i].sfbStart;
      int sfbEnd = sfbStart + sectionData->huffsection[i].sfbCnt;
      for (j = sfbStart; j < sfbEnd; j++) {
        if (noisePCMFlag) {
          sectionData->noiseNrgBits += 9;
          lastValPns = noiseNrg[j];
          noisePCMFlag = 0;
        }
        else {
          deltaPns = noiseNrg[j] - lastValPns;
          lastValPns = noiseNrg[j];
          sectionData->noiseNrgBits +=
            FDKaacEnc_bitCountScalefactorDelta(deltaPns);
        }
      }
    }
  }
}

INT FDKaacEnc_dynBitCount(BITCNTR_STATE* const hBC,
                          const SHORT* const quantSpectrum,
                          const UINT* const maxValueInSfb,
                          const INT* const scalefac, const INT blockType,
                          const INT sfbCnt, const INT maxSfbPerGroup,
                          const INT sfbPerGroup, const INT* const sfbOffset,
                          SECTION_DATA* const __restrict sectionData,
                          const INT* const noiseNrg, const INT* const isBook,
                          const INT* const isScale, const UINT syntaxFlags) {
  sectionData->blockType = blockType;
  sectionData->sfbCnt = sfbCnt;
  sectionData->sfbPerGroup = sfbPerGroup;
  sectionData->noOfGroups = sfbCnt / sfbPerGroup;
  sectionData->maxSfbPerGroup = maxSfbPerGroup;
  FDKaacEnc_noiselessCounter(sectionData, hBC->mergeGainLookUp,
                             (lookUpTable)hBC->bitLookUp, quantSpectrum,
                             maxValueInSfb, sfbOffset, blockType, noiseNrg,
                             isBook, (syntaxFlags & 1) ? 1 : 0);
  FDKaacEnc_scfCount(scalefac, maxValueInSfb, sectionData, isScale);
  FDKaacEnc_noiseCount(sectionData, noiseNrg);
  return (sectionData->huffmanBits + sectionData->sideInfoBits +
          sectionData->scalefacBits + sectionData->noiseNrgBits);
}
}
