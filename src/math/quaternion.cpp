#include "nn/util/vector.hpp"

#pragma GCC visibility push(hidden)

#include "math/quat.hpp"
#include "math/vec3.hpp"

#pragma GCC visibility pop

namespace math {

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

float Quat::Dot(const Quat& other) const {
  return Dot(*this, other);
}

}
