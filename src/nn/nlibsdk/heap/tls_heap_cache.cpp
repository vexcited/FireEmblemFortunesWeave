#include "nn/nlibsdk/heap/tls_heap_cache.hpp"

#include <stdint.h>

namespace nn::nlibsdk::heap::cache_detail {

extern const unsigned char kClassInfo[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic10kClassInfoE");
extern const unsigned char kSizeToClass[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic11kSize2ClassE");
int TryLock(void*) asm("pthread_mutex_trylock");
int UnlockMutex(void*) asm("pthread_mutex_unlock");
void LockSlow(void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14LockMutexSlow_Ev");
void* CacheSmall(void*, unsigned char, size_t, bool)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral17CacheSmallMemory_Ehmb");
int UncacheSmall(void*, void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral19UncacheSmallMemory_EPv");
size_t CacheList(void*, TlsHeapCache*, unsigned char*, size_t, uintptr_t*,
                 int, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral21CacheSmallMemoryList_"
      "EPNS1_12TlsHeapCacheEPhmPPvim");
void* AllocatePages(void*, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral11AllocPages_Em");
void* AllocateAlignedPages(void*, size_t, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral23AllocPagesWithBigAlign_Emm");
void FreePages(void*, void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral10FreePages_EPNS1_4SpanE");
int ReallocateLarge(void*, void*, size_t, void**)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18ReallocLargeMemoryEPvmPS3_");
int ShrinkLarge(void*, void*, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral17ShrinkLargeMemoryEPvm");
void NotHeapPointer(const void*)
  asm("_ZN2nn7nlibsdk4heap18NotNMallocPtrErrorEPKv");
void DataCorruption(const void*)
  asm("_ZN2nn7nlibsdk4heap19DataCorruptionErrorEPKv");
int GenerateRandom(void*, size_t) asm("nnmem_nlib_gen_random");
void EpochTime(uint64_t*) asm("nnmem_nlib_epochtime");
void GetCpu(int*) asm("nnmem_nlib_thread_getcpu");

static unsigned char* Bytes(const void* address) {
  return reinterpret_cast<unsigned char*>(const_cast<void*>(address));
}

template<typename T>
static T Read(const void* address, size_t offset = 0) {
  T result;
  __builtin_memcpy(&result, Bytes(address) + offset, sizeof(result));
  return result;
}

template<typename T>
static void Write(void* address, size_t offset, T value) {
  __builtin_memcpy(Bytes(address) + offset, &value, sizeof(value));
}

static void* Core(const TlsHeapCache* cache) {
  return Read<void*>(cache, 0x40);
}

static void Lock(void* core) {
  if (TryLock(Bytes(core) + 0x38) != 0) {
    LockSlow(core);
  }
}

static void Unlock(void* core) {
  Write<unsigned char>(core, 0x40, 0);
  UnlockMutex(Bytes(core) + 0x38);
}

static size_t PageIndex(void* core, const void* address) {
  return (reinterpret_cast<uintptr_t>(address)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
}

static void* FindSpan(void* core, const void* address) {
  size_t index = PageIndex(core, address);
  return index < Read<size_t>(core)
    ? Read<void*>(Read<void*>(core, 8), index * 8) : nullptr;
}

static unsigned char PageClass(void* core, size_t index) {
  __asm__ __volatile__("dmb ishld" ::: "memory");
  return Read<unsigned char>(Read<void*>(core, 0x10), index);
}

static unsigned char SizeClass(size_t size) {
  size_t rounded = size + 15;
  return rounded <= 0xbff ? kSizeToClass[rounded >> 4] : 0;
}

static uint32_t ClassSize(size_t index) {
  return Read<uint16_t>(kClassInfo, size_t{index} * 4 + 2);
}

static size_t CountOffset(int index) {
  return 0x228 + static_cast<size_t>(index) * 4;
}

static void FindLargest(TlsHeapCache* cache) {
  uint32_t maximum = 0;
  int selected = 0;

  for (int index = 0; index < 57; ++index) {
    uint32_t bytes = Read<uint32_t>(cache, CountOffset(index));

    if (maximum < bytes) {
      maximum = bytes;
      selected = index;
    }
  }

  Write(cache, 0x58, selected);
}

static int ReleaseList(void* core, TlsHeapCache* cache, uintptr_t head) {
  Lock(core);
  uintptr_t next = head;

  while (next != 0) {
    uintptr_t address = Read<uintptr_t>(cache, 0x38) ^ next;
    next = Read<uintptr_t>(reinterpret_cast<void*>(address));
    int result = UncacheSmall(core, reinterpret_cast<void*>(address));

    if (result != 0) {
      Unlock(core);
      uintptr_t key = Read<uintptr_t>(cache, 0x38);
      uintptr_t previous = key ^ head;

      if (previous != address) {
        uintptr_t cursor = previous;

        do {
          previous = cursor;
          cursor = Read<uintptr_t>(reinterpret_cast<void*>(key ^ cursor));
        } while (cursor != address);
      }

      if (previous == head) {
        NotHeapPointer(reinterpret_cast<void*>(previous));
      }
      else {
        DataCorruption(reinterpret_cast<void*>(previous));
      }

      return result;
    }
  }

  Unlock(core);
  return 0;
}

static void ReleaseLists(TlsHeapCache* cache) {
  for (size_t index = 0; index < 57; ++index) {
    uintptr_t head = Read<uintptr_t>(cache, 0x60 + index * 8);

    if (head != 0) {
      ReleaseList(Core(cache), cache, head);
      Write<uintptr_t>(cache, 0x60 + index * 8, 0);
      Write<uint32_t>(cache, 0x228 + index * 4, 0);
    }
  }

  Write<uint64_t>(cache, 0x54, 0);
}

static int FreeSmall(void* core, void* address) {
  Lock(core);
  int result = UncacheSmall(core, address);
  Unlock(core);

  if (result != 0) {
    NotHeapPointer(address);
  }

  return result;
}

static int FreeLarge(void* core, void* address) {
  if ((reinterpret_cast<uintptr_t>(address) & 0xfff) != 0) {
    NotHeapPointer(address);
    return 14;
  }

  Lock(core);
  void* span = FindSpan(core, address);

  if (span == nullptr) {
    Unlock(core);
    return 14;
  }

  FreePages(core, span);
  Unlock(core);
  return 0;
}

static void* AllocateLarge(TlsHeapCache* cache, size_t size) {
  if (size >= (Read<size_t>(cache, 0x48) >> 2)) {
    cache->ReleaseAllCache();
  }

  void* core = Core(cache);
  Lock(core);
  void* span = AllocatePages(core, (size + 0xfff) >> 12);
  void* result = span == nullptr ? nullptr : Read<void*>(span, 0x18);
  Unlock(core);
  return result;
}

static void* AllocateSmall(TlsHeapCache* cache, unsigned char index,
                           size_t alignment, bool cached) {
  if (!cached) {
    void* core = Core(cache);
    Lock(core);
    void* result = CacheSmall(core, index, alignment, false);
    Unlock(core);
    return result;
  }

  uintptr_t head = Read<uintptr_t>(cache, 0x60 + size_t{index} * 8);

  if (head != 0) {
    uint32_t size = ClassSize(index);
    int largest = Read<int>(cache, 0x58);
    Write(cache, 0x54, Read<uint32_t>(cache, 0x54) - size);
    Write(cache, CountOffset(index),
          Read<uint32_t>(cache, CountOffset(index)) - ClassSize(index));
    void* result = reinterpret_cast<void*>(head ^ Read<uintptr_t>(cache, 0x38));
    head = Read<uintptr_t>(result);
    Write(cache, 0x60 + size_t{index} * 8, head);

    if (largest == index && head == 0) {
      FindLargest(cache);
    }

    return result;
  }

  unsigned char requested = index;
  unsigned char target = Read<unsigned char>(cache, 0x30c + index);
  void* core = Core(cache);
  int cpu = 0;

  if (index <= 7) {
    GetCpu(&cpu);
  }

  Lock(core);
  size_t count = CacheList(core, cache, &index, target, &head, cpu, alignment);
  Unlock(core);

  if (count == 0) {
    return nullptr;
  }

  if (requested == index) {
    unsigned char next_target = target < 64 ? target + 1 : target;

    if (static_cast<unsigned char>(count) > next_target) {
      next_target = count;
    }

    Write(cache, 0x30c + requested, next_target);
  }

  uint32_t bytes = static_cast<uint32_t>(count - 1) * ClassSize(index);
  uint32_t total = Read<uint32_t>(cache, CountOffset(index)) + bytes;
  Write(cache, CountOffset(index), total);
  int largest = Read<int>(cache, 0x58);

  if (total > Read<uint32_t>(cache, CountOffset(largest))) {
    Write<int>(cache, 0x58, index);
  }

  Write(cache, 0x54, Read<uint32_t>(cache, 0x54) + bytes);
  void* result = reinterpret_cast<void*>(head ^ Read<uintptr_t>(cache, 0x38));
  Write(cache, 0x60 + size_t{index} * 8, Read<uintptr_t>(result));
  return result;
}

static int CacheFree(TlsHeapCache* cache, void* address, unsigned char index) {
  size_t head_offset = 0x60 + size_t{index} * 8;
  Write(address, 0, Read<uintptr_t>(cache, head_offset));
  uintptr_t key = Read<uintptr_t>(cache, 0x38);
  Write(cache, head_offset, key ^ reinterpret_cast<uintptr_t>(address));
  uint32_t size = ClassSize(index);
  uint32_t total = Read<uint32_t>(cache, 0x54) + size;
  int largest = Read<int>(cache, 0x58);
  uint32_t class_total = Read<uint32_t>(cache, CountOffset(index)) + size;
  Write(cache, 0x54, total);
  Write(cache, CountOffset(index), class_total);

  if (class_total > Read<uint32_t>(cache, CountOffset(largest))) {
    Write<int>(cache, 0x58, index);
    largest = index;
  }

  void* core = Core(cache);

  if (total < Read<uint32_t>(core, 0x28)
      && total < Read<uint32_t>(core, 0x24)) {
    return 0;
  }

  if (Read<uint32_t>(cache, CountOffset(largest)) < 0x400) {
    return 0;
  }

  uint32_t unit = ClassSize(largest);
  uint32_t count = unit == 0 ? 0 : (unit + 0x3ff) / unit;
  uint32_t released = count * unit;
  size_t selected_head = 0x60 + static_cast<size_t>(largest) * 8;
  uintptr_t head = Read<uintptr_t>(cache, selected_head);
  uintptr_t tail = head;

  for (size_t remaining = size_t{count} - 1; remaining != 0; --remaining) {
    tail = Read<uintptr_t>(reinterpret_cast<void*>(tail ^ key));
  }

  Write(cache, selected_head,
        Read<uintptr_t>(reinterpret_cast<void*>(tail ^ key)));
  Write<uintptr_t>(reinterpret_cast<void*>(
                    tail ^ Read<uintptr_t>(cache, 0x38)), 0, 0);
  int result = ReleaseList(Core(cache), cache, head);
  largest = Read<int>(cache, 0x58);
  Write(cache, 0x54, Read<uint32_t>(cache, 0x54) - released);
  Write(cache, CountOffset(largest),
        Read<uint32_t>(cache, CountOffset(largest)) - released);
  FindLargest(cache);
  return result;
}

static void* AllocateAligned(TlsHeapCache* cache, size_t size,
                             size_t alignment, bool cached) {
  if ((alignment & (alignment - 1)) != 0) {
    return nullptr;
  }

  if (alignment > 0x1000) {
    void* core = Core(cache);
    Lock(core);
    void* span = AllocateAlignedPages(core, (size + 0xfff) >> 12, alignment);
    void* result = span == nullptr ? nullptr : Read<void*>(span, 0x18);
    Unlock(core);
    return result;
  }

  size_t rounded = (size + alignment - 1) & (size_t{0} - alignment);

  if (rounded + 15 <= 0xbff) {
    if (rounded == 0) {
      if (kSizeToClass[0] != 0) {
        return nullptr;
      }
    }
    else {
      unsigned char index = SizeClass(rounded);

      if (index != 0) {
        while (true) {
          rounded = ClassSize(index);

          if (((alignment + 0xffff) & rounded) == 0) {
            break;
          }

          if (++index == 57) {
            rounded = 0x1000;
            break;
          }
        }

        if (rounded <= 0xbf0) {
          index = SizeClass(rounded);

          if (index != 0) {
            return rounded == 0 ? nullptr
              : AllocateSmall(cache, index, alignment, cached);
          }
        }
      }
      else {
        rounded = 0x1000;
      }
    }
  }

  return AllocateLarge(cache, rounded);
}

static int Free(TlsHeapCache* cache, void* address, bool cached) {
  void* core = Core(cache);
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    NotHeapPointer(address);

    if (address == nullptr) {
      return 0;
    }

    NotHeapPointer(address);
    return 14;
  }

  unsigned char class_index = PageClass(core, index);

  if (class_index != 0) {
    return cached ? CacheFree(cache, address, class_index)
      : FreeSmall(Core(cache), address);
  }

  return FreeLarge(Core(cache), address);
}

static int FreeWithSize(TlsHeapCache* cache, void* address, size_t size,
                         bool cached) {
  unsigned char index = SizeClass(size);

  if (index != 0) {
    return cached ? CacheFree(cache, address, index)
      : FreeSmall(Core(cache), address);
  }

  return FreeLarge(Core(cache), address);
}

static int Realloc(TlsHeapCache* cache, void* address, size_t size,
                    void** output, bool cached) {
  unsigned char new_class = SizeClass(size);
  void* core = Core(cache);
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    NotHeapPointer(address);
    NotHeapPointer(output);
    return 14;
  }

  unsigned char old_class = PageClass(core, index);

  if (new_class != 0 && old_class != 0 && old_class >= new_class) {
    *output = address;
    return 0;
  }

  if (new_class == 0 && old_class == 0) {
    return ReallocateLarge(Core(cache), address, size, output);
  }

  size_t copy_size = old_class == 0 ? size : ClassSize(old_class);
  void* result = cached ? TlsHeapCache::AllocCached(cache, size)
    : TlsHeapCache::AllocUncached(cache, size);
  *output = result;

  if (result == nullptr) {
    return 12;
  }

  __builtin_memcpy(result, address, copy_size);
  return cached ? TlsHeapCache::FreeCached(cache, address)
    : TlsHeapCache::FreeUncached(cache, address);
}

}

namespace nn::nlibsdk::heap {

using namespace cache_detail;

void TlsHeapCache::Construct(void* core, unsigned flags) {
  bool cached = (flags & 4) != 0;
  Write(this, 0, cached ? AllocCached : AllocUncached);
  Write(this, 8, cached ? AllocAlignedCached : AllocAlignedUncached);
  Write(this, 0x10, cached ? FreeCached : FreeUncached);
  Write(this, 0x18, cached ? FreeWithSizeCached : FreeWithSizeUncached);
  Write(this, 0x20, GetAllocSizeFuncMode0);
  Write(this, 0x28, cached ? ReallocCached : ReallocUncached);
  Write(this, 0x30, ShrinkFuncMode0);
  uintptr_t key;

  if (GenerateRandom(storage + 0x38, 8) != 0) {
    uint64_t time = 0;
    EpochTime(&time);
    key = time ^ reinterpret_cast<uintptr_t>(&time);
  }
  else {
    key = Read<uintptr_t>(this, 0x38);
  }

  Write(this, 0x38, key | 1);
  Write(this, 0x40, core);
  Write(this, 0x50, flags);
  Write<uint64_t>(this, 0x54, 0);
  Write(this, 0x48, Read<size_t>(core) << 12);
  __builtin_memset(storage + 0x60, 0, 0x2ac);
  __builtin_memset(storage + 0x30c, 1, 57);
  storage[0x30d] = 64;
  storage[0x30e] = 64;
  storage[0x30f] = 64;
  storage[0x310] = 32;
  storage[0x311] = 32;
  storage[0x312] = 32;
  storage[0x313] = 16;
  storage[0x314] = 16;
  storage[0x315] = 16;
}

void TlsHeapCache::ReleaseAllCache() {
  ReleaseLists(this);
}

void TlsHeapCache::Finalize() {
  ReleaseLists(this);
  void* core = Core(this);
  Lock(core);
  uint32_t count = Read<uint32_t>(core, 0x20) - 1;
  size_t bytes = Read<size_t>(core) << 12;
  Write(core, 0x20, count);
  uint32_t divisor = count * 2;
  uint32_t limit = divisor == 0 ? 0 : bytes / divisor;
  Write(core, 0x28, limit);
  Unlock(core);
  FreeSmall(Core(this), this);
}

bool TlsHeapCache::CheckCache() {
  return true;
}

void* TlsHeapCache::GetMalloc0Ptr() const {
  return Read<void*>(Core(this), 0x30);
}

size_t TlsHeapCache::GetAllocSizeFuncMode0(TlsHeapCache* cache,
                                         const void* address) {
  void* core = Core(cache);
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    NotHeapPointer(address);
  }
  else {
    unsigned char class_index = PageClass(core, index);

    if (class_index != 0) {
      if ((reinterpret_cast<uintptr_t>(address) & 7) != 0) {
        NotHeapPointer(address);
        return 0;
      }

      return ClassSize(class_index);
    }
  }

  if ((reinterpret_cast<uintptr_t>(address) & 0xfff) != 0) {
    NotHeapPointer(address);
    return 0;
  }

  core = Core(cache);
  Lock(core);
  void* span = FindSpan(core, address);
  Unlock(core);
  return span == nullptr ? 0 : Read<size_t>(span, 0x20) << 12;
}

int TlsHeapCache::ShrinkFuncMode0(TlsHeapCache* cache, void* address,
                                 size_t size) {
  unsigned char new_class = SizeClass(size);
  void* core = Core(cache);
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    NotHeapPointer(address);
    NotHeapPointer(address);
    return 14;
  }

  unsigned char old_class = PageClass(core, index);

  if (old_class != 0) {
    return old_class > static_cast<unsigned char>(new_class - 1) ? 0 : 22;
  }

  return ShrinkLarge(Core(cache), address, new_class == 0 ? size : 0x1000);
}

void* TlsHeapCache::AllocUncached(TlsHeapCache* cache, size_t size) {
  unsigned char index = SizeClass(size);
  return index == 0 ? AllocateLarge(cache, size)
    : AllocateSmall(cache, index, 0, false);
}

void* TlsHeapCache::AllocCached(TlsHeapCache* cache, size_t size) {
  unsigned char index = SizeClass(size);
  return index == 0 ? AllocateLarge(cache, size)
    : AllocateSmall(cache, index, 0, true);
}

void* TlsHeapCache::AllocAlignedUncached(TlsHeapCache* cache, size_t size,
                                       size_t alignment) {
  return AllocateAligned(cache, size, alignment, false);
}

void* TlsHeapCache::AllocAlignedCached(TlsHeapCache* cache, size_t size,
                                     size_t alignment) {
  return AllocateAligned(cache, size, alignment, true);
}

int TlsHeapCache::FreeUncached(TlsHeapCache* cache, void* address) {
  return Free(cache, address, false);
}

int TlsHeapCache::FreeCached(TlsHeapCache* cache, void* address) {
  return Free(cache, address, true);
}

int TlsHeapCache::FreeWithSizeUncached(TlsHeapCache* cache, void* address,
                                     size_t size) {
  return FreeWithSize(cache, address, size, false);
}

int TlsHeapCache::FreeWithSizeCached(TlsHeapCache* cache, void* address,
                                   size_t size) {
  return FreeWithSize(cache, address, size, true);
}

int TlsHeapCache::ReallocUncached(TlsHeapCache* cache, void* address,
                                 size_t size, void** output) {
  return Realloc(cache, address, size, output, false);
}

int TlsHeapCache::ReallocCached(TlsHeapCache* cache, void* address,
                               size_t size, void** output) {
  return Realloc(cache, address, size, output, true);
}

}

__asm__(
  ".globl _ZN2nn7nlibsdk4heap12TlsHeapCacheC2EPNS1_14TlsHeapCentralEj\n"
  ".set _ZN2nn7nlibsdk4heap12TlsHeapCacheC2EPNS1_14TlsHeapCentralEj, "
  "_ZN2nn7nlibsdk4heap12TlsHeapCacheC1EPNS1_14TlsHeapCentralEj\n");
