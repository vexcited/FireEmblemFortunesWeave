#pragma once

#include <stddef.h>

namespace nn::mem {

class alignas(8) StandardAllocator {
public:
  void* Allocate(size_t size, size_t alignment);
  void Free(void* address);
  void* Reallocate(void* address, size_t size);
  size_t GetSizeOf(const void* address) const;
  size_t GetTotalFreeSize() const;
  size_t GetAllocatableSize() const;

private:
  // Reserve the full observed slot without assigning SDK field meanings.
  unsigned char storage[0x48];
};

}
