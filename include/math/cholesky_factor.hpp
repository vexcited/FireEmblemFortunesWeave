#pragma once

#include "math/matrix_vector.hpp"

namespace fw::math {

using Square21 = nerd::linear_algebra::LMatrix<
  float, 21, 21, nerd::linear_algebra::LMatrixType::Dense<true>
>;
using LowerSquare21 = nerd::linear_algebra::LMatrix<
  float, 21, 21, nerd::linear_algebra::LMatrixType::Triangular<
    false, nerd::linear_algebra::LMatrixType::Dense<true>
  >
>;

LowerSquare21 CholeskyFactor21(const Square21& matrix);

}
