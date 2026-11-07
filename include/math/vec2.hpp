#pragma once

#include <arm_neon.h>

#include <cmath>

namespace math {

class Vec3;

// A NEON vector of two floats. Its arithmetic works lane by lane.
class Vec2 {
public:
  Vec2() : v_(vdup_n_f32(0.0f)) {}

  Vec2(float x, float y) : v_{x, y} {}

  explicit Vec2(const float* v) : v_{v[0], v[1]} {}

  explicit Vec2(const Vec3& other);

  Vec2(const Vec2& other) : v_(other.v_) {}

  explicit Vec2(float32x2_t v) : v_(v) {}

  float x() const { return v_[0]; }
  float y() const { return v_[1]; }

  void SetX(float x) { v_[0] = x; }
  void SetY(float y) { v_[1] = y; }

  void Set(float x, float y) {
    v_[0] = x;
    v_[1] = y;
  }

  Vec2& operator=(const Vec2& other) {
    v_[0] = other.v_[0];
    v_[1] = other.v_[1];
    return *this;
  }

  Vec2& operator=(const Vec3& other);

  bool operator==(const Vec2& other) const {
    return v_[0] == other.v_[0] && v_[1] == other.v_[1];
  }

  Vec2 operator-() const { return Vec2(-v_[0], -v_[1]); }

  Vec2 operator+(const Vec2& other) const {
    return Vec2(vadd_f32(v_, other.v_));
  }

  Vec2 operator-(const Vec2& other) const {
    return Vec2(vsub_f32(v_, other.v_));
  }

  Vec2 operator*(float f) const { return Vec2(v_[0] * f, v_[1] * f); }

  Vec2 operator/(float f) const { return Vec2(v_[0] / f, v_[1] / f); }

  Vec2& operator+=(const Vec2& other) {
    v_[0] += other.v_[0];
    v_[1] += other.v_[1];
    return *this;
  }

  Vec2& operator-=(const Vec2& other) {
    v_[0] -= other.v_[0];
    v_[1] -= other.v_[1];
    return *this;
  }

  Vec2& operator*=(float f) {
    v_[0] *= f;
    v_[1] *= f;
    return *this;
  }

  Vec2& operator/=(float f) {
    v_[0] /= f;
    v_[1] /= f;
    return *this;
  }

  // A zero vector is kept and reported.
  bool Normalize() {
    const bool nonzero = v_[0] != 0.0f || v_[1] != 0.0f;
    if (nonzero) {
      const float length = Length();
      v_[0] /= length;
      v_[1] /= length;
    }
    return nonzero;
  }

  float Dot(const Vec2& other) const {
    return v_[0] * other.v_[0] + v_[1] * other.v_[1];
  }

  float Cross(const Vec2& other) const {
    return v_[0] * other.v_[1] - v_[1] * other.v_[0];
  }

  float LengthSquared() const { return v_[0] * v_[0] + v_[1] * v_[1]; }

  float Length() const { return std::sqrt(LengthSquared()); }

  // The angle to the other vector in radians, 0 when one of them is zero.
  float Angle(const Vec2& other) const;

  static float Dot(const Vec2& a, const Vec2& b) { return a.Dot(b); }

  static float Cross(const Vec2& a, const Vec2& b) { return a.Cross(b); }

  static float Distance(const Vec2& a, const Vec2& b) {
    return (b - a).Length();
  }

  static float DistanceSquared(const Vec2& a, const Vec2& b) {
    return (b - a).LengthSquared();
  }

  static Vec2 Normalize(const Vec2& value) {
    if (value.v_[0] == 0.0f && value.v_[1] == 0.0f) {
      return value;
    }
    const float length = value.Length();
    return Vec2(value.v_[0] / length, value.v_[1] / length);
  }

  static Vec2 Maximize(const Vec2& a, const Vec2& b) {
    return Vec2(a.v_[0] > b.v_[0] ? a.v_[0] : b.v_[0],
      a.v_[1] > b.v_[1] ? a.v_[1] : b.v_[1]);
  }

  static Vec2 Minimize(const Vec2& a, const Vec2& b) {
    return Vec2(a.v_[0] > b.v_[0] ? b.v_[0] : a.v_[0],
      a.v_[1] > b.v_[1] ? b.v_[1] : a.v_[1]);
  }

  static Vec2 Lerp(const Vec2& a, const Vec2& b, float t) {
    return a + (b - a) * t;
  }

  // Rotates counterclockwise by the angle in radians.
  static Vec2 Rotate(const Vec2& value, float rotation) {
    const float s = sinf(rotation);
    const float c = cosf(rotation);
    return Vec2(c * value.v_[0] + -s * value.v_[1],
      s * value.v_[0] + c * value.v_[1]);
  }

  static float Angle(const Vec2& a, const Vec2& b) { return a.Angle(b); }

  static const Vec2& Zero() {
    static const Vec2 zero(0.0f, 0.0f);
    return zero;
  }

  static const Vec2& One() {
    static const Vec2 one(1.0f, 1.0f);
    return one;
  }

  static const Vec2& UnitX() {
    static const Vec2 unit(1.0f, 0.0f);
    return unit;
  }

  static const Vec2& UnitY() {
    static const Vec2 unit(0.0f, 1.0f);
    return unit;
  }

private:
  friend class Vec3;

  float32x2_t v_;
};

}
