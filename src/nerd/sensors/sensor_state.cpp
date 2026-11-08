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

// Each sensor keeps a nibble of flags: present, saturated and invalid.
enum SampleFlag : uint32_t {
  SampleFlag_HasGyr = 1u << 0,
  SampleFlag_GyrSaturated = 1u << 1,
  SampleFlag_GyrInvalid = 1u << 2,
  SampleFlag_HasAcc = 1u << 4,
  SampleFlag_AccSaturated = 1u << 5,
  SampleFlag_AccInvalid = 1u << 6,
  SampleFlag_HasMag = 1u << 8,
  SampleFlag_MagSaturated = 1u << 9,
  SampleFlag_MagInvalid = 1u << 10,
  SampleFlag_HasTemp = 1u << 12,
  SampleFlag_TempSaturated = 1u << 13,
  SampleFlag_TempInvalid = 1u << 14,
};

bool NineAxisSensorSample::IsGyrSaturated() const {
  return (flags & SampleFlag_GyrSaturated) != 0;
}

bool NineAxisSensorSample::IsAccSaturated() const {
  return (flags & SampleFlag_AccSaturated) != 0;
}

bool NineAxisSensorSample::IsMagSaturated() const {
  return (flags & SampleFlag_MagSaturated) != 0;
}

bool NineAxisSensorSample::IsTempSaturated() const {
  return (flags & SampleFlag_TempSaturated) != 0;
}

bool NineAxisSensorSample::IsGyrInvalid() const {
  return (flags & SampleFlag_GyrInvalid) != 0;
}

bool NineAxisSensorSample::IsAccInvalid() const {
  return (flags & SampleFlag_AccInvalid) != 0;
}

bool NineAxisSensorSample::IsMagInvalid() const {
  return (flags & SampleFlag_MagInvalid) != 0;
}

bool NineAxisSensorSample::IsTempInvalid() const {
  return (flags & SampleFlag_TempInvalid) != 0;
}

bool NineAxisSensorSample::HasGyrData() const {
  return (flags & SampleFlag_HasGyr) != 0;
}

bool NineAxisSensorSample::HasAccData() const {
  return (flags & SampleFlag_HasAcc) != 0;
}

bool NineAxisSensorSample::HasMagData() const {
  return (flags & SampleFlag_HasMag) != 0;
}

bool NineAxisSensorSample::HasTempData() const {
  return (flags & SampleFlag_HasTemp) != 0;
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

// The gyro pointing state is the first part of the sensor state.
void SensorState::Reset() {
  reinterpret_cast<gyro_pointing::GyroPointing*>(m_unknown0)->ResetAll();
}

void SensorState::SetStillnessAxisConfig(gyro_pointing::AxisConfig config) {
  m_stillnessAxisConfig = config;
}

gyro_pointing::SensorCalibrationData SensorState::GetCalibrationData() const {
  return reinterpret_cast<const gyro_pointing::GyroPointing*>(m_unknown0)
    ->StoreParameters();
}

gyro_pointing::LQuaternion<float> SensorState::GetOrientation() const {
  return reinterpret_cast<const gyro_pointing::GyroPointing*>(m_unknown0)
    ->GetOrientation();
}

gyro_pointing::LQuaternion<float> SensorState::GetStableOrientation() const {
  return reinterpret_cast<const gyro_pointing::GyroPointing*>(m_unknown0)
    ->GetStableOrientation();
}

}
