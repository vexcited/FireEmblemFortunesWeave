#include "memory/heap_manager.hpp"

namespace fw::memory {

void* HeapManager::Allocate(
  size_t size, size_t alignment, uint32_t pool_index
) {
  void* allocation = GetAllocator(pool_index).Allocate(size, alignment);

  if (size == 0 || allocation != nullptr || (allocation_failed & 1) != 0) {
    return allocation;
  }

  allocation_failed = 1;
  failed_pool_name = g_heap_configs[pool_index].name;

  HeapManager* manager = g_heap_manager;
  void* backing = manager->pools[pool_index].backing;
  failed_pool_size = backing != nullptr
    ? manager->primary.GetSizeOf(backing)
    : g_heap_configs[pool_index].size;

  total_free_size = GetAllocator(pool_index).GetTotalFreeSize();
  allocatable_size = g_heap_manager->GetAllocator(pool_index)
    .GetAllocatableSize();

  return allocation;
}

}
