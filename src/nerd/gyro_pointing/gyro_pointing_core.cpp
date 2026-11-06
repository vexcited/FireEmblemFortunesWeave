#include <new>

#include "nerd/gyro_pointing/gyro_pointing.hpp"

namespace nerd::gyro_pointing {

GyroPointingCore::GyroPointingCore(const SensorInfo& info)
  : m_sensorInfo(info), m_filter(info.limits),
    m_stableOrientation{{0.0f, 0.0f, 0.0f}, 1.0f}, m_unknown3a98(false),
    m_unknown3a9c(0.0f), m_unknown3aa0(0), m_unknown3ba0(300.0f),
    m_unknown3ba4(0.5f), m_processingTimestep{0.036f},
    m_accumulatedTime{0.0f}, m_unknown3bb0{},
    m_headingOffset{{0.0f, 0.0f, 0.0f}, 1.0f}, m_unknown3bcc{},
    m_unknown3c14(false), m_unknown3c18(0), m_gyroscopeBias{},
    m_unknown3c40(0), m_unknown3c48(1000000000), m_recoverCount(0) {}

void GyroPointingCore::SetProcessingTimestep(Unit::Seconds timestep) {
  m_processingTimestep = timestep;
}

LQuaternion<float> GyroPointingCore::GetOrientation() const {
  return m_filter.m_orientation.value * m_headingOffset;
}

IntegrityState GyroPointingCore::GetIntegrityState() const {
  return m_filter.GetIntegrityState();
}

void GyroPointingCore::UpdateIfEnoughSamples() {
  if (m_accumulatedTime.value < m_processingTimestep.value) {
    return;
  }

  Update();
}

LQuaternion<float> GyroPointingCore::GetHeuristicOrientation() const {
  return GetHeuristicOrientationWithoutAccumulated() * m_headingOffset;
}

LQuaternion<float> GyroPointingCore::GetStableOrientation() const {
  return m_stableOrientation * m_headingOffset;
}

State GyroPointingCore::GetState() const {
  State state;
  state.velocity = m_filter.m_velocity.value;
  state.orientation = m_filter.m_orientation.value;
  state.accelerometerBias = m_filter.m_accelerometerBias.value;
  state.accelerometerMatrix = m_filter.m_accelerometerMatrix.value;
  state.gyroscopeBias = m_filter.m_gyroscopeBias.value;
  state.gyroscopeMatrix = m_filter.m_gyroscopeMatrix.value;
  return state;
}

KalmanSaveState GyroPointingCore::GetKalmanFilterState() const {
  return m_filter.StoreState();
}

Settings GyroPointingCore::GetSettings() const {
  return {
    m_sensorInfo.accelerometerRange / 100.0f, m_sensorInfo.gyroscopeRange
  };
}

SensorInfo GyroPointingCore::GetSensorInfo() const {
  return m_sensorInfo;
}

CalibrationState GyroPointingCore::GetCalibrationState() const {
  return m_filter.GetCalibrationState();
}

void GyroPointingCore::SetGyroscopeBiasInitialGuess(
  const LVector<
    Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
  >& bias
) {
  Vector3f guess;

  for (long i = 0; i < 3; ++i) {
    guess.elements[i] = bias.elements[i].value;
  }

  m_filter.SetGyroscopeBiasInitialGuess(guess);
}

void GyroPointingCore::SnapStableOrientationToBestEstimate() {
  m_stableOrientation =
    GetHeuristicOrientationWithoutAccumulated() * m_headingOffset;
}

SaveState GyroPointingCore::StoreKalmanState() const {
  SaveState state;
  state.version = 2;
  state.kalman = m_filter.StoreState();
  state.lastTimestamp = m_lastTimestamp;
  return state;
}

bool GyroPointingCore::LoadKalmanState(
  const SaveState& state, Unit::Seconds elapsed, bool loadVelocity,
  bool loadGyroscopeBias, bool loadGyroscopeMatrix,
  bool loadAccelerometerBias, bool loadAccelerometerMatrix
) {
  if (state.version == 1 || state.version == 2) {
    m_filter.LoadState(
      state.kalman, elapsed, loadVelocity, loadGyroscopeMatrix,
      loadGyroscopeBias, loadAccelerometerBias, loadAccelerometerMatrix,
      loadAccelerometerMatrix
    );
  }

  if (!loadAccelerometerMatrix) {
    return state.version == 2;
  }

  m_unknown3a98 = true;
  m_stableOrientation = m_filter.m_orientation.value * m_headingOffset;
  bool loaded = state.version == 2;

  if (loaded && elapsed.value == 0.0f && state.lastTimestamp.has_value()) {
    m_lastTimestamp = *state.lastTimestamp;
  }

  return loaded;
}

void GyroPointingCore::ResetAll() {
  m_filter.~GyroPointingKalmanFilter();
  new (&m_filter) GyroPointingKalmanFilter(m_sensorInfo.limits);
  m_stableOrientation = m_filter.m_orientation.value;
  m_lastTimestamp.reset();
  m_recentSamples.Clear();
  m_unknown3c18 = 0;
  m_history.Clear();
  m_unknown3a98 = false;
  m_recoverCount = 0;
  m_accumulatedTime = {0.0f};
  m_unknown3bb0 = {};
  m_headingOffset = {{0.0f, 0.0f, 0.0f}, 1.0f};

  for (float& value : m_unknown3bcc) {
    value = 0.0f;
  }

  m_unknown3c14 = false;
}

SensorCalibrationData GyroPointingCore::StoreParameters() const {
  SensorCalibrationData data;
  data.gyroscopeBias = m_filter.m_gyroscopeBias.value;
  data.gyroscopeMatrix = m_filter.m_gyroscopeMatrix.value;
  data.accelerometerBias = m_filter.m_accelerometerBias.value;
  data.accelerometerMatrix = m_filter.m_accelerometerMatrix.value;
  kalman::Indices<21> keys = m_filter.GetParameterKeys();
  kalman::Indices<21> indices = kalman::MapIndices(m_filter.m_indices, keys);
  data.covariance = m_filter.GetCovarianceBlock(indices, indices);
  return data;
}

void GyroPointingCore::LoadParameters(const SensorCalibrationData& data) {
  m_filter.m_accelerometerBias.value = data.accelerometerBias;
  m_filter.m_accelerometerMatrix.value = data.accelerometerMatrix;
  m_filter.m_gyroscopeBias.value = data.gyroscopeBias;
  m_filter.m_gyroscopeMatrix.value = data.gyroscopeMatrix;
  LMatrix<float, 21, 0, linear_algebra::LMatrixType::Dense<true>>
    transition{};
  kalman::Indices<0> inputs{};
  m_filter.TransitionUpdate(
    transition, inputs, m_filter.GetParameterKeys(), data.covariance
  );
}

}
