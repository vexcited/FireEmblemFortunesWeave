#include <math.h>

#include "math/vec3.hpp"
#include "nn/util/math_types.hpp"

namespace math {

#pragma GCC visibility push(hidden)

// The direction from the first position to the second in the xz plane.
float AngleABf(const Vec3& va, const Vec3& vb);

#pragma GCC visibility pop

}

// The natives of the math script namespace, angles in degrees with 0 along
// minus z.
namespace game::script::math {

#pragma GCC visibility push(hidden)

// The ratio of the arctangent to its linear estimate, per half degree.
extern const float kDirCorrections[91];

namespace {

constexpr float kDegreeToRadian = 0.0174532925f;

// The angle of the smaller over the larger side, up to 45 degrees.
[[gnu::always_inline]] inline float CalcOctant(float small, float large) {
  const float linear = small / large * 45.0f;
  const float twice = linear + linear;
  const int index = twice >= 0.0f ? static_cast<int>(twice + 0.5f) :
    -static_cast<int>(0.5f - twice);
  return linear * kDirCorrections[index];
}

[[gnu::always_inline]] inline float Dir(float x, float z) {
  const float absX = fabsf(x);
  const float absZ = fabsf(z);
  if (absX > absZ) {
    const float angle = CalcOctant(absZ, absX);
    if (x >= 0.0f) {
      return z < 0.0f ? 90.0f - angle : angle + 90.0f;
    }
    return z < 0.0f ? angle + 270.0f : 270.0f - angle;
  }
  if (z == 0.0f) {
    return 0.0f;
  }
  const float angle = CalcOctant(absX, absZ);
  if (z >= 0.0f) {
    return x >= 0.0f ? 180.0f - angle : angle + 180.0f;
  }
  return x >= 0.0f ? angle : 360.0f - angle;
}

[[gnu::always_inline]] inline float Correct(float d) {
  if (d >= 0.0f) {
    if (d != 0.0f && d >= 360.0f) {
      do {
        d -= 360.0f;
      } while (d >= 360.0f);
    }
  }
  else {
    do {
      d += 360.0f;
    } while (d < 0.0f);
  }
  return d;
}

}

float CalcDir(float x, float z) {
  return Dir(x, z);
}

float AngleABf(float ax, float az, float bx, float bz) {
  return Dir(bx - ax, bz - az);
}

float AngleABf(const ::math::Vec3& va, const ::math::Vec3& vb) {
  return ::math::AngleABf(va, vb);
}

void MoveDir(float& x, float& z, float spd, float dir) {
  const float radian = dir * kDegreeToRadian;
  x += nn::util::SinEst(radian) * spd;
  z += -nn::util::CosEst(radian) * spd;
}

void MoveDir(::math::Vec3& pos, float spd, float dir) {
  const float radian = dir * kDegreeToRadian;
  pos.SetX(pos.x() + nn::util::SinEst(radian) * spd);
  pos.SetZ(pos.z() + -nn::util::CosEst(radian) * spd);
}

void RotateDir(float& x, float& z, float dir) {
  const float radian = dir * kDegreeToRadian;
  const float s = sinf(radian);
  const float c = cosf(radian);
  const float rotatedX = c * x - s * z;
  const float rotatedZ = c * z + s * x;
  x = rotatedX;
  z = rotatedZ;
}

void RotateDir(::math::Vec3& pos, float dir) {
  const float radian = dir * kDegreeToRadian;
  const float s = sinf(radian);
  const float c = cosf(radian);
  const float rotatedX = c * pos.x() - s * pos.z();
  const float rotatedZ = c * pos.z() + s * pos.x();
  pos.SetX(rotatedX);
  pos.SetZ(rotatedZ);
}

float CorrectDeg(float d) {
  return Correct(d);
}

float CalcDirDir(float d, float cam_d) {
  return Correct(d + cam_d);
}

// The signed turn from the first angle to the second, the shorter way.
float CompareAngle(float d1, float d2) {
  const float from = Correct(d1);
  float to = Correct(d2);
  if (fabsf(to - from) >= 180.0f) {
    to += to >= from ? -360.0f : 360.0f;
  }
  return to - from;
}

#pragma GCC visibility pop

}
