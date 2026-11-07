#include "nn/gpu/gpu_sdk_util_detail.hpp"

#include "nn/os/multi_wait.hpp"
#include "nn/os/time.hpp"

namespace nn::syncpt::sdk {

void InitializeMultiWaitHolder(os::MultiWaitHolderType* holder,
  SyncPointEventType* event);

}

namespace nn::gpu::sdk::util::detail {

namespace {

const TimeSpan ReleaseWaitTimeout = {1000000000};
const TimeSpan ReleasePollInterval = {300000};

bool IsValidHandle(const syncpt::sdk::SyncPointHandle& handle) {
  return (handle.value[0] | handle.value[1]) != 0;
}

// The fence is decoded twice for a log line the release build drops.
void TraceFence(const syncpt::sdk::SyncPointHandle& handle) {
  uint32_t id = 0;
  uint32_t value = 0;
  syncpt::sdk::MakeNvRmFenceFromSyncPointHandle(&id, &value, handle);
  id = 0;
  value = 0;
  syncpt::sdk::MakeNvRmFenceFromSyncPointHandle(&id, &value, handle);
}

}

// Queues the waiter on the first invalidated mapping over the range, the
// forced variant only waits for sparse mappings.
void PrepareMappingWait(MappingMap* map, uint64_t* pOutLast,
  syncpt::sdk::SyncPointHandle* pOutHandle, MappingWaiter* waiter,
  uint8_t kind, uint64_t first, uint64_t last, bool isForced) {
  map->mutex.Lock();
  if (first <= last && !map->tree.IsEmpty()) {
    MappingEntry* entry;
    do {
      uint64_t key = MakeMappingKey(kind, first);
      nn::util::IntrusiveRbTreeNode* node = map->tree.FindNotLess(
        [key](nn::util::IntrusiveRbTreeNode* node) {
          return CompareValue(key, MappingEntry::FromTreeNode(node)->key);
        });
      if (node == nullptr) {
        break;
      }
      entry = MappingEntry::FromTreeNode(node);
      if (kind != entry->GetKind() || entry->address > last) {
        break;
      }
      if (!entry->isValid && (!isForced || entry->type == 2)) {
        os::ClearEvent(&waiter->event);
        waiter->entry = entry;
        waiter->next = map->waiters;
        map->waiters = waiter;
        uint64_t entryLast = entry->GetLastAddress();
        *pOutLast = last < entryLast ? last : entryLast;
        *pOutHandle = FindJobFence(map->manager, entry);
        map->mutex.Unlock();
        return;
      }
      first = (entry->key << 12) + 0x1000;
    } while (entry->GetLastAddress() < last && first <= last);
  }
  *pOutLast = last;
  *pOutHandle = {};
  map->mutex.Unlock();
}

// The waits are inline functions kept out of line, so the calls still pass
// the unused end of the range.
[[gnu::noinline]] inline void WaitMappingRelease(ObjectAllocator* allocator,
  MappingMap* map, MappingWaiter* waiter, uint64_t /* last */) {
  while (!os::TimedWaitEvent(&waiter->event, ReleaseWaitTimeout)) {
    ProcessAllJobs(allocator, map);
  }
}

[[gnu::noinline]] inline void WaitJobFence(ObjectAllocator* allocator,
  MappingMap* map, MappingWaiter* waiter, uint64_t /* last */,
  syncpt::sdk::SyncPointEventType* event,
  const syncpt::sdk::SyncPointHandle* pHandle) {
  os::MultiWaitType multiWait{};
  os::InitializeMultiWait(&multiWait);
  os::MultiWaitHolderType releaseHolder{};
  os::InitializeMultiWaitHolder(&releaseHolder, &waiter->event);
  os::MultiWaitHolderType fenceHolder{};
  syncpt::sdk::InitializeMultiWaitHolder(&fenceHolder, event);
  os::LinkMultiWaitHolder(&multiWait, &releaseHolder);
  os::LinkMultiWaitHolder(&multiWait, &fenceHolder);
  syncpt::sdk::RequestSyncPointEvent(event, *pHandle);
  while (true) {
    if (os::TimedWaitAny(&multiWait, ReleaseWaitTimeout) == nullptr) {
      TraceFence(*pHandle);
      ProcessAllJobs(allocator, map);
    }
    if (os::TryWaitEvent(&waiter->event)) {
      syncpt::sdk::CancelSyncPointEvent(event);
      break;
    }
    if (syncpt::sdk::TryWaitSyncPointEvent(event)) {
      break;
    }
  }
  os::UnlinkAllMultiWaitHolder(&multiWait);
  os::FinalizeMultiWaitHolder(&fenceHolder);
  os::FinalizeMultiWaitHolder(&releaseHolder);
  os::FinalizeMultiWait(&multiWait);
}

[[gnu::noinline]] inline void PollJobFence(ObjectAllocator* allocator,
  MappingMap* map, MappingWaiter* waiter, uint64_t /* last */,
  const syncpt::sdk::SyncPointHandle* pHandle) {
  os::Tick start = os::GetSystemTick();
  while (!os::TimedWaitEvent(&waiter->event, ReleasePollInterval)) {
    if (syncpt::sdk::TryWaitSyncPoint(*pHandle)) {
      return;
    }
    os::Tick now = os::GetSystemTick();
    if (os::ConvertToTimeSpan(os::Tick{now.value - start.value}).nanoseconds >=
      ReleaseWaitTimeout.nanoseconds) {
      TraceFence(*pHandle);
      ProcessAllJobs(allocator, map);
    }
  }
}

// Waits until the invalidated mappings of the kind over the range are gone.
void InvalidateMappings(ObjectAllocator* allocator, MappingMap* map,
  uint8_t kind, uint64_t first, uint64_t last, bool isForced,
  MappingWaiter* waiter) {
  if (first > last) {
    return;
  }
  uint64_t handled;
  do {
    handled = 0;
    syncpt::sdk::SyncPointHandle handle = {};
    PrepareMappingWait(map, &handled, &handle, waiter, kind, first, last,
      isForced);
    uint64_t key = MakeMappingKey(kind, handled);
    bool isReleased = false;
    while (IsValidHandle(handle)) {
      if (os::TryWaitEvent(&waiter->event)) {
        isReleased = true;
        break;
      }
      syncpt::sdk::SyncPointEventType event{};
      if (syncpt::sdk::CreateSyncPointEvent(&event).IsFailure()) {
        PollJobFence(allocator, map, waiter, handled, &handle);
      }
      else {
        WaitJobFence(allocator, map, waiter, handled, &event, &handle);
        syncpt::sdk::DestroySyncPointEvent(&event);
      }
      if (os::TryWaitEvent(&waiter->event)) {
        handle = {};
        break;
      }
      ProcessAllJobs(allocator, map);
      map->mutex.Lock();
      nn::util::IntrusiveRbTreeNode* node = map->tree.FindNotLess(
        [key](nn::util::IntrusiveRbTreeNode* node) {
          return CompareValue(key, MappingEntry::FromTreeNode(node)->key);
        });
      handle = {};
      if (node != nullptr) {
        MappingEntry* entry = MappingEntry::FromTreeNode(node);
        if (kind == entry->GetKind() && entry->address <= handled &&
          !entry->isValid) {
          handle = FindJobFence(map->manager, entry);
        }
      }
      map->mutex.Unlock();
    }
    if (!isReleased) {
      WaitMappingRelease(allocator, map, waiter, handled);
    }
    first = handled + 1;
  } while (handled < last);
}

}
