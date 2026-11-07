#pragma once

#include <stddef.h>
#include <stdint.h>

#include <new>

#include "nn/movie/detail/movie_heap_memory_manager.hpp"

// The SDK replaces the global allocation functions of its AOSP code with
// inline versions that use the heap of the current movie thread.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winline-new-delete"

inline void *operator new(size_t size) {
  using nn::movie::detail::HeapMemoryManager;
  return nn::movie::detail::AllocateFromHeap(16, size,
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

inline void *operator new[](size_t size) {
  using nn::movie::detail::HeapMemoryManager;
  return nn::movie::detail::AllocateFromHeap(size,
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

inline void *operator new(size_t size, const std::nothrow_t &) noexcept {
  return operator new(size);
}

inline void *operator new[](size_t size, const std::nothrow_t &) noexcept {
  using nn::movie::detail::HeapMemoryManager;
  return nn::movie::detail::AllocateFromHeap(size,
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

inline void operator delete(void *pointer) noexcept {
  using nn::movie::detail::HeapMemoryManager;
  nn::movie::detail::FreeToHeap(pointer,
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

inline void operator delete[](void *pointer) noexcept {
  using nn::movie::detail::HeapMemoryManager;
  nn::movie::detail::FreeToHeap(pointer,
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

inline void operator delete(void *pointer, size_t) noexcept {
  operator delete(pointer);
}

inline void operator delete[](void *pointer, size_t) noexcept {
  operator delete[](pointer);
}

#pragma clang diagnostic pop
