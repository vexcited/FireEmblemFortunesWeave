#pragma once

#include "nn/lmem/unit_heap.hpp"

namespace nn::lmem {

enum class FreeMode : int {
  None = 0,
  Head = 1,
  Tail = 2,
  All = 3
};

enum class AdjustMode : int {
  Head = -1,
  Tail = 1
};

struct FrameHeapState {
  void* head;
  void* tail;
};

struct FrameHeapAdjustment {
  void* address;
  size_t size;
};

detail::HeapHead* CreateFrameHeap(void* address, size_t size, int options);
detail::HeapHead* CreateFrameHeap(void* address, size_t size, int options,
  detail::HeapHead* external);
void DestroyFrameHeap(detail::HeapHead* heap);
FrameHeapAdjustment AdjustFrameHeap(detail::HeapHead* heap, AdjustMode mode);
void* AllocateFromFrameHeap(detail::HeapHead* heap, size_t size);
void* AllocateFromFrameHeap(detail::HeapHead* heap, size_t size, int alignment);
void FreeToFrameHeap(detail::HeapHead* heap, FreeMode mode);
size_t ResizeFrameHeapBlock(detail::HeapHead* heap, void* block, size_t size);
size_t GetFrameHeapAllocatableSize(detail::HeapHead* heap, int alignment);
FrameHeapState GetFrameHeapState(detail::HeapHead* heap);
void RestoreFrameHeapState(detail::HeapHead* heap, const FrameHeapState& state);
void DumpFrameHeap(detail::HeapHead* heap);

namespace detail {

HeapHead* CreateFrameHeap(void* address, size_t size, int options);
HeapHead* CreateFrameHeap(void* address, size_t size, int options,
  HeapHead* external);
void DestroyFrameHeap(HeapHead* heap);
FrameHeapAdjustment AdjustFrameHeap(HeapHead* heap, AdjustMode mode);
void* AllocFromFrameHeap(HeapHead* heap, size_t size, int alignment);
void FreeToFrameHeap(HeapHead* heap, FreeMode mode);
size_t ResizeForMemoryBlockFrameHeap(HeapHead* heap, void* block, size_t size);
size_t GetAllocatableSizeForFrameHeap(HeapHead* heap, int alignment);
FrameHeapState GetFrameHeapState(HeapHead* heap);
void RestoreFrameHeapState(HeapHead* heap, const FrameHeapState& state);
void DumpFrameHeap(HeapHead* heap);

}

}
