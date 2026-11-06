#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "movie/movie_interfaces.hpp"
#include "nn/mem/standard_allocator.hpp"

namespace movie::detail {

// Lives at the start of the memory it manages, whose first page holds the
// object itself.
class Allocator : public IAllocator {
public:
  static MovieResult CreateInstance(IAllocator** ppOutAllocator, void* memory,
    size_t size);

  Allocator(void* memory, size_t size);
  virtual ~Allocator();

  void AddRef() override;
  void Release() override;
  MovieResult Initialize() override;
  void Finalize() override;
  MovieResult GetInterface(void** ppOutInterface, int id) override;
  void* Allocate(size_t size) override;
  void* Allocate(size_t size, size_t alignment) override;
  void Free(void* address) override;
  void* Reallocate(void* address, size_t size) override;

  size_t CalculateAllocatedMemory();

private:
  std::atomic<uint32_t> m_RefCount;
  std::atomic<bool> m_IsFinalized;
  void* m_pMemory;
  size_t m_Size;
  nn::mem::StandardAllocator m_Allocator;
  size_t m_InitialFreeSize;
};

}

namespace movie {

MovieResult CreateAllocator(IAllocator** ppOutAllocator, void* memory,
  size_t size);

}
