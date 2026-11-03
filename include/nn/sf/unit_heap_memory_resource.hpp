#pragma once

#include "nn/lmem/unit_heap.hpp"

namespace nn::sf {

struct UnitHeapMemoryResource {
  uintptr_t* vtable;
  lmem::detail::HeapHead* heap;

  void* Allocate(size_t size, size_t alignment);
  void Deallocate(void* block, size_t size, size_t alignment);
};

}
