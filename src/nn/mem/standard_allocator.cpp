#include "nn/mem/standard_allocator.hpp"

namespace nn::mem::detail {

struct CachedHeap {
  void* cache = nullptr;
};

using WalkCallback = int (*)(void*, size_t, void*);

int CentralInitialize(void*, void*, size_t, unsigned)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap4InitEPvmj");
void CentralFinalize(void*)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap8FinalizeEv");
bool MakeCache(void*, CachedHeap*)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap9MakeCacheEPNS1_10CachedHeapE");
void* CentralAllocate(void*, size_t, size_t)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap5AllocEmm");
void CentralFree(void*, void*)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap4FreeEPv");
size_t CentralGetSize(void*, const void*)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap12GetAllocSizeEPKv");
int CentralReallocate(void*, void*, size_t, void**)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap7ReallocEPvmPS3_");
int CentralShrink(void*, void*, size_t)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap6ShrinkEPvm");
int CentralQuery(void*, int, ...)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap5QueryEiz");
void CentralWalk(void*, WalkCallback, void*)
  asm("_ZN2nn7nlibsdk4heap11CentralHeap17WalkAllocatedPtrsEPFiPvmS3_ES3_");
void CacheReset(CachedHeap*, void*)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap5ResetEPNS1_12TlsHeapCacheE");
void CacheFinalize(CachedHeap*)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap8FinalizeEv");
void* CacheRelease(CachedHeap*)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap7ReleaseEv");
void* CacheAllocate(CachedHeap*, size_t, size_t)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap5AllocEmm");
void CacheFree(CachedHeap*, void*)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap4FreeEPv");
size_t CacheGetSize(CachedHeap*, const void*)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap12GetAllocSizeEPKv");
int CacheReallocate(CachedHeap*, void*, size_t, void**)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap7ReallocEPvmPS3_");
int CacheShrink(CachedHeap*, void*, size_t)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap6ShrinkEPvm");
int CacheQuery(CachedHeap*, int, ...)
  asm("_ZN2nn7nlibsdk4heap10CachedHeap5QueryEiz");
void FinalizeTlsCache(uintptr_t)
  asm("_ZN2nn7nlibsdk4heap12TlsHeapCache8FinalizeEv");
uintptr_t GetTlsValue(uint32_t)
  asm("_ZN2nn2os11GetTlsValueENS0_7TlsSlotE");
void SetTlsValue(uint32_t, uintptr_t)
  asm("_ZN2nn2os11SetTlsValueENS0_7TlsSlotEm");
uint32_t AllocateTlsSlot(uint32_t*, void (*)(uintptr_t))
  asm("_ZN2nn2os18SdkAllocateTlsSlotEPNS0_7TlsSlotEPFvmE");
void FreeTlsSlot(uint32_t)
  asm("_ZN2nn2os11FreeTlsSlotENS0_7TlsSlotE");
bool IsVirtualAddressMemoryEnabled()
  asm("_ZN2nn2os29IsVirtualAddressMemoryEnabledEv");
[[noreturn]] void Abort()
  asm("_ZN2nn4diag6detail9AbortImplEv");
[[noreturn]] void AbortResult(const uint32_t*)
  asm("_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");
void NotHeapPointer(const void*)
  asm("_ZN2nn7nlibsdk4heap18NotNMallocPtrErrorEPKv");
void Sha1Initialize(void*)
  asm("_ZN2nn6crypto6detail8Sha1Impl10InitializeEv");
void Sha1Update(void*, const void*, size_t)
  asm("_ZN2nn6crypto6detail8Sha1Impl6UpdateEPKvm");
void Sha1GetHash(void*, void*, size_t)
  asm("_ZN2nn6crypto6detail8Sha1Impl7GetHashEPvm");
void Sha1Destroy(void*)
  asm("_ZN2nn6crypto6detail8Sha1ImplD1Ev");

static unsigned char* Bytes(const StandardAllocator* allocator) {
  return reinterpret_cast<unsigned char*>(
    const_cast<StandardAllocator*>(allocator));
}

static void* Central(const StandardAllocator* allocator) {
  return Bytes(allocator) + 0x18;
}

static uint32_t TlsSlot(const StandardAllocator* allocator) {
  uint32_t slot;
  __builtin_memcpy(&slot, Bytes(allocator) + 0x10, sizeof(slot));
  return slot;
}

static bool UsesCache(const StandardAllocator* allocator) {
  return Bytes(allocator)[1] == 1;
}

static void DestroyTlsCache(uintptr_t cache) {
  if (cache != 0) {
    FinalizeTlsCache(cache);
  }
}

static void ConstructStorage(StandardAllocator* allocator) {
  unsigned char* bytes = Bytes(allocator);
  __builtin_memset(bytes, 0, 2);
  __builtin_memset(bytes + 8, 0, 8);
  __builtin_memset(bytes + 0x18, 0, 8);
  bytes[0x20] = 0;
  __builtin_memset(bytes + 0x24, 0, 20);
}

static void CreateThreadCache(const StandardAllocator* allocator) {
  uint32_t slot = TlsSlot(allocator);
  CachedHeap cache;

  if (MakeCache(Central(allocator), &cache)) {
    SetTlsValue(slot, reinterpret_cast<uintptr_t>(CacheRelease(&cache)));
  }

  CacheFinalize(&cache);
}

static void ClearCache(const StandardAllocator* allocator) {
  CachedHeap cache;
  CacheReset(&cache, reinterpret_cast<void*>(GetTlsValue(TlsSlot(allocator))));
  CacheQuery(&cache, 15);
  CacheRelease(&cache);
  CacheFinalize(&cache);
}

struct HashContext {
  size_t block_count;
  size_t total_size;
  alignas(8) unsigned char sha1[0x70];
};

static int HashBlock(void* address, size_t size, void* user) {
  auto* context = static_cast<HashContext*>(user);
  Sha1Update(context->sha1, &address, sizeof(address));
  Sha1Update(context->sha1, &size, sizeof(size));
  ++context->block_count;
  context->total_size += size;
  return 1;
}

extern "C" void ConstructDefault(StandardAllocator*)
  asm("_ZN2nn3mem17StandardAllocatorC1Ev");
extern "C" void ConstructBuffer(StandardAllocator*, void*, size_t)
  asm("_ZN2nn3mem17StandardAllocatorC1EPvm");
extern "C" void ConstructCached(StandardAllocator*, void*, size_t, bool)
  asm("_ZN2nn3mem17StandardAllocatorC1EPvmb");

void ConstructDefault(StandardAllocator* allocator) {
  ConstructStorage(allocator);
}

void ConstructBuffer(StandardAllocator* allocator, void* address, size_t size) {
  ConstructStorage(allocator);
  allocator->Initialize(address, size, false);
}

void ConstructCached(StandardAllocator* allocator, void* address, size_t size,
                     bool cache_enabled) {
  ConstructStorage(allocator);
  allocator->Initialize(address, size, cache_enabled);
}

extern "C" void ConstructBaseDefault(StandardAllocator*)
  asm("_ZN2nn3mem17StandardAllocatorC2Ev");
extern "C" void ConstructBaseDefault(StandardAllocator*)
  __attribute__((alias("_ZN2nn3mem17StandardAllocatorC1Ev")));
extern "C" void ConstructBaseBuffer(StandardAllocator*, void*, size_t)
  asm("_ZN2nn3mem17StandardAllocatorC2EPvm");
extern "C" void ConstructBaseBuffer(StandardAllocator*, void*, size_t)
  __attribute__((alias("_ZN2nn3mem17StandardAllocatorC1EPvm")));
extern "C" void ConstructBaseCached(StandardAllocator*, void*, size_t, bool)
  asm("_ZN2nn3mem17StandardAllocatorC2EPvmb");
extern "C" void ConstructBaseCached(StandardAllocator*, void*, size_t, bool)
  __attribute__((alias("_ZN2nn3mem17StandardAllocatorC1EPvmb")));

}

