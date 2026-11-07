#include <new>

#include "nn/util/vector.hpp"

#pragma GCC visibility push(hidden)

#include "math/mtx43.hpp"
#include "math/quat.hpp"
#include "math/vec3.hpp"

#pragma GCC visibility pop

// The natives of the script quaternion type, registered with their
// declarations by the static initializer at 0xc89a10.
namespace math::script {

namespace quat_type {

[[gnu::used]] void Construct(Quat* self) {
  new (self) Quat();
}

[[gnu::used]] void Construct(const float& pv, Quat* self) {
  new (self) Quat(&pv);
}

[[gnu::used]] void Construct(float x, float y, float z, float w, Quat* self) {
  new (self) Quat(x, y, z, w);
}

[[gnu::used]] void Destruct(Quat*) {}

[[gnu::used]] float get_x(const Quat& self) {
  return self.x();
}

[[gnu::used]] float get_y(const Quat& self) {
  return self.y();
}

[[gnu::used]] float get_z(const Quat& self) {
  return self.z();
}

[[gnu::used]] float get_w(const Quat& self) {
  return self.w();
}

[[gnu::used]] void set_x(Quat& self, float v) {
  self.SetX(v);
}

[[gnu::used]] void set_y(Quat& self, float v) {
  self.SetY(v);
}

[[gnu::used]] void set_z(Quat& self, float v) {
  self.SetZ(v);
}

[[gnu::used]] void set_w(Quat& self, float v) {
  self.SetW(v);
}

[[gnu::used]] void Set(Quat& self, float x, float y, float z, float w) {
  self.Set(x, y, z, w);
}

[[gnu::used]] Quat& opAssign(Quat& self, const Quat& other) {
  return self = other;
}

[[gnu::used]] bool opEquals(const Quat& self, const Quat& other) {
  return self == other;
}

[[gnu::used]] Quat opNeg(const Quat& self) {
  return -self;
}

[[gnu::used]] Quat opAdd(const Quat& self, const Quat& other) {
  return self + other;
}

[[gnu::used]] Quat opSub(const Quat& self, const Quat& other) {
  return self - other;
}

[[gnu::used]] Quat opMul(const Quat& self, const Quat& other) {
  return self * other;
}

[[gnu::used]] Quat opDiv(const Quat& self, const Quat& other) {
  return self / other;
}

[[gnu::used]] Quat& opAddAssign(Quat& self, const Quat& other) {
  return self += other;
}

[[gnu::used]] Quat& opSubAssign(Quat& self, const Quat& other) {
  return self -= other;
}

[[gnu::used]] Quat& opMulAssign(Quat& self, const Quat& other) {
  return self *= other;
}

[[gnu::used]] Quat& opDivAssign(Quat& self, const Quat& other) {
  return self /= other;
}

[[gnu::used]] void Conjugate(Quat& self) {
  self.Conjugate();
}

[[gnu::used]] float Length(const Quat& self) {
  return self.Length();
}

[[gnu::used]] float LengthSquared(const Quat& self) {
  return self.LengthSquared();
}

}

namespace quat {

[[gnu::used]] float Dot(const Quat& a, const Quat& b) {
  return Quat::Dot(a, b);
}

[[gnu::used]] Quat Normalize(const Quat& value) {
  return Quat::Normalize(value);
}

[[gnu::used]] Quat Inverse(const Quat& value) {
  return Quat::Inverse(value);
}

[[gnu::used]] Quat Lerp(const Quat& a, const Quat& b, float t) {
  return Quat::Lerp(a, b, t);
}

[[gnu::used]] Quat Slerp(const Quat& a, const Quat& b, float t) {
  return Quat::Slerp(a, b, t);
}

[[gnu::used]] Quat Squad(const Quat& a, const Quat& b, const Quat& c,
  const Quat& d, float t) {
  return Quat::Squad(a, b, c, d, t);
}

[[gnu::used]] Quat FromYawPitchRoll(float yaw, float pitch, float roll) {
  return Quat::FromYawPitchRoll(yaw, pitch, roll);
}

[[gnu::used]] Quat FromEulerianAngle(const float yaw, const float pitch,
  const float roll) {
  return Quat::FromEulerianAngle(yaw, pitch, roll);
}

[[gnu::used]] Quat FromEulerianAngle(const Vec3& rot) {
  return Quat::FromEulerianAngle(rot);
}

[[gnu::used]] Quat FromRotationMatrix(const Mtx43& value) {
  return Quat::FromRotationMatrix(value);
}

[[gnu::used]] const Quat& Zero() {
  return Quat::Zero();
}

}

}
