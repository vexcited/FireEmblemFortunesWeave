#pragma once

namespace nn::audio::util {

template<class Accumulator, class Output, class Input, class Gain, int Fraction>
Gain VecMacRamped(Output* output, const Input* input, Gain gain, Gain step,
  int count, bool replace);

template<class T>
T VecMacRamped(T* output, const T* input, T gain, T step, int count,
  bool replace);

}
