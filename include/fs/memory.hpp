#pragma once

#include <cstddef>

namespace fs {

class Memory {
public:
  virtual ~Memory() = default;
  virtual void* alloc(size_t size, size_t alignment) = 0;
  virtual void free(void* ptr) = 0;
};

}
