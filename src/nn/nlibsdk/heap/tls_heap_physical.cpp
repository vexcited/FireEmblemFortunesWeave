#include "nn/nlibsdk/heap/tls_heap_physical.hpp"

#include <stdint.h>

#include "nn/nlibsdk/heap/tls_heap_pages.hpp"

namespace nn::nlibsdk::heap::physical_detail {

int InitializeMutex(void*, const void*) asm("pthread_mutex_init");
int DestroyMutex(void*) asm("pthread_mutex_destroy");
int AllocatePhysical(void*, size_t, int) asm("nnmem_nlib_physical_alloc");
void FreePhysical(void*, size_t) asm("nnmem_nlib_physical_free");
void* FindByte(const void*, int, size_t) asm("nnmem_nlib_memchr");
void* FindDifferentByte(const void*, int, size_t) asm("nnmem_nlib_memchr_not");
void* FindLastByte(const void*, int, size_t) asm("nnmem_nlib_memrchr");

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

static uintptr_t PhysicalBase(const void* core) {
  return reinterpret_cast<uintptr_t>(core) & ~uintptr_t{0xff8};
}

static bool ReleasePending(TlsHeapCentral* core, size_t count,
                            uintptr_t base) {
  count &= 0xfffffffffffff;

  if (count == 0) {
    return false;
  }

  unsigned char* map = Read<unsigned char*>(core, 0x18);
  void* found = FindByte(map, 2, count);

  if (found == nullptr) {
    return false;
  }

  while (true) {
    size_t first = Bytes(found) - map;
    void* different = FindDifferentByte(found, 2, count - first);
    size_t end = different == nullptr ? count : Bytes(different) - map;
    FreePhysical(reinterpret_cast<void*>(base + (first << 12)),
                 (end - first) << 12);
    __builtin_memset(Read<unsigned char*>(core, 0x18) + first, 0,
                     end - first);

    if (end == count) {
      break;
    }

    map = Read<unsigned char*>(core, 0x18);
    found = FindByte(map + end, 2, count - end);

    if (found == nullptr) {
      break;
    }
  }

  return true;
}

static void MapSpan(TlsHeapCentral* core, void* span) {
  size_t first = (Read<uintptr_t>(span, 0x18)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
  void* mapping = Read<void*>(core, 8);
  Write(mapping, first * 8, span);
  Write(mapping, (first + Read<size_t>(span, 0x20) - 1) * 8, span);
}

static void DescribeSpan(void* span, uintptr_t begin, size_t count,
                         unsigned char flag) {
  Write<uintptr_t>(span, 0x28, 0);
  Write<uint16_t>(span, 0x10, 0);
  Write<uint32_t>(span, 0x14, 0);
  Write<unsigned char>(span, 0x12, 0);
  Write(span, 0x18, begin);
  Write(span, 0x20, count);
  Write(span, 0x13, flag);
}

}

namespace nn::nlibsdk::heap::physical {

using namespace physical_detail;

void Construct(TlsHeapCentral* core) {
  Write<unsigned char>(core, 0x40, 0);
  Write<size_t>(core, 0, 0);
}

void Destroy(TlsHeapCentral* core) {
  if (Read<size_t>(core) != 0) {
    DestroyMutex(Bytes(core) + 0x38);
  }
}

int Allocate(TlsHeapCentral* core, void* address, size_t size) {
  uintptr_t begin = reinterpret_cast<uintptr_t>(address) & ~uintptr_t{0xfff};
  uintptr_t end = (reinterpret_cast<uintptr_t>(address) + size + 0xfff)
    & ~uintptr_t{0xfff};
  size_t count = Read<size_t>(core);
  uintptr_t base = PhysicalBase(core);
  unsigned char* map = Read<unsigned char*>(core, 0x18);
  size_t first_page = (begin - base) >> 12;
  size_t end_page = (end - base) >> 12;

  if (first_page + 1 == end_page) {
    if (map[first_page] == 1) {
      return 0;
    }

    if (map[first_page] == 2) {
      map[first_page] = 1;
      return 0;
    }
  }
  else if (FindByte(map + first_page, 0, end_page - first_page) == nullptr) {
    __builtin_memset(map + first_page, 1, end_page - first_page);
    return 0;
  }

  uintptr_t core_begin = reinterpret_cast<uintptr_t>(core);
  uintptr_t core_end = core_begin + (count << 12);
  uintptr_t physical_begin = begin >= core_begin ? begin : core_begin;
  uintptr_t physical_end = end <= core_end ? end : core_end;
  size_t physical_size = physical_end - physical_begin;
  int result = AllocatePhysical(reinterpret_cast<void*>(physical_begin),
                                physical_size, 3);

  if (result != 0) {
    if (!ReleasePending(core, count, base)) {
      return 12;
    }

    result = AllocatePhysical(reinterpret_cast<void*>(physical_begin),
                              physical_size, 3);

    if (result != 0) {
      return result;
    }
  }

  __builtin_memset(Read<unsigned char*>(core, 0x18) + first_page, 1,
                   end_page - first_page);
  return 0;
}

int Free(TlsHeapCentral* core, void* address, size_t size) {
  uintptr_t begin = (reinterpret_cast<uintptr_t>(address) + 0xfff)
    & ~uintptr_t{0xfff};
  uintptr_t end = (reinterpret_cast<uintptr_t>(address) + size)
    & ~uintptr_t{0xfff};

  if (end <= begin) {
    return 0;
  }

  unsigned char* map = Read<unsigned char*>(core, 0x18);
  uintptr_t base = PhysicalBase(core);
  size_t first_page = (begin - base) >> 12;
  size_t end_page = (end - base) >> 12;

  if (first_page + 1 == end_page) {
    if (map[first_page] != 0) {
      map[first_page] = 2;
    }

    return 0;
  }

  void* first = FindByte(map + first_page, 1, end_page - first_page);

  if (first != nullptr) {
    first_page = Bytes(first) - map;
    void* last = FindLastByte(first, 1, end_page - first_page);

    if (last != nullptr) {
      end_page = Bytes(last) - map + 1;
    }

    __builtin_memset(first, 2, end_page - first_page);
  }

  return 0;
}

ReleasedMemory TryFree(TlsHeapCentral* core, const void* start) {
  if (Read<unsigned char>(core, 0x2c) != 1) {
    return {0, nullptr};
  }

  uintptr_t base = PhysicalBase(core);
  size_t count = Read<size_t>(core) & size_t{0xfffffffffffff};
  unsigned char* map = Read<unsigned char*>(core, 0x18);
  uintptr_t begin = start == nullptr ? base
    : reinterpret_cast<uintptr_t>(start);
  size_t index = (begin - base) >> 12;
  void* first = FindByte(map + index, 2, count - index);

  if (first == nullptr) {
    return {0, nullptr};
  }

  size_t first_page = Bytes(first) - map;
  void* live = FindByte(first, 1, count - first_page);
  unsigned char* end = live == nullptr ? map + count : Bytes(live);
  void* last = FindLastByte(first, 2, end - Bytes(first));
  size_t end_page = Bytes(last) + 1 - map;
  size_t span = end_page - first_page;
  FreePhysical(reinterpret_cast<void*>(base + (first_page << 12)),
               span << 12);
  map = Read<unsigned char*>(core, 0x18) + first_page;
  size_t freed = 0;

  for (size_t i = 0; i < span; ++i) {
    if (map[i] == 2) {
      ++freed;
    }
  }

  __builtin_memset(map, 0, span);
  return {freed << 12, reinterpret_cast<void*>(base + (end_page << 12))};
}

int Initialize(TlsHeapCentral* core, void* address, size_t size,
               bool physical, bool zero_allocation) {
  int result = InitializeMutex(Bytes(core) + 0x38, nullptr);

  if (result != 0) {
    return result;
  }

  uintptr_t begin = reinterpret_cast<uintptr_t>(address);
  size_t count = size >> 12;
  void* mapping = Bytes(address) + 0xa40;
  void* classes = Bytes(mapping) + count * 8;
  uintptr_t metadata_end = reinterpret_cast<uintptr_t>(classes) + count;
  __builtin_memset(Bytes(core) + 0x48, 0, 0x9f8);
  Write(core, 0, count);
  Write(core, 8, mapping);
  Write(core, 0x10, classes);
  uintptr_t page_address;

  if (physical) {
    Write(core, 0x18, reinterpret_cast<void*>(metadata_end));
    size_t physical_count = (((begin + size + 0xfff) & ~uintptr_t{0xfff})
      - (begin & ~uintptr_t{0xfff})) >> 12;
    page_address = (metadata_end + physical_count + 0xfff)
      & ~uintptr_t{0xfff};
    size_t needed = ((page_address + 0x1fff) & ~uintptr_t{0xfff}) - begin;
    result = AllocatePhysical(address, needed < size ? needed : size, 3);

    if (result != 0) {
      DestroyMutex(Bytes(core) + 0x38);
      Write<size_t>(core, 0, 0);
      return result;
    }

    __builtin_memset(Read<void*>(core, 0x18), 0, physical_count);
    size_t mapped_count = ((page_address + 0x1fff) >> 12) - (begin >> 12);
    __builtin_memset(Read<void*>(core, 0x18), 1, mapped_count);
  }
  else {
    Write<uintptr_t>(core, 0x18, 0);
    page_address = (metadata_end + 0xfff) & ~uintptr_t{0xfff};
  }

  __builtin_memset(mapping, 0, count * 8);
  __builtin_memset(Read<void*>(core, 0x10), 0, count);
  void* page = reinterpret_cast<void*>(page_address);
  Write<unsigned char>(page, 0x1a, 0);
  Write<uintptr_t>(page, 0, 0);
  __builtin_memset(Bytes(page) + 0x28, 0, 0x28);
  Write<uint16_t>(page, 0x18, 35);
  Write<uintptr_t>(page, 0x20, 0);
  Write<uintptr_t>(page, 8, 0);
  Write<uint64_t>(page, 0x10, 0x1fffffff);
  Write(page, 0, Read<void*>(core, 0x48));
  Write(page, 8, Bytes(core) + 0x48);

  if (Read<void*>(core, 0x48) != nullptr) {
    Write(Read<void*>(core, 0x48), 8, page);
  }

  Write(core, 0x48, page);
  uintptr_t free_begin = page_address + 0x1000;

  if (free_begin >= begin + size) {
    return 22;
  }

  void* free_span = pages::AllocSpanFromSpanPage(core, page);
  void* reserved_span = pages::AllocSpanFromSpanPage(core, page);
  void* page_span = Bytes(page) + 0x20;
  Write<unsigned char>(page, 0x1a, 1);
  DescribeSpan(free_span, free_begin, (begin + size - free_begin) >> 12, 2);
  DescribeSpan(page_span, page_address, 1, 3);
  DescribeSpan(reserved_span, begin, (page_address - begin) >> 12, 3);
  MapSpan(core, reserved_span);
  MapSpan(core, page_span);
  MapSpan(core, free_span);
  size_t free_count = Read<size_t>(free_span, 0x20);
  size_t bucket = (free_count < 256 ? free_count : 256) - 1;
  void* slot = Bytes(core) + 0x58 + bucket * 8;
  Write(free_span, 0, Read<void*>(slot));
  Write(free_span, 8, slot);

  if (Read<void*>(slot) != nullptr) {
    Write(Read<void*>(slot), 8, free_span);
  }

  Write(slot, 0, free_span);
  Write<unsigned char>(core, 0x2c, physical);
  size_t bits_offset = 0x858 + (bucket >> 6) * 8;
  Write(core, bits_offset, Read<uint64_t>(core, bits_offset)
    | (uint64_t{1} << (bucket & 63)));
  uint64_t eighth = Read<size_t>(core) << 9;
  uint32_t limit = (eighth & 0x1fffffffffe00000) == 0
    ? static_cast<uint32_t>(eighth) : 0x200000;
  Write<uint32_t>(core, 0x20, 1);
  Write(core, 0x24, limit);
  Write(core, 0x28, limit);
  Write<uintptr_t>(core, 0x30, zero_allocation ? 0x1000 : 0);
  return 0;
}

}

__asm__(
  ".globl _ZN2nn7nlibsdk4heap14TlsHeapCentralC2Ev\n"
  ".set _ZN2nn7nlibsdk4heap14TlsHeapCentralC2Ev, "
  "_ZN2nn7nlibsdk4heap14TlsHeapCentralC1Ev\n"
  ".globl _ZN2nn7nlibsdk4heap14TlsHeapCentralD2Ev\n"
  ".set _ZN2nn7nlibsdk4heap14TlsHeapCentralD2Ev, "
  "_ZN2nn7nlibsdk4heap14TlsHeapCentralD1Ev\n");
