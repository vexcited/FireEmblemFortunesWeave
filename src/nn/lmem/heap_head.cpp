#include "heap_head.hpp"

namespace nn::lmem::detail {

void InitHeapHead(HeapHead* heap, uint32_t signature, void* begin,
                  void* end, int options) {
  auto& header = Header(heap);
  header.signature = signature;
  header.region_begin = reinterpret_cast<uintptr_t>(begin);
  header.region_end = reinterpret_cast<uintptr_t>(end);
  header.options = static_cast<uint8_t>(options);
}

}
