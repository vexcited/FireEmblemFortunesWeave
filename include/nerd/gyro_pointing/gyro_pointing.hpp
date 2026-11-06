#pragma once

#include <stddef.h>
#include <stdint.h>

#include <optional>

#include "nerd/kalman/extended_kalman_filter.hpp"
#include "nerd/linear_algebra/quaternion.hpp"
#include "nerd/ring_buffer.hpp"
#include "nerd/unit.hpp"

namespace nerd::gyro_pointing {

class GyroPointing;

using linear_algebra::LMatrix;
using linear_algebra::LQuaternion;
using linear_algebra::LVector;

using Vector3f = LVector<float, 3, false, linear_algebra::LVectorType::Dense>;
using Matrix3f =
  LMatrix<float, 3, 3, linear_algebra::LMatrixType::Dense<true>>;
using AngularVelocity = LVector<
  Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
>;

struct SensorParameterLimits {
  unsigned char data[192];
};

struct SensorInfo {
  float gyroscopeRange;
  float accelerometerRange;
  SensorParameterLimits limits;
};

struct ImuData {
  int64_t timestamp;
  Vector3f accelerometer;
  Vector3f gyroscope;
  Vector3f unknown20;
  float unknown2c;
  bool unknown30;
};

struct CoreImuData {
  unsigned char unknown0[20];
  AngularVelocity gyroscope;
  unsigned char unknown20[24];
  Unit::Seconds timestep;
  unsigned char unknown3c[68];
};

struct SensorCalibrationData {
  Vector3f gyroscopeBias;
  Matrix3f gyroscopeMatrix;
  Vector3f accelerometerBias;
  Matrix3f accelerometerMatrix;
  LMatrix<float, 21, 21, linear_algebra::LMatrixType::Dense<true>>
    covariance;
};

struct HistorySample {
  unsigned char data[64];
};

struct HistoryEstimate {
  uint64_t data[14];
};

struct Settings {
  float accelerometerRange;
  float gyroscopeRange;
  float stillnessThreshold;
  float unknownC;
  double stillnessTime;
};

struct CalibrationState {
  uint32_t values[3];
};

struct IntegrityState {
  uint32_t value;
};

struct State {
  Vector3f velocity;
  LQuaternion<float> orientation;
  Vector3f accelerometerBias;
  Matrix3f accelerometerMatrix;
  Vector3f gyroscopeBias;
  Matrix3f gyroscopeMatrix;
};

struct StateStd {
  unsigned char data[96];
};

struct StateUniqueStd {
  unsigned char data[96];
};

struct KalmanSaveState {
  State state;
  unsigned char unknown7c[2968];
};

struct StateDetectorSaveState {
  RingBuffer<ImuData, 64> samples;
  bool moving;
  bool stillnessMoving;
  Vector3f velocity;
  float velocityVariance;
  float accelerometerRange;
  float gyroscopeRange;
};

struct SensorCovariance {
  Vector3f accelerometer;
  Vector3f gyroscope;
};

struct SaveState {
  uint64_t version;
  KalmanSaveState kalman;
  std::optional<StateDetectorSaveState> stateDetector;
  std::optional<std::optional<int64_t>> lastTimestamp;
};

struct StateVariances {
  Vector3f velocity;
  Vector3f orientation;
  Vector3f accelerometerBias;
  float accelerometerMatrix[9];
  Vector3f gyroscopeBias;
  LMatrix<float, 6, 6, linear_algebra::LMatrixType::Dense<true>>
    gyroscopeMatrix;
};

class GyroPointingKalmanFilter : public kalman::ExtendedKalmanFilter<
  float, GyroPointingKalmanFilter, -33, false
> {
public:
  explicit GyroPointingKalmanFilter(const SensorParameterLimits& limits);

  bool LoadState(
    const KalmanSaveState& state, Unit::Seconds elapsed, bool loadVelocity,
    bool loadGyroscopeMatrix, bool loadGyroscopeBias,
    bool loadAccelerometerBias, bool loadAccelerometerMatrix,
    bool loadParameters
  );

  KalmanSaveState StoreState() const;
  CalibrationState GetCalibrationState() const;
  IntegrityState GetIntegrityState() const;
  const Vector3f& AddUnbiasedGyrVariable(
    const Vector3f& value, const Matrix3f& covariance
  );
  void RemoveUnbiasedGyrVariable();
  const LQuaternion<float>& AddRelativeRotationVariable(
    const LQuaternion<float>& value, const Matrix3f& covariance
  );
  void RemoveRelativeRotationVariable();
  void SetGyroscopeBiasInitialGuess(const Vector3f& bias);
  void PushParameterState();

  // Keys of the calibration parameters in their save order.
  kalman::Indices<21> GetParameterKeys() const {
    kalman::Indices<21> keys;
    size_t* key = keys.elements;

    for (size_t index : m_gyroscopeBias.indices.elements) {
      *key++ = index;
    }

    for (size_t index : m_gyroscopeMatrix.indices.elements) {
      *key++ = index;
    }

    for (size_t index : m_accelerometerBias.indices.elements) {
      *key++ = index;
    }

    for (size_t index : m_accelerometerMatrix.indices.elements) {
      *key++ = index;
    }

    return keys;
  }

  void ResetVelocityAndParameters();
  void ResetVelocity();
  void ResetGyroscopeBias();
  void ResetGyroscopeMatrix();
  void ResetAccelerometerBias();
  void ResetAccelerometerMatrix();

  static const State default_values;
  static const StateVariances default_variances;

  template<long Size>
  void AddVariable(
    kalman::Indices<Size>& indices,
    const LMatrix<float, Size, Size, linear_algebra::LMatrixType::Dense<true>>&
      covariance
  );

  template<long Size>
  void RemoveVariable(const kalman::Indices<Size>& indices);

  unsigned char m_unknown1e58[0x78];
  Vector3f m_gyroscopeBiasMinimum;
  Vector3f m_gyroscopeBiasMaximum;
  unsigned char m_unknown1ee8[0x48];
  kalman::Variable<Vector3f, 3> m_velocity;
  kalman::Variable<LQuaternion<float>, 3> m_orientation;
  kalman::Variable<Vector3f, 3> m_accelerometerBias;
  kalman::Variable<Matrix3f, 9> m_accelerometerMatrix;
  kalman::Variable<Vector3f, 3> m_gyroscopeBias;
  kalman::Variable<Matrix3f, 6> m_gyroscopeMatrix;
  std::optional<kalman::Variable<Vector3f, 3>> m_unbiasedGyroscope;
  std::optional<kalman::Variable<LQuaternion<float>, 3>> m_relativeRotation;
  RingBuffer<SensorCalibrationData, 2> m_parameterStates;
};

class GyroPointingCore {
public:
  explicit GyroPointingCore(const SensorInfo& info);

