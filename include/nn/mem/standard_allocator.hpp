#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::mem {

struct StandardAllocatorHash {
  size_t block_count;
  size_t total_size;
  uint64_t hash;
};

class alignas(8) StandardAllocator {
public:
  void Initialize(void* address, size_t size);
  void Initialize(void* address, size_t size, bool cache_enabled);
  void Finalize();
  void* Allocate(size_t size);
  void* Allocate(size_t size, size_t alignment);
  void Free(void* address);
  void* Reallocate(void* address, size_t size);
  size_t Shrink(void* address, size_t size);
  size_t GetSizeOf(const void* address) const;
  size_t GetTotalFreeSize() const;
  size_t GetAllocatableSize() const;
  void ClearThreadCache() const;
  void CleanUpManagementArea() const;
  void WalkAllocatedBlocks(int (*callback)(void*, size_t, void*),
                           void* user) const;
  void Dump() const;
  StandardAllocatorHash Hash() const;

private:
  // Reserve the full observed slot without assigning SDK field meanings.
  unsigned char storage[0x48];
};

}
