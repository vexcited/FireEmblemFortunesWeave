#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/tls.hpp"

namespace nn::movie::detail {

struct HeapContext;

// Both helpers are internal to the movie module and pinned by address.
void *AllocateFromHeap(size_t size, HeapContext *heap);
void *AllocateFromHeap(unsigned int alignment, size_t size,
  HeapContext *heap);
void FreeToHeap(void *pointer, HeapContext *heap);

class HeapMemoryManager {
public:
  static HeapMemoryManager &GetInstance() {
    static HeapMemoryManager instance;
    return instance;
  }

  HeapMemoryManager() : m_Slot(), m_IsStatisticsEnabled(true) {}

  HeapContext *GetCurrentHeap() const {
    return reinterpret_cast<HeapContext *>(os::GetTlsValue(m_Slot));
  }

  bool IsStatisticsEnabled() const {
    return m_IsStatisticsEnabled;
  }

  static void SetCurrentHeap(HeapContext *heap) {
    os::SetTlsValue(GetInstance().m_Slot, reinterpret_cast<uintptr_t>(heap));
  }

private:
  os::TlsSlot m_Slot;
  bool m_IsStatisticsEnabled;
};

}

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
