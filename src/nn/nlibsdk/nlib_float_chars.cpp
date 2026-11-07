#include <float.h>
#include <stddef.h>
#include <stdint.h>

extern "C" {

int nnmem_nlib_double_from_chars(double* pOut, const char** pOutEnd,
  const char* first, const char* last);
int nnmem_nlib_strto_double_fallback(double* pOut, const char* string,
  const char** pOutEnd);

}

namespace {

constexpr int ERange = 34;

bool IsFloatRange(double value) {
  if (value <= 0.0) {
    return value >= -static_cast<double>(FLT_MAX) &&
      (value == 0.0 || value <= -static_cast<double>(FLT_MIN));
  }
  return value <= static_cast<double>(FLT_MAX) &&
    value >= static_cast<double>(FLT_MIN);
}

}

extern "C" {

// Values outside the normal float range are refused with 34.
int nnmem_nlib_float_from_chars(float* pOut, const char** pOutEnd,
  const char* first, const char* last) {
  double value = 0.0;
  int result = nnmem_nlib_double_from_chars(&value, pOutEnd, first, last);
  if (result != 0) {
    return result;
  }
  if (!IsFloatRange(value)) {
    return ERange;
  }
  *pOut = static_cast<float>(value);
  return 0;
}

// Values outside the float range clamp to the largest or smallest normal
// float.
int nnmem_nlib_strto_float_fallback(float* pOut, const char* string,
  const char** pOutEnd) {
  double value = 0.0;
  int result = nnmem_nlib_strto_double_fallback(&value, string, pOutEnd);
  if (result != ERange && result != 0) {
    return result;
  }
  float clamped;
  if (value <= 0.0) {
    if (value < -static_cast<double>(FLT_MAX)) {
      clamped = -FLT_MAX;
      goto clamp;
    }
    if (value != 0.0 && value > -static_cast<double>(FLT_MIN)) {
      clamped = -FLT_MIN;
      goto clamp;
    }
  }
  else {
    if (value > static_cast<double>(FLT_MAX)) {
      clamped = FLT_MAX;
      goto clamp;
    }
    if (value < static_cast<double>(FLT_MIN)) {
      clamped = FLT_MIN;
      goto clamp;
    }
  }
  *pOut = static_cast<float>(value);
  return 0;

clamp:
  *pOut = clamped;
  return ERange;
}

}
