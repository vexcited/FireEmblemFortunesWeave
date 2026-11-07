#include <new>

#include "nn/util/math_types.hpp"
#include "nn/util/util_matrix.hpp"

#pragma GCC visibility push(hidden)

#include "math/mtx43.hpp"
#include "math/mtx44.hpp"
#include "math/quat.hpp"
#include "math/vec3.hpp"
#include "math/vec4.hpp"

#pragma GCC visibility pop

// The natives of the script matrix types, registered with their
// declarations by the static initializer at 0xc87bc0.
namespace math::script {

namespace mtx43_type {

[[gnu::used]] void Construct(Mtx43* self) {
  new (self) Mtx43();
}

[[gnu::used]] void Construct(const float& pv, Mtx43* self) {
  new (self) Mtx43(&pv);
}

[[gnu::used]] void Construct(float m00, float m01, float m02, float m10,
  float m11, float m12, float m20, float m21, float m22, float m30, float m31,
  float m32, Mtx43* self) {
  new (self) Mtx43(m00, m01, m02, m10, m11, m12, m20, m21, m22, m30, m31, m32);
}

[[gnu::used]] void Construct(const Vec3& axisX, const Vec3& axisY,
  const Vec3& axisZ, const Vec3& axisW, Mtx43* self) {
  new (self) Mtx43(axisX, axisY, axisZ, axisW);
}

[[gnu::used]] void Destruct(Mtx43*) {}

[[gnu::used]] void Transpose(Mtx43& self) {
  self.Transpose();
}

[[gnu::used]] bool Inverse(Mtx43& self) {
  return self.Inverse();
}

[[gnu::used]] bool InverseTranspose(Mtx43& self) {
  return self.InverseTranspose();
}

[[gnu::used]] Mtx43 opNeg(const Mtx43& self) {
  return -self;
}

[[gnu::used]] Mtx43 opAdd(const Mtx43& self, const Mtx43& other) {
  return self + other;
}

[[gnu::used]] Mtx43 opSub(const Mtx43& self, const Mtx43& other) {
  return self - other;
}

[[gnu::used]] Mtx43 opMul(const Mtx43& self, const Mtx43& other) {
  return self * other;
}

[[gnu::used]] Mtx43 opMul(const Mtx43& self, float f) {
  return self * f;
}

[[gnu::used]] Mtx43 opDiv(const Mtx43& self, float f) {
  return self / f;
}

[[gnu::used]] Mtx43& opAddAssign(Mtx43& self, const Mtx43& other) {
  return self += other;
}

[[gnu::used]] Mtx43& opSubAssign(Mtx43& self, const Mtx43& other) {
  return self -= other;
}

[[gnu::used]] Mtx43& opMulAssign(Mtx43& self, const Mtx43& other) {
  return self *= other;
}

[[gnu::used]] Mtx43& opMulAssign(Mtx43& self, float f) {
  return self *= f;
}

[[gnu::used]] Mtx43& opDivAssign(Mtx43& self, float f) {
  return self /= f;
}

}

namespace mtx43 {

[[gnu::used]] Mtx43 MakeTranslation(const Vec3& value) {
  return Mtx43::MakeTranslation(value);
}

[[gnu::used]] Mtx43 MakeScale(const Vec3& value) {
  return Mtx43::MakeScale(value);
}

[[gnu::used]] Mtx43 MakeRotation(const Vec3& radian) {
  return Mtx43::MakeRotation(radian);
}

// The original inlines the out of line member here.
[[gnu::used]] Mtx43 MakeRotation(const Quat& value) {
  return Mtx43::RotationOf(value);
}

[[gnu::used]] Mtx43 MakeTranspose(const Mtx43& value) {
  return Mtx43::MakeTranspose(value);
}

[[gnu::used]] Mtx43 LookAtRightHanded(const Vec3& position, const Vec3& target,
  const Vec3& upward) {
  return Mtx43::LookAtRightHanded(position, target, upward);
}

[[gnu::used]] Mtx43 LookToRightHanded(const Vec3& position,
  const Vec3& direction, const Vec3& upward) {
  return Mtx43::LookToRightHanded(position, direction, upward);
}

// The translation row gets a fourth lane of 1.
[[gnu::used]] Mtx44 ToMatrix4x4f(const Mtx43& value) {
  float32x4_t w = value.Row(3);
  w[3] = 1.0f;
  return Mtx44(value.Row(0), value.Row(1), value.Row(2), w);
}

[[gnu::used]] const Mtx43& Zero() {
  return Mtx43::Zero();
}

[[gnu::used]] const Mtx43& Identity() {
  return Mtx43::Identity();
}

}

namespace mtx44_type {

[[gnu::used]] void Construct(Mtx44* self) {
  new (self) Mtx44();
}

[[gnu::used]] void Construct(const float& pv, Mtx44* self) {
  new (self) Mtx44(&pv);
}

[[gnu::used]] void Construct(float m00, float m01, float m02, float m03,
  float m10, float m11, float m12, float m13, float m20, float m21, float m22,
  float m23, float m30, float m31, float m32, float m33, Mtx44* self) {
  new (self) Mtx44(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23,
    m30, m31, m32, m33);
}

[[gnu::used]] void Construct(const Vec4& axisX, const Vec4& axisY,
  const Vec4& axisZ, const Vec4& axisW, Mtx44* self) {
  new (self) Mtx44(axisX, axisY, axisZ, axisW);
}

[[gnu::used]] void Destruct(Mtx44*) {}

[[gnu::used]] void Transpose(Mtx44& self) {
  self.Transpose();
}

[[gnu::used]] Mtx44 opNeg(const Mtx44& self) {
  return -self;
}

[[gnu::used]] Mtx44 opAdd(const Mtx44& self, const Mtx44& other) {
  return self + other;
}

[[gnu::used]] Mtx44 opSub(const Mtx44& self, const Mtx44& other) {
  return self - other;
}

[[gnu::used]] Mtx44 opMul(const Mtx44& self, const Mtx44& other) {
  return self * other;
}

[[gnu::used]] Mtx44 opMul(const Mtx44& self, float f) {
  return self * f;
}

[[gnu::used]] Mtx44 opDiv(const Mtx44& self, float f) {
  return self / f;
}

[[gnu::used]] Mtx44& opAddAssign(Mtx44& self, const Mtx44& other) {
  return self += other;
}

[[gnu::used]] Mtx44& opSubAssign(Mtx44& self, const Mtx44& other) {
  return self -= other;
}

[[gnu::used]] Mtx44& opMulAssign(Mtx44& self, const Mtx44& other) {
  return self *= other;
}

[[gnu::used]] Mtx44& opMulAssign(Mtx44& self, float f) {
  return self *= f;
}

[[gnu::used]] Mtx44& opDivAssign(Mtx44& self, float f) {
  return self /= f;
}

}

namespace mtx44 {

[[gnu::used]] Mtx44 MakeTranspose(const Mtx44& value) {
  return Mtx44::MakeTranspose(value);
}

[[gnu::used]] Mtx44 PerspectiveRightHanded(float width, float height,
  float nearClip, float farClip) {
  return Mtx44::PerspectiveRightHanded(width, height, nearClip, farClip);
}

[[gnu::used]] Mtx44 PerspectiveFieldOfViewRightHanded(float fieldOfView,
  float aspectRatio, float nearClip, float farClip) {
  return Mtx44::PerspectiveFieldOfViewRightHanded(fieldOfView, aspectRatio,
    nearClip, farClip);
}

[[gnu::used]] Mtx44 PerspectiveOffCenterRightHanded(float left, float right,
  float bottom, float top, float nearClip, float farClip) {
  return Mtx44::PerspectiveOffCenterRightHanded(left, right, bottom, top,
    nearClip, farClip);
}

[[gnu::used]] Mtx44 OrthographicRightHanded(float width, float height,
  float nearClip, float farClip) {
  return Mtx44::OrthographicRightHanded(width, height, nearClip, farClip);
}

[[gnu::used]] Mtx44 OrthographicOffCenterRightHanded(float left, float right,
  float bottom, float top, float nearClip, float farClip) {
  return Mtx44::OrthographicOffCenterRightHanded(left, right, bottom, top,
    nearClip, farClip);
}

// The fourth lanes are cleared.
[[gnu::used]] Mtx43 ToMatrix4x3f(const Mtx44& value) {
  float32x4_t rows[4];
  for (int i = 0; i < 4; i++) {
    rows[i] = value.Row(i);
    rows[i][3] = 0.0f;
  }
  return Mtx43(Vec3(rows[0]), Vec3(rows[1]), Vec3(rows[2]), Vec3(rows[3]));
}

[[gnu::used]] const Mtx44& Zero() {
  return Mtx44::Zero();
}

[[gnu::used]] const Mtx44& Identity() {
  return Mtx44::Identity();
}

}

}
