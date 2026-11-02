#include "math/tridiagonal.hpp"

#include <stdint.h>

namespace fw::math {

Square21 Tridiagonalize21(Square21& matrix, float* vector) {
  float direction[21] = {};
  float product[21] = {};

  for (size_t column = 0; column < 21; ++column) {
    direction[column] = 0.0f;
    float norm = 0.0f;

    for (size_t row = column + 1; row < 21; ++row) {
      float value = matrix.elements[row * 21 + column];
      direction[row] = value;
      norm += value * value;
    }

    if (norm == 0.0f) {
      continue;
    }

    float root = __builtin_sqrtf(norm);
    float edge = __builtin_isgreater(direction[column + 1], 0.0f)
      ? -root : root;
    direction[column + 1] -= edge;
    norm = 0.0f;

    for (size_t row = column + 1; row < 21; ++row) {
      float value = direction[row];
      norm += value * value;
    }

    float scale = __builtin_sqrtf(2.0f / norm);
    uint32_t bits;
    __builtin_memcpy(&bits, &scale, sizeof(bits));

    if ((bits & 0x7fffffff) > 0x7f7fffff) {
      continue;
    }

    for (size_t row = 0; row < 21; ++row) {
      direction[row] = scale * direction[row];
    }

    float projection = 0.0f;

    for (size_t row = column + 1; row < 21; ++row) {
      projection = __builtin_fmaf(vector[row], direction[row], projection);
    }

    projection = -projection;

    for (size_t row = column + 1; row < 21; ++row) {
      vector[row] = __builtin_fmaf(projection, direction[row], vector[row]);
    }

    float quadratic = 0.0f;

    for (size_t row = column + 1; row < 21; ++row) {
      float sum = 0.0f;

      for (size_t inner = column + 1; inner < 21; ++inner) {
        sum = __builtin_fmaf(matrix.elements[row * 21 + inner],
                             direction[inner], sum);
      }

      product[row] = sum;
      quadratic = __builtin_fmaf(direction[row], sum, quadratic);
    }

    for (size_t row = column + 1; row < 21; ++row) {
      float scaled = quadratic * direction[row];
      float negative = -direction[row];

      for (size_t inner = column + 1; inner < 21; ++inner) {
        float change = -(direction[inner] * product[row]);
        change = __builtin_fmaf(scaled, direction[inner], change);
        change = __builtin_fmaf(negative, product[inner], change);
        matrix.elements[row * 21 + inner] += change;
      }
    }

    matrix.elements[(column + 1) * 21 + column] = edge;
    matrix.elements[column * 21 + column + 1] = edge;

    for (size_t row = column + 2; row < 21; ++row) {
      matrix.elements[row * 21 + column] = 0.0f;
      matrix.elements[column * 21 + row] = 0.0f;
    }
  }

  return matrix;
}

}
