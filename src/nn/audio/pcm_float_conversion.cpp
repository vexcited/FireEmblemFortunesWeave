#include <arm_neon.h>
#include <math.h>
#include <stddef.h>

#include "nn/audio/pcm_float_conversion.hpp"

namespace nn::audio {
namespace {

int16_t ConvertSample(float value) {
  float scaled = roundf(ldexpf(value, 15));
  if (scaled < -32768.0f) {
    return -32768;
  }
  if (scaled > 32767.0f) {
    return 32767;
  }
  return static_cast<int16_t>(scaled);
}

float32x4_t ConvertVector(const int16_t* input) {
  return vcvtq_n_f32_s32(vmovl_s16(vld1_s16(input)), 15);
}

int16x4_t ConvertVector(const float* input) {
  return vqmovn_s32(vcvtq_n_s32_f32(vld1q_f32(input), 15));
}

}

// The conversion runs backwards so that it can widen in place.
void ConvertPcmInt16ToFloat(float* output, const int16_t* input, int count) {
  if (static_cast<uint32_t>(count) < 4) {
    for (size_t i = count; i > 0; --i) {
      output[i - 1] = ldexpf(input[i - 1], -15);
    }
    return;
  }
  float* destination = output + count - 4;
  const int16_t* source = input + count - 4;
  int remainder = count & 3;
  if (remainder != 0) {
    vst1q_f32(destination, ConvertVector(source));
    destination -= remainder;
    source -= remainder;
  }
  do {
    vst1q_f32(destination, ConvertVector(source));
    destination -= 4;
    source -= 4;
  } while (destination >= output);
}

void ConvertFloatToPcmInt16(int16_t* output, const float* input, int count) {
  if (static_cast<uint32_t>(count) < 4) {
    for (int i = 0; i < count; ++i) {
      output[i] = ConvertSample(input[i]);
    }
    return;
  }
  int remainder = count & 3;
  const int16_t* last = output + count - remainder - 4;
  do {
    vst1_s16(output, ConvertVector(input));
    output += 4;
    input += 4;
  } while (output <= last);
  if (remainder != 0) {
    vst1_s16(output - 4 + remainder, ConvertVector(input - 4 + remainder));
  }
}

}
