#include "nn/lmem/exp_heap_inspection.hpp"

#include "exp_heap_internal.hpp"
#include "nn/lmem/unit_heap_adapters.hpp"

namespace nn::lmem::detail {

static const ExpHeapBlock& Block(uintptr_t address) {
  return *reinterpret_cast<const ExpHeapBlock*>(address);
}

static ExpHeapBlock& MutableBlock(uintptr_t address) {
  return *reinterpret_cast<ExpHeapBlock*>(address);
}

uintptr_t AdjustExpHeap(HeapHead* heap) {
  auto& list = ExpState(heap).free;
  uintptr_t last = list.last;

  if (!last || Header(heap).region_end != last + Block(last).size + 32) {
    return Header(heap).region_end;
  }

  uintptr_t previous = Block(last).previous;
  uintptr_t next = Block(last).next;

  if (previous) {
    MutableBlock(previous).next = next;
  }
  else {
    list.first = next;
  }

  if (next) {
    MutableBlock(next).previous = previous;
  }
  else {
    list.last = previous;
  }

  Header(heap).region_end -= Block(last).size + 32;
  return Header(heap).region_end;
}

size_t GetExpHeapTotalFreeSize(HeapHead* heap) {
  uint64_t total = 0;
  uintptr_t current = ExpState(heap).free.first;

  while (current) {
    total += Block(current).size;
    current = Block(current).next;
  }

  return total;
}

size_t GetExpHeapAllocatableSize(HeapHead* heap, int alignment) {
  uint32_t magnitude = alignment < 0 ? 0U - uint32_t(alignment) :
    uint32_t(alignment);
  uint64_t bias = uint64_t(int64_t(int32_t(magnitude - 1)));
  uint64_t mask = uint64_t(int64_t(int32_t(0U - magnitude)));
  uintptr_t current = ExpState(heap).free.first;
  uint64_t maximum = 0;
  uint64_t smallest_margin = ~uint64_t(0);

  while (current) {
    uintptr_t begin = current + 32;
    uintptr_t aligned = (begin + bias) & mask;
    uintptr_t end = begin + Block(current).size;
    uint64_t available = end - aligned;
    uint64_t margin = aligned - begin;

    if (end > aligned && (available > maximum ||
        (available == maximum && margin < smallest_margin))) {
      maximum = available;
      smallest_margin = margin;
    }

    current = Block(current).next;
  }

  return maximum;
}

size_t GetExpHeapMemoryBlockSize(const void* block) {
  return Block(reinterpret_cast<uintptr_t>(block) - 32).size;
}

uint16_t GetMemoryBlockHeapGroupId(const void* block) {
  return uint8_t(Block(reinterpret_cast<uintptr_t>(block) - 32).flags);
}

uint16_t GetMemoryBlockHeapAllocDir(const void* block) {
  return uint16_t(Block(reinterpret_cast<uintptr_t>(block) - 32).flags) >> 15;
}

static bool ValidBlock(HeapHead* heap, uintptr_t block, uint16_t signature) {
  return block >= Header(heap).region_begin &&
    block + 32 <= Header(heap).region_end &&
    Block(block).signature == signature &&
    block + 32 + Block(block).size <= Header(heap).region_end;
}

bool CheckExpHeap(HeapHead* heap, uint32_t) {
  if (Header(heap).signature != 0x45585048) {
    return false;
  }

  uintptr_t current = ExpState(heap).used.first;
  uintptr_t previous = 0;
  uint64_t total = 0;

  while (current) {
    if (!ValidBlock(heap, current, 0x5544) ||
        Block(current).previous != previous) {
      return false;
    }

    total += Block(current).size + ((Block(current).flags >> 8) & 127) + 32;
    previous = current;
    current = Block(current).next;
  }

  if (previous != ExpState(heap).used.last) {
    return false;
  }

  current = ExpState(heap).free.first;
  previous = 0;

  while (current) {
    if (!ValidBlock(heap, current, 0x4652) ||
        Block(current).previous != previous) {
      return false;
    }

    total += Block(current).size + 32;
    previous = current;
    current = Block(current).next;
  }

  return previous == ExpState(heap).free.last &&
    total == Header(heap).region_end - Header(heap).region_begin;
}

bool CheckExpHeapMemoryBlock(const void* block, HeapHead* heap, uint32_t) {
  uintptr_t pointer = reinterpret_cast<uintptr_t>(block);

  if (!pointer) {
    return false;
  }

  uintptr_t header = pointer - 32;

  if (heap ? !ValidBlock(heap, header, 0x5544) :
      Block(header).signature != 0x5544) {
    return false;
  }

  uintptr_t previous = Block(header).previous;

  if (previous) {
    if (heap ? !ValidBlock(heap, previous, 0x5544) :
        Block(previous).signature != 0x5544) {
      return false;
    }

    if (Block(previous).next != header) {
      return false;
    }
  }
  else if (heap && ExpState(heap).used.first != header) {
    return false;
  }

  uintptr_t next = Block(header).next;

  if (next) {
    if (heap ? !ValidBlock(heap, next, 0x5544) :
        Block(next).signature != 0x5544) {
      return false;
    }

    return Block(next).previous == header;
  }

  return !heap || ExpState(heap).used.last == header;
}

void VisitExpHeapAllocated(HeapHead* heap,
  void (*visitor)(void*, nn::lmem::detail::HeapHead*, size_t),
  size_t argument) {
  uintptr_t current = ExpState(heap).used.first;

  while (current) {
    uintptr_t next = Block(current).next;
    visitor(reinterpret_cast<void*>(current + 32), heap, argument);
    current = next;
  }
}

void DumpExpHeap(HeapHead* heap) {
  DumpHeapHead(heap);
}

}

