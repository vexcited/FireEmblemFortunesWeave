#pragma once

#include <stdint.h>

namespace nn::audio::dsp {

template<int Fraction>
void ApplyUniformGain1(int32_t* output, const int32_t* input,
  int gain, int count);
template<int Fraction>
void ApplyUniformGain2(int32_t* output, const int32_t* input,
  int gain, int count);
template<int Fraction>
void ApplyUniformGain4(int32_t* output, const int32_t* input,
  int gain, int count);

void ApplyUniformGain(int32_t* output, const int32_t* input,
  int gain, int count, int fraction);
void ApplyUniformGain1(float* output, const float* input,
  float gain, int count);
void ApplyUniformGain4(float* output, const float* input,
  float gain, int count);
void ApplyUniformGain(float* output, const float* input,
  float gain, int count);

template<int Fraction>
void ApplyLinearEnvelopeGain1(int32_t* output, const int32_t* input,
  int gain, int step, int count);
template<int Fraction>
void ApplyLinearEnvelopeGain2(int32_t* output, const int32_t* input,
  int gain, int step, int count);
template<int Fraction>
void ApplyLinearEnvelopeGain4(int32_t* output, const int32_t* input,
  int gain, int step, int count);

void ApplyLinearEnvelopeGain(int32_t* output, const int32_t* input,
  int gain, int step, int count, int fraction);
void ApplyLinearEnvelopeGain1(float* output, const float* input,
  float gain, float step, int count);
void ApplyLinearEnvelopeGain4(float* output, const float* input,
  float gain, float step, int count);
void ApplyLinearEnvelopeGain(float* output, const float* input,
  float gain, float step, int count);

}
