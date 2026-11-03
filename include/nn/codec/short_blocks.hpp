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
