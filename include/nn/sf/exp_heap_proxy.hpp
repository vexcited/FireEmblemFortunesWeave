#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/sf/exp_heap_allocator.hpp"

namespace nn::sf::detail {

// A client session proxy whose memory comes from a per tag expanded heap.
struct ExpHeapProxy {
  uintptr_t* vtable;
  uint32_t handleKind;
  uint32_t handle;
  uintptr_t* referenceVtable;
  uint32_t references;
};

// The reference counter sits behind the methods of the interface, so its
// vtable starts further in for larger interfaces.
template <typename Interface>
inline Interface* CreateExpHeapProxy(ExpHeapAllocator& allocator,
  uint32_t handle, uintptr_t* pVtable, size_t referenceVtableOffset) {
  auto* pProxy =
    static_cast<ExpHeapProxy*>(allocator.Allocate(sizeof(ExpHeapProxy)));
  if (pProxy != nullptr) {
    pProxy->references = 1;
    pProxy->handleKind = 1;
    pProxy->handle = handle;
    pProxy->vtable = pVtable;
    pProxy->referenceVtable = pVtable + referenceVtableOffset;
  }
  return reinterpret_cast<Interface*>(pProxy);
}

}
