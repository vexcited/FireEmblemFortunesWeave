#include <cmath>

#include "nn/util/math_types.hpp"
#include "nn/util/vector.hpp"

#pragma GCC visibility push(hidden)

#include "math/vec2.hpp"
#include "math/vec3.hpp"
#include "math/vec4.hpp"

#pragma GCC visibility pop

namespace math {

namespace {

// The cosine is clamped against rounding before its arc cosine.
[[gnu::always_inline]] inline float AngleOfCosine(float cosine) {
  return nn::util::AcosEst(fminf(fmaxf(cosine, -1.0f), 1.0f));
}

}

Vec2& Vec2::operator=(const Vec3& other) {
  v_[0] = other.x();
  v_[1] = other.y();
  return *this;
}

float Vec2::Angle(const Vec2& other) const {
  const float length = Length();
  if (length == 0.0f) {
    return 0.0f;
  }
  const float otherLength = other.Length();
  if (otherLength == 0.0f) {
    return 0.0f;
  }
  return AngleOfCosine(Dot(other) / (length * otherLength));
}

float Vec3::Angle(const Vec3& other) const {
  const float length = Length();
  if (length <= 0.0f) {
    return 0.0f;
  }
  const float otherLength = other.Length();
  if (otherLength <= 0.0f) {
    return 0.0f;
  }
  return AngleOfCosine(Dot(other) / (length * otherLength));
}

bool Vec3::XZ_Normalize() {
  SetY(0.0f);
  return Normalize();
}

float Vec3::XZ_Dot(const Vec3& other) const {
  return XZ().Dot(other.XZ());
}

Vec3 Vec3::XZ_Cross(const Vec3& other) const {
  return XZ().Cross(other.XZ());
}

float Vec3::XZ_Length() const {
  return XZ().Length();
}

float Vec3::XZ_LengthSquared() const {
  return XZ().LengthSquared();
}

float Vec3::XZ_Angle(const Vec3& other) const {
  return XZ().Angle(other.XZ());
}

bool Vec3::XY_Normalize() {
  SetZ(0.0f);
  return Normalize();
}

float Vec3::XY_Dot(const Vec3& other) const {
  return XY().Dot(other.XY());
}

Vec3 Vec3::XY_Cross(const Vec3& other) const {
  return XY().Cross(other.XY());
}

float Vec3::XY_Length() const {
  return XY().Length();
}

float Vec3::XY_LengthSquared() const {
  return XY().LengthSquared();
}

float Vec3::XY_Angle(const Vec3& other) const {
  return XY().Angle(other.XY());
}

bool Vec3::YZ_Normalize() {
  SetX(0.0f);
  return Normalize();
}

float Vec3::YZ_Dot(const Vec3& other) const {
  return YZ().Dot(other.YZ());
}

Vec3 Vec3::YZ_Cross(const Vec3& other) const {
  return YZ().Cross(other.YZ());
}

float Vec3::YZ_Length() const {
  return YZ().Length();
}

float Vec3::YZ_LengthSquared() const {
  return YZ().LengthSquared();
}

float Vec3::YZ_Angle(const Vec3& other) const {
  return YZ().Angle(other.YZ());
}

bool Vec4::Normalize() {
  const float32x2_t sum = Vec3::SumLanes(vmulq_f32(v_, v_));
  v_ = Vec3::NormalizeLanes(v_, sum);
  return vget_lane_f32(sum, 0) != 0.0f;
}

float Vec4::Dot(const Vec4& other) const {
  return Dot(*this, other);
}

float Vec4::Angle(const Vec4& other) const {
  const float length = Length();
  if (length <= 0.0f) {
    return 0.0f;
  }
  const float otherLength = other.Length();
  if (otherLength <= 0.0f) {
    return 0.0f;
  }
  return AngleOfCosine(Dot(other) / (length * otherLength));
}

}
