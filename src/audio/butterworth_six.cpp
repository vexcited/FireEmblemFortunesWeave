#include "audio/butterworth_six.hpp"

namespace fw::audio {

void ApplyButterworth6(nerd::Butterworth* filter, const int16_t* input,
                       int16_t* output, size_t count, size_t stride) {
  double x[7];
  double y[7];
  double a[6];
  double b[4];

  for (size_t i = 0; i < 7; ++i) {
    x[i] = filter->inputs[i];
    y[i] = filter->outputs[i];
  }

  for (size_t i = 0; i < 6; ++i) {
    a[i] = filter->feedback[i];
  }

  for (size_t i = 0; i < 4; ++i) {
    b[i] = filter->feedforward[i];
  }

  double gain = filter->gain;

  while (count != 0) {
    bool block = count >= 7;
    size_t amount = block ? 7 : 1;
    double samples[7];

    for (size_t i = 0; i < amount; ++i) {
      samples[i] = gain * static_cast<double>(input[i * stride]);
    }

    for (size_t i = 0; i < amount; ++i) {
      double value;

      if (block) {
        double feedback = a[0] * y[1];

        for (size_t j = 1; j < 6; ++j) {
          feedback = __builtin_fma(a[j], y[j + 1], feedback);
        }

        double feed = x[1] + samples[i];

        for (size_t j = 1; j < 6; ++j) {
          feed = __builtin_fma(b[j <= 3 ? j : 6 - j], x[j + 1], feed);
        }

        value = feedback + feed;
      }
      else {
        double first = __builtin_fma(a[0], y[1], x[1]);
        first = __builtin_fma(a[4], y[5], first);
        double second = __builtin_fma(a[1], y[2], samples[i]);
        second = __builtin_fma(a[5], y[6], second);
        double third = __builtin_fma(b[1], x[6] + x[2], a[2] * y[3]);
        double fourth = __builtin_fma(b[2], x[5] + x[3], a[3] * y[4]);
        double fifth = __builtin_fma(b[3], x[4], first);

        // The tail uses two paired sums before the final addition.
        value = (second + third) + (fourth + fifth);
      }

      for (size_t j = 0; j < 6; ++j) {
        x[j] = x[j + 1];
        y[j] = y[j + 1];
      }

      x[6] = samples[i];
      y[6] = value;
      int32_t sample;
      __asm__("fcvtzs %w0, %d1" : "=r"(sample) : "w"(value));

      if (__builtin_isless(value, -32768.0)) {
        sample = -32768;
      }

      if (__builtin_isgreater(value, 32767.0)) {
        sample = 32767;
      }

      output[i] = static_cast<int16_t>(sample);
    }

    input += amount * stride;
    output += amount;
    count -= amount;
  }

  for (size_t i = 0; i < 7; ++i) {
    filter->inputs[i] = x[i];
    filter->outputs[i] = y[i];
  }
}

}
