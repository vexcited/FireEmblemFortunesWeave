#pragma once

#include <arm_neon.h>

namespace gfx::render {

struct Float2 {
  float x;
  float y;
};

struct Vector4 {
  float32x4_t v;
};

struct Matrix44 {
  float32x4_t rows[4];
};

}
