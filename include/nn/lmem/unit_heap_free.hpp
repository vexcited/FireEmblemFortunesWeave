#pragma once

#include "nn/lmem/unit_heap.hpp"

namespace nn::lmem {

void FreeToUnitHeap(detail::HeapHead* heap, void* block);

namespace detail {

void FreeToUnitHeap(HeapHead* heap, void* block);

}

}
