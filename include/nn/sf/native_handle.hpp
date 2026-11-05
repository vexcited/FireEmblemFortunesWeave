#pragma once

#include <stdint.h>

namespace nn::os {

void CloseNativeHandle(uint32_t handle);

}

namespace nn::sf {

class NativeHandle {
 public:
  NativeHandle() : m_Handle(0), m_IsManaged(false) {}

  NativeHandle(uint32_t handle, bool isManaged)
    : m_Handle(handle), m_IsManaged(isManaged) {}

  ~NativeHandle() {
    if (m_IsManaged) {
      os::CloseNativeHandle(m_Handle);
    }
  }

  uint32_t GetOsHandle() const {
    return m_Handle;
  }

  bool IsManaged() const {
    return m_IsManaged;
  }

  void Swap(NativeHandle& other) {
    uint32_t handle = m_Handle;
    m_Handle = other.m_Handle;
    other.m_Handle = handle;
    bool isManaged = m_IsManaged;
    m_IsManaged = other.m_IsManaged;
    other.m_IsManaged = isManaged;
  }

  void Detach() {
    m_IsManaged = false;
    m_Handle = 0;
  }

 private:
  uint32_t m_Handle;
  bool m_IsManaged;
};

}
