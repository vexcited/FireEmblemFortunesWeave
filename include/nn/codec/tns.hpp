/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include <stdint.h>

namespace nn::codec {

typedef struct {
  int32_t filterEnabled[2];
  int32_t threshOn[2];
  int32_t filterStartFreq[2];
  int32_t tnsLimitOrder[2];
  int32_t tnsFilterDirection[2];
  int32_t acfSplit[2];
  int32_t tnsTimeResolution[2];
  int32_t seperateFiltersAllowed;
} TNS_PARAMETER_TABULATED;

typedef struct {
  TNS_PARAMETER_TABULATED confTab;
  int32_t isLowDelay;
  int32_t tnsActive;
  int32_t maxOrder;
  int32_t coefRes;
  int32_t acfWindow[2][12 + 3 + 1];

  int32_t lpcStartBand[2];
  int32_t lpcStartLine[2];
  int32_t lpcStopBand;
  int32_t lpcStopLine;

} TNS_CONFIG;

typedef struct {
  int32_t tnsActive[2];
  int32_t predictionGain[2];
} TNS_SUBBLOCK_INFO;

typedef struct {
  TNS_SUBBLOCK_INFO subBlockInfo[8];
  int32_t ratioMultTable[8][15];
} TNS_DATA_SHORT;

typedef struct {
  TNS_SUBBLOCK_INFO subBlockInfo;
  int32_t ratioMultTable[51];
} TNS_DATA_LONG;

typedef union {
  TNS_DATA_LONG Long;
  TNS_DATA_SHORT Short;
} TNS_DATA_RAW;

typedef struct {
  int32_t numOfSubblocks;
  TNS_DATA_RAW dataRaw;
  int32_t tnsMaxScaleSpec;
  int32_t filtersMerged;
} TNS_DATA;

typedef struct {
  int32_t numOfFilters[8];
  int32_t coefRes[8];
  int32_t length[8][2];
  int32_t order[8][2];
  int32_t direction[8][2];
  int32_t coefCompress[8][2];

  int32_t coef[8][2][12];
} TNS_INFO;

void FDKaacEnc_TnsSync(TNS_DATA*, const TNS_DATA*, TNS_INFO*, TNS_INFO*, int,
                       int, const TNS_CONFIG*);
int FDKaacEnc_TnsEncode(TNS_INFO*, TNS_DATA*, int, const TNS_CONFIG*, int,
                        int32_t*, int, int);

static_assert(sizeof(TNS_CONFIG) == 228);
static_assert(sizeof(TNS_DATA) == 620);
static_assert(sizeof(TNS_INFO) == 1088);
static_assert(__builtin_offsetof(TNS_DATA, filtersMerged) == 616);
static_assert(__builtin_offsetof(TNS_CONFIG, maxOrder) == 68);
static_assert(__builtin_offsetof(TNS_INFO, coef) == 320);

}
