/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/tns.hpp"

namespace nn::codec {

struct PSY_CONFIGURATION;

int32_t f2Pow(int32_t, int, int*);
int32_t f2Pow(int32_t, int);
int32_t fPow(int32_t, int, int32_t, int, int*);
int FDKaacEnc_FreqToBandWithRounding(int, int, int, const int*);
int FDKaacEnc_InitTnsConfiguration(int, int, int, int, int, int, int,
                                   TNS_CONFIG*, PSY_CONFIGURATION*, int, int);

}
