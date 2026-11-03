#pragma once

#include <stdint.h>

namespace nn::audio::dsp {

void ConvertFormat1(float* output, const int32_t* input, int count);
void ConvertFormat4(float* output, const int32_t* input, int count);
void ConvertFormat(float* output, const int32_t* input, int count);
void ConvertFormat1(int32_t* output, const float* input, int count);
void ConvertFormat4(int32_t* output, const float* input, int count);
void ConvertFormat(int32_t* output, const float* input, int count);
void ConvertFormat1(float* output, const int32_t* input,
  int fraction, int count);
void ConvertFormat4(float* output, const int32_t* input,
  int fraction, int count);
void ConvertFormat(float* output, const int32_t* input,
  int fraction, int count);
void ConvertFormat1(int32_t* output, const float* input,
  int fraction, int count);
void ConvertFormat4(int32_t* output, const float* input,
  int fraction, int count);
void ConvertFormat(int32_t* output, const float* input,
  int fraction, int count);

}
