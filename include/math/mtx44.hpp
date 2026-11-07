#pragma once

#include <arm_neon.h>

#include "math/vec3.hpp"
#include "math/vec4.hpp"
#include "nn/util/util_matrix.hpp"

namespace math {

class Mtx43;

// A 4x4 matrix of four NEON rows.
class Mtx44 {
public:
  Mtx44() {}

  explicit Mtx44(const float* m)
    : m_{{m[0], m[1], m[2], m[3]}, {m[4], m[5], m[6], m[7]},
      {m[8], m[9], m[10], m[11]}, {m[12], m[13], m[14], m[15]}} {}

  Mtx44(float m00, float m01, float m02, float m03, float m10, float m11,
    float m12, float m13, float m20, float m21, float m22, float m23,
    float m30, float m31, float m32, float m33)
    : m_{{m00, m01, m02, m03}, {m10, m11, m12, m13},
      {m20, m21, m22, m23}, {m30, m31, m32, m33}} {}

  Mtx44(const Vec4& axisX, const Vec4& axisY, const Vec4& axisZ,
    const Vec4& axisW)
    : m_{axisX.v(), axisY.v(), axisZ.v(), axisW.v()} {}

  Mtx44(const nn::util::MatrixRowMajor4x4f& other)
    : m_{other.rows[0], other.rows[1], other.rows[2], other.rows[3]} {}

  Mtx44(const Mtx44& other)
    : m_{other.m_[0], other.m_[1], other.m_[2], other.m_[3]} {}

  Mtx44(float32x4_t x, float32x4_t y, float32x4_t z, float32x4_t w)
    : m_{x, y, z, w} {}

  float32x4_t Row(int i) const { return m_[i]; }

  Vec4 GetAxisX() const;
  Vec4 GetAxisY() const;
  Vec4 GetAxisZ() const;
  Vec4 GetAxisW() const;
  void SetAxisX(const Vec4& v);
  void SetAxisY(const Vec4& v);
  void SetAxisZ(const Vec4& v);
  void SetAxisW(const Vec4& v);
  void Set(const Vec4& x, const Vec4& y, const Vec4& z, const Vec4& w);

  void Transpose() {
    const float32x4x2_t a = vzipq_f32(m_[0], m_[2]);
    const float32x4x2_t b = vzipq_f32(m_[1], m_[3]);
    const float32x4x2_t low = vzipq_f32(a.val[0], b.val[0]);
    const float32x4x2_t high = vzipq_f32(a.val[1], b.val[1]);
    m_[0] = low.val[0];
    m_[1] = low.val[1];
    m_[2] = high.val[0];
    m_[3] = high.val[1];
  }

  Vec4 Transform(const Vec4& v) const;
  Vec3 TransformCoord(const Vec3& v) const;

  Mtx44& operator=(const Mtx44& other);
  bool operator==(const Mtx44& other) const;

  Mtx44 operator-() const {
    const float32x4_t zero = vdupq_n_f32(0.0f);
    return Mtx44(vsubq_f32(zero, m_[0]), vsubq_f32(zero, m_[1]),
      vsubq_f32(zero, m_[2]), vsubq_f32(zero, m_[3]));
  }

  Mtx44 operator+(const Mtx44& other) const {
    return Mtx44(vaddq_f32(m_[0], other.m_[0]), vaddq_f32(m_[1], other.m_[1]),
      vaddq_f32(m_[2], other.m_[2]), vaddq_f32(m_[3], other.m_[3]));
  }

  Mtx44 operator-(const Mtx44& other) const {
    return Mtx44(vsubq_f32(m_[0], other.m_[0]), vsubq_f32(m_[1], other.m_[1]),
      vsubq_f32(m_[2], other.m_[2]), vsubq_f32(m_[3], other.m_[3]));
  }

  // The rows of this matrix transformed by the other one.
  Mtx44 operator*(const Mtx44& other) const {
    return Mtx44(other.TransformLanes(m_[0]), other.TransformLanes(m_[1]),
      other.TransformLanes(m_[2]), other.TransformLanes(m_[3]));
  }

  Mtx44 operator*(const Mtx43& other) const;

  Mtx44 operator*(float f) const {
    return Mtx44(vmulq_n_f32(m_[0], f), vmulq_n_f32(m_[1], f),
      vmulq_n_f32(m_[2], f), vmulq_n_f32(m_[3], f));
  }

  Mtx44 operator/(float f) const { return *this * (1.0f / f); }

  Mtx44& operator+=(const Mtx44& other) {
    for (int i = 0; i < 4; i++) {
      m_[i] = vaddq_f32(m_[i], other.m_[i]);
    }
    return *this;
  }

  Mtx44& operator-=(const Mtx44& other) {
    for (int i = 0; i < 4; i++) {
      m_[i] = vsubq_f32(m_[i], other.m_[i]);
    }
    return *this;
  }

  Mtx44& operator*=(const Mtx44& other) {
    const Mtx44 product = *this * other;
    for (int i = 0; i < 4; i++) {
      m_[i] = product.m_[i];
    }
    return *this;
  }

  Mtx44& operator*=(float f) {
    for (int i = 0; i < 4; i++) {
      m_[i] = vmulq_n_f32(m_[i], f);
    }
    return *this;
  }

  Mtx44& operator/=(float f) { return *this *= 1.0f / f; }

  static Mtx44 MakeTranspose(const Mtx44& value) {
    Mtx44 m(value);
    m.Transpose();
    return m;
  }

  static const Mtx44& Zero() {
    static const Mtx44 zero(nn::util::MatrixRowMajor4x4f::ConstantZero);
    return zero;
  }

  static const Mtx44& Identity() {
    static const Mtx44 identity(
      nn::util::MatrixRowMajor4x4f::ConstantIdentity);
    return identity;
  }

  float32x4_t TransformLanes(float32x4_t v) const {
    return vmlaq_n_f32(RotateLanes(v), m_[3], v[3]);
  }

  // The vector times the first three rows.
  float32x4_t RotateLanes(float32x4_t v) const {
    float32x4_t r = vmulq_n_f32(m_[0], v[0]);
    r = vmlaq_n_f32(r, m_[1], v[1]);
    return vmlaq_n_f32(r, m_[2], v[2]);
  }

  // Divides by the fourth lane of the result.
  Vec3 TransformCoordLanes(const Vec3& v) const {
    float32x4_t r = vmulq_n_f32(m_[0], v.x());
    r = vmlaq_n_f32(r, m_[1], v.y());
    r = vmlaq_n_f32(r, m_[2], v.z());
    r = vaddq_f32(r, m_[3]);
    return Vec3(r) / r[3];
  }

private:
  float32x4_t m_[4];
};

}
