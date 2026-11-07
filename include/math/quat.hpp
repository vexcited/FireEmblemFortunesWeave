#pragma once

#include <arm_neon.h>

#include <cmath>

#include "math/vec3.hpp"
#include "nn/util/vector.hpp"

namespace math {

class Mtx43;

// A quaternion in a NEON vector, the axis part in the first three lanes and
// the real part in the fourth.
class Quat {
public:
  Quat() : v_(vdupq_n_f32(0.0f)) {}

  Quat(float x, float y, float z, float w) : v_{x, y, z, w} {}

  explicit Quat(const float* v) : v_{v[0], v[1], v[2], v[3]} {}

  Quat(const nn::util::Quaternion& other) : v_(other._v) {}

  Quat(const Quat& other) : v_(other.v_) {}

  explicit Quat(float32x4_t v) : v_(v) {}

  float x() const { return v_[0]; }
  float y() const { return v_[1]; }
  float z() const { return v_[2]; }
  float w() const { return v_[3]; }

  float32x4_t v() const { return v_; }

  void SetX(float x) { v_[0] = x; }
  void SetY(float y) { v_[1] = y; }
  void SetZ(float z) { v_[2] = z; }
  void SetW(float w) { v_[3] = w; }

  void Set(float x, float y, float z, float w) {
    v_ = float32x4_t{x, y, z, w};
  }

  Quat& operator=(const Quat& other) {
    v_[0] = other.v_[0];
    v_[1] = other.v_[1];
    v_[2] = other.v_[2];
    v_[3] = other.v_[3];
    return *this;
  }

  bool operator==(const Quat& other) const {
    const uint32x4_t equal = vceqq_f32(v_, other.v_);
    return equal[0] && equal[1] && equal[2] && equal[3];
  }

  Quat operator-() const { return Quat(vsubq_f32(vdupq_n_f32(0.0f), v_)); }

  Quat operator+(const Quat& other) const {
    return Quat(vaddq_f32(v_, other.v_));
  }

  Quat operator-(const Quat& other) const {
    return Quat(vsubq_f32(v_, other.v_));
  }

  Quat operator*(const Quat& other) const {
    return Quat(Multiply(v_, other.v_));
  }

  // Multiplies the inverse of the other quaternion by this one.
  Quat operator/(const Quat& other) const {
    return Quat(Multiply(InverseLanes(other.v_), v_));
  }

  Quat& operator+=(const Quat& other) {
    v_ = vaddq_f32(v_, other.v_);
    return *this;
  }

  Quat& operator-=(const Quat& other) {
    v_ = vsubq_f32(v_, other.v_);
    return *this;
  }

  Quat& operator*=(const Quat& other) { return *this = *this * other; }

  Quat& operator/=(const Quat& other) {
    v_ = Multiply(InverseLanes(other.v_), v_);
    return *this;
  }

  void Conjugate() {
    v_[0] = -v_[0];
    v_[1] = -v_[1];
    v_[2] = -v_[2];
  }

  void Inverse();

  Vec3 Rotate(const Vec3& v) const;

  // Quaternions shorter than the threshold become zero and are reported.
  bool Normalize();

  float Dot(const Quat& other) const;

  float Length() const {
    return vget_lane_f32(vsqrt_f32(Vec3::SumLanes(vmulq_f32(v_, v_))), 0);
  }

  float LengthSquared() const {
    return vget_lane_f32(Vec3::SumLanes(vmulq_f32(v_, v_)), 0);
  }

  Vec3 ToAxisAngle() const;
  Vec3 ToEulerianAngle() const;
  void ToEulerianAngle(float& yaw, float& pitch, float& roll) const;

  static float Dot(const Quat& a, const Quat& b) {
    return vget_lane_f32(Vec3::SumLanes(vmulq_f32(a.v_, b.v_)), 0);
  }

  static Quat Normalize(const Quat& value) {
    return Quat(NormalizeLanes(value.v_,
      Vec3::SumLanes(vmulq_f32(value.v_, value.v_))));
  }

  static Quat Inverse(const Quat& value) {
    return Quat(InverseLanes(value.v_));
  }

  static Quat Lerp(const Quat& a, const Quat& b, float t) {
    return Quat(vmlaq_n_f32(a.v_, vsubq_f32(b.v_, a.v_), t));
  }

  static Quat Slerp(const Quat& a, const Quat& b, float t);
  static Quat Squad(const Quat& a, const Quat& b, const Quat& c,
    const Quat& d, float t);
  static Quat FromYawPitchRoll(float yaw, float pitch, float roll);

