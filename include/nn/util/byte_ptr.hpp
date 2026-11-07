#pragma once

#include <stddef.h>

namespace nn::util {

class ConstBytePtr {
public:
  explicit ConstBytePtr(const void* ptr) : m_Ptr(ptr) {
  }

  const void* Get() const {
    return m_Ptr;
  }

  const void* Get(size_t offset) const {
    return static_cast<const char*>(m_Ptr) + offset;
  }

private:
  const void* m_Ptr;
};

}
