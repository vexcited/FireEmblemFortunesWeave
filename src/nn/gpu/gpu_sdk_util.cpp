#include "nn/gpu/gpu_sdk_util.hpp"

#include <bit>

#include "nn/diag/diag_abort.hpp"

namespace nn::gpu::sdk::util {

namespace detail {

int AllocateSparseSpace(VirtualMachineType* machine, uint64_t* pOutOffset,
  const nvgpu_as_alloc_space_args* args);
void FreeSparseSpace(VirtualMachineType* machine,
  const nvgpu_as_free_space_args* args);
int MapBufferEx(VirtualMachineType* machine, nvgpu_as_map_buffer_ex_args* args);
void UnmapSparseBuffer(VirtualMachineType* machine,
  const nvgpu_as_unmap_buffer_args* args);
void UnmapNormalBuffer(VirtualMachineType* machine,
  const nvgpu_as_unmap_buffer_args* args);
int ModifySparseMapping(VirtualMachineType* machine,
  nvgpu_as_mapping_modify_args* args);
int ModifyNormalMapping(VirtualMachineType* machine,
  nvgpu_as_mapping_modify_args* args);
int Remap(VirtualMachineType* machine, nvgpu_as_remap_op* ops, size_t count);
void DetachTracker(os::SdkMutexType* mutex, void* jobQueue,
  JobTrackerType* tracker);
int PrepareTracking(VirtualMachineType* machine, JobTrackerType* tracker);
void CancelTracking(os::SdkMutexType* mutex, void* jobQueue,
  JobTrackerType* tracker);
int StartTracking(os::SdkMutexType* mutex, JobTrackerType* tracker,
  uint32_t syncPointId, uint32_t value);
void ProcessTracking(void* jobQueue, JobTrackerType* tracker,
  os::SdkMutexType* mutex);

}

namespace {

const int ErrorInvalidAddress = 11;
const int ErrorNoSlotPool = 3;
const int ErrorNoFreeSlot = 6;

bool Contains(const AddressRange& range, uint64_t address) {
  return address >= range.begin && address <= range.end;
}

}

int ExecuteVirtualMachineAllocSpace(VirtualMachineType* machine,
  nvgpu_as_alloc_space_args* args) {
  uint64_t offset = 0;
  int error = detail::AllocateSparseSpace(machine, &offset, args);
  if (error != 0) {
    return error;
  }
  args->offset = offset;
  return 0;
}

int ExecuteVirtualMachineFreeSpace(VirtualMachineType* machine,
  nvgpu_as_free_space_args* args) {
  detail::FreeSparseSpace(machine, args);
  return 0;
}

int ExecuteVirtualMachineMapBufferEx(VirtualMachineType* machine,
  nvgpu_as_map_buffer_ex_args* args) {
  return detail::MapBufferEx(machine, args);
}

int ExecuteVirtualMachineUnmapBuffer(VirtualMachineType* machine,
  nvgpu_as_unmap_buffer_args* args) {
  if (Contains(machine->sparseRange, args->offset)) {
    detail::UnmapSparseBuffer(machine, args);
  }
  else if (Contains(machine->normalRange, args->offset)) {
    detail::UnmapNormalBuffer(machine, args);
  }
  return 0;
}

int ExecuteVirtualMachineMappingModify(VirtualMachineType* machine,
  nvgpu_as_mapping_modify_args* args) {
  if (Contains(machine->sparseRange, args->map_address)) {
    return detail::ModifySparseMapping(machine, args);
  }
  if (Contains(machine->normalRange, args->map_address)) {
    return detail::ModifyNormalMapping(machine, args);
  }
  return ErrorInvalidAddress;
}

int ExecuteVirtualMachineRemap(VirtualMachineType* machine,
  nvgpu_as_remap_op* ops, size_t count) {
  return detail::Remap(machine, ops, count);
}

int AttachVirtualMachineJobTracker(VirtualMachineType* machine,
  JobTrackerType* tracker) {
  machine->mutex.Lock();
  JobTrackerSlotPool* pool = machine->slotPool;
  if (pool == nullptr) {
    machine->mutex.Unlock();
    return ErrorNoSlotPool;
  }
  uint64_t index = std::countr_zero(pool->freeMask);
  if (index >= 64) {
    machine->mutex.Unlock();
    return ErrorNoFreeSlot;
  }
  uint64_t mask = uint64_t(1) << index;
  pool->freeMask &= ~mask;
  tracker->slotIndex = index;
  tracker->slotMask = mask;

  ListNode* node = &tracker->node;
  ListNode* last = node->previous;
  ListNode* list = &pool->trackerList;
  node->previous = list->previous;
  last->next = list;
  list->previous->next = node;
  list->previous = last;
  machine->mutex.Unlock();
  tracker->machine = machine;
  return 0;
}

void DetachVirtualMachineJobTracker(VirtualMachineType* machine,
  JobTrackerType* tracker) {
  detail::DetachTracker(&machine->mutex, machine->jobQueue, tracker);
  tracker->machine = nullptr;
}

void InitializeJobManager(JobManagerType* manager) {
  manager->reserved00 = 0;
  manager->jobList.previous = &manager->jobList;
  manager->jobList.next = &manager->jobList;
  manager->conditionStorage = 0;
  manager->serial = 0;
  manager->pendingCount = 0;
  manager->runningCount = 0;
  manager->condition.Initialize();
  manager->runningCount = 0;
  manager->serial = 1;
  manager->pendingCount = 0;
}

void FinalizeJobManager(JobManagerType* manager) {
  NN_ABORT_UNLESS(manager->pendingCount == 0);
  NN_ABORT_UNLESS(manager->runningCount == 0);
}

void InitializeJobTracker(JobTrackerType* tracker) {
  *tracker = {};
  tracker->jobList.previous = &tracker->jobList;
  tracker->jobList.next = &tracker->jobList;
  tracker->node.previous = &tracker->node;
  tracker->node.next = &tracker->node;
}

int PrepareJobTracking(JobTrackerType* tracker) {
  return detail::PrepareTracking(tracker->machine, tracker);
}

void CancelJobTracking(JobTrackerType* tracker) {
  VirtualMachineType* machine = tracker->machine;
  detail::CancelTracking(&machine->mutex, machine->jobQueue, tracker);
}

int StartJobTracking(JobTrackerType* tracker, uint32_t syncPointId,
  uint32_t value) {
  return detail::StartTracking(&tracker->machine->mutex, tracker,
    syncPointId, value);
}

void ProcessJobTracking(JobTrackerType* tracker) {
  VirtualMachineType* machine = tracker->machine;
  machine->mutex.Lock();
  detail::ProcessTracking(machine->jobQueue, tracker, &machine->mutex);
  machine->mutex.Unlock();
}

}
