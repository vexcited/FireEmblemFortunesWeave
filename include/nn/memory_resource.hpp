#pragma once

#include <stddef.h>

namespace nn {

class MemoryResource {
public:
  constexpr MemoryResource() {}
  virtual ~MemoryResource() {}

  void* allocate(size_t bytes, size_t alignment = alignof(max_align_t)) {
    return do_allocate(bytes, alignment);
  }

  void deallocate(void* pointer, size_t bytes,
    size_t alignment = alignof(max_align_t)) {
    do_deallocate(pointer, bytes, alignment);
  }

  bool is_equal(const MemoryResource& other) const noexcept {
    return do_is_equal(other);
  }

protected:
  virtual void* do_allocate(size_t bytes, size_t alignment) = 0;
  virtual void do_deallocate(void* pointer, size_t bytes,
    size_t alignment) = 0;
  virtual bool do_is_equal(const MemoryResource& other) const noexcept {
    return this == &other;
  }
};

}
