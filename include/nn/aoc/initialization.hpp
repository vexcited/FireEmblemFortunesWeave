#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/sf/service_object.hpp"
#include "nn/sf/unit_heap_memory_resource.hpp"

namespace nn::aoc {

void Initialize();
void InitializeForSystem();
void Finalize();

namespace detail {

struct Proxy {
  uintptr_t* vtable;
  uint32_t handle_kind;
  uint32_t handle;
  uintptr_t* reference_vtable;
  sf::impl::detail::ServiceObjectImplBase2 reference;
  uint32_t reserved;
  sf::UnitHeapMemoryResource* allocator;
};

struct ResourcePool {
  lmem::detail::HeapHead* heap;
  os::SdkMutexType mutex;
  uint32_t references;
  alignas(8) uint8_t heap_header[144];
  sf::UnitHeapMemoryResource allocator;
  alignas(16) uint8_t buffer[1088];
};

struct ObjectHolder {
  Proxy* object;
  os::SdkMutexType mutex;
  uint32_t references;
  void (*release)(ResourcePool*);
  ResourcePool* context;
};

struct InitializationState {
  uint8_t initialized;
  uint8_t reserved01[7];
  ObjectHolder holder;
  uint8_t reserved28[8];
  ResourcePool pool;
};

struct ServiceFactory {
  ResourcePool* pool;
  const char* name;
  sf::UnitHeapMemoryResource* allocator;
};

extern InitializationState State;

void InitializeForHipc();
void Finalize();
ObjectHolder* GetObjectHolder();
uint32_t CreateServiceProxy(ServiceFactory* factory, Proxy** output);
void ReleaseResourcePool(ResourcePool* pool);
void AddProxyReference(Proxy* proxy);
void ReleaseProxy(Proxy* proxy);

}
}
