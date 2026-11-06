#pragma once

#include <stdint.h>

#include "nn/tipc/tipc_message.hpp"

namespace nn::gsdrv {

class UniqueNativeHandle {
public:
  UniqueNativeHandle() = default;

  ~UniqueNativeHandle() {
    if (m_Handle != 0) {
      os::CloseNativeHandle(m_Handle);
    }
  }

  UniqueNativeHandle& operator=(tipc::UniqueHandle&& handle) {
    return *this = handle.Release();
  }

  uint32_t Release() {
    const uint32_t handle = m_Handle;
    m_Handle = 0;
    return handle;
  }

  uint32_t GetHandle() const {
    return m_Handle;
  }

  UniqueNativeHandle& operator=(uint32_t handle) {
    const uint32_t previous = m_Handle;
    m_Handle = handle;

    if (previous != 0) {
      os::CloseNativeHandle(previous);
    }

    return *this;
  }

private:
  uint32_t m_Handle = 0;
};

}
