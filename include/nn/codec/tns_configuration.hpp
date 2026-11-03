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
