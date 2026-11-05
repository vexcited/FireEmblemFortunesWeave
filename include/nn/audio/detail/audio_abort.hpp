#pragma once

#include "nn/result.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

#define NN_AUDIO_ABORT_UNLESS_SUCCESS(expression) \
  do { \
    const ::nn::Result _result = (expression); \
    if (_result.IsFailure()) { \
      ::nn::diag::detail::AbortImpl(&_result); \
    } \
  } while (false)

#define NN_AUDIO_RESULT_DO(expression) \
  do { \
    const ::nn::Result _result = (expression); \
    if (_result.IsFailure()) { \
      return _result; \
    } \
  } while (false)
