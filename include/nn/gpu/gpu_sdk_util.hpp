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
struct nvgpu_as_map_buffer_ex_args {
  uint32_t flags;
  int16_t compr_kind;
  int16_t incompr_kind;
  uint32_t dmabuf_fd;
  uint32_t page_size;
  uint64_t buffer_offset;
  uint64_t mapping_size;
  uint64_t offset;
};

struct nvgpu_as_unmap_buffer_args {
  uint64_t offset;
};

struct nvgpu_as_mapping_modify_args {
  int16_t compr_kind;
  int16_t incompr_kind;
  uint32_t reserved;
  uint64_t buffer_offset;
  uint64_t buffer_size;
  uint64_t map_address;
};

struct nvgpu_as_remap_op {
  uint32_t flags;
  int16_t compr_kind;
  int16_t incompr_kind;
  uint32_t mem_handle;
  uint32_t reserved;
  uint64_t mem_offset_in_pages;
  uint64_t virt_offset_in_pages;
  uint64_t num_pages;
};

}

namespace nn::gpu::sdk::util {

struct ListNode {
  ListNode* previous;
  ListNode* next;

  bool IsEmpty() const {
    return next == this;
  }

  void LinkPrev(ListNode* node) {
    ListNode* last = node->previous;
    node->previous = previous;
    last->next = this;
    previous->next = node;
    previous = last;
  }

  void Unlink() {
    ListNode* last = next;
    ListNode* lastPrevious = last->previous;
    previous->next = last;
    last->previous = previous;
    lastPrevious->next = this;
    previous = lastPrevious;
  }
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

namespace detail {

struct Job;

}

// The tracker slot of a job tracker, the mask holds bit index.
struct JobSlot {
  int32_t index;
  uint64_t mask;
};

struct JobTrackerType {
  JobSlot slot;
  ListNode jobList;
  uint64_t jobCount;
  // The job being prepared, or the last queued job taken back when no
  // mapping changed since it was queued.
  detail::Job* pendingJob;
  bool isPendingQueued;
  ListNode node;
  VirtualMachineType* machine;
};

struct AddressRange {
  uint64_t begin;
  uint64_t end;
};

}
