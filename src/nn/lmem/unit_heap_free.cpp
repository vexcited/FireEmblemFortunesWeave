#include "nn/lmem/unit_heap_free.hpp"

#include "heap_head.hpp"

namespace nn::lmem::detail {

struct __attribute__((packed, may_alias)) ReleasedUnitBlock {
  uintptr_t next;
};

void FreeToUnitHeap(HeapHead* heap, void* block) {
  if (!block) {
    return;
  }

  auto& state = UnitState(heap);
  reinterpret_cast<ReleasedUnitBlock*>(block)->next = state.free_head;
  state.free_head = reinterpret_cast<uintptr_t>(block);
  --state.allocated;
}

}

namespace nn::lmem {

void FreeToUnitHeap(detail::HeapHead* heap, void* block) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  detail::FreeToUnitHeap(heap, block);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }
}

}
