#pragma once

#include <cstddef>

#include "ui/ui2d.hpp"

namespace ui {

#pragma GCC visibility push(hidden)

// Layout controls live in the ui2d heap, next to the panes they wrap.
template <class T>
class LayoutAllocator {
public:
  using value_type = T;

  LayoutAllocator() = default;

  template <class U>
  LayoutAllocator(const LayoutAllocator<U>&) {}

  T* allocate(std::size_t count) {
    return static_cast<T*>(nn::ui2d::Layout::AllocateMemory(
      count * sizeof(T), alignof(T)));
  }

  void deallocate(T* pointer, std::size_t) {
    nn::ui2d::Layout::FreeMemory(pointer);
  }
};

template <class T, class U>
bool operator==(const LayoutAllocator<T>&, const LayoutAllocator<U>&) {
  return true;
}

#pragma GCC visibility pop

}
