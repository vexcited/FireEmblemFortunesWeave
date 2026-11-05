#pragma once

#include <stdint.h>

namespace nn::audio {

void ConvertPcmInt16ToFloat(float* output, const int16_t* input, int count);
void ConvertFloatToPcmInt16(int16_t* output, const float* input, int count);

}
