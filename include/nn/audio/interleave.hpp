#pragma once

#include <stdint.h>

namespace nn::audio::util {

template<class T>
void VecDeinterleaveToSingleBuffer(T* output, const T* input,
                                   int channels, int count);
template<class T>
void VecDeinterleave(T* const __restrict* output, const T* input,
                      int channels, int count);
template<class T>
void VecInterleaveFromSingleBuffer(T* output, const T* input,
                                   int channels, int count);
template<class T>
void VecInterleave(T* output, const T* const __restrict* input,
                    int channels, int count);

}
