#include "nn/gpu/gpu_sdk_util_detail.hpp"

namespace nn::gpu::sdk::util::detail {

namespace {

const int ErrorOutOfMemory = 6;

}

void ReleaseJob(JobTrackerType* tracker, Job* job, MappingMap* map) {
  ReleaseJobEntries(tracker, job, map);
}

void DetachTracker(MappingMap* map, ObjectAllocator* allocator,
  JobTrackerType* tracker) {
  map->mutex.Lock();
  ListNode* node = tracker->jobList.next;
  while (node != &tracker->jobList) {
    ListNode* next = node->next;
    Job* job = Job::FromNode(node);
    node->Unlink();
    --tracker->jobCount;
    ReleaseJob(tracker, job, map);
    DeleteJob(allocator, job);
    node = next;
  }
  JobManagerType* manager = map->manager;
  uint64_t mask = tracker->slot.mask;
  NN_ABORT_UNLESS((manager->freeSlotMask & mask) == 0);
  if (&tracker->node != &manager->trackerList) {
    tracker->node.Unlink();
  }
  tracker->slot.index = 0;
  tracker->slot.mask = 0;
  manager->freeSlotMask |= mask;
  map->mutex.Unlock();
}

int PrepareJob(ObjectAllocator* allocator, JobTrackerType* tracker,
  uint64_t serial, uint64_t capacity) {
  if (!tracker->jobList.IsEmpty()) {
    Job* last = Job::FromNode(tracker->jobList.previous);
    if (last->serial == serial) {
      tracker->pendingJob = last;
      tracker->isPendingQueued = true;
      last->node.Unlink();
      return 0;
    }
  }
  Job* job = allocator->New<Job>();
  if (job == nullptr) {
    return ErrorOutOfMemory;
  }
  if (capacity != 0) {
    MappingEntry** entries = allocator->NewArray<MappingEntry*>(capacity);
    if (entries == nullptr) {
      DeleteJob(allocator, job);
      return ErrorOutOfMemory;
    }
    job->entryList.entries = entries;
    job->entryList.capacity = capacity;
  }
  tracker->pendingJob = job;
  tracker->isPendingQueued = false;
  return 0;
}

int PrepareTracking(VirtualMachineType* machine, JobTrackerType* tracker) {
  InvalidateMappings(&machine->allocator, &machine->mappings, 0, -1, true);
  MappingMap& map = machine->mappings;
  map.mutex.Lock();
  int result = 0;
  if (JobManagerType* manager = map.manager; manager != nullptr) {
    ++manager->runningCount;
    result = PrepareJob(&machine->allocator, tracker, manager->serial,
      manager->pendingCount);
  }
  map.mutex.Unlock();
  return result;
}

void CancelTracking(MappingMap* map, ObjectAllocator* allocator,
  JobTrackerType* tracker) {
  map->mutex.Lock();
  if (JobManagerType* manager = map->manager; manager != nullptr) {
    if (Job* job = tracker->pendingJob; job != nullptr) {
      if (tracker->isPendingQueued) {
        tracker->jobList.LinkPrev(&job->node);
      }
      else {
        DeleteJob(allocator, job);
      }
      tracker->pendingJob = nullptr;
      tracker->isPendingQueued = false;
    }
    ProcessTracking(allocator, tracker, map);
    if (--manager->runningCount == 0) {
      manager->condition.Broadcast();
    }
  }
  map->mutex.Unlock();
}

void ProcessTracking(ObjectAllocator* allocator, JobTrackerType* tracker,
  MappingMap* map) {
  ProcessJobs(allocator, tracker, map);
}

void StartTracking(MappingMap* map, JobTrackerType* tracker,
  uint32_t syncPointId, uint32_t syncPointValue) {
  map->mutex.Lock();
  if (JobManagerType* manager = map->manager; manager != nullptr) {
    Job* job = tracker->pendingJob;
    if (!tracker->isPendingQueued) {
      uint64_t serial = manager->serial;
      JobEntryList empty{};
      JobEntryList* previous = &empty;
      if (!tracker->jobList.IsEmpty()) {
        previous = &Job::FromNode(tracker->jobList.previous)->entryList;
      }
      MergeJobEntries(tracker, previous, &job->entryList, &map->tree);
      job->serial = serial;
    }
    job->syncPointId = syncPointId;
    job->syncPointValue = syncPointValue;
    tracker->jobList.LinkPrev(&job->node);
    if (!tracker->isPendingQueued) {
      ++tracker->jobCount;
    }
    tracker->pendingJob = nullptr;
    tracker->isPendingQueued = false;
    if (--manager->runningCount == 0) {
      manager->condition.Broadcast();
    }
  }
  map->mutex.Unlock();
}

// Fills the new job with every valid mapping. Mappings the previous job
// also holds move to the new job, the previous job keeps the others.
void MergeJobEntries(JobTrackerType* tracker, JobEntryList* previous,
  JobEntryList* current, nn::util::IntrusiveRbTreeImpl* tree) {
  uint64_t count = 0;
  uint64_t index = 0;
  uint64_t kept = 0;
  for (nn::util::IntrusiveRbTreeNode* node = tree->GetMin(); node != nullptr;
    node = nn::util::IntrusiveRbTreeImpl::GetNext(node)) {
    MappingEntry* entry = MappingEntry::FromTreeNode(node);
    if (!entry->isValid) {
      continue;
    }
    bool isShared = false;
    while (index < previous->count) {
      MappingEntry* held = previous->entries[index];
      if (held == entry) {
        isShared = true;
        break;
      }
      if (held->key >= entry->key) {
        break;
      }
      previous->entries[kept++] = held;
      ++index;
    }
    if (isShared) {
      ++index;
      if (count < current->capacity) {
        current->entries[count++] = entry;
      }
      else {
        previous->entries[kept++] = entry;
      }
    }
    else if (count < current->capacity) {
      entry->jobMask |= tracker->slot.mask;
      current->entries[count++] = entry;
    }
  }
  while (index < previous->count) {
    previous->entries[kept++] = previous->entries[index++];
  }
  previous->count = kept;
  current->count = count;
}

}
