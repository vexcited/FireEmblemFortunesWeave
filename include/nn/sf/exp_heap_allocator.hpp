#pragma once

#include <stddef.h>

#include "nn/lmem/exp_heap.hpp"
#include "nn/os/mutex.hpp"

namespace nn::sf {

class ExpHeapAllocator {
public:
  void Attach(lmem::detail::HeapHead* heap) {
    m_Heap = heap;
    os::InitializeMutex(&m_Mutex, false, 0);
  }

  void* Allocate(size_t size) {
    os::LockMutex(&m_Mutex);
    void* pointer = lmem::AllocateFromExpHeap(m_Heap, size);
    os::UnlockMutex(&m_Mutex);
    return pointer;
  }

  void Deallocate(void* pointer, size_t size) {
    static_cast<void>(size);
    os::LockMutex(&m_Mutex);
    lmem::FreeToExpHeap(m_Heap, pointer);
    os::UnlockMutex(&m_Mutex);
  }

private:
  lmem::detail::HeapHead* m_Heap;
  os::MutexType m_Mutex;
};

template <typename StatefulAllocator>
class StatefulAllocationPolicy {
public:
  using Allocator = StatefulAllocator;

  static void* AllocateAligned(Allocator* pAllocator, size_t size,
    size_t alignment) {
    static_cast<void>(alignment);
    return pAllocator->Allocate(size);
  }

  static void DeallocateAligned(Allocator* pAllocator, void* pointer,
    size_t size, size_t alignment) {
    static_cast<void>(alignment);
    pAllocator->Deallocate(pointer, size);
  }
};

}
