#include "math/inversion.hpp"

namespace nerd {

template<typename T>
bool GaussJordanInversionROK(
  T* matrix, size_t matrix_stride, T* inverse, size_t inverse_stride,
  size_t size
) {
  for (size_t row = 0; row < size; ++row) {
    for (size_t column = 0; column < size; ++column) {
      inverse[row * inverse_stride + column] = T{0};
    }
  }

  for (size_t row = 0; row < size; ++row) {
    inverse[row * inverse_stride + row] = T{1};
  }

  for (size_t pivot = 0; pivot < size; ++pivot) {
    size_t selected = 0;
    T largest = T{0};

    for (size_t row = pivot; row < size; ++row) {
      T magnitude = __builtin_fabsf(matrix[row * matrix_stride + pivot]);

      if (__builtin_isgreater(magnitude, largest)) {
        largest = magnitude;
        selected = row;
      }
    }

    if (largest == T{0}) {
      return false;
    }

    if (selected != pivot) {
      for (size_t column = 0; column < size; ++column) {
        T value = matrix[pivot * matrix_stride + column];
        matrix[pivot * matrix_stride + column] =
          matrix[selected * matrix_stride + column];
        matrix[selected * matrix_stride + column] = value;
        value = inverse[pivot * inverse_stride + column];
        inverse[pivot * inverse_stride + column] =
          inverse[selected * inverse_stride + column];
        inverse[selected * inverse_stride + column] = value;
      }
    }

    T scale = T{1} / matrix[pivot * matrix_stride + pivot];

    for (size_t column = 0; column < size; ++column) {
      matrix[pivot * matrix_stride + column] =
        scale * matrix[pivot * matrix_stride + column];
      inverse[pivot * inverse_stride + column] =
        scale * inverse[pivot * inverse_stride + column];
    }

    for (size_t row = 0; row < size; ++row) {
      if (row == pivot) {
        continue;
      }

      T scale = -matrix[row * matrix_stride + pivot];

      for (size_t column = 0; column < size; ++column) {
        matrix[row * matrix_stride + column] = __builtin_fmaf(
          scale, matrix[pivot * matrix_stride + column],
          matrix[row * matrix_stride + column]
        );
        inverse[row * inverse_stride + column] = __builtin_fmaf(
          scale, inverse[pivot * inverse_stride + column],
          inverse[row * inverse_stride + column]
        );
      }
    }
  }

  return true;
}

template bool GaussJordanInversionROK<float>(
  float*, size_t, float*, size_t, size_t
);

}
