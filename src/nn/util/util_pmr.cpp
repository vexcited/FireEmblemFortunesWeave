#include "nn/util/util_pmr.hpp"

#include <atomic>
#include <new>

namespace nn::util::pmr {

namespace {

constexpr size_t NewAlignment = 16;

class NewDeleteMemoryResource final : public MemoryResource {
protected:
  void* do_allocate(size_t bytes, size_t alignment) override {
    if (alignment <= NewAlignment) {
      return ::operator new(bytes, std::nothrow);
    }

    // The raw pointer is kept in the aligned slot right after the block.
    size_t slot = (bytes + 7) & ~size_t(7);
    void* raw = ::operator new(slot + alignment + 7, std::nothrow);
    if (raw == nullptr) {
      return nullptr;
    }

    uintptr_t aligned = (reinterpret_cast<uintptr_t>(raw) + alignment - 1) &
      -alignment;
    *reinterpret_cast<void**>((aligned + bytes + 7) & ~uintptr_t(7)) = raw;
    return reinterpret_cast<void*>(aligned);
  }

  void do_deallocate(void* pointer, size_t bytes, size_t alignment) override {
    if (pointer != nullptr && alignment > NewAlignment) {
      pointer = *reinterpret_cast<void**>(
        (reinterpret_cast<uintptr_t>(pointer) + bytes + 7) & ~uintptr_t(7));
    }
    ::operator delete(pointer);
  }
};

class DefaultResourceHolder {
public:
  [[gnu::noinline]] DefaultResourceHolder() :
    m_Resource(NewDeleteResource()) {}

  std::atomic<MemoryResource*> m_Resource;
};

DefaultResourceHolder& GetDefaultResourceHolder() {
  static DefaultResourceHolder s_Holder;
  return s_Holder;
}

}

MemoryResource* NewDeleteResource() {
  static NewDeleteMemoryResource s_Resource;
  return &s_Resource;
}

MemoryResource* GetDefaultResource() {
  return GetDefaultResourceHolder().m_Resource.load();
}

MemoryResource* SetDefaultResource(MemoryResource* resource) {
  DefaultResourceHolder& holder = GetDefaultResourceHolder();
  if (resource == nullptr) {
    resource = NewDeleteResource();
  }
  return holder.m_Resource.exchange(resource);
}

}
