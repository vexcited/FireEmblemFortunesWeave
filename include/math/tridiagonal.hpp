#pragma once

#include "math/cholesky_factor.hpp"

namespace fw::math {

Square21 Tridiagonalize21(Square21& matrix, float* vector);

}
