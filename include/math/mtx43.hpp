#pragma once

#include <arm_neon.h>

#include "math/vec3.hpp"
#include "nn/util/util_matrix.hpp"

namespace math {

class Mtx44;
class Quat;

// A 4x3 matrix of four NEON rows, the axes followed by the translation. The
// fourth lane of a row is kept zero.
class Mtx43 {
public:
  Mtx43() {}

  explicit Mtx43(const float* m)
    : m_{{m[0], m[1], m[2], 0.0f}, {m[3], m[4], m[5], 0.0f},
      {m[6], m[7], m[8], 0.0f}, {m[9], m[10], m[11], 0.0f}} {}

  Mtx43(float m00, float m01, float m02, float m10, float m11, float m12,
    float m20, float m21, float m22, float m30, float m31, float m32)
    : m_{{m00, m01, m02, 0.0f}, {m10, m11, m12, 0.0f},
      {m20, m21, m22, 0.0f}, {m30, m31, m32, 0.0f}} {}

  Mtx43(const Vec3& axisX, const Vec3& axisY, const Vec3& axisZ,
    const Vec3& axisW)
    : m_{axisX.v(), axisY.v(), axisZ.v(), axisW.v()} {}

  Mtx43(const nn::util::MatrixRowMajor4x3f& other)
    : m_{other.rows[0], other.rows[1], other.rows[2], other.rows[3]} {}

  Mtx43(const Mtx43& other)
    : m_{other.m_[0], other.m_[1], other.m_[2], other.m_[3]} {}

  float32x4_t Row(int i) const { return m_[i]; }

  Vec3 GetAxisX() const;
  Vec3 GetAxisY() const;
  Vec3 GetAxisZ() const;
  Vec3 GetAxisW() const;
  void SetAxisX(const Vec3& v);
  void SetAxisY(const Vec3& v);
  void SetAxisZ(const Vec3& v);
  void SetAxisW(const Vec3& v);
  void Set(const Vec3& x, const Vec3& y, const Vec3& z, const Vec3& w);
  void SetScale(const Vec3& v);
  void SetTranslate(const Vec3& v);
  void SetRotate(const Quat& v);
  void SetRotate(const Vec3& v);

  // The 3x3 part and the translation are transposed together with a zero
  // fourth column.
  void Transpose() {
    const float32x4x2_t a = vzipq_f32(m_[0], m_[2]);
    const float32x4x2_t b = vzipq_f32(m_[1], vdupq_n_f32(0.0f));
    const float32x4x2_t low = vzipq_f32(a.val[0], b.val[0]);
    const float32x4x2_t high = vzipq_f32(a.val[1], b.val[1]);
    m_[0] = low.val[0];
    m_[1] = low.val[1];
    m_[2] = high.val[0];
    m_[3] = high.val[1];
  }

  Vec3 Transform(const Vec3& v) const;
  Vec3 TransformNormal(const Vec3& v) const;

  Mtx43& operator=(const Mtx43& other);
  bool operator==(const Mtx43& other) const;

  Mtx43 operator-() const {
    const float32x4_t zero = vdupq_n_f32(0.0f);
    return Mtx43(vsubq_f32(zero, m_[0]), vsubq_f32(zero, m_[1]),
      vsubq_f32(zero, m_[2]), vsubq_f32(zero, m_[3]));
  }

  Mtx43 operator+(const Mtx43& other) const {
    return Mtx43(vaddq_f32(m_[0], other.m_[0]), vaddq_f32(m_[1], other.m_[1]),
      vaddq_f32(m_[2], other.m_[2]), vaddq_f32(m_[3], other.m_[3]));
  }

  Mtx43 operator-(const Mtx43& other) const {
    return Mtx43(vsubq_f32(m_[0], other.m_[0]), vsubq_f32(m_[1], other.m_[1]),
      vsubq_f32(m_[2], other.m_[2]), vsubq_f32(m_[3], other.m_[3]));
  }

  // The rows of this matrix transformed by the other one.
  Mtx43 operator*(const Mtx43& other) const {
    return Mtx43(other.RotateLanes(m_[0]), other.RotateLanes(m_[1]),
      other.RotateLanes(m_[2]),
      vaddq_f32(other.m_[3], other.RotateLanes(m_[3])));
  }

  Mtx44 operator*(const Mtx44& other) const;

  Mtx43 operator*(float f) const {
    return Mtx43(vmulq_n_f32(m_[0], f), vmulq_n_f32(m_[1], f),
      vmulq_n_f32(m_[2], f), vmulq_n_f32(m_[3], f));
  }

  Mtx43 operator/(float f) const { return *this * (1.0f / f); }

  Mtx43& operator+=(const Mtx43& other) {
    for (int i = 0; i < 4; i++) {
      m_[i] = vaddq_f32(m_[i], other.m_[i]);
    }
    return *this;
  }

  Mtx43& operator-=(const Mtx43& other) {
    for (int i = 0; i < 4; i++) {
      m_[i] = vsubq_f32(m_[i], other.m_[i]);
    }
    return *this;
  }

  Mtx43& operator*=(const Mtx43& other) {
    const Mtx43 product = *this * other;
    for (int i = 0; i < 4; i++) {
      m_[i] = product.m_[i];
    }
    return *this;
  }

  Mtx43& operator*=(float f) {
    for (int i = 0; i < 4; i++) {
      m_[i] = vmulq_n_f32(m_[i], f);
    }
    return *this;
  }

  Mtx43& operator/=(float f) { return *this *= 1.0f / f; }

  static Mtx43 MakeTranslation(const Vec3& value) {
    return Mtx43(float32x4_t{1.0f, 0.0f, 0.0f, 0.0f},
      float32x4_t{0.0f, 1.0f, 0.0f, 0.0f},
      float32x4_t{0.0f, 0.0f, 1.0f, 0.0f}, value.v());
  }

  static Mtx43 MakeScale(const Vec3& value) {
    return Mtx43(float32x4_t{value.x(), 0.0f, 0.0f, 0.0f},
      float32x4_t{0.0f, value.y(), 0.0f, 0.0f},
      float32x4_t{0.0f, 0.0f, value.z(), 0.0f}, vdupq_n_f32(0.0f));
  }

  static Mtx43 MakeRotation(const Vec3& radian);

  static Mtx43 MakeTranspose(const Mtx43& value) {
    Mtx43 m(value);
    m.Transpose();
    return m;
  }

  static Mtx43 LookAtRightHanded(const Vec3& position, const Vec3& target,
    const Vec3& upward);
  static Mtx43 LookToRightHanded(const Vec3& position,
    const Vec3& direction, const Vec3& upward);

  static const Mtx43& Zero() {
    static const Mtx43 zero(nn::util::MatrixRowMajor4x3f::ConstantZero);
    return zero;
  }

  static const Mtx43& Identity() {
    static const Mtx43 identity(
      nn::util::MatrixRowMajor4x3f::ConstantIdentity);
    return identity;
  }

  float32x4_t TransformLanes(float32x4_t v) const {
    return vaddq_f32(RotateLanes(v), m_[3]);
  }

  // The vector times the 3x3 part.
  float32x4_t RotateLanes(float32x4_t v) const {
    float32x4_t r = vmulq_n_f32(m_[0], v[0]);
    r = vmlaq_n_f32(r, m_[1], v[1]);
    return vmlaq_n_f32(r, m_[2], v[2]);
  }

private:
  Mtx43(float32x4_t x, float32x4_t y, float32x4_t z, float32x4_t w)
    : m_{x, y, z, w} {}

  float32x4_t m_[4];
};

}
