#include "audio/butterworth.hpp"

namespace nerd {

[[noreturn]] void Unexpected()
  asm("_ZN2nn6detail21UnexpectedDefaultImplEv");

namespace {

int32_t Convert(double value) {
  int32_t result;
  __asm__("fcvtzs %w0, %d1" : "=r"(result) : "w"(value));
  return result;
}

int16_t Clamp(double value) {
  int32_t result = Convert(value);

  if (__builtin_isless(value, -32768.0)) {
    result = -32768;
  }

  if (__builtin_isgreater(value, 32767.0)) {
    result = 32767;
  }

  return static_cast<int16_t>(result);
}

template<size_t Order>
void ApplyFixed(Butterworth* filter, const int16_t* input, int16_t* output,
                size_t count, size_t stride) {
  double x[Order + 1];
  double y[Order + 1];
  double a[Order];
  double b[Order];

  for (size_t i = 0; i <= Order; ++i) {
    x[i] = filter->inputs[i];
    y[i] = filter->outputs[i];
  }

  for (size_t i = 0; i < Order; ++i) {
    a[i] = filter->feedback[i];
    b[i] = filter->feedforward[i];
  }

  double gain = filter->gain;

  while (count != 0) {
    bool block = count >= Order + 1;
    size_t amount = block ? Order + 1 : 1;
    double samples[Order + 1];

    for (size_t i = 0; i < amount; ++i) {
      samples[i] = gain * static_cast<double>(input[i * stride]);
    }

    for (size_t i = 0; i < amount; ++i) {
      double value;

      if constexpr (Order == 2) {
        double feedback = __builtin_fma(a[1], y[2], a[0] * y[1]);
        double feed = __builtin_fma(b[1], x[2], x[1] + samples[i]);
        value = block ? feedback + feed : feed + feedback;
      }
      else if (block) {
        double feedback = a[0] * y[1];

        for (size_t j = 1; j < Order; ++j) {
          feedback = __builtin_fma(a[j], y[j + 1], feedback);
        }

        double feed = __builtin_fma(b[1], x[2], x[1] + samples[i]);
        feed = __builtin_fma(b[2], x[3], feed);
        feed = __builtin_fma(b[1], x[4], feed);
        value = feedback + feed;
      }
      else {
        // The original tail groups terms differently from the block loop.
        double first = __builtin_fma(a[0], y[1], x[1]);
        first = __builtin_fma(a[3], y[4], first);
        double second = __builtin_fma(a[1], y[2], samples[i]);
        second = __builtin_fma(b[1], x[2] + x[4], second);
        double third = __builtin_fma(b[2], x[3], a[2] * y[3]);
        value = (first + second) + third;
      }

      for (size_t j = 0; j < Order; ++j) {
        x[j] = x[j + 1];
        y[j] = y[j + 1];
      }

      x[Order] = samples[i];
      y[Order] = value;
      output[i] = Clamp(value);
    }

    input += amount * stride;
    output += amount;
    count -= amount;
  }

  for (size_t i = 0; i <= Order; ++i) {
    filter->inputs[i] = x[i];
    filter->outputs[i] = y[i];
  }
}

}

void Butterworth::ApplyGeneric(const int16_t* input, int16_t* output,
                               size_t count, size_t stride) {
  if (count == 0) {
    return;
  }

  if (order - 1 > 9) {
    Unexpected();
  }

  for (size_t sample = 0; sample < count; ++sample) {
    double value = gain * static_cast<double>(input[sample * stride]);
    double feed = value;
    double back = 0.0;

    for (size_t i = 0; i < order; ++i) {
      inputs[i] = inputs[i + 1];
      outputs[i] = outputs[i + 1];
      feed = __builtin_fma(feedforward[i], inputs[i], feed);
      back = __builtin_fma(feedback[i], outputs[i], back);
    }

    double result = feed + back;
    inputs[order] = value;
    outputs[order] = result;

    if (__builtin_isgreater(result, 32767.0)) {
      output[sample] = 32767;
    }
    else if (__builtin_isless(result, -32768.0)) {
      output[sample] = -32768;
    }
    else {
      output[sample] = static_cast<int16_t>(Convert(result));
    }
  }
}

void Butterworth::Apply2(const int16_t* input, int16_t* output,
                         size_t count, size_t stride) {
  ApplyFixed<2>(this, input, output, count, stride);
}

void Butterworth::Apply4(const int16_t* input, int16_t* output,
                         size_t count, size_t stride) {
  ApplyFixed<4>(this, input, output, count, stride);
}

}
