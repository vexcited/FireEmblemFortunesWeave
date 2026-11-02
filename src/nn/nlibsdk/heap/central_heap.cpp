#include "nn/nlibsdk/heap/central_heap.hpp"

#include <stdint.h>

namespace nn::nlibsdk::heap::detail {

extern const unsigned char kClassInfo[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic10kClassInfoE");
extern const unsigned char kSizeToClass[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic11kSize2ClassE");

int TryLock(void*) asm("pthread_mutex_trylock");
int UnlockMutex(void*) asm("pthread_mutex_unlock");
void LockSlow(void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14LockMutexSlow_Ev");
void ConstructCore(void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentralC1Ev");
void DestroyCore(void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentralD1Ev");
int InitializeCore(void*, void*, size_t, bool, bool)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral4InitEPvmbb");
int VirtualAlloc(uintptr_t*, size_t) asm("nnmem_nlib_virtual_alloc");
void VirtualFree(uintptr_t, size_t) asm("nnmem_nlib_virtual_free");
int PhysicalAlloc(uintptr_t, size_t, int) asm("nnmem_nlib_physical_alloc");
void PhysicalFree(uintptr_t, size_t) asm("nnmem_nlib_physical_free");
void* CacheSmall(void*, unsigned char, size_t, bool)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral17CacheSmallMemory_Ehmb");
int UncacheSmall(void*, void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral19UncacheSmallMemory_EPv");
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
void ConstructCache(void*, void*, unsigned)
  asm("_ZN2nn7nlibsdk4heap12TlsHeapCacheC1EPNS1_14TlsHeapCentralEj");
void NotHeapPointer(const void*)
  asm("_ZN2nn7nlibsdk4heap18NotNMallocPtrErrorEPKv");
int WalkCore(void*, int (*)(void*, size_t, void*), void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18WalkAllocatedPtrs_EPFiPvmS3_ES3_");
void GetMemoryStats(void*, size_t*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral12GetMemStats_"
      "EPNS1_15TlsHeapMemStatsE");
int GetMappedStats(void*, size_t*, size_t*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18GetMappedMemStats_EPmS3_");
bool IsClean(void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral7IsCleanEv");
void CalculateHash(void*, void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral12CalcHeapHashEP8HeapHash");
bool CheckSpanList(void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14CheckSpanList_Ev");
void DumpCore(void*, int, int, bool)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral5Dump_E15NMallocDumpModeib");
size_t TryFreePhysical(void*, const void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral22TryFreePhysicalMemory_EPKv");
size_t StringLength(const char*) asm("strlen");

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

static bool IsZeroAllocation(const void* address) {
  return (reinterpret_cast<uintptr_t>(address) & ~uintptr_t{0x1000}) == 0;
}

static size_t PageIndex(const void* core, const void* address) {
  return (reinterpret_cast<uintptr_t>(address)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
}

static void* FindSpan(void* core, const void* address) {
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    return nullptr;
  }

  return Read<void*>(Read<void*>(core, 8), index * 8);
}

static unsigned char PageClass(void* core, size_t index) {
  __asm__ __volatile__("dmb ishld" ::: "memory");
  return Read<unsigned char>(Read<void*>(core, 0x10), index);
}

static unsigned char SizeClass(size_t size) {
  return size <= 0xbf0 ? kSizeToClass[(size + 15) >> 4] : 0;
}

static size_t ClassSize(unsigned char index) {
  return Read<uint16_t>(kClassInfo, size_t{index} * 4 + 2);
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

static size_t GetLargeSize(void* core, const void* address) {
  if ((reinterpret_cast<uintptr_t>(address) & 0xfff) != 0) {
    NotHeapPointer(address);
    return 0;
  }

  Lock(core);
  void* span = FindSpan(core, address);
  Unlock(core);
  return span == nullptr ? 0 : Read<size_t>(span, 0x20) << 12;
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

static int QueryCore(void* core, int selector, va_list* arguments);

}

namespace nn::nlibsdk::heap {

using namespace detail;

int CentralHeap::Init(void* address, size_t size, unsigned flags) {
  if (size == 0 || (size & 0xfff) != 0) {
    return 22;
  }

  if (Read<uintptr_t>(storage, 0x10) != 0) {
    return 17;
  }

  uintptr_t begin = reinterpret_cast<uintptr_t>(address);
  uintptr_t aligned;
  size_t core_size;
  bool owns_memory = address == nullptr;

  if (address != nullptr) {
    aligned = (begin + 0xfff) & ~uintptr_t{0xfff};
    uintptr_t end = (begin + size) & ~uintptr_t{0xfff};

    if (aligned >= end) {
      return 22;
    }

    core_size = end - aligned;
    Write(storage, 0x10, aligned);
    Write(storage, 0x18, end);
    Write(storage, 0x0c, flags);
  }
  else {
    begin = 0;
    int result = VirtualAlloc(&begin, size);

    if (result != 0) {
      return result;
    }

    if ((begin & 0xfff) != 0) {
      VirtualFree(begin, size);
      size += 0x1000;
      result = VirtualAlloc(&begin, size);

      if (result != 0) {
        return result;
      }
    }

    core_size = size;
    Write(storage, 0x0c, flags);
    Write(storage, 0x10, begin);
    Write(storage, 0x18, begin + size);
    aligned = (begin + 0xfff) & ~uintptr_t{0xfff};
    result = PhysicalAlloc(aligned, 0xa40, 3);

    if (result != 0) {
      return result;
    }
  }

  void* core = reinterpret_cast<void*>(aligned);
  ConstructCore(core);
  Write(storage, 0, core);
  int result = InitializeCore(core, core, core_size,
                             owns_memory, (flags & 8) != 0);

  if (result != 0) {
    DestroyCore(Read<void*>(storage));
    return result;
  }

  storage[8] = owns_memory;
  return 0;
}

void CentralHeap::Finalize() {
  void* core = Read<void*>(storage);

  if (core != nullptr) {
    DestroyCore(core);
  }

  if (storage[8] == 1) {
    uintptr_t begin = Read<uintptr_t>(storage, 0x10);
    size_t size = Read<uintptr_t>(storage, 0x18) - begin;
    PhysicalFree((begin + 0xfff) & ~uintptr_t{0xfff}, size);
    VirtualFree(Read<uintptr_t>(storage, 0x10), size);
  }

  Write<uintptr_t>(storage, 0, 0);
  storage[8] = 0;
  __builtin_memset(storage + 0x0c, 0, 20);
}

bool CentralHeap::MakeCache(CachedHeap* output) {
  if (output == nullptr) {
    return false;
  }

  void* core = Read<void*>(storage);
  unsigned char class_index = kSizeToClass[0x35];
  Lock(core);
  void* cache = CacheSmall(core, class_index, 0, true);
  Unlock(core);

  if (cache == nullptr) {
    return false;
  }

  ConstructCache(cache, Read<void*>(storage), Read<unsigned>(storage, 0x0c));
  core = Read<void*>(storage);
  Lock(core);
  uint32_t count = Read<uint32_t>(core, 0x20) + 1;
  size_t bytes = Read<size_t>(core) << 12;
  Write(core, 0x20, count);
  uint32_t divisor = count * 2;
  // AArch64 UDIV returns zero when its divisor is zero.
  uint32_t limit = divisor == 0 ? 0 : bytes / divisor;
  Write(core, 0x28, limit);
  Unlock(core);
  output->Reset(static_cast<TlsHeapCache*>(cache));
  return true;
}

void* CentralHeap::Alloc(size_t size, size_t alignment) {
  if ((size >> 63) != 0 || (alignment & (alignment - 1)) != 0) {
    return nullptr;
  }

  if (size == 0) {
    void* zero = Read<void*>(Read<void*>(storage), 0x30);

    if (zero == nullptr || alignment <= reinterpret_cast<uintptr_t>(zero)) {
      return zero;
    }

    size = 1;
  }

  if (alignment > 0x1000) {
    void* core = Read<void*>(storage);
    size_t pages = (size + 0xfff) >> 12;
    Lock(core);
    void* span = AllocateAlignedPages(core, pages, alignment);
    void* result = span == nullptr ? nullptr : Read<void*>(span, 0x18);
    Unlock(core);
    return result;
  }

  size_t rounded = (alignment + size - 1) & (size_t{0} - alignment);

  if (rounded <= 0xbf0) {
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
            if (rounded == 0) {
              return nullptr;
            }

            void* core = Read<void*>(storage);
            Lock(core);
            void* result = CacheSmall(core, index, alignment, false);
            Unlock(core);
            return result;
          }
        }
      }
      else {
        rounded = 0x1000;
      }
    }
  }

  void* core = Read<void*>(storage);
  size_t pages = (rounded + 0xfff) >> 12;
  Lock(core);
  void* span = AllocatePages(core, pages);
  void* result = span == nullptr ? nullptr : Read<void*>(span, 0x18);
  Unlock(core);
  return result;
}

int CentralHeap::Free(void* address) {
  if (IsZeroAllocation(address)) {
    return 0;
  }

  if ((reinterpret_cast<uintptr_t>(address) & 7) != 0) {
    return 14;
  }

  void* core = Read<void*>(storage);
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    NotHeapPointer(address);
    return 14;
  }

  unsigned char class_index = PageClass(core, index);
  core = Read<void*>(storage);

  if (class_index != 0) {
    return FreeSmall(core, address);
  }

  if ((reinterpret_cast<uintptr_t>(address) & 0xff8) != 0) {
    NotHeapPointer(address);
    return 14;
  }

  return FreeLarge(core, address);
}

int CentralHeap::FreeWithSize(void* address, size_t size) {
  if (IsZeroAllocation(address)) {
    return 0;
  }

  if (size == 0) {
    return Free(address);
  }

  if ((size >> 63) != 0) {
    return 22;
  }

  if (SizeClass(size) != 0) {
    return FreeSmall(Read<void*>(storage), address);
  }

  if ((reinterpret_cast<uintptr_t>(address) & 0xfff) != 0) {
    NotHeapPointer(address);
    return 14;
  }

  return FreeLarge(Read<void*>(storage), address);
}

size_t CentralHeap::GetAllocSize(const void* address) {
  if (IsZeroAllocation(address)) {
    return 0;
  }

  void* core = Read<void*>(storage);
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

  return GetLargeSize(Read<void*>(storage), address);
}

int CentralHeap::Realloc(void* address, size_t size, void** output) {
  if (size == 0) {
    *output = Read<void*>(Read<void*>(storage), 0x30);
    return Free(address);
  }

  if ((size >> 63) != 0) {
    *output = address;
    return 12;
  }

  if (IsZeroAllocation(address)) {
    *output = Alloc(size, 8);
    return *output == nullptr ? 12 : 0;
  }

  unsigned char new_class = SizeClass(size);
  void* core = Read<void*>(storage);
  size_t index = PageIndex(core, address);

  if (index >= Read<size_t>(core)) {
    NotHeapPointer(address);
    NotHeapPointer(address);
    return 14;
  }

  unsigned char old_class = PageClass(core, index);

  if (old_class != 0 && new_class != 0 && old_class >= new_class) {
    *output = address;
    return 0;
  }

  if (old_class == 0 && new_class == 0) {
    return ReallocateLarge(Read<void*>(storage), address, size, output);
  }

  size_t copy_size = old_class == 0 ? size : ClassSize(old_class);
  void* replacement = Alloc(size, 8);
  *output = replacement;

  if (replacement == nullptr) {
    return 12;
  }

  __builtin_memcpy(replacement, address, copy_size);

  if (old_class != 0) {
    return FreeSmall(Read<void*>(storage), address);
  }

  if ((reinterpret_cast<uintptr_t>(address) & 0xfff) != 0) {
    NotHeapPointer(address);
    return 14;
  }

  return FreeLarge(Read<void*>(storage), address);
}

int CentralHeap::Shrink(void* address, size_t size) {
  if (IsZeroAllocation(address)) {
    return size == 0 ? 0 : 22;
  }

  if ((size >> 63) != 0) {
    return 22;
  }

  unsigned char new_class = SizeClass(size);
  void* core = Read<void*>(storage);
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

  return ShrinkLarge(Read<void*>(storage), address,
                     new_class == 0 ? size : 0x1000);
}

int CentralHeap::Query(int selector, ...) {
  va_list arguments;
  va_start(arguments, selector);
  int result = QueryCore(Read<void*>(storage), selector, &arguments);
  va_end(arguments);
  return result;
}

int CentralHeap::QueryV(int selector, va_list arguments) {
  va_list copy;
  va_copy(copy, arguments);
  int result = QueryCore(Read<void*>(storage), selector, &copy);
  va_end(copy);
  return result;
}

int CentralHeap::WalkAllocatedPtrs(int (*callback)(void*, size_t, void*),
                                  void* user) {
  if (callback == nullptr) {
    return 22;
  }

  void* core = Read<void*>(storage);

  if (core == nullptr) {
    return 22;
  }

  Lock(core);
  int result = WalkCore(core, callback, user);
  Unlock(core);
  return result;
}

}

namespace nn::nlibsdk::heap::detail {

static bool CheckCore(void* core) {
  Lock(core);
  bool result = CheckSpanList(core);
  Unlock(core);
  return result;
}

static void* FindLargeSpan(void* core, const void* address) {
  void* span = FindSpan(core, address);
  return span != nullptr && Read<unsigned char>(span, 0x12) == 0
    ? span : nullptr;
}

static int QueryCore(void* core, int selector, va_list* arguments) {
  switch (selector) {
    case 0:
    case 19: {
      int mode = va_arg(*arguments, int);
      int level = va_arg(*arguments, int);

      if (core != nullptr) {
        Lock(core);
        DumpCore(core, mode, level, selector == 19);
        Unlock(core);
      }

      return 0;
    }
    case 1: {
      auto* output = va_arg(*arguments, size_t*);

      if (output != nullptr) {
        *output = 0x1000;
      }

      return 0;
    }
    case 2:
    case 3:
    case 4:
    case 5: {
      auto* output = va_arg(*arguments, size_t*);

      if (output == nullptr) {
        return 0;
      }

      if (core == nullptr) {
        *output = 0;
        return 0;
      }

      size_t stats[4]{};
      Lock(core);
      GetMemoryStats(core, stats);
      Unlock(core);
      *output = stats[selector - 2];
      return 0;
    }
    case 6: {
      auto* output = va_arg(*arguments, int*);

      if (output != nullptr) {
        *output = core == nullptr || IsClean(core);
      }

      return 0;
    }
    case 7: {
      void* output = va_arg(*arguments, void*);

      if (output != nullptr) {
        if (core == nullptr) {
          __builtin_memset(output, 0, 24);
        }
        else {
          CalculateHash(core, output);
        }
      }

      return 0;
    }
    case 8:
      if (core != nullptr) {
        IsClean(core);
      }

      return 0;
    case 9: {
      void* address = va_arg(*arguments, void*);
      int tag = va_arg(*arguments, int);

      if (core == nullptr) {
        return 0;
      }

      if (tag > 0xffffff) {
        return 22;
      }

      Lock(core);
      void* span = FindLargeSpan(core, address);
      int result = 22;

      if (span != nullptr) {
        Write<unsigned char>(span, 0x28, tag);
        Write<unsigned char>(span, 0x29, unsigned(tag) >> 8);
        Write<unsigned char>(span, 0x2a, unsigned(tag) >> 16);
        result = 0;
      }

      Unlock(core);
      return result;
    }
    case 10: {
      void* address = va_arg(*arguments, void*);
      auto* output = va_arg(*arguments, int*);

      if (core == nullptr) {
        *output = 0;
        return 0;
      }

      if (output == nullptr) {
        return 22;
      }

      Lock(core);
      void* span = FindLargeSpan(core, address);
      int result = 22;

      if (span != nullptr) {
        *output = Read<uint16_t>(span, 0x28)
          | (unsigned(Read<unsigned char>(span, 0x2a)) << 16);
        result = 0;
      }

      Unlock(core);
      return result;
    }
    case 11: {
      void* address = va_arg(*arguments, void*);
      const char* name = va_arg(*arguments, const char*);

      if (core == nullptr) {
        return 0;
      }

      Lock(core);
      void* span = FindLargeSpan(core, address);
      int result = 22;

      if (span != nullptr) {
        size_t length = StringLength(name);

        if (length > 15) {
          uint64_t first = Read<uint64_t>(name);
          uint64_t last = Read<uint64_t>(name, 7);
          Write<unsigned char>(span, 0x3a, 0);
          Write(span, 0x32, last);
          Write(span, 0x2b, first);
        }
        else {
          __builtin_memcpy(Bytes(span) + 0x2b, name, length + 1);
        }

        result = 0;
      }

      Unlock(core);
      return result;
    }
    case 12: {
      void* address = va_arg(*arguments, void*);
      char* output = va_arg(*arguments, char*);
      size_t capacity = va_arg(*arguments, size_t);

      if (core == nullptr) {
        if (output != nullptr && capacity != 0) {
          *output = 0;
        }

        return 0;
      }

      Lock(core);
      void* span = FindLargeSpan(core, address);
      int result = 22;

      if (span != nullptr) {
        const char* name = reinterpret_cast<char*>(Bytes(span) + 0x2b);
        size_t length = StringLength(name);

        if (length < capacity) {
          __builtin_memcpy(output, name, length + 1);
        }
        else if (capacity != 0) {
          __builtin_memcpy(output, name, capacity - 1);
          output[capacity - 1] = 0;
        }

        result = 0;
      }

      Unlock(core);
      return result;
    }
    case 13: {
      auto* output = va_arg(*arguments, unsigned char*);

      if (output != nullptr) {
        *output = core == nullptr || CheckCore(core);
      }

      return 0;
    }
    case 17:
    case 18: {
      auto* output = va_arg(*arguments, size_t*);

      if (output == nullptr) {
        return 0;
      }

      if (core == nullptr) {
        *output = 0;
        return 0;
      }

      size_t free_size = 0;
      size_t allocatable_size = 0;
      Lock(core);
      int result = GetMappedStats(core, &free_size, &allocatable_size);
      Unlock(core);

      if (result == 0) {
        *output = selector == 17 ? free_size : allocatable_size;
      }

      return result;
    }
    case 20: {
      auto* output = va_arg(*arguments, size_t*);

      if (output == nullptr) {
        return 0;
      }

      size_t result = 0;

      if (core != nullptr) {
        Lock(core);
        result = TryFreePhysical(core, nullptr);
        Unlock(core);
      }

      *output = result;
      return 0;
    }
    case 21:
    case 22: {
      auto* output = va_arg(*arguments, int*);

      if (output != nullptr) {
        int result = 0;

        if (core != nullptr) {
          result = selector == 21 ? Read<unsigned char>(core, 0x2c)
            : Read<uintptr_t>(core, 0x30) != 0;
        }

        *output = result;
      }

      return 0;
    }
    default:
      return 22;
  }
}

}
