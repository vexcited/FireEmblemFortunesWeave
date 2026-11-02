#include "math/cholesky.hpp"

namespace fw::math {
namespace {

float SubtractProduct(float value, float left, float right) {
  float result;
  // FMSUB preserves the original NaN operand ordering without a separate negate.
  __asm__("fmsub %s0, %s1, %s2, %s3"
          : "=w"(result) : "w"(left), "w"(right), "w"(value));
  return result;
}

template<long Capacity>
DynamicSquare<Capacity>* Decompose(DynamicSquare<Capacity>* matrix) {
  float remaining[Capacity];
  size_t size = matrix->columns;

  for (size_t i = 0; i < size; ++i) {
    float diagonal = matrix->elements[i * (Capacity + 1)];
    remaining[i] = __builtin_isless(diagonal, 0.0f) ? 0.0f : diagonal;
  }

  for (size_t column = 0; column < size; ++column) {
    for (size_t upper = column + 1; upper < size; ++upper) {
      matrix->elements[column * Capacity + upper] = 0.0f;
    }

    float diagonal = __builtin_sqrtf(remaining[column]);
    matrix->elements[column * (Capacity + 1)] = diagonal;
    float inverse = diagonal == 0.0f ? 0.0f : 1.0f / diagonal;

    for (size_t row = column + 1; row < size; ++row) {
      float value = matrix->elements[row * Capacity + column];

      for (size_t inner = 0; inner < column; ++inner) {
        value = SubtractProduct(
          value, matrix->elements[row * Capacity + inner],
          matrix->elements[column * Capacity + inner]
        );
      }

      value = inverse * value;
      float square = value * value;

      if (__builtin_isgreaterequal(remaining[row], square)) {
        remaining[row] -= square;
      }
      else {
        float limit = __builtin_sqrtf(remaining[row]);
        value = __builtin_isgreater(value, 0.0f) ? limit : -limit;
        remaining[row] = 0.0f;
      }

      matrix->elements[row * Capacity + column] = value;
    }
  }

  return matrix;
}

}

DynamicSquare<24>* CholeskyInPlace24(DynamicSquare<24>* matrix) {
  return Decompose<24>(matrix);
}

DynamicSquare<27>* CholeskyInPlace27(DynamicSquare<27>* matrix) {
  return Decompose<27>(matrix);
}

DynamicSquare<30>* CholeskyInPlace30(DynamicSquare<30>* matrix) {
  return Decompose<30>(matrix);
}

}
