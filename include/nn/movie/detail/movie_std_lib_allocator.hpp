#pragma once

#include <stddef.h>

#include "nn/movie/detail/movie_message.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t size, AllocatorInfo* allocatorInfo);
void FreeMemory(void* address, AllocatorInfo* allocatorInfo);

template <typename T>
class StdLibAllocator {
public:
  using value_type = T;

  explicit StdLibAllocator(AllocatorInfo* allocatorInfo)
    : m_pAllocatorInfo(allocatorInfo) {}

  template <typename U>
  StdLibAllocator(const StdLibAllocator<U>& other)
    : m_pAllocatorInfo(other.GetAllocatorInfo()) {}

  T* allocate(size_t count) {
    return static_cast<T*>(
      AllocateMemory(count * sizeof(T), m_pAllocatorInfo));
  }

  void deallocate(T* address, size_t) {
    FreeMemory(address, m_pAllocatorInfo);
  }

  AllocatorInfo* GetAllocatorInfo() const {
    return m_pAllocatorInfo;
  }

  bool operator==(const StdLibAllocator& other) const {
    return m_pAllocatorInfo == other.m_pAllocatorInfo;
  }

private:
  AllocatorInfo* m_pAllocatorInfo;
};

}
