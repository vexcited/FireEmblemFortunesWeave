#pragma once

#include <stdint.h>

#include "nn/audio/audio_stream.hpp"
#include "nn/lmem/unit_heap.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/sf/unit_heap_memory_resource.hpp"

namespace nn::lmem {

void DestroyUnitHeap(detail::HeapHead* heap);

}

namespace nn::audio::devmgr::detail {

// Service objects of each session come from a reference counted unit heap.
template <size_t BufferSize>
struct ServiceObjectAllocator {
  struct Storage {
    alignas(8) uint8_t heapHeader[144];
    sf::UnitHeapMemoryResource resource;
  };

  Storage* storage;
  os::SdkMutexType mutex;
  int referenceCount;
  Storage body;
  alignas(16) uint8_t buffer[BufferSize];

  void Release() {
    mutex.Lock();
    if (--referenceCount == 0) {
      lmem::DestroyUnitHeap(storage->resource.heap);
      storage = nullptr;
    }
    mutex.Unlock();
  }
};

struct InitializationState {
  os::SdkMutexType mutex;
  int count;
};

}
