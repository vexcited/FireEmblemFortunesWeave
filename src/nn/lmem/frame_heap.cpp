#include "nn/lmem/frame_heap.hpp"

#include "nn/lmem/unit_heap_adapters.hpp"
#include "nn/lmem/unit_heap_queries.hpp"
#include "nn/os/mutex.hpp"

namespace nn::lmem::detail {

struct __attribute__((packed, may_alias)) FrameHeapStorage {
  uint8_t reserved00[48];
  uintptr_t begin;
  uintptr_t end;
  uint8_t reserved40[32];
  uint8_t options;
  uint8_t reserved61[7];
  uintptr_t head;
  uintptr_t tail;
};

static_assert(offsetof(FrameHeapStorage, begin) == 48);
static_assert(offsetof(FrameHeapStorage, options) == 96);
static_assert(offsetof(FrameHeapStorage, head) == 104);
static_assert(offsetof(FrameHeapStorage, tail) == 112);
static_assert(sizeof(FrameHeapStorage) == 120);
static_assert(sizeof(FrameHeapState) == 16);
static_assert(sizeof(FrameHeapAdjustment) == 16);

static FrameHeapStorage& Storage(HeapHead* heap) {
  return *reinterpret_cast<FrameHeapStorage*>(heap);
}

static nn::os::MutexType* Mutex(HeapHead* heap) {
  return reinterpret_cast<nn::os::MutexType*>(
    reinterpret_cast<uintptr_t>(heap) + 64);
}

// Allocations grow from the head forward and from the tail backward.
void* GetNextBlockFront(HeapHead* heap) {
  return reinterpret_cast<void*>(Storage(heap).head);
}

void* GetNextBlockRear(HeapHead* heap) {
  return reinterpret_cast<void*>(Storage(heap).tail);
}

HeapHead* CreateFrameHeap(void* address, size_t size, int options) {
  uintptr_t input = reinterpret_cast<uintptr_t>(address);
  uintptr_t end = input + size;
  uintptr_t start = (input + 3) & ~uintptr_t(3);

  if (start > (end & ~uintptr_t(3)) || end - start < 184) {
    return nullptr;
  }

  auto* heap = reinterpret_cast<HeapHead*>(start);
  InitHeapHead(heap, 0x46524d48, reinterpret_cast<void*>(start + 144),
    reinterpret_cast<void*>(end & ~uintptr_t(3)), uint16_t(options));
  Storage(heap).head = Storage(heap).begin;
  Storage(heap).tail = Storage(heap).end;
  return heap;
}

HeapHead* CreateFrameHeap(void* address, size_t size, int options,
  HeapHead* external) {
  uintptr_t input = reinterpret_cast<uintptr_t>(address);
  uintptr_t end = (input + size) & ~uintptr_t(3);
  uintptr_t start = (input + 3) & ~uintptr_t(3);

  if (start > end) {
    return nullptr;
  }

  InitHeapHead(external, 0x46524d48, reinterpret_cast<void*>(start),
    reinterpret_cast<void*>(end), uint16_t(options));
  Storage(external).head = Storage(external).begin;
  Storage(external).tail = Storage(external).end;
  return external;
}

void DestroyFrameHeap(HeapHead* heap) {
  FinalizeHeap(heap);
}

void* AllocFromFrameHeap(HeapHead* heap, size_t size, int alignment) {
  uint32_t raw_alignment = uint32_t(alignment);
  int32_t normalized = raw_alignment > 0xfffffffdU ? -4 : alignment;

  if (raw_alignment - 1 < 2) {
    normalized = 4;
  }

  uint64_t rounded = ((size > 1 ? size : 1) + 3) & ~uint64_t(3);
  auto& state = Storage(heap);
  uintptr_t address;

  if (normalized < 0) {
    address = (state.tail - rounded) & uint64_t(int64_t(normalized));

    if (address < state.head) {
      return nullptr;
    }

    state.tail = address;
  }
  else {
    uint64_t bias = uint64_t(int64_t(int32_t(uint32_t(normalized) - 1)));
    uint64_t mask = uint64_t(int64_t(int32_t(0U - uint32_t(normalized))));
    address = (state.head + bias) & mask;
    uintptr_t end = address + rounded;

    if (end > state.tail) {
      return nullptr;
    }

    state.head = end;
  }

  return reinterpret_cast<void*>(address);
}

void FreeToFrameHeap(HeapHead* heap, FreeMode mode) {
  if (uint32_t(mode) & 1) {
    Storage(heap).head = Storage(heap).begin;
  }

  if (uint32_t(mode) & 2) {
    Storage(heap).tail = Storage(heap).end;
  }
}

size_t GetAllocatableSizeForFrameHeap(HeapHead* heap, int alignment) {
  uint32_t magnitude = alignment < 0 ? 0U - uint32_t(alignment) :
    uint32_t(alignment);
  uint64_t bias = uint64_t(int64_t(int32_t(magnitude - 1)));
  uint64_t mask = uint64_t(int64_t(int32_t(0U - magnitude)));
  uintptr_t start = (Storage(heap).head + bias) & mask;
  uintptr_t end = Storage(heap).tail;
  return end < start ? 0 : end - start;
}

FrameHeapState GetFrameHeapState(HeapHead* heap) {
  return {reinterpret_cast<void*>(Storage(heap).head),
          reinterpret_cast<void*>(Storage(heap).tail)};
}

void RestoreFrameHeapState(HeapHead* heap, const FrameHeapState& state) {
  Storage(heap).head = reinterpret_cast<uintptr_t>(state.head);
  Storage(heap).tail = reinterpret_cast<uintptr_t>(state.tail);
}

FrameHeapAdjustment AdjustFrameHeap(HeapHead* heap, AdjustMode mode) {
  auto& state = Storage(heap);

  if (mode == AdjustMode::Tail && state.tail == state.end) {
    uintptr_t old_end = state.end;
    state.end = state.head;
    state.tail = state.head;
    return {reinterpret_cast<void*>(state.head), old_end - state.head};
  }

  if (mode == AdjustMode::Head && state.head == state.begin &&
      state.begin - 144 != reinterpret_cast<uintptr_t>(heap)) {
    uintptr_t old_begin = state.begin;
    state.begin = state.tail;
    state.head = state.tail;
    return {reinterpret_cast<void*>(old_begin), state.tail - old_begin};
  }

  return {reinterpret_cast<void*>(state.end), 0};
}

size_t ResizeForMemoryBlockFrameHeap(HeapHead* heap, void* block, size_t size) {
  uint64_t rounded = ((size > 1 ? size : 1) + 3) & ~uint64_t(3);
  uintptr_t address = reinterpret_cast<uintptr_t>(block);
  uint64_t old_size = Storage(heap).head - address;

  if (rounded == old_size) {
    return rounded;
  }

  uintptr_t end = address + rounded;

  if (rounded > old_size && end > Storage(heap).tail) {
    return 0;
  }

  Storage(heap).head = end;
  return rounded;
}

void DumpFrameHeap(HeapHead* heap) {
  DumpHeapHead(heap);
}

}

