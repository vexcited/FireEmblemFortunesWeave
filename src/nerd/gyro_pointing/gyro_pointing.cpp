#include <math.h>

#include "nerd/gyro_pointing/gyro_pointing.hpp"

namespace nerd::gyro_pointing {
namespace {

// Rotation for a small rotation vector, sinc uses a Taylor series near zero.
LQuaternion<float> RotationFromVector(const Vector3f& rotation) {
  const auto& v = rotation.elements;
  float squared = v[0] * v[0];
  float other = v[1] * v[1];
  squared = squared + other;
  other = v[2] * v[2];
  squared = other + squared;
  float angle = sqrtf(squared + 0x1p-126f);
  float half = angle * 0.5f;
  float x = half * half;
  float sinc;

  if (x > 0.04f) {
    sinc = sinf(half) / half;
  }
  else {
    sinc = ((((-0x1.ae6456p-26f * x + 0x1.71de3ap-19f) * x
      - 0x1.a01a02p-13f) * x + 0x1.111112p-7f) * x - 0x1.555556p-3f) * x
      + 1.0f;
  }

  float scale = sinc * 0.5f;
  LQuaternion<float> result;

  for (long i = 0; i < 3; ++i) {
    result.vector.elements[i] = v[i] * scale;
  }

  result.scalar = cosf(half);
  return result;
}

}

GyroPointing::GyroPointing(const SensorInfo& info)
  : m_downsamplingTimestep{0.0045f}, m_unknown4(0.0f), m_unknown8{},
    m_headingOffset{{0.0f, 0.0f, 0.0f}, 1.0f}, m_unknown24(false),
    m_unknown28(0), m_core(info),
    m_stateDetector({info.accelerometerRange}, {info.gyroscopeRange}),
    m_correctedAccelerometer{}, m_correctedGyroscope{} {}

void GyroPointing::SetProcessingTimestep(Unit::Seconds timestep) {
  m_core.SetProcessingTimestep(timestep);
}

void GyroPointing::SetDownsamplingTimestep(Unit::Seconds timestep) {
  m_downsamplingTimestep = timestep;
}

void GyroPointing::FeedImuSample(const ImuData& sample) {
  FeedImuSampleNoUpdate(sample);
  m_core.UpdateIfEnoughSamples();
}

void GyroPointing::Update() {
  m_core.Update();
}

template<LQuaternion<float> (GyroPointingCore::*Getter)() const>
[[gnu::always_inline]] inline LQuaternion<float>
GyroPointing::Extrapolate() const {
  const AngularVelocity bias = m_core.m_gyroscopeBias;
  LQuaternion<float> orientation = (m_core.*Getter)();
  size_t count = m_pendingSamples.Size();

  for (size_t i = 0; i < count; ++i) {
    const CoreImuData& sample = m_pendingSamples[i];
    const Matrix3f& matrix = m_core.m_filter.m_gyroscopeMatrix.value;
    Vector3f rotation;

    for (long row = 0; row < 3; ++row) {
      float sum = 0.0f;

      for (long column = 0; column < 3; ++column) {
        float unbiased = sample.gyroscope.elements[column].value
          - bias.elements[column].value;
        float product = matrix.elements[row * 3 + column] * unbiased;
        sum = sum + product;
      }

      rotation.elements[row] = sum;
    }

    for (long row = 0; row < 3; ++row) {
      rotation.elements[row] = sample.timestep.value * rotation.elements[row];
    }

    orientation = orientation * RotationFromVector(rotation);
  }

  return orientation * m_headingOffset;
}

LQuaternion<float> GyroPointing::GetOrientation() const {
  return Extrapolate<&GyroPointingCore::GetOrientation>();
}

LQuaternion<float> GyroPointing::GetStableOrientation() const {
  return Extrapolate<&GyroPointingCore::GetStableOrientation>();
}

LQuaternion<float> GyroPointing::GetHeuristicOrientation() const {
  return Extrapolate<&GyroPointingCore::GetHeuristicOrientation>();
}

State GyroPointing::GetState() const {
  return m_core.GetState();
}

StateStd GyroPointing::GetStateStd() const {
  return m_core.GetStateStd();
}

StateUniqueStd GyroPointing::GetStateUniqueStd() const {
  return m_core.GetStateUniqueStd();
}

KalmanSaveState GyroPointing::GetKalmanFilterState() const {
  return m_core.GetKalmanFilterState();
}

Settings GyroPointing::GetSettings() const {
  Settings settings = m_core.GetSettings();
  settings.stillnessThreshold = m_stateDetector.m_stillnessThreshold;
  settings.stillnessTime = m_stateDetector.m_stillnessTime;
  return settings;
}

SensorInfo GyroPointing::GetSensorInfo() const {
  return m_core.GetSensorInfo();
}

void GyroPointing::Recover() {
  m_core.Recover(false);
}

CalibrationState GyroPointing::GetCalibrationState() const {
  return m_core.GetCalibrationState();
}

IntegrityState GyroPointing::GetIntegrityState() const {
  return m_core.GetIntegrityState();
}

SensorCalibrationData GyroPointing::StoreParameters() const {
  return m_core.StoreParameters();
}

void GyroPointing::LoadParameters(const SensorCalibrationData& data) {
  m_core.LoadParameters(data);
}

SaveState GyroPointing::StoreKalmanState() const {
  SaveState state = m_core.StoreKalmanState();
  state.stateDetector = m_stateDetector.StoreState();
  return state;
}

bool GyroPointing::LoadKalmanState(
  const SaveState& state, Unit::Seconds elapsed, bool loadVelocity,
  bool loadGyroscopeBias, bool loadGyroscopeMatrix,
  bool loadAccelerometerBias, bool loadAccelerometerMatrix
) {
  bool loaded = m_core.LoadKalmanState(
    state, elapsed, loadVelocity, loadGyroscopeBias, loadGyroscopeMatrix,
    loadAccelerometerBias, loadAccelerometerMatrix
  );

  if (loaded && elapsed.value == 0.0f && state.stateDetector.has_value()) {
    m_stateDetector.LoadState(
      *state.stateDetector, loadAccelerometerMatrix, loadAccelerometerMatrix
    );
  }

  return loaded;
}

void GyroPointing::SetGyroscopeBiasInitialGuess(
  const LVector<
    Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
  >& bias
) {
  m_stateDetector.SetGyroscopeBiasInitialGuess(bias);
  m_core.SetGyroscopeBiasInitialGuess(bias);
}

void GyroPointing::ResetHeadingCovariance() {
  m_core.ResetHeadingCovariance();
}

void GyroPointing::ResetHeading() {
  m_core.ResetHeading(GetOrientation());
}

void GyroPointing::SnapStableOrientationToBestEstimate() {
  m_core.SnapStableOrientationToBestEstimate();
}

void GyroPointing::ResetAll() {
  m_stateDetector.Reset();
  m_core.ResetAll();
  m_unknown4 = 0.0f;
  m_unknown8 = {};
  m_headingOffset = {{0.0f, 0.0f, 0.0f}, 1.0f};
  m_unknown24 = false;
  m_unknown28 = 0;
  m_pendingSamples.Clear();
  m_lastTimestamp.reset();
}

}
