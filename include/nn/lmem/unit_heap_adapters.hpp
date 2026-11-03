#pragma once

#include "nn/lmem/unit_heap.hpp"

namespace nn::lmem {

detail::HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                                int options);
detail::HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                                int options, int alignment,
                                InfoPlacement placement);
void DumpUnitHeap(detail::HeapHead* heap);

namespace detail {

void DumpUnitHeap(HeapHead* heap);
void DumpHeapHead(const HeapHead* heap);

}

}
