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
#include "nn/codec/sbr_data.hpp"

namespace nn::codec {

enum SBR_HEADER_STATUS {
  HEADER_NOT_PRESENT,
  HEADER_ERROR,
  HEADER_OK,
  HEADER_RESET
};

int initHeaderData(SBR_HEADER_DATA*, int, int, int, unsigned int);
SBR_HEADER_STATUS sbrGetHeaderData(SBR_HEADER_DATA*, FDK_BITSTREAM*,
                                   unsigned int, int);
int sbrGetSyntheticCodedData(SBR_HEADER_DATA*, SBR_FRAME_DATA*, FDK_BITSTREAM*);
int sbrGetSingleChannelElement(SBR_HEADER_DATA*, SBR_FRAME_DATA*,
                               FDK_BITSTREAM*, PS_DEC*, unsigned int, int);
int sbrGetChannelPairElement(SBR_HEADER_DATA*, SBR_FRAME_DATA*, SBR_FRAME_DATA*,
                             FDK_BITSTREAM*, unsigned int, int);
int DecodeHuffmanCW(const int8_t (*)[2], FDK_BITSTREAM*);

}
