#pragma once

#include <arm_neon.h>

#include "math/quat.hpp"
#include "math/vec3.hpp"
#include "nn/util/util_matrix.hpp"

namespace math {

class Mtx44;
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

  // A singular matrix becomes zero and is reported.
  bool Inverse() {
    const Mtx43 m(*this);
    float32x4_t axes[3];
    const float32x2_t det = m.InverseAxes(axes);
    const uint32x4_t singular = vceqzq_f32(vdupq_lane_f32(det, 0));
    float32x4_t w = vmulq_n_f32(vnegq_f32(axes[0]), m.m_[3][0]);
    w = vmlsq_n_f32(w, axes[1], m.m_[3][1]);
    w = vmlsq_n_f32(w, axes[2], m.m_[3][2]);
    for (int i = 0; i < 3; i++) {
      m_[i] = ClearLanes(axes[i], singular);
    }
    m_[3] = ClearLanes(w, singular);
    return vget_lane_f32(det, 0) != 0.0f;
  }

  // The transposed inverse of the 3x3 part, the translation becomes zero.
  bool InverseTranspose() {
    float32x4_t axes[3];
    const float32x2_t det = InverseAxes(axes);
    const uint32x4_t singular = vceqzq_f32(vdupq_lane_f32(det, 0));
    for (int i = 0; i < 3; i++) {
      m_[i] = ClearLanes(axes[i], singular);
    }
    Transpose();
    return vget_lane_f32(det, 0) != 0.0f;
  }

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
  static Mtx43 MakeRotation(const Quat& value);

  // The rotation about x, then y, then z with a zero translation. The sines
  // and cosines of the three angles come from one vector estimate.
  static Mtx43 RotationOf(const Vec3& radian) {
    float32x4_t s;
    float32x4_t c;
    SinCosLanes(&s, &c, radian.v());
    const float32x2_t cz = {c[2], s[2]};
    const float32x2_t sz = {s[2], c[2]};
    const float32x4_t x = vmulq_f32(
      vcombine_f32(vdup_n_f32(c[1]), float32x2_t{s[1], 0.0f}),
      vcombine_f32(cz, float32x2_t{-1.0f, 0.0f}));
    const float32x4_t a = vmulq_f32(
      vcombine_f32(vdup_n_f32(s[1]), float32x2_t{c[1], 0.0f}),
      vcombine_f32(cz, float32x2_t{1.0f, 0.0f}));
    const float32x4_t b = vcombine_f32(sz, vdup_n_f32(0.0f));
    const float32x4_t y = vaddq_f32(vmulq_n_f32(a, s[0]),
      vmulq_f32(vmulq_n_f32(b, c[0]), float32x4_t{-1.0f, 1.0f, 0.0f, 0.0f}));
    const float32x4_t z = vaddq_f32(vmulq_n_f32(a, c[0]),
      vmulq_f32(vmulq_n_f32(b, s[0]), float32x4_t{1.0f, -1.0f, 0.0f, 0.0f}));
    return Mtx43(x, y, z, vdupq_n_f32(0.0f));
  }

  // The rotation of the quaternion with a zero translation.
  static Mtx43 RotationOf(const Quat& value) {
    float32x4_t q = value.v();
    q[3] = 0.0f;
    float32x4_t a = Vec3::Swizzle<1, 0, 0, 3>(q);
    float32x4_t b = Vec3::Swizzle<2, 2, 1, 3>(q);
    a = vmulq_f32(a, a);
    b = vmulq_f32(b, b);
    a = vaddq_f32(a, a);
    b = vaddq_f32(b, b);
    const float32x4_t diagonal =
      vsubq_f32(float32x4_t{1.0f, 1.0f, 1.0f, 0.0f}, vaddq_f32(b, a));
    float32x4_t c = vmulq_f32(Vec3::Swizzle<1, 2, 0, 3>(q), q);
    c = vaddq_f32(c, c);
    const float32x4_t zxy = Vec3::Swizzle<2, 0, 1, 3>(q);
    float32x4_t d = vmulq_laneq_f32(zxy, value.v(), 3);
    d = vaddq_f32(d, d);
    const float32x4_t sum = vaddq_f32(c, d);
    const float32x4_t difference = vsubq_f32(c, d);
    const float32x4_t xy = Vec3::Permute<0, 6, 4, 1>(sum, difference);
    const float32x4_t z = Vec3::Permute<2, 5, 7, 7>(sum, difference);
    return Mtx43(Vec3::Permute<0, 4, 5, 3>(diagonal, xy),
      Vec3::Permute<6, 1, 7, 3>(diagonal, xy),
      Vec3::Permute<4, 5, 2, 3>(diagonal, z), vdupq_n_f32(0.0f));
  }

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

