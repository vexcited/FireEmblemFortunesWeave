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

struct PNS_DATA {
  int16_t noiseFuzzyMeasure[60];
  int32_t noiseEnergyCorrelation[60];
  int32_t pnsFlag[60];
};

static_assert(sizeof(PNS_DATA) == 600);
static_assert(__builtin_offsetof(PNS_DATA, pnsFlag) == 360);

void FDKaacEnc_IntensityStereoProcessing(
  int32_t* sfbEnergyLeft, int32_t* sfbEnergyRight, int32_t* mdctSpectrumLeft,
  int32_t* mdctSpectrumRight, int32_t* sfbThresholdLeft,
  int32_t* sfbThresholdRight, int32_t* sfbThresholdLdDataRight,
  int32_t* sfbSpreadEnLeft, int32_t* sfbSpreadEnRight,
  int32_t* sfbEnergyLdDataLeft, int32_t* sfbEnergyLdDataRight, int* msDigest,
  int* msMask, const int sfbCnt, const int sfbPerGroup,
  const int maxSfbPerGroup, const int* sfbOffset, const int allowIS,
  int* isBook, int* isScale, PNS_DATA* pnsData[2]);

int32_t sqrtFixp(int32_t);

}
