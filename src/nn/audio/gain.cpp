#include "nn/audio/gain.hpp"

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
void ApplyUniformGain1(int32_t* output, const int32_t* input,
  int gain, int count) {
  for (int index = 0; index < count; ++index) {
    uint64_t product = uint64_t(int64_t(input[index]) * gain)
      + (uint64_t{1} << (Fraction - 1));
    output[index] = uint32_t(product >> Fraction);
  }
}

template<int Fraction>
void ApplyUniformGain2(int32_t* output, const int32_t* input,
  int gain, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 2) {
    int32x2_t value = vld1_s32(input);
    value = vqrshrn_n_s64(vmull_n_s32(value, gain), Fraction);

    vst1_s32(output, value);
    input += 2;
    output += 2;
  }
}

template<int Fraction>
void ApplyUniformGain4(int32_t* output, const int32_t* input,
  int gain, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    int32x4_t value = vld1q_s32(input);

    if (SmallGain<Fraction>(gain)) {
      value = vqrdmulhq_n_s32(value,
        int32_t(uint32_t(gain) << (31 - Fraction)));
    }
    else {
      value = Scale<Fraction>(value, vdupq_n_s32(gain));
    }

    vst1q_s32(output, value);
    input += 4;
    output += 4;
  }
}

template<int Fraction>
void ApplyLinearEnvelopeGain1(int32_t* output, const int32_t* input, int gain,
  int step, int count) {
  uint64_t current = int64_t(gain);

  for (int index = 0; index < count; ++index) {
    uint64_t product = current * uint64_t(int64_t(input[index]))
      + (uint64_t{1} << (Fraction - 1));
    output[index] = uint32_t(product >> Fraction);
    current += int64_t(step);
  }
}

template<int Fraction>
void ApplyLinearEnvelopeGain2(int32_t* output, const int32_t* input, int gain,
  int step, int count) {
  uint32_t lanes[] = {uint32_t(gain), uint32_t(gain) + uint32_t(step)};
  int32x2_t current = vreinterpret_s32_u32(vld1_u32(lanes));
  int32x2_t increment = vdup_n_s32(uint32_t(step) * 2);

  for (uint32_t remaining = count; remaining != 0; remaining -= 2) {
    int32x2_t value = vqrshrn_n_s64(vmull_s32(vld1_s32(input), current),
                       Fraction);
    current = vadd_s32(current, increment);
    vst1_s32(output, value);
    input += 2;
    output += 2;
  }
}

template<int Fraction>
void ApplyLinearEnvelopeGain4(int32_t* output, const int32_t* input, int gain,
  int step, int count) {
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
    vst1q_s32(output, value);
    input += 4;
    output += 4;
  }
}

void ApplyUniformGain(int32_t* output, const int32_t* input, int gain,
                      int count, int fraction) {
  if (fraction == 15) {
    ApplyUniformGain4<15>(output, input, gain, count);
  }
  else if (fraction == 23) {
    ApplyUniformGain4<23>(output, input, gain, count);
  }
}

void ApplyLinearEnvelopeGain(int32_t* output, const int32_t* input,
                             int gain, int step, int count, int fraction) {
  if (fraction == 15) {
    ApplyLinearEnvelopeGain4<15>(output, input, gain, step, count);
  }
  else if (fraction == 23) {
    ApplyLinearEnvelopeGain4<23>(output, input, gain, step, count);
  }
}

static float Multiply(float first, float second) {
  float result;
  asm volatile("fmul %s0, %s1, %s2" : "=w"(result)
               : "w"(first), "w"(second));
  return result;
}

static float Add(float first, float second) {
  float result;
  asm volatile("fadd %s0, %s1, %s2" : "=w"(result)
               : "w"(first), "w"(second));
  return result;
}

static float Fma(float first, float second, float addend) {
  float result;
  asm volatile("fmadd %s0, %s1, %s2, %s3" : "=w"(result)
               : "w"(first), "w"(second), "w"(addend));
  return result;
}

static float32x4_t Multiply(float32x4_t first, float32x4_t second) {
  float32x4_t result;
  asm volatile("fmul %0.4s, %1.4s, %2.4s" : "=w"(result)
               : "w"(first), "w"(second));
  return result;
}

static float32x4_t Add(float32x4_t first, float32x4_t second) {
  float32x4_t result;
  asm volatile("fadd %0.4s, %1.4s, %2.4s" : "=w"(result)
               : "w"(first), "w"(second));
  return result;
}

void ApplyUniformGain1(float* output, const float* input, float gain,
                       int count) {
  for (int index = 0; index < count; ++index) {
    output[index] = Multiply(gain, input[index]);
  }
}

void ApplyUniformGain4(float* output, const float* input, float gain,
                       int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_f32(output, Multiply(vld1q_f32(input), vdupq_n_f32(gain)));
    input += 4;
    output += 4;
  }
}

void ApplyUniformGain(float* output, const float* input, float gain,
                      int count) {
  ApplyUniformGain4(output, input, gain, count);
}

void ApplyLinearEnvelopeGain1(float* output, const float* input, float gain,
                              float step, int count) {
  for (int index = 0; index < count; ++index) {
    output[index] = Multiply(gain, input[index]);
    gain = Add(step, gain);
  }
}

void ApplyLinearEnvelopeGain4(float* output, const float* input, float gain,
                              float step, int count) {
  if (count == 0) {
    return;
  }

  // Lane zero also performs the fused multiply, including its FP exceptions.
  float lanes[] = {Fma(step, 0.0f, gain), Add(gain, step),
                   Fma(step, 2.0f, gain), Fma(step, 3.0f, gain)};
  float32x4_t current = vld1q_f32(lanes);
  float32x4_t increment = vdupq_n_f32(Multiply(step, 4.0f));

  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_f32(output, Multiply(current, vld1q_f32(input)));
    current = Add(increment, current);
    input += 4;
    output += 4;
  }
}

void ApplyLinearEnvelopeGain(float* output, const float* input, float gain,
                             float step, int count) {
  ApplyLinearEnvelopeGain4(output, input, gain, step, count);
}

template void ApplyUniformGain1<15>(int32_t*,
  const int32_t*, int, int);
template void ApplyUniformGain1<23>(int32_t*,
  const int32_t*, int, int);
template void ApplyUniformGain2<15>(int32_t*,
  const int32_t*, int, int);
template void ApplyUniformGain2<23>(int32_t*,
  const int32_t*, int, int);
template void ApplyUniformGain4<15>(int32_t*,
  const int32_t*, int, int);
template void ApplyUniformGain4<23>(int32_t*,
  const int32_t*, int, int);
template void ApplyLinearEnvelopeGain1<15>(int32_t*,
  const int32_t*, int, int, int);
template void ApplyLinearEnvelopeGain1<23>(int32_t*,
  const int32_t*, int, int, int);
template void ApplyLinearEnvelopeGain2<15>(int32_t*,
  const int32_t*, int, int, int);
template void ApplyLinearEnvelopeGain2<23>(int32_t*,
  const int32_t*, int, int, int);
template void ApplyLinearEnvelopeGain4<15>(int32_t*,
  const int32_t*, int, int, int);
template void ApplyLinearEnvelopeGain4<23>(int32_t*,
  const int32_t*, int, int, int);

}
