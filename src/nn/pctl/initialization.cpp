#include "nn/pctl/initialization.hpp"

#include <stddef.h>

#include "nn/lmem/unit_heap_queries.hpp"
#include "nn/sf/hipc.hpp"

namespace nn::pctl::detail {

[[noreturn]] void AbortResult(const uint32_t*) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

void AbortIfUnexpectResultImpl(Result result) {
  if (result.value && (result.value & 0x3fffff) == 0x10a8e) {
    AbortResult(&result.value);
  }
}

namespace ipc {

using sf::hipc::client::SessionManagerStorage;

static_assert(sizeof(ResourcePool) == 432);
static_assert(offsetof(InitializationState, sessions) == 56);
static_assert(offsetof(InitializationState, pool) == 392);
static_assert(sizeof(InitializationState) == 824);

InitializationState State;

extern uintptr_t SessionManagerVtable[] asm(
  "_ZTVN2nn2sf4hipc6client34HipcSimpleClientSessionManagerBaseINS2_"
  "29DefaultSessionResourceManagerEE4ImplE");
extern uintptr_t ResourceVtable[] asm("_ZTVN2nn2sf22UnitHeapMemoryResourceE");
extern uintptr_t FactoryVtable[];
extern const char* ServiceNames[4];

static void Release(DomainProxy* object) {
  using Function = void (*)(DomainProxy*);
  reinterpret_cast<Function>(object->vtable[1])(object);
}

static void InitializeSessions(SessionManagerStorage* storage) {
  auto* manager = &storage->manager;
  manager->vtable = SessionManagerVtable + 2;
  manager->nodes = storage->nodes;
  manager->mutex.lock.state.value = 0;
  manager->condition.Initialize();
  manager->available = nullptr;
  manager->free = manager->nodes;
  manager->owner = manager;

  for (size_t i = 0; i < 15; ++i) {
    manager->nodes[i].next = manager->nodes + i + 1;
  }

  manager->nodes[15].next = nullptr;
  storage->resize_mutex.lock.state.value = 0;

  for (size_t i = 0; i < 16; ++i) {
    storage->nodes[i].handle = 0;
  }

  manager->capacity = 16;
  manager->session_count = 0;
}

static void DrainSessions(SessionManagerStorage* storage) {
  storage->resize_mutex.Lock();
  sf::hipc::client::ResizeSessions(&storage->manager, 0);
  storage->resize_mutex.Unlock();
}

uint32_t CreateServiceFactory(SessionManager* manager, DomainProxy** output,
  sf::UnitHeapMemoryResource* allocator, uint32_t handle) {
  uint32_t id = 0;
  uint32_t result = manager->ConvertToDomainImpl(&id, handle);

  if (result) {
    return result;
  }

  using Allocate = void* (*)(sf::UnitHeapMemoryResource*, size_t, size_t);
  auto allocate = reinterpret_cast<Allocate>(allocator->vtable[2]);
  auto* proxy = static_cast<DomainProxy*>(allocate(allocator, 56, 8));

  if (proxy) {
    proxy->object.manager = manager;
    proxy->object.object_id = id;
    proxy->object.reserved14 = 0;
    proxy->reference.references = 1;
    proxy->object.owned = 1;
    proxy->allocator = allocator;
    proxy->vtable = FactoryVtable + 2;
    proxy->reference_vtable = FactoryVtable + 11;
  }

  DomainProxy* previous = *output;
  *output = proxy;

  if (previous) {
    Release(previous);
  }

  sf::hipc::client::ReturnSession(manager, handle);
  ++manager->session_count;
  return 0;
}

uint32_t InitializeIpcSessionIfNeeded() {
  if (State.initialized & 1) {
    return 0;
  }

  auto* pool = &State.pool;
  pool->mutex.Lock();
  uint32_t references;

  if (pool->references) {
    references = pool->references + 1;
  }
  else {
    auto* header = reinterpret_cast<lmem::detail::HeapHead*>(pool->header);
    auto* heap = lmem::CreateUnitHeap(pool->buffer, 256, 64, 4, 16, header);
    pool->heap = header;
    pool->allocator.vtable = ResourceVtable + 2;
    pool->allocator.heap = heap;
    references = 1;
  }

  SessionManagerStorage temporary = {};
  pool->references = references;
  pool->mutex.Unlock();
  InitializeSessions(&State.sessions);
  bool retained = false;
  uint32_t result = 0;

  for (size_t index = 0; index < 4; ++index) {
    const char* name = ServiceNames[index];
    auto* storage = &State.sessions;

    if (retained) {
      InitializeSessions(&temporary);
      storage = &temporary;
    }

    auto* allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uint8_t*>(pool->heap) + 144);
    DomainProxy* factory = nullptr;
    bool proceed = true;
    sf::hipc::InitializeHipcServiceResolution();
    uint32_t handle = 0;
    uint32_t connected = sf::hipc::ConnectToHipcService(&handle, name);

    if (connected) {
      sf::hipc::FinalizeHipcServiceResolution();
    }
    else {
      connected =
        CreateServiceFactory(&storage->manager, &factory, allocator, handle);
      sf::hipc::FinalizeHipcServiceResolution();

      if (!connected) {
        DomainProxy* service = nullptr;
        DomainProxy** output = &service;
        using Create = uint32_t (*)(DomainProxy*, DomainProxy***, uint64_t);
        result =
          reinterpret_cast<Create>(factory->vtable[5])(factory, &output, 0);

        if (result) {
          if (service) {
            Release(service);
          }

          proceed = false;
        }
        else if (retained) {
          if (service) {
            Release(service);
          }
        }
        else {
          DomainProxy* object = factory;
          factory = nullptr;
          State.holder.mutex.Lock();

          if (!State.holder.references) {
            State.holder.object = object;
            object = nullptr;
          }

          ++State.holder.references;
          State.holder.mutex.Unlock();

          if (object) {
            Release(object);
          }

          storage = nullptr;
          State.service = service;
        }

        if (!result) {
          retained = true;
        }
      }
    }

    if (factory) {
      Release(factory);
    }

    if (storage) {
      DrainSessions(storage);

      if (storage != &State.sessions) {
        storage->manager.vtable = SessionManagerVtable + 2;
        DrainSessions(storage);
      }
    }

    if (!proceed) {
      break;
    }
  }

