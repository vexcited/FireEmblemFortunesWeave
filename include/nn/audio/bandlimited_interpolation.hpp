#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::audio::util {
namespace detail {

struct BandlimitedFrameState {
  int input_period;
  int output_period;
  int input_count;
  int output_count;
  int phase;
};

struct BandlimitedInterpolationImpl {
  uint8_t initialized;
  uint8_t reserved_01[3];
  int input_rate;
  int output_rate;
  int channels;
  int maximum_input_count;
  BandlimitedFrameState frame;
  double position;
  double increment;
  float* history;
  int history_count;
  uint32_t reserved_44;
  float* output;
  int output_capacity;
  uint32_t reserved_54;
  float** weights;
  int phase_count;
  int taps;

  void Initialize(int input_rate, int output_rate, int channels,
    int maximum_input_count, void* work, size_t work_size);
  static double CalculateTimeIncrement(int input_rate, int output_rate);
  void PreCalculateInterpolationWeights();
  void ResampleCore(float* output, int count);

  template<class Input, class Output, int... Fractions>
  int Resample(Output* output, int capacity, const Input* input, int count);

  template<class Input, class Output, int... Fractions>
  int Resample(Output* const* output, int capacity,
    const Input* const* input, int count);
};

}

struct BandlimitedInterpolation : detail::BandlimitedInterpolationImpl {
  void Initialize(int input_rate, int output_rate, int channels,
    int maximum_input_count, void* work, size_t work_size);
  void Finalize();
  uint8_t IsInitialized() const;
  int GetOutputFrameCount(int input_count) const;
  void GetInputFrameCount(int* input_count, int* output_count,
    int requested_output_count) const;

  template<class Input, class Output, int... Fractions>
  int Resample(Output* output, int capacity, const Input* input, int count);

  template<class Input, class Output, int... Fractions>
  int Resample(Output* const* output, int capacity,
    const Input* const* input, int count);
};

}
