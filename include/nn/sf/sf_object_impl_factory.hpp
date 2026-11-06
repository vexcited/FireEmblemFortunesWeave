#pragma once

#include <stddef.h>

#include <new>
#include <utility>

#include "nn/memory_resource.hpp"
#include "nn/sf/service_object.hpp"

namespace nn::sf {

class MemoryResourceAllocationPolicy {
public:
  using Allocator = MemoryResource;

  static void* AllocateAligned(Allocator* pAllocator, size_t size,
    size_t alignment) {
    return pAllocator->allocate(size, alignment);
  }

  static void DeallocateAligned(Allocator* pAllocator, void* pointer,
    size_t size, size_t alignment) {
    pAllocator->deallocate(pointer, size, alignment);
  }
};

}

namespace nn::sf::detail {

// Objects that keep the allocator they come from to free themselves.
template <typename Impl, typename AllocationPolicy>
class ObjectImplFactoryWithStatefulAllocator {
public:
  using Allocator = typename AllocationPolicy::Allocator;

  class Object final : public Impl {
  public:
    template <typename... Arguments>
    explicit Object(Allocator* pAllocator, Arguments&&... args)
      : Impl(std::forward<Arguments>(args)...), m_Allocator(pAllocator) {
      m_Base.references = 1;
    }

    void AddReference() override;
    void Release() override;

  private:
    impl::detail::ServiceObjectImplBase2 m_Base;
    Allocator* m_Allocator;
  };

  template <typename... Arguments>
  static Impl* Create(Allocator* pAllocator, Arguments&&... args) {
    void* storage = AllocationPolicy::AllocateAligned(pAllocator,
      sizeof(Object), alignof(Object));
    if (storage == nullptr) {
      return nullptr;
    }
    return new (storage) Object(pAllocator,
      std::forward<Arguments>(args)...);
  }
};

}
