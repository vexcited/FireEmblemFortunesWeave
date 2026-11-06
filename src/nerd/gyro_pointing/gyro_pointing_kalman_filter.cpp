#include "nerd/gyro_pointing/gyro_pointing.hpp"

namespace nerd::kalman {

template<typename T, typename Model, long Dimension, bool Flag>
template<long Rows, long Columns>
linear_algebra::LMatrix<
  T, Rows, Columns, linear_algebra::LMatrixType::Dense<true>
> ExtendedKalmanFilter<T, Model, Dimension, Flag>::GetCovarianceBlock(
  const Indices<Rows>& rows, const Indices<Columns>& columns
) const {
  linear_algebra::LMatrix<
    T, Rows, Columns, linear_algebra::LMatrixType::Dense<true>
  > block;

  for (long row = 0; row < Rows; ++row) {
    for (long column = 0; column < Columns; ++column) {
      block.elements[row * Columns + column] =
        m_covariance[rows.elements[row]][columns.elements[column]];
    }
  }

  return linear_algebra::LMatrix<
    T, Rows, Columns, linear_algebra::LMatrixType::Dense<true>
  >(block);
}

template auto
ExtendedKalmanFilter<
  float, gyro_pointing::GyroPointingKalmanFilter, -33, false
>::GetCovarianceBlock<21, 21>(const Indices<21>&, const Indices<21>&) const
  -> linear_algebra::LMatrix<
    float, 21, 21, linear_algebra::LMatrixType::Dense<true>
  >;

}

namespace nerd::gyro_pointing {
namespace {

template<long Size>
using Covariance =
  LMatrix<float, Size, Size, linear_algebra::LMatrixType::Dense<true>>;

template<long Size>
Covariance<Size> Diagonal(const float* variances) {
  Covariance<Size> result;

  for (long row = 0; row < Size; ++row) {
    for (long column = 0; column < Size; ++column) {
      result.elements[row * Size + column] =
        row == column ? variances[row] : 0.0f;
    }
  }

  return result;
}

}

// Resets a variable to its default and its covariance block to the noise.
template<typename T, long Size>
static void ResetVariable(
  GyroPointingKalmanFilter& filter, kalman::Variable<T, Size>& variable,
  const T& value, const Covariance<Size>& noise
) {
  variable.value = value;
  LMatrix<float, Size, 0, linear_algebra::LMatrixType::Dense<true>>
    transition{};
  kalman::Indices<0> inputs{};
  filter.TransitionUpdate(transition, inputs, variable.indices, noise);
}

using Filter = GyroPointingKalmanFilter;

static void ResetVelocityVariable(Filter& filter) {
  ResetVariable(
    filter, filter.m_velocity, Filter::default_values.velocity,
    Diagonal<3>(Filter::default_variances.velocity.elements)
  );
}

static void ResetGyroscopeBiasVariable(Filter& filter) {
  ResetVariable(
    filter, filter.m_gyroscopeBias, Filter::default_values.gyroscopeBias,
    Diagonal<3>(Filter::default_variances.gyroscopeBias.elements)
  );
}

static void ResetGyroscopeMatrixVariable(Filter& filter) {
  ResetVariable(
    filter, filter.m_gyroscopeMatrix, Filter::default_values.gyroscopeMatrix,
    Filter::default_variances.gyroscopeMatrix
  );
}

static void ResetAccelerometerBiasVariable(Filter& filter) {
  ResetVariable(
    filter, filter.m_accelerometerBias,
    Filter::default_values.accelerometerBias,
    Diagonal<3>(Filter::default_variances.accelerometerBias.elements)
  );
}

static void ResetAccelerometerMatrixVariable(Filter& filter) {
  ResetVariable(
    filter, filter.m_accelerometerMatrix,
    Filter::default_values.accelerometerMatrix,
    Diagonal<9>(Filter::default_variances.accelerometerMatrix)
  );
}

const Vector3f& GyroPointingKalmanFilter::AddUnbiasedGyrVariable(
  const Vector3f& value, const Matrix3f& covariance
) {
  if (!m_unbiasedGyroscope.has_value()) {
    m_unbiasedGyroscope.emplace(kalman::Variable<Vector3f, 3>{value, {}});
    AddVariable(m_unbiasedGyroscope->indices, covariance);
  }

  return m_unbiasedGyroscope->value;
}

void GyroPointingKalmanFilter::RemoveUnbiasedGyrVariable() {
  if (m_unbiasedGyroscope.has_value()) {
    RemoveVariable(m_unbiasedGyroscope->indices);
    m_unbiasedGyroscope.reset();
  }
}

const LQuaternion<float>&
GyroPointingKalmanFilter::AddRelativeRotationVariable(
  const LQuaternion<float>& value, const Matrix3f& covariance
) {
  if (!m_relativeRotation.has_value()) {
    m_relativeRotation.emplace(
      kalman::Variable<LQuaternion<float>, 3>{value, {}}
    );
    AddVariable(m_relativeRotation->indices, covariance);
  }

  return m_relativeRotation->value;
}

void GyroPointingKalmanFilter::RemoveRelativeRotationVariable() {
  if (m_relativeRotation.has_value()) {
    RemoveVariable(m_relativeRotation->indices);
    m_relativeRotation.reset();
  }
}

void GyroPointingKalmanFilter::SetGyroscopeBiasInitialGuess(
  const Vector3f& bias
) {
  for (long i = 0; i < 3; ++i) {
    float value = bias.elements[i];

    if (value < m_gyroscopeBiasMinimum.elements[i]
      || value > m_gyroscopeBiasMaximum.elements[i]) {
      return;
    }
  }

  ResetVariable(
    *this, m_gyroscopeBias, bias,
    Diagonal<3>(default_variances.gyroscopeBias.elements)
  );
}

void GyroPointingKalmanFilter::PushParameterState() {
  kalman::Indices<21> keys = GetParameterKeys();
  kalman::Indices<21> indices = kalman::MapIndices(m_indices, keys);
  SensorCalibrationData data;
  data.covariance = GetCovarianceBlock(indices, indices);
  data.gyroscopeBias = m_gyroscopeBias.value;
  data.gyroscopeMatrix = m_gyroscopeMatrix.value;
  data.accelerometerBias = m_accelerometerBias.value;
  data.accelerometerMatrix = m_accelerometerMatrix.value;
  m_parameterStates.PushBack(data);
}

void GyroPointingKalmanFilter::ResetVelocityAndParameters() {
  ResetVelocityVariable(*this);
  ResetGyroscopeBiasVariable(*this);
  ResetGyroscopeMatrixVariable(*this);
  ResetAccelerometerBiasVariable(*this);
  ResetAccelerometerMatrixVariable(*this);
  m_parameterStates.Clear();
}

void GyroPointingKalmanFilter::ResetVelocity() {
  ResetVelocityVariable(*this);
}

void GyroPointingKalmanFilter::ResetGyroscopeBias() {
  ResetGyroscopeBiasVariable(*this);
}

void GyroPointingKalmanFilter::ResetGyroscopeMatrix() {
  ResetGyroscopeMatrixVariable(*this);
}

void GyroPointingKalmanFilter::ResetAccelerometerBias() {
  ResetAccelerometerBiasVariable(*this);
}

void GyroPointingKalmanFilter::ResetAccelerometerMatrix() {
  ResetAccelerometerMatrixVariable(*this);
}

}
