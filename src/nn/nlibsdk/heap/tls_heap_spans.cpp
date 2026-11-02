#include "nn/nlibsdk/heap/tls_heap_spans.hpp"

#include <stdint.h>

#include "nn/nlibsdk/heap/tls_heap_pages.hpp"

namespace nn::nlibsdk::heap::span_detail {

int AllocatePhysical(TlsHeapCentral*, void*, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral9AllocPhy_EPvm");

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

static void MapSpan(TlsHeapCentral* core, void* span) {
  size_t page = (Read<uintptr_t>(span, 0x18)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
  void* mapping = Read<void*>(core, 8);
  size_t count = Read<size_t>(span, 0x20);

  if (Read<unsigned char>(span, 0x12) != 0) {
    for (size_t index = 0; index < count; ++index) {
      Write(mapping, (page + index) * 8, span);
    }
  }
  else {
    Write(mapping, page * 8, span);
    Write(mapping, (page + count - 1) * 8, span);
  }
}

static void MoveSpan(TlsHeapCentral* core, void* destination, void* source) {
  __builtin_memcpy(destination, source, 0x70);
  Write<unsigned char>(source, 0x13, 0);
  void* next = Read<void*>(source);

  if (next == nullptr) {
    Write<uintptr_t>(destination, 0, 0);
  }
  else {
    Write(destination, 0, next);
    Write(Read<void*>(source), 8, destination);
    Write<uintptr_t>(source, 0, 0);
  }

  void* previous = Read<void*>(source, 8);

  if (previous == nullptr) {
    Write<uintptr_t>(destination, 8, 0);
  }
  else {
    Write(destination, 8, previous);
    Write(previous, 0, destination);
    Write<uintptr_t>(source, 8, 0);
  }

  MapSpan(core, destination);
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

static void* ForeignFreeSpan(TlsHeapCentral* core, void* page) {
  for (size_t word = 0; word < 4; ++word) {
    uint64_t bits = Read<uint64_t>(core, 0x858 + word * 8);

    while (bits != 0) {
      size_t bucket = __builtin_ctzll(bits) | (word << 6);

      for (void* span = Read<void*>(core, 0x58 + bucket * 8);
           span != nullptr; span = Read<void*>(span)) {
        uintptr_t owner = reinterpret_cast<uintptr_t>(span)
          & ~uintptr_t{0xfff};

        if (owner != reinterpret_cast<uintptr_t>(page)) {
          return span;
        }
      }

      bits &= bits - 1;
    }
  }

  return nullptr;
}

static void ReleaseSpan(TlsHeapCentral* core, void* span) {
  void* page = reinterpret_cast<void*>(
    reinterpret_cast<uintptr_t>(span) & ~uintptr_t{0xfff});
  pages::FreeSpanToSpanPage(core, span, page);
}

static void Absorb(TlsHeapCentral* core, void* destination, void* source,
                   uintptr_t begin) {
  size_t count = Read<size_t>(destination, 0x20)
    + Read<size_t>(source, 0x20);
  size_t page = (Read<uintptr_t>(source, 0x18)
    - reinterpret_cast<uintptr_t>(core)) >> 12;
  void* mapping = Read<void*>(core, 8);
  Write<uintptr_t>(mapping, page * 8, 0);
  Write<uintptr_t>(mapping, (page + Read<size_t>(source, 0x20) - 1) * 8, 0);
  ReleaseSpan(core, source);
  ResizeSpan(core, destination, begin, count);
}

}

namespace nn::nlibsdk::heap::spans {

using namespace span_detail;

bool DestroySpanPageIfEmpty(TlsHeapCentral* core, void* page, bool release) {
  bool moved = false;

  while (true) {
    uint16_t available = Read<uint16_t>(page, 0x18);

    if (Read<unsigned char>(page, 0x1a) == 1) {
      if (release ? available == 0 : available < 17) {
        return moved;
      }

      void* span = ForeignFreeSpan(core, page);

      if (span == nullptr) {
        return moved;
      }

      void* replacement = pages::AllocSpanFromSpanPage(core, page);
      MoveSpan(core, replacement, span);
      ReleaseSpan(core, span);
      page = reinterpret_cast<void*>(
        reinterpret_cast<uintptr_t>(span) & ~uintptr_t{0xfff});
      moved = true;
      continue;
    }

    if (available != 35 || (Read<void*>(page) == nullptr
                           && Read<void*>(page, 8) == nullptr)) {
      return moved;
    }

    void* mapping = Read<void*>(core, 8);
    void* first = Read<void*>(mapping);
    uintptr_t end = Read<uintptr_t>(first, 0x18)
      + (Read<size_t>(first, 0x20) << 12);
    size_t index = (end - reinterpret_cast<uintptr_t>(core)) >> 12;
    uintptr_t preferred = Read<uintptr_t>(mapping, index * 8)
      & ~uintptr_t{0xfff};
    void* destination_page = reinterpret_cast<void*>(preferred);
    uint16_t count = Read<uint16_t>(destination_page, 0x18);

    if (count <= 16) {
      void* candidate = Read<void*>(core, 0x48);

      while (candidate != nullptr) {
        if (candidate != page && Read<uint16_t>(candidate, 0x18) != 0) {
          count = Read<uint16_t>(candidate, 0x18);
          destination_page = candidate;
          break;
        }

        candidate = Read<void*>(candidate);
      }

      if (candidate == nullptr && count == 0) {
        return moved;
      }
    }

    void* replacement = pages::AllocSpanFromSpanPage(core, destination_page);
    MoveSpan(core, replacement, Bytes(page) + 0x20);
    Remove(page);
    pages::FreePages(core, replacement);
    return true;
  }
}

void MergeIntoFreeList(TlsHeapCentral* core, void** slot) {
  void* span = *slot;
  uintptr_t begin = Read<uintptr_t>(span, 0x18);
  uintptr_t base = reinterpret_cast<uintptr_t>(core);
  size_t limit = Read<size_t>(core);
  size_t previous_page = (begin - base - 1) >> 12;
  size_t following_page = (begin + (Read<size_t>(span, 0x20) << 12)
    - base) >> 12;
  void* mapping = Read<void*>(core, 8);
  void* previous = previous_page < limit
    ? Read<void*>(mapping, previous_page * 8) : nullptr;
  void* following = following_page < limit
    ? Read<void*>(mapping, following_page * 8) : nullptr;
  bool merge_previous = previous != nullptr
    && Read<unsigned char>(previous, 0x13) == 2;
  bool merge_following = following != nullptr
    && Read<unsigned char>(following, 0x13) == 2;

  if (merge_previous) {
    size_t previous_count = Read<size_t>(previous, 0x20);

    if (merge_following) {
      size_t following_count = Read<size_t>(following, 0x20);

      if (previous_count < 256) {
        DetachFree(core, previous, previous_count);

        if (following_count < 256) {
          DetachFree(core, following, Read<size_t>(following, 0x20));
          Absorb(core, previous, *slot, Read<uintptr_t>(previous, 0x18));
          Absorb(core, previous, following,
                 Read<uintptr_t>(previous, 0x18));
          AttachFree(core, previous, Read<size_t>(previous, 0x20));
          *slot = previous;
        }
        else {
          Absorb(core, previous, *slot, Read<uintptr_t>(previous, 0x18));
          Absorb(core, following, previous,
                 Read<uintptr_t>(previous, 0x18));
          *slot = following;
        }
      }
      else {
        DetachFree(core, following, following_count);
        Absorb(core, previous, *slot, Read<uintptr_t>(previous, 0x18));
        Absorb(core, previous, following, Read<uintptr_t>(previous, 0x18));
        *slot = previous;
      }
    }
    else {
      if (previous_count < 256) {
        DetachFree(core, previous, previous_count);
      }

      Absorb(core, previous, *slot, Read<uintptr_t>(previous, 0x18));

      if (previous_count < 256) {
        AttachFree(core, previous, Read<size_t>(previous, 0x20));
      }

      *slot = previous;
    }

    return;
  }

  if (merge_following) {
    size_t following_count = Read<size_t>(following, 0x20);

    if (following_count < 256) {
      DetachFree(core, following, following_count);
      Absorb(core, *slot, following, Read<uintptr_t>(*slot, 0x18));
      AttachFree(core, *slot, Read<size_t>(*slot, 0x20));
    }
    else {
      Absorb(core, following, span, begin);
      *slot = following;
    }
  }
  else {
    AttachFree(core, span, Read<size_t>(span, 0x20));
  }
}

void* AllocSpanPage(TlsHeapCentral* core) {
  void* span = pages::SearchFreeSpan(core, 1);

  if (span == nullptr) {
    return nullptr;
  }

  void* page = Read<void*>(span, 0x18);

  if (Read<unsigned char>(core, 0x2c) == 1
      && AllocatePhysical(core, page, 0x1000)) {
    return nullptr;
  }

  Write<unsigned char>(page, 0x1a, 0);
  Write<uintptr_t>(page, 0, 0);
  __builtin_memset(Bytes(page) + 0x28, 0, 0x28);
  Write<uint16_t>(page, 0x18, 35);
  Write<uintptr_t>(page, 8, 0);
  Write<uint64_t>(page, 0x10, 0x1fffffff);
  Write<uintptr_t>(page, 0x20, 0);
  void* embedded = Bytes(page) + 0x20;
  size_t count = Read<size_t>(span, 0x20);

  if (count == 1) {
    DetachFree(core, span, 1);
    MoveSpan(core, embedded, span);
    Write<unsigned char>(embedded, 0x13, 3);
    ReleaseSpan(core, span);
    void* old_page = reinterpret_cast<void*>(
      reinterpret_cast<uintptr_t>(span) & ~uintptr_t{0xfff});
    DestroySpanPageIfEmpty(core, old_page, false);
  }
  else {
    Write<uint32_t>(embedded, 0x14, 0);
    Write(embedded, 0x18, Read<uintptr_t>(span, 0x18));
    Write<size_t>(embedded, 0x20, 1);
    Write<unsigned char>(embedded, 0x13, 3);
    count = Read<size_t>(span, 0x20);

    if (count <= 256) {
      DetachFree(core, span, count);
    }

    ResizeSpan(core, span, Read<uintptr_t>(span, 0x18) + 0x1000,
               Read<size_t>(span, 0x20) - 1);
    Write<unsigned char>(embedded, 0x12, 0);
    MapSpan(core, embedded);
    count = Read<size_t>(span, 0x20);

    if (count <= 255) {
      AttachFree(core, span, count);
    }
  }

  Insert(Bytes(core) + 0x48, page);
  return page;
}

}
