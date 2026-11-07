#include "nn/gpu/gpu_sdk_util.hpp"
#include "nn/gpu/gpu_sdk_util_detail.hpp"

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

}

namespace {

const int ErrorInvalidAddress = 11;
const int ErrorNoSlotPool = 3;
const int ErrorNoFreeSlot = 6;

bool Contains(uint64_t begin, uint64_t end, uint64_t address) {
  return address >= begin && address <= end;
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
  if (Contains(machine->sparseRegion.m_Begin, machine->sparseRegion.m_End,
    args->offset)) {
    detail::UnmapSparseBuffer(machine, args);
  }
  else if (Contains(machine->normalRange.begin, machine->normalRange.end,
    args->offset)) {
    detail::UnmapNormalBuffer(machine, args);
  }
  return 0;
}

int ExecuteVirtualMachineMappingModify(VirtualMachineType* machine,
  nvgpu_as_mapping_modify_args* args) {
  if (Contains(machine->sparseRegion.m_Begin, machine->sparseRegion.m_End,
    args->map_address)) {
    return detail::ModifySparseMapping(machine, args);
  }
  if (Contains(machine->normalRange.begin, machine->normalRange.end,
    args->map_address)) {
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
  os::SdkMutexType& mutex = machine->mappings.mutex;
  mutex.Lock();
  JobManagerType* manager = machine->mappings.manager;
  if (manager == nullptr) {
    mutex.Unlock();
    return ErrorNoSlotPool;
  }
  uint64_t index = std::countr_zero(manager->freeSlotMask);
  if (index >= 64) {
    mutex.Unlock();
    return ErrorNoFreeSlot;
  }
  uint64_t mask = uint64_t(1) << index;
  manager->freeSlotMask &= ~mask;
  JobSlot slot = {int32_t(index), mask};
  __builtin_memcpy(&tracker->slot, &slot, sizeof(slot));

  ListNode* node = &tracker->node;
  ListNode* last = node->previous;
  ListNode* list = &manager->trackerList;
  node->previous = list->previous;
  last->next = list;
  list->previous->next = node;
  list->previous = last;
  mutex.Unlock();
  tracker->machine = machine;
  return 0;
}

void DetachVirtualMachineJobTracker(VirtualMachineType* machine,
  JobTrackerType* tracker) {
  detail::DetachTracker(&machine->mappings, &machine->allocator, tracker);
  tracker->machine = nullptr;
}

void InitializeJobManager(JobManagerType* manager) {
  manager->freeSlotMask = 0;
  manager->trackerList.previous = &manager->trackerList;
  manager->trackerList.next = &manager->trackerList;
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
  detail::CancelTracking(&machine->mappings, &machine->allocator, tracker);
}

void StartJobTracking(JobTrackerType* tracker, uint32_t syncPointId,
  uint32_t value) {
  detail::StartTracking(&tracker->machine->mappings, tracker, syncPointId,
    value);
}

void ProcessJobTracking(JobTrackerType* tracker) {
  VirtualMachineType* machine = tracker->machine;
  machine->mappings.mutex.Lock();
  detail::ProcessTracking(&machine->allocator, tracker, &machine->mappings);
  machine->mappings.mutex.Unlock();
}

}
