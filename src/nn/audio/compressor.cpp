#include "nn/audio/compressor.hpp"

#include <stddef.h>

extern "C" void* memcpy(void*, const void*, size_t);

namespace nn::audio {
namespace {

static float Value(uint32_t bits) {
  return __builtin_bit_cast(float, bits);
}

static uint32_t Bits(float value) {
  return __builtin_bit_cast(uint32_t, value);
}

#define FLOAT_OPERATION(Name, Instruction) \
  static float Name(float first, float second) { \
    float result; \
    asm volatile(Instruction " %s0, %s1, %s2" \
      : "=w"(result) : "w"(first), "w"(second)); \
    return result; \
  }

FLOAT_OPERATION(Add, "fadd");
FLOAT_OPERATION(Subtract, "fsub");
FLOAT_OPERATION(Multiply, "fmul");
FLOAT_OPERATION(Divide, "fdiv");

#undef FLOAT_OPERATION

static float MultiplyAdd(float first, float second, float addend) {
  float result;
  asm volatile("fmadd %s0, %s1, %s2, %s3"
    : "=w"(result) : "w"(first), "w"(second), "w"(addend));
  return result;
}

static int Integer(float value) {
  int result;
  asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
  return result;
}

static float Float(int value) {
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
  return result;
}

static float PowerOfTwo(float exponent) {
  int integer = Integer(exponent);
  float fraction = Multiply(Subtract(exponent, Float(integer)),
    Value(0x3f317218));
  float polynomial = MultiplyAdd(fraction, Value(0x3f8000b0),
    Value(0x3f80022e));
  float power = Multiply(fraction, fraction);
  polynomial = MultiplyAdd(power, Value(0x3eff8ce3), polynomial);
  power = Multiply(fraction, power);
  polynomial = MultiplyAdd(power, Value(0x3e2a879a), polynomial);
  power = Multiply(fraction, power);
  polynomial = MultiplyAdd(power, Value(0x3d328c48), polynomial);
  power = Multiply(fraction, power);
  polynomial = MultiplyAdd(power, Value(0x3c0d2dd2), polynomial);
  uint32_t bits = Bits(polynomial);
  uint32_t adjusted = bits + (uint32_t(integer) << 23);
  return Value((bits & 0x807fffff) | (adjusted & 0x7f800000));
}


static float HalfSquare(float value) {
  double wide;
  asm volatile("fcvt %d0, %s1" : "=w"(wide) : "w"(value));
  double half;
  asm volatile("fmul %d0, %d1, %d2"
    : "=w"(half) : "w"(wide), "w"(0.5));
  double square;
  asm volatile("fmul %d0, %d1, %d2"
    : "=w"(square) : "w"(half), "w"(wide));
  float result;
  asm volatile("fcvt %s0, %d1" : "=w"(result) : "w"(square));
  return result;
}

static float LogLevel(float value) {
  uint32_t bits = Bits(value);
  int exponent = -127;

  if (int32_t(bits) < 0x800000) {
    if ((bits & 0x7fffffff) == 0) {
      return Multiply(Divide(Value(0xcc000000), 0.0f), 10.0f);
    }

    if ((bits & 0x80000000) != 0) {
      return Multiply(0.0f, 10.0f);
    }

    exponent = -152;
    value = Multiply(value, Value(0x4c000000));
    bits = Bits(value);
  }

  if (int32_t(bits) > 0x7f7fffff) {
    return Multiply(Add(value, value), 10.0f);
  }

  if (bits == 0x3f800000) {
    return Multiply(0.0f, 10.0f);
  }

  uint32_t mantissa = bits & 0x7fffff;
  uint32_t adjustment = mantissa + 0x4afb0d;
  float power = Float(exponent + (int32_t(bits) >> 23) +
    int(adjustment >> 23));
  float normalized = Value(((adjustment & 0x800000) | mantissa) ^
    0x3f800000);
  float difference = Add(normalized, -1.0f);
  float halfSquare = HalfSquare(difference);
  float ratio = Divide(difference, Add(difference, 2.0f));
  float square = Multiply(ratio, ratio);
  float fourth = Multiply(square, square);
  float even = Multiply(fourth, MultiplyAdd(fourth, Value(0x3e789e26),
    Value(0x3eccce13)));
  float odd = Multiply(square, MultiplyAdd(fourth, Value(0x3e91e9ee),
    Value(0x3f2aaaaa)));
  float correction = Multiply(ratio, Add(Multiply(difference,
    Multiply(difference, 0.5f)), Add(odd, even)));
  float high = Value(Bits(Subtract(difference, halfSquare)) & 0xfffff000);
  float low = Add(correction, Subtract(Subtract(difference, high),
    halfSquare));
  float result = Multiply(Add(low, high), Value(0xb804ead9));
  result = MultiplyAdd(power, Value(0x355427db), result);
  result = MultiplyAdd(low, Value(0x3ede6000), result);
  result = MultiplyAdd(high, Value(0x3ede6000), result);
  result = MultiplyAdd(power, Value(0x3e9a2080), result);
  return Multiply(result, 10.0f);
}

static float AbsoluteDifference(float first, float second) {
  float result;
  asm volatile("fabd %s0, %s1, %s2"
    : "=w"(result) : "w"(first), "w"(second));
  return result;
}

}

void SetCompressorEffectParameter(const CompressorParameter* parameter,
  CompressorState* state) {
  float inverse = Divide(1.0f, parameter->ratio);
  float makeup = 0.0f;

  if (parameter->makeup_enabled == 1) {
    makeup = MultiplyAdd(Multiply(parameter->threshold, 0.5f),
      Add(inverse, -1.0f), -3.0f);
  }

  state->makeup_gain = makeup;
  float exponent = Multiply(Divide(Add(parameter->output_gain, makeup),
    20.0f), Value(0x40549a78));
  state->output_scale = PowerOfTwo(exponent);
  state->knee_curve = Divide(Subtract(1.0f, inverse), 6.0f);
  state->knee_start = Add(parameter->threshold, -1.5f);
  state->knee_end = Add(parameter->threshold, 1.5f);
  state->smoothing_rate = parameter->attack_rate;
}

void InitializeCompressorEffect(const CompressorParameter* parameter,
  CompressorState* state) {
  auto* bytes = reinterpret_cast<uint8_t*>(state);

  for (unsigned index = 0; index < sizeof(*state); ++index) {
    bytes[index] = 0;
  }

  state->target_gain = 1.0f;
  state->gain = 1.0f;
  SetCompressorEffectParameter(parameter, state);
}


void ApplyCompressorEffect(const CompressorParameter* parameter,
  CompressorState* state, bool enabled, const int** input, int** output,
  int count, CompressorStatisticsInternal* statistics) {
  unsigned channels = parameter->channel_count;

  if (!enabled) {
    for (unsigned channel = 0; channel < channels; ++channel) {
      if (input[channel] != output[channel]) {
        memcpy(output[channel], input[channel], size_t(int64_t(count) * 4));
      }
    }

    return;
  }

  if (statistics != nullptr && parameter->reset_statistics == 1) {
    statistics->peak_energy = 0.0f;
    statistics->minimum_gain = 1.0f;

    for (unsigned channel = 0; channel < channels; ++channel) {
      statistics->channel_peaks[channel] = 0.0f;
    }
  }

  float energy = state->energy;
  float target = state->target_gain;
  float gain = state->gain;
  float rate = state->smoothing_rate;

  if (count >= 1) {
    bool specialized = channels == 1 || channels == 2 || channels == 4 ||
      channels == 6;
    float inverse = Add(Divide(1.0f, parameter->ratio), -1.0f);
    float knee = -state->knee_curve;
    float denominator = 0.0f;

    if (!specialized) {
      denominator = Multiply(Float(channels), Value(0x4e800000));
    }

    for (int frame = 0; frame < count; ++frame) {
      float samples[6] = {};
      float sum = 0.0f;

      for (unsigned channel = 0; channel < channels; ++channel) {
        samples[channel] = Float(input[channel][frame]);
        if (channels != 1) {
          sum = MultiplyAdd(samples[channel], samples[channel], sum);
        }
      }

      float normalized;

      if (channels == 1) {
        float sample = Multiply(samples[0], Value(0x38000000));
        normalized = Multiply(sample, sample);
      }
      else if (channels == 2) {
        normalized = Multiply(sum, Value(0x30000000));
      }
      else if (channels == 4) {
        normalized = Multiply(sum, Value(0x2f800000));
      }
      else if (channels == 6) {
        normalized = Divide(sum, Value(0x4fc00000));
      }
      else {
        normalized = Divide(sum, denominator);
      }

      energy = MultiplyAdd(Subtract(normalized, energy),
        parameter->envelope_rate, energy);
      float level = energy < Value(0x2edbe6ff) ? -100.0f : LogLevel(energy);
      float next = 1.0f;

      if (!(level < state->knee_start)) {
        float attenuation;

        if (!(level < state->knee_end)) {
          attenuation = Multiply(inverse, Subtract(level,
            parameter->threshold));
        }
        else {
          float distance = Subtract(level, state->knee_start);
          attenuation = Multiply(distance, Multiply(distance, knee));
        }

        float exponent = specialized ?
          Multiply(attenuation, Value(0x3d4ccccd)) :
          Divide(attenuation, 20.0f);
        next = PowerOfTwo(Multiply(exponent, Value(0x40549a78)));
      }

      float difference = Subtract(target, next);
      float previousTarget = target;
      target = next;

      if (difference > Value(0x3da3d70a)) {
        rate = parameter->attack_rate;
      }
      else if (difference < Value(0xbda3d70a)) {
        rate = parameter->release_rate;
      }
      else if (!(AbsoluteDifference(gain, next) < Value(0x3a83126f))) {
        target = previousTarget;
      }

      gain = MultiplyAdd(Subtract(next, gain), rate, gain);

      for (unsigned channel = 0; channel < channels; ++channel) {
        float sample = Float(input[channel][frame]);
        output[channel][frame] = Integer(Multiply(state->output_scale,
          Multiply(gain, sample)));
      }

      if (statistics != nullptr) {
        float applied = Multiply(state->output_scale, gain);

        if (statistics->minimum_gain < applied) {
          applied = statistics->minimum_gain;
        }

        statistics->minimum_gain = applied;

        if (normalized > statistics->peak_energy) {
          statistics->peak_energy = normalized;

          for (unsigned channel = 0; channel < channels; ++channel) {
            float magnitude = samples[channel] < 0.0f ?
              -samples[channel] : samples[channel];
            statistics->channel_peaks[channel] = Multiply(magnitude,
              Value(0x38000000));
          }
        }
      }
    }
  }

  state->energy = energy;
  state->target_gain = target;
  state->gain = gain;
  state->smoothing_rate = rate;
}

}
