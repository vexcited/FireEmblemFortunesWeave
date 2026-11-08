#pragma once

#include "nn/diag/diag_hashed_trace_context.hpp"
#include "nn/fs/fs_error_context.hpp"
#include "nn/result.hpp"

namespace nn::sdcard {

struct ErrorContext;

}

namespace nn::fs::detail {

class IErrorContextHandler {
 public:
  virtual Result Enable() = 0;
  virtual Result UpdateResult(Result result,
    diag::HashedTraceContextImpl context) = 0;
  virtual Result UpdateResult(Result result,
    const sdcard::ErrorContext& context);
  virtual Result UpdateResult(Result result, const ErrorContext& context);
  virtual Result ConvertResult(Result result, Result converted);
};

}
