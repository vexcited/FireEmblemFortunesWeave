#include "nn/audio/light_limiter.hpp"

#include <arm_neon.h>

extern "C" void* memcpy(void*, const void*, size_t);

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

static bool Greater(float first, float second) {
  unsigned result;
  asm volatile("fcmp %s1, %s2\n cset %w0, gt"
    : "=r"(result) : "w"(first), "w"(second) : "cc");
  return result != 0;
}

static bool Less(float first, float second) {
  unsigned result;
  asm volatile("fcmp %s1, %s2\n cset %w0, mi"
    : "=r"(result) : "w"(first), "w"(second) : "cc");
  return result != 0;
}

static bool VectorGreater(float first, float second) {
  uint32x2_t result;
  auto left = vdup_n_f32(first);
  auto right = vdup_n_f32(second);
  asm volatile("fcmgt %0.2s, %1.2s, %2.2s"
    : "=w"(result) : "w"(left), "w"(right));
  return vget_lane_u32(result, 0) != 0;
}

static float Maximum(float first, float second) {
  float32x2_t result;
  auto left = vdup_n_f32(first);
  auto right = vdup_n_f32(second);
  asm volatile("fmax %0.2s, %1.2s, %2.2s"
    : "=w"(result) : "w"(left), "w"(right));
  return vget_lane_f32(result, 0);
}

static float Minimum(float first, float second) {
  float32x2_t result;
  auto left = vdup_n_f32(first);
  auto right = vdup_n_f32(second);
  asm volatile("fmin %0.2s, %1.2s, %2.2s"
    : "=w"(result) : "w"(left), "w"(right));
  return vget_lane_f32(result, 0);
}

static float Smooth(float previous, float next, float coefficient,
  bool mono) {
  float difference = Subtract(next, previous);

  if (mono) {
    return MultiplyAdd(coefficient, difference, previous);
  }

  auto result = vdup_n_f32(previous);
  auto first = vdup_n_f32(difference);
  auto second = vdup_n_f32(coefficient);
  asm volatile("fmla %0.2s, %1.2s, %2.2s"
    : "+w"(result) : "w"(first), "w"(second));
  return vget_lane_f32(result, 0);
}

static float Input(int32_t value, float gain, bool mono) {
  float result;

  if (mono) {
    asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
    return Multiply(gain, Multiply(result, 0x1p-15f));
  }

  auto values = vdup_n_s32(value);
  float32x2_t converted;
  asm volatile("scvtf %0.2s, %1.2s, #15"
    : "=w"(converted) : "w"(values));
  return Multiply(vget_lane_f32(converted, 0), gain);
}

static float AbsoluteMono(int32_t value, float gain, float sample) {
  float converted;
  asm volatile("scvtf %s0, %w1" : "=w"(converted) : "r"(value));
  converted = Multiply(converted, 0x1p-15f);
  float negative;
  asm volatile("fnmul %s0, %s1, %s2"
    : "=w"(negative) : "w"(gain), "w"(converted));
  return Less(sample, 0.0f) ? negative : sample;
}

static float Reciprocal(float value, bool fast, bool sixChannels,
  bool upperChannels) {
  auto values = vdup_n_f32(value);
  auto estimate = vrecpe_f32(values);

  if (!fast || sixChannels) {
    float32x2_t refined;
    auto correction = vrecps_f32(values, estimate);
    asm volatile("fmul %0.2s, %1.2s, %2.2s"
      : "=w"(refined) : "w"(estimate), "w"(correction));
    correction = vrecps_f32(values, refined);
    asm volatile("fmul %0.2s, %1.2s, %2.2s"
      : "=w"(refined) : "w"(refined), "w"(correction));

    if (!fast || upperChannels) {
      estimate = refined;
    }
  }

  return vget_lane_f32(estimate, 0);
}

static int32_t Output(float value, bool mono) {
  if (mono) {
    value = Multiply(value, 32768.0f);
    value = Greater(value, 8388607.0f) ? 8388607.0f : value;
    float lower = -8388608.0f;
    asm volatile("fmaxnm %s0, %s1, %s2"
      : "=w"(value) : "w"(value), "w"(lower));
    int32_t result;
    asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
    return result;
  }

  auto values = vdup_n_f32(value);
  int32x2_t result;
  asm volatile("fcvtzs %0.2s, %1.2s, #15"
    : "=w"(result) : "w"(values));
  return vget_lane_s32(result, 0);
}

}

