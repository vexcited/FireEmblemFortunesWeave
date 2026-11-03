#pragma once

#include "nn/codec/bitstream.hpp"

namespace nn::codec {

int FDKaacEnc_bitCount(const int16_t*, int, int, int*);
int FDKaacEnc_countValues(int16_t*, int, int);
int FDKaacEnc_codeValues(int16_t*, int, int, FDK_BITSTREAM*);
int FDKaacEnc_codeScalefactorDelta(int, FDK_BITSTREAM*);

}
