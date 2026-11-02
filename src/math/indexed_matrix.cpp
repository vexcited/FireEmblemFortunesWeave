#include "math/indexed_matrix.hpp"

namespace fw::math {

namespace {

float& Element(const IndexedMatrix& matrix, size_t row, size_t column) {
  return matrix.elements[matrix.rows[row] * matrix.row_stride
    + matrix.columns[column] * matrix.column_stride];
}

template<size_t Rows>
FixedProduct<Rows, 9> FixedMultiply(const float* left,
                                   const IndexedMatrix& right) {
  FixedProduct<Rows, 9> result;

  for (size_t row = 0; row < Rows; ++row) {
    for (size_t column = 0; column < 9; ++column) {
      float sum = 0.0f;

      for (size_t k = 0; k < 9; ++k) {
        sum = __builtin_fmaf(left[row * 9 + k],
                             Element(right, k, column), sum);
      }

      result.elements[row * 9 + column] = sum;
    }
  }

  return result;
}

template<size_t Inner>
DynamicProduct<30> DynamicMultiply(const float* left,
                                    const IndexedMatrix& right) {
  DynamicProduct<30> result = {};
  result.columns = right.columns[30];

  for (size_t row = 0; row < 3; ++row) {
    for (size_t column = 0; column < result.columns; ++column) {
      float sum = 0.0f;

      for (size_t k = 0; k < Inner; ++k) {
        sum = __builtin_fmaf(left[row * Inner + k],
                             Element(right, k, column), sum);
      }

      result.elements[row * 30 + column] = sum;
    }
  }

  return result;
}

}

FixedProduct<3, 9> MultiplyIndexed3x9(const float* left,
                                     const IndexedMatrix& right) {
  return FixedMultiply<3>(left, right);
}

FixedProduct<6, 9> MultiplyIndexed6x9(const float* left,
                                     const IndexedMatrix& right) {
  return FixedMultiply<6>(left, right);
}

DynamicProduct<30> MultiplyIndexed3x3Dynamic(const float* left,
                                            const IndexedMatrix& right) {
  return DynamicMultiply<3>(left, right);
}

DynamicProduct<30> MultiplyIndexed3x9Dynamic(const float* left,
                                            const IndexedMatrix& right) {
  return DynamicMultiply<9>(left, right);
}

DynamicProduct<33> MultiplyRange3x3(const float* left,
                                    const RangeMatrix& right) {
  DynamicProduct<33> result;
  __builtin_memset(&result, 0, sizeof(result));
  result.columns = right.columns;

  for (size_t row = 0; row < 3; ++row) {
    for (size_t column = 0; column < result.columns; ++column) {
      float sum = 0.0f;

      for (size_t k = 0; k < 3; ++k) {
        size_t index = right.rows[k] * right.row_stride
          + (right.first_column + column) * right.column_stride;
        sum = __builtin_fmaf(left[row * 3 + k], right.elements[index], sum);
      }

      result.elements[row * 33 + column] = sum;
    }
  }

  return result;
}

void MakeIndexedSymmetric6(IndexedMatrix& matrix) {
  for (size_t row = 1; row < 6; ++row) {
    for (size_t column = 0; column < row; ++column) {
      float value = (Element(matrix, row, column)
        + Element(matrix, column, row)) * 0.5f;
      Element(matrix, row, column) = value;
      Element(matrix, column, row) = value;
    }
  }
}

void SymmetricLowerProduct21(const float* lower, float* symmetric) {
  for (size_t i = 0; i < 21; ++i) {
    symmetric[i * 22] *= 0.5f;
  }

  for (size_t remaining = 21; remaining != 0; --remaining) {
    size_t row = remaining - 1;

    for (size_t column = 0; column <= row; ++column) {
      float sum = 0.0f;

      for (size_t k = column; k <= row; ++k) {
        sum = __builtin_fmaf(lower[row * 21 + k],
                             symmetric[k * 21 + column], sum);
      }

      symmetric[row * 21 + column] = sum;
    }
  }

  for (size_t row = 0; row < 21; ++row) {
    for (size_t remaining = 21; remaining != 0; --remaining) {
      size_t column = remaining - 1;
      size_t end = row < column ? row : column;
      float sum = 0.0f;

      for (size_t k = 0; k <= end; ++k) {
        sum = __builtin_fmaf(symmetric[row * 21 + k],
                             lower[column * 21 + k], sum);
      }

      symmetric[row * 21 + column] = sum;
    }
  }

  for (size_t row = 0; row < 21; ++row) {
    for (size_t column = 0; column <= row; ++column) {
      float sum = symmetric[row * 21 + column]
        + symmetric[column * 21 + row];
      symmetric[row * 21 + column] = sum;
      symmetric[column * 21 + row] = sum;
    }
  }
}

}
