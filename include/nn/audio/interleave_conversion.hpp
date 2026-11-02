#pragma once

namespace nn::audio::util {

template<class Input, class Output>
void VecNarrowingDeinterleave(Output* const __restrict* output,
  const Input* input, int channels, int count);

template<class Output, class Input>
void VecWideningDeinterleave(Output* const __restrict* output,
  const Input* input, int channels, int count);

template<class Input, class Output>
void VecNarrowingInterleave(Output* output,
  const Input* const __restrict* input, int channels, int count);

template<class Output, class Input>
void VecWideningInterleave(Output* output,
  const Input* const __restrict* input, int channels, int count);

template<class T, int Fraction>
void VecDeinterleaveFromFloat(T* const __restrict* output,
  const float* input, int channels, int count);

template<class T, int Fraction>
void VecDeinterleaveToFloat(float* const __restrict* output,
  const T* input, int channels, int count);

template<class T, int Fraction>
void VecInterleaveFromFloat(T* output,
  const float* const __restrict* input, int channels, int count);

template<class T, int Fraction>
void VecInterleaveToFloat(float* output,
  const T* const __restrict* input, int channels, int count);

}
