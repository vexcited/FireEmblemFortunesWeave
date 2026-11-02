#pragma once

#include "math/matrix.hpp"

namespace nerd::linear_algebra {
namespace LMatrixType {

template<bool LayoutFlag, typename Storage>
struct TransposedView {};

}

template<typename T, long Rows, long Columns, typename Storage>
struct LMatrix<
  T, Rows, Columns, LMatrixType::TransposedView<true, Storage>
> {
  const LMatrix<T, Columns, Rows, Storage>* source;
};

template<
  typename Left, typename Right, long Rows, long Inner, long Columns,
  typename LeftStorage, typename RightStorage
>
auto operator*(
  const LMatrix<Left, Rows, Inner, LeftStorage>& left,
  const LMatrix<Right, Inner, Columns, RightStorage>& right
) {
  using Result = decltype(Left{} * Right{});
  LMatrix<Result, Rows, Columns, LMatrixType::Dense<true>> result;

  if constexpr (Inner < 0) {
    constexpr long stride = Columns < 0 ? -Columns : Columns;
    size_t columns = Columns;

    if constexpr (Columns < 0) {
      columns = right.columns;
      result.columns = columns;

      for (long i = 0; i < Rows * stride; ++i) {
        result.elements[i] = 0;
      }
    }

    for (long row = 0; row < Rows; ++row) {
      for (size_t column = 0; column < columns; ++column) {
        Result sum = 0;

        for (size_t inner = 0; inner < left.columns; ++inner) {
          sum = __builtin_fmaf(
            left.elements[row * -Inner + inner],
            right.elements[inner * stride + column], sum
          );
        }

        result.elements[row * stride + column] = sum;
      }
    }
  }
  else {
    for (long row = 0; row < Rows; ++row) {
      for (long column = 0; column < Columns; ++column) {
        Result sum = 0;

        for (long inner = 0; inner < Inner; ++inner) {
          sum = __builtin_fmaf(
            left.elements[row * Inner + inner],
            right.source->elements[column * Inner + inner], sum
          );
        }

        result.elements[row * Columns + column] = sum;
      }
    }
  }

  return result;
}

}
