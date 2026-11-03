#include "nn/lmem/exp_heap.hpp"

#include "exp_heap_internal.hpp"
#include "nn/lmem/unit_heap_queries.hpp"

namespace nn::lmem::detail {

static ExpHeapBlock& Block(uintptr_t address) {
  return *reinterpret_cast<ExpHeapBlock*>(address);
}

static void Remove(ExpHeapList& list, uintptr_t address) {
  uintptr_t previous = Block(address).previous;
  uintptr_t next = Block(address).next;

  if (previous) {
    Block(previous).next = next;
  }
  else {
    list.first = next;
  }

  if (next) {
    Block(next).previous = previous;
  }
  else {
    list.last = previous;
  }
}

static void InsertAfter(ExpHeapList& list, uintptr_t address,
                        uintptr_t previous) {
  uintptr_t next;
  Block(address).previous = previous;

  if (previous) {
    next = Block(previous).next;
    Block(previous).next = address;
  }
  else {
    next = list.first;
    list.first = address;
  }

  Block(address).next = next;

  if (next) {
    Block(next).previous = address;
  }
  else {
    list.last = address;
  }
}

static void InitializeFreeBlock(uintptr_t address, uint64_t size,
                                uintptr_t previous) {
  auto& block = Block(address);
  block.flags = 0;
  block.previous = previous;
  block.next = 0;
  block.size = size;
  block.signature = 0x4652;
}

HeapHead* CreateExpHeap(void* address, size_t size, int options) {
  uintptr_t input = reinterpret_cast<uintptr_t>(address);
  uintptr_t end = input + size;
  uintptr_t start = (input + 7) & ~uintptr_t(7);

  if (start > (end & ~uintptr_t(3)) || end - start < 36) {
    return nullptr;
  }

  auto* heap = reinterpret_cast<HeapHead*>(start);
  InitHeapHead(heap, 0x45585048, reinterpret_cast<void*>(start + 144),
    reinterpret_cast<void*>(end & ~uintptr_t(3)), uint16_t(options));
  uintptr_t begin = Header(heap).region_begin;
  end = Header(heap).region_end;
  auto& state = ExpState(heap);
  state.use_margin = 0;
  state.group = 0;
  state.mode = 0;
  Block(begin).signature = 0x4652;
  Block(begin).flags = 0;
  Block(begin).next = 0;
  Block(begin).size = end - begin - 32;
  Block(begin).previous = 0;
  state.free.first = begin;
  state.free.last = begin;
  state.used.first = 0;
  state.used.last = 0;
  return heap;
}

void DestroyExpHeap(HeapHead* heap) {
  FinalizeHeap(heap);
}

uintptr_t AllocateExpHeapBlock(ExpHeapState* state, uintptr_t free_block,
  uintptr_t address, size_t size, int reverse) {
  uintptr_t begin = free_block - ((Block(free_block).flags >> 8) & 127);
  uintptr_t end = free_block + Block(free_block).size + 32;
  uintptr_t previous = Block(free_block).previous;
  Remove(state->free, free_block);
  uintptr_t used = address - 32;
  uintptr_t allocation_end = address + size;
  uint64_t leading = used - begin;

  if (leading >= 36 &&
      (reverse || leading > 127 || (state->use_margin & 1))) {
    InitializeFreeBlock(begin, leading - 32, previous);
    InsertAfter(state->free, begin, previous);
    previous = begin;
    begin = used;
  }

  uint64_t trailing = end - allocation_end;

  if (trailing >= 36 &&
      (!reverse || trailing > 127 || (state->use_margin & 1))) {
    InitializeFreeBlock(allocation_end, trailing - 32, previous);
    InsertAfter(state->free, allocation_end, previous);
    end = allocation_end;
  }

  auto& block = Block(used);
  block.signature = 0x5544;
  block.size = end - address;
  block.previous = 0;
  block.next = 0;
  uint32_t flags = (uint32_t(reverse) << 15) |
                   (uint32_t((used - begin) & 127) << 8);
  block.flags = flags;
  block.flags = flags | uint8_t(state->group);
  InsertAfter(state->used, used, state->used.last);
  return address;
}

void* AllocFromExpHeap(HeapHead* heap, size_t size, int alignment) {
  uint32_t raw_alignment = uint32_t(alignment);
  int32_t normalized = raw_alignment > 0xfffffffdU ? -4 : alignment;

  if (raw_alignment - 1 < 2) {
    normalized = 4;
  }

  uint64_t rounded = ((size > 1 ? size : 1) + 3) & ~uint64_t(3);
  auto& state = ExpState(heap);
  bool reverse = normalized < 0;
  bool best_fit = state.mode & 1;
  uintptr_t current = reverse ? state.free.last : state.free.first;
  uintptr_t selected = 0;
  uintptr_t address = 0;
  uint64_t smallest = ~uint64_t(0);
  uint64_t mask = reverse ? uint64_t(int64_t(normalized)) :
    uint64_t(int64_t(int32_t(0U - uint32_t(normalized))));
  uint64_t bias = uint32_t(normalized) + 31U;

  while (current) {
    uint64_t available = Block(current).size;
    uintptr_t candidate;
    bool fits;

    if (reverse) {
      candidate = (32 - rounded + current + available) & mask;
      fits = candidate >= current + 32;
    }
    else {
      candidate = (current + bias) & mask;
      fits = available >= rounded - 32 - current + candidate;
    }

    if (fits && available < smallest) {
      selected = current;
      address = candidate;
      smallest = available;

      if (!best_fit || available == rounded) {
        break;
      }
    }

    current = reverse ? Block(current).previous : Block(current).next;
  }

  if (!selected) {
    return nullptr;
  }

  AllocateExpHeapBlock(&state, selected, address, rounded, reverse);
  return reinterpret_cast<void*>(address);
}

bool ReleaseExpHeapRange(ExpHeapState* state, const ExpHeapRange* range) {
  uintptr_t begin = range->begin;
  uintptr_t end = range->end;
  uintptr_t previous = 0;
  uintptr_t next = state->free.first;

  while (next && next < begin) {
    previous = next;
    next = Block(next).next;
  }

  if (next && next == end) {
    end += Block(next).size + 32;
    Remove(state->free, next);
  }

  if (previous && range->begin == previous + Block(previous).size + 32) {
    uintptr_t merged = previous;
    previous = Block(merged).previous;
    Remove(state->free, merged);
    begin = merged;
  }

  uint64_t size = end - begin;

  if (size < 32) {
    return false;
  }

  InitializeFreeBlock(begin, size - 32, previous);
  InsertAfter(state->free, begin, previous);
  return true;
}

void FreeToExpHeap(HeapHead* heap, void* address) {
  uintptr_t pointer = reinterpret_cast<uintptr_t>(address);
  auto& block = Block(pointer - 32);
  ExpHeapRange range = {
    pointer - ((block.flags >> 8) & 127) - 32,
    pointer + block.size
  };
  auto& state = ExpState(heap);
  Remove(state.used, pointer - 32);
  ReleaseExpHeapRange(&state, &range);
}

size_t ResizeExpHeapMemoryBlock(HeapHead* heap, void* address, size_t size) {
  uintptr_t pointer = reinterpret_cast<uintptr_t>(address);
  uint64_t old_size = Block(pointer - 32).size;
  uint64_t rounded = (size + 3) & ~uint64_t(3);

  if (rounded == old_size) {
    return rounded;
  }

  auto& state = ExpState(heap);

  if (rounded < old_size) {
    Block(pointer - 32).size = rounded;
    ExpHeapRange range = {pointer + rounded, pointer + old_size};

    if (!ReleaseExpHeapRange(&state, &range)) {
      Block(pointer - 32).size = old_size;
    }

    return Block(pointer - 32).size;
  }

  uintptr_t next = state.free.first;

  while (next && next != pointer + old_size) {
    next = Block(next).next;
  }

  if (!next || rounded > old_size + Block(next).size + 32) {
    return 0;
  }

  uintptr_t end = next + Block(next).size + 32;
  uintptr_t previous = Block(next).previous;
  Remove(state.free, next);
  uintptr_t allocation_end = pointer + rounded;

  if (end - allocation_end < 32) {
    allocation_end = end;
  }

  uint64_t remaining = end - allocation_end;
  Block(pointer - 32).size = allocation_end - pointer;

  if (remaining >= 32) {
    InitializeFreeBlock(allocation_end, remaining - 32, previous);
    InsertAfter(state.free, allocation_end, previous);
  }

  return Block(pointer - 32).size;
}

uint16_t SetExpHeapAllocMode(HeapHead* heap, uint16_t mode) {
  auto& field = ExpState(heap).mode;
  uint16_t previous = field & 1;
  field = (field & ~uint16_t(1)) | (mode & 1);
  return previous;
}

uint16_t GetExpHeapAllocMode(HeapHead* heap) {
  return ExpState(heap).mode & 1;
}

uint8_t SetUseExpHeapMarginOfAlignment(HeapHead* heap, bool enabled) {
  auto& field = ExpState(heap).use_margin;
  uint8_t previous = field;
  field = enabled;
  return previous;
}

uint8_t GetUseExpHeapMarginOfAlignment(HeapHead* heap) {
  return ExpState(heap).use_margin;
}

uint16_t SetExpHeapGroupId(HeapHead* heap, uint16_t group) {
  auto& field = ExpState(heap).group;
  uint16_t previous = field;
  field = group;
  return previous;
}

uint16_t GetExpHeapGroupId(HeapHead* heap) {
  return ExpState(heap).group;
}

}

