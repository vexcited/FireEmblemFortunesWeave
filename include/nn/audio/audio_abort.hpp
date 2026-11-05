#pragma once

#include "nn/result.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();
[[noreturn]] void AbortImpl(const Result* result);

}

namespace nn::audio::detail {

inline void AbortUnlessSuccess(Result result) {
  if (result.IsFailure()) {
    nn::diag::detail::AbortImpl(&result);
  }
}

}
