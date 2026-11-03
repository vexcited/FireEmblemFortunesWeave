#pragma once

#include "heap_head.hpp"

namespace nn::lmem::detail {

struct ExpHeapList {
  uintptr_t first;
  uintptr_t last;
};

struct ExpHeapState {
  ExpHeapList free;
  ExpHeapList used;
  uint16_t group;
  uint16_t mode;
  uint8_t use_margin;
  uint8_t reserved25[3];
};

struct __attribute__((packed, may_alias)) ExpHeapBlock {
  uint16_t signature;
  uint16_t reserved02;
  uint32_t flags;
  uint64_t size;
  uintptr_t previous;
  uintptr_t next;
};

struct ExpHeapRange {
  uintptr_t begin;
  uintptr_t end;
};

static_assert(sizeof(ExpHeapState) == 40);
static_assert(offsetof(ExpHeapState, group) == 32);
static_assert(offsetof(ExpHeapState, mode) == 34);
static_assert(offsetof(ExpHeapState, use_margin) == 36);
static_assert(sizeof(ExpHeapBlock) == 32);
static_assert(offsetof(ExpHeapBlock, flags) == 4);
static_assert(offsetof(ExpHeapBlock, size) == 8);
static_assert(offsetof(ExpHeapBlock, previous) == 16);
static_assert(offsetof(ExpHeapBlock, next) == 24);

inline ExpHeapState& ExpState(HeapHead* heap) {
  return *reinterpret_cast<ExpHeapState*>(
    reinterpret_cast<uintptr_t>(heap) + 104);
}

bool ReleaseExpHeapRange(ExpHeapState* state, const ExpHeapRange* range);
uintptr_t AllocateExpHeapBlock(ExpHeapState* state, uintptr_t free_block,
  uintptr_t address, size_t size, int reverse);

}
