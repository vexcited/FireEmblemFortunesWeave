#pragma once

#include <arm_neon.h>

namespace nn::util {

struct MatrixRowMajor4x3f {
  static const MatrixRowMajor4x3f ConstantZero;
  static const MatrixRowMajor4x3f ConstantIdentity;

  float32x4_t rows[4];
};

struct MatrixRowMajor4x4f {
  static const MatrixRowMajor4x4f ConstantZero;
  static const MatrixRowMajor4x4f ConstantIdentity;

  float32x4_t rows[4];
};

}
