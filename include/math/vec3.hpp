#pragma once

#include <arm_neon.h>

#include <cmath>

#include "math/vec2.hpp"
#include "nn/util/vector.hpp"

namespace math {

// A NEON vector of three floats. The fourth lane is kept zero when a vector
// is assigned.
class Vec3 {
public:
  Vec3() : v_(vdupq_n_f32(0.0f)) {}

  Vec3(float x, float y, float z) : v_{x, y, z, 0.0f} {}

  explicit Vec3(const float* v) : v_{v[0], v[1], v[2], 0.0f} {}

  explicit Vec3(const Vec2& other)
    : v_(vcombine_f32(other.v_, vdup_n_f32(0.0f))) {}

  Vec3(const nn::util::Vector3fType& other) : v_(other._v) {}

  Vec3(const Vec3& other) : v_(other.v_) {}

  explicit Vec3(float32x4_t v) : v_(v) {}

  float x() const { return v_[0]; }
  float y() const { return v_[1]; }
  float z() const { return v_[2]; }

  float32x4_t v() const { return v_; }

  void SetX(float x) { v_[0] = x; }
  void SetY(float y) { v_[1] = y; }

  // The fourth lane is cleared with the third.
  void SetZ(float z) {
    v_[2] = z;
    v_[3] = 0.0f;
  }

  void Set(float x, float y, float z) { v_ = float32x4_t{x, y, z, 0.0f}; }

  Vec3& operator=(const Vec3& other) {
    v_[0] = other.v_[0];
    v_[1] = other.v_[1];
    v_[2] = other.v_[2];
    v_[3] = 0.0f;
    return *this;
  }

  Vec3& operator=(const Vec2& other) {
    v_[0] = other.v_[0];
    v_[1] = other.v_[1];
    SetZ(0.0f);
    return *this;
  }

  bool operator==(const Vec3& other) const {
    const uint32x4_t equal = vceqq_f32(v_, other.v_);
    return equal[0] && equal[1] && equal[2];
  }

  Vec3 operator-() const { return Vec3(vsubq_f32(vdupq_n_f32(0.0f), v_)); }

  Vec3 operator+(const Vec3& other) const {
    return Vec3(vaddq_f32(v_, other.v_));
  }

  Vec3 operator-(const Vec3& other) const {
    return Vec3(vsubq_f32(v_, other.v_));
  }

  Vec3 operator*(float f) const { return Vec3(vmulq_n_f32(v_, f)); }

  // Multiplies by the reciprocal and clears the fourth lane.
  Vec3 operator/(float f) const {
    float32x4_t v = vmulq_n_f32(v_, 1.0f / f);
    v[3] = 0.0f;
    return Vec3(v);
  }

  Vec3& operator+=(const Vec3& other) {
    v_ = vaddq_f32(v_, other.v_);
    return *this;
  }

  Vec3& operator-=(const Vec3& other) {
    v_ = vsubq_f32(v_, other.v_);
    return *this;
  }

  Vec3& operator*=(float f) {
    v_ = vmulq_n_f32(v_, f);
    return *this;
  }

  Vec3& operator/=(float f) {
    v_ = vmulq_n_f32(v_, 1.0f / f);
    v_[3] = 0.0f;
    return *this;
  }

  // Sums all four lanes.
  float LengthSquared() const {
    return vget_lane_f32(SumLanes(vmulq_f32(v_, v_)), 0);
  }

  float Length() const {
    return vget_lane_f32(vsqrt_f32(SumLanes(vmulq_f32(v_, v_))), 0);
  }

  float Dot(const Vec3& other) const {
    return vget_lane_f32(SumLanes(vmulq_f32(v_, other.v_)), 0);
  }

  Vec3 Cross(const Vec3& other) const {
    return Vec3(CrossLanes(v_, other.v_));
  }

  // Normalizes through the reciprocal square root estimate refined by two
  // Newton steps. A zero vector stays zero and is reported.
  bool Normalize() {
    const float32x2_t sum = SumLanes(vmulq_f32(v_, v_));
    v_ = NormalizeLanes(v_, sum);
    return vget_lane_f32(sum, 0) != 0.0f;
  }

  // The angle to the other vector in radians, 0 when one of them is zero.
  float Angle(const Vec3& other) const;

  // The projections clearing the other lanes.
  Vec3 XZ() const {
    return Vec3(vcombine_f32(vset_lane_f32(0.0f, vget_low_f32(v_), 1),
      vset_lane_f32(0.0f, vget_high_f32(v_), 1)));
  }

  Vec3 XY() const {
    return Vec3(vcombine_f32(vget_low_f32(v_), vdup_n_f32(0.0f)));
  }

  Vec3 YZ() const { return Vec3(0.0f, y(), z()); }

  bool XZ_Normalize();
  float XZ_Dot(const Vec3& other) const;
  Vec3 XZ_Cross(const Vec3& other) const;
  float XZ_Length() const;
  float XZ_LengthSquared() const;
  float XZ_Angle(const Vec3& other) const;

  bool XY_Normalize();
  float XY_Dot(const Vec3& other) const;
  Vec3 XY_Cross(const Vec3& other) const;
  float XY_Length() const;
  float XY_LengthSquared() const;
  float XY_Angle(const Vec3& other) const;

