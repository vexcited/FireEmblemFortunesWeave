#include "nn/sf/unit_heap_memory_resource.hpp"

#include "nn/lmem/unit_heap_free.hpp"

namespace nn::sf {

void* UnitHeapMemoryResource::Allocate(size_t, size_t) {
  return lmem::AllocateFromUnitHeap(heap);
}

void UnitHeapMemoryResource::Deallocate(void* block, size_t, size_t) {
  lmem::FreeToUnitHeap(heap, block);
}

}
