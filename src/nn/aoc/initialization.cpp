#include "nn/aoc/initialization.hpp"

#include "nn/lmem/unit_heap_queries.hpp"
#include "nn/sf/hipc.hpp"

#include <stddef.h>

namespace nn::aoc {

namespace detail {

InitializationState State;

extern uintptr_t UnitHeapVtable[] asm("_ZTVN2nn2sf22UnitHeapMemoryResourceE");
extern uintptr_t ProxyVtable[] asm(
  "_ZTVN2nn2sf6detail38ObjectImplFactoryWithStatefulAllocatorINS0_4cmif6client"
  "6detail9CmifProxyINS_6aocsrv6detail20IAddOnContentManagerENS0_4hipc6client"
  "18Hipc2ProxyKindBaseILNSA_6detail11MessageTypeE6EEENS0_30MemoryResource"
  "AllocationPolicyENS5_19ProcessModifierImplINS4_21DefaultProxyFilterTagEEE"
  "vEESG_E6ObjectE");

static_assert(sizeof(Proxy) == 40);
static_assert(offsetof(Proxy, reference) == 24);
static_assert(offsetof(Proxy, allocator) == 32);
static_assert(offsetof(ResourcePool, heap_header) == 16);
static_assert(offsetof(ResourcePool, allocator) == 160);
static_assert(offsetof(ResourcePool, buffer) == 176);
static_assert(sizeof(ResourcePool) == 1264);
static_assert(sizeof(ObjectHolder) == 32);
static_assert(offsetof(InitializationState, holder) == 8);
static_assert(offsetof(InitializationState, pool) == 48);
static_assert(sizeof(InitializationState) == 1312);

static void ReleaseInterface(Proxy* object) {
  using Release = void (*)(Proxy*);
  reinterpret_cast<Release>(object->vtable[1])(object);
}

void InitializeForHipc() {
  ServiceFactory factory = {&State.pool, "aoc:u", nullptr};
  State.holder.mutex.Lock();

  if (State.holder.references) {
    if (!State.holder.release) {
      State.holder.release = ReleaseResourcePool;
      State.holder.context = &State.pool;
    }

    ++State.holder.references;
  }
  else {
    Proxy* proxy = nullptr;
    uint32_t result = CreateServiceProxy(&factory, &proxy);

    if (result) {
      if (proxy) {
        ReleaseInterface(proxy);
      }

      State.holder.mutex.Unlock();
      return;
    }

    State.holder.references = 1;
    State.holder.object = proxy;
    State.holder.release = ReleaseResourcePool;
    State.holder.context = &State.pool;
  }

  State.holder.mutex.Unlock();
  State.initialized = 1;
}

void Finalize() {
  if (State.initialized != 1) {
    return;
  }

  State.holder.mutex.Lock();

  if (!--State.holder.references) {
    ReleaseInterface(State.holder.object);
    State.holder.object = nullptr;

    if (State.holder.release) {
      State.holder.release(State.holder.context);
    }

    State.holder.release = nullptr;
    State.holder.context = nullptr;
  }

  State.holder.mutex.Unlock();
  State.initialized = 0;
}

ObjectHolder* GetObjectHolder() {
  return &State.holder;
}

void ReleaseResourcePool(ResourcePool* pool) {
  pool->mutex.Lock();

  if (!--pool->references) {
    auto* allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uintptr_t>(pool->heap) + 144);
    lmem::DestroyUnitHeap(allocator->heap);
    pool->heap = nullptr;
  }

  pool->mutex.Unlock();
}

uint32_t CreateServiceProxy(ServiceFactory* factory, Proxy** output) {
  ResourcePool* pool = factory->pool;
  pool->mutex.Lock();

  if (pool->references) {
    ++pool->references;
  }
  else {
    auto* header = reinterpret_cast<lmem::detail::HeapHead*>(pool->heap_header);
    auto* heap = lmem::CreateUnitHeap(pool->buffer, sizeof(pool->buffer), 64, 4,
                                      16, header);
    pool->heap = header;
    pool->allocator.vtable = UnitHeapVtable + 2;
    pool->allocator.heap = heap;
    pool->references = 1;
  }

  pool->mutex.Unlock();
  sf::UnitHeapMemoryResource* allocator = factory->allocator;

  if (!allocator) {
    allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uintptr_t>(pool->heap) + 144);
    factory->allocator = allocator;
  }

  const char* name = factory->name;
  uint32_t handle = 0;
  sf::hipc::InitializeHipcServiceResolution();
  uint32_t result = sf::hipc::ConnectToHipcService(&handle, name);
  sf::hipc::FinalizeHipcServiceResolution();

  if (result) {
    ReleaseResourcePool(pool);
    return result;
  }

  using Allocate = void* (*)(sf::UnitHeapMemoryResource*, size_t, size_t);
  auto allocate = reinterpret_cast<Allocate>(allocator->vtable[2]);
  auto* proxy = static_cast<Proxy*>(allocate(allocator, 40, 8));

  if (proxy) {
    proxy->reference.references = 1;
    proxy->handle_kind = 1;
    proxy->handle = handle;
    proxy->allocator = allocator;
    proxy->vtable = ProxyVtable + 2;
    proxy->reference_vtable = ProxyVtable + 27;
    proxy->reference.AddReferenceImpl();
  }

  Proxy* previous = *output;
  *output = proxy;

  if (previous) {
    ReleaseInterface(previous);
  }

  if (proxy) {
    ReleaseInterface(proxy);
  }

  return result;
}

void AddProxyReference(Proxy* proxy) {
  proxy->reference.AddReferenceImpl();
}

void ReleaseProxy(Proxy* proxy) {
  if (!proxy->reference.ReleaseImpl()) {
    return;
  }

  sf::UnitHeapMemoryResource* allocator = proxy->allocator;

  if (uint8_t(proxy->handle_kind) == 1) {
    uint32_t handle = proxy->handle;
    auto* buffer = static_cast<uint64_t*>(sf::hipc::GetMessageBufferOnTls());
    *buffer = 2;
    sf::hipc::SendSyncRequest(handle, buffer, 256);
    sf::hipc::CloseClientSessionHandle(handle);
  }

  using Deallocate =
    void (*)(sf::UnitHeapMemoryResource*, void*, size_t, size_t);
  auto deallocate = reinterpret_cast<Deallocate>(allocator->vtable[3]);
  deallocate(allocator, proxy, 40, 8);
}

}

void Initialize() {
  detail::InitializeForHipc();
}

void InitializeForSystem() {
  detail::InitializeForHipc();
}

void Finalize() {
  detail::Finalize();
}

}