  bool YZ_Normalize();
  float YZ_Dot(const Vec3& other) const;
  Vec3 YZ_Cross(const Vec3& other) const;
  float YZ_Length() const;
  float YZ_LengthSquared() const;
  float YZ_Angle(const Vec3& other) const;

  static float Dot(const Vec3& a, const Vec3& b) { return a.Dot(b); }

  // A distance that is not a number becomes 0.
  static float Distance(const Vec3& a, const Vec3& b) {
    const float distance = (a - b).Length();
    return std::isnan(distance) ? 0.0f : distance;
  }

  static float DistanceSquared(const Vec3& a, const Vec3& b) {
    const float distance = (a - b).LengthSquared();
    return std::isnan(distance) ? 0.0f : distance;
  }

  static Vec3 Normalize(const Vec3& value) {
    return Vec3(NormalizeLanes(value.v_,
      SumLanes(vmulq_f32(value.v_, value.v_))));
  }

  static Vec3 Cross(const Vec3& a, const Vec3& b) { return a.Cross(b); }

  static Vec3 Maximize(const Vec3& a, const Vec3& b) {
    return Vec3(vmaxq_f32(a.v_, b.v_));
  }

  static Vec3 Minimize(const Vec3& a, const Vec3& b) {
    return Vec3(vminq_f32(a.v_, b.v_));
  }

  static Vec3 Lerp(const Vec3& a, const Vec3& b, float t) {
    return Vec3(a.v_ + (b.v_ - a.v_) * t);
  }

  static float Angle(const Vec3& a, const Vec3& b) { return a.Angle(b); }

  static const Vec3& Zero() {
    static const Vec3 zero(nn::util::Vector3f::ConstantZero);
    return zero;
  }

  static const Vec3& One() {
    static const Vec3 one(nn::util::Vector3f::ConstantOne);
    return one;
  }

  static const Vec3& UnitX() {
    static const Vec3 unit(nn::util::Vector3f::ConstantUnitX);
    return unit;
  }

  static const Vec3& UnitY() {
    static const Vec3 unit(nn::util::Vector3f::ConstantUnitY);
    return unit;
  }

  static const Vec3& UnitZ() {
    static const Vec3 unit(nn::util::Vector3f::ConstantUnitZ);
    return unit;
  }

  // The horizontal sum of the lanes in both lanes of the result.
  static float32x2_t SumLanes(float32x4_t v) {
    const float32x2_t sum = vadd_f32(vget_high_f32(v), vget_low_f32(v));
    return vpadd_f32(sum, sum);
  }

  // Picks two lanes through a byte table lookup.
  template<int X, int Y>
  static float32x2_t PickLanes(float32x4_t v) {
    const uint8x8_t index = {X * 4, X * 4 + 1, X * 4 + 2, X * 4 + 3, Y * 4,
      Y * 4 + 1, Y * 4 + 2, Y * 4 + 3};
    return vreinterpret_f32_u8(vqtbl1_u8(vreinterpretq_u8_f32(v), index));
  }

  template<int X, int Y, int Z, int W>
  static float32x4_t Swizzle(float32x4_t v) {
    return vcombine_f32(PickLanes<X, Y>(v), PickLanes<Z, W>(v));
  }

  // Picks two lanes of the pair of vectors, the lanes of b numbered from 4.
  template<int X, int Y>
  static float32x2_t PickLanes(float32x4_t a, float32x4_t b) {
    const uint8x16x2_t table = {{vreinterpretq_u8_f32(a),
      vreinterpretq_u8_f32(b)}};
    const uint8x8_t index = {X * 4, X * 4 + 1, X * 4 + 2, X * 4 + 3, Y * 4,
      Y * 4 + 1, Y * 4 + 2, Y * 4 + 3};
    return vreinterpret_f32_u8(vqtbl2_u8(table, index));
  }

  template<int X, int Y, int Z, int W>
  static float32x4_t Permute(float32x4_t a, float32x4_t b) {
    return vcombine_f32(PickLanes<X, Y>(a, b), PickLanes<Z, W>(a, b));
  }

  static float32x4_t CrossLanes(float32x4_t a, float32x4_t b) {
    return vmlsq_f32(
      vmulq_f32(Swizzle<1, 2, 0, 3>(a), Swizzle<2, 0, 1, 3>(b)),
      Swizzle<2, 0, 1, 3>(a), Swizzle<1, 2, 0, 3>(b));
  }

  // Scales by the reciprocal square root of the squared length, which the
  // estimate refines by two Newton steps. A zero length gives zero.
  static float32x4_t NormalizeLanes(float32x4_t v, float32x2_t sum) {
    const float32x4_t square = vcombine_f32(sum, sum);
    float32x4_t estimate = vrsqrteq_f32(square);
    estimate = vmulq_f32(estimate,
      vrsqrtsq_f32(estimate, vmulq_f32(square, estimate)));
    estimate = vmulq_f32(estimate,
      vrsqrtsq_f32(estimate, vmulq_f32(square, estimate)));
    return vreinterpretq_f32_u32(vbicq_u32(
      vreinterpretq_u32_f32(vmulq_f32(v, estimate)), vceqzq_f32(square)));
  }

private:
  friend class Vec2;

  float32x4_t v_;
};

inline Vec2::Vec2(const Vec3& other) : v_(vget_low_f32(other.v_)) {}

}
