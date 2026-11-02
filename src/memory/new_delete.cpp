#include <new>

#include "memory/heap_manager.hpp"

namespace {

void Release(void* address) {
  if (address == nullptr) {
    return;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(address);
}

}

void* operator new(size_t size) {
  return fw::memory::g_heap_manager->Allocate(size, 16, 0);
}

void* operator new(size_t size, std::align_val_t alignment) {
  return fw::memory::g_heap_manager->Allocate(
    size, static_cast<size_t>(alignment), 0
  );
}

void* operator new[](size_t size) {
  return fw::memory::g_heap_manager->Allocate(size, 16, 0);
}

void* operator new[](size_t size, std::align_val_t alignment) {
  return fw::memory::g_heap_manager->Allocate(
    size, static_cast<size_t>(alignment), 0
  );
}

void operator delete(void* address) noexcept {
  Release(address);
}

void operator delete(void* address, size_t) noexcept {
  Release(address);
}

void operator delete(void* address, std::align_val_t) noexcept {
  Release(address);
}

void operator delete(void* address, size_t, std::align_val_t) noexcept {
  Release(address);
}

void operator delete[](void* address) noexcept {
  Release(address);
}

void operator delete[](void* address, size_t) noexcept {
  Release(address);
}

void operator delete[](void* address, std::align_val_t) noexcept {
  Release(address);
}

void operator delete[](void* address, size_t, std::align_val_t) noexcept {
  Release(address);
}
