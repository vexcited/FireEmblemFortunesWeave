#pragma once

#include "nn/lmem/unit_heap.hpp"

namespace nn::lmem {

void DestroyUnitHeap(detail::HeapHead* heap);
void InvalidateUnitHeap(detail::HeapHead* heap);
size_t GetUnitHeapUnitSize(detail::HeapHead* heap);
int GetUnitHeapAllocatableCount(detail::HeapHead* heap);
int GetUnitHeapAllocatedCount(detail::HeapHead* heap);
int GetUnitHeapAlignment(detail::HeapHead* heap);
size_t GetRequiredUnitHeapSize(size_t unit_size, int count, int alignment,
                              bool with_header);

namespace detail {

void FinalizeHeap(HeapHead* heap);
void DestroyUnitHeap(HeapHead* heap);
void InvalidateUnitHeap(HeapHead* heap);
size_t GetUnitHeapUnitSize(HeapHead* heap);
int GetUnitHeapAllocatableCount(HeapHead* heap);
int GetUnitHeapAllocatedCount(HeapHead* heap);
int GetUnitHeapAlignment(HeapHead* heap);
size_t GetRequiredUnitHeapSize(size_t unit_size, int count, int alignment,
                              bool with_header);

}

}
