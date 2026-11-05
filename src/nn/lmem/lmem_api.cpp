#include "nn/lmem/lmem_common.hpp"
#include "nn/lmem/heap_head.hpp"

namespace nn::lmem {

namespace {

constexpr uint8_t HeapOption_ThreadSafe = 4;

class ScopedHeapLock {
public:
  explicit ScopedHeapLock(detail::HeapHead* heap)
    : m_Header(detail::Header(heap)) {
    if ((m_Header.options & HeapOption_ThreadSafe) != 0) {
      os::LockMutex(&m_Header.mutex);
    }
  }

  ~ScopedHeapLock() {
    if ((m_Header.options & HeapOption_ThreadSafe) != 0) {
      os::UnlockMutex(&m_Header.mutex);
    }
  }

private:
  detail::HeapHeadPrefix& m_Header;
};

}

uint32_t SetFillValue(FillType type, uint32_t value) {
  return detail::SetHeapFillVal(type, value);
}

uint32_t GetFillValue(FillType type) {
  return detail::GetHeapFillVal(type);
}

size_t GetTotalSize(detail::HeapHead* heap) {
  ScopedHeapLock lock(heap);
  return detail::GetHeapTotalSize(heap);
}

void* GetStartAddress(detail::HeapHead* heap) {
  ScopedHeapLock lock(heap);
  return reinterpret_cast<void*>(detail::Header(heap).region_begin);
}

bool HasAddress(detail::HeapHead* heap, void* address) {
  ScopedHeapLock lock(heap);
  return detail::HasAddress(heap, address);
}

}
