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
