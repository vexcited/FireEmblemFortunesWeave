#pragma once

#include <stddef.h>

#include "nn/fs/detail/fs_memory.hpp"

namespace nn::fs::detail {

class Newable {
public:
  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void* operator new(size_t size, void* pointer) noexcept {
    static_cast<void>(size);
    return pointer;
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }
};

}
