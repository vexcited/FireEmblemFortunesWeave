#include "nn/err/detail/err_heap.hpp"
#include "nn/lmem/exp_heap_inspection.hpp"

namespace nn::err::detail {

UnitHeapBase::~UnitHeapBase() {
  lmem::DestroyUnitHeap(m_Heap);
}

int UnitHeapBase::GetAllocatedCount() const {
  return lmem::GetUnitHeapAllocatedCount(m_Heap);
}

bool UnitHeapBase::do_is_equal(const MemoryResource& other) const noexcept {
  return this == &other;
}

ExpHeapBase::~ExpHeapBase() {
  lmem::DestroyExpHeap(m_Heap);
}

size_t ExpHeapBase::GetTotalFreeSize() const {
  return lmem::GetExpHeapTotalFreeSize(m_Heap);
}

void* ExpHeapBase::do_allocate(size_t size, size_t alignment) {
  return lmem::AllocateFromExpHeap(m_Heap, size, alignment);
}

void ExpHeapBase::do_deallocate(void* pointer, size_t size,
  size_t alignment) {
  lmem::FreeToExpHeap(m_Heap, pointer);
}

bool ExpHeapBase::do_is_equal(const MemoryResource& other) const noexcept {
  return this == &other;
}

MemoryResource* MixinAllocator::SelectAllocator(size_t size) const {
  return size > m_Threshold ? m_pLargeAllocator : m_pSmallAllocator;
}

// The requested alignment is dropped for a fixed one of 8 or the default.
void* MixinAllocator::do_allocate(size_t size, size_t) {
  return (size > m_Threshold ? m_pLargeAllocator : m_pSmallAllocator)
    ->allocate(size, 8);
}

void MixinAllocator::do_deallocate(void* pointer, size_t size, size_t) {
  (size > m_Threshold ? m_pLargeAllocator : m_pSmallAllocator)
    ->deallocate(pointer, size);
}

bool MixinAllocator::do_is_equal(const MemoryResource& other) const noexcept {
  return this == &other;
}

}
