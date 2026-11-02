#include "nn/nlibsdk/heap/tls_heap_inspection.hpp"

#include "nn/nlibsdk/heap/tls_heap_large.hpp"
#include "nn/nlibsdk/heap/tls_heap_spans.hpp"

namespace nn::nlibsdk::heap::inspection_detail {

int TryLock(void*) asm("pthread_mutex_trylock");
int Unlock(void*) asm("pthread_mutex_unlock");
void* Fill(void*, int, size_t) asm("memset");
extern const uint16_t ClassInfo[]
  asm("_ZN2nn7nlibsdk4heap13TlsHeapStatic10kClassInfoE");

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

static size_t FollowingPage(TlsHeapCentral* core, const void* span) {
  return (Read<uintptr_t>(span, 0x18)
    + (Read<size_t>(span, 0x20) << 12) - Address(core)) >> 12;
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

static bool CheckMetadataList(void* page) {
  while (page != nullptr) {
    if (Read<void*>(page) == Read<void*>(page, 8)
        || 64 - __builtin_popcountll(Read<uint64_t>(page, 0x10))
          != Read<uint16_t>(page, 0x18)) {
      return false;
    }

    page = Read<void*>(page);
  }

  return true;
}

}

namespace nn::nlibsdk::heap::inspection {

using namespace inspection_detail;

void Dump(TlsHeapCentral* core, int, int, bool) {
  large::MemoryStats stats;
  large::GetMemoryStats(core, &stats);
  size_t free = 0;
  size_t largest = 0;
  large::GetMappedMemoryStats(core, &free, &largest);
}

int InvokeWalkCallback(TlsHeapCentral* core, WalkCallback callback,
                       void* address, size_t size, void* context) {
  UnlockCore(core);
  int result = callback(address, size, context);
  LockCore(core);
  return result == 0 ? -1 : 0;
}

int WalkAllocated(TlsHeapCentral* core, WalkCallback callback,
                   void* context) {
  if (Read<size_t>(core) == 0) {
    return 2;
  }

  void* span = Read<void*>(Read<void*>(core, 8));
  int result = 2;

  while (span != nullptr) {
    if (Read<unsigned char>(span, 0x13) == 1) {
      if (Read<unsigned char>(span, 0x12) != 0) {
        uint32_t free_slots[128];
        Fill(free_slots, 0, sizeof(free_slots));
        size_t bytes = Read<size_t>(span, 0x20) << 12;
        size_t unit = ClassInfo[Read<unsigned char>(span, 0x12) * 2 + 1];
        size_t count = bytes / unit;

        if (count > 4096) {
          return 5;
        }

        for (void* slot = Read<void*>(span, 0x28); slot != nullptr;
             slot = Read<void*>(slot)) {
          size_t index = (Address(slot) - Read<uintptr_t>(span, 0x18))
            / unit;
          free_slots[index >> 5] |= uint32_t{1} << (index & 31);
        }

        for (size_t index = 0; index < count; ++index) {
          if ((free_slots[index >> 5] & (uint32_t{1} << (index & 31)))
              != 0) {
            continue;
          }

          void* address = Bytes(Read<void*>(span, 0x18)) + index * unit;
          int called = InvokeWalkCallback(core, callback, address, unit,
                                          context);

          if (called != 0) {
            return called < 0 ? 0 : called;
          }

          result = 0;
        }
      }
      else {
        int called = InvokeWalkCallback(core, callback,
          Read<void*>(span, 0x18), Read<size_t>(span, 0x20) << 12, context);

        if (called != 0) {
          return called < 0 ? 0 : called;
        }

        result = 0;
      }
    }

    size_t index = FollowingPage(core, span);

    if (index >= Read<size_t>(core)) {
      break;
    }

    span = Read<void*>(Read<void*>(core, 8), index * 8);
  }

  return result;
}

bool CheckSpanList(TlsHeapCentral* core) {
  void* mapping = Read<void*>(core, 8);
  void* span = Read<void*>(mapping);

  if (span == nullptr) {
    return false;
  }

  size_t total = Read<size_t>(core);
  size_t index = 0;

  while (index == (Read<uintptr_t>(span, 0x18) - Address(core)) >> 12) {
    size_t count = Read<size_t>(span, 0x20);

    if (Read<unsigned char>(span, 0x12) != 0) {
      for (size_t page = 0; page < count; ++page) {
        if (Read<void*>(mapping, (index + page) * 8) != span) {
          return false;
        }
      }
    }
    else {
      for (size_t page = 1; page < count; ++page) {
        void* expected = page == count - 1 ? span : nullptr;

        if (Read<void*>(mapping, (index + page) * 8) != expected) {
          return false;
        }
      }
    }

    index += count;

    if (index == total) {
      if (!CheckMetadataList(Read<void*>(core, 0x50))) {
        return false;
      }

      void* available = Read<void*>(core, 0x48);
      return available != nullptr && CheckMetadataList(available);
    }

    size_t masked = index & 0xfffffffffffff;

    if (masked >= total) {
      return false;
    }

    void* next = Read<void*>(mapping, masked * 8);
    span = Read<void*>(mapping, index * 8);

    if (next == nullptr || next != span) {
      return false;
    }
  }

  return false;
}

void CalculateHash(TlsHeapCentral* core, HeapHash* result) {
  LockCore(core);
  size_t total = Read<size_t>(core);
  void* mapping = total == 0 ? nullptr : Read<void*>(core, 8);
  void* span = total == 0 ? nullptr : Read<void*>(mapping);
  HeapHash hash = {};

  while (span != nullptr) {
    if (Read<unsigned char>(span, 0x13) == 1) {
      if (Read<unsigned char>(span, 0x12) == 0) {
        size_t bytes = Read<size_t>(span, 0x20) << 12;
        ++hash.allocations;
        hash.size += bytes;
        hash.sum += Read<uintptr_t>(span, 0x18) + bytes;
      }
      else {
        unsigned char free_slots[4096];
        Fill(free_slots, 0, sizeof(free_slots));
        size_t bytes = Read<size_t>(span, 0x20) << 12;
        size_t unit = ClassInfo[Read<unsigned char>(span, 0x12) * 2 + 1];
        size_t count = bytes / unit;

        for (size_t index = 0; index < count; ++index) {
          free_slots[index] = 0;
        }

        for (void* slot = Read<void*>(span, 0x28); slot != nullptr;
             slot = Read<void*>(slot)) {
          size_t index = (Address(slot) - Read<uintptr_t>(span, 0x18))
            / unit;
          free_slots[index] = 1;
        }

        for (size_t index = 0; index < count; ++index) {
          if ((free_slots[index] & 1) == 0) {
            ++hash.allocations;
            hash.size += unit;
            hash.sum += Read<uintptr_t>(span, 0x18) + (index + 1) * unit;
          }
        }
      }
    }

    size_t index = FollowingPage(core, span);

    if (index >= total) {
      break;
    }

    span = Read<void*>(mapping, index * 8);
  }

  UnlockCore(core);
  *result = hash;
}

bool IsClean(TlsHeapCentral* core) {
  LockCore(core);
  void* head = Bytes(core) + 0x48;
  void* cursor = head;

  while ((cursor = Read<void*>(cursor)) != nullptr) {
    if (!spans::DestroySpanPageIfEmpty(core, cursor, true)) {
      continue;
    }

    cursor = head;
    void* candidate = nullptr;

    for (void* span = Read<void*>(core, 0x850); span != nullptr;
         span = Read<void*>(span)) {
      if (Read<size_t>(span, 0x20) == SIZE_MAX
          && (candidate == nullptr || Read<uintptr_t>(span, 0x18)
            > Read<uintptr_t>(candidate, 0x18))) {
        candidate = span;
      }
    }

    if (candidate != nullptr) {
      break;
    }
  }

  void* mapping = Read<void*>(core, 8);
  size_t total = Read<size_t>(core);
  void* first = Read<void*>(mapping);
  void* second = Read<void*>(mapping, FollowingPage(core, first) * 8);
  size_t index = FollowingPage(core, second);
  bool clean = false;

  if (index < total) {
    void* span = Read<void*>(mapping, index * 8);

    if (span != nullptr && Read<unsigned char>(span, 0x13) == 2) {
      index = FollowingPage(core, span);
      clean = index >= total || Read<void*>(mapping, index * 8) == nullptr;
    }
  }

  UnlockCore(core);
  return clean;
}

}
