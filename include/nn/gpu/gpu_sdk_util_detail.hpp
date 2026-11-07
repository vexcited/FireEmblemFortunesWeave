#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>
#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/gpu/gpu_sdk_util.hpp"
#include "nn/os/event.hpp"
#include "nn/util/intrusive_list.hpp"
#include "nn/util/intrusive_rb_tree.hpp"

namespace nn::gpu::sdk::util::detail {

template<typename T, size_t Offset>
T* GetItem(nn::util::IntrusiveRbTreeNode* node) {
  return reinterpret_cast<T*>(reinterpret_cast<uintptr_t>(node) - Offset);
}

inline int CompareValue(uint64_t lhs, uint64_t rhs) {
  if (lhs < rhs) {
    return -1;
  }
  return lhs > rhs ? 1 : 0;
}

// An allocated range of addresses followed by the free gap up to the limit.
// Every block is linked by address and blocks with a free gap are kept in a
// tree ordered by gap size, then by limit.
struct AddressBlock {
  uint64_t begin;
  uint64_t last;
  uint64_t limit;
  nn::util::IntrusiveListNode listNode;
  nn::util::IntrusiveRbTreeNode treeNode;

  AddressBlock() : begin(-1), last(0), limit(0), treeNode() {}

  // A search key matching every block with at least this free size.
  explicit AddressBlock(uint64_t freeSize)
    : begin(-1), last(-1), limit(freeSize), treeNode() {}

  uint64_t GetFreeSize() const {
    return limit - last - 1;
  }

  static AddressBlock* FromTreeNode(nn::util::IntrusiveRbTreeNode* node) {
    return GetItem<AddressBlock, offsetof(AddressBlock, treeNode)>(node);
  }

  static AddressBlock* FromListNode(nn::util::IntrusiveListNode* node) {
    return reinterpret_cast<AddressBlock*>(
      reinterpret_cast<uintptr_t>(node) - offsetof(AddressBlock, listNode));
  }
};

struct AddressBlockCompare {
  int operator()(const AddressBlock* lhs, const AddressBlock* rhs) const {
    uint64_t lhsSize = lhs->GetFreeSize();
    uint64_t rhsSize = rhs->GetFreeSize();
    if (lhsSize != rhsSize) {
      return CompareValue(lhsSize, rhsSize);
    }
    return CompareValue(lhs->limit, rhs->limit);
  }
};

struct AlignedRequest {
  uint64_t size;
  uint64_t alignmentMask;
  uint64_t min;
  uint64_t max;
};

class AddressAllocator {
public:
  void Initialize(uint64_t begin, uint64_t end);
  void AddFreeBlock(AddressBlock* block);
  [[gnu::noinline]] bool Allocate(AddressBlock* block, uint64_t size,
    uint64_t lastOffset, uint64_t alignmentMask);
  [[gnu::noinline]] bool AllocateInRange(AddressBlock* block, uint64_t size,
    const AlignedRequest& request);
  [[gnu::noinline]] void Free(AddressBlock* block);

private:
  void RemoveFreeBlock(AddressBlock* block) {
    if (block == &m_Head) {
      if (m_Head.begin == 1) {
        m_FreeTree.Remove(&block->treeNode);
        m_Head.begin = 0;
      }
    }
    else if (block->last != block->limit) {
      m_FreeTree.Remove(&block->treeNode);
    }
  }

  [[gnu::noinline]] bool TryAllocate(AddressBlock* block, AddressBlock* from,
    uint64_t size, uint64_t alignmentMask);
  [[gnu::noinline]] bool TryAllocateInRange(AddressBlock* block,
    AddressBlock* from, AlignedRequest request);
  [[gnu::always_inline]] void Split(AddressBlock* block, AddressBlock* from,
    uint64_t begin, uint64_t last);

  // The head block uses its begin field as the flag of its free gap.
  AddressBlock m_Head;
  nn::util::IntrusiveListNode m_List;
  nn::util::IntrusiveRbTreeImpl m_FreeTree;
};

class AddressSpaceRegion {
public:
  void Initialize(uint64_t begin, uint64_t end);

  bool IsValid() const {
    return m_Begin <= m_End;
  }

  bool Contains(uint64_t address) const {
    return address >= m_Begin && address <= m_End;
  }

  bool Allocate(AddressBlock* block, uint64_t size, uint64_t alignment) {
    if (!IsValid()) {
      return false;
    }
    m_Mutex.Lock();
    bool result = false;
    if (IsValid() && size != 0) {
      uint64_t last = ((size + alignment - 1) & -alignment) - 1;
      result = m_Allocator.Allocate(block, last, last, alignment - 1);
    }
    m_Mutex.Unlock();
    return result;
  }

  bool AllocateFixed(AddressBlock* block, uint64_t first, uint64_t last) {
    if (!Contains(first)) {
      return false;
    }
    m_Mutex.Lock();
    bool result = false;
    if (first <= last && IsValid()) {
      uint64_t size = last - first;
      result = m_Allocator.AllocateInRange(block, size,
        AlignedRequest{size, 0, first, last});
    }
    m_Mutex.Unlock();
    return result;
  }

