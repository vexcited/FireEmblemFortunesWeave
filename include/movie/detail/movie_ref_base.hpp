#pragma once

#include <atomic>
#include <stdint.h>

#include "movie/movie_interfaces.hpp"

namespace movie::detail {

// Reference counted objects live in the memory of their allocator, which
// they keep alive until they are freed.
template <typename T>
class MovieRefBase : public T {
public:
  static constexpr uint32_t ReleasedRefCount = 0xdead00;

  explicit MovieRefBase(IAllocator* allocator)
    : m_pAllocator(allocator), m_RefCount(0) {
    if (m_pAllocator != nullptr) {
      m_pAllocator->AddRef();
    }
  }

  void AddRef() override {
    m_RefCount++;
  }

  void Release() override {
    if (m_RefCount.fetch_sub(1) == 1) {
      m_RefCount = ReleasedRefCount;
      IAllocator* allocator = m_pAllocator;
      if (allocator != nullptr) {
        allocator->AddRef();
      }

      this->~MovieRefBase();
      allocator->Free(this);
      allocator->Release();
    }
  }

  virtual ~MovieRefBase() {
    if (m_pAllocator != nullptr) {
      m_pAllocator->Release();
      m_pAllocator = nullptr;
    }
  }

protected:
  IAllocator* m_pAllocator;
  std::atomic<uint32_t> m_RefCount;
};

}
