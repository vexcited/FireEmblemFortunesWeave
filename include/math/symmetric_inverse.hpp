#pragma once

#include "math/cholesky.hpp"

namespace fw::math {

using FixedSquare27 = nerd::linear_algebra::LMatrix<
  float, 27, 27, nerd::linear_algebra::LMatrixType::Dense<true>
>;

DynamicSquare<3>* CholeskyInPlace3(DynamicSquare<3>* matrix);
FixedSquare27* CholeskyFixed27(FixedSquare27* matrix);
void InverseSymmetric3(DynamicSquare<3>* matrix);
void InverseSymmetric24(DynamicSquare<24>* matrix);
void InverseSymmetric27(DynamicSquare<27>* matrix);
void InverseSymmetric30(DynamicSquare<30>* matrix);
void InverseSymmetricFixed27(FixedSquare27* matrix);

}
