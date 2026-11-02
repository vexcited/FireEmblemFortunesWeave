#pragma once

#include "nn/codec/sbr_envelope.hpp"

namespace nn::codec {

struct PATCH_PARAM {
  uint8_t sourceStartBand;
  uint8_t sourceStopBand;
  uint8_t guardStartBand;
  uint8_t targetStartBand;
  uint8_t targetBandOffs;
  uint8_t numBandsInPatch;
};

static_assert(sizeof(PATCH_PARAM) == 6);

int sbrdecUpdateFreqScale(uint8_t *, uint8_t *, unsigned int,
                         SBR_HEADER_DATA *, unsigned int);
void shellsort(uint8_t *, uint8_t);
void sbrdecDownSampleLoRes(uint8_t *, uint8_t, uint8_t *, uint8_t);
int resetFreqBandTables(SBR_HEADER_DATA *, unsigned int);
int ResetLimiterBands(uint8_t *, uint8_t *, uint8_t *, int,
                      const PATCH_PARAM *, int, int);
int32_t CalcLdInt(int);
int32_t fMultNorm(int32_t, int32_t, int32_t *);
int32_t fLog2(int32_t, int, int *);

}
