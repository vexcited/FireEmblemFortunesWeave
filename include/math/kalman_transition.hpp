#pragma once

#include "math/kalman_reset.hpp"

namespace fw::math {

struct DynamicStateIndices {
  size_t values[27];
  size_t count;
};

struct DynamicNoise {
  size_t rows;
  size_t columns;
  float elements[27][27];
};

void ResetCovarianceDynamic(KalmanCovariance*, const size_t*,
  const void*, const DynamicStateIndices*, const DynamicNoise*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl0ELln27ENS_14linear_alge"
    "bra11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7L"
    "VectorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_"
    "IfXT0_EXT0_ES9_EE"
  );

void TransitionCovariance3(KalmanCovariance*, const float*,
  const size_t*, const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl3ELl3ENS_14linear_algebr"
    "a11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LVe"
    "ctorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_If"
    "XT0_EXT0_ES9_EE"
  );

void TransitionCovariance9To3(KalmanCovariance*, const float*,
  const size_t*, const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl9ELl3ENS_14linear_algebr"
    "a11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LVe"
    "ctorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_If"
    "XT0_EXT0_ES9_EE"
  );

void TransitionCovariance9To6(KalmanCovariance*, const float*,
  const size_t*, const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl9ELl6ENS_14linear_algebr"
    "a11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LVe"
    "ctorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_If"
    "XT0_EXT0_ES9_EE"
  );

void TransitionCovariance18To3(KalmanCovariance*, const float*,
  const size_t*, const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl18ELl3ENS_14linear_algeb"
    "ra11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LV"
    "ectorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_I"
    "fXT0_EXT0_ES9_EE"
  );

}
