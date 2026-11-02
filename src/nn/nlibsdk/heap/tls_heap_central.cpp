#include "nn/nlibsdk/heap/tls_heap_central.hpp"

#include <stdint.h>

namespace nn::nlibsdk::heap::central_detail {

extern const unsigned char kClassInfo[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic10kClassInfoE");
void* AllocatePages(TlsHeapCentral*, size_t)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral11AllocPages_Em");
void FreePages(TlsHeapCentral*, void*)
  asm("_ZN2nn7nlibsdk4heap14TlsHeapCentral10FreePages_EPNS1_4SpanE");
void DebugBreak() asm("nnmem_nlib_debug_break");

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

static size_t ClassSize(size_t index) {
  return Read<uint16_t>(kClassInfo, index * 4 + 2);
}

static size_t ClassPages(size_t index) {
  return Read<uint16_t>(kClassInfo, index * 4);
}

static size_t Divide(size_t numerator, size_t denominator) {
  return denominator == 0 ? 0 : numerator / denominator;
}

static void* ListSlot(TlsHeapCentral* core, size_t index) {
  return Bytes(core) + 0x878 + index * 8;
}

static void Insert(void* slot, void* span) {
  Write(span, 0, Read<void*>(slot));
  Write(span, 8, slot);
  void* next = Read<void*>(slot);

  if (next != nullptr) {
    Write(next, 8, span);
  }

  Write(slot, 0, span);
}

static void* Remove(void* span) {
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
  return next;
}

static void* Pop(void* span) {
  uintptr_t address = Read<uintptr_t>(span, 0x28);
  uintptr_t begin = Read<uintptr_t>(span, 0x18);

  if (address >= begin
      && address < begin + (Read<size_t>(span, 0x20) << 12)) {
    size_t unit = ClassSize(Read<unsigned char>(span, 0x12));
    size_t index = Divide(address - begin, unit);

    if (begin + index * unit == address) {
      size_t offset = 0x30 + (index >> 6) * 8;
      uint64_t bit = uint64_t{1} << (index & 63);
      uint64_t bits = Read<uint64_t>(span, offset);

      if ((bits & bit) == 0) {
        Write(span, offset, bits | bit);
        void* block = reinterpret_cast<void*>(address);
        Write(span, 0x28, Read<uintptr_t>(block));
        Write<uintptr_t>(block, 0, 0);
        Write<uint16_t>(span, 0x10, Read<uint16_t>(span, 0x10) + 1);
        return block;
      }
    }
  }
  else if (address == 0) {
    return nullptr;
  }

  DebugBreak();
  Write<uintptr_t>(span, 0x28, 0);
  return nullptr;
}

static void InitializeSpan(TlsHeapCentral* core, void* span,
                            unsigned char index, const unsigned char* live) {
  uintptr_t begin = Read<uintptr_t>(span, 0x18);
  size_t pages = Read<size_t>(span, 0x20);
  size_t page = (begin - reinterpret_cast<uintptr_t>(core)) >> 12;
  void* mapping = Read<void*>(core, 8);
  Write(span, 0x12, index);

  for (size_t offset = 0; offset < pages; ++offset) {
    Write(mapping, (page + offset) * 8, span);
  }

  __asm__ __volatile__("dmb ish" ::: "memory");
  __builtin_memset(Bytes(Read<void*>(core, 0x10)) + page,
                   index, Read<size_t>(span, 0x20));
  index = live == nullptr ? index : *live;
  Insert(ListSlot(core, index), span);
}

static void InitializeBlocks(void* span, unsigned char index, int cpu,
                              bool internal) {
  uintptr_t begin = Read<uintptr_t>(span, 0x18);
  size_t pages = Read<size_t>(span, 0x20);
  Write<unsigned char>(span, 0x12, index);

  if (internal) {
    Write<unsigned char>(span, 0x13, 3);
  }

  Write<uint16_t>(span, 0x10, 0);
  Write(span, 0x28, begin);
  Write(span, 0x14, cpu);
  size_t unit = ClassSize(index);
  size_t bytes = Divide(pages << 12, unit) * unit;
  uintptr_t tail = begin;

  if (bytes != unit) {
    uintptr_t end = begin + bytes;

    do {
      tail = begin + unit;
      Write(reinterpret_cast<void*>(begin), 0, tail);
      begin = tail;
    } while (tail + unit != end);
  }

  Write<uintptr_t>(reinterpret_cast<void*>(tail), 0, 0);
  __builtin_memset(Bytes(span) + 0x30, 0, 64);
}

struct BlockList {
  uintptr_t head;
  uintptr_t tail;
};

static size_t PopList(void* span, TlsHeapCache* cache, size_t requested,
                       BlockList* output) {
  uintptr_t next = Read<uintptr_t>(span, 0x28);

  if (next == 0) {
    output->head = 0;
    output->tail = 0;
    return 0;
  }

  output->head = Read<uintptr_t>(cache, 0x38) ^ next;
  size_t unit = ClassSize(Read<unsigned char>(span, 0x12));
  uintptr_t end = Read<uintptr_t>(span, 0x18)
    + (Read<size_t>(span, 0x20) << 12);
  unsigned count = 0;
  uintptr_t address;

  while (true) {
    address = next;
    uintptr_t begin = Read<uintptr_t>(span, 0x18);
    size_t index = Divide(address - begin, unit);
    size_t offset = 0x30 + (index >> 6) * 8;
    uint64_t bit = uint64_t{1} << (index & 63);

    if (address < begin || address >= end || begin + index * unit != address) {
      break;
    }

    uint64_t bits = Read<uint64_t>(span, offset);

    if ((bits & bit) != 0) {
      break;
    }

    Write(span, offset, bits | bit);
    ++count;
    next = Read<uintptr_t>(reinterpret_cast<void*>(address));
    Write(reinterpret_cast<void*>(address), 0,
          Read<uintptr_t>(cache, 0x38) ^ next);

    if (requested <= static_cast<uint16_t>(count) || next == 0) {
      output->tail = address;
      Write<uintptr_t>(reinterpret_cast<void*>(address), 0, 0);
      Write(span, 0x28, next);
      Write<uint16_t>(span, 0x10, Read<uint16_t>(span, 0x10) + count);
      return static_cast<uint16_t>(count);
    }
  }

  uintptr_t cursor = Read<uintptr_t>(span, 0x28);

  if (cursor != address) {
    uintptr_t previous;
    uintptr_t key = Read<uintptr_t>(cache, 0x38);

    do {
      previous = cursor;
      cursor = key ^ Read<uintptr_t>(reinterpret_cast<void*>(cursor));
    } while (cursor != address);

    address = previous;
  }

  DebugBreak();
  uintptr_t tail = Read<uintptr_t>(cache, 0x38) ^ address;
  output->tail = tail;
  Write<uintptr_t>(reinterpret_cast<void*>(tail), 0, 0);
  Write<uintptr_t>(span, 0x28, 0);
  Write<uint16_t>(span, 0x10, Read<uint16_t>(span, 0x10) + count);
  return static_cast<uint16_t>(count);
}

}

namespace nn::nlibsdk::heap {

using namespace central_detail;

void* TlsHeapCentral::CacheSmallMemory_(unsigned char index, size_t alignment,
                                       bool internal) {
  void* slot = ListSlot(this, index);
  void* span = Read<void*>(slot);

  while (span != nullptr) {
    bool selected = internal ? Read<unsigned char>(span, 0x13) == 3
      : Read<unsigned char>(span, 0x13) != 3 && Read<int>(span, 0x14) == 0;

    if (selected) {
      void* block = Pop(span);

      if (block != nullptr) {
        if (Read<uintptr_t>(span, 0x28) == 0) {
          Remove(span);
        }

        return block;
      }

      span = Remove(span);
    }
    else {
      span = Read<void*>(span);
    }
  }

  span = AllocatePages(this, ClassPages(index));

  if (span != nullptr) {
    InitializeSpan(this, span, index, nullptr);
    InitializeBlocks(span, index, 0, internal);
    void* block = Pop(span);

    if (Read<uintptr_t>(span, 0x28) == 0) {
      Remove(span);
    }

    return block;
  }

  if (index > 56) {
    return nullptr;
  }

  for (size_t candidate = index; (candidate & 255) != 57; ++candidate) {
    if (alignment != 0 && ((alignment + 0xffff) & ClassSize(candidate)) != 0) {
      continue;
    }

    span = Read<void*>(ListSlot(this, candidate));

    while (span != nullptr) {
      bool selected = (Read<unsigned char>(span, 0x13) == 3) == internal;

      if (selected) {
        void* block = Pop(span);

        if (block != nullptr) {
          if (Read<uintptr_t>(span, 0x28) == 0) {
            Remove(span);
          }

          return block;
        }

        break;
      }

      span = Read<void*>(span);
    }
  }

  return nullptr;
}

size_t TlsHeapCentral::CacheSmallMemoryList_(TlsHeapCache* cache,
                                            unsigned char* index,
                                            size_t requested, void** output,
                                            int cpu, size_t alignment) {
  uintptr_t head = 0;
  uintptr_t* tail = &head;
  size_t count = 0;
  void* span = Read<void*>(ListSlot(this, *index));

  while (span != nullptr) {
    if (Read<unsigned char>(span, 0x13) == 3 || Read<int>(span, 0x14) != cpu) {
      span = Read<void*>(span);
      continue;
    }

    BlockList blocks{};
    size_t received = PopList(span, cache, requested - count, &blocks);

    if (received != 0) {
      count += received;
      *tail = blocks.head;
      tail = reinterpret_cast<uintptr_t*>(blocks.tail);
      *tail = 0;

      if (count >= requested) {
        if (Read<uintptr_t>(span, 0x28) == 0) {
          Remove(span);
        }

        *output = reinterpret_cast<void*>(head);
        return count;
      }
    }

    span = Remove(span);
  }

  span = AllocatePages(this, ClassPages(*index));

  if (span != nullptr) {
    InitializeSpan(this, span, *index, index);
    InitializeBlocks(span, *index, cpu, false);
    BlockList blocks{};
    count += PopList(span, cache, requested - count, &blocks);
    *tail = blocks.head;
    *reinterpret_cast<uintptr_t*>(blocks.tail) = 0;

    if (Read<uintptr_t>(span, 0x28) == 0) {
      Remove(span);
    }

    *output = reinterpret_cast<void*>(head);
    return count;
  }

  if (head != 0) {
    *output = reinterpret_cast<void*>(head);
    return count;
  }

  if (*index <= 56) {
    for (size_t candidate = *index; (candidate & 255) != 57; ++candidate) {
      if (alignment != 0
          && ((alignment + 0xffff) & ClassSize(candidate)) != 0) {
        continue;
      }

      span = Read<void*>(ListSlot(this, candidate));

      while (span != nullptr && Read<unsigned char>(span, 0x13) == 3) {
        span = Read<void*>(span);
      }

      if (span == nullptr) {
        continue;
      }

      void* block = Pop(span);

      if (block == nullptr) {
        continue;
      }

      if (Read<uintptr_t>(span, 0x28) == 0) {
        Remove(span);
      }

      Write<uintptr_t>(block, 0, 0);
      *output = reinterpret_cast<void*>(
        Read<uintptr_t>(cache, 0x38) ^ reinterpret_cast<uintptr_t>(block));
      *index = candidate;
      return 1;
    }
  }

  *output = nullptr;
  return 0;
}

int TlsHeapCentral::UncacheSmallMemory_(void* address) {
  size_t page = (reinterpret_cast<uintptr_t>(address)
    - reinterpret_cast<uintptr_t>(this)) >> 12;

  if (page >= Read<size_t>(storage)) {
    return 14;
  }

  void* span = Read<void*>(Read<void*>(this, 8), page * 8);

  if (span == nullptr || Read<unsigned char>(span, 0x12) == 0) {
    return 14;
  }

  if (Read<uintptr_t>(span, 0x28) == 0) {
    Insert(ListSlot(this, Read<unsigned char>(span, 0x12)), span);
  }

  size_t unit = ClassSize(Read<unsigned char>(span, 0x12));
  uintptr_t begin = Read<uintptr_t>(span, 0x18);
  size_t displacement = reinterpret_cast<uintptr_t>(address) - begin;
  size_t index = Divide(displacement, unit);
  size_t aligned = index * unit;

  if (aligned != displacement) {
    DebugBreak();
    address = Bytes(Read<void*>(span, 0x18)) + aligned;
  }

  size_t offset = 0x30 + (index >> 6) * 8;
  uint64_t bit = uint64_t{1} << (index & 63);
  uint64_t bits = Read<uint64_t>(span, offset);

  if ((bits & bit) != 0) {
    Write(span, offset, bits & ~bit);
    Write(address, 0, Read<uintptr_t>(span, 0x28));
    Write(span, 0x28, reinterpret_cast<uintptr_t>(address));
    Write<uint16_t>(span, 0x10, Read<uint16_t>(span, 0x10) - 1);
  }
  else {
    DebugBreak();
  }

  if (Read<uint16_t>(span, 0x10) != 0) {
    return 0;
  }

  Write<uintptr_t>(span, 0x28, 0);
  Remove(span);
  begin = Read<uintptr_t>(span, 0x18);
  size_t pages = Read<size_t>(span, 0x20);
  page = (begin - reinterpret_cast<uintptr_t>(this)) >> 12;
  void* mapping = Bytes(Read<void*>(this, 8)) + page * 8;
  __builtin_memset(mapping, 0, pages * 8);
  Write<unsigned char>(span, 0x12, 0);
  Write(mapping, 0, span);
  Write(mapping, pages * 8 - 8, span);
  __asm__ __volatile__("dmb ish" ::: "memory");
  __builtin_memset(Bytes(Read<void*>(this, 0x10)) + page,
                   0, Read<size_t>(span, 0x20));
  FreePages(this, span);
  return 0;
}

}
