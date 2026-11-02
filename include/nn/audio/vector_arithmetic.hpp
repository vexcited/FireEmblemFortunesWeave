#pragma once

namespace nn::audio::util {

template<class T>
void VecAdd(T* output, const T* first, const T* second, int count);

template<class Output, class Input>
void VecAcc(Output* output, const Input* input, int count);

template<class Output, class Input>
void VecWideningAcc(Output* output, const Input* input, int count);

template<class Output, class Input>
void VecWideningMul(Output* output, const Input* input, Input gain, int count);

template<class Output, class Input, int Fraction>
void VecWideningMac(Output* output, const Input* input, Input gain, int count);

template<class Output, class Input, int Fraction>
Input VecWideningMacRamped(Output* output, const Input* input,
  Input gain, Input step, int count);

template<class Output, class Input>
void VecWideningDoublingMac(Output* output, const Input* input,
  Input gain, int count);

template<class Output, class Input>
Input VecWideningDoublingMacRamped(Output* output, const Input* input,
  Input gain, Input step, int count);

template<class Accumulator, class T, int Fraction>
void VecMulByVector(T* output, const T* first, const T* second, int count);

}
