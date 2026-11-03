#pragma once

#include "nn/lmem/exp_heap.hpp"

namespace nn::lmem {

uintptr_t AdjustExpHeap(detail::HeapHead* heap);
size_t GetExpHeapTotalFreeSize(detail::HeapHead* heap);
size_t GetExpHeapAllocatableSize(detail::HeapHead* heap, int alignment);
size_t GetExpHeapBlockSize(const void* block);
uint16_t GetExpHeapGroupIdOfBlock(const void* block);
uint16_t GetExpHeapAllocationDirectionOfBlock(const void* block);
bool CheckExpHeap(detail::HeapHead* heap, int options);
bool CheckExpHeapBlock(detail::HeapHead* heap, const void* block, int options);
void VisitExpHeapAllBlocks(detail::HeapHead* heap,
  void (*visitor)(void*, nn::lmem::detail::HeapHead*, size_t),
  size_t argument);
void DumpExpHeap(detail::HeapHead* heap);

namespace detail {

uintptr_t AdjustExpHeap(HeapHead* heap);
size_t GetExpHeapTotalFreeSize(HeapHead* heap);
size_t GetExpHeapAllocatableSize(HeapHead* heap, int alignment);
size_t GetExpHeapMemoryBlockSize(const void* block);
uint16_t GetMemoryBlockHeapGroupId(const void* block);
uint16_t GetMemoryBlockHeapAllocDir(const void* block);
bool CheckExpHeap(HeapHead* heap, uint32_t options);
bool CheckExpHeapMemoryBlock(const void* block, HeapHead* heap,
  uint32_t options);
void VisitExpHeapAllocated(HeapHead* heap,
  void (*visitor)(void*, nn::lmem::detail::HeapHead*, size_t),
  size_t argument);
void DumpExpHeap(HeapHead* heap);

}

}
