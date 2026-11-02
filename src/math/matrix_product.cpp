#include "math/matrix_product.hpp"

namespace nerd::linear_algebra {

using Dense = LMatrixType::Dense<true>;
using Transpose = LMatrixType::TransposedView<true, Dense>;

template auto operator*<float, float, 3, 9, 3, Dense, Transpose>(
  const LMatrix<float, 3, 9, Dense>& left,
  const LMatrix<float, 9, 3, Transpose>& right
);
template auto operator*<float, float, 3, 18, 3, Dense, Transpose>(
  const LMatrix<float, 3, 18, Dense>& left,
  const LMatrix<float, 18, 3, Transpose>& right
);
template auto operator*<float, float, 6, 9, 6, Dense, Transpose>(
  const LMatrix<float, 6, 9, Dense>& left,
  const LMatrix<float, 9, 6, Transpose>& right
);

}
