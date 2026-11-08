#include "nn/imu/imu_full_sensor_state.hpp"

#include <new>
#include <string.h>

#include "nerd/sensors/sensor_state.hpp"

namespace nn::imu {

namespace {

using nerd::gyro_pointing::AngularVelocity;
using nerd::gyro_pointing::LQuaternion;
using nerd::gyro_pointing::SensorCalibrationData;
using nerd::gyro_pointing::Vector3f;
using nerd::sensors::SensorState;

constexpr float DegreeToRadian = 0.017453292f;
constexpr float AccelerometerRangeScale = 981.0f;
constexpr float AccelerometerBiasScale = AccelerometerRangeScale * 0.001f;

constexpr float SampleInterval = 0.0048f;

constexpr uint32_t SampleFlagBase = 0x1011;
constexpr uint32_t SampleFlagUnknown35 = 0x20;
constexpr uint32_t SampleFlagUnknown34 = 0x2;
constexpr uint32_t SampleFlagMagnetometer = 0x100;
constexpr uint32_t SampleFlagUnknown42 = 0x200;

struct InitLimits {
  float gyroscopeBiasMin[3];
  float gyroscopeBiasMax[3];
  float gyroscopeMatrixMin[9];
  float gyroscopeMatrixMax[9];
  float accelerometerBiasMin[3];
  float accelerometerBiasMax[3];
  float accelerometerMatrixMin[9];
  float accelerometerMatrixMax[9];
};

static_assert(sizeof(InitLimits) ==
  sizeof(nerd::gyro_pointing::SensorParameterLimits));

// The two enumerations agree on the axes, none selects all of them.
nerd::gyro_pointing::AxisConfig ConvertAxisConfig(AxisConfig config) {
  switch (config) {
    case 1:
      return static_cast<nerd::gyro_pointing::AxisConfig>(1);
    case 2:
      return static_cast<nerd::gyro_pointing::AxisConfig>(2);
    case 3:
      return static_cast<nerd::gyro_pointing::AxisConfig>(3);
    case 4:
      return static_cast<nerd::gyro_pointing::AxisConfig>(4);
    case 5:
      return static_cast<nerd::gyro_pointing::AxisConfig>(5);
    case 6:
      return static_cast<nerd::gyro_pointing::AxisConfig>(6);
    default:
      return static_cast<nerd::gyro_pointing::AxisConfig>(7);
  }
}

util::Vector4fType ToVector4(const LQuaternion<float>& quaternion) {
  util::Vector4fType vector;
  vector._v = float32x4_t{quaternion.vector.elements[0],
    quaternion.vector.elements[1], quaternion.vector.elements[2],
    quaternion.scalar};
  return vector;
}

util::Float3 ToFloat3(const Vector3f& vector) {
  return {vector.elements[0], vector.elements[1], vector.elements[2]};
}

Vector3f ToVector3(const util::Float3& value) {
  return {{value.x, value.y, value.z}};
}

bool IsTrue(const bool& value) {
  return *reinterpret_cast<const uint8_t*>(&value) == 1;
}

bool IsSet(const bool& value) {
  return *reinterpret_cast<const uint8_t*>(&value) != 0;
}

SixAxisFullCalibrationParameter ToParameter(
  const SensorCalibrationData& data) {
  SixAxisFullCalibrationParameter parameter;
  parameter.gyroscopeBias = ToFloat3(data.gyroscopeBias);
  for (int i = 0; i < 9; i++) {
    parameter.gyroscopeMatrix[i] = data.gyroscopeMatrix.elements[i];
  }
  parameter.accelerometerBias = ToFloat3(data.accelerometerBias);
  for (int i = 0; i < 9; i++) {
    parameter.accelerometerMatrix[i] = data.accelerometerMatrix.elements[i];
  }
  memcpy(parameter.covariance, &data.covariance,
    sizeof(parameter.covariance));
  return parameter;
}

}

SixAxisSensorInformation::SixAxisSensorInformation(float gyroscopeRange,
  float accelerometerRange, float gyroscopeBias, float accelerometerBias,
  float gyroscopeGain, float accelerometerGain, float gyroscopeCrossAxis,
  float accelerometerCrossAxis) {
  gyroscope.range = gyroscopeRange * DegreeToRadian;
  accelerometer.range = accelerometerRange * AccelerometerRangeScale;
  for (int i = 0; i < 3; i++) {
    gyroscope.biasMin[i] = -(gyroscopeBias * DegreeToRadian);
    gyroscope.biasMax[i] = gyroscopeBias * DegreeToRadian;
    accelerometer.biasMin[i] = -(accelerometerBias * AccelerometerBiasScale);
    accelerometer.biasMax[i] = accelerometerBias * AccelerometerBiasScale;
  }
  for (int row = 0; row < 3; row++) {
    for (int column = 0; column < 3; column++) {
      const int index = row * 3 + column;
      const float identity = row == column ? 1.0f : 0.0f;
      const float gyroscopeDeviation =
        row == column ? gyroscopeGain : gyroscopeCrossAxis;
      const float accelerometerDeviation =
        row == column ? accelerometerGain : accelerometerCrossAxis;
      gyroscope.matrixMin[index] = identity - gyroscopeDeviation;
      gyroscope.matrixMax[index] = identity + gyroscopeDeviation;
      accelerometer.matrixMin[index] = identity - accelerometerDeviation;
      accelerometer.matrixMax[index] = identity + accelerometerDeviation;
    }
  }
}

FullSensorState::FullSensorState() : m_IsInitialized(false) {}

// The sensor state takes the ranges first, then the limits of each sensor
// grouped by kind.
void FullSensorState::Initialize(const StateParameters& parameters) {
  const SensorLimits& gyroscope = parameters.sensorInformation.gyroscope;
  const SensorLimits& accelerometer =
    parameters.sensorInformation.accelerometer;
  nerd::sensors::SensorStateInitParams params = {};
  params.info.gyroscopeRange = gyroscope.range;
  params.info.accelerometerRange = accelerometer.range;
  InitLimits& limits = *reinterpret_cast<InitLimits*>(&params.info.limits);
  memcpy(limits.gyroscopeBiasMin, gyroscope.biasMin, sizeof(gyroscope.biasMin));
  memcpy(limits.gyroscopeBiasMax, gyroscope.biasMax, sizeof(gyroscope.biasMax));
  memcpy(limits.gyroscopeMatrixMin, gyroscope.matrixMin,
    sizeof(gyroscope.matrixMin));
  memcpy(limits.gyroscopeMatrixMax, gyroscope.matrixMax,
    sizeof(gyroscope.matrixMax));
  memcpy(limits.accelerometerBiasMin, accelerometer.biasMin,
    sizeof(accelerometer.biasMin));
  memcpy(limits.accelerometerBiasMax, accelerometer.biasMax,
    sizeof(accelerometer.biasMax));
  memcpy(limits.accelerometerMatrixMin, accelerometer.matrixMin,
    sizeof(accelerometer.matrixMin));
  memcpy(limits.accelerometerMatrixMax, accelerometer.matrixMax,
    sizeof(accelerometer.matrixMax));
  params.unknownc8 = parameters.unknownd0;
  params.unknownd0 = parameters.unknownd4;
  params.unknownd8 = parameters.unknownc8;
  params.unknowndc = SampleInterval;
  params.stillnessAxisConfig =
    ConvertAxisConfig(parameters.stillnessAxisConfig);
  params.isUnknowne1 = !IsTrue(parameters.isUnknowncd);
  new (m_Storage) SensorState(params);
  m_IsInitialized = true;
}

FullSensorState::~FullSensorState() {
  if (IsTrue(m_IsInitialized)) {
    reinterpret_cast<SensorState*>(m_Storage)->~SensorState();
    m_IsInitialized = false;
  }
}

void FullSensorState::Finalize() {}

void FullSensorState::Feed(const SixAxisSensorSample& sample) {
  nerd::sensors::NineAxisSensorSample values = {};
  values.timestamp = sample.timestamp;
  values.acceleration = ToVector3(sample.acceleration);
  values.angularVelocity = ToVector3(sample.angularVelocity);
  values.unknown20 = ToVector3(sample.unknown20);
  values.unknown2c = sample.unknown2c;
  values.unknown3c = sample.unknown30;
  values.flags = SampleFlagBase;
  if (IsSet(sample.isUnknown35)) {
    values.flags |= SampleFlagUnknown35;
  }
  if (IsTrue(sample.isUnknown34)) {
    values.flags |= SampleFlagUnknown34;
  }
  reinterpret_cast<SensorState*>(m_Storage)->FeedSixAxisSensorValues(values);
}

void FullSensorState::Feed(const NineAxisSensorSample& sample) {
  nerd::sensors::NineAxisSensorSample values = {};
  values.timestamp = sample.timestamp;
  values.acceleration = ToVector3(sample.acceleration);
  values.angularVelocity = ToVector3(sample.angularVelocity);
  values.unknown20 = ToVector3(sample.unknown20);
  values.unknown2c = sample.unknown2c;
  values.magnetometer = ToVector3(sample.magnetometer);
  values.unknown3c = sample.unknown3c;
  values.flags = SampleFlagBase | SampleFlagMagnetometer;
  if (IsSet(sample.isUnknown41)) {
    values.flags |= SampleFlagUnknown35;
  }
  if (IsTrue(sample.isUnknown40)) {
    values.flags |= SampleFlagUnknown34;
  }
  if (IsTrue(sample.isUnknown42)) {
    values.flags |= SampleFlagUnknown42;
  }
  reinterpret_cast<SensorState*>(m_Storage)->FeedSixAxisSensorValues(values);
}

void FullSensorState::Reset() {
  reinterpret_cast<SensorState*>(m_Storage)->Reset();
}

void FullSensorState::SetStillnessAxisConfig(AxisConfig config) {
  reinterpret_cast<SensorState*>(m_Storage)->SetStillnessAxisConfig(
    ConvertAxisConfig(config));
}

void FullSensorState::StartCalibration() {
  reinterpret_cast<SensorState*>(m_Storage)->StartCalibration();
}

void FullSensorState::EndCalibration() {
  reinterpret_cast<SensorState*>(m_Storage)->EndCalibration();
}

bool FullSensorState::IsCalibrating() const {
  return reinterpret_cast<const SensorState*>(m_Storage)->IsCalibrating();
}

bool FullSensorState::IsStill() const {
  return reinterpret_cast<const SensorState*>(m_Storage)->IsStill();
}

// The pointing object keeps its own initialization flag.
bool FullSensorState::IsInitialized() const {
  const auto& pointing =
    reinterpret_cast<const SensorState*>(m_Storage)->GyroPointing();
  return reinterpret_cast<const bool*>(&pointing)[0x3ac8];
}

util::Vector4fType FullSensorState::GetOrientation() const {
  return ToVector4(
    reinterpret_cast<const SensorState*>(m_Storage)->GetOrientation());
}

util::Vector4fType FullSensorState::GetStableOrientation() const {
  return ToVector4(
    reinterpret_cast<const SensorState*>(m_Storage)->GetStableOrientation());
}

util::Vector4fType FullSensorState::GetHeuristicOrientation() const {
  return ToVector4(reinterpret_cast<const SensorState*>(m_Storage)
    ->GyroPointing().GetHeuristicOrientation());
}

util::Float3 FullSensorState::GetUnbiasedAcceleration() const {
  return ToFloat3(
    reinterpret_cast<const SensorState*>(m_Storage)->GetUnbiasedAcceleration());
}

util::Float3 FullSensorState::GetUnbiasedAngularVelocity() const {
  return ToFloat3(reinterpret_cast<const SensorState*>(m_Storage)
    ->GetUnbiasedAngularVelocity());
}

util::Float3 FullSensorState::GetUnbiasedAngularAcceleration() const {
  return ToFloat3(reinterpret_cast<const SensorState*>(m_Storage)
    ->GetUnbiasedAngularAcceleration());
}

util::Float3 FullSensorState::GetUnbiasedAccelerationAtLocationOffset(
  const util::Float3& offset) const {
  const Vector3f vector = ToVector3(offset);
  return ToFloat3(reinterpret_cast<const SensorState*>(m_Storage)
    ->GetUnbiasedAccelerationAtLocationOffset(vector));
}

SixAxisFullCalibrationParameter FullSensorState::GetCalibrationData() const {
  const SensorCalibrationData data =
    reinterpret_cast<const SensorState*>(m_Storage)->GetCalibrationData();
  return ToParameter(data);
}

SixAxisFullCalibrationParameter
FullSensorState::GetFullCalibrationParameters() const {
  const SensorCalibrationData data =
    reinterpret_cast<const SensorState*>(m_Storage)->GetCalibrationData();
  return ToParameter(data);
}

void FullSensorState::LoadCalibrationData(
  const SixAxisFullCalibrationParameter& data) {
  SensorCalibrationData values;
  values.gyroscopeBias = ToVector3(data.gyroscopeBias);
  for (int i = 0; i < 9; i++) {
    values.gyroscopeMatrix.elements[i] = data.gyroscopeMatrix[i];
  }
  values.accelerometerBias = ToVector3(data.accelerometerBias);
  for (int i = 0; i < 9; i++) {
    values.accelerometerMatrix.elements[i] = data.accelerometerMatrix[i];
  }
  memcpy(&values.covariance, data.covariance, sizeof(data.covariance));
  reinterpret_cast<SensorState*>(m_Storage)->GyroPointing().LoadParameters(
    values);
}

void FullSensorState::ResetHeading() {
  reinterpret_cast<SensorState*>(m_Storage)->GyroPointing().ResetHeading();
}

bool FullSensorState::IsGyroBiasCalibrationReady(const AxisConfig& axes,
  CalibrationState threshold) const {
  if (axes == AxisConfig_None) {
    return false;
  }
  const nerd::sensors::AxisCalibrationState state =
    reinterpret_cast<const SensorState*>(m_Storage)->GetCalibrationState();
  bool isReady = true;
  if ((axes & AxisConfig_X) != 0 && state.axes[0] < threshold) {
    isReady = false;
  }
  if ((axes & AxisConfig_Y) != 0 && state.axes[1] < threshold) {
    isReady = false;
  }
  if ((axes & AxisConfig_Z) != 0 && state.axes[2] < threshold) {
    isReady = false;
  }
  return isReady;
}

bool FullSensorState::IsGyroBiasCalibrationReady(
  const AxisConfig& axes) const {
  return IsGyroBiasCalibrationReady(axes, CalibrationState_Completed);
}

bool FullSensorState::IsGyroBiasCalibrationReady() const {
  return IsGyroBiasCalibrationReady(AxisConfig_All);
}

void FullSensorState::GetSignalAnalysisData(
  signal::GyroSignalAnalysisV1& data) const {
  const nerd::sensors::SignalAnalysis analysis =
    reinterpret_cast<const SensorState*>(m_Storage)->GetSignalAnalysis();
  data.isValid = analysis.isValid;
  data.unknown4 = analysis.unknown4;
  data.unknown8 = analysis.unknown8;
}

util::Float3 FullSensorState::GetGyroscopeBiasInRadPerSec() const {
  const SensorCalibrationData data =
    reinterpret_cast<const SensorState*>(m_Storage)->GetCalibrationData();
  return ToFloat3(data.gyroscopeBias);
}

float FullSensorState::GetTemperatureInDegC() const {
  return reinterpret_cast<const SensorState*>(m_Storage)->GetCalibrationTemp();
}

util::Float3 FullSensorState::GetAccelerationOnJigInMeterPerSecSq() const {
  return ToFloat3(
    reinterpret_cast<const SensorState*>(m_Storage)->GetCalibrationAccOnJig());
}

void FullSensorState::SetGyroscopeBiasInitialGuess(const util::Float3& bias) {
  const AngularVelocity guess = {{{bias.x}, {bias.y}, {bias.z}}};
  reinterpret_cast<SensorState*>(m_Storage)->GyroPointing()
    .SetGyroscopeBiasInitialGuess(guess);
}

void FullSensorState::SnapStableOrientationToBestEstimate() {
  reinterpret_cast<SensorState*>(m_Storage)->GyroPointing()
    .SnapStableOrientationToBestEstimate();
}

util::Float3 ConvertAccelerationToAnotherLocation(
  const util::Float3& angularVelocity, const util::Float3& angularAcceleration,
  const util::Float3& acceleration, const util::Float3& offset) {
  return ToFloat3(nerd::sensors::ConvertAccelerationToAnotherLocation(
    ToVector3(angularVelocity), ToVector3(angularAcceleration),
    ToVector3(acceleration), ToVector3(offset)));
}

}
