#pragma once

#include <stddef.h>

namespace nerd::linear_algebra {
namespace LMatrixType {

template<bool LayoutFlag>
struct Dense {};

}

template<typename T, long Rows, long Columns, typename Storage>
struct LMatrix;

template<typename T, long Rows, long Columns>
struct LMatrix<T, Rows, Columns, LMatrixType::Dense<true>> {
  static_assert(Rows > 0 && Columns > 0);
  T elements[Rows * Columns];
};

template<
  typename Left, typename Right, long Rows, long Columns,
  typename LeftStorage, typename RightStorage
>
auto operator+(
  const LMatrix<Left, Rows, Columns, LeftStorage>& left,
  const LMatrix<Right, Rows, Columns, RightStorage>& right
) {
  LMatrix<decltype(Left{} + Right{}), Rows, Columns,
          LMatrixType::Dense<true>> result;

  for (size_t i = 0; i < static_cast<size_t>(Rows * Columns); ++i) {
    result.elements[i] = left.elements[i] + right.elements[i];
  }

  return result;
}

template<typename T, long Size>
LMatrix<T, Size, Size, LMatrixType::Dense<true>> NormalizeDiagonal(
  LMatrix<T, Size, Size, LMatrixType::Dense<true>> matrix
);

}
