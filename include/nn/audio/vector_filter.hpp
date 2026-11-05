#pragma once

namespace nn::audio::util {

template<class T>
void VecSos(T* output, const T* input, const T* coefficients, T* state,
  int count);

template<class T>
void VecComplexMultiply(T* output, const T* first, const T* second,
  int count);

}
