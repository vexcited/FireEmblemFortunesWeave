#include "nerd/gyro_pointing/gyro_pointing.hpp"
#include "nerd/verify.hpp"

namespace nerd::gyro_pointing {
namespace {

// Each threshold halves the previous one.
void ResetThresholds(float* thresholds) {
  thresholds[0] = 10.0f;
  thresholds[1] = 5.0f;
  thresholds[2] = 2.5f;
  thresholds[3] = 1.25f;
  thresholds[4] = 0.625f;
  thresholds[5] = 0.3125f;
  thresholds[6] = 0.15625f;
  thresholds[7] = 0.078125f;
}

}

GyroPointingStateDetector::GyroPointingStateDetector(
  Unit::Acceleration accelerometerRange,
  Unit::RadiansPerSecond gyroscopeRange
)
  : m_detectionMode(1), m_unknown1170{}, m_moving(true),
    m_stillnessMoving(true),
    m_unknown1198(0), m_unknown11a0(0), m_stillnessTime(0.001),
    m_unknown11b0(0), m_velocity{}, m_velocityVariance(250000.0f),
    m_velocityVarianceTime(1.0f), m_thresholds{},
    m_stillnessThreshold(0.002f), m_unknown11f0(5),
    m_accelerometerRange(accelerometerRange.value / 100.0f),
    m_gyroscopeRange(gyroscopeRange.value), m_stillnessSource(0),
    m_gyroscopeBiasGuess{}, m_gyroscopeBiasGuessVariance(125000.0f) {
  m_parameters[0] = 0.01f;
  m_parameters[1] = 0.1f;
  m_parameters[2] = 0.01f;
  m_parameters[3] = 0.001f;
  m_parameters[4] = 0.01f;
  m_parameters[5] = 0.001f;

  if (!(m_accelerometerRange > 0.0f)) {
    OnVerifyFailed(
      "D:\\home\\teamcity\\work\\sdk\\Externals\\nerd-lib\\pool\\"
      "NerdLibKalmanFilter\\examples\\gyro_pointing\\src\\"
      "GyroPointingStateDetector.cpp",
      229, "m_accelerometer_range > 0 * SI::mps2",
      "Invalid accelerometer range passed to the KF"
    );
  }

  if (!(m_gyroscopeRange > 0.0f)) {
    OnVerifyFailed(
      "D:\\home\\teamcity\\work\\sdk\\Externals\\nerd-lib\\pool\\"
      "NerdLibKalmanFilter\\examples\\gyro_pointing\\src\\"
      "GyroPointingStateDetector.cpp",
      230, "m_gyroscope_range > 0 * SI::RadiansPerSecond",
      "Invalid gyroscope range passed to the KF"
    );
  }

  ResetThresholds(m_thresholds);
}


void GyroPointingStateDetector::AddSample(const ImuData& sample) {
  m_samples.PushBack(sample);
  m_gyroscopeSamples.PushBack(sample.gyroscope);
  UpdateSensorCovariance();
  UpdateMovingDetection();
}

SensorCovariance GyroPointingStateDetector::GetSensorCovariance() const {
  if (m_sensorCovariance.has_value()) {
    return *m_sensorCovariance;
  }

  return {};
}

float GyroPointingStateDetector::GetVelVar() const {
  return m_velocityVariance;
}

float GyroPointingStateDetector::GetVelVarTime() const {
  return m_velocityVarianceTime;
}

void GyroPointingStateDetector::Reset() {
  m_gyroscopeSamples.Clear();
  m_sensorCovariance.reset();
  m_samples.Clear();

  for (uint64_t& value : m_unknown1170) {
    value = 0;
  }

  m_moving = true;
  m_stillnessMoving = true;
  m_velocity = {};
  m_velocityVariance = 250000.0f;
  m_gyroscopeBiasGuess = {};
  m_gyroscopeBiasGuessVariance = 125000.0f;
  ResetThresholds(m_thresholds);
}

StateDetectorSaveState GyroPointingStateDetector::StoreState() const {
  StateDetectorSaveState state;
  state.samples = m_samples;
  state.moving = m_moving;
  state.stillnessMoving = m_stillnessMoving;
  state.velocity = m_velocity;
  state.velocityVariance = m_velocityVariance;
  state.accelerometerRange = m_accelerometerRange;
  state.gyroscopeRange = m_gyroscopeRange;
  return state;
}

bool GyroPointingStateDetector::LoadState(
  const StateDetectorSaveState& state, bool loadSamples, bool loadRanges
) {
  if (loadSamples) {
    m_samples = state.samples;
    m_moving = state.moving;
    m_stillnessMoving = state.stillnessMoving;
    m_velocity = state.velocity;
    m_velocityVariance = state.velocityVariance;
  }

  if (loadRanges) {
    m_accelerometerRange = state.accelerometerRange;
    m_gyroscopeRange = state.gyroscopeRange;
  }

  return true;
}

void GyroPointingStateDetector::SetGyroscopeBiasInitialGuess(
  const LVector<
    Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
  >& bias
) {
  m_gyroscopeBiasGuessVariance = 125000.0f;

  for (long i = 0; i < 3; ++i) {
    m_gyroscopeBiasGuess.elements[i] = bias.elements[i].value * 125000.0f;
  }
}

bool GyroPointingStateDetector::IsStillnessDataReady() const {
  return m_gyroscopeSamples.IsFull();
}

bool GyroPointingStateDetector::IsMoving() const {
  if (m_detectionMode != 1) {
    return true;
  }

  switch (m_stillnessSource) {
    case 0:
      return m_moving;
    case 1:
      return m_stillnessMoving;
    default:
      return true;
  }
}

}
