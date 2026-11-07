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

class Vector3f : public Vector3fType {
public:
  static const Vector3f ConstantZero;
  static const Vector3f ConstantOne;
  static const Vector3f ConstantUnitX;
  static const Vector3f ConstantUnitY;
  static const Vector3f ConstantUnitZ;
};

class Vector4f : public Vector4fType {
public:
  static const Vector4f ConstantZero;
  static const Vector4f ConstantOne;
  static const Vector4f ConstantUnitX;
  static const Vector4f ConstantUnitY;
  static const Vector4f ConstantUnitZ;
  static const Vector4f ConstantUnitW;
};

class Quaternion : public Vector4fType {
public:
  static const Quaternion ConstantIdentity;
};

struct Color4u8Type {
  unsigned char v[4];
};

struct Float3 {
  float x;
  float y;
  float z;
};

struct Float4 {
  float v[4];
};

}
