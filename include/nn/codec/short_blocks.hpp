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

union SFB_THRESHOLD {
  int32_t Long[60];
  int32_t Short[8][15];
};

union SFB_ENERGY {
  int32_t Long[60];
  int32_t Short[8][15];
};

static_assert(sizeof(SFB_THRESHOLD) == 480);
static_assert(sizeof(SFB_ENERGY) == 480);

void FDKaacEnc_groupShortData(
  int32_t* mdctSpectrum, SFB_THRESHOLD* sfbThreshold, SFB_ENERGY* sfbEnergy,
  SFB_ENERGY* sfbEnergyMS, SFB_ENERGY* sfbSpreadEnergy, const int sfbCnt,
  const int sfbActive, const int* sfbOffset, const int32_t* sfbMinSnrLdData,
  int* groupedSfbOffset, int* maxSfbPerGroup, int32_t* groupedSfbMinSnrLdData,
  const int noOfGroups, const int* groupLen, const int granuleLength);

}
