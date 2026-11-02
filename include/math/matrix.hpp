#pragma once

#include <stddef.h>

namespace nerd::linear_algebra {
namespace LMatrixType {

template<bool LayoutFlag>
struct Dense {};

}

template<typename T, long Rows, long Columns, typename Storage>
struct LMatrix;

namespace detail {

template<
  typename T, long Rows, long Columns,
  bool DynamicRows = (Rows < 0), bool DynamicColumns = (Columns < 0)
>
struct DenseStorage;

template<typename T, long Rows, long Columns>
struct DenseStorage<T, Rows, Columns, false, false> {
  T elements[Rows * Columns];
};

template<typename T, long Rows, long Columns>
struct DenseStorage<T, Rows, Columns, false, true> {
  size_t columns;
  T elements[Rows * -Columns];
};

template<typename T, long Rows, long Columns>
struct DenseStorage<T, Rows, Columns, true, false> {
  size_t rows;
  T elements[-Rows * Columns];
};

template<typename T, long Rows, long Columns>
struct DenseStorage<T, Rows, Columns, true, true> {
  size_t rows;
  size_t columns;
  T elements[Rows * Columns];
};

}

template<typename T, long Rows, long Columns>
struct LMatrix<T, Rows, Columns, LMatrixType::Dense<true>>
  : detail::DenseStorage<T, Rows, Columns> {
  static_assert(Rows != 0 && Columns != 0);
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
