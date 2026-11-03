#pragma once

#include "nn/lmem/unit_heap.hpp"

namespace nn::lmem {

enum class AllocationMode : int {
  FirstFit,
  BestFit
};

detail::HeapHead* CreateExpHeap(void* address, size_t size, int options);
void DestroyExpHeap(detail::HeapHead* heap);
void* AllocateFromExpHeap(detail::HeapHead* heap, size_t size);
void* AllocateFromExpHeap(detail::HeapHead* heap, size_t size, int alignment);
void FreeToExpHeap(detail::HeapHead* heap, void* block);
size_t ResizeExpHeapBlock(detail::HeapHead* heap, void* block, size_t size);
void SetExpHeapAllocationMode(detail::HeapHead* heap,
  AllocationMode mode);
AllocationMode GetExpHeapAllocationMode(detail::HeapHead* heap);
void SetExpHeapUseMarginOfAlignment(detail::HeapHead* heap, bool enabled);
bool GetExpHeapUseMarginOfAlignment(detail::HeapHead* heap);
void SetExpHeapGroupId(detail::HeapHead* heap, uint16_t group);
uint16_t GetExpHeapGroupId(detail::HeapHead* heap);

namespace detail {

HeapHead* CreateExpHeap(void* address, size_t size, int options);
void DestroyExpHeap(HeapHead* heap);
void* AllocFromExpHeap(HeapHead* heap, size_t size, int alignment);
void FreeToExpHeap(HeapHead* heap, void* block);
size_t ResizeExpHeapMemoryBlock(HeapHead* heap, void* block, size_t size);
uint16_t SetExpHeapAllocMode(HeapHead* heap, uint16_t mode);
uint16_t GetExpHeapAllocMode(HeapHead* heap);
uint8_t SetUseExpHeapMarginOfAlignment(HeapHead* heap, bool enabled);
uint8_t GetUseExpHeapMarginOfAlignment(HeapHead* heap);
uint16_t SetExpHeapGroupId(HeapHead* heap, uint16_t group);
uint16_t GetExpHeapGroupId(HeapHead* heap);

}

}
