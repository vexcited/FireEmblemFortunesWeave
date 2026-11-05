#pragma once

#include <arm_neon.h>

namespace nn::util {

struct Vector2fType {
  float32x2_t _v;
};

struct Vector3fType {
  float32x4_t _v;
};

struct Vector4fType {
  float32x4_t _v;
};

class Vector2f : public Vector2fType {};

class Vector3f : public Vector3fType {};

class Vector4f : public Vector4fType {};

struct Color4u8Type {
  unsigned char v[4];
};

struct Float4 {
  float v[4];
};

}