  void Free(AddressBlock* block) {
    NN_ABORT_UNLESS(Contains(block->begin));
    m_Mutex.Lock();
    m_Allocator.Free(block);
    m_Mutex.Unlock();
  }

  os::SdkMutexType m_Mutex;
  uint64_t m_Begin;
  uint64_t m_End;
  AddressAllocator m_Allocator;
};


// The user allocator of the machine, counting the live objects.
struct ObjectAllocator {
  void* (*allocate)(size_t size, size_t alignment, void* userData);
  void (*free)(void* pointer, void* userData);
  void* userData;
  std::atomic<uint64_t> count;

  template<typename T>
  T* New() {
    void* pointer = allocate(sizeof(T), alignof(T), userData);
    if (pointer == nullptr) {
      return nullptr;
    }
    count.fetch_add(1, std::memory_order_relaxed);
    return new (pointer) T();
  }

  template<typename T>
  void Delete(T* object) {
    count.fetch_sub(1, std::memory_order_relaxed);
    free(object, userData);
  }
};

// Mapping keys hold the page of the last address and the kind in the top
// 12 bits.
inline uint64_t MakeMappingKey(uint8_t kind, uint64_t address) {
  return (address >> 12) | (uint64_t(kind) << 52);
}

struct MappingEntry;

using MappingReleaseFunction = void (*)(VirtualMachineType* const* machine,
  MappingEntry* entry);

struct MappingEntry {
  uint64_t key;
  nn::util::IntrusiveRbTreeNode node;
  uint64_t address;
  uint8_t type;
  uint8_t attribute;
  uint8_t reserved32[6];
  bool isValid;
  int referenceCount;
  uint64_t jobCount;
  MappingReleaseFunction release;
  VirtualMachineType* machine;

  uint8_t GetKind() const {
    return key >> 52;
  }

  uint64_t GetLastAddress() const {
    return (key << 12) | 0xfff;
  }

  static MappingEntry* FromTreeNode(nn::util::IntrusiveRbTreeNode* node) {
    return GetItem<MappingEntry, offsetof(MappingEntry, node)>(node);
  }
};

struct MappingWaiter {
  MappingEntry* entry;
  // The event is set up by os::InitializeEvent over zeroed storage.
  union {
    os::EventType event;
    uint8_t eventStorage[sizeof(os::EventType)];
  };
  MappingWaiter* next;

  MappingWaiter() : entry(nullptr), eventStorage(), next(nullptr) {}
};

struct MappingMap;

void InvalidateMappings(ObjectAllocator* allocator, MappingMap* map,
  uint8_t kind, uint64_t first, uint64_t last, bool isForced,
  MappingWaiter* waiter);

inline void InvalidateMappings(ObjectAllocator* allocator, MappingMap* map,
  uint64_t first, uint64_t last) {
  MappingWaiter waiter;
  os::InitializeEvent(&waiter.event, true, os::EventClearMode(0));
  InvalidateMappings(allocator, map, 1, first, last, false, &waiter);
  InvalidateMappings(allocator, map, 2, first, last, false, &waiter);
  os::FinalizeEvent(&waiter.event);
}

struct MappingMap {
  template<typename T>
  void Insert(MappingEntry** pOut, MappingEntry* entry,
    VirtualMachineType* machine);
  bool Find(MappingEntry** pOut, uint8_t kind, uint64_t first,
    uint64_t last);
  void Release(MappingEntry* entry);

  void Invalidate(MappingEntry* entry) {
    mutex.Lock();
    if (JobManagerType* jobManager = manager;
      jobManager != nullptr && entry->isValid) {
      while (jobManager->runningCount != 0) {
        jobManager->condition.Wait(mutex);
      }
      ++jobManager->serial;
      --jobManager->pendingCount;
    }
    entry->isValid = false;
    --entry->referenceCount;
    mutex.Unlock();
  }

  os::SdkMutexType mutex;
  JobManagerType* manager;
  nn::util::IntrusiveRbTreeImpl tree;
  MappingWaiter* waiters;
};

template<typename T>
void MappingMap::Insert(MappingEntry** pOut, MappingEntry* entry,
  VirtualMachineType* machine) {
  mutex.Lock();
  entry->isValid = true;
  entry->referenceCount = 1;
  entry->release = &T::Release;
  entry->machine = machine;
  if (JobManagerType* jobManager = manager; jobManager != nullptr) {
    while (jobManager->runningCount != 0) {
      jobManager->condition.Wait(mutex);
    }
    ++jobManager->serial;
    ++jobManager->pendingCount;
  }
  nn::util::IntrusiveRbTreeNode* existing = tree.Insert(&entry->node,
    [](nn::util::IntrusiveRbTreeNode* lhs, nn::util::IntrusiveRbTreeNode* rhs) {
      return CompareValue(MappingEntry::FromTreeNode(lhs)->key,
        MappingEntry::FromTreeNode(rhs)->key);
    });
  NN_ABORT_UNLESS(existing == nullptr);
  if (pOut != nullptr) {
    ++entry->referenceCount;
    *pOut = entry;
  }
  mutex.Unlock();
}

struct SparseSpace;

using SparseSpaceReleaseFunction = void (*)(
  VirtualMachineType* const* machine, SparseSpace* space);

struct SparseSpace {
  uint64_t last;
  nn::util::IntrusiveRbTreeNode node;
  uint64_t begin;
  bool hasRegion;
  bool isValid;
  uint64_t referenceCount;
  SparseSpaceReleaseFunction release;
  VirtualMachineType* machine;
  AddressBlock block;
  MappingEntry* regionEntry;

