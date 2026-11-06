#include "nerd/sensors/sensor_state.hpp"

namespace nerd::sensors {
namespace {

Vector3f Cross(const Vector3f& left, const Vector3f& right) {
  const auto& a = left.elements;
  const auto& b = right.elements;
  return {{
    a[1] * b[2] - a[2] * b[1],
    a[2] * b[0] - a[0] * b[2],
    a[0] * b[1] - a[1] * b[0],
  }};
}

Vector3f operator+(const Vector3f& left, const Vector3f& right) {
  Vector3f result;

  for (long i = 0; i < 3; ++i) {
    result.elements[i] = left.elements[i] + right.elements[i];
  }

  return result;
}

}

// Rigid body transfer of an acceleration to a point at the given offset.
Vector3f ConvertAccelerationToAnotherLocation(
  const Vector3f& angularVelocity, const Vector3f& angularAcceleration,
  const Vector3f& acceleration, const Vector3f& offset
) {
  return acceleration
    + Cross(angularVelocity, Cross(angularVelocity, offset))
    + Cross(angularAcceleration, offset);
}

void SensorState::SetStillnessAxisConfig(gyro_pointing::AxisConfig config) {
  m_stillnessAxisConfig = config;
}

}
