#include "nn/lmem/lmem_common.hpp"
#include "nn/lmem/heap_head.hpp"

namespace nn::lmem::detail {

namespace {

constexpr size_t HeapHeadSize = 0x90;

uint32_t g_FillValues[] = {0xc3c3c3c3, 0xf3f3f3f3, 0xd3d3d3d3};

}

uint32_t SetHeapFillVal(int type, uint32_t value) {
  const uint32_t previous = g_FillValues[type];
  g_FillValues[type] = value;
  return previous;
}

uint32_t GetHeapFillVal(int type) {
  return g_FillValues[type];
}

// The head is placed either right before its region, right after it, or
// elsewhere.
bool HasAddress(HeapHead* heap, void* address) {
  const HeapHeadPrefix& header = Header(heap);
  const uintptr_t head = reinterpret_cast<uintptr_t>(heap);
  const uintptr_t value = reinterpret_cast<uintptr_t>(address);
  if (header.region_begin - HeapHeadSize == head) {
    return head <= value && value < header.region_end;
  }
  if (head == header.region_end) {
    return header.region_begin <= value && value < head + HeapHeadSize;
  }
  return header.region_begin <= value && value < header.region_end;
}

// A head inside the managed memory counts toward the total.
size_t GetHeapTotalSize(HeapHead* heap) {
  const HeapHeadPrefix& header = Header(heap);
  size_t size = header.region_end - header.region_begin;
  if (HasAddress(heap, heap)) {
    size += HeapHeadSize;
  }
  return size;
}

}
