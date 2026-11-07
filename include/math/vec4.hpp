#pragma once

#include <arm_neon.h>

#include "math/vec3.hpp"
#include "nn/util/vector.hpp"

namespace math {

// A NEON vector of four floats.
class Vec4 {
public:
  Vec4() : v_(vdupq_n_f32(0.0f)) {}

  Vec4(float x, float y, float z, float w) : v_{x, y, z, w} {}

  explicit Vec4(const float* v) : v_{v[0], v[1], v[2], v[3]} {}

  Vec4(const nn::util::Vector4fType& other) : v_(other._v) {}

  Vec4(const Vec4& other) : v_(other.v_) {}

  explicit Vec4(float32x4_t v) : v_(v) {}

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

  Vec4& operator=(const Vec4& other) {
    v_[0] = other.v_[0];
    v_[1] = other.v_[1];
    v_[2] = other.v_[2];
    v_[3] = other.v_[3];
    return *this;
  }

  bool operator==(const Vec4& other) const {
    const uint32x4_t equal = vceqq_f32(v_, other.v_);
    return equal[0] && equal[1] && equal[2] && equal[3];
  }

  Vec4 operator-() const { return Vec4(vsubq_f32(vdupq_n_f32(0.0f), v_)); }

  Vec4 operator+(const Vec4& other) const {
    return Vec4(vaddq_f32(v_, other.v_));
  }

  Vec4 operator-(const Vec4& other) const {
    return Vec4(vsubq_f32(v_, other.v_));
  }

  Vec4 operator*(float f) const { return Vec4(vmulq_n_f32(v_, f)); }

  Vec4 operator/(float f) const { return Vec4(vmulq_n_f32(v_, 1.0f / f)); }

  Vec4& operator+=(const Vec4& other) {
    v_ = vaddq_f32(v_, other.v_);
    return *this;
  }

  Vec4& operator-=(const Vec4& other) {
    v_ = vsubq_f32(v_, other.v_);
    return *this;
  }

  Vec4& operator*=(float f) {
    v_ = vmulq_n_f32(v_, f);
    return *this;
  }

  Vec4& operator/=(float f) {
    v_ = vmulq_n_f32(v_, 1.0f / f);
    return *this;
  }

  float LengthSquared() const {
    return vget_lane_f32(Vec3::SumLanes(vmulq_f32(v_, v_)), 0);
  }

  float Length() const {
    return vget_lane_f32(vsqrt_f32(Vec3::SumLanes(vmulq_f32(v_, v_))), 0);
  }

  float Dot(const Vec4& other) const;

  // A zero vector stays zero and is reported.
  bool Normalize();

  // The angle to the other vector in radians, 0 when one of them is zero.
  float Angle(const Vec4& other) const;

  static float Dot(const Vec4& a, const Vec4& b) {
    return vget_lane_f32(Vec3::SumLanes(vmulq_f32(a.v_, b.v_)), 0);
  }

  static float Distance(const Vec4& a, const Vec4& b) {
    return (a - b).Length();
  }

  static float DistanceSquared(const Vec4& a, const Vec4& b) {
    return (a - b).LengthSquared();
  }

  static Vec4 Normalize(const Vec4& value) {
    return Vec4(Vec3::NormalizeLanes(value.v_,
      Vec3::SumLanes(vmulq_f32(value.v_, value.v_))));
  }

  static Vec4 Maximize(const Vec4& a, const Vec4& b) {
    return Vec4(vmaxq_f32(a.v_, b.v_));
  }

  static Vec4 Minimize(const Vec4& a, const Vec4& b) {
    return Vec4(vminq_f32(a.v_, b.v_));
  }

  static Vec4 Lerp(const Vec4& a, const Vec4& b, float t) {
    return Vec4(a.v_ + (b.v_ - a.v_) * t);
  }

  static float Angle(const Vec4& a, const Vec4& b) { return a.Angle(b); }

  static const Vec4& Zero() {
    static const Vec4 zero(nn::util::Vector4f::ConstantZero);
    return zero;
  }

  static const Vec4& One() {
    static const Vec4 one(nn::util::Vector4f::ConstantOne);
    return one;
  }

  static const Vec4& UnitX() {
    static const Vec4 unit(nn::util::Vector4f::ConstantUnitX);
    return unit;
  }

  static const Vec4& UnitY() {
    static const Vec4 unit(nn::util::Vector4f::ConstantUnitY);
    return unit;
  }

  static const Vec4& UnitZ() {
    static const Vec4 unit(nn::util::Vector4f::ConstantUnitZ);
    return unit;
  }

  static const Vec4& UnitW() {
    static const Vec4 unit(nn::util::Vector4f::ConstantUnitW);
    return unit;
  }

private:
  float32x4_t v_;
};

}
