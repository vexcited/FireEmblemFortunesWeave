#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/lmem/exp_heap.hpp"
#include "nn/lmem/unit_heap_queries.hpp"
#include "nn/memory_resource.hpp"

namespace nn::err::detail {

class UnitHeapBase : public MemoryResource {
public:
  ~UnitHeapBase() override;

  int GetAllocatedCount() const;

protected:
  void* do_allocate(size_t size, size_t alignment) override;
  void do_deallocate(void* pointer, size_t size, size_t alignment) override;
  bool do_is_equal(const MemoryResource& other) const noexcept override;

private:
  lmem::detail::HeapHead* m_Heap;
  uint64_t m_Reserved[2];
};

class ExpHeapBase : public MemoryResource {
public:
  ~ExpHeapBase() override;

  size_t GetTotalFreeSize() const;

protected:
  void* do_allocate(size_t size, size_t alignment) override;
  void do_deallocate(void* pointer, size_t size, size_t alignment) override;
  bool do_is_equal(const MemoryResource& other) const noexcept override;

private:
  lmem::detail::HeapHead* m_Heap;
};

// Requests up to the threshold go to the small allocator.
class MixinAllocator : public MemoryResource {
public:
  MemoryResource* SelectAllocator(size_t size) const;

protected:
  void* do_allocate(size_t size, size_t alignment) override;
  void do_deallocate(void* pointer, size_t size, size_t alignment) override;
  bool do_is_equal(const MemoryResource& other) const noexcept override;

private:
  MemoryResource* m_pSmallAllocator;
  MemoryResource* m_pLargeAllocator;
  size_t m_Threshold;
};

}
