#pragma once

#include "nn/memory_resource.hpp"

namespace nn::util::pmr {

MemoryResource* NewDeleteResource();
MemoryResource* GetDefaultResource();
MemoryResource* SetDefaultResource(MemoryResource* resource);

template<typename T>
class PolymorphicAllocator {
public:
  using value_type = T;

  PolymorphicAllocator(MemoryResource* resource) noexcept
    : m_Resource(resource) {}

  template<typename U>
  PolymorphicAllocator(const PolymorphicAllocator<U>& other) noexcept
    : m_Resource(other.resource()) {}

  T* allocate(size_t count) {
    return static_cast<T*>(m_Resource->allocate(count * sizeof(T),
      alignof(T)));
  }

  void deallocate(T* pointer, size_t count) {
    m_Resource->deallocate(pointer, count * sizeof(T), alignof(T));
  }

  MemoryResource* resource() const noexcept {
    return m_Resource;
  }

private:
  MemoryResource* m_Resource;
};

template<typename T, typename U>
bool operator==(const PolymorphicAllocator<T>& left,
  const PolymorphicAllocator<U>& right) noexcept {
  return left.resource() == right.resource();
}

template<typename T, typename U>
bool operator!=(const PolymorphicAllocator<T>& left,
  const PolymorphicAllocator<U>& right) noexcept {
  return !(left == right);
}

}
