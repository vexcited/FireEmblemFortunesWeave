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

int32_t invSqrtNorm2(int32_t, int32_t*);
int FDKaacEnc_TnsDetect(TNS_DATA*, const TNS_CONFIG*, TNS_INFO*, int, int32_t*,
                        int, int);

}
