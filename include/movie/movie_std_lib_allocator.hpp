#pragma once

#include <stddef.h>

#include "movie/movie_interfaces.hpp"

namespace movie {

// A standard library allocator over a movie allocator it keeps a reference
// to.
template <typename T>
class StdLibAllocator {
public:
  using value_type = T;

  explicit StdLibAllocator(IAllocator* allocator) : m_pAllocator(allocator) {
    m_pAllocator->AddRef();
  }

  StdLibAllocator(const StdLibAllocator& other)
    : m_pAllocator(other.m_pAllocator) {
    m_pAllocator->AddRef();
  }

  // Moving takes a reference of its own before releasing the one of the
  // source, as the original does when the list allocates a node.
  StdLibAllocator(StdLibAllocator&& other)
    : m_pAllocator(other.m_pAllocator) {
    m_pAllocator->AddRef();
    other.m_pAllocator->Release();
    other.m_pAllocator = nullptr;
  }

  template <typename U>
  StdLibAllocator(const StdLibAllocator<U>& other)
    : m_pAllocator(other.GetAllocator()) {
    m_pAllocator->AddRef();
  }

  ~StdLibAllocator() {
    if (m_pAllocator != nullptr) {
      m_pAllocator->Release();
      m_pAllocator = nullptr;
    }
  }

  T* allocate(size_t count) {
    return static_cast<T*>(m_pAllocator->Allocate(count * sizeof(T)));
  }

  void deallocate(T* address, size_t) {
    m_pAllocator->Free(address);
  }

  IAllocator* GetAllocator() const {
    return m_pAllocator;
  }

  bool operator==(const StdLibAllocator& other) const {
    return m_pAllocator == other.m_pAllocator;
  }

private:
  IAllocator* m_pAllocator;
};

}
