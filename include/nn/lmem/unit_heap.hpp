#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::lmem {

enum class InfoPlacement : int {
  Front,
  Rear
};

namespace detail {

struct HeapHead;

void InitHeapHead(HeapHead* heap, uint32_t signature, void* begin,
                  void* end, int options);
HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                          int alignment, uint16_t options,
                          InfoPlacement placement, HeapHead* external);
void ExtendUnitHeapArea(HeapHead* heap, size_t size);
void* AllocFromUnitHeap(HeapHead* heap);

}

detail::HeapHead* CreateUnitHeap(void* address, size_t size, size_t unit_size,
                                int options, int alignment,
                                detail::HeapHead* external);
void ExtendUnitHeapArea(detail::HeapHead* heap, size_t size);
void* AllocateFromUnitHeap(detail::HeapHead* heap);

}
