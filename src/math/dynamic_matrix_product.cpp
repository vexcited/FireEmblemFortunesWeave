#include "math/matrix_product.hpp"

namespace nerd::linear_algebra {

using Dense = LMatrixType::Dense<true>;

template auto operator*<float, float, 3, -30, 3, Dense, Dense>(
  const LMatrix<float, 3, -30, Dense>& left,
  const LMatrix<float, -30, 3, Dense>& right
);

template auto operator*<float, float, 9, -24, 9, Dense, Dense>(
  const LMatrix<float, 9, -24, Dense>& left,
  const LMatrix<float, -24, 9, Dense>& right
);

template auto operator*<float, float, 9, -24, -24, Dense, Dense>(
  const LMatrix<float, 9, -24, Dense>& left,
  const LMatrix<float, -24, -24, Dense>& right
);

template auto operator*<float, float, 6, -27, 6, Dense, Dense>(
  const LMatrix<float, 6, -27, Dense>& left,
  const LMatrix<float, -27, 6, Dense>& right
);

template auto operator*<float, float, 6, -27, -27, Dense, Dense>(
  const LMatrix<float, 6, -27, Dense>& left,
  const LMatrix<float, -27, -27, Dense>& right
);

}
