#pragma once

#include <stdint.h>

namespace nn::audio::dsp {

template<int Fraction>
void ApplyMix(int32_t* output, const int32_t* input, int gain, int count);
template<int Fraction>
void ApplyMix1(int32_t* output, const int32_t* input, int gain, int count);
template<int Fraction>
void ApplyMix2(int32_t* output, const int32_t* input, int gain, int count);
template<int Fraction>
void ApplyMix4(int32_t* output, const int32_t* input, int gain, int count);
template<int Fraction>
void ApplyMixRamp1(int32_t* output, const int32_t* input, int gain,
                   int step, int count);
template<int Fraction>
void ApplyMixRamp2(int32_t* output, const int32_t* input, int gain,
                   int step, int count);
template<int Fraction>
void ApplyMixRamp4(int32_t* output, const int32_t* input, int gain,
                   int step, int count);

void ApplyMix(int32_t* output, const int32_t* input, float gain,
               int count, bool high_precision);
void ApplyMix1(float* output, const float* input, float gain, int count);
void ApplyMix4(float* output, const float* input, float gain, int count);
void ApplyMix(float* output, const float* input, float gain, int count);
int ApplyMixRamp(int32_t* output, const int32_t* input, float gain,
                 float step, int count, bool high_precision);
void ApplyMixRamp1(float* output, const float* input, float gain,
                   float step, int count);
void ApplyMixRamp4(float* output, const float* input, float gain,
                   float step, int count);
float ApplyMixRamp(float* output, const float* input, float gain,
                    float step, int count);

}