namespace nn::lmem {

detail::HeapHead* CreateExpHeap(void* address, size_t size, int options) {
  auto* heap = detail::CreateExpHeap(address, size, options);

  if (options & 4) {
    nn::os::InitializeMutex(&detail::Header(heap).mutex, false, 0);
  }

  return heap;
}

void DestroyExpHeap(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::FinalizeMutex(&detail::Header(heap).mutex);
  }

  detail::DestroyExpHeap(heap);
}

static void LockIfEnabled(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }
}

static void UnlockIfEnabled(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }
}

void* AllocateFromExpHeap(detail::HeapHead* heap, size_t size) {
  LockIfEnabled(heap);
  void* result = detail::AllocFromExpHeap(heap, size, 16);
  UnlockIfEnabled(heap);
  return result;
}

void* AllocateFromExpHeap(detail::HeapHead* heap, size_t size, int alignment) {
  LockIfEnabled(heap);
  void* result = detail::AllocFromExpHeap(heap, size, alignment);
  UnlockIfEnabled(heap);
  return result;
}

void FreeToExpHeap(detail::HeapHead* heap, void* block) {
  LockIfEnabled(heap);
  detail::FreeToExpHeap(heap, block);
  UnlockIfEnabled(heap);
}

size_t ResizeExpHeapBlock(detail::HeapHead* heap, void* block, size_t size) {
  LockIfEnabled(heap);
  size_t result = detail::ResizeExpHeapMemoryBlock(heap, block, size);
  UnlockIfEnabled(heap);
  return result;
}

