#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();
[[noreturn]] void AbortImpl(const Result* result);
bool NotNullImpl(uintptr_t pointer);

}

#define NN_ABORT_UNLESS_RESULT_SUCCESS(expression) \
  do { \
    const ::nn::Result _result = (expression); \
    if (_result.IsFailure()) { \
      ::nn::diag::detail::AbortImpl(&_result); \
    } \
  } while (false)

#define NN_ABORT_UNLESS(condition) \
  do { \
    if (!(condition)) { \
      ::nn::diag::detail::AbortImpl(); \
    } \
  } while (false)

#define NN_ABORT_UNLESS_NOT_NULL(pointer) \
  NN_ABORT_UNLESS(::nn::diag::detail::NotNullImpl( \
    reinterpret_cast<uintptr_t>(pointer)))

#define NN_RESULT_DO(expression) \
  do { \
    const ::nn::Result _result = (expression); \
    if (_result.IsFailure()) { \
      return _result; \
    } \
  } while (false)
