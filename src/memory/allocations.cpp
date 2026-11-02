#include "memory/heap_manager.hpp"

extern "C" void* memset(void* address, int value, size_t size) noexcept;

using fw::memory::g_heap_manager;

extern "C" void* malloc(size_t size) noexcept {
  return g_heap_manager->Allocate(size, 16, 0);
}

extern "C" void free(void* address) noexcept {
  if (address == nullptr) {
    return;
  }

  g_heap_manager->GetAllocator(0).Free(address);
}

extern "C" void* calloc(size_t count, size_t size) noexcept {
  // The original multiplication wraps without an overflow check.
  const size_t total_size = count * size;
  void* allocation = g_heap_manager->Allocate(total_size, 16, 0);

  if (allocation == nullptr) {
    return nullptr;
  }

  return memset(allocation, 0, total_size);
}

extern "C" void* realloc(void* address, size_t size) noexcept {
  fw::memory::HeapManager* manager = g_heap_manager;

  if (address == nullptr) {
    return manager->Allocate(size, 16, 0);
  }

  return manager->GetAllocator(0).Reallocate(address, size);
}

extern "C" void* aligned_alloc(size_t alignment, size_t size) noexcept {
  return g_heap_manager->Allocate(size, alignment, 0);
}

namespace fw::memory {

void* AllocateForFileSystem(size_t size) {
  return g_heap_manager->Allocate(size, 16, 0);
}

void FreeForFileSystem(void* address, size_t) {
  if (address == nullptr) {
    return;
  }

  g_heap_manager->GetAllocator(0).Free(address);
}

}
