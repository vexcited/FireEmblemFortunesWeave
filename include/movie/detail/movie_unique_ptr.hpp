#pragma once

#include <functional>
#include <new>
#include <stddef.h>

#include "movie/detail/movie_ref_ptr.hpp"
#include "movie/movie_interfaces.hpp"

namespace movie::detail {

// Owns an object placed in the memory of an allocator, which it keeps alive.
// The deleter runs before the object is destroyed.
template <typename T>
class UniquePtr {
public:
  using Deleter = std::function<void(T*)>;

  UniquePtr() = default;

  UniquePtr(UniquePtr&& other)
    : m_p(other.m_p), m_Deleter(other.m_Deleter),
      m_Allocator(static_cast<RefPtr<IAllocator>&&>(other.m_Allocator)) {
    other.m_p = nullptr;
    other.m_Deleter = nullptr;
  }

  ~UniquePtr() {
    Reset();
  }

  UniquePtr& operator=(UniquePtr&& other) {
    if (this != &other) {
      Reset();
      T* p = m_p;
      m_p = other.m_p;
      other.m_p = p;
      m_Deleter.swap(other.m_Deleter);
      m_Allocator = static_cast<RefPtr<IAllocator>&&>(other.m_Allocator);
    }

    return *this;
  }

  void Reset() {
    if (m_p != nullptr) {
      if (m_Deleter) {
        m_Deleter(m_p);
      }

      m_p->~T();
      m_Allocator->Free(m_p);
      m_p = nullptr;
    }

    m_Deleter = nullptr;
    m_Allocator.Reset();
  }

  T* Get() const {
    return m_p;
  }

  T* operator->() const {
    return m_p;
  }

  explicit operator bool() const {
    return m_p != nullptr;
  }

  // The original calls it out of line.
  [[gnu::noinline]] static UniquePtr Make(IAllocator* allocator,
    size_t alignment, const Deleter& deleter) {
    UniquePtr result{};
    void* storage = allocator->Allocate(sizeof(T), alignment);
    if (storage == nullptr) {
      return result;
    }

    result.m_p = new (storage) T();
    result.m_Deleter = deleter;
    result.m_Allocator = allocator;
    return result;
  }

private:
  T* m_p = nullptr;
  Deleter m_Deleter;
  RefPtr<IAllocator> m_Allocator;
};

}
