#pragma once

#include <stddef.h>

namespace std {
inline namespace __1 {
namespace pmr {

class memory_resource {
public:
  virtual ~memory_resource();

protected:
  virtual void* do_allocate(size_t size, size_t alignment) = 0;
  virtual void do_deallocate(
    void* address, size_t size, size_t alignment
  ) = 0;
  virtual bool do_is_equal(const memory_resource& other) const noexcept = 0;
};

}
}
}

namespace fw::memory {

class DefaultMemoryResource final : public std::pmr::memory_resource {
public:
  ~DefaultMemoryResource() override;
  static void operator delete(void* address) noexcept;

protected:
  void* do_allocate(size_t size, size_t alignment) override;
  void do_deallocate(
    void* address, size_t size, size_t alignment
  ) override;
  bool do_is_equal(
    const std::pmr::memory_resource& other
  ) const noexcept override;
};

static_assert(sizeof(DefaultMemoryResource) == sizeof(void*));

}
