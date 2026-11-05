#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::lmem {

namespace detail {

struct HeapHead;

uint32_t SetHeapFillVal(int type, uint32_t value);
uint32_t GetHeapFillVal(int type);
bool HasAddress(HeapHead* heap, void* address);
size_t GetHeapTotalSize(HeapHead* heap);

}

enum FillType {
  FillType_Unuse,
  FillType_Alloc,
  FillType_Free,
};

uint32_t SetFillValue(FillType type, uint32_t value);
uint32_t GetFillValue(FillType type);
size_t GetTotalSize(detail::HeapHead* heap);
void* GetStartAddress(detail::HeapHead* heap);
bool HasAddress(detail::HeapHead* heap, void* address);

}
