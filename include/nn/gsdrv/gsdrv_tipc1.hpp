#pragma once

#include <atomic>

#include "nn/result.hpp"

namespace nn::gsdrv::tipc1 {

using CheckIpcResultFunction = void (*)(Result result);

extern std::atomic<CheckIpcResultFunction> g_CheckIpcResultFunction;

inline void CheckIpcResult(Result result) {
  const CheckIpcResultFunction function =
    g_CheckIpcResultFunction.load(std::memory_order_acquire);

  if (function != nullptr) {
    function(result);
  }
}

}
