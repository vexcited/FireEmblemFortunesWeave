#include "nn/nlibsdk/heap/tls_heap_pages.hpp"

#include <stdint.h>

namespace nn::nlibsdk::heap::page_detail {

bool DestroySpanPageIfEmpty(TlsHeapCentral*, void*, bool)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral23DestroySpanPageIfEmpty_"
      "EPNS1_8SpanPageEb");
void MergeIntoFreeList(TlsHeapCentral*, void**)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral18MergeIntoFreeList_ERPNS1_4SpanE");
int AllocatePhysical(TlsHeapCentral*, void*, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral9AllocPhy_EPvm");
void* AllocateSpanPage(TlsHeapCentral*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral14AllocSpanPage_Ev");
void DebugBreak() asm("nnmem_nlib_debug_break");
void* FindByte(const void*, int, size_t) asm("nnmem_nlib_memchr");
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

static void Remove(void* item) {
  void* next = Read<void*>(item);
  void* previous = Read<void*>(item, 8);

  if (next != nullptr) {
    Write(next, 8, previous);
  }

  if (previous != nullptr) {
    Write(previous, 0, Read<void*>(item));
  }

  Write<uintptr_t>(item, 0, 0);
  Write<uintptr_t>(item, 8, 0);
}

static void Insert(void* slot, void* item) {
  Write(item, 0, Read<void*>(slot));
  Write(item, 8, slot);
  void* next = Read<void*>(slot);

  if (next != nullptr) {
    Write(next, 8, item);
  }

  Write(slot, 0, item);
}

static unsigned CountLeadingZeros(uint64_t value) {
  return value == 0 ? 64 : __builtin_clzll(value);
}

static void DetachFree(TlsHeapCentral* core, void* span, size_t count) {
  size_t bucket = (count < 256 ? count : 256) - 1;
  Remove(span);

  if (Read<void*>(core, 0x58 + bucket * 8) == nullptr) {
    size_t offset = 0x858 + (bucket >> 6) * 8;
    uint64_t bits = Read<uint64_t>(core, offset);
    Write(core, offset, bits & ~(uint64_t{1} << (bucket & 63)));
  }
}

static void AttachFree(TlsHeapCentral* core, void* span, size_t count) {
  size_t bucket = (count < 256 ? count : 256) - 1;
  Insert(Bytes(core) + 0x58 + bucket * 8, span);
  size_t offset = 0x858 + (bucket >> 6) * 8;
  uint64_t bits = Read<uint64_t>(core, offset);
  Write(core, offset, bits | (uint64_t{1} << (bucket & 63)));
}

static void ResizeSpan(TlsHeapCentral* core, void* span, uintptr_t begin,
                       size_t count) {
  uintptr_t old_begin = Read<uintptr_t>(span, 0x18);
  size_t page = (old_begin - reinterpret_cast<uintptr_t>(core)) >> 12;
  void* mapping = Read<void*>(core, 8);
  size_t old_count = Read<size_t>(span, 0x20);

  if (old_begin == begin) {
    if (old_count != 1) {
      Write<uintptr_t>(mapping, (page + old_count - 1) * 8, 0);
    }

    Write(mapping, (page + count - 1) * 8, span);
  }
  else {
    Write<uintptr_t>(mapping, page * 8, 0);
    Write<uintptr_t>(mapping, (page + old_count - 1) * 8, 0);
    page = (begin - reinterpret_cast<uintptr_t>(core)) >> 12;
    mapping = Read<void*>(core, 8);
    Write(mapping, page * 8, span);
    Write(mapping, (page + count - 1) * 8, span);
    Write(span, 0x18, begin);
  }

  Write(span, 0x20, count);
}

static void MapSpan(TlsHeapCentral* core, void* span) {
  size_t page = (Read<uintptr_t>(span, 0x18)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
  Write<unsigned char>(span, 0x12, 0);
  void* mapping = Read<void*>(core, 8);
  Write(mapping, page * 8, span);
  Write(mapping, (page + Read<size_t>(span, 0x20) - 1) * 8, span);
}

static void DescribeFree(void* span, uintptr_t begin, size_t count) {
  Write(span, 0x18, begin);
  Write<uint32_t>(span, 0x14, 0);
  Write(span, 0x20, count);
  Write<uint16_t>(span, 0x12, 0x200);
}

static void MarkAllocated(void* span) {
  Write<uint32_t>(span, 0x14, 0);
  Write<uint32_t>(span, 0x28, 0);
  Write<unsigned char>(span, 0x13, 1);
}

static void ReclaimForLargeRequest(TlsHeapCentral* core, size_t count) {
  if (count >= (Read<size_t>(core) >> 2)) {
    void* slot = Bytes(core) + 0x48;
    void* cursor = slot;

    while ((cursor = Read<void*>(cursor)) != nullptr) {
      if (!DestroySpanPageIfEmpty(core, cursor, true)) {
        continue;
      }

      cursor = slot;
      void* candidate = nullptr;

      for (void* span = Read<void*>(core, 0x850); span != nullptr;
           span = Read<void*>(span)) {
        if (Read<size_t>(span, 0x20) == ~size_t{0}
            && (candidate == nullptr || Read<uintptr_t>(span, 0x18)
              > Read<uintptr_t>(candidate, 0x18))) {
          candidate = span;
        }
      }

      if (candidate != nullptr) {
        break;
      }
    }
  }

}

static void* AcquireSpan(TlsHeapCentral* core) {
  void* page = Read<void*>(core, 0x48);

  while (page != nullptr) {
    if (Read<unsigned char>(page, 0x1a) != 1
        && Read<uint64_t>(page, 0x10) != ~uint64_t{0}) {
      break;
    }

    page = Read<void*>(page);
  }

  if (page == nullptr) {
    page = AllocateSpanPage(core);

    if (page == nullptr) {
      return nullptr;
    }
  }

  return pages::AllocSpanFromSpanPage(core, page);
}

static void ReleaseSpan(TlsHeapCentral* core, void* span) {
  void* page = reinterpret_cast<void*>(
    reinterpret_cast<uintptr_t>(span) & ~uintptr_t{0xfff});
  pages::FreeSpanToSpanPage(core, span, page);
}

}

namespace nn::nlibsdk::heap::pages {

using namespace page_detail;

void FreeSpanToSpanPage(TlsHeapCentral* core, void* span, void* page) {
  uintptr_t offset = reinterpret_cast<uintptr_t>(span)
    - reinterpret_cast<uintptr_t>(page) - 0x90;
  size_t index = (offset >> 4) * uint64_t{0x6db6db6db6db6db7};
  Write<unsigned char>(span, 0x13, 0);
  uint64_t bit = uint64_t{1} << (63 - (index & 63));
  Write(page, 0x10, Read<uint64_t>(page, 0x10) & ~bit);
  uint16_t count = Read<uint16_t>(page, 0x18);
  Write<uint16_t>(page, 0x18, count + 1);

  if (count == 0) {
    Remove(page);
    Insert(Bytes(core) + 0x48, page);
  }
}

void* AllocSpanFromSpanPage(TlsHeapCentral* core, void* page) {
  uint64_t bits = Read<uint64_t>(page, 0x10);
  unsigned index = CountLeadingZeros(~bits);
  Write(page, 0x10, bits | (uint64_t{1} << (63 - (index & 63))));
  void* span = Bytes(page) + 0x90 + size_t{index} * 0x70;
  Write<uintptr_t>(span, 0, 0);
  Write<uintptr_t>(span, 8, 0);
  Write<uint32_t>(span, 0x10, 0);
  uint16_t count = Read<uint16_t>(page, 0x18) - 1;
  Write(page, 0x18, count);

  if (count == 0) {
    Remove(page);
    Insert(Bytes(core) + 0x50, page);
  }

  return span;
}

void FreePages(TlsHeapCentral* core, void* span) {
  if (Read<unsigned char>(span, 0x13) == 2) {
    DebugBreak();
    return;
  }

  Write<unsigned char>(span, 0x13, 2);

  if (Read<unsigned char>(core, 0x2c) != 1) {
    MergeIntoFreeList(core, &span);
    return;
  }

  uintptr_t begin = Read<uintptr_t>(span, 0x18);
  uintptr_t end = begin + (Read<size_t>(span, 0x20) << 12);
  uintptr_t first = (begin + 0xfff) & ~uintptr_t{0xfff};
  uintptr_t last = end & ~uintptr_t{0xfff};
  MergeIntoFreeList(core, &span);
  uintptr_t merged_begin = Read<uintptr_t>(span, 0x18);
  uintptr_t merged_end = merged_begin + (Read<size_t>(span, 0x20) << 12);

  if (merged_begin + 0x1000 <= first && first != begin) {
    first -= 0x1000;
  }

  if ((end & 0xfff) == 0) {
    last = end;
  }
  else if (last + 0x1000 <= merged_end) {
    last += 0x1000;
  }

  uintptr_t rounded_first = (first + 0xfff) & ~uintptr_t{0xfff};
  uintptr_t rounded_last = last & ~uintptr_t{0xfff};

  if (first >= last || rounded_last <= rounded_first) {
    return;
  }

  uintptr_t base = reinterpret_cast<uintptr_t>(core) & ~uintptr_t{0xff8};
  size_t first_page = (rounded_first - base) >> 12;
  size_t end_page = (rounded_last - base) >> 12;
  void* mapping = Read<void*>(core, 0x18);

  if (first_page + 1 == end_page) {
    if (Read<unsigned char>(mapping, first_page) != 0) {
      Write<unsigned char>(mapping, first_page, 2);
    }

    return;
  }

  void* first_mapped = FindByte(Bytes(mapping) + first_page, 1,
                                end_page - first_page);

  if (first_mapped == nullptr) {
    return;
  }

  first_page = Bytes(first_mapped) - Bytes(mapping);
  void* last_mapped = FindLastByte(first_mapped, 1, end_page - first_page);

  if (last_mapped != nullptr) {
    end_page = Bytes(last_mapped) - Bytes(mapping) + 1;
  }

  __builtin_memset(first_mapped, 2, end_page - first_page);
}

void* SearchFreeSpan(TlsHeapCentral* core, size_t count) {
  if (count >= 256) {
    void* candidate = nullptr;

    for (void* span = Read<void*>(core, 0x850); span != nullptr;
         span = Read<void*>(span)) {
      size_t pages = Read<size_t>(span, 0x20);

      if (pages < count) {
        continue;
      }

      if (candidate == nullptr || pages < Read<size_t>(candidate, 0x20)
          || (pages == Read<size_t>(candidate, 0x20)
              && Read<uintptr_t>(span, 0x18)
                > Read<uintptr_t>(candidate, 0x18))) {
        candidate = span;
      }
    }

    return candidate;
  }

  size_t index = count - 1;

  if (index > 255) {
    return nullptr;
  }

  size_t word = index >> 6;
  uint64_t bits = Read<uint64_t>(core, 0x858 + word * 8)
    & (~uint64_t{0} << (index & 63));

  while (bits == 0) {
    if (++word == 4) {
      return nullptr;
    }

    bits = Read<uint64_t>(core, 0x858 + word * 8);
  }

  index = __builtin_ctzll(bits) | (word << 6);
  void* candidate = Read<void*>(core, 0x58 + index * 8);

  if (index != 255) {
    if (candidate == nullptr) {
      DebugBreak();
    }

    return candidate;
  }

  for (void* span = candidate; span != nullptr; span = Read<void*>(span)) {
    size_t pages = Read<size_t>(span, 0x20);
    size_t selected_pages = Read<size_t>(candidate, 0x20);

    if (pages < selected_pages
        || (pages == selected_pages && Read<uintptr_t>(span, 0x18)
          < Read<uintptr_t>(candidate, 0x18))) {
      candidate = span;
    }
  }

  return candidate;
}

void* MakeFreeSpan(TlsHeapCentral* core, size_t count) {
  void* cursor = Bytes(core) + 0x48;

  while ((cursor = Read<void*>(cursor)) != nullptr) {
    if (DestroySpanPageIfEmpty(core, cursor, true)) {
      void* span = SearchFreeSpan(core, count);

      if (span != nullptr) {
        return span;
      }

      cursor = Bytes(core) + 0x48;
    }
  }

  return nullptr;
}

void* AllocPages(TlsHeapCentral* core, size_t count) {
  ReclaimForLargeRequest(core, count);

  void* span = SearchFreeSpan(core, count);

  if (span == nullptr) {
    span = MakeFreeSpan(core, count);

    if (span == nullptr) {
      return nullptr;
    }
  }

  size_t original_count = Read<size_t>(span, 0x20);

  if (original_count == count) {
    if (Read<unsigned char>(core, 0x2c) == 1) {
      if (AllocatePhysical(core, Read<void*>(span, 0x18), count << 12)) {
        return nullptr;
      }

      count = Read<size_t>(span, 0x20);
    }

    DetachFree(core, span, count);
    MarkAllocated(span);
    return span;
  }

  uintptr_t original_begin = Read<uintptr_t>(span, 0x18);
  void* spare = AcquireSpan(core);

  if (spare == nullptr) {
    return nullptr;
  }

  size_t page = (original_begin - reinterpret_cast<uintptr_t>(core)) >> 12;
  span = nullptr;

  if (page < Read<size_t>(core)) {
    span = Read<void*>(Read<void*>(core, 8), page * 8);
  }

  if (span != nullptr && Read<size_t>(span, 0x20) == original_count) {
    return SplitSpan(core, span, count, spare);
  }

  span = SearchFreeSpan(core, count);

  if (span == nullptr) {
    ReleaseSpan(core, spare);
    return nullptr;
  }

  if (Read<size_t>(span, 0x20) != count) {
    return SplitSpan(core, span, count, spare);
  }

  if (Read<unsigned char>(core, 0x2c) == 1) {
    if (AllocatePhysical(core, Read<void*>(span, 0x18), count << 12)) {
      return nullptr;
    }

    count = Read<size_t>(span, 0x20);
  }

  DetachFree(core, span, count);
  MarkAllocated(span);
  ReleaseSpan(core, spare);
  return span;
}

void* SplitSpan(TlsHeapCentral* core, void* span, size_t count, void* spare) {
  uintptr_t original_begin = Read<uintptr_t>(span, 0x18);
  size_t original_count = Read<size_t>(span, 0x20);
  size_t remaining = original_count - count;
  uintptr_t free_begin = original_begin;
  uintptr_t allocated_begin = original_begin;

  if (count <= 255) {
    free_begin += count << 12;
  }
  else {
    allocated_begin += remaining << 12;
  }

  if (remaining <= 255) {
    DetachFree(core, span, original_count);
  }

  ResizeSpan(core, span, free_begin, remaining);

  if (remaining <= 255) {
    AttachFree(core, span, remaining);
  }

  Write(spare, 0x18, allocated_begin);
  Write(spare, 0x20, count);
  Write<uint32_t>(spare, 0x14, 0);
  Write<uint32_t>(spare, 0x28, 0);
  Write<uint16_t>(spare, 0x12, 0x100);
  Write<uint32_t>(span, 0x28, 0);

  if (Read<unsigned char>(core, 0x2c) == 1
      && AllocatePhysical(core, Read<void*>(spare, 0x18),
                          Read<size_t>(spare, 0x20) << 12)) {
    if (remaining <= 255) {
      DetachFree(core, span, Read<size_t>(span, 0x20));
    }

    ResizeSpan(core, span, original_begin, original_count);

    if (remaining <= 255) {
      AttachFree(core, span, original_count);
    }

    ReleaseSpan(core, spare);
    return nullptr;
  }

  size_t page = (Read<uintptr_t>(spare, 0x18)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
  Write<unsigned char>(spare, 0x12, 0);
  void* mapping = Read<void*>(core, 8);
  Write(mapping, page * 8, spare);
  Write(mapping, (page + Read<size_t>(spare, 0x20) - 1) * 8, spare);
  return spare;
}

void* AllocPagesWithBigAlign(TlsHeapCentral* core, size_t count,
                            size_t alignment) {
  ReclaimForLargeRequest(core, count);
  void* prefix = AcquireSpan(core);

  if (prefix == nullptr) {
    return nullptr;
  }

  void* suffix = AcquireSpan(core);

  if (suffix == nullptr) {
    ReleaseSpan(core, prefix);
    return nullptr;
  }

  size_t required = count + (alignment >> 12) - 1;
  void* span = SearchFreeSpan(core, required);

  if (span == nullptr) {
    span = MakeFreeSpan(core, required);
  }

  if (span == nullptr) {
    ReleaseSpan(core, prefix);
    ReleaseSpan(core, suffix);
    return nullptr;
  }

  uintptr_t aligned = (Read<uintptr_t>(span, 0x18) + alignment - 1)
    & -uintptr_t{alignment};

  if (Read<unsigned char>(core, 0x2c) == 1
      && AllocatePhysical(core, reinterpret_cast<void*>(aligned),
                          count << 12)) {
    ReleaseSpan(core, prefix);
    ReleaseSpan(core, suffix);
    return nullptr;
  }

  uintptr_t begin = Read<uintptr_t>(span, 0x18);

  if (aligned == begin) {
    ReleaseSpan(core, prefix);
    DescribeFree(suffix, Read<uintptr_t>(span, 0x18) + (count << 12),
                 Read<size_t>(span, 0x20) - count);
    DetachFree(core, span, Read<size_t>(span, 0x20));
    Write<uint32_t>(span, 0x28, 0);
    Write<unsigned char>(span, 0x13, 1);
    ResizeSpan(core, span, aligned, count);
    MapSpan(core, suffix);
    MergeIntoFreeList(core, &suffix);
    return span;
  }

  DescribeFree(prefix, begin,
               (aligned - Read<uintptr_t>(span, 0x18)) >> 12);
  size_t remaining = Read<size_t>(span, 0x20)
    - Read<size_t>(prefix, 0x20) - count;

  if (remaining == 0) {
    ReleaseSpan(core, suffix);
    DetachFree(core, span, Read<size_t>(span, 0x20));
    Write<uint32_t>(span, 0x28, 0);
    Write<unsigned char>(span, 0x13, 1);
    ResizeSpan(core, span, aligned, count);
    MapSpan(core, prefix);
    MergeIntoFreeList(core, &prefix);
    return span;
  }

  DescribeFree(suffix, aligned + (count << 12), remaining);
  DetachFree(core, span, Read<size_t>(span, 0x20));
  Write<uint32_t>(span, 0x28, 0);
  Write<unsigned char>(span, 0x13, 1);
  ResizeSpan(core, span, aligned, count);
  MapSpan(core, prefix);
  MapSpan(core, suffix);
  MergeIntoFreeList(core, &prefix);
  MergeIntoFreeList(core, &suffix);
  return span;
}

}
