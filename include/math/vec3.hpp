#pragma once

#include <arm_neon.h>

#include "nn/util/vector.hpp"

namespace math {

// A NEON vector of three floats. The fourth lane is kept zero when a vector
// is assigned.
class Vec3 {
public:
  Vec3(float x, float y, float z) : v_{x, y, z, 0.0f} {}

  Vec3(const nn::util::Vector3fType& other) : v_(other._v) {}

  Vec3(const Vec3& other) : v_(other.v_) {}

  explicit Vec3(float32x4_t v) : v_(v) {}

  float x() const { return v_[0]; }
  float y() const { return v_[1]; }
  float z() const { return v_[2]; }

  Vec3& operator=(const Vec3& other) {
    v_[0] = other.v_[0];
    v_[1] = other.v_[1];
    v_[2] = other.v_[2];
    v_[3] = 0.0f;
    return *this;
  }

  Vec3 operator+(const Vec3& other) const {
    return Vec3(vaddq_f32(v_, other.v_));
  }

  Vec3 operator-(const Vec3& other) const {
    return Vec3(vsubq_f32(v_, other.v_));
  }

  // Sums all four lanes.
  float LengthSquared() const {
    const float32x4_t square = vmulq_f32(v_, v_);
    float32x2_t sum = vadd_f32(vget_high_f32(square), vget_low_f32(square));
    sum = vpadd_f32(sum, sum);
    return vget_lane_f32(sum, 0);
  }

private:
  float32x4_t v_;
};

}
