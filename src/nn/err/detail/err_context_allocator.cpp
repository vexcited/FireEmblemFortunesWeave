#include "nn/memory_resource.hpp"

namespace nn::err::detail {

MemoryResource* GetContextNopAllocator();

// Raw contexts that point into a serialized buffer own nothing, so their
// deleter releases through an allocator that ignores every request.
class NopAllocator : public MemoryResource {
 public:
  NopAllocator() {}

 protected:
  void* do_allocate(size_t, size_t) override {
    return nullptr;
  }

  void do_deallocate(void*, size_t, size_t) override {}

  bool do_is_equal(const MemoryResource& other) const noexcept override {
    return this == &other;
  }
};

MemoryResource* GetContextNopAllocator() {
  [[clang::no_destroy]] static NopAllocator s_Allocator;
  return &s_Allocator;
}

}
