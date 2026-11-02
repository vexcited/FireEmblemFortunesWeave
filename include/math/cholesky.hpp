#pragma once

#include "math/matrix.hpp"

namespace fw::math {

template<long Capacity>
using DynamicSquare = nerd::linear_algebra::LMatrix<
  float, -Capacity, -Capacity, nerd::linear_algebra::LMatrixType::Dense<true>
>;

DynamicSquare<24>* CholeskyInPlace24(DynamicSquare<24>* matrix);
DynamicSquare<27>* CholeskyInPlace27(DynamicSquare<27>* matrix);
DynamicSquare<30>* CholeskyInPlace30(DynamicSquare<30>* matrix);

}
