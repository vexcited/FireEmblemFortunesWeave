#pragma once

#include <stdint.h>

#include "nn/tipc/tipc_message.hpp"

namespace nn::gsdrv {

struct WeakNativeHandle {
  uint32_t value;
};

// The owning handle is passed to the weak handle interfaces as its base.
class UniqueNativeHandle : public WeakNativeHandle {
public:
  UniqueNativeHandle() : WeakNativeHandle{0} {}

  ~UniqueNativeHandle() {
    if (value != 0) {
      os::CloseNativeHandle(value);
    }
  }

  UniqueNativeHandle& operator=(tipc::UniqueHandle&& handle) {
    return *this = handle.Release();
  }

  uint32_t Release() {
    const uint32_t handle = value;
    value = 0;
    return handle;
  }

  uint32_t GetHandle() const {
    return value;
  }

  UniqueNativeHandle& operator=(uint32_t handle) {
    const uint32_t previous = value;
    value = handle;

    if (previous != 0) {
      os::CloseNativeHandle(previous);
    }

    return *this;
  }
};

}