  static SparseSpace* FromTreeNode(nn::util::IntrusiveRbTreeNode* node) {
    return GetItem<SparseSpace, offsetof(SparseSpace, node)>(node);
  }

  static void Release(VirtualMachineType* const* machine, SparseSpace* space);
  static void ReleaseWithRegion(VirtualMachineType* const* machine,
    SparseSpace* space);
};

struct SparseSpaceMap {
  template<auto Release>
  void Insert(SparseSpace** pOut, SparseSpace* space,
    VirtualMachineType* machine);

  SparseSpace* Acquire(uint64_t address) {
    mutex.Lock();
    nn::util::IntrusiveRbTreeNode* node = tree.FindNotLess(
      [address](nn::util::IntrusiveRbTreeNode* node) {
        return CompareValue(address, SparseSpace::FromTreeNode(node)->last);
      });
    if (node != nullptr) {
      SparseSpace* space = SparseSpace::FromTreeNode(node);
      if (address >= space->begin && space->isValid) {
        ++space->referenceCount;
        mutex.Unlock();
        return space;
      }
    }
    mutex.Unlock();
    return nullptr;
  }

  void Invalidate(SparseSpace* space) {
    mutex.Lock();
    space->isValid = false;
    --space->referenceCount;
    mutex.Unlock();
  }

  void Release(SparseSpace* space) {
    mutex.Lock();
    NN_ABORT_UNLESS(space->referenceCount != 0);
    if (--space->referenceCount == 0) {
      tree.Remove(&space->node);
      SparseSpaceReleaseFunction release = space->release;
      VirtualMachineType* machine = space->machine;
      if (release != nullptr) {
        release(&machine, space);
      }
    }
    mutex.Unlock();
  }

  os::SdkMutexType mutex;
  nn::util::IntrusiveRbTreeImpl tree;
};

template<auto Release>
void SparseSpaceMap::Insert(SparseSpace** pOut, SparseSpace* space,
  VirtualMachineType* machine) {
  mutex.Lock();
  if (space->begin <= space->last) {
    uint64_t begin = space->begin;
    nn::util::IntrusiveRbTreeNode* node = tree.FindNotLess(
      [begin](nn::util::IntrusiveRbTreeNode* node) {
        return CompareValue(begin, SparseSpace::FromTreeNode(node)->last);
      });
    if (node != nullptr) {
      NN_ABORT_UNLESS(space->last < SparseSpace::FromTreeNode(node)->begin);
    }
  }
  space->machine = machine;
  space->isValid = true;
  space->referenceCount = 1;
  space->release = Release;
  nn::util::IntrusiveRbTreeNode* existing = tree.Insert(&space->node,
    [](nn::util::IntrusiveRbTreeNode* lhs, nn::util::IntrusiveRbTreeNode* rhs) {
      return CompareValue(SparseSpace::FromTreeNode(lhs)->last,
        SparseSpace::FromTreeNode(rhs)->last);
    });
  NN_ABORT_UNLESS(existing == nullptr);
  if (pOut != nullptr) {
    ++space->referenceCount;
    *pOut = space;
  }
  mutex.Unlock();
}

struct SparseRegionMapping {
  SparseSpace* space;
  MappingEntry entry;

  static void Release(VirtualMachineType* const* machine,
    MappingEntry* entry);
};

struct NativeImageMapping {
  uint64_t address;
  uint64_t size;
  uint32_t memoryHandle;
  uint32_t image;
  bool isWritable;
  uint32_t kind;
  MappingEntry entry;
  uint64_t mapCount;

  static void Release(VirtualMachineType* const* machine,
    MappingEntry* entry);
};

struct VprMapping {
  uint32_t memoryHandle;
  uint32_t vprMemory;
  MappingEntry entry;

  static void Release(VirtualMachineType* const* machine,
    MappingEntry* entry);
};

}

namespace nn::gpu::sdk::util {

struct VirtualMachineType {
  const GraphicsDeviceType* device;
  const GpuAddressSpaceType* addressSpace;
  detail::ObjectAllocator allocator;
  detail::MappingMap mappings;
  detail::AddressSpaceRegion sparseRegion;
  detail::SparseSpaceMap sparseSpaces;
  AddressRange normalRange;
  os::SdkMutexType mapMutex;
  uint64_t reservedF0;
};

}
