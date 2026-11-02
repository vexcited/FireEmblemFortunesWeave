#include "nn/nlibsdk/heap/tls_heap_large.hpp"

#include "nn/nlibsdk/heap/tls_heap_pages.hpp"
#include "nn/nlibsdk/heap/tls_heap_physical.hpp"
#include "nn/nlibsdk/heap/tls_heap_spans.hpp"

namespace nn::nlibsdk::heap::large_detail {

int TryLock(void*) asm("pthread_mutex_trylock");
int Lock(void*) asm("pthread_mutex_lock");
int Unlock(void*) asm("pthread_mutex_unlock");
void Notify(int, int) asm("nnmem_nlib_threadpool_notify");
int Once(void*, void (*)()) asm("pthread_once");
bool IsVirtualEnabled()
  asm("_ZN2nn2os29IsVirtualAddressMemoryEnabledEv");
void QueryMemory(void*) asm("_ZN2nn2os15QueryMemoryInfoEPNS0_10MemoryInfoE");
void* FindByte(const void*, int, size_t) asm("nnmem_nlib_memchr");
void* FindOtherByte(const void*, int, size_t)
  asm("nnmem_nlib_memchr_not");
void* Copy(void*, const void*, size_t) asm("memcpy");
void* Fill(void*, int, size_t) asm("memset");
extern const uint16_t ClassInfo[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic10kClassInfoE");

struct VirtualMemoryState {
  unsigned char enabled;
  uint32_t once;
};

VirtualMemoryState virtual_memory;

void InitializeVirtualMemory() {
  virtual_memory.enabled = IsVirtualEnabled();
}

static unsigned char* Bytes(const void* address) {
  return reinterpret_cast<unsigned char*>(const_cast<void*>(address));
}

template<typename T>
static T Read(const void* address, size_t offset = 0) {
  T value;
  __builtin_memcpy(&value, Bytes(address) + offset, sizeof(value));
  return value;
}

template<typename T>
static void Write(void* address, size_t offset, T value) {
  __builtin_memcpy(Bytes(address) + offset, &value, sizeof(value));
}

static uintptr_t Address(const void* pointer) {
  return reinterpret_cast<uintptr_t>(pointer);
}

static void LockCore(TlsHeapCentral* core) {
  if (TryLock(Bytes(core) + 0x38) != 0) {
    large::LockMutexSlow(core);
  }
}

static void UnlockCore(TlsHeapCentral* core) {
  Write<unsigned char>(core, 0x40, 0);
  Unlock(Bytes(core) + 0x38);
}

static void* FindSpan(TlsHeapCentral* core, uintptr_t address) {
  size_t page = (address - Address(core)) >> 12;
  return page < Read<size_t>(core)
    ? Read<void*>(Read<void*>(core, 8), page * 8) : nullptr;
}

static void* FindMetadata(TlsHeapCentral* core) {
  for (void* page = Read<void*>(core, 0x48); page != nullptr;
       page = Read<void*>(page)) {
    if (Read<unsigned char>(page, 0x1a) != 1
        && Read<uint64_t>(page, 0x10) != UINT64_MAX) {
      return page;
    }
  }

  return nullptr;
}

static void ShrinkSpan(TlsHeapCentral* core, void* span, size_t rounded,
                       size_t count) {
  void* page = FindMetadata(core);

  if (page == nullptr) {
    page = spans::AllocSpanPage(core);
  }

  if (page == nullptr) {
    return;
  }

  void* tail = pages::AllocSpanFromSpanPage(core, page);
  Write(tail, 0x18, Read<uintptr_t>(span, 0x18) + rounded);
  Write<uint32_t>(tail, 0x14, 0);
  Write(tail, 0x20, Read<size_t>(span, 0x20) - count);
  Write<unsigned char>(tail, 0x13, 1);
  large::ResizeSpan(core, span, Read<uintptr_t>(span, 0x18), count);
  Write<unsigned char>(tail, 0x12, 0);
  void* mapping = Read<void*>(core, 8);
  size_t index = (Read<uintptr_t>(tail, 0x18) - Address(core)) >> 12;
  Write(mapping, index * 8, tail);
  Write(mapping, (index + Read<size_t>(tail, 0x20) - 1) * 8, tail);
  pages::FreePages(core, tail);
}

static void DetachFree(TlsHeapCentral* core, void* span, size_t count) {
  size_t bucket = (count < 256 ? count : 256) - 1;
  void* next = Read<void*>(span);
  void* previous = Read<void*>(span, 8);

  if (next != nullptr) {
    Write(next, 8, previous);
  }

  if (previous != nullptr) {
    Write(previous, 0, Read<void*>(span));
  }

  Write<uintptr_t>(span, 0, 0);
  Write<uintptr_t>(span, 8, 0);

  if (Read<void*>(core, 0x58 + bucket * 8) == nullptr) {
    size_t offset = 0x858 + (bucket >> 6) * 8;
    Write(core, offset, Read<uint64_t>(core, offset)
      & ~(uint64_t{1} << (bucket & 63)));
  }
}

static size_t SmallFree(void* span) {
  size_t unit = ClassInfo[Read<unsigned char>(span, 0x12) * 2 + 1];
  return (Read<size_t>(span, 0x20) << 12)
    - Read<uint16_t>(span, 0x10) * unit;
}

}

namespace nn::nlibsdk::heap::large {

using namespace large_detail;

void LockMutexSlow(TlsHeapCentral* core) {
  for (unsigned remaining = 600; remaining != 0; --remaining) {
    asm volatile("yield" ::: "memory");

    if ((Read<unsigned char>(core, 0x40) & 1) == 0
        && TryLock(Bytes(core) + 0x38) == 0) {
      return;
    }
  }

  Notify(1, 1);
  Lock(Bytes(core) + 0x38);
  Notify(1, 0);
  Write<unsigned char>(core, 0x40, 1);
}

void ResizeSpan(TlsHeapCentral* core, void* span, uintptr_t begin,
                size_t count) {
  uintptr_t old_begin = Read<uintptr_t>(span, 0x18);
  size_t index = (old_begin - Address(core)) >> 12;
  void* mapping = Read<void*>(core, 8);
  size_t old_count = Read<size_t>(span, 0x20);

  if (begin == old_begin) {
    if (old_count != 1) {
      Write<uintptr_t>(mapping, (index + old_count - 1) * 8, 0);
    }

    Write(mapping, (index + count - 1) * 8, span);
  }
  else {
    Write<uintptr_t>(mapping, index * 8, 0);
    Write<uintptr_t>(mapping, (index + old_count - 1) * 8, 0);
    mapping = Read<void*>(core, 8);
    index = (begin - Address(core)) >> 12;
    Write(mapping, index * 8, span);
    Write(mapping, (index + count - 1) * 8, span);
    Write(span, 0x18, begin);
  }

  Write(span, 0x20, count);
}

int Shrink(TlsHeapCentral* core, void* address, size_t size) {
  if ((Address(address) & 4095) != 0) {
    return 14;
  }

  LockCore(core);
  void* span = FindSpan(core, Address(address));
  int result = 0;

  if (span == nullptr) {
    result = 14;
  }
  else {
    size_t count = (size + 4095) >> 12;
    size_t old_count = Read<size_t>(span, 0x20);

    if (count > old_count) {
      result = 22;
    }
    else if (count != old_count) {
      ShrinkSpan(core, span, (size + 4095) & ~size_t{4095}, count);
    }
  }

  UnlockCore(core);
  return result;
}

int Reallocate(TlsHeapCentral* core, void* address, size_t size,
               void** out) {
  if ((Address(address) & 4095) != 0) {
    return 14;
  }

  LockCore(core);
  void* span = FindSpan(core, Address(address));

  if (span == nullptr) {
    UnlockCore(core);
    return 14;
  }

  size_t count = (size + 4095) >> 12;
  size_t rounded = (size + 4095) & ~size_t{4095};
  size_t old_count = Read<size_t>(span, 0x20);

  if (count <= old_count) {
    if (count != old_count) {
      ShrinkSpan(core, span, rounded, count);
    }

    *out = address;
    UnlockCore(core);
    return 0;
  }

  void* following = FindSpan(core,
    Read<uintptr_t>(span, 0x18) + (old_count << 12));

  if (following != nullptr
      && Read<unsigned char>(following, 0x13) == 2
      && Read<size_t>(following, 0x20) >= count - old_count) {
    if (Read<unsigned char>(core, 0x2c) == 1
        && physical::Allocate(core, Read<void*>(following, 0x18),
                              (count - old_count) << 12) != 0) {
      UnlockCore(core);
      return 12;
    }

    DetachFree(core, following, Read<size_t>(following, 0x20));
    size_t remaining = Read<size_t>(following, 0x20)
      - (count - Read<size_t>(span, 0x20));

    if (remaining == 0) {
      size_t index = (Read<uintptr_t>(following, 0x18)
        - Address(core)) >> 12;
      Write<uintptr_t>(Read<void*>(core, 8), index * 8, 0);
      Write<uintptr_t>(Read<void*>(core, 8),
        (index + Read<size_t>(following, 0x20) - 1) * 8, 0);
      ResizeSpan(core, span, Read<uintptr_t>(span, 0x18), count);
      void* owner = reinterpret_cast<void*>(Address(following)
        & ~uintptr_t{4095});
      pages::FreeSpanToSpanPage(core, following, owner);
      spans::DestroySpanPageIfEmpty(core, owner, false);
    }
    else {
      ResizeSpan(core, following, Read<uintptr_t>(span, 0x18) + rounded,
                  remaining);
      ResizeSpan(core, span, Read<uintptr_t>(span, 0x18), count);
      spans::MergeIntoFreeList(core, &following);
    }

    *out = address;
    UnlockCore(core);
    return 0;
  }

  UnlockCore(core);
  LockCore(core);
  void* replacement = pages::AllocPages(core, count);

  if (replacement != nullptr) {
    *out = Read<void*>(replacement, 0x18);
    uint64_t first = Read<uint64_t>(span, 0x28);
    uint64_t second = Read<uint64_t>(span, 0x30);
    Write(replacement, 0x37, Read<uint32_t>(span, 0x37));
    Write(replacement, 0x28, first);
    Write(replacement, 0x30, second);
  }
  else {
    *out = nullptr;
  }

  UnlockCore(core);
  void* destination = *out;

  if (destination == nullptr) {
    return 12;
  }

  size_t old_bytes = Read<size_t>(span, 0x20) << 12;

  if (rounded < old_bytes) {
    Fill(destination, 0, rounded);
  }
  else {
    Copy(destination, address, old_bytes);
  }

  LockCore(core);
  pages::FreePages(core, span);
  UnlockCore(core);
  return 0;
}

size_t GetSpanMappedArea(TlsHeapCentral* core, const void* span) {
  if ((Read<unsigned char>(core, 0x2c) & 1) != 0) {
    Once(&virtual_memory.once, InitializeVirtualMemory);

    if ((virtual_memory.enabled & 1) != 0) {
      return 0;
    }
  }

  return Read<size_t>(span, 0x20) << 12;
}

int GetMappedMemoryStats(TlsHeapCentral* core, size_t* free,
                         size_t* largest) {
  if (Read<unsigned char>(core, 0x2c) != 1) {
    return 95;
  }

  Once(&virtual_memory.once, InitializeVirtualMemory);

  if (virtual_memory.enabled != 1) {
    return 95;
  }

  uint64_t info[7] = {};
  QueryMemory(info);
  size_t available = (info[0] - info[1]) & ~size_t{4095};
  void* span = Read<size_t>(core) == 0 ? nullptr
    : Read<void*>(Read<void*>(core, 8));
  *largest = 0;
  size_t pending = 0;
  size_t count = Read<size_t>(core) & 0xfffffffffffff;
  unsigned char* mapping = Read<unsigned char*>(core, 0x18);

  for (size_t index = 0; index != count;) {
    void* found = FindByte(mapping + index, 2, count - index);

    if (found == nullptr) {
      break;
    }

    size_t start = Address(found) - Address(mapping);
    void* end = FindOtherByte(found, 2, count - start);
    index = end == nullptr ? count : Address(end) - Address(mapping);
    pending += (index - start) << 12;
  }

  *free = pending;
  size_t potential = 0;
  size_t run = 0;
  size_t budget = pending + available;

  while (span != nullptr) {
    unsigned flag = Read<unsigned char>(span, 0x13);

    if ((flag | 2) == 3) {
      if (*largest < run) {
        *largest = run;
        flag = Read<unsigned char>(span, 0x13);
      }

      if (flag != 3 && Read<unsigned char>(span, 0x12) != 0
          && Read<void*>(span, 0x28) != nullptr) {
        size_t unused = SmallFree(span);
        *free += unused;
        potential += unused;
      }

      run = 0;
      budget = pending + available;
    }
    else {
      size_t bytes = Read<size_t>(span, 0x20) << 12;
      size_t mapped = bytes;

      if (Read<unsigned char>(core, 0x2c) == 1) {
        Once(&virtual_memory.once, InitializeVirtualMemory);
        mapped = (virtual_memory.enabled & 1) != 0 ? 0
          : Read<size_t>(span, 0x20) << 12;
      }

      potential += bytes;
      *free += mapped;
      size_t needed = bytes - mapped;

      if (budget >= needed) {
        run += bytes;
        budget -= needed;
      }
      else {
        if (*largest < budget + run) {
          *largest = budget + run;
        }

        run = 0;
        budget = pending + available;
      }
    }

    span = FindSpan(core,
      Read<uintptr_t>(span, 0x18) + (Read<size_t>(span, 0x20) << 12));
  }

  size_t maximum = *largest < run ? run : *largest;
  *largest = maximum;

  if (FindMetadata(core) == nullptr) {
    maximum = maximum >= 4096 ? maximum - 4096 : 0;
    *largest = maximum;
  }

  if (maximum < 3 * 4096) {
    *largest = 0;
  }

  *free = *free + available < potential ? *free + available : potential;
  return 0;
}

void GetMemoryStats(TlsHeapCentral* core, MemoryStats* stats) {
  void* span = Read<size_t>(core) == 0 ? nullptr
    : Read<void*>(Read<void*>(core, 8));
  size_t allocated = 0;
  size_t free = 0;
  size_t metadata = 0;
  size_t maximum = 0;
  size_t run = 0;
  size_t free_spans = 0;
  size_t free_runs = 0;

  while (span != nullptr) {
    size_t bytes = Read<size_t>(span, 0x20) << 12;
    unsigned flag = Read<unsigned char>(span, 0x13);

    if ((flag | 2) == 3) {
      maximum = maximum < run ? run : maximum;
      run = 0;

      if (flag == 3) {
        metadata += bytes;
      }
      else if (Read<unsigned char>(span, 0x12) != 0
               && Read<void*>(span, 0x28) != nullptr) {
        size_t unused = SmallFree(span);
        allocated += bytes - unused;
        free += unused;
      }
      else {
        allocated += bytes;
      }
    }
    else {
      ++free_spans;
      free_runs += run == 0;
      free += bytes;
      run += bytes;
    }

    span = FindSpan(core, Read<uintptr_t>(span, 0x18) + bytes);
  }

  bool needs_metadata = FindMetadata(core) == nullptr;
  stats->allocated = allocated;
  stats->free = free;
  maximum = maximum < run ? run : maximum;

  if (needs_metadata && free_runs < 2
      && (allocated != 0 || free_spans != 1) && maximum >= 4096) {
    maximum -= 4096;
  }

  stats->metadata = metadata;
  stats->largest = maximum < 3 * 4096 ? 0 : maximum;
}

}
