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
