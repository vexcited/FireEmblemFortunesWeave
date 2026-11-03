#include "nn/lmem/unit_heap_adapters.hpp"

#include "heap_head.hpp"

namespace nn::lmem::detail {

void DumpHeapHead(const HeapHead*) {
}

void DumpUnitHeap(HeapHead* heap) {
  DumpHeapHead(heap);
}

}

namespace nn::lmem {

detail::HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                                int options) {
  auto* heap = detail::CreateUnitHeap(address, size, unit_size, 16,
    static_cast<uint16_t>(options), InfoPlacement::Front, nullptr);

  if (options & 4) {
    nn::os::InitializeMutex(&detail::Header(heap).mutex, false, 0);
  }

  return heap;
}

detail::HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                                int options, int alignment,
                                InfoPlacement placement) {
  auto* heap = detail::CreateUnitHeap(address, size, unit_size, alignment,
    static_cast<uint16_t>(options), placement, nullptr);

  if (options & 4) {
    nn::os::InitializeMutex(&detail::Header(heap).mutex, false, 0);
  }

  return heap;
}

void DumpUnitHeap(detail::HeapHead* heap) {
  if (detail::Header(heap).options & 4) {
    nn::os::LockMutex(&detail::Header(heap).mutex);
  }

  detail::DumpUnitHeap(heap);

  if (detail::Header(heap).options & 4) {
    nn::os::UnlockMutex(&detail::Header(heap).mutex);
  }
}

}
