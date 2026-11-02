#pragma once

namespace nn::audio::util {

template<class T, int Fraction>
void VecConvertToFloat(float* output, const T* input, int count);

template<class T, int Fraction>
void VecConvertFromFloat(T* output, const float* input, int count);

template<class Output, class Input>
void VecWideningCopy(Output* output, const Input* input, int count);

template<class Input, class Output>
void VecNarrowingCopy(Output* output, const Input* input, int count);

template<class Output, class Input, int Shift>
void VecWideningUpShift(Output* output, const Input* input, int count);

template<class Input, class Output, int Shift>
void VecNarrowingDownShift(Output* output, const Input* input, int count);

template<class Input, class Output>
void VecNarrowingDownShift(Output* output, const Input* input,
  int shift, int count);

template<class T>
void VecDownShift(T* output, const T* input, int shift, int count);

}
