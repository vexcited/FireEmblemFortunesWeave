#include "nn/nlibsdk/heap/cached_heap.hpp"

#include <stdint.h>

namespace nn::nlibsdk::heap::detail {

void* GetMallocZeroPointer(const TlsHeapCache*)
  asm("_ZNK2nn7nlibsdk4heap12TlsHeapCache13GetMalloc0PtrEv");
void FinalizeCache(TlsHeapCache*)
  asm("_ZN2nn7nlibsdk4heap12TlsHeapCache8FinalizeEv");
void ReleaseCache(TlsHeapCache*)
  asm("_ZN2nn7nlibsdk4heap12TlsHeapCache15ReleaseAllCacheEv");
bool CheckTlsCache(TlsHeapCache*)
  asm("_ZN2nn7nlibsdk4heap12TlsHeapCache10CheckCacheEv");

template<typename Function>
static Function Dispatch(TlsHeapCache* cache, size_t offset) {
  Function function;
  __builtin_memcpy(&function,
    reinterpret_cast<unsigned char*>(cache) + offset, sizeof(function));
  return function;
}

static bool IsZeroAllocation(const void* address) {
  return (reinterpret_cast<uintptr_t>(address) & ~uintptr_t{0x1000}) == 0;
}

}

namespace nn::nlibsdk::heap {

using namespace detail;

void* CachedHeap::Alloc(size_t size) {
  if (size == 0) {
    return GetMallocZeroPointer(cache);
  }

  if ((size >> 63) != 0) {
    return nullptr;
  }

  using Function = void* (*)(TlsHeapCache*, size_t);
  return Dispatch<Function>(cache, 0)(cache, size);
}

void* CachedHeap::Alloc(size_t size, size_t alignment) {
  if ((size >> 63) != 0) {
    return nullptr;
  }

  if (size == 0) {
    void* address = GetMallocZeroPointer(cache);

    if (address == nullptr
        || alignment <= reinterpret_cast<uintptr_t>(address)) {
      return address;
    }

    size = 1;
  }

  using Function = void* (*)(TlsHeapCache*, size_t, size_t);
  return Dispatch<Function>(cache, 8)(cache, size, alignment);
}

size_t CachedHeap::GetAllocSize(const void* address) {
  if (IsZeroAllocation(address)) {
    return 0;
  }

  using Function = size_t (*)(TlsHeapCache*, const void*);
  return Dispatch<Function>(cache, 0x20)(cache, address);
}

int CachedHeap::Free(void* address) {
  if (IsZeroAllocation(address)) {
    return 0;
  }

  using Function = int (*)(TlsHeapCache*, void*);
  return Dispatch<Function>(cache, 0x10)(cache, address);
}

int CachedHeap::FreeWithSize(void* address, size_t size) {
  if (IsZeroAllocation(address)) {
    return 0;
  }

  if (size == 0) {
    using Function = int (*)(TlsHeapCache*, void*);
    return Dispatch<Function>(cache, 0x10)(cache, address);
  }

  if ((size >> 63) != 0) {
    return 22;
  }

  using Function = int (*)(TlsHeapCache*, void*, size_t);
  return Dispatch<Function>(cache, 0x18)(cache, address, size);
}

int CachedHeap::Realloc(void* address, size_t size, void** result) {
  if (size == 0) {
    *result = GetMallocZeroPointer(cache);

    if (IsZeroAllocation(address)) {
      return 0;
    }

    using Function = int (*)(TlsHeapCache*, void*);
    return Dispatch<Function>(cache, 0x10)(cache, address);
  }

  if ((size >> 63) != 0) {
    *result = address;
    return 12;
  }

  if (IsZeroAllocation(address)) {
    *result = Alloc(size);
    return *result == nullptr ? 12 : 0;
  }

  using Function = int (*)(TlsHeapCache*, void*, size_t, void**);
  return Dispatch<Function>(cache, 0x28)(cache, address, size, result);
}

int CachedHeap::Shrink(void* address, size_t size) {
  if (IsZeroAllocation(address)) {
    return size == 0 ? 0 : 22;
  }

  if ((size >> 63) != 0) {
    return 22;
  }

  using Function = int (*)(TlsHeapCache*, void*, size_t);
  return Dispatch<Function>(cache, 0x30)(cache, address, size);
}

void CachedHeap::ReleaseAllCache() {
  if (cache != nullptr) {
    ReleaseCache(cache);
  }
}

bool CachedHeap::CheckCache() {
  int result = 0;
  Query(14, &result);
  return result != 0;
}

int CachedHeap::Query(int selector, ...) {
  va_list arguments;
  va_start(arguments, selector);
  int result = QueryV(selector, arguments);
  va_end(arguments);
  return result;
}

int CachedHeap::QueryV(int selector, va_list arguments) {
  switch (selector) {
    case 14: {
      va_list copy;
      va_copy(copy, arguments);
      int* result = va_arg(copy, int*);
      va_end(copy);

      if (result != nullptr) {
        *result = cache == nullptr || CheckTlsCache(cache);
      }

      return 0;
    }
    case 15:
      if (cache != nullptr) {
        ReleaseCache(cache);
      }

      return 0;
    case 16:
      if (cache != nullptr) {
        FinalizeCache(cache);
        cache = nullptr;
      }

      return 0;
    default:
      return 22;
  }
}

void CachedHeap::Finalize() {
  if (cache != nullptr) {
    FinalizeCache(cache);
    cache = nullptr;
  }
}

void CachedHeap::Reset(TlsHeapCache* replacement) {
  if (cache != nullptr) {
    FinalizeCache(cache);
  }

  cache = replacement;
}

TlsHeapCache* CachedHeap::Release() {
  TlsHeapCache* result = cache;
  cache = nullptr;
  return result;
}

}
