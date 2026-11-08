#pragma once

#include <stdint.h>

#include "nn/util/vector.hpp"

namespace nn::imu {

// Bits of the axes, none selects all of them.
enum AxisConfig : uint8_t {
  AxisConfig_None = 0,
  AxisConfig_X = 1,
  AxisConfig_Y = 2,
  AxisConfig_Z = 4,
  AxisConfig_All = 7,
};

enum CalibrationState : uint8_t {
  CalibrationState_NotStarted,
  CalibrationState_InProgress,
  CalibrationState_Completed,
};

struct SixAxisSensorSample {
  int64_t timestamp;
  util::Float3 acceleration;
  util::Float3 angularVelocity;
  util::Float3 unknown20;
  float unknown2c;
  float unknown30;
  bool isUnknown34;
  bool isUnknown35;
};

struct NineAxisSensorSample {
  int64_t timestamp;
  util::Float3 acceleration;
  util::Float3 angularVelocity;
  util::Float3 unknown20;
  float unknown2c;
  util::Float3 magnetometer;
  float unknown3c;
  bool isUnknown40;
  bool isUnknown41;
  bool isUnknown42;
};

struct SixAxisFullCalibrationParameter {
  util::Float3 gyroscopeBias;
  float gyroscopeMatrix[9];
  util::Float3 accelerometerBias;
  float accelerometerMatrix[9];
  float covariance[21 * 21];
};

namespace signal {

struct GyroSignalAnalysisV1 {
  bool isValid;
  uint32_t unknown4;
  uint32_t unknown8;
};

}

struct SensorLimits {
  float range;
  float biasMin[3];
  float matrixMin[9];
  float biasMax[3];
  float matrixMax[9];
};

struct SixAxisSensorInformation {
  SixAxisSensorInformation(float gyroscopeRange, float accelerometerRange,
    float gyroscopeBias, float accelerometerBias, float gyroscopeGain,
    float accelerometerGain, float gyroscopeCrossAxis,
    float accelerometerCrossAxis);

  SensorLimits gyroscope;
  SensorLimits accelerometer;
};

struct StateParameters {
  SixAxisSensorInformation sensorInformation;
  float unknownc8;
  AxisConfig stillnessAxisConfig;
  bool isUnknowncd;
  float unknownd0;
  float unknownd4;
};

class FullSensorState {
public:
  FullSensorState();
  ~FullSensorState();

  void Initialize(const StateParameters& parameters);
  void Finalize();
  void Feed(const SixAxisSensorSample& sample);
  void Feed(const NineAxisSensorSample& sample);
  void Reset();
  void SetStillnessAxisConfig(AxisConfig config);
  void StartCalibration();
  void EndCalibration();
  bool IsCalibrating() const;
  bool IsStill() const;
  bool IsInitialized() const;
  util::Vector4fType GetOrientation() const;
  util::Vector4fType GetStableOrientation() const;
  util::Vector4fType GetHeuristicOrientation() const;
  util::Float3 GetUnbiasedAcceleration() const;
  util::Float3 GetUnbiasedAngularVelocity() const;
  util::Float3 GetUnbiasedAngularAcceleration() const;
  util::Float3 GetUnbiasedAccelerationAtLocationOffset(
    const util::Float3& offset) const;
  SixAxisFullCalibrationParameter GetCalibrationData() const;
  SixAxisFullCalibrationParameter GetFullCalibrationParameters() const;
  void LoadCalibrationData(const SixAxisFullCalibrationParameter& data);
  void ResetHeading();
  bool IsGyroBiasCalibrationReady() const;
  bool IsGyroBiasCalibrationReady(const AxisConfig& axes) const;
  bool IsGyroBiasCalibrationReady(const AxisConfig& axes,
    CalibrationState threshold) const;
  void GetSignalAnalysisData(signal::GyroSignalAnalysisV1& data) const;
  util::Float3 GetGyroscopeBiasInRadPerSec() const;
  float GetTemperatureInDegC() const;
  util::Float3 GetAccelerationOnJigInMeterPerSecSq() const;
  void SetGyroscopeBiasInitialGuess(const util::Float3& bias);
  void SnapStableOrientationToBestEstimate();

private:
  alignas(16) uint8_t m_Storage[0x7020];
  bool m_IsInitialized;
};

util::Float3 ConvertAccelerationToAnotherLocation(
  const util::Float3& angularVelocity, const util::Float3& angularAcceleration,
  const util::Float3& acceleration, const util::Float3& offset);

}
