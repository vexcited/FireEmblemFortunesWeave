#include "nn/util/math_types.hpp"
#include "nn/util/vector.hpp"

#pragma GCC visibility push(hidden)

#include "math/quat.hpp"
#include "math/vec3.hpp"

#pragma GCC visibility pop

namespace math {

namespace {

// The two lanes of nn::util::SinEst at once.
float32x2_t SinLanes(float32x2_t radian) {
  using namespace nn::util;
  const float32x2_t turns =
    vrndn_f32(vmul_f32(radian, vdup_n_f32(Float1Divided2Pi)));
  float32x2_t x = vmla_f32(radian, vdup_n_f32(-Float2Pi), turns);
  x = vbsl_f32(vcgt_f32(x, vdup_n_f32(FloatPiDivided2)),
    vsub_f32(vdup_n_f32(FloatPi), x), x);
  x = vbsl_f32(vcgt_f32(vdup_n_f32(-FloatPiDivided2), x),
    vsub_f32(vdup_n_f32(-FloatPi), x), x);
  const float32x2_t x2 = vmul_f32(x, x);
  const float* k = detail::SinCoefficients;
  float32x2_t p = vmls_n_f32(vdup_n_f32(k[1]), x2, k[0]);
  p = vmla_f32(vdup_n_f32(-k[2]), x2, p);
  p = vmla_f32(vdup_n_f32(k[3]), x2, p);
  p = vmla_f32(vdup_n_f32(-k[4]), x2, p);
  return vmul_f32(x, vmla_f32(vdup_n_f32(1.0f), x2, p));
}

// The weights fall back to the linear interpolation when the quaternions
// are almost parallel, and the second one is negated when they point away.
[[gnu::always_inline]] inline Quat SphericalLerp(const Quat& a, const Quat& b,
  float t) {
  const float cosine = Quat::Dot(a, b);
  const float c = cosine >= 0.0f ? cosine : -cosine;
  const float angle = nn::util::AcosEst(c);
  const float32x2_t sines =
    SinLanes(vmul_n_f32(float32x2_t{1.0f - t, t}, angle));
  const float inverse = 1.0f / nn::util::SinEst(angle);
  const float sign = cosine >= 0.0f ? 1.0f : -1.0f;
  float weightA = inverse * vget_lane_f32(sines, 0);
  float weightB = inverse * (sign * vget_lane_f32(sines, 1));
  if (c > 0.99999f) {
    weightA = 1.0f - t;
    weightB = t * sign;
  }
  return Quat(vmlaq_n_f32(vmulq_n_f32(a.v(), weightA), b.v(), weightB));
}

}

void Quat::Inverse() {
  v_ = InverseLanes(v_);
}

Vec3 Quat::Rotate(const Vec3& v) const {
  return RotateVector(v);
}

bool Quat::Normalize() {
  const float32x2_t sum = Vec3::SumLanes(vmulq_f32(v_, v_));
  const float32x4_t square = vcombine_f32(sum, sum);
  const uint32x4_t small =
    vcgtq_f32(vdupq_n_f32(kNormalizeThreshold), square);
  v_ = NormalizeLanes(v_, sum);
  return vgetq_lane_f32(vreinterpretq_f32_u32(vbicq_u32(
    vreinterpretq_u32_f32(square), small)), 0) != 0.0f;
}

// The halves of the angles go through the sine and cosine estimates.
Quat Quat::Slerp(const Quat& a, const Quat& b, float t) {
  return SphericalLerp(a, b, t);
}

// The original inlines the three interpolations.
Quat Quat::Squad(const Quat& a, const Quat& b, const Quat& c, const Quat& d,
  float t) {
  return SphericalLerp(SphericalLerp(a, d, t), SphericalLerp(b, c, t),
    2.0f * t * (1.0f - t));
}

Quat Quat::FromYawPitchRoll(float yaw, float pitch, float roll) {
  float sinRoll;
  float cosRoll;
  float sinPitch;
  float cosPitch;
  float sinYaw;
  float cosYaw;
  nn::util::SinCosEst(&sinRoll, &cosRoll, roll * 0.5f);
  nn::util::SinCosEst(&sinPitch, &cosPitch, pitch * 0.5f);
  nn::util::SinCosEst(&sinYaw, &cosYaw, yaw * 0.5f);
  const float a = cosPitch * sinYaw;
  const float b = sinPitch * cosYaw;
  const float c = sinPitch * sinYaw;
  const float d = cosPitch * cosYaw;
  return Quat(cosRoll * b + sinRoll * a, cosRoll * a - sinRoll * b,
    sinRoll * d - cosRoll * c, cosRoll * d + sinRoll * c);
}

Quat Quat::FromAxisAngle(const Vec3& axis, float radian) {
  return AxisAngleRotation(axis, radian);
}

Quat Quat::FromEulerianAngle(const Vec3& rot) {
  return FromEulerianAngle(rot.z(), rot.y(), rot.x());
}

float Quat::Dot(const Quat& other) const {
  return Dot(*this, other);
}

// The products are single precision and the rest goes through the double
// precision arctangent and arcsine.
void Quat::ToEulerianAngle(float& yaw, float& pitch, float& roll) const {
  const double yy = y() * y();
  roll = atan2(2.0 * (x() * w() + y() * z()), 1.0 - 2.0 * (x() * x() + yy));

  double sine = 2.0 * (y() * w() + -x() * z());
  if (sine > 1.0) {
    sine = 1.0;
  }
  if (sine < -1.0) {
    sine = -1.0;
  }
  pitch = asin(sine);

  yaw = atan2(2.0 * (z() * w() + x() * y()), 1.0 - 2.0 * (yy + z() * z()));
}

Vec3 Quat::ToEulerianAngle() const {
  float yaw;
  float pitch;
  float roll;
  ToEulerianAngle(yaw, pitch, roll);
  return Vec3(roll, pitch, yaw);
}

}
