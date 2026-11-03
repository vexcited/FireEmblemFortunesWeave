#pragma once

#include "nn/codec/bitstream.hpp"
#include "nn/codec/parametric_stereo.hpp"

namespace nn::codec {

int DecodePs(PS_DEC* decoder, uint8_t frameError);
unsigned int ReadPsData(PS_DEC* decoder, FDK_BITSTREAM* bitstream,
                        int bitsRemaining);

}
