#include "nn/audio/vector_filter.hpp"

#include <arm_neon.h>
#include <cmath>

namespace nn::audio::util {
namespace {

// Response of four outputs to one input tap, the filter starting at rest.
float32x4_t Response(float x0, float x1, float x2, float x3, float a1,
  float a2) {
  const float y0 = x0;
  const float y1 = std::fmaf(a1, y0, x1);
  const float y2 = std::fmaf(a2, y0, std::fmaf(a1, y1, x2));
  const float y3 = std::fmaf(a2, y1, std::fmaf(a1, y2, x3));
  const float lanes[4] = { y0, y1, y2, y3 };

  return vld1q_f32(lanes);
}

struct SosMatrix {
  float32x4_t input[4];
  float32x4_t x1;
  float32x4_t x2;
  float32x4_t y1;
  float32x4_t y2;
};

float32x4_t Filter(const SosMatrix& matrix, float32x4_t input, float x1,
  float x2, float y1, float y2) {
  float32x4_t output = vmulq_laneq_f32(matrix.input[3], input, 3);

  output = vmlaq_laneq_f32(output, matrix.input[2], input, 2);
  output = vmlaq_laneq_f32(output, matrix.input[1], input, 1);
  output = vmlaq_laneq_f32(output, matrix.input[0], input, 0);
  output = vmlaq_n_f32(output, matrix.x1, x1);
  output = vmlaq_n_f32(output, matrix.x2, x2);
  output = vmlaq_n_f32(output, matrix.y1, y1);
  output = vmlaq_n_f32(output, matrix.y2, y2);

  return output;
}

float32x4x2_t Multiply(const float* first, const float* second) {
  const float32x4x2_t a = vld2q_f32(first);
  const float32x4x2_t b = vld2q_f32(second);
  float32x4x2_t result;

  result.val[0] = vmlsq_f32(vmulq_f32(a.val[0], b.val[0]), b.val[1],
    a.val[1]);
  result.val[1] = vmlaq_f32(vmulq_f32(a.val[1], b.val[0]), b.val[1],
    a.val[0]);

  return result;
}

void MultiplyBlock(float* output, const float* first, const float* second) {
  float32x4x2_t results[4];

  for (int i = 0; i < 4; ++i) {
    results[i] = Multiply(first + i * 8, second + i * 8);
  }
  for (int i = 0; i < 4; ++i) {
    vst2q_f32(output + i * 8, results[i]);
  }
}

}

template<>
void VecSos<float>(float* output, const float* input,
  const float* coefficients, float* state, int count) {
  const float b0 = coefficients[0];
  const float b1 = coefficients[1];
  const float b2 = coefficients[2];
  const float a1 = -coefficients[4];
  const float a2 = -coefficients[5];

  float x1 = state[0];
  float x2 = state[1];
  float y1 = state[2];
  float y2 = state[3];

  SosMatrix matrix;
  matrix.input[3] = Response(0.0f, 0.0f, 0.0f, b0, a1, a2);
  matrix.input[2] = Response(0.0f, 0.0f, b0, b1, a1, a2);
  matrix.input[1] = Response(0.0f, b0, b1, b2, a1, a2);
  matrix.input[0] = Response(b0, b1, b2, 0.0f, a1, a2);
  matrix.x1 = Response(b1, b2, 0.0f, 0.0f, a1, a2);
  matrix.x2 = Response(b2, 0.0f, 0.0f, 0.0f, a1, a2);
  matrix.y1 = Response(a1, a2, 0.0f, 0.0f, a1, a2);
  matrix.y2 = Response(a2, 0.0f, 0.0f, 0.0f, a1, a2);

  const int blockCount = count / 4;
  for (int block = 0; block < blockCount; ++block) {
    const float32x4_t x = vld1q_f32(input);
    const float32x4_t y = Filter(matrix, x, x1, x2, y1, y2);
    vst1q_f32(output, y);
    x1 = vgetq_lane_f32(x, 3);
    x2 = vgetq_lane_f32(x, 2);
    y1 = vgetq_lane_f32(y, 3);
    y2 = vgetq_lane_f32(y, 2);
    input += 4;
    output += 4;
  }

  float inputs[4] = {};
  const float lastX1 = x1;
  const float lastX2 = x2;
  for (int i = 0; i < count - blockCount * 4; ++i) {
    inputs[i] = input[i];
    x2 = x1;
    x1 = input[i];
  }

  const int remainder = count & 3;
  if (remainder != 0) {
    float outputs[4];
    vst1q_f32(outputs, Filter(matrix, vld1q_f32(inputs), lastX1, lastX2, y1,
      y2));
    for (int i = 0; i < remainder; ++i) {
      output[i] = outputs[i];
      y2 = y1;
      y1 = outputs[i];
    }
  }

  state[0] = x1;
  state[1] = x2;
  state[2] = y1;
  state[3] = y2;
}

template<>
void VecComplexMultiply<float>(float* output, const float* first,
  const float* second, int count) {
  const int remainder = count & 15;
  int blockCount = count >> 4;

  if (blockCount != 0) {
    float* out = output;
    const float* a = first;
    const float* b = second;
    do {
      MultiplyBlock(out, a, b);
      out += 32;
      a += 32;
      b += 32;
    } while (--blockCount != 0);

    // The tail runs the last full block again, overlapping the previous one.
    if (remainder != 0) {
      const int offset = count * 2 - 32;
      MultiplyBlock(output + offset, first + offset, second + offset);
    }
    return;
  }

  float32x4x2_t result = Multiply(first, second);
  int rest = count;
  while (rest >= 4) {
    vst2q_f32(output, result);
    output += 8;
    first += 8;
    second += 8;
    rest -= 4;
    result = Multiply(first, second);
  }

  float re[4];
  float im[4];
  vst1q_f32(re, result.val[0]);
  vst1q_f32(im, result.val[1]);
  for (int i = 0; i < rest; ++i) {
    output[i * 2] = re[i];
    output[i * 2 + 1] = im[i];
  }
}

}
