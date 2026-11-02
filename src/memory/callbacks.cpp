#include "memory/callbacks.hpp"
#include "memory/heap_manager.hpp"

namespace fw::memory {

DefaultMemoryResource::~DefaultMemoryResource() = default;

void DefaultMemoryResource::operator delete(void* address) noexcept {
  g_heap_manager->GetAllocator(0).Free(address);
}

void* DefaultMemoryResource::do_allocate(size_t size, size_t alignment) {
  return g_heap_manager->Allocate(size, alignment, 0);
}

void DefaultMemoryResource::do_deallocate(
  void* address, size_t, size_t
) {
  if (address != nullptr) {
    g_heap_manager->GetAllocator(0).Free(address);
  }
}

bool DefaultMemoryResource::do_is_equal(
  const std::pmr::memory_resource& other
) const noexcept {
  return this == &other;
}

}