  void SetProcessingTimestep(Unit::Seconds timestep);
  void FeedImuSampleNoUpdate(const CoreImuData& sample);
  void UpdateIfEnoughSamples();
  void Update();
  LQuaternion<float> GetOrientation() const;
  LQuaternion<float> GetStableOrientation() const;
  LQuaternion<float> GetHeuristicOrientation() const;
  LQuaternion<float> GetHeuristicOrientationWithoutAccumulated() const;
  State GetState() const;
  StateStd GetStateStd() const;
  StateUniqueStd GetStateUniqueStd() const;
  KalmanSaveState GetKalmanFilterState() const;
  Settings GetSettings() const;
  SensorInfo GetSensorInfo() const;
  void Recover(bool full);
  CalibrationState GetCalibrationState() const;
  IntegrityState GetIntegrityState() const;
  SensorCalibrationData StoreParameters() const;
  void LoadParameters(const SensorCalibrationData& data);
  SaveState StoreKalmanState() const;
  bool LoadKalmanState(
    const SaveState& state, Unit::Seconds elapsed, bool loadVelocity,
    bool loadGyroscopeBias, bool loadGyroscopeMatrix,
    bool loadAccelerometerBias, bool loadAccelerometerMatrix
  );
  void SetGyroscopeBiasInitialGuess(
    const LVector<
      Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
    >& bias
  );
  void ResetHeadingCovariance();
  void ResetHeading(LQuaternion<float> heading);
  void SnapStableOrientationToBestEstimate();
  void ResetAll();

  SensorInfo m_sensorInfo;
  GyroPointingKalmanFilter m_filter;
  std::optional<int64_t> m_lastTimestamp;
  LQuaternion<float> m_stableOrientation;
  RingBuffer<HistorySample, 40> m_history;
  bool m_unknown3a98;
  float m_unknown3a9c;
  int64_t m_unknown3aa0;
  RingBuffer<ImuData, 4> m_recentSamples;
  float m_unknown3ba0;
  float m_unknown3ba4;
  Unit::Seconds m_processingTimestep;
  Unit::Seconds m_accumulatedTime;
  Vector3f m_unknown3bb0;
  LQuaternion<float> m_headingOffset;
  float m_unknown3bcc[18];
  bool m_unknown3c14;
  uint64_t m_unknown3c18;
  std::optional<float> m_unknown3c20;
  std::optional<float> m_unknown3c28;
  AngularVelocity m_gyroscopeBias;
  uint64_t m_unknown3c40;
  int64_t m_unknown3c48;
  std::optional<HistoryEstimate> m_unknown3c50;
  uint64_t m_recoverCount;
};

class GyroPointingStateDetector {
public:
  GyroPointingStateDetector(
    Unit::Acceleration accelerometerRange,
    Unit::RadiansPerSecond gyroscopeRange
  );

