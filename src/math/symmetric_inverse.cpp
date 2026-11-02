#include "math/symmetric_inverse.hpp"

namespace fw::math {
namespace {

template<size_t Capacity>
void Factor(float* elements, size_t size) {
  float remaining[Capacity];

  for (size_t i = 0; i < size; ++i) {
    float diagonal = elements[i * (Capacity + 1)];
    remaining[i] = __builtin_isless(diagonal, 0.0f) ? 0.0f : diagonal;
  }

  for (size_t column = 0; column < size; ++column) {
    for (size_t upper = column + 1; upper < size; ++upper) {
      elements[column * Capacity + upper] = 0.0f;
    }

    float diagonal = __builtin_sqrtf(remaining[column]);
    elements[column * (Capacity + 1)] = diagonal;
    float inverse = diagonal == 0.0f ? 0.0f : 1.0f / diagonal;

    for (size_t row = column + 1; row < size; ++row) {
      float value = elements[row * Capacity + column];

      for (size_t inner = 0; inner < column; ++inner) {
        float left = elements[row * Capacity + inner];
        float right = elements[column * Capacity + inner];
        // FMSUB retains the original NaN operand order.
        __asm__("fmsub %s0, %s1, %s2, %s3"
                : "=w"(value) : "w"(left), "w"(right), "w"(value));
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

      elements[row * Capacity + column] = value;
    }
  }
}

template<size_t Capacity>
void InvertFactor(float* elements, size_t size) {
  for (size_t row = 0; row < size; ++row) {
    float diagonal = elements[row * (Capacity + 1)];
    elements[row * (Capacity + 1)] =
      diagonal == 0.0f ? 0.0f : 1.0f / diagonal;

    for (size_t column = 0; column < row; ++column) {
      float sum = 0.0f;

      for (size_t inner = column; inner < row; ++inner) {
        sum = __builtin_fmaf(
          elements[row * Capacity + inner],
          elements[inner * Capacity + column], sum
        );
      }

      elements[row * Capacity + column] =
        -(sum * elements[row * (Capacity + 1)]);
    }
  }

  for (size_t row = 0; row < size; ++row) {
    float diagonal = 0.0f;

    for (size_t inner = row; inner < size; ++inner) {
      float value = elements[inner * Capacity + row];
      diagonal += value * value;
    }

    elements[row * (Capacity + 1)] = diagonal;

    for (size_t column = row + 1; column < size; ++column) {
      float sum = 0.0f;

      for (size_t inner = column; inner < size; ++inner) {
        sum = __builtin_fmaf(
          elements[inner * Capacity + row],
          elements[inner * Capacity + column], sum
        );
      }

      elements[row * Capacity + column] = sum;
      elements[column * Capacity + row] = sum;
    }
  }
}

}

DynamicSquare<3>* CholeskyInPlace3(DynamicSquare<3>* matrix) {
  Factor<3>(matrix->elements, matrix->columns);
  return matrix;
}

FixedSquare27* CholeskyFixed27(FixedSquare27* matrix) {
  Factor<27>(matrix->elements, 27);
  return matrix;
}

void InverseSymmetric3(DynamicSquare<3>* matrix) {
  CholeskyInPlace3(matrix);
  InvertFactor<3>(matrix->elements, matrix->rows);
}

void InverseSymmetric24(DynamicSquare<24>* matrix) {
  CholeskyInPlace24(matrix);
  InvertFactor<24>(matrix->elements, matrix->rows);
}

void InverseSymmetric27(DynamicSquare<27>* matrix) {
  CholeskyInPlace27(matrix);
  InvertFactor<27>(matrix->elements, matrix->rows);
}

void InverseSymmetric30(DynamicSquare<30>* matrix) {
  CholeskyInPlace30(matrix);
  InvertFactor<30>(matrix->elements, matrix->rows);
}

void InverseSymmetricFixed27(FixedSquare27* matrix) {
  CholeskyFixed27(matrix);
  InvertFactor<27>(matrix->elements, 27);
}

}
