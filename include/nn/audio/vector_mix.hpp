#pragma once

namespace nn::audio::util {

template<class Output, class Input>
void VecWideningMix(Output* output, const Input* const __restrict* inputs,
  const Input* gains, int channels, int count, bool sequential);

template<class Accumulator, class Sample, int Fraction>
void VecMix(Sample* output, const Sample* const __restrict* inputs,
  const Sample* gains, int channels, int count, Accumulator* scratch);

}
