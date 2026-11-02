#pragma once

#include "math/matrix.hpp"

namespace nerd::linear_algebra {
namespace LMatrixType {

template<bool TriangleFlag, typename Storage>
struct Triangular {};

}

namespace LVectorType {

struct Dense {};

}

template<typename T, long Rows, long Columns>
struct LMatrix<
  T, Rows, Columns, LMatrixType::Triangular<false, LMatrixType::Dense<true>>
> {
  static_assert(Rows > 0 && Columns > 0);
  T elements[Rows * Columns];
};

template<typename T, long Size, bool TransposeFlag, typename Storage>
struct LVector;

template<typename T, long Size>
struct LVector<T, Size, false, LVectorType::Dense> {
  static_assert(Size > 0);
  T elements[Size];
};

template<
  typename Left, typename Right, long Size, bool TriangleFlag,
  typename MatrixStorage, typename VectorStorage
>
auto operator*(
  const LMatrix<
    Left, Size, Size, LMatrixType::Triangular<TriangleFlag, MatrixStorage>
  >& matrix,
  const LVector<Right, Size, false, VectorStorage>& vector
) {
  static_assert(!TriangleFlag);
  using Result = decltype(Left{} * Right{});
  LVector<Result, Size, false, LVectorType::Dense> result;

  for (long row = 0; row < Size; ++row) {
    Result sum = 0;

    for (long column = 0; column <= row; ++column) {
      sum = __builtin_fmaf(
        matrix.elements[row * Size + column], vector.elements[column], sum
      );
    }

    result.elements[row] = sum;
  }

  return result;
}

}
