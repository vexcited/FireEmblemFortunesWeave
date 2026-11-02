#include "math/cholesky_factor.hpp"

namespace fw::math {

LowerSquare21 CholeskyFactor21(const Square21& matrix) {
  LowerSquare21 result = {};
  float remaining[21];

  for (size_t i = 0; i < 21; ++i) {
    float diagonal = matrix.elements[i * 22];
    remaining[i] = __builtin_isless(diagonal, 0.0f) ? 0.0f : diagonal;
  }

  for (size_t column = 0; column < 21; ++column) {
    float diagonal = __builtin_sqrtf(remaining[column]);
    result.elements[column * 22] = diagonal;
    float inverse = diagonal == 0.0f ? 0.0f : 1.0f / diagonal;

    for (size_t row = column + 1; row < 21; ++row) {
      float value = matrix.elements[row * 21 + column];

      for (size_t inner = 0; inner < column; ++inner) {
        float left = result.elements[row * 21 + inner];
        float right = result.elements[column * 21 + inner];
        // The fused subtraction preserves the original NaN operand ordering.
        __asm__("fmsub %s0, %s1, %s2, %s3"
                : "=w"(value) : "w"(left), "w"(right), "w"(value));
      }

      value = inverse * value;
      float square = value * value;

      if (__builtin_isgreaterequal(remaining[row], square)) {
        remaining[row] -= square;
      }
      else {
        float limit = __builtin_sqrtf(remaining[row]);
        value = __builtin_isgreater(value, 0.0f) ? limit : -limit;
        remaining[row] = 0.0f;
      }

      result.elements[row * 21 + column] = value;
    }
  }

  return result;
}

}