namespace nn::lmem {

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

uintptr_t AdjustExpHeap(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  uintptr_t end = detail::AdjustExpHeap(heap);
  UnlockIfEnabled(heap);
  return end;
}

size_t GetExpHeapTotalFreeSize(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  size_t size = detail::GetExpHeapTotalFreeSize(heap);
  UnlockIfEnabled(heap);
  return size;
}

size_t GetExpHeapAllocatableSize(detail::HeapHead* heap, int alignment) {
  LockIfEnabled(heap);
  size_t size = detail::GetExpHeapAllocatableSize(heap, alignment);
  UnlockIfEnabled(heap);
  return size;
}

size_t GetExpHeapBlockSize(const void* block) {
  return detail::GetExpHeapMemoryBlockSize(block);
}

uint16_t GetExpHeapGroupIdOfBlock(const void* block) {
  return detail::GetMemoryBlockHeapGroupId(block);
}

uint16_t GetExpHeapAllocationDirectionOfBlock(const void* block) {
  return detail::GetMemoryBlockHeapAllocDir(block);
}

bool CheckExpHeap(detail::HeapHead* heap, int options) {
  LockIfEnabled(heap);
  bool valid = detail::CheckExpHeap(heap, uint32_t(options));
  UnlockIfEnabled(heap);
  return valid;
}

bool CheckExpHeapBlock(detail::HeapHead* heap, const void* block, int options) {
  LockIfEnabled(heap);
  bool valid = detail::CheckExpHeapMemoryBlock(block, heap, uint32_t(options));
  UnlockIfEnabled(heap);
  return valid;
}

void VisitExpHeapAllBlocks(detail::HeapHead* heap,
  void (*visitor)(void*, nn::lmem::detail::HeapHead*, size_t),
  size_t argument) {
  LockIfEnabled(heap);
  detail::VisitExpHeapAllocated(heap, visitor, argument);
  UnlockIfEnabled(heap);
}

void DumpExpHeap(detail::HeapHead* heap) {
  LockIfEnabled(heap);
  detail::DumpExpHeap(heap);
  UnlockIfEnabled(heap);
}

}
