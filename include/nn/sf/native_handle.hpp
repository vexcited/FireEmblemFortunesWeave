#pragma once

#include <stdint.h>

namespace nn::os {

void CloseNativeHandle(uint32_t handle);

}

namespace nn::sf {

class NativeHandle {
 public:
  NativeHandle() : m_Handle(0), m_IsManaged(false) {}

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

  void Detach() {
    m_IsManaged = false;
    m_Handle = 0;
  }

 private:
  uint32_t m_Handle;
  bool m_IsManaged;
};

}
