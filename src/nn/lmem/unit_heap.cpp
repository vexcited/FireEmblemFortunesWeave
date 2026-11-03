#include "nn/lmem/unit_heap.hpp"

#include "heap_head.hpp"

namespace nn::lmem::detail {

struct __attribute__((packed, may_alias)) FreeBlock {
  uintptr_t next;
};

static FreeBlock& Block(uintptr_t address) {
  return *reinterpret_cast<FreeBlock*>(address);
}

static uint64_t DivideOrZero(uint64_t numerator, uint64_t denominator) {
  return denominator ? numerator / denominator : 0;
}

HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                          int alignment, uint16_t options,
                          InfoPlacement placement, HeapHead* external) {
  int32_t effective_alignment = alignment > 8 ? alignment : 8;
  uint64_t bias = uint32_t(effective_alignment - 1);
  uint64_t mask = uint64_t(int64_t(-effective_alignment));
  uintptr_t input = reinterpret_cast<uintptr_t>(address);
  uintptr_t end = (input + size) & ~uintptr_t(7);
  uintptr_t heap_address = 0;
  uintptr_t state_address = 0;
  uintptr_t begin = 0;

  if (external) {
    heap_address = reinterpret_cast<uintptr_t>(external);
    state_address = heap_address + 104;
    begin = (input + bias) & mask;
  }
  else if (placement == InfoPlacement::Front) {
    heap_address = (input + 7) & ~uintptr_t(7);
    state_address = heap_address + 104;
    begin = (heap_address + bias + 144) & mask;
  }
  else if (placement == InfoPlacement::Rear) {
    heap_address = end - 144;
    state_address = heap_address + 104;
    begin = (input + bias) & mask;
    end = heap_address;
  }
  else {
    end = 0;
  }

  if (end < begin) {
    return nullptr;
  }

  uint64_t block_size = (unit_size + bias) & mask;
  uint64_t available = end - begin;

  if (block_size > available) {
    return nullptr;
  }

  uint64_t count = DivideOrZero(available, block_size);
  auto* heap = reinterpret_cast<HeapHead*>(heap_address);
  InitHeapHead(heap, 0x554e5448, reinterpret_cast<void*>(begin),
                reinterpret_cast<void*>(begin + count * block_size),
                options);
  auto& state = *reinterpret_cast<UnitHeapState*>(state_address);
  state.free_head = begin;
  state.unit_size = block_size;
  uintptr_t current = begin;

  if (int32_t(count) >= 2) {
    uint32_t remaining = uint32_t(count) - 1;

    do {
      uintptr_t next = current + block_size;
      Block(current).next = next;
      current = next;
    } while (--remaining);
  }

  Block(current).next = 0;
  state.alignment = effective_alignment;
  state.allocated = 0;
  return heap;
}

void ExtendUnitHeapArea(HeapHead* heap, size_t size) {
  auto& state = UnitState(heap);
  uintptr_t last = state.free_head;
  uintptr_t block;

  if (last) {
    while (Block(last).next) {
      last = Block(last).next;
    }

    block = Header(heap).region_end;
    Block(last).next = block;
  }
  else {
    block = Header(heap).region_end;
    state.free_head = block;
  }

  Block(block).next = 0;
  uint64_t block_size = state.unit_size;
  uintptr_t end = Header(heap).region_end;
  uint64_t remaining = DivideOrZero(size, block_size) - 1;

  while (remaining) {
    uintptr_t next = block + state.unit_size;
    Block(block).next = next;
    block = next;
    --remaining;
  }

  Block(block).next = 0;
  Header(heap).region_end = end + size;
}

void* AllocFromUnitHeap(HeapHead* heap) {
  auto& state = UnitState(heap);
  uintptr_t block = state.free_head;

  if (block) {
    state.free_head = Block(block).next;
    ++state.allocated;
  }

  return reinterpret_cast<void*>(block);
}

}

namespace nn::lmem {

detail::HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                                int options, int alignment,
                                detail::HeapHead* external) {
  auto* heap = detail::CreateUnitHeap(address, size, unit_size, alignment,
    static_cast<uint16_t>(options), InfoPlacement::Front, external);

  if (options & 4) {
    nn::os::InitializeMutex(&detail::Header(heap).mutex, false, 0);
  }

  return heap;
}

void ExtendUnitHeapArea(detail::HeapHead* heap, size_t size) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  detail::ExtendUnitHeapArea(heap, size);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }
}

void* AllocateFromUnitHeap(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  void* result = detail::AllocFromUnitHeap(heap);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }

  return result;
}

}
