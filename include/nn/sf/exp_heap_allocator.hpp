#pragma once

#include "nn/lmem/exp_heap.hpp"
#include "nn/os/mutex.hpp"

namespace nn::sf {

class ExpHeapAllocator {
public:
  void Attach(lmem::detail::HeapHead* heap) {
    m_Heap = heap;
    os::InitializeMutex(&m_Mutex, false, 0);
  }

private:
  lmem::detail::HeapHead* m_Heap;
  os::MutexType m_Mutex;
};

}
