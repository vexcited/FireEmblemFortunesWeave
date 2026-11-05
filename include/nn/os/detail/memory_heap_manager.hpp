#pragma once

#include <stddef.h>
#include <stdint.h>

#include <new>

#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::os::detail {

class FreeMemoryNode {
public:
  void Initialize(size_t size) {
    new (&m_node) util::IntrusiveListNode();
    m_size = size;
  }

  void Clean() {
    __builtin_memset(this, 0, sizeof(*this));
  }

  uintptr_t GetAddress() const {
    return reinterpret_cast<uintptr_t>(this);
  }

  size_t GetSize() const {
    return m_size;
  }

  void SetSize(size_t size) {
    m_size = size;
  }

  util::IntrusiveListNode m_node;

private:
  size_t m_size;
};

class MemoryHeapManagerImplByHorizon {
public:
  Result SetHeapSize(uintptr_t* address, size_t size);
};

class MemoryHeapManager {
public:
  using FreeMemoryList = util::IntrusiveList<FreeMemoryNode,
    util::IntrusiveListMemberNodeTraits<FreeMemoryNode,
      &FreeMemoryNode::m_node, FreeMemoryNode, 24>>;

  Result SetHeapSize(size_t size);
  Result AllocateFromHeap(uintptr_t* address, size_t size);
  void ReleaseToHeap(uintptr_t address, size_t size);

  FreeMemoryList::iterator FindFreeSpaceUnsafe(size_t size);
  FreeMemoryList::iterator ConcatenatePreviousFreeMemoryNodeUnsafe(
    FreeMemoryList::iterator node);
  void SplitFreeMemoryNodeUnsafe(FreeMemoryList::iterator node, size_t size);
  void AddToFreeSpaceUnsafe(uintptr_t address, size_t size);
  bool IsRegionAllocatedMemoryUnsafe(uintptr_t address, size_t size);

  uintptr_t m_HeapAddress;
  size_t m_HeapSize;
  size_t m_UsedHeapSize;
  FreeMemoryList m_FreeMemoryList;
  InternalCriticalSection m_CriticalSection;
  MemoryHeapManagerImplByHorizon m_Impl;
};

}
