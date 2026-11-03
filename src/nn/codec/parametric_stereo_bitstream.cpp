/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/parametric_stereo_bitstream.hpp"

namespace nn::codec {

void FDKmemcpy(void*, const void*, unsigned int);
using Huffman = const int8_t (*)[2];

extern const uint8_t FDK_sbrDecoder_aFixNoEnvDecode[4];
const uint8_t FDK_sbrDecoder_aFixNoEnvDecode[4] = {0, 1, 2, 4};
extern const uint8_t FDK_sbrDecoder_aNoIidBins[3];
const uint8_t FDK_sbrDecoder_aNoIidBins[3] = {((10)), ((20)), ((34))};
extern const uint8_t FDK_sbrDecoder_aNoIccBins[3];
const uint8_t FDK_sbrDecoder_aNoIccBins[3] = {((10)), ((20)), ((34))};
extern const int8_t aBookPsIidTimeDecode[28][2];
const int8_t aBookPsIidTimeDecode[28][2] = {
  {-64, 1},   {-65, 2},   {-63, 3},   {-66, 4},  {-62, 5},   {-67, 6},
  {-61, 7},   {-68, 8},   {-60, 9},   {-69, 10}, {-59, 11},  {-70, 12},
  {-58, 13},  {-57, 14},  {-71, 15},  {16, 17},  {-56, -72}, {18, 21},
  {19, 20},   {-55, -78}, {-77, -76}, {22, 25},  {23, 24},   {-75, -74},
  {-73, -54}, {26, 27},   {-53, -52}, {-51, -50}};
extern const int8_t aBookPsIidFreqDecode[28][2];
const int8_t aBookPsIidFreqDecode[28][2] = {
  {-64, 1},   {2, 3},     {-63, -65}, {4, 5},    {-62, -66}, {6, 7},
  {-61, -67}, {8, 9},     {-68, -60}, {-59, 10}, {-69, 11},  {-58, 12},
  {-70, 13},  {-71, 14},  {-57, 15},  {16, 17},  {-56, -72}, {18, 19},
  {-55, -54}, {20, 21},   {-73, -53}, {22, 24},  {-74, 23},  {-75, -78},
  {25, 26},   {-77, -76}, {-52, 27},  {-51, -50}};
extern const int8_t aBookPsIccTimeDecode[14][2];
const int8_t aBookPsIccTimeDecode[14][2] = {
  {-64, 1}, {-63, 2}, {-65, 3},  {-62, 4},  {-66, 5},  {-61, 6},  {-67, 7},
  {-60, 8}, {-68, 9}, {-59, 10}, {-69, 11}, {-58, 12}, {-70, 13}, {-71, -57}};
extern const int8_t aBookPsIccFreqDecode[14][2];
const int8_t aBookPsIccFreqDecode[14][2] = {
  {-64, 1}, {-63, 2}, {-65, 3},  {-62, 4},  {-66, 5},  {-61, 6},  {-67, 7},
  {-60, 8}, {-59, 9}, {-68, 10}, {-58, 11}, {-69, 12}, {-57, 13}, {-70, -71}};
extern const int8_t aBookPsIidFineTimeDecode[60][2];
const int8_t aBookPsIidFineTimeDecode[60][2] = {
  {1, -64},   {-63, 2},   {3, -65},   {4, 59},    {5, 7},     {6, -67},
  {-68, -60}, {-61, 8},   {9, 11},    {-59, 10},  {-70, -58}, {12, 41},
  {13, 20},   {14, -71},  {-55, 15},  {-53, 16},  {17, -77},  {18, 19},
  {-85, -84}, {-46, -45}, {-57, 21},  {22, 40},   {23, 29},   {-51, 24},
  {25, 26},   {-83, -82}, {27, 28},   {-90, -38}, {-92, -91}, {30, 37},
  {31, 34},   {32, 33},   {-35, -34}, {-37, -36}, {35, 36},   {-94, -93},
  {-89, -39}, {38, -79},  {39, -81},  {-88, -40}, {-74, -54}, {42, -69},
  {43, 44},   {-72, -56}, {45, 52},   {46, 50},   {47, -76},  {-49, 48},
  {-47, 49},  {-87, -41}, {-52, 51},  {-78, -50}, {53, -73},  {54, -75},
  {55, 57},   {56, -80},  {-86, -42}, {-48, 58},  {-44, -43}, {-66, -62}};
extern const int8_t aBookPsIidFineFreqDecode[60][2];
const int8_t aBookPsIidFineFreqDecode[60][2] = {
  {1, -64},   {2, 4},     {3, -65},   {-66, -62}, {-63, 5},   {6, 7},
  {-67, -61}, {8, 9},     {-68, -60}, {10, 11},   {-69, -59}, {12, 13},
  {-70, -58}, {14, 18},   {-57, 15},  {16, -72},  {-54, 17},  {-75, -53},
  {19, 37},   {-56, 20},  {21, -73},  {22, 29},   {23, -76},  {24, -78},
  {25, 28},   {26, 27},   {-85, -43}, {-83, -45}, {-81, -47}, {-52, 30},
  {-50, 31},  {32, -79},  {33, 34},   {-82, -46}, {35, 36},   {-90, -89},
  {-92, -91}, {38, -71},  {-55, 39},  {40, -74},  {41, 50},   {42, -77},
  {-49, 43},  {44, 47},   {45, 46},   {-86, -42}, {-88, -87}, {48, 49},
  {-39, -38}, {-41, -40}, {-51, 51},  {52, 59},   {53, 56},   {54, 55},
  {-35, -34}, {-37, -36}, {57, 58},   {-94, -93}, {-84, -44}, {-80, -48}};
static int8_t decode_huff_cw(Huffman h, HANDLE_FDK_BITSTREAM hBitBuf,
                             int* length) {
  uint8_t bit = 0;
  int8_t index = 0;
  uint8_t bitCount = 0;
  while (index >= 0) {
    bit = FDKreadBits(hBitBuf, 1);
    bitCount++;
    index = h[index][bit];
  }
  if (length) {
    *length = bitCount;
  }
  return (index + 64);
}

static int8_t limitMinMax(int8_t i, int8_t min, int8_t max) {
  if (i < min) {
    return min;
  }
  else if (i > max) {
    return max;
  }
  else {
    return i;
  }
}

static void deltaDecodeArray(int8_t enable, int8_t* aIndex,
                             int8_t* aPrevFrameIndex, int8_t DtDf,
                             uint8_t nrElements, uint8_t stride, int8_t minIdx,
                             int8_t maxIdx) {
  int i;
  if (enable == 1) {
    if (DtDf == 0) {
      aIndex[0] = 0 + aIndex[0];
      aIndex[0] = limitMinMax(aIndex[0], minIdx, maxIdx);
      for (i = 1; i < nrElements; i++) {
        aIndex[i] = aIndex[i - 1] + aIndex[i];
        aIndex[i] = limitMinMax(aIndex[i], minIdx, maxIdx);
      }
    }
    else {
      for (i = 0; i < nrElements; i++) {
        aIndex[i] = aPrevFrameIndex[i * stride] + aIndex[i];
        aIndex[i] = limitMinMax(aIndex[i], minIdx, maxIdx);
      }
    }
  }
  else {
    for (i = 0; i < nrElements; i++) {
      aIndex[i] = 0;
    }
  }
  if (stride == 2) {
    for (i = nrElements * stride - 1; i > 0; i--) {
      aIndex[i] = aIndex[i >> 1];
    }
  }
}

static void map34IndexTo20(int8_t* aIndex, uint8_t noBins) {
  aIndex[0] = (2 * aIndex[0] + aIndex[1]) / 3;
  aIndex[1] = (aIndex[1] + 2 * aIndex[2]) / 3;
  aIndex[2] = (2 * aIndex[3] + aIndex[4]) / 3;
  aIndex[3] = (aIndex[4] + 2 * aIndex[5]) / 3;
  aIndex[4] = (aIndex[6] + aIndex[7]) / 2;
  aIndex[5] = (aIndex[8] + aIndex[9]) / 2;
  aIndex[6] = aIndex[10];
  aIndex[7] = aIndex[11];
  aIndex[8] = (aIndex[12] + aIndex[13]) / 2;
  aIndex[9] = (aIndex[14] + aIndex[15]) / 2;
  aIndex[10] = aIndex[16];
  if (noBins == (34)) {
    aIndex[11] = aIndex[17];
    aIndex[12] = aIndex[18];
    aIndex[13] = aIndex[19];
    aIndex[14] = (aIndex[20] + aIndex[21]) / 2;
    aIndex[15] = (aIndex[22] + aIndex[23]) / 2;
    aIndex[16] = (aIndex[24] + aIndex[25]) / 2;
    aIndex[17] = (aIndex[26] + aIndex[27]) / 2;
    aIndex[18] = (aIndex[28] + aIndex[29] + aIndex[30] + aIndex[31]) / 4;
    aIndex[19] = (aIndex[32] + aIndex[33]) / 2;
  }
}

int DecodePs(struct PS_DEC* h_ps_d, const uint8_t frameError) {
  MPEG_PS_BS_DATA* pBsData;
  uint8_t gr, env;
  int bPsHeaderValid, bPsDataAvail;
  pBsData = &h_ps_d->bsData[h_ps_d->processSlot].mpeg;
  bPsHeaderValid = pBsData->bPsHeaderValid;
  bPsDataAvail =
    (h_ps_d->bPsDataAvail[h_ps_d->processSlot] == ppt_mpeg) ? 1 : 0;
  if ((h_ps_d->psDecodedPrv && !frameError && !bPsDataAvail) ||
      (!h_ps_d->psDecodedPrv &&
       (frameError || !bPsDataAvail || !bPsHeaderValid))) {
    pBsData->bPsHeaderValid = 0;
    h_ps_d->bPsDataAvail[h_ps_d->processSlot] = ppt_none;
    return (0);
  }
  if (frameError || !bPsHeaderValid) {
    pBsData->noEnv = 0;
  }
  for (env = 0; env < pBsData->noEnv; env++) {
    int8_t* aPrevIidIndex;
    int8_t* aPrevIccIndex;
    uint8_t noIidSteps = pBsData->bFineIidQ ? (15) : (7);
    if (env == 0) {
      aPrevIidIndex = h_ps_d->specificTo.mpeg.aIidPrevFrameIndex;
      aPrevIccIndex = h_ps_d->specificTo.mpeg.aIccPrevFrameIndex;
    }
    else {
      aPrevIidIndex = pBsData->aaIidIndex[env - 1];
      aPrevIccIndex = pBsData->aaIccIndex[env - 1];
    }
    deltaDecodeArray(pBsData->bEnableIid, pBsData->aaIidIndex[env],
                     aPrevIidIndex, pBsData->abIidDtFlag[env],
                     FDK_sbrDecoder_aNoIidBins[pBsData->freqResIid],
                     (pBsData->freqResIid) ? 1 : 2, -noIidSteps, noIidSteps);
    deltaDecodeArray(pBsData->bEnableIcc, pBsData->aaIccIndex[env],
                     aPrevIccIndex, pBsData->abIccDtFlag[env],
                     FDK_sbrDecoder_aNoIccBins[pBsData->freqResIcc],
                     (pBsData->freqResIcc) ? 1 : 2, 0, (8) - 1);
  }
  if (pBsData->noEnv == 0) {
    pBsData->noEnv = 1;
    if (pBsData->bEnableIid) {
      for (gr = 0; gr < ((34)); gr++) {
        pBsData->aaIidIndex[pBsData->noEnv - 1][gr] =
          h_ps_d->specificTo.mpeg.aIidPrevFrameIndex[gr];
      }
    }
    else {
      for (gr = 0; gr < ((34)); gr++) {
        pBsData->aaIidIndex[pBsData->noEnv - 1][gr] = 0;
      }
    }
    if (pBsData->bEnableIcc) {
      for (gr = 0; gr < ((34)); gr++) {
        pBsData->aaIccIndex[pBsData->noEnv - 1][gr] =
          h_ps_d->specificTo.mpeg.aIccPrevFrameIndex[gr];
      }
    }
    else {
      for (gr = 0; gr < ((34)); gr++) {
        pBsData->aaIccIndex[pBsData->noEnv - 1][gr] = 0;
      }
    }
  }
  for (gr = 0; gr < ((34)); gr++) {
    h_ps_d->specificTo.mpeg.aIidPrevFrameIndex[gr] =
      pBsData->aaIidIndex[pBsData->noEnv - 1][gr];
  }
  for (gr = 0; gr < ((34)); gr++) {
    h_ps_d->specificTo.mpeg.aIccPrevFrameIndex[gr] =
      pBsData->aaIccIndex[pBsData->noEnv - 1][gr];
  }
  h_ps_d->bPsDataAvail[h_ps_d->processSlot] = ppt_none;
  if (pBsData->bFrameClass == 0) {
    pBsData->aEnvStartStop[0] = 0;
    for (env = 1; env < pBsData->noEnv; env++) {
      pBsData->aEnvStartStop[env] =
        (env * h_ps_d->noSubSamples) / pBsData->noEnv;
    }
    pBsData->aEnvStartStop[pBsData->noEnv] = h_ps_d->noSubSamples;
  }
  else {
    pBsData->aEnvStartStop[0] = 0;
    if (pBsData->aEnvStartStop[pBsData->noEnv] < h_ps_d->noSubSamples) {
      for (gr = 0; gr < ((34)); gr++) {
        pBsData->aaIidIndex[pBsData->noEnv][gr] =
          pBsData->aaIidIndex[pBsData->noEnv - 1][gr];
      }
      for (gr = 0; gr < ((34)); gr++) {
        pBsData->aaIccIndex[pBsData->noEnv][gr] =
          pBsData->aaIccIndex[pBsData->noEnv - 1][gr];
      }
      pBsData->noEnv++;
      pBsData->aEnvStartStop[pBsData->noEnv] = h_ps_d->noSubSamples;
    }
    for (env = 1; env < pBsData->noEnv; env++) {
      uint8_t thr;
      thr = (uint8_t)h_ps_d->noSubSamples - (pBsData->noEnv - env);
      if (pBsData->aEnvStartStop[env] > thr) {
        pBsData->aEnvStartStop[env] = thr;
      }
      else {
        thr = pBsData->aEnvStartStop[env - 1] + 1;
        if (pBsData->aEnvStartStop[env] < thr) {
          pBsData->aEnvStartStop[env] = thr;
        }
      }
    }
  }
  for (env = 0; env < pBsData->noEnv; env++) {
    uint8_t i;
    for (i = 0; i < ((34)); i++) {
      h_ps_d->specificTo.mpeg.coef.aaIidIndexMapped[env][i] =
        pBsData->aaIidIndex[env][i];
    }
    for (i = 0; i < ((34)); i++) {
      h_ps_d->specificTo.mpeg.coef.aaIccIndexMapped[env][i] =
        pBsData->aaIccIndex[env][i];
    }
  }
  for (env = 0; env < pBsData->noEnv; env++) {
    if (pBsData->freqResIid == 2) {
      map34IndexTo20(h_ps_d->specificTo.mpeg.coef.aaIidIndexMapped[env],
                     ((34)));
    }
    if (pBsData->freqResIcc == 2) {
      map34IndexTo20(h_ps_d->specificTo.mpeg.coef.aaIccIndexMapped[env],
                     ((34)));
    }
  }
  return (1);
}

unsigned int ReadPsData(HANDLE_PS_DEC h_ps_d, HANDLE_FDK_BITSTREAM hBitBuf,
                        int nBitsLeft) {
  MPEG_PS_BS_DATA* pBsData;
  uint8_t gr, env;
  int8_t dtFlag;
  int32_t startbits;
  Huffman CurrentTable;
  int8_t bEnableHeader;
  if (!h_ps_d) {
    return 0;
  }
  pBsData = &h_ps_d->bsData[h_ps_d->bsReadSlot].mpeg;
  if (h_ps_d->bsReadSlot != h_ps_d->bsLastSlot) {
    FDKmemcpy(pBsData, &h_ps_d->bsData[h_ps_d->bsLastSlot].mpeg,
              sizeof(MPEG_PS_BS_DATA));
  }
  startbits = (int32_t)FDKgetValidBits(hBitBuf);
  bEnableHeader = (int8_t)FDKreadBits(hBitBuf, 1);
  if (bEnableHeader) {
    pBsData->bPsHeaderValid = 1;
    pBsData->bEnableIid = (uint8_t)FDKreadBits(hBitBuf, 1);
    if (pBsData->bEnableIid) {
      pBsData->modeIid = (uint8_t)FDKreadBits(hBitBuf, 3);
    }
    pBsData->bEnableIcc = (uint8_t)FDKreadBits(hBitBuf, 1);
    if (pBsData->bEnableIcc) {
      pBsData->modeIcc = (uint8_t)FDKreadBits(hBitBuf, 3);
    }
    pBsData->bEnableExt = (uint8_t)FDKreadBits(hBitBuf, 1);
  }
  pBsData->bFrameClass = (uint8_t)FDKreadBits(hBitBuf, 1);
  if (pBsData->bFrameClass == 0) {
    pBsData->noEnv =
      FDK_sbrDecoder_aFixNoEnvDecode[(uint8_t)FDKreadBits(hBitBuf, 2)];
  }
  else {
    pBsData->noEnv = 1 + (uint8_t)FDKreadBits(hBitBuf, 2);
    for (env = 1; env < pBsData->noEnv + 1; env++) {
      pBsData->aEnvStartStop[env] = ((uint8_t)FDKreadBits(hBitBuf, 5)) + 1;
    }
  }
  if ((pBsData->modeIid > 5) || (pBsData->modeIcc > 5)) {
    h_ps_d->bPsDataAvail[h_ps_d->bsReadSlot] = ppt_none;
    nBitsLeft -= startbits - FDKgetValidBits(hBitBuf);
    while (nBitsLeft > 0) {
      int i = nBitsLeft;
      if (i > 8) {
        i = 8;
      }
      FDKreadBits(hBitBuf, i);
      nBitsLeft -= i;
    }
    return (startbits - FDKgetValidBits(hBitBuf));
  }
  if (pBsData->modeIid > 2) {
    pBsData->freqResIid = pBsData->modeIid - 3;
    pBsData->bFineIidQ = 1;
  }
  else {
    pBsData->freqResIid = pBsData->modeIid;
    pBsData->bFineIidQ = 0;
  }
  if (pBsData->modeIcc > 2) {
    pBsData->freqResIcc = pBsData->modeIcc - 3;
  }
  else {
    pBsData->freqResIcc = pBsData->modeIcc;
  }
  if (pBsData->bEnableIid) {
    for (env = 0; env < pBsData->noEnv; env++) {
      dtFlag = (int8_t)FDKreadBits(hBitBuf, 1);
      if (!dtFlag) {
        if (pBsData->bFineIidQ) {
          CurrentTable = (Huffman)&aBookPsIidFineFreqDecode;
        }
        else {
          CurrentTable = (Huffman)&aBookPsIidFreqDecode;
        }
      }
      else {
        if (pBsData->bFineIidQ) {
          CurrentTable = (Huffman)&aBookPsIidFineTimeDecode;
        }
        else {
          CurrentTable = (Huffman)&aBookPsIidTimeDecode;
        }
      }
      for (gr = 0; gr < FDK_sbrDecoder_aNoIidBins[pBsData->freqResIid]; gr++) {
        pBsData->aaIidIndex[env][gr] =
          decode_huff_cw(CurrentTable, hBitBuf, nullptr);
      }
      pBsData->abIidDtFlag[env] = dtFlag;
    }
  }
  if (pBsData->bEnableIcc) {
    for (env = 0; env < pBsData->noEnv; env++) {
      dtFlag = (int8_t)FDKreadBits(hBitBuf, 1);
      if (!dtFlag) {
        CurrentTable = (Huffman)&aBookPsIccFreqDecode;
      }
      else {
        CurrentTable = (Huffman)&aBookPsIccTimeDecode;
      }
      for (gr = 0; gr < FDK_sbrDecoder_aNoIccBins[pBsData->freqResIcc]; gr++) {
        pBsData->aaIccIndex[env][gr] =
          decode_huff_cw(CurrentTable, hBitBuf, nullptr);
      }
      pBsData->abIccDtFlag[env] = dtFlag;
    }
  }
  if (pBsData->bEnableExt) {
    int cnt = FDKreadBits(hBitBuf, (4));
    if (cnt == (1 << (4)) - 1) {
      cnt += FDKreadBits(hBitBuf, (8));
    }
    while (cnt--) {
      FDKreadBits(hBitBuf, 8);
    }
  }
  h_ps_d->bPsDataAvail[h_ps_d->bsReadSlot] = ppt_mpeg;
  return (startbits - FDKgetValidBits(hBitBuf));
}

}
