#pragma once

#include <stdint.h>

#include "nerd/gyro_pointing/gyro_pointing.hpp"

namespace nerd::gyro_pointing {

enum class AxisConfig : uint8_t {};

}

namespace nerd::sensors {

using gyro_pointing::Vector3f;

Vector3f ConvertAccelerationToAnotherLocation(
  const Vector3f& angularVelocity, const Vector3f& angularAcceleration,
  const Vector3f& acceleration, const Vector3f& offset
);

struct SensorStateInitParams {
  gyro_pointing::SensorInfo info;
  float unknownc8;
  double unknownd0;
  float unknownd8;
  float unknowndc;
  gyro_pointing::AxisConfig stillnessAxisConfig;
  bool isUnknowne1;
};

struct NineAxisSensorSample {
  int64_t timestamp;
  Vector3f acceleration;
  Vector3f angularVelocity;
  Vector3f unknown20;
  float unknown2c;
  Vector3f magnetometer;
  float unknown3c;
  uint32_t flags;
};

struct AxisCalibrationState {
  uint8_t axes[3];
};

struct SignalAnalysis {
  bool isValid;
  uint32_t unknown4;
  uint32_t unknown8;
};

class SensorState {
public:
  explicit SensorState(const SensorStateInitParams& params);
  ~SensorState();

  void FeedSixAxisSensorValues(const NineAxisSensorSample& sample);
  void Reset();
  void SetStillnessAxisConfig(gyro_pointing::AxisConfig config);
  void StartCalibration();
  void EndCalibration();
  bool IsCalibrating() const;
  bool IsStill() const;
  const gyro_pointing::GyroPointing& GyroPointing() const;
  gyro_pointing::GyroPointing& GyroPointing();
  gyro_pointing::LQuaternion<float> GetOrientation() const;
  gyro_pointing::LQuaternion<float> GetStableOrientation() const;
  Vector3f GetUnbiasedAcceleration() const;
  Vector3f GetUnbiasedAngularVelocity() const;
  Vector3f GetUnbiasedAngularAcceleration() const;
  Vector3f GetUnbiasedAccelerationAtLocationOffset(
    const Vector3f& offset
  ) const;
  gyro_pointing::SensorCalibrationData GetCalibrationData() const;
  AxisCalibrationState GetCalibrationState() const;
  SignalAnalysis GetSignalAnalysis() const;
  float GetCalibrationTemp() const;
  Vector3f GetCalibrationAccOnJig() const;

private:
  unsigned char m_unknown0[0x6f08];
  gyro_pointing::AxisConfig m_stillnessAxisConfig;
};

}