void SetExpHeapAllocationMode(detail::HeapHead* heap,
  AllocationMode mode) {
  LockIfEnabled(heap);
  detail::SetExpHeapAllocMode(heap, uint16_t(mode));
  UnlockIfEnabled(heap);
}

AllocationMode GetExpHeapAllocationMode(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  auto mode = detail::GetExpHeapAllocMode(heap);
  UnlockIfEnabled(heap);
  return AllocationMode(mode);
}

void SetExpHeapUseMarginOfAlignment(detail::HeapHead* heap, bool enabled) {
  LockIfEnabled(heap);
  detail::SetUseExpHeapMarginOfAlignment(heap, enabled);
  UnlockIfEnabled(heap);
}

bool GetExpHeapUseMarginOfAlignment(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  uint8_t enabled = detail::GetUseExpHeapMarginOfAlignment(heap);
  UnlockIfEnabled(heap);
  return enabled & 1;
}

void SetExpHeapGroupId(detail::HeapHead* heap, uint16_t group) {
  LockIfEnabled(heap);
  detail::SetExpHeapGroupId(heap, group);
  UnlockIfEnabled(heap);
}

uint16_t GetExpHeapGroupId(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  uint16_t group = detail::GetExpHeapGroupId(heap);
  UnlockIfEnabled(heap);
  return group;
}

}