namespace nn::mem {

using namespace detail;

void StandardAllocator::Initialize(void* address, size_t size) {
  Initialize(address, size, false);
}

void StandardAllocator::Initialize(void* address, size_t size,
                                   bool cache_enabled) {
  if (storage[0] == 1) {
    Abort();
  }

  uintptr_t begin = reinterpret_cast<uintptr_t>(address);
  uintptr_t aligned_begin = (begin + 0xfff) & ~uintptr_t{0xfff};
  uintptr_t aligned_end = (begin + size) & ~uintptr_t{0xfff};

  if (address != nullptr) {
    if (aligned_end <= aligned_begin
        || ((aligned_end - aligned_begin) >> 14) == 0) {
      Abort();
    }

    if (CentralInitialize(Central(this),
        reinterpret_cast<void*>(aligned_begin),
        aligned_end - aligned_begin, 0) != 0) {
      Abort();
    }
  }
  else {
    if (!IsVirtualAddressMemoryEnabled()) {
      Abort();
    }

    if (CentralInitialize(Central(this), nullptr, size, 0) != 0) {
      Abort();
    }
  }

  storage[1] = cache_enabled;

  if (cache_enabled) {
    uint32_t result = AllocateTlsSlot(
      reinterpret_cast<uint32_t*>(storage + 0x10), DestroyTlsCache);

    if (result != 0) {
      AbortResult(&result);
    }
  }

  storage[0] = 1;
}

void StandardAllocator::Finalize() {
  if ((storage[0] & 1) == 0) {
    Abort();
  }

  if (UsesCache(this)) {
    FreeTlsSlot(TlsSlot(this));
  }

  CentralFinalize(Central(this));
  storage[0] = 0;
}

void* StandardAllocator::Allocate(size_t size) {
  return Allocate(size, 16);
}

void* StandardAllocator::Allocate(size_t size, size_t alignment) {
  if (UsesCache(this)) {
    void* thread_cache = reinterpret_cast<void*>(GetTlsValue(TlsSlot(this)));

    if (thread_cache == nullptr && UsesCache(this)) {
      CreateThreadCache(this);
      thread_cache = reinterpret_cast<void*>(GetTlsValue(TlsSlot(this)));
    }

    if (thread_cache != nullptr) {
      CachedHeap cache;
      CacheReset(&cache, thread_cache);
      void* address = CacheAllocate(&cache, size, alignment);
      CacheRelease(&cache);

      if (size == 0 || address != nullptr) {
        CacheFinalize(&cache);
        return address;
      }

      CacheReset(&cache, thread_cache);
      CacheQuery(&cache, 16);
      SetTlsValue(TlsSlot(this), 0);
      CacheFinalize(&cache);
    }
  }

  return CentralAllocate(Central(this), size, alignment);
}

void StandardAllocator::Free(void* address) {
  if (address == nullptr) {
    return;
  }

  if (UsesCache(this)) {
    void* thread_cache = reinterpret_cast<void*>(GetTlsValue(TlsSlot(this)));

    if (thread_cache != nullptr) {
      CachedHeap cache;
      CacheReset(&cache, thread_cache);
      CacheFree(&cache, address);
      CacheRelease(&cache);
      CacheFinalize(&cache);
      return;
    }
  }

  CentralFree(Central(this), address);
}

void* StandardAllocator::Reallocate(void* address, size_t size) {
  if ((size >> 63) != 0) {
    return nullptr;
  }

  if (address == nullptr) {
    return Allocate(size, 16);
  }

  if (size == 0) {
    Free(address);
    return nullptr;
  }

  size_t aligned_size = (size + 15) & ~size_t{15};
  void* result = nullptr;

  // An existing cache takes the central path in the original instructions.
  if (UsesCache(this) && GetTlsValue(TlsSlot(this)) == 0
      && (storage[1] & 1) != 0) {
    CreateThreadCache(this);
    void* thread_cache = reinterpret_cast<void*>(GetTlsValue(TlsSlot(this)));

    if (thread_cache != nullptr) {
      CachedHeap cache;
      CacheReset(&cache, thread_cache);
      int status = CacheReallocate(&cache, address, aligned_size, &result);
      CacheRelease(&cache);
      result = status == 0 ? result : nullptr;
      CacheFinalize(&cache);
      return result;
    }
  }

  int status = CentralReallocate(Central(this), address, aligned_size, &result);
  return status == 0 ? result : nullptr;
}

size_t StandardAllocator::Shrink(void* address, size_t size) {
  if (UsesCache(this)) {
    void* thread_cache = reinterpret_cast<void*>(GetTlsValue(TlsSlot(this)));

    if (thread_cache != nullptr) {
      CachedHeap cache;
      CacheReset(&cache, thread_cache);
      int status = CacheShrink(&cache, address, size);
      CacheRelease(&cache);
      size_t result = 0;

      if (status == 0) {
        CacheReset(&cache, thread_cache);
        result = CacheGetSize(&cache, address);
        CacheRelease(&cache);
      }

      CacheFinalize(&cache);
      return result;
    }
  }

  if (CentralShrink(Central(this), address, size) != 0) {
    return 0;
  }

  return CentralGetSize(Central(this), address);
}

size_t StandardAllocator::GetSizeOf(const void* address) const {
  if ((reinterpret_cast<uintptr_t>(address) & 15) != 0) {
    NotHeapPointer(address);
    return 0;
  }

  if (UsesCache(this) && GetTlsValue(TlsSlot(this)) == 0
      && (storage[1] & 1) != 0) {
    CreateThreadCache(this);
    void* thread_cache = reinterpret_cast<void*>(GetTlsValue(TlsSlot(this)));

    if (thread_cache != nullptr) {
      CachedHeap cache;
      CacheReset(&cache, thread_cache);
      size_t result = CacheGetSize(&cache, address);
      CacheRelease(&cache);
      CacheFinalize(&cache);
      return result;
    }
  }

  return CentralGetSize(Central(this), address);
}

size_t StandardAllocator::GetTotalFreeSize() const {
  size_t size = 0;

  if (CentralQuery(Central(this), 17, &size) != 0) {
    CentralQuery(Central(this), 3, &size);
  }

  return size;
}

size_t StandardAllocator::GetAllocatableSize() const {
  size_t size = 0;

  if (CentralQuery(Central(this), 18, &size) != 0) {
    CentralQuery(Central(this), 5, &size);
  }

  return size;
}

void StandardAllocator::ClearThreadCache() const {
  if (UsesCache(this)) {
    ClearCache(this);
  }
}

void StandardAllocator::CleanUpManagementArea() const {
  CentralQuery(Central(this), 8);
}

void StandardAllocator::WalkAllocatedBlocks(WalkCallback callback,
                                           void* user) const {
  if (UsesCache(this)) {
    ClearCache(this);
  }

  CentralWalk(Central(this), callback, user);
}

void StandardAllocator::Dump() const {
  size_t size = 0;
  int status = CentralQuery(Central(this), 18, &size);
  CentralQuery(Central(this), 0, status == 0 ? 3 : 7, 1);
}

StandardAllocatorHash StandardAllocator::Hash() const {
  HashContext context{};
  unsigned char digest[20]{};
  Sha1Initialize(context.sha1);

  if (UsesCache(this)) {
    ClearCache(this);
  }

  CentralWalk(Central(this), HashBlock, &context);
  Sha1GetHash(context.sha1, digest, sizeof(digest));
  StandardAllocatorHash result{context.block_count, context.total_size, 0};
  __builtin_memcpy(&result.hash, digest, sizeof(result.hash));
  Sha1Destroy(context.sha1);
  return result;
}

}
