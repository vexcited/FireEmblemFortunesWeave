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

void FDKaacEnc_QuantizeSpectrum(int sfbCnt, int maxSfbPerGroup, int sfbPerGroup,
                                int* sfbOffset, int32_t* mdctSpectrum,
                                int globalGain, int* scalefactors,
                                int16_t* quantizedSpectrum,
                                int dZoneQuantEnable);

int32_t FDKaacEnc_calcSfbDist(int32_t* mdctSpectrum, int16_t* quantSpectrum,
                              int noOfLines, int gain, int dZoneQuantEnable);

void FDKaacEnc_calcSfbQuantEnergyAndDist(int32_t* mdctSpectrum,
                                         int16_t* quantSpectrum, int noOfLines,
                                         int gain, int32_t* en, int32_t* dist);

int32_t CalcLdData(int32_t);
int32_t CalcInvLdData(int32_t);

}
