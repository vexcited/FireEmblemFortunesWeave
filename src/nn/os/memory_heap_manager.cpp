#include "nn/os/detail/memory_heap_manager.hpp"


#include "nn/diag/diag_abort.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/thread_manager.hpp"
#include "nn/os/tls.hpp"

namespace nn::os {

enum MemoryAttribute {
  MemoryAttribute_Normal,
  MemoryAttribute_Uncached,
};

Result SetMemoryPermission(uintptr_t address, size_t size,
  MemoryPermission permission);
Result SetMemoryAttribute(uintptr_t address, size_t size,
  MemoryAttribute attribute);

}

namespace nn::os::detail {

namespace {

constexpr Result ResultOutOfMemory = {0x1003};
constexpr Result ResultBusy = {0x803};

class ScopedThreadLock {
public:
  ScopedThreadLock() : m_Thread(GetCurrentThread()) {
    GetLock()->Enter();
  }

  ~ScopedThreadLock() {
    GetLock()->Leave();
  }

private:
  InternalCriticalSection* GetLock() {
    return reinterpret_cast<InternalCriticalSection*>(
      &m_Thread->critical_section);
  }

  ThreadType* m_Thread;
};

class ScopedLock {
public:
  explicit ScopedLock(InternalCriticalSection& lock) : m_Lock(lock) {
    m_Lock.Enter();
  }

  ~ScopedLock() {
    m_Lock.Leave();
  }

private:
  InternalCriticalSection& m_Lock;
};

}

MemoryHeapManager::FreeMemoryList::iterator
MemoryHeapManager::FindFreeSpaceUnsafe(size_t size) {
  auto target = m_FreeMemoryList.end();

  for (auto it = m_FreeMemoryList.begin(); it != m_FreeMemoryList.end();
    ++it) {
    const size_t nodeSize = it->GetSize();

    if (nodeSize >= size) {
      if (target == m_FreeMemoryList.end() || nodeSize < target->GetSize()) {
        target = it;
      }
    }
  }

  return target;
}

MemoryHeapManager::FreeMemoryList::iterator
MemoryHeapManager::ConcatenatePreviousFreeMemoryNodeUnsafe(
  FreeMemoryList::iterator node) {
  auto previous = node;
  --previous;

  if (node == m_FreeMemoryList.end() ||
    previous == m_FreeMemoryList.end()) {
    return node;
  }

  if (previous->GetAddress() + previous->GetSize() != node->GetAddress()) {
    return node;
  }

  previous->SetSize(previous->GetSize() + node->GetSize());
  m_FreeMemoryList.erase(node);
  node->Clean();
  return previous;
}

void MemoryHeapManager::SplitFreeMemoryNodeUnsafe(
  FreeMemoryList::iterator node, size_t size) {
  auto* next = reinterpret_cast<FreeMemoryNode*>(node->GetAddress() + size);
  next->Initialize(node->GetSize() - size);
  node->SetSize(size);
  m_FreeMemoryList.insert(++node, *next);
}

void MemoryHeapManager::AddToFreeSpaceUnsafe(uintptr_t address, size_t size) {
  auto* node = reinterpret_cast<FreeMemoryNode*>(address);
  node->Initialize(size);

  auto it = m_FreeMemoryList.begin();

  while (it != m_FreeMemoryList.end() && address >= it->GetAddress()) {
    ++it;
  }

  it = m_FreeMemoryList.insert(it, *node);
  it = ConcatenatePreviousFreeMemoryNodeUnsafe(it);
  ConcatenatePreviousFreeMemoryNodeUnsafe(++it);
}

bool MemoryHeapManager::IsRegionAllocatedMemoryUnsafe(uintptr_t address,
  size_t size) {
  for (auto& node : m_FreeMemoryList) {
    if (address + size > node.GetAddress() &&
      address < node.GetAddress() + node.GetSize()) {
      return false;
    }
  }

  return true;
}

Result MemoryHeapManager::SetHeapSize(size_t size) {
  ScopedThreadLock threadLock;
  ScopedLock lock(m_CriticalSection);

  if (size > m_HeapSize) {
    uintptr_t address = 0;
    NN_RESULT_DO(m_Impl.SetHeapSize(&address, size));

    if (address == 0) {
      return ResultOutOfMemory;
    }

    AddToFreeSpaceUnsafe(address + m_HeapSize, size - m_HeapSize);
    m_HeapAddress = address;
    m_HeapSize = size;
    return {0};
  }

  if (size < m_HeapSize) {
    const size_t difference = m_HeapSize - size;

    if (m_FreeMemoryList.empty()) {
      return ResultBusy;
    }

    FreeMemoryNode& last = m_FreeMemoryList.back();

    if (m_HeapAddress + size < last.GetAddress()) {
      return ResultBusy;
    }

    if (last.GetSize() < difference) {
      return ResultBusy;
    }

    if (last.GetSize() == difference) {
      m_FreeMemoryList.erase(m_FreeMemoryList.iterator_to(last));
      last.Clean();
    }
    else {
      last.SetSize(last.GetSize() - difference);
    }

    uintptr_t address = 0;
    NN_ABORT_UNLESS(m_Impl.SetHeapSize(&address, size).IsSuccess());
    m_HeapSize = size;

    if (size == 0) {
      m_HeapAddress = 0;
    }
  }

  return {0};
}

Result MemoryHeapManager::AllocateFromHeap(uintptr_t* address, size_t size) {
  ScopedThreadLock threadLock;
  ScopedLock lock(m_CriticalSection);

  auto it = FindFreeSpaceUnsafe(size);

  if (it == m_FreeMemoryList.end()) {
    return ResultOutOfMemory;
  }

  if (it->GetSize() > size) {
    SplitFreeMemoryNodeUnsafe(it, size);
  }

  m_FreeMemoryList.erase(it);
  it->Clean();
  m_UsedHeapSize += size;
  *address = it->GetAddress();
  return {0};
}

void MemoryHeapManager::ReleaseToHeap(uintptr_t address, size_t size) {
  ScopedThreadLock threadLock;
  ScopedLock lock(m_CriticalSection);

  NN_ABORT_UNLESS(IsRegionAllocatedMemoryUnsafe(address, size));
  SetMemoryPermission(address, size, MemoryPermission_ReadWrite);
  SetMemoryAttribute(address, size, MemoryAttribute_Normal);
  AddToFreeSpaceUnsafe(address, size);
  m_UsedHeapSize -= size;
}

}
