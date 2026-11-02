#pragma once

#include <stdarg.h>
#include <stddef.h>

namespace nn::nlibsdk::heap {

class TlsHeapCache;

class CachedHeap {
public:
  void* Alloc(size_t size);
  void* Alloc(size_t size, size_t alignment);
  size_t GetAllocSize(const void* address);
  int Free(void* address);
  int FreeWithSize(void* address, size_t size);
  int Realloc(void* address, size_t size, void** result);
  int Shrink(void* address, size_t size);
  void ReleaseAllCache();
  bool CheckCache();
  int Query(int selector, ...);
  int QueryV(int selector, va_list arguments);
  void Finalize();
  void Reset(TlsHeapCache* replacement);
  TlsHeapCache* Release();

private:
  TlsHeapCache* cache;
};

static_assert(sizeof(CachedHeap) == 8);

}
