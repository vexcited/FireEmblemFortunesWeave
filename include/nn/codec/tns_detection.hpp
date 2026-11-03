#pragma once

#include "nn/codec/tns.hpp"

namespace nn::codec {

int32_t invSqrtNorm2(int32_t, int32_t*);
int FDKaacEnc_TnsDetect(TNS_DATA*, const TNS_CONFIG*, TNS_INFO*, int, int32_t*,
                        int, int);

}
