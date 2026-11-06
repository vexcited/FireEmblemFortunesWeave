#pragma once

#include <cstring>
#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_ref_base.hpp"
#include "movie/movie_interfaces.hpp"

namespace movie {

namespace detail {

// Memory taken from an allocator, which it keeps alive while it holds it.
struct AllocatedMemory {
  void* pData = nullptr;
  uint32_t size = 0;
  bool isZeroFilledOnGrow = false;
  IAllocator* pAllocator = nullptr;

  ~AllocatedMemory() {
    Reset();
    isZeroFilledOnGrow = false;
  }

  void Reset() {
    if (pData != nullptr) {
      pAllocator->Free(pData);
      pData = nullptr;
    }

    size = 0;
    if (pAllocator != nullptr) {
      pAllocator->Release();
      pAllocator = nullptr;
    }
  }

  void Assign(void* data, uint32_t dataSize, bool isZeroFilled,
    IAllocator* allocator) {
    Reset();
    pData = data;
    size = dataSize;
    isZeroFilledOnGrow = isZeroFilled;
    pAllocator = allocator;
  }

  void Allocate(IAllocator* allocator, uint32_t allocationSize) {
    void* data = allocator->Allocate(allocationSize, 1);
    if (data != nullptr) {
      allocator->AddRef();
    }
    else {
      allocationSize = 0;
      allocator = nullptr;
    }

    Assign(data, allocationSize, false, allocator);
  }

  MovieResult Resize(uint32_t newSize) {
    if (pData == nullptr) {
      return MovieResult_NotInitialized;
    }

    uint32_t oldSize = size;
    if (oldSize == newSize) {
      return MovieResult_Success;
    }

    void* data = pAllocator->Reallocate(pData, newSize);
    if (data == nullptr) {
      return MovieResult_OutOfMemory;
    }

    if (oldSize < newSize && isZeroFilledOnGrow) {
      std::memset(static_cast<uint8_t*>(data) + size, 0, newSize - size);
    }

    pData = data;
    size = newSize;
    return MovieResult_Success;
  }
};

}

class MemoryBuffer : public detail::MovieRefBase<IBuffer> {
public:
  MemoryBuffer(IAllocator* allocator, size_t capacity);
  MemoryBuffer(IAllocator* allocator, size_t capacity, bool isResizable);
  ~MemoryBuffer() override;

  MovieResult Initialize();

  size_t GetCapacity() const override;
  size_t GetSize() const override;
  MovieResult SetSize(size_t size) override;
  uint8_t* GetBuffer() const override;
  MovieResult Grow(size_t capacity) override;
  MovieResult Shrink() override;
  bool IsResizable() const override;
  int Compare(IBuffer* other) const override;

private:
  detail::AllocatedMemory m_Memory;
  size_t m_Size;
  bool m_IsResizable;
};

MovieResult CreateMemoryBuffer(IBuffer** ppOutBuffer, size_t capacity,
  IAllocator* allocator);
MovieResult CreateMemoryBuffer(IBuffer** ppOutBuffer, size_t capacity,
  bool isResizable, IAllocator* allocator);
MovieResult CreateMemoryBufferAsCopy(IBuffer** ppOutBuffer,
  const uint8_t* data, size_t size, IAllocator* allocator);
MovieResult CreateMemoryBufferAsResizableCopy(IBuffer** ppOutBuffer,
  const uint8_t* data, size_t size, IAllocator* allocator);

}
