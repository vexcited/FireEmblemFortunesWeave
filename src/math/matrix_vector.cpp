#include "math/matrix_vector.hpp"

namespace nerd::linear_algebra {

using DenseMatrix = LMatrixType::Dense<true>;
using LowerMatrix = LMatrixType::Triangular<false, DenseMatrix>;
using DenseVector = LVectorType::Dense;

template auto operator*<float, float, 21, false, DenseMatrix, DenseVector>(
  const LMatrix<float, 21, 21, LowerMatrix>& matrix,
  const LVector<float, 21, false, DenseVector>& vector
);

}