  // The four lanes of nn::util::SinCosEst at once.
  static void SinCosLanes(float32x4_t* pSin, float32x4_t* pCos,
    float32x4_t radian) {
    using namespace nn::util;
    const float32x4_t turns =
      vrndnq_f32(vmulq_f32(radian, vdupq_n_f32(Float1Divided2Pi)));
    float32x4_t x = vmlaq_f32(radian, vdupq_n_f32(-Float2Pi), turns);
    const uint32x4_t above = vcgtq_f32(x, vdupq_n_f32(FloatPiDivided2));
    x = vbslq_f32(above, vsubq_f32(vdupq_n_f32(FloatPi), x), x);
    const uint32x4_t below = vcgtq_f32(vdupq_n_f32(-FloatPiDivided2), x);
    x = vbslq_f32(below, vsubq_f32(vdupq_n_f32(-FloatPi), x), x);
    const uint32x4_t positive = vbicq_u32(vmvnq_u32(above), below);

    const float32x4_t x2 = vmulq_f32(x, x);
    *pSin = vmulq_f32(x, PolynomialLanes(x2, detail::SinCoefficients));
    const float32x4_t cosine = PolynomialLanes(x2, detail::CosCoefficients);
    *pCos = vbslq_f32(positive, cosine, vnegq_f32(cosine));
  }

  static float32x4_t PolynomialLanes(float32x4_t x2, const float* k) {
    float32x4_t p = vmlsq_n_f32(vdupq_n_f32(k[1]), x2, k[0]);
    p = vmlaq_f32(vdupq_n_f32(-k[2]), x2, p);
    p = vmlaq_f32(vdupq_n_f32(k[3]), x2, p);
    p = vmlaq_f32(vdupq_n_f32(-k[4]), x2, p);
    return vmlaq_f32(vdupq_n_f32(1.0f), x2, p);
  }

  static float32x4_t ClearLanes(float32x4_t v, uint32x4_t mask) {
    return vreinterpretq_f32_u32(vbicq_u32(vreinterpretq_u32_f32(v), mask));
  }

  // The cofactor axes of the 3x3 part over its determinant, which the
  // reciprocal estimate refines by two Newton steps. Returns the
  // determinant.
  float32x2_t InverseAxes(float32x4_t* axes) const {
    const float32x4_t triple = vsubq_f32(
      vmulq_f32(vmulq_f32(m_[0], Vec3::Swizzle<1, 2, 0, 3>(m_[1])),
        Vec3::Swizzle<2, 0, 1, 3>(m_[2])),
      vmulq_f32(vmulq_f32(m_[0], Vec3::Swizzle<2, 0, 1, 3>(m_[1])),
        Vec3::Swizzle<1, 2, 0, 3>(m_[2])));
    const float32x4_t pair = vpaddq_f32(triple, triple);
    const float32x2_t det =
      vadd_f32(vget_low_f32(pair), vdup_laneq_f32(pair, 1));
    const float32x4_t square = vdupq_lane_f32(det, 0);
    float32x4_t estimate = vrecpeq_f32(square);
    estimate = vmulq_f32(estimate, vrecpsq_f32(estimate, square));
    estimate = vmulq_f32(estimate, vrecpsq_f32(estimate, square));
    Mtx43 t(*this);
    t.Transpose();
    axes[0] = vmulq_f32(estimate, Vec3::CrossLanes(t.m_[1], t.m_[2]));
    axes[1] = vmulq_f32(estimate, Vec3::CrossLanes(t.m_[2], t.m_[0]));
    axes[2] = vmulq_f32(estimate, Vec3::CrossLanes(t.m_[0], t.m_[1]));
    return det;
  }

  float32x4_t m_[4];
};

}
