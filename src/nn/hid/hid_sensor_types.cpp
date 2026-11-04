#include "nn/hid/hid_sensor.hpp"

namespace nn::hid {

namespace {

constexpr float StandardGravity = 9.80665f;
constexpr float RadiansPerDegree = 3.14159265f / 180.0f;

}

util::Float3 AccelerationType::GetG() const {
  return {x, y, z};
}

util::Float3 AccelerationType::GetMetersPerSecondSquared() const {
  return {x * StandardGravity, y * StandardGravity, z * StandardGravity};
}

util::Float3 AngularVelocityType::GetDps() const {
  return {x, y, z};
}

util::Float3 AngularVelocityType::GetRadiansPerSecond() const {
  return {x * RadiansPerDegree, y * RadiansPerDegree, z * RadiansPerDegree};
}

float32x4_t SensorFusionOrientation::GetQuaternion() const {
  return quaternion;
}

util::Float3x3 SensorFusionOrientation::GetRotationMatrix() const {
  const float x = quaternion[0];
  const float y = quaternion[1];
  const float z = quaternion[2];
  const float w = quaternion[3];
  util::Float3x3 matrix;
  matrix.m[0][0] = 1.0f - 2.0f * (y * y + z * z);
  matrix.m[0][1] = 2.0f * (x * y + z * w);
  matrix.m[0][2] = 2.0f * (x * z - y * w);
  matrix.m[1][0] = 2.0f * (x * y - z * w);
  matrix.m[1][1] = 1.0f - 2.0f * (x * x + z * z);
  matrix.m[1][2] = 2.0f * (y * z + x * w);
  matrix.m[2][0] = 2.0f * (x * z + y * w);
  matrix.m[2][1] = 2.0f * (y * z - x * w);
  matrix.m[2][2] = 1.0f - 2.0f * (x * x + y * y);
  return matrix;
}

}
