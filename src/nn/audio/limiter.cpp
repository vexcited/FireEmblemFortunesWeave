#include "nn/audio/limiter.hpp"

extern "C" float expf(float);
extern "C" void* memset(void*, int, size_t);

namespace nn::audio {
namespace {

static float Multiply(float first, float second) {
  float result;
  asm volatile("fmul %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Divide(float first, float second) {
  float result;
  asm volatile("fdiv %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Subtract(float first, float second) {
  float result;
  asm volatile("fsub %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float MultiplyAdd(float first, float second, float addend) {
  float result;
  asm volatile("fmadd %s0, %s1, %s2, %s3"
    : "=w"(result) : "w"(first), "w"(second), "w"(addend));
  return result;
}

static float MultiplySubtract(float first, float second, float minuend) {
  float result;
  asm volatile("fmsub %s0, %s1, %s2, %s3"
    : "=w"(result) : "w"(first), "w"(second), "w"(minuend));
  return result;
}

static float Float(int32_t value) {
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
  return result;
}

static float Float(int64_t value) {
  float result;
  asm volatile("scvtf %s0, %1" : "=w"(result) : "r"(value));
  return result;
}

static float Float(uint32_t value) {
  float result;
  asm volatile("ucvtf %s0, %w1" : "=w"(result) : "r"(value));
  return result;
}

static int32_t Integer(float value) {
  int32_t result;
  asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
  return result;
}

static int32_t Quotient(int32_t first, int32_t second) {
  int32_t result;
  asm volatile("sdiv %w0, %w1, %w2"
    : "=r"(result) : "r"(first), "r"(second));
  return result;
}

static int32_t Increment(int32_t value) {
  return uint32_t(value) + 1;
}

static float Exponential(int64_t time, uint32_t rate) {
  float seconds = Divide(Float(time / 1000), 1000000.0f);
  return expf(Divide(-1.0f, Multiply(seconds, Float(rate))));
}

}

void InitializeLimiterEffect(LimiterParameter* parameter, LimiterState* state,
  void* buffer, size_t, int threshold) {
  *state = {};
  float frames = Multiply(Divide(Float(parameter->lookahead_time / 1000),
    1000.0f), Float(parameter->sample_rate / 1000));
  int32_t length;
  asm volatile("fcvtps %w0, %s1" : "=r"(length) : "w"(frames));
  parameter->attack_exponential = Exponential(parameter->attack_time,
    parameter->sample_rate);
  parameter->release_exponential = Exponential(parameter->release_time,
    parameter->sample_rate);
  parameter->threshold = threshold;
  parameter->delay_length = length;
  parameter->attack_complement = Subtract(1.0f,
    parameter->attack_exponential);
  parameter->release_complement = Subtract(1.0f,
    parameter->release_exponential);
  auto* position = static_cast<unsigned char*>(buffer) + 152;
  state->delay = reinterpret_cast<LimiterDelay*>(position);
  position += 16 * parameter->maximum_channel_count;

  for (unsigned channel = 0; channel < parameter->maximum_channel_count;
    ++channel) {
    auto& delay = state->delay[channel];
    delay.position = 0;
    delay.length = length;
    delay.samples = reinterpret_cast<int32_t*>(position);
    memset(delay.samples, 0, size_t(int64_t(length) * 4));
    position += int64_t(length) * 4;
  }

  state->predicted_samples = reinterpret_cast<int32_t**>(position);
  position += 8 * parameter->maximum_channel_count;

  for (unsigned channel = 0; channel < parameter->maximum_channel_count;
    ++channel) {
    state->predicted_samples[channel] = reinterpret_cast<int32_t*>(position);
    memset(state->predicted_samples[channel], 0, size_t(int64_t(length) * 4));
    position += int64_t(length) * 4;
  }

  state->envelope = reinterpret_cast<int32_t*>(position);
  state->maximum = state->envelope + parameter->maximum_channel_count;
  state->maximum_position = state->maximum + parameter->maximum_channel_count;
  position = reinterpret_cast<unsigned char*>(state->maximum_position +
    parameter->maximum_channel_count);

  for (unsigned channel = 0; channel < parameter->maximum_channel_count;
    ++channel) {
    state->envelope[channel] = 0;
    state->maximum[channel] = 0;
    state->maximum_position[channel] = 0;
  }

  state->average = reinterpret_cast<LimiterAverage*>(position);
  position += 24 * parameter->maximum_channel_count;

  for (unsigned channel = 0; channel < parameter->maximum_channel_count;
    ++channel) {
    auto& average = state->average[channel];
    average.sum = 0;
    average.length = length;
    average.position = 0;
    average.samples = reinterpret_cast<int32_t*>(position);
    position += int64_t(average.length) * 4;
  }

  state->maximum_age = reinterpret_cast<int32_t*>(position);
  state->prediction_position = state->maximum_age +
    parameter->maximum_channel_count;
}

void ApplyLimiterEffectSequential(const LimiterParameter* parameter,
  LimiterState* state, const int32_t** input, int32_t** output,
  unsigned count) {
  for (unsigned channel = 0; channel < parameter->channel_count; ++channel) {
    for (unsigned sample = 0; sample < count; ++sample) {
      int32_t value = input[channel][sample];
      int32_t magnitude = value < 0 ? uint32_t(0) - uint32_t(value) : value;
      int32_t envelope = state->envelope[channel];
      bool attack = magnitude > envelope;
      float prediction = attack ? parameter->attack_prediction :
        parameter->release_prediction;
      float difference = MultiplySubtract(prediction, Float(envelope),
        Float(uint32_t(magnitude)));
      int32_t predicted = Integer(Divide(difference,
        Subtract(1.0f, prediction)));
      predicted = magnitude > predicted ? magnitude : predicted;
      int32_t maximum = state->maximum[channel];
      int32_t position = state->prediction_position[channel];
      int32_t maximumPosition = state->maximum_position[channel];
      int32_t age = state->maximum_age[channel];
      int32_t length = parameter->delay_length;
      int32_t* samples = state->predicted_samples[channel];

      if (predicted >= maximum || (age > length && length < 1)) {
        age = 0;
        maximumPosition = position;
        maximum = predicted;
      }
      else if (age > length) {
        int32_t current = maximumPosition;
        age = 0;
        maximum = predicted;
        maximumPosition = position;

        for (int32_t index = 0; index < length; ++index) {
          current = Increment(current);
          current = current >= length ? uint32_t(current) - length : current;
          int32_t next = samples[current];

          if (next >= maximum) {
            maximumPosition = current;
            age = uint32_t(position) - current;
            age = age < 0 ? uint32_t(age) + length : age;
          }

          maximum = next > maximum ? next : maximum;
        }
      }

      samples[position] = predicted;
      state->maximum_position[channel] = maximumPosition;
      state->maximum[channel] = maximum;
      state->maximum_age[channel] = Increment(age);
      state->prediction_position[channel] = Increment(position) < length ?
        Increment(position) : 0;
      float exponential = attack ? parameter->attack_exponential :
        parameter->release_exponential;
      float complement = attack ? parameter->attack_complement :
        parameter->release_complement;
      float smoothed = MultiplyAdd(exponential, Float(maximum),
        Multiply(complement, Float(state->envelope[channel])));
      int32_t smoothedInteger = Integer(smoothed);
      auto& average = state->average[channel];
      average.sum = uint32_t(average.sum) + smoothedInteger -
        average.samples[average.position];
      average.samples[average.position] = smoothedInteger;
      average.position = Increment(average.position) < average.length ?
        Increment(average.position) : 0;
      envelope = Quotient(average.sum, average.length);
      float gain = Divide(Float(parameter->threshold), Float(envelope));
      auto& delay = state->delay[channel];
      int32_t delayed = delay.samples[delay.position];
      delay.samples[delay.position] = input[channel][sample];
      delay.position = Increment(delay.position) < delay.length ?
        Increment(delay.position) : 0;
      float one = 1.0f;
      asm volatile("fminnm %s0, %s1, %s2"
        : "=w"(gain) : "w"(gain), "w"(one));
      int32_t result = Integer(Multiply(gain, Float(delayed)));
      output[channel][sample] = result;
      state->envelope[channel] = envelope;
      result = result > parameter->threshold ? parameter->threshold : result;

      if (int64_t(result) + parameter->threshold < 0) {
        result = uint32_t(0) - uint32_t(parameter->threshold);
      }

      output[channel][sample] = result;
    }
  }
}

}
