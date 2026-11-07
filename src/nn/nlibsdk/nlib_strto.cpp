#include <errno.h>
#include <float.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

namespace {

constexpr int ERange = 34;
constexpr int EIlSeq = 84;

// An empty string or one starting with a tab, a newline or a space is
// refused before the C library parses it.
bool IsRefusedStart(char c) {
  return c == 0 || c == '\t' || c == '\n' || c == ' ';
}

template <typename Value, typename Parse>
[[gnu::always_inline]] inline int ParseWithLibrary(Value* pValue,
  int* pError, const char* string, char** pOutEnd, Parse parse) {
  char* end = nullptr;
  *pError = 0;
  *pValue = parse(string, &end);
  if (pOutEnd != nullptr) {
    *pOutEnd = end;
    if (end == string) {
      return EIlSeq;
    }
  }
  else if (*end != 0) {
    return EIlSeq;
  }
  return 0;
}

// Values outside the float range clamp to the largest or smallest normal
// float, even when the C library reported no error.
int ToFloat(float* pOut, double value) {
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

extern "C" {

int nnmem_nlib_strto_int32(int32_t* pOut, const char* string, char** pOutEnd,
  int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  int* error = &errno;
  long value;
  int result = ParseWithLibrary(&value, error, string, pOutEnd,
    [base](const char* s, char** end) {
      return strtol(s, end, base);
    });
  if (result != 0) {
    return result;
  }
  if (value != static_cast<int32_t>(value)) {
    *pOut = value < 0 ? INT32_MIN : INT32_MAX;
    return ERange;
  }
  *pOut = static_cast<int32_t>(value);
  return *error;
}

int nnmem_nlib_strto_int64(int64_t* pOut, const char* string, char** pOutEnd,
  int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  int* error = &errno;
  long long value;
  int result = ParseWithLibrary(&value, error, string, pOutEnd,
    [base](const char* s, char** end) {
      return strtoll(s, end, base);
    });
  if (result != 0) {
    return result;
  }
  *pOut = value;
  return *error;
}

// A leading minus sign is refused with 34 and a zero value.
int nnmem_nlib_strto_uint32(uint32_t* pOut, const char* string,
  char** pOutEnd, int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  if (*string == '-') {
    *pOut = 0;
    return ERange;
  }
  int* error = &errno;
  unsigned long value;
  int result = ParseWithLibrary(&value, error, string, pOutEnd,
    [base](const char* s, char** end) {
      return strtoul(s, end, base);
    });
  if (result != 0) {
    return result;
  }
  if ((value >> 32) != 0) {
    *pOut = UINT32_MAX;
    return ERange;
  }
  *pOut = static_cast<uint32_t>(value);
  return *error;
}

int nnmem_nlib_strto_uint64(uint64_t* pOut, const char* string,
  char** pOutEnd, int base) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  if (*string == '-') {
    *pOut = 0;
    return ERange;
  }
  int* error = &errno;
  unsigned long long value;
  int result = ParseWithLibrary(&value, error, string, pOutEnd,
    [base](const char* s, char** end) {
      return strtoull(s, end, base);
    });
  if (result != 0) {
    return result;
  }
  *pOut = value;
  return *error;
}

int nnmem_nlib_strto_double(double* pOut, const char* string,
  char** pOutEnd) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  int* error = &errno;
  double value;
  int result = ParseWithLibrary(&value, error, string, pOutEnd,
    [](const char* s, char** end) {
      return strtod(s, end);
    });
  if (result != 0) {
    return result;
  }
  *pOut = value;
  return *error;
}

// Only success and range errors are converted.
int nnmem_nlib_strto_float(float* pOut, const char* string, char** pOutEnd) {
  if (IsRefusedStart(*string)) {
    return EIlSeq;
  }
  int* error = &errno;
  double value;
  int result = ParseWithLibrary(&value, error, string, pOutEnd,
    [](const char* s, char** end) {
      return strtod(s, end);
    });
  if (result != 0) {
    return result;
  }
  if (*error != ERange && *error != 0) {
    return *error;
  }
  return ToFloat(pOut, value);
}

}
