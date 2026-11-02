#include "math/matrix.hpp"

namespace nerd::linear_algebra {

using Dense = LMatrixType::Dense<true>;

template auto operator+<float, float, 9, 9, Dense, Dense>(
  const LMatrix<float, 9, 9, Dense>& left,
  const LMatrix<float, 9, 9, Dense>& right
);
template auto operator+<float, float, 21, 21, Dense, Dense>(
  const LMatrix<float, 21, 21, Dense>& left,
  const LMatrix<float, 21, 21, Dense>& right
);

template<typename T, long Size>
LMatrix<T, Size, Size, Dense> NormalizeDiagonal(
  LMatrix<T, Size, Size, Dense> matrix
) {
  T scale[Size] = {};

  for (long i = 0; i < Size; ++i) {
    T diagonal = matrix.elements[i * (Size + 1)];
    if (__builtin_isgreater(diagonal, T{0})) {
      scale[i] = __builtin_sqrtf(diagonal);
    }
  }

  for (long row = 0; row < Size; ++row) {
    for (long column = 0; column < Size; ++column) {
      T& value = matrix.elements[row * Size + column];
      value = row == column ? T{1} : value / (scale[row] * scale[column]);
    }
  }

  return matrix;
}

template LMatrix<float, 27, 27, Dense> NormalizeDiagonal<float, 27>(
  LMatrix<float, 27, 27, Dense> matrix
);

}