  if (!result) {
    if (retained) {
      using Initialize = uint32_t (*)(DomainProxy*);
      result =
        reinterpret_cast<Initialize>(State.service->vtable[4])(State.service);
    }
    else {
      result = 0x1015;
    }
  }

  if (!result) {
    State.initialized = 1;
    return 0;
  }

  if (retained) {
    Release(State.service);
    State.service = nullptr;
    State.holder.mutex.Lock();

    if (!--State.holder.references) {
      Release(State.holder.object);
      State.holder.object = nullptr;

      if (State.holder.release) {
        State.holder.release(State.holder.context);
      }

      State.holder.release = nullptr;
      State.holder.context = nullptr;
    }

    State.holder.mutex.Unlock();
    DrainSessions(&State.sessions);
  }

  State.sessions.manager.vtable = SessionManagerVtable + 2;
  DrainSessions(&State.sessions);
  pool->mutex.Lock();

  if (!--pool->references) {
    auto* allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uint8_t*>(pool->heap) + 144);
    lmem::DestroyUnitHeap(allocator->heap);
    pool->heap = nullptr;
  }

  pool->mutex.Unlock();
  return result;
}

uint32_t InitializeWatcherIpcSessionIfNeeded() {
  return 0;
}

DomainProxy* GetServiceImpl() {
  return State.service;
}

DomainProxy* GetService() {
  State.mutex.Lock();
  uint32_t result = InitializeIpcSessionIfNeeded();

  if (result) {
    AbortResult(&result);
  }

  DomainProxy* service = GetServiceImpl();
  State.mutex.Unlock();
  return service;
}

DomainProxy* GetServiceForWatcher() {
  State.mutex.Lock();
  uint32_t result = InitializeIpcSessionIfNeeded();

  if (result) {
    AbortResult(&result);
  }

  result = InitializeWatcherIpcSessionIfNeeded();

  if (result) {
    AbortResult(&result);
  }

  DomainProxy* service = GetServiceImpl();
  State.mutex.Unlock();
  return service;
}

}
}

namespace nn::pctl {

void Initialize() {
  detail::ipc::InitializeIpcSessionIfNeeded();
}

}
