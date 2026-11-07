#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>
#include <bit>
#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/gpu/gpu_sdk_types.hpp"
#include "nn/gpu/gpu_sdk_util.hpp"
#include "nn/os/event.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"
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

  void Finalize() {
    m_FreeTree.Remove(&m_Head.treeNode);
    m_Head.listNode.Unlink();
    m_Head.limit = 0;
    m_Head.begin = -1;
    m_Head.last = 0;
  }

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

  void Finalize() {
    if (IsValid()) {
      m_Allocator.Finalize();
      m_Begin = -1;
      m_End = 0;
    }
  }

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

  // Like Allocate, without the unlocked validity check.
  bool AllocateAligned(AddressBlock* block, uint64_t size,
    uint64_t alignment) {
    m_Mutex.Lock();
    bool result = false;
    if (size != 0 && IsValid()) {
      uint64_t last = ((size + alignment - 1) & -alignment) - 1;
      result = m_Allocator.Allocate(block, last, last, alignment - 1);
    }
    m_Mutex.Unlock();
    return result;
  }

  void FreeBlock(AddressBlock* block) {
    NN_ABORT_UNLESS(block->begin >= m_Begin && block->last <= m_End);
    m_Mutex.Lock();
    m_Allocator.Free(block);
    m_Mutex.Unlock();
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
  uint64_t m_Begin = -1;
  uint64_t m_End = 0;
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

  template<typename T>
  T* NewArray(size_t length) {
    if (length > SIZE_MAX / sizeof(T)) {
      return nullptr;
    }
    void* pointer = allocate(sizeof(T) * length, alignof(T), userData);
    if (pointer == nullptr) {
      return nullptr;
    }
    T* array = new (pointer) T[length]{T()};
    count.fetch_add(1, std::memory_order_relaxed);
    return array;
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
  // Bit n is set while a job of tracker slot n still uses the mapping.
  uint64_t jobMask;
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
  uint64_t first, uint64_t last, bool isForced = false) {
  MappingWaiter waiter;
  os::InitializeEvent(&waiter.event, true, os::EventClearMode(0));
  InvalidateMappings(allocator, map, 1, first, last, isForced, &waiter);
  InvalidateMappings(allocator, map, 2, first, last, isForced, &waiter);
  os::FinalizeEvent(&waiter.event);
}

struct MappingMap {
  template<typename T>
  void Insert(MappingEntry** pOut, MappingEntry* entry,
    VirtualMachineType* machine);
  bool Find(MappingEntry** pOut, uint8_t kind, uint64_t first,
    uint64_t last);
  void Release(MappingEntry* entry);

  // Takes a reference to the first valid entry of the kind over the range.
  [[gnu::always_inline]] bool FindEntry(MappingEntry** pOut, uint8_t kind,
    uint64_t first, uint64_t last) {
    mutex.Lock();
    if (first <= last && !tree.IsEmpty()) {
      MappingEntry* entry;
      do {
        uint64_t key = MakeMappingKey(kind, first);
        nn::util::IntrusiveRbTreeNode* node = tree.FindNotLess(
          [key](nn::util::IntrusiveRbTreeNode* node) {
            return CompareValue(key, MappingEntry::FromTreeNode(node)->key);
          });
        if (node == nullptr) {
          break;
        }
        entry = MappingEntry::FromTreeNode(node);
        if (entry->GetKind() != kind || entry->address > last) {
          break;
        }
        if (entry->isValid) {
          NN_ABORT_UNLESS(++entry->referenceCount != 0);
          *pOut = entry;
          mutex.Unlock();
          return true;
        }
        first = (entry->key << 12) + 0x1000;
      } while (entry->GetLastAddress() < last && first <= last);
    }
    mutex.Unlock();
    return false;
  }

  template<bool InlineRemove = false>
  [[gnu::always_inline]] void ReleaseEntry(MappingEntry* entry) {
    mutex.Lock();
    NN_ABORT_UNLESS(entry->referenceCount != 0);
    if (--entry->referenceCount == 0 && entry->jobMask == 0) {
      Destroy<InlineRemove>(entry);
    }
    mutex.Unlock();
  }

  // Removes an unused entry, wakes its waiters and runs its release
  // callback. The jobs of a tracker inline the tree removal when they run
  // inside the waits.
  template<bool InlineRemove = false>
  [[gnu::always_inline]] void Destroy(MappingEntry* entry) {
    if constexpr (InlineRemove) {
      [[clang::always_inline]] tree.Remove(&entry->node);
    }
    else {
      tree.Remove(&entry->node);
    }
    MappingWaiter* woken = nullptr;
    MappingWaiter** link = &waiters;
    for (MappingWaiter* waiter = *link; waiter != nullptr;) {
      MappingWaiter* next = waiter->next;
      if (waiter->entry == entry) {
        *link = next;
        waiter->next = woken;
        woken = waiter;
      }
      else {
        link = &waiter->next;
      }
      waiter = next;
    }
    MappingReleaseFunction release = entry->release;
    VirtualMachineType* machine = entry->machine;
    if (release != nullptr) {
      release(&machine, entry);
    }
    while (woken != nullptr) {
      MappingWaiter* next = woken->next;
      woken->next = nullptr;
      woken->entry = nullptr;
      os::SignalEvent(&woken->event);
      woken = next;
    }
  }

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

// The mappings a queued job keeps alive, sorted by key.
struct JobEntryList {
  uint64_t capacity;
  uint64_t count;
  MappingEntry** entries;
};

struct Job {
  uint32_t syncPointId;
  uint32_t syncPointValue;
  uint64_t serial;
  JobEntryList entryList;
  ListNode node;

  Job() : syncPointId(0), syncPointValue(0), serial(0), entryList(),
    node{&node, &node} {}

  static Job* FromNode(ListNode* node) {
    return reinterpret_cast<Job*>(
      reinterpret_cast<uintptr_t>(node) - offsetof(Job, node));
  }
};

inline void DeleteJob(ObjectAllocator* allocator, Job* job) {
  if (job->entryList.entries != nullptr) {
    allocator->Delete(job->entryList.entries);
  }
  allocator->Delete(job);
}

inline JobTrackerType* GetTracker(ListNode* node) {
  return reinterpret_cast<JobTrackerType*>(
    reinterpret_cast<uintptr_t>(node) - offsetof(JobTrackerType, node));
}

// Drops the mappings a finished job held. The waits inline the release and
// the tree removal, the tracker functions call the shared copy.
template<bool IsInline = false>
[[gnu::always_inline]] inline void ReleaseJobEntries(JobTrackerType* tracker,
  Job* job, MappingMap* map) {
  for (uint64_t i = 0; i < job->entryList.count; ++i) {
    MappingEntry* entry = job->entryList.entries[i];
    entry->jobMask &= ~tracker->slot.mask;
    if (entry->referenceCount == 0 && entry->jobMask == 0) {
      map->Destroy<IsInline>(entry);
    }
  }
  job->entryList.count = 0;
}

[[gnu::noinline]] void ReleaseJob(JobTrackerType* tracker, Job* job,
  MappingMap* map);

inline bool IsJobDone(const Job* job) {
  syncpt::sdk::SyncPointHandle handle =
    syncpt::sdk::MakeSyncPointHandleFromNvRmFence(job->syncPointId,
      job->syncPointValue);
  return syncpt::sdk::TryWaitSyncPoint(handle);
}

// Retires the finished jobs of a tracker in queue order.
template<bool IsInline = false>
[[gnu::always_inline]] inline void ProcessJobs(ObjectAllocator* allocator,
  JobTrackerType* tracker, MappingMap* map) {
  ListNode* node = tracker->jobList.next;
  while (node != &tracker->jobList) {
    Job* job = Job::FromNode(node);
    if (!IsJobDone(job)) {
      break;
    }
    ListNode* next = node->next;
    node->Unlink();
    --tracker->jobCount;
    if constexpr (IsInline) {
      ReleaseJobEntries<true>(tracker, job, map);
    }
    else {
      ReleaseJob(tracker, job, map);
    }
    DeleteJob(allocator, job);
    node = next;
  }
}

[[gnu::always_inline]] inline void ProcessAllJobs(ObjectAllocator* allocator,
  MappingMap* map) {
  map->mutex.Lock();
  if (JobManagerType* manager = map->manager; manager != nullptr) {
    for (ListNode* node = manager->trackerList.next;
      node != &manager->trackerList; node = node->next) {
      ProcessJobs<true>(allocator, GetTracker(node), map);
    }
  }
  map->mutex.Unlock();
}

// Gets the fence of the oldest job of the first tracker slot still holding
// the mapping.
[[gnu::always_inline]] inline syncpt::sdk::SyncPointHandle FindJobFence(
  JobManagerType* manager, const MappingEntry* entry) {
  if (manager != nullptr) {
    for (uint64_t mask = entry->jobMask;;) {
      uint64_t index = std::countr_zero(mask);
      if (index >= 64) {
        break;
      }
      for (ListNode* node = manager->trackerList.next;
        node != &manager->trackerList; node = node->next) {
        JobTrackerType* tracker = GetTracker(node);
        if (tracker->slot.index != int32_t(index)) {
          continue;
        }
        Job* job = nullptr;
        if (!tracker->jobList.IsEmpty()) {
          job = Job::FromNode(tracker->jobList.next);
        }
        else if (tracker->isPendingQueued) {
          job = tracker->pendingJob;
        }
        if (job != nullptr) {
          return syncpt::sdk::MakeSyncPointHandleFromNvRmFence(
            job->syncPointId, job->syncPointValue);
        }
        break;
      }
      mask &= ~(uint64_t(1) << index);
    }
  }
  return {};
}

// Gets the fence of the oldest job some tracker still waits for.
[[gnu::always_inline]] inline bool FindPendingJob(
  syncpt::sdk::SyncPointHandle* pOut, MappingMap* map) {
  map->mutex.Lock();
  if (JobManagerType* manager = map->manager; manager != nullptr) {
    for (ListNode* node = manager->trackerList.next;
      node != &manager->trackerList; node = node->next) {
      JobTrackerType* tracker = GetTracker(node);
      Job* job;
      if (tracker->isPendingQueued) {
        job = tracker->pendingJob;
      }
      else if (!tracker->jobList.IsEmpty()) {
        job = Job::FromNode(tracker->jobList.next);
      }
      else {
        continue;
      }
      *pOut = syncpt::sdk::MakeSyncPointHandleFromNvRmFence(
        job->syncPointId, job->syncPointValue);
      map->mutex.Unlock();
      return true;
    }
  }
  map->mutex.Unlock();
  return false;
}
void DetachTracker(MappingMap* map, ObjectAllocator* allocator,
  JobTrackerType* tracker);
int PrepareJob(ObjectAllocator* allocator, JobTrackerType* tracker,
  uint64_t serial, uint64_t capacity);
int PrepareTracking(VirtualMachineType* machine, JobTrackerType* tracker);
void CancelTracking(MappingMap* map, ObjectAllocator* allocator,
  JobTrackerType* tracker);
[[gnu::noinline]] void ProcessTracking(ObjectAllocator* allocator,
  JobTrackerType* tracker, MappingMap* map);
void StartTracking(MappingMap* map, JobTrackerType* tracker,
  uint32_t syncPointId, uint32_t syncPointValue);
void MergeJobEntries(JobTrackerType* tracker, JobEntryList* previous,
  JobEntryList* current, nn::util::IntrusiveRbTreeImpl* tree);

struct SparseRegionMapping {
  SparseSpace* space;
  MappingEntry entry;

  static void Release(VirtualMachineType* const* machine,
    MappingEntry* entry);
};

struct NormalMapping {
  AddressBlock* block;
  SparseSpace* space;
  uint32_t memoryHandle;
  uint32_t gpuMemoryHandle;
  uint64_t offset;
  GpuMemoryPermission permission;
  GpuCacheability cacheability;
  RawTextureMode rawTextureMode;
  MappingEntry entry;

  static void Release(VirtualMachineType* const* machine,
    MappingEntry* entry);
};

struct SparseMapping {
  SparseSpace* space;
  uint32_t memoryHandle;
  uint32_t gpuMemoryHandle;
  uint64_t offset;
  GpuMemoryPermission permission;
  GpuCacheability cacheability;
  RawTextureMode rawTextureMode;
  MappingEntry entry;

  static void Release(VirtualMachineType* const* machine,
    MappingEntry* entry);
};

struct NativeImageMapping {
  uint64_t address;
  uint64_t size;
  uint32_t memoryHandle;
  uint32_t image;
  bool isReadOnly;
  uint32_t flags;
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
