#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/synchronization.hpp"

extern "C" {

struct nvgpu_as_alloc_space_args {
  uint32_t pages;
  uint32_t page_size;
  uint32_t flags;
  uint32_t reserved;
  uint64_t offset;
};

struct nvgpu_as_free_space_args {
  uint64_t offset;
  uint32_t pages;
  uint32_t page_size;
};
struct nvgpu_as_map_buffer_ex_args;

struct nvgpu_as_unmap_buffer_args {
  uint64_t offset;
};

struct nvgpu_as_mapping_modify_args {
  uint64_t reserved[3];
  uint64_t map_address;
};

struct nvgpu_as_remap_op;

}

namespace nn::gpu::sdk::util {

struct ListNode {
  ListNode* previous;
  ListNode* next;
};

struct JobManagerType {
  // Bit n is set while tracker slot n is free.
  uint64_t freeSlotMask;
  ListNode trackerList;
  // The condition variable slot is cleared as a whole 8 byte word.
  union {
    os::SdkConditionVariableType condition;
    uint64_t conditionStorage;
  };
  uint64_t serial;
  uint64_t pendingCount;
  uint64_t runningCount;
};

struct VirtualMachineType;

struct JobTrackerType {
  uint64_t slotIndex;
  uint64_t slotMask;
  ListNode jobList;
  uint64_t reserved20;
  uint64_t reserved28;
  bool isTracking;
  ListNode node;
  VirtualMachineType* machine;
};

struct AddressRange {
  uint64_t begin;
  uint64_t end;
};

}
