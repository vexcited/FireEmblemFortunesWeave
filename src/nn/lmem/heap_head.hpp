#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/lmem/unit_heap.hpp"
#include "nn/os/mutex.hpp"

namespace nn::lmem::detail {

struct HeapHeadPrefix {
  uint32_t signature;
  uint8_t reserved04[44];
  uintptr_t region_begin;
  uintptr_t region_end;
  nn::os::MutexType mutex;
  uint8_t options;
  uint8_t reserved61[7];
};

struct UnitHeapState {
  uintptr_t free_head;
  uint64_t unit_size;
  int32_t alignment;
  uint32_t allocated;
};

static_assert(offsetof(HeapHeadPrefix, region_begin) == 48);
static_assert(offsetof(HeapHeadPrefix, region_end) == 56);
static_assert(offsetof(HeapHeadPrefix, mutex) == 64);
static_assert(offsetof(HeapHeadPrefix, options) == 96);
static_assert(sizeof(HeapHeadPrefix) == 104);
static_assert(sizeof(UnitHeapState) == 24);

inline HeapHeadPrefix& Header(HeapHead* heap) {
  return *reinterpret_cast<HeapHeadPrefix*>(heap);
}

inline UnitHeapState& UnitState(HeapHead* heap) {
  return *reinterpret_cast<UnitHeapState*>(
    reinterpret_cast<uintptr_t>(heap) + 104);
}

}
