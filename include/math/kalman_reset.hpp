#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::math {

struct IndexSlot {
  size_t distance;
  size_t key;
  size_t value;
};

struct IndexMap {
  IndexSlot slots[129];
  size_t capacity;
  size_t size;
};

struct KalmanCovariance {
  size_t rows;
  size_t columns;
  float elements[33][33];
  unsigned char unknown[12];
  IndexMap indices;
};

template<size_t Count>
struct StateIndices {
  size_t values[Count];
};

void IndexLookupFailure(const char*, int, const char*, const char*, ...)
  asm("_ZN4nerd14OnVerifyFailedEPKciS1_S1_z");

size_t* LookupStateIndex(IndexMap*, const size_t*);
StateIndices<9> MapStateIndices9(IndexMap*, StateIndices<9>*);
StateIndices<21> MapStateIndices21(IndexMap*, StateIndices<21>*);

static_assert(sizeof(IndexSlot) == 24);
static_assert(sizeof(IndexMap) == 3112);
static_assert(offsetof(KalmanCovariance, indices) == 4384);

void ResetCovariance3(KalmanCovariance*, const void*, const void*,
  const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl0ELl3ENS_14linear_algebr"
    "a11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LVe"
    "ctorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_If"
    "XT0_EXT0_ES9_EE"
  );

void ResetCovariance6(KalmanCovariance*, const void*, const void*,
  const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl0ELl6ENS_14linear_algebr"
    "a11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LVe"
    "ctorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_If"
    "XT0_EXT0_ES9_EE"
  );

void ResetCovariance9(KalmanCovariance*, const void*, const void*,
  const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl0ELl9ENS_14linear_algebr"
    "a11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LVe"
    "ctorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_If"
    "XT0_EXT0_ES9_EE"
  );

void ResetCovariance21(KalmanCovariance*, const void*, const void*,
  const size_t*, const float*)
  asm(
    "_ZN4nerd6kalman20ExtendedKalmanFilterIfNS_13gyro_pointing24GyroPointin"
    "gKalmanFilterELln33ELb0EE16TransitionUpdateILl0ELl21ENS_14linear_algeb"
    "ra11LMatrixType5DenseILb1EEEEEvRKNS6_7LMatrixIfXT0_EXT_ET1_EERKNS6_7LV"
    "ectorImXT_ELb0ENS6_11LVectorType5DenseEEERKNSF_ImXT0_ELb0ESH_EERKNSA_I"
    "fXT0_EXT0_ES9_EE"
  );

}
