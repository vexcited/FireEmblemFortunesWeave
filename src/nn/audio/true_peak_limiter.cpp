#include "nn/audio/true_peak_limiter.hpp"

#include <arm_neon.h>

extern "C" float expf(float);
extern "C" float powf(float, float);
extern "C" void* memcpy(void*, const void*, size_t);
extern "C" void* memset(void*, int, size_t);

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::audio::dsp {
namespace {

static constexpr uint32_t Interpolation[12][4] = {
  {0x3AE00000, 0xBCEF0000, 0xBC9B0000, 0xBC080000},
  {0x3C340000, 0x3CF00000, 0x3D078000, 0x3C740000},
  {0xBCA10000, 0xBD540000, 0xBD6E8000, 0xBCDA0000},
  {0x3D080000, 0x3DB68000, 0x3DD00000, 0x3D430000},
  {0xBD738000, 0xBE2A8000, 0xBE4D2000, 0xBDD18000},
  {0x3E0CA000, 0x3EEE2000, 0x3F47A000, 0x3F78E000},
  {0x3F78E000, 0x3F47A000, 0x3EEE2000, 0x3E0CA000},
  {0xBDD18000, 0xBE4D2000, 0xBE2A8000, 0xBD738000},
  {0x3D430000, 0x3DD00000, 0x3DB68000, 0x3D080000},
  {0xBCDA0000, 0xBD6E8000, 0xBD540000, 0xBCA10000},
  {0x3C740000, 0x3D078000, 0x3CF00000, 0x3C340000},
  {0xBC080000, 0xBC9B0000, 0xBCEF0000, 0x3AE00000},
};

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

static float32x4_t MultiplyAdd(float32x4_t first, float32x4_t second,
  float32x4_t result) {
  asm volatile("fmla %0.4s, %1.4s, %2.4s"
    : "+w"(result) : "w"(first), "w"(second));
  return result;
}

static float32x2_t Multiply(float32x2_t first, float32x2_t second) {
  float32x2_t result;
  asm volatile("fmul %0.2s, %1.2s, %2.2s"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

static float Rate(int32_t value, bool unsignedValue) {
  float result;

  if (unsignedValue) {
    asm volatile("ucvtf %s0, %w1" : "=w"(result) : "r"(value));
  }
  else {
    asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
  }

  return result;
}

static int32_t Integer(float value) {
  int32_t result;
  asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
  return result;
}

static float Input(int32_t value) {
  auto values = vdup_n_s32(value);
  float32x2_t result;
  asm volatile("scvtf %0.2s, %1.2s, #23" : "=w"(result) : "w"(values));
  return vget_lane_f32(result, 0);
}

static int32_t Output(float value) {
  auto values = vdup_n_f32(value);
  int32x2_t result;
  asm volatile("fcvtzs %0.2s, %1.2s, #23" : "=w"(result) : "w"(values));
  int32_t sample = vget_lane_s32(result, 0);
  sample = sample > -8388608 ? sample : -8388608;
  return sample < 8388607 ? sample : 8388607;
}

static float Reciprocal(float value) {
  auto values = vdup_n_f32(value);
  auto estimate = vrecpe_f32(values);
  estimate = Multiply(estimate, vrecps_f32(values, estimate));
  estimate = Multiply(vrecps_f32(values, estimate), estimate);
  return vget_lane_f32(estimate, 0);
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

static float& History(TruePeakLimiterState* state, int position,
  int channel) {
  unsigned offset = position * state->channel_count + channel;

  if (state->channel_count == 6) {
    offset = channel < 2 ? position * 2 + channel :
      24 + position * 4 + channel - 2;
  }

  return state->history[offset];
}

static float Coefficient(float milliseconds, int32_t sampleRate) {
  if (!Greater(milliseconds, 0.0f)) {
    return 1.0f;
  }

  int32_t rate = sampleRate > 1 ? sampleRate : 1;
  float numerator = Divide(-1.0f, Rate(rate, true));
  float seconds = Divide(milliseconds, 1000.0f);
  return Subtract(1.0f, expf(Divide(numerator, seconds)));
}

}

size_t GetRequiredTruePeakLimiterEffectWorkBufferSize(
  const TruePeakLimiterParameter& parameter) {
  return size_t(parameter.channel_count) * 1064 + 30;
}

void UpdateTruePeakLimiterEffectParameter(
  const TruePeakLimiterParameter& parameter, TruePeakLimiterState* state) {
  state->threshold = powf(10.0f, Multiply(parameter.threshold_db, 0.05f));
  state->attack = Coefficient(parameter.attack_ms, parameter.sample_rate);
  state->release = Coefficient(parameter.release_ms, parameter.sample_rate);
  int32_t lookahead = Integer(Multiply(Divide(parameter.lookahead_ms,
    1000.0f), Rate(parameter.sample_rate, false)));
  state->lookahead = lookahead > 1 ? lookahead : 1;
}

void InitializeTruePeakLimiterEffect(const TruePeakLimiterParameter& parameter,
  TruePeakLimiterState* state, void* buffer, size_t) {
  *state = {};
  state->channel_count = parameter.channel_count;
  UpdateTruePeakLimiterEffectParameter(parameter, state);
  uintptr_t position = (uintptr_t(buffer) + 3) & ~uintptr_t(3);
  size_t channels = state->channel_count;
  state->envelope = reinterpret_cast<float*>(position);
  memset(state->envelope, 0, channels * 4);
  position += channels * 4;
  state->gain = reinterpret_cast<float*>(position);

  for (size_t channel = 0; channel < channels; ++channel) {
    state->gain[channel] = 1.0f;
  }

  position += channels * 4;
  state->delay = reinterpret_cast<float*>(position);
  memset(state->delay, 0, channels * 1000);
  position = (position + channels * 1000 + 15) & ~uintptr_t(15);
  state->history = reinterpret_cast<float*>(position);
  memset(state->history, 0, channels * 48);
  position += channels * 48;
  state->peak = reinterpret_cast<float*>(position);
  memset(state->peak, 0, channels * 4);
  state->minimum_gain = reinterpret_cast<float*>(position + channels * 4);

  for (size_t channel = 0; channel < channels; ++channel) {
    state->minimum_gain[channel] = 1.0f;
  }
}

void ApplyTruePeakLimiterEffect(TruePeakLimiterState* state, bool enabled,
  const int32_t** input, int32_t** output, int count) {
  int channels = state->channel_count;

  for (int channel = 0; channel < channels; ++channel) {
    state->peak[channel] = 0.0f;
    state->minimum_gain[channel] =
      __builtin_bit_cast(float, uint32_t(0x7F7FFFFF));
  }

  if (!enabled) {
    for (int channel = 0; channel < channels; ++channel) {
      if (output[channel] != input[channel]) {
        memcpy(output[channel], input[channel], size_t(count) * 4);
      }

      state->peak[channel] = 0.0f;
      state->minimum_gain[channel] = 1.0f;
    }

    return;
  }

  if (channels != 1 && channels != 2 && channels != 4 && channels != 6) {
    nn::detail::UnexpectedDefaultImpl();
  }

  bool mono = channels == 1;

  for (int sample = 0; sample < count; ++sample) {
    int position = state->history_position;
    float samples[6];

    for (int channel = 0; channel < channels; ++channel) {
      samples[channel] = Input(input[channel][sample]);
      History(state, position, channel) = samples[channel];
    }

    for (int channel = 0; channel < channels; ++channel) {
      float32x4_t phases = {};

      for (int tap = 0; tap < 12; ++tap) {
        int index = (position + 1 + tap) % 12;
        auto coefficients = vreinterpretq_f32_u32(vld1q_u32(
          Interpolation[tap]));
        phases = MultiplyAdd(coefficients,
          vdupq_n_f32(History(state, index, channel)), phases);
      }

      auto absolute = vabsq_f32(phases);
      auto pair = vpmax_f32(vget_high_f32(absolute), vget_low_f32(absolute));
      float peak = vget_lane_f32(vpmax_f32(pair, pair), 0);
      float32x2_t raw = {History(state, (position + 6) % 12, channel),
        History(state, (position + 7) % 12, channel)};
      raw = vabs_f32(raw);
      float amplitude;

      if (mono) {
        float maximum = vget_lane_f32(vpmax_f32(raw, raw), 0);
        amplitude = VectorGreater(maximum, peak) ? maximum : peak;
      }
      else {
        amplitude = Maximum(peak,
          Maximum(vget_lane_f32(raw, 0), vget_lane_f32(raw, 1)));
      }

      float envelope = state->envelope[channel];
      bool attack = mono ? Greater(amplitude, envelope) :
        VectorGreater(amplitude, envelope);
      envelope = Smooth(envelope, amplitude,
        attack ? state->attack : state->release, mono);
      float reciprocal = Reciprocal(envelope);
      float target = mono ? Multiply(state->threshold, reciprocal) :
        Multiply(reciprocal, state->threshold);
      bool limited = mono ? Greater(envelope, state->threshold) :
        VectorGreater(envelope, state->threshold);
      target = limited ? target : 1.0f;
      float gain = state->gain[channel];
      attack = mono ? Less(target, gain) : VectorGreater(gain, target);
      gain = Smooth(gain, target, attack ? state->attack : state->release,
        mono);
      unsigned delayIndex = state->delay_position * channels + channel;
      float delayed = state->delay[delayIndex];
      state->delay[delayIndex] = samples[channel];
      output[channel][sample] = Output(Multiply(delayed, gain));
      state->envelope[channel] = envelope;
      state->gain[channel] = gain;

      if (mono) {
        state->peak[channel] = Less(peak, state->peak[channel]) ?
          state->peak[channel] : peak;
        state->minimum_gain[channel] =
          Less(state->minimum_gain[channel], gain) ?
          state->minimum_gain[channel] : gain;
      }
      else {
        state->peak[channel] = Maximum(peak, state->peak[channel]);
        state->minimum_gain[channel] = Minimum(gain,
          state->minimum_gain[channel]);
      }
    }

    state->history_position = (position + 1) % 12;
    state->delay_position = (state->delay_position + 1) % state->lookahead;
  }
}

void ApplyTruePeakLimiterEffect(TruePeakLimiterState* state, bool enabled,
  const int32_t** input, int32_t** output, int count,
  TruePeakLimiterStatistics* statistics) {
  ApplyTruePeakLimiterEffect(state, enabled, input, output, count);

  for (int channel = 0; channel < state->channel_count; ++channel) {
    statistics->peak[channel] = state->peak[channel];
    statistics->minimum_gain[channel] = state->minimum_gain[channel];
  }

  for (int channel = state->channel_count; channel < 6; ++channel) {
    statistics->peak[channel] = 0.0f;
    statistics->minimum_gain[channel] = 1.0f;
  }
}

}
