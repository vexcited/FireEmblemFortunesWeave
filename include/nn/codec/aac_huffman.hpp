/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/bitstream.hpp"

namespace nn::codec {

int FDKaacEnc_bitCount(const int16_t*, int, int, int*);
int FDKaacEnc_countValues(int16_t*, int, int);
int FDKaacEnc_codeValues(int16_t*, int, int, FDK_BITSTREAM*);
int FDKaacEnc_codeScalefactorDelta(int, FDK_BITSTREAM*);

}