void ResetLightLimiterWorkBuffer(const LightLimiterParameter* parameter,
  LightLimiterState* state) {
  for (unsigned channel = 0; channel < parameter->channel_count; ++channel) {
    state->envelope[channel] = 0.0f;
    state->gain[channel] = 1.0f;
    state->position[channel] = 0;
  }

  int32_t count = uint32_t(parameter->capacity) * parameter->channel_count;

  if (count > 0) {
    for (int64_t index = 0; index <
      int64_t(parameter->capacity) * parameter->channel_count; ++index) {
      state->delay[index] = 0.0f;
    }
  }
}

void InitializeLightLimiterEffect(const LightLimiterParameter* parameter,
  LightLimiterState* state, void* buffer) {
  *state = {};
  state->envelope = static_cast<float*>(buffer);
  state->gain = state->envelope + parameter->channel_count;
  state->delay = state->gain + parameter->channel_count;
  state->position = reinterpret_cast<int32_t*>(state->delay +
    int64_t(parameter->channel_count) * parameter->capacity);
  ResetLightLimiterWorkBuffer(parameter, state);
}

void UpdateLightLimiterEffectParameter(const LightLimiterParameter*,
  LightLimiterState*) {
}

void ApplyLightLimiterEffect(const LightLimiterParameter* parameter,
  LightLimiterState* state, bool enabled, const int32_t** input,
  int32_t** output, int count, LightLimiterStatisticsInternal* statistics) {
  int channels = parameter->channel_count;

  if (enabled && statistics && parameter->reset_statistics == 1) {
    for (int channel = 0; channel < channels; ++channel) {
      statistics->peak[channel] = 0.0f;
      statistics->minimum_gain[channel] = 1.0f;
    }
  }

  if (!enabled || (channels != 0 && channels != 1 && channels != 2 &&
    channels != 4 && channels != 6)) {
    for (int channel = 0; channel < channels; ++channel) {
      if (output[channel] != input[channel]) {
        memcpy(output[channel], input[channel], size_t(count) * 4);
      }
    }

    return;
  }

  if (!channels) {
    return;
  }

  bool mono = channels == 1;
  int positionIndex = channels == 4 ? 1 : 0;

  for (int sample = 0; sample < count; ++sample) {
    int position = state->position[positionIndex];

    for (int channel = 0; channel < channels; ++channel) {
      float value = Input(input[channel][sample], parameter->input_gain, mono);
      float amplitude = mono ? AbsoluteMono(input[channel][sample],
        parameter->input_gain, value) : __builtin_fabsf(value);
      float envelope = state->envelope[channel];
      bool attack = mono ? Greater(amplitude, envelope) :
        VectorGreater(amplitude, envelope);
      envelope = Smooth(envelope, amplitude,
        attack ? parameter->attack : parameter->release, mono);
      float target = 1.0f;

      if (mono) {
        if (Greater(envelope, parameter->threshold)) {
          target = Divide(parameter->threshold, envelope);
        }
      }
      else {
        float reciprocal = Reciprocal(envelope,
          parameter->fast_reciprocal == 1, channels == 6, channel >= 2);
        float limited = Multiply(reciprocal, parameter->threshold);
        target = VectorGreater(envelope, parameter->threshold) ? limited :
          1.0f;
      }

      float gain = state->gain[channel];
      attack = mono ? Less(target, gain) : VectorGreater(gain, target);
      gain = Smooth(gain, target,
        attack ? parameter->attack : parameter->release, mono);
      float delayed = state->delay[position * channels + channel];
      state->delay[position * channels + channel] = value;
      state->envelope[channel] = envelope;
      state->gain[channel] = gain;

      if (statistics) {
        float oldPeak = statistics->peak[channel];
        float oldMinimum = statistics->minimum_gain[channel];
        statistics->peak[channel] = mono ?
          (Greater(oldPeak, amplitude) ? oldPeak : amplitude) :
          Maximum(oldPeak, amplitude);
        statistics->minimum_gain[channel] = mono ?
          (Less(oldMinimum, gain) ? oldMinimum : gain) :
          Minimum(oldMinimum, gain);
      }

      float result = channels == 6 && channel < 2 ?
        Multiply(gain, delayed) : Multiply(delayed, gain);
      output[channel][sample] = Output(Multiply(result,
        parameter->output_gain), mono);
    }

    ++state->position[positionIndex];

    while (state->position[positionIndex] >= parameter->delay_length) {
      state->position[positionIndex] -= parameter->delay_length;
    }
  }
}

}