  // The halves of the angles go through the double precision sine and
  // cosine.
  static Quat FromEulerianAngle(float yaw, float pitch, float roll) {
    const double cosYaw = cos(yaw * 0.5);
    const double sinYaw = sin(yaw * 0.5);
    const double cosRoll = cos(roll * 0.5);
    const double sinRoll = sin(roll * 0.5);
    const double cosPitch = cos(pitch * 0.5);
    const double sinPitch = sin(pitch * 0.5);
    Quat q;
    q.SetX(cosYaw * sinRoll * cosPitch - sinYaw * cosRoll * sinPitch);
    q.SetY(cosYaw * cosRoll * sinPitch + sinYaw * sinRoll * cosPitch);
    q.SetZ(sinYaw * cosRoll * cosPitch - cosYaw * sinRoll * sinPitch);
    q.SetW(cosYaw * cosRoll * cosPitch + sinYaw * sinRoll * sinPitch);
    return q;
  }

  static Quat FromEulerianAngle(const Vec3& rot) {
    return FromEulerianAngle(rot.z(), rot.y(), rot.x());
  }

  static Quat FromRotationMatrix(const Mtx43& value);

  static const Quat& Zero() {
    static const Quat zero(nn::util::Quaternion::ConstantIdentity);
    return zero;
  }

  // The Hamilton product of the quaternions.
  static float32x4_t Multiply(float32x4_t a, float32x4_t b) {
    const float32x4_t sign = {1.0f, 1.0f, 1.0f, -1.0f};
    float32x4_t r = vmulq_f32(b, Vec3::Swizzle<3, 3, 3, 3>(a));
    r = vmlaq_f32(r, sign, vmulq_f32(Vec3::Swizzle<0, 1, 2, 0>(a),
      Vec3::Swizzle<3, 3, 3, 0>(b)));
    r = vmlaq_f32(r, sign, vmulq_f32(Vec3::Swizzle<1, 2, 0, 1>(a),
      Vec3::Swizzle<2, 0, 1, 1>(b)));
    return vmlsq_f32(r, Vec3::Swizzle<2, 0, 1, 2>(a),
      Vec3::Swizzle<1, 2, 0, 2>(b));
  }

  // The conjugate over the squared length through the reciprocal estimate
  // refined by two Newton steps. A zero quaternion stays its conjugate.
  static float32x4_t InverseLanes(float32x4_t v) {
    const float32x4_t conjugateSign = {-1.0f, -1.0f, -1.0f, 1.0f};
    const float32x4_t conjugate = vmulq_f32(v, conjugateSign);
    const float32x2_t sum = Vec3::SumLanes(vmulq_f32(v, v));
    const float32x4_t square = vcombine_f32(sum, sum);
    float32x4_t estimate = vrecpeq_f32(square);
    estimate = vmulq_f32(estimate, vrecpsq_f32(estimate, square));
    estimate = vmulq_f32(estimate, vrecpsq_f32(estimate, square));
    return vbslq_f32(vceqzq_f32(square), conjugate,
      vmulq_f32(conjugate, estimate));
  }

  static constexpr float kNormalizeThreshold = 0.00001f;

  // Normalizes through the reciprocal square root estimate refined by two
  // Newton steps. Below the threshold the quaternion becomes zero.
  static float32x4_t NormalizeLanes(float32x4_t v, float32x2_t sum) {
    const float32x4_t square = vcombine_f32(sum, sum);
    float32x4_t estimate = vrsqrteq_f32(square);
    estimate = vmulq_f32(estimate,
      vrsqrtsq_f32(estimate, vmulq_f32(square, estimate)));
    estimate = vmulq_f32(estimate,
      vrsqrtsq_f32(estimate, vmulq_f32(square, estimate)));
    const uint32x4_t small =
      vcgtq_f32(vdupq_n_f32(kNormalizeThreshold), square);
    return vreinterpretq_f32_u32(vbicq_u32(
      vreinterpretq_u32_f32(vmulq_f32(v, estimate)), small));
  }

  // Rotates the vector by the conjugation with the quaternion.
  Vec3 RotateVector(const Vec3& v) const {
    const float32x4_t conjugateSign = {-1.0f, -1.0f, -1.0f, 1.0f};
    float32x4_t r =
      Multiply(v_, Multiply(v.v(), vmulq_f32(v_, conjugateSign)));
    r[3] = 0.0f;
    return Vec3(r);
  }

private:
  float32x4_t v_;
};

}
