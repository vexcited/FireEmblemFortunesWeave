#pragma once

#include <stdarg.h>
#include <stddef.h>

#include "nn/nlibsdk/heap/cached_heap.hpp"

namespace nn::nlibsdk::heap {

class alignas(8) CentralHeap {
public:
  int Init(void* address, size_t size, unsigned flags);
  void Finalize();
  bool MakeCache(CachedHeap* output);
  void* Alloc(size_t size, size_t alignment);
  int Free(void* address);
  int FreeWithSize(void* address, size_t size);
  size_t GetAllocSize(const void* address);
  int Realloc(void* address, size_t size, void** output);
  int Shrink(void* address, size_t size);
  int Query(int selector, ...);
  int QueryV(int selector, va_list arguments);
  int WalkAllocatedPtrs(int (*callback)(void*, size_t, void*), void* user);

private:
  unsigned char storage[0x20];
};

static_assert(sizeof(CentralHeap) == 0x20);

}
