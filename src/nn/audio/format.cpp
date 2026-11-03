#include "nn/audio/format.hpp"

#include <arm_neon.h>

#pragma clang fp contract(off)

namespace nn::audio::dsp {

static float ToFloat(int32_t value) {
  float result;
  asm volatile("scvtf %s0, %w1" : "=w"(result) : "r"(value));
  return result;
}

static int32_t ToInteger(float value) {
  int32_t result;
  asm volatile("fcvtzs %w0, %s1" : "=r"(result) : "w"(value));
  return result;
}

static float Divide(float value, float divisor) {
  float result;
  asm volatile("fdiv %s0, %s1, %s2" : "=w"(result)
               : "w"(value), "w"(divisor));
  return result;
}

static float Scale(int fraction) {
  return ToFloat(int32_t(uint32_t{1} << (uint32_t(fraction) & 31)));
}

void ConvertFormat1(float* output, const int32_t* input, int count) {
  for (int index = 0; index < count; ++index) {
    output[index] = ToFloat(input[index]);
  }
}

void ConvertFormat4(float* output, const int32_t* input, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_f32(output, vcvtq_f32_s32(vld1q_s32(input)));
    input += 4;
    output += 4;
  }
}

void ConvertFormat(float* output, const int32_t* input, int count) {
  if ((count & 3) != 0) {
    ConvertFormat1(output, input, count);
  }
  else {
    ConvertFormat4(output, input, count);
  }
}

void ConvertFormat1(int32_t* output, const float* input, int count) {
  for (int index = 0; index < count; ++index) {
    output[index] = ToInteger(input[index]);
  }
}

void ConvertFormat4(int32_t* output, const float* input, int count) {
  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_s32(output, vcvtq_s32_f32(vld1q_f32(input)));
    input += 4;
    output += 4;
  }
}

void ConvertFormat(int32_t* output, const float* input, int count) {
  if ((count & 3) != 0) {
    ConvertFormat1(output, input, count);
  }
  else {
    ConvertFormat4(output, input, count);
  }
}

void ConvertFormat1(float* output, const int32_t* input,
  int fraction, int count) {
  if (count < 1) {
    return;
  }

  float scale = Scale(fraction);

  for (int index = 0; index < count; ++index) {
    output[index] = Divide(ToFloat(input[index]), scale);
  }
}

void ConvertFormat4(float* output, const int32_t* input,
  int fraction, int count) {
  if (count == 0) {
    return;
  }

  // The vector path computes one reciprocal instead of dividing each sample.
  float reciprocal = Divide(1.0f, Scale(fraction));

  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_f32(output, vmulq_n_f32(vcvtq_f32_s32(vld1q_s32(input)),
      reciprocal));
    input += 4;
    output += 4;
  }
}

void ConvertFormat(float* output, const int32_t* input,
  int fraction, int count) {
  if ((count & 3) != 0) {
    ConvertFormat1(output, input, fraction, count);
  }
  else {
    ConvertFormat4(output, input, fraction, count);
  }
}

void ConvertFormat1(int32_t* output, const float* input,
  int fraction, int count) {
  if (count < 1) {
    return;
  }

  float scale = Scale(fraction);

  for (int index = 0; index < count; ++index) {
    output[index] = ToInteger(input[index] * scale);
  }
}

void ConvertFormat4(int32_t* output, const float* input,
  int fraction, int count) {
  if (count == 0) {
    return;
  }

  float scale = Scale(fraction);

  for (uint32_t remaining = count; remaining != 0; remaining -= 4) {
    vst1q_s32(output, vcvtq_s32_f32(vmulq_n_f32(vld1q_f32(input), scale)));
    input += 4;
    output += 4;
  }
}

void ConvertFormat(int32_t* output, const float* input,
  int fraction, int count) {
  if ((count & 3) != 0) {
    ConvertFormat1(output, input, fraction, count);
  }
  else {
    ConvertFormat4(output, input, fraction, count);
  }
}

}
