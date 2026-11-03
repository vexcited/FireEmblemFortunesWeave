#include "nn/lmem/unit_heap_queries.hpp"

#include "heap_head.hpp"

namespace nn::lmem::detail {

void FinalizeHeap(HeapHead*) {
}

void DestroyUnitHeap(HeapHead* heap) {
  if (UnitState(heap).free_head) {
    UnitState(heap).free_head = 0;
  }

  FinalizeHeap(heap);
}

void InvalidateUnitHeap(HeapHead* heap) {
  UnitState(heap).free_head = 0;
}

size_t GetUnitHeapUnitSize(HeapHead* heap) {
  return UnitState(heap).unit_size;
}

int GetUnitHeapAllocatableCount(HeapHead* heap) {
  uintptr_t next = UnitState(heap).free_head;
  uint32_t count = 0;

  while (next) {
    ++count;
    next = *reinterpret_cast<const uintptr_t*>(next);
  }

  return static_cast<int32_t>(count);
}

int GetUnitHeapAllocatedCount(HeapHead* heap) {
  return static_cast<int32_t>(UnitState(heap).allocated);
}

int GetUnitHeapAlignment(HeapHead* heap) {
  return UnitState(heap).alignment;
}

size_t GetRequiredUnitHeapSize(size_t unit_size, int count, int alignment,
                              bool with_header) {
  int32_t effective_alignment = alignment > 8 ? alignment : 8;
  uint32_t bias = uint32_t(effective_alignment) - 1;
  uint32_t overhead = with_header ? uint32_t(effective_alignment) + 143 : bias;
  uint64_t mask = uint64_t(int64_t(-effective_alignment));
  uint64_t rounded_size = (unit_size + bias) & mask;
  return rounded_size * uint64_t(int64_t(count)) + overhead;
}

}

namespace nn::lmem {

void DestroyUnitHeap(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::FinalizeMutex(&detail::Header(heap).mutex);
  }

  detail::DestroyUnitHeap(heap);
}

void InvalidateUnitHeap(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  detail::InvalidateUnitHeap(heap);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }
}

size_t GetUnitHeapUnitSize(detail::HeapHead* heap) {
  return detail::GetUnitHeapUnitSize(heap);
}

int GetUnitHeapAllocatableCount(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  int count = detail::GetUnitHeapAllocatableCount(heap);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }

  return count;
}

int GetUnitHeapAllocatedCount(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  int count = detail::GetUnitHeapAllocatedCount(heap);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }

  return count;
}

int GetUnitHeapAlignment(detail::HeapHead* heap) {
  return detail::GetUnitHeapAlignment(heap);
}

size_t GetRequiredUnitHeapSize(size_t unit_size, int count, int alignment,
                              bool with_header) {
  return detail::GetRequiredUnitHeapSize(unit_size, count, alignment,
                                       with_header);
}

}
