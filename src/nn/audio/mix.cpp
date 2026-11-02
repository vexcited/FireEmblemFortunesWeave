#include "nn/audio/mix.hpp"

#include <arm_neon.h>

#pragma clang fp contract(off)

namespace nn::audio::dsp {

template<int Fraction>
static int32x4_t Scale(int32x4_t input, int32x4_t gain) {
  return vcombine_s32(
    vqrshrn_n_s64(vmull_s32(vget_low_s32(input), vget_low_s32(gain)),
                   Fraction),
    vqrshrn_n_s64(vmull_high_s32(input, gain), Fraction));
}

template<int Fraction>
static bool SmallGain(int32_t gain) {
  return gain >= -(1 << Fraction) && gain < (1 << Fraction);
}

template<int Fraction>
static int32_t Fixed(float value) {
  int32_t result;
  // Empty buffers still update floating-point exception flags.
  asm volatile("fcvtzs %w0, %s1, %2" : "=r"(result)
               : "w"(value), "i"(Fraction));
  return result;
}

static float Fma(float first, float second, float addend) {
  float result;
  asm("fmadd %s0, %s1, %s2, %s3" : "=w"(result)
      : "w"(first), "w"(second), "w"(addend));
  return result;
}

template<int Fraction>
void ApplyMix1(int32_t* output, const int32_t* input, int gain, int count) {
  for (int index = 0; index < count; ++index) {
    uint64_t product = uint64_t(int64_t(input[index]) * gain)
      + (uint64_t{1} << (Fraction - 1));
    output[index] = uint32_t(output[index]) + uint32_t(product >> Fraction);
  }
}

template<int Fraction>
void ApplyMix2(int32_t* output, const int32_t* input, int gain, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 2) {
    int32x2_t value = vld1_s32(input);

    if (gain != (1 << Fraction)) {
      value = vqrshrn_n_s64(vmull_n_s32(value, gain), Fraction);
    }

    vst1_s32(output, vqadd_s32(vld1_s32(output), value));
    input += 2;
    output += 2;
  }
}

template<int Fraction>
void ApplyMix4(int32_t* output, const int32_t* input, int gain, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    int32x4_t value = vld1q_s32(input);

    if (gain != (1 << Fraction)) {
      if (SmallGain<Fraction>(gain)) {
        value = vqrdmulhq_n_s32(value,
          int32_t(uint32_t(gain) << (31 - Fraction)));
      }
      else {
        value = Scale<Fraction>(value, vdupq_n_s32(gain));
      }
    }

    vst1q_s32(output, vqaddq_s32(vld1q_s32(output), value));
    input += 4;
    output += 4;
  }
}

template<int Fraction>
void ApplyMix(int32_t* output, const int32_t* input, int gain, int count) {
  ApplyMix4<Fraction>(output, input, gain, count);
}

template<int Fraction>
void ApplyMixRamp1(int32_t* output, const int32_t* input, int gain,
                   int step, int count) {
  uint64_t current = int64_t(gain);

  for (int index = 0; index < count; ++index) {
    uint64_t product = current * uint64_t(int64_t(input[index]))
      + (uint64_t{1} << (Fraction - 1));
    output[index] = uint32_t(output[index]) + uint32_t(product >> Fraction);
    current += int64_t(step);
  }
}

template<int Fraction>
void ApplyMixRamp2(int32_t* output, const int32_t* input, int gain,
                   int step, int count) {
  if (step == 0) {
    ApplyMix2<Fraction>(output, input, gain, count);
    return;
  }

  uint32_t lanes[] = {uint32_t(gain), uint32_t(gain) + uint32_t(step)};
  int32x2_t current = vreinterpret_s32_u32(vld1_u32(lanes));
  int32x2_t increment = vdup_n_s32(uint32_t(step) * 2);

  for (uint32_t remaining = count; remaining != 0; remaining -= 2) {
    int32x2_t value = vqrshrn_n_s64(vmull_s32(vld1_s32(input), current),
                                    Fraction);
    current = vadd_s32(current, increment);
    vst1_s32(output, vqadd_s32(vld1_s32(output), value));
    input += 2;
    output += 2;
  }
}