namespace nn::lmem {

static void LockIfEnabled(detail::HeapHead* heap) {
  if (detail::Storage(heap).options & 4) {
    nn::os::LockMutex(detail::Mutex(heap));
  }
}

static void UnlockIfEnabled(detail::HeapHead* heap) {
  if (detail::Storage(heap).options & 4) {
    nn::os::UnlockMutex(detail::Mutex(heap));
  }
}

detail::HeapHead* CreateFrameHeap(void* address, size_t size, int options) {
  auto* heap = detail::CreateFrameHeap(address, size, options);

  if (options & 4) {
    nn::os::InitializeMutex(detail::Mutex(heap), false, 0);
  }

  return heap;
}

detail::HeapHead* CreateFrameHeap(void* address, size_t size, int options,
  detail::HeapHead* external) {
  auto* heap = detail::CreateFrameHeap(address, size, options, external);

  if (options & 4) {
    nn::os::InitializeMutex(detail::Mutex(heap), false, 0);
  }

  return heap;
}

void DestroyFrameHeap(detail::HeapHead* heap) {
  if (detail::Storage(heap).options & 4) {
    nn::os::FinalizeMutex(detail::Mutex(heap));
  }

  detail::DestroyFrameHeap(heap);
}

FrameHeapAdjustment AdjustFrameHeap(detail::HeapHead* heap, AdjustMode mode) {
  LockIfEnabled(heap);
  auto result = detail::AdjustFrameHeap(heap, mode);
  UnlockIfEnabled(heap);
  return result;
}

void* AllocateFromFrameHeap(detail::HeapHead* heap, size_t size) {
  LockIfEnabled(heap);
  void* result = detail::AllocFromFrameHeap(heap, size, 16);
  UnlockIfEnabled(heap);
  return result;
}

void* AllocateFromFrameHeap(detail::HeapHead* heap, size_t size,
  int alignment) {
  LockIfEnabled(heap);
  void* result = detail::AllocFromFrameHeap(heap, size, alignment);
  UnlockIfEnabled(heap);
  return result;
}

void FreeToFrameHeap(detail::HeapHead* heap, FreeMode mode) {
  LockIfEnabled(heap);
  detail::FreeToFrameHeap(heap, mode);
  UnlockIfEnabled(heap);
}

size_t ResizeFrameHeapBlock(detail::HeapHead* heap, void* block, size_t size) {
  LockIfEnabled(heap);
  size_t result = detail::ResizeForMemoryBlockFrameHeap(heap, block, size);
  UnlockIfEnabled(heap);
  return result;
}

size_t GetFrameHeapAllocatableSize(detail::HeapHead* heap, int alignment) {
  LockIfEnabled(heap);
  size_t size = detail::GetAllocatableSizeForFrameHeap(heap, alignment);
  UnlockIfEnabled(heap);
  return size;
}

FrameHeapState GetFrameHeapState(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  auto state = detail::GetFrameHeapState(heap);
  UnlockIfEnabled(heap);
  return state;
}

void RestoreFrameHeapState(detail::HeapHead* heap,
  const FrameHeapState& state) {
  LockIfEnabled(heap);
  detail::RestoreFrameHeapState(heap, state);
  UnlockIfEnabled(heap);
}

void DumpFrameHeap(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  detail::DumpFrameHeap(heap);
  UnlockIfEnabled(heap);
}

}
