/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec
  Library for Android. Modified 2026-11-03 for the recovered SDK ABI.
  Copyright 1995-2012 Fraunhofer-Gesellschaft. All rights reserved.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#pragma once

#include "nn/codec/bitstream.hpp"
#include "nn/codec/parametric_stereo.hpp"

namespace nn::codec {

int DecodePs(PS_DEC* decoder, uint8_t frameError);
unsigned int ReadPsData(PS_DEC* decoder, FDK_BITSTREAM* bitstream,
                        int bitsRemaining);

}