  void UpdateMovingDetection();
  void UpdateSensorCovariance();
  void AddSample(const ImuData& sample);
  SensorCovariance GetSensorCovariance() const;
  float GetVelVar() const;
  float GetVelVarTime() const;
  void Reset();
  StateDetectorSaveState StoreState() const;
  bool LoadState(
    const StateDetectorSaveState& state, bool loadSamples, bool loadRanges
  );
  void SetGyroscopeBiasInitialGuess(
    const LVector<
      Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
    >& bias
  );
  bool IsStillnessDataReady() const;
  bool IsMoving() const;

private:
  friend class GyroPointing;

  uint8_t m_detectionMode;
  float m_parameters[6];
  RingBuffer<ImuData, 64> m_samples;
  RingBuffer<Vector3f, 64> m_gyroscopeSamples;
  std::optional<SensorCovariance> m_sensorCovariance;
  uint64_t m_unknown1170[4];
  bool m_moving;
  bool m_stillnessMoving;
  uint64_t m_unknown1198;
  uint64_t m_unknown11a0;
  double m_stillnessTime;
  uint64_t m_unknown11b0;
  Vector3f m_velocity;
  float m_velocityVariance;
  float m_velocityVarianceTime;
  float m_thresholds[8];
  float m_stillnessThreshold;
  uint8_t m_unknown11f0;
  float m_accelerometerRange;
  float m_gyroscopeRange;
  uint8_t m_stillnessSource;
  Vector3f m_gyroscopeBiasGuess;
  float m_gyroscopeBiasGuessVariance;
};

class GyroPointing {
public:
  explicit GyroPointing(const SensorInfo& info);

  void SetProcessingTimestep(Unit::Seconds timestep);
  void SetDownsamplingTimestep(Unit::Seconds timestep);
  void FeedImuSample(const ImuData& sample);
  void FeedImuSampleNoUpdate(const ImuData& sample);
  void Update();
  LQuaternion<float> GetOrientation() const;
  LQuaternion<float> GetStableOrientation() const;
  LQuaternion<float> GetHeuristicOrientation() const;
  State GetState() const;
  StateStd GetStateStd() const;
  StateUniqueStd GetStateUniqueStd() const;
  KalmanSaveState GetKalmanFilterState() const;
  Settings GetSettings() const;
  SensorInfo GetSensorInfo() const;
  void Recover();
  CalibrationState GetCalibrationState() const;
  IntegrityState GetIntegrityState() const;
  SensorCalibrationData StoreParameters() const;
  void LoadParameters(const SensorCalibrationData& data);
  SaveState StoreKalmanState() const;
  bool LoadKalmanState(
    const SaveState& state, Unit::Seconds elapsed, bool loadVelocity,
    bool loadGyroscopeBias, bool loadGyroscopeMatrix,
    bool loadAccelerometerBias, bool loadAccelerometerMatrix
  );
  void SetGyroscopeBiasInitialGuess(
    const LVector<
      Unit::RadiansPerSecond, 3, false, linear_algebra::LVectorType::Dense
    >& bias
  );
  void ResetHeadingCovariance();
  void ResetHeading();
  void SnapStableOrientationToBestEstimate();
  void ResetAll();

private:
  template<LQuaternion<float> (GyroPointingCore::*Getter)() const>
  LQuaternion<float> Extrapolate() const;

  Unit::Seconds m_downsamplingTimestep;
  float m_unknown4;
  Vector3f m_unknown8;
  LQuaternion<float> m_headingOffset;
  bool m_unknown24;
  uint64_t m_unknown28;
  GyroPointingCore m_core;
  RingBuffer<CoreImuData, 64> m_pendingSamples;
  GyroPointingStateDetector m_stateDetector;
  std::optional<int64_t> m_lastTimestamp;
  Vector3f m_correctedAccelerometer;
  Vector3f m_correctedGyroscope;
  std::optional<Vector3f> m_unknown6f50;
  std::optional<ImuData> m_unknown6f60;
  std::optional<ImuData> m_unknown6fa0;
};

}