template<int Fraction>
void ApplyMixRamp4(int32_t* output, const int32_t* input, int gain,
                   int step, int count) {
  if (step == 0) {
    ApplyMix4<Fraction>(output, input, gain, count);
    return;
  }

  bool small = SmallGain<Fraction>(gain)
    && SmallGain<Fraction>(uint32_t(gain) + uint32_t(count) * uint32_t(step));
  uint32_t lanes[4];

  for (unsigned index = 0; index < 4; ++index) {
    lanes[index] = uint32_t(gain) + index * uint32_t(step);

    if (small) {
      lanes[index] <<= 31 - Fraction;
    }
  }

  uint32_t delta = uint32_t(step) * 4;

  if (small) {
    delta <<= 31 - Fraction;
  }

  int32x4_t current = vreinterpretq_s32_u32(vld1q_u32(lanes));
  int32x4_t increment = vdupq_n_s32(delta);

  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    int32x4_t value = vld1q_s32(input);
    value = small ? vqrdmulhq_s32(value, current)
      : Scale<Fraction>(value, current);
    current = vaddq_s32(current, increment);
    vst1q_s32(output, vqaddq_s32(vld1q_s32(output), value));
    input += 4;
    output += 4;
  }
}

void ApplyMix(int32_t* output, const int32_t* input, float gain,
               int count, bool high_precision) {
  if (!(__builtin_fabsf(gain) > 128.0f) && high_precision) {
    ApplyMix4<23>(output, input, Fixed<23>(gain), count);
  }
  else {
    ApplyMix4<15>(output, input, Fixed<15>(gain), count);
  }
}

void ApplyMix1(float* output, const float* input, float gain, int count) {
  for (int index = 0; index < count; ++index) {
    output[index] = Fma(input[index], gain, output[index]);
  }
}

void ApplyMix4(float* output, const float* input, float gain, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_f32(output, vfmaq_n_f32(vld1q_f32(output), vld1q_f32(input), gain));
    input += 4;
    output += 4;
  }
}

void ApplyMix(float* output, const float* input, float gain, int count) {
  ApplyMix4(output, input, gain, count);
}

int ApplyMixRamp(int32_t* output, const int32_t* input, float gain,
                 float step, int count, bool high_precision) {
  int32_t previous = output[count - 1];

  if (!(__builtin_fabsf(gain) > 128.0f) && high_precision
      && !(__builtin_fabsf(Fma(step, float(count), gain)) > 128.0f)) {
    ApplyMixRamp4<23>(output, input, Fixed<23>(gain),
                      Fixed<23>(step), count);
  }
  else {
    ApplyMixRamp4<15>(output, input, Fixed<15>(gain),
                      Fixed<15>(step), count);
  }

  return uint32_t(output[count - 1]) - uint32_t(previous);
}

void ApplyMixRamp1(float* output, const float* input, float gain,
                   float step, int count) {
  for (int index = 0; index < count; ++index) {
    output[index] = Fma(input[index], gain, output[index]);
    gain = step + gain;
  }
}

void ApplyMixRamp4(float* output, const float* input, float gain,
                   float step, int count) {
  if (count == 0) {
    return;
  }

  float lanes[4] = {gain, gain + step};
  lanes[2] = step + lanes[1];
  lanes[3] = step + lanes[2];
  float32x4_t current = vld1q_f32(lanes);
  float32x4_t increment = vdupq_n_f32(step * 4.0f);

  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_f32(output,
      vfmaq_f32(vld1q_f32(output), current, vld1q_f32(input)));
    current = vaddq_f32(increment, current);
    input += 4;
    output += 4;
  }
}

float ApplyMixRamp(float* output, const float* input, float gain,
                    float step, int count) {
  float previous = output[count - 1];
  ApplyMixRamp4(output, input, gain, step, count);
  return output[count - 1] - previous;
}

template void ApplyMix<15>(int32_t*, const int32_t*, int, int);
template void ApplyMix1<15>(int32_t*, const int32_t*, int, int);
template void ApplyMix2<15>(int32_t*, const int32_t*, int, int);
template void ApplyMix4<15>(int32_t*, const int32_t*, int, int);
template void ApplyMixRamp1<15>(int32_t*, const int32_t*,
                                 int, int, int);
template void ApplyMixRamp2<15>(int32_t*, const int32_t*,
                                 int, int, int);
template void ApplyMixRamp4<15>(int32_t*, const int32_t*,
                                 int, int, int);

template void ApplyMix<23>(int32_t*, const int32_t*, int, int);
template void ApplyMix1<23>(int32_t*, const int32_t*, int, int);
template void ApplyMix2<23>(int32_t*, const int32_t*, int, int);
template void ApplyMix4<23>(int32_t*, const int32_t*, int, int);
template void ApplyMixRamp1<23>(int32_t*, const int32_t*,
                                 int, int, int);
template void ApplyMixRamp2<23>(int32_t*, const int32_t*,
                                 int, int, int);
template void ApplyMixRamp4<23>(int32_t*, const int32_t*,
                                 int, int, int);

}
