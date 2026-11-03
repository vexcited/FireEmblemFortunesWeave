#include "nn/audio/bandlimited_interpolation.hpp"

#include <arm_neon.h>

extern "C" void* memset(void*, int, size_t);

using nn::audio::util::detail::BandlimitedFrameState;

static double Round(double value) {
  double result;
  asm("frinta %d0, %d1" : "=w"(result) : "w"(value));
  return result;
}

static int Truncate(double value) {
  int result;
  asm("fcvtzs %w0, %d1" : "=r"(result) : "w"(value));
  return result;
}

static int Remainder(int value, int divisor) {
  int quotient;
  asm("sdiv %w0, %w1, %w2" : "=r"(quotient)
    : "r"(value), "r"(divisor));
  return uint32_t(value) - uint32_t(quotient) * uint32_t(divisor);
}

static float Fma(float left, float right, float value) {
  float result;
  asm("fmadd %s0, %s1, %s2, %s3" : "=w"(result)
    : "w"(left), "w"(right), "w"(value));
  return result;
}

template<int Channels>
static void Filter(float* output, int count, double* position,
  BandlimitedFrameState* state, const float* input, int, float* const* weights,
  int taps, double increment, int) {
  if (count < 1) {
    return;
  }

  double time = *position;
  int phase = state->phase;
  int period = state->output_period;
  int vector_taps = taps & ~3;

  for (int frame = 0; frame < count; ++frame) {
    int start = uint32_t(Truncate(time)) - uint32_t(taps >> 1) + 1;
    const float* samples = input + int32_t(uint32_t(start) * Channels);
    const float* coefficients = weights[phase];
    float32x4_t sums[Channels];

    for (int channel = 0; channel < Channels; ++channel) {
      sums[channel] = vdupq_n_f32(0);
    }

    for (int tap = 0; tap < vector_taps; tap += 4) {
      float32x4_t coefficient = vld1q_f32(coefficients + tap);

      for (int channel = 0; channel < Channels; ++channel) {
        float32x4_t sample = {
          samples[(tap + 0) * Channels + channel],
          samples[(tap + 1) * Channels + channel],
          samples[(tap + 2) * Channels + channel],
          samples[(tap + 3) * Channels + channel]
        };
        sums[channel] = vfmaq_f32(sums[channel], sample, coefficient);
      }
    }

    float values[Channels];

    for (int channel = 0; channel < Channels; ++channel) {
      float32x2_t pair = vpadd_f32(vget_high_f32(sums[channel]),
        vget_low_f32(sums[channel]));
      values[channel] = vget_lane_f32(vpadd_f32(pair, vdup_n_f32(0)), 0);
      output[channel] = values[channel];
    }

    for (int tap = vector_taps; tap < taps; ++tap) {
      for (int channel = 0; channel < Channels; ++channel) {
        values[channel] = Fma(coefficients[tap],
          samples[tap * Channels + channel], values[channel]);
      }

      for (int channel = 0; channel < Channels; ++channel) {
        output[channel] = values[channel];
      }
    }

    time = increment + time;
    phase = Remainder(uint32_t(phase) + 1, period);
    state->phase = phase;

    if (phase == 0) {
      time = Round(time);
    }

    *position = time;
    output += Channels;
  }
}

extern "C" void BandlimitedMono(float* output, int count, double* position,
  BandlimitedFrameState* state, const float* input, int input_count,
  float* const* weights, int taps, double increment, int channels) {
  Filter<1>(output, count, position, state, input, input_count, weights,
    taps, increment, channels);
}

extern "C" void BandlimitedStereo(float* output, int count, double* position,
  BandlimitedFrameState* state, const float* input, int input_count,
  float* const* weights, int taps, double increment, int channels) {
  Filter<2>(output, count, position, state, input, input_count, weights,
    taps, increment, channels);
}

extern "C" void BandlimitedSurround(float* output, int count,
  double* position, BandlimitedFrameState* state, const float* input,
  int input_count, float* const* weights, int taps, double increment,
  int channels) {
  Filter<6>(output, count, position, state, input, input_count, weights,
    taps, increment, channels);
}

extern "C" void BandlimitedGeneric(float* output, int count,
  double* position, BandlimitedFrameState* state, const float* input,
  int, float* const* weights, int taps, double increment, int channels) {
  int samples = uint32_t(channels) * uint32_t(count);
  memset(output, 0, uint64_t(int64_t(samples)) << 2);

  if (count < 1) {
    return;
  }

  double time = *position;
  int phase = state->phase;
  int period = state->output_period;

  for (int frame = 0; frame < count; ++frame) {
    if (taps > 0 && channels > 0) {
      int start = uint32_t(Truncate(time)) - uint32_t(taps >> 1) + 1;
      const float* samples = input + int64_t(start) * channels;
      const float* coefficients = weights[phase];

      for (int tap = 0; tap < taps; ++tap) {
        for (int channel = 0; channel < channels; ++channel) {
          output[channel] = Fma(coefficients[tap], samples[channel],
            output[channel]);
        }

        samples += channels;
      }
    }

    time = increment + time;
    phase = Remainder(uint32_t(phase) + 1, period);
    state->phase = phase;

    if (phase == 0) {
      time = Round(time);
    }

    output += channels;
  }

  *position = time;
}
