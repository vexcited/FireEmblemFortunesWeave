#include "nn/err/context_initialization.hpp"

#include <stddef.h>

#include "nn/lmem/unit_heap_queries.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/sf/hipc_error_handler.hpp"

namespace nn::err::detail {

using namespace sf::hipc::client;

static_assert(sizeof(ContextSeriesArray) == 40);
static_assert(sizeof(ContextSeriesRecord) == 40);
static_assert(sizeof(ContextRecord) == 56);
static_assert(offsetof(WriterResourcePool, sessions) == 304);
static_assert(sizeof(WriterResourcePool) == 632);
static_assert(sizeof(WriterInitializationState) == 696);
static_assert(offsetof(WriterResources, series_buffer) == 64);
static_assert(offsetof(WriterResources, context_buffer) == 704);
static_assert(offsetof(WriterResources, series_array) == 4288);
static_assert(offsetof(WriterResources, unit_allocator) == 4328);
static_assert(offsetof(WriterResources, unit_header) == 8456);
static_assert(offsetof(WriterResources, exp_allocator) == 8600);
static_assert(offsetof(WriterResources, mixed_allocator) == 25000);
static_assert(offsetof(WriterResources, serialization_buffer) == 25048);
static_assert(sizeof(WriterResources) == 41432);

WriterInitializationState WriterState;
WriterResources Resources;

extern uintptr_t SessionManagerVtable[] asm(
  "_ZTVN2nn2sf4hipc6client34HipcSimpleClientSessionManagerBaseINS2_"
  "29DefaultSessionResourceManagerEE4ImplE");
extern uintptr_t ResourceVtable[] asm("_ZTVN2nn2sf22UnitHeapMemoryResourceE");
extern uintptr_t UnitVtable[] asm(
  "_ZTVN2nn3err6detail17UnitHeapAllocatorILi64EEE");
extern uintptr_t ExpVtable[] asm(
  "_ZTVN2nn3err6detail16ExpHeapAllocatorILm16384EEE");
extern uintptr_t MixedVtable[] asm("_ZTVN2nn3err6detail14MixinAllocatorE");
extern uintptr_t WriterVtable[];
extern const char WriterServiceName[];
void HandleWriterError(Result result);
[[noreturn]] void AbortResult(const uint32_t*) asm(
  "_ZN2nn4diag6detail9AbortImplEPKNS_6ResultE");

static void Release(DomainProxy* proxy) {
  using Function = void (*)(DomainProxy*);
  reinterpret_cast<Function>(proxy->vtable[1])(proxy);
}

ContextWriterClientResourceAccessor* GetContextWriterClientResourceAccessor() {
  return &WriterState.accessor;
}

void ContextSeriesArray::AttachStorage(Storage&& incoming) {
  mutex.Lock();
  Storage old = storage;
  storage = incoming;
  incoming = old;
  mutex.Unlock();
}

void InitializeWriterResources(WriterResources* resources) {
  __builtin_memset(resources->series_buffer, 0, 616);

  for (auto& record : resources->series_buffer) {
    record.descriptor = UINT32_MAX;
    record.values[0] = 0;
    record.values[1] = 0;
    record.values[2] = 0;
  }

  resources->series_records = resources->series_buffer;
  __builtin_memset(resources->context_buffer, 0, 3584);

  for (auto& record : resources->context_buffer) {
    record.kind = 0;
    record.size = 0;
    record.data[0] = 0;
    record.data[1] = 0;
    record.data[2] = 0;
    record.values[0] = 0;
    record.values[1] = 0;
    record.active = 0;
  }

  resources->series_array = {};
  resources->context_records = resources->context_buffer;
  resources->series = &resources->series_array;
  auto* unit = &resources->unit_allocator;
  unit->vtable = UnitVtable + 2;
  unit->heap = lmem::CreateUnitHeap(resources->unit_buffer, 4096, 64, 4, 8,
    reinterpret_cast<lmem::detail::HeapHead*>(resources->unit_header));
  unit->unit_size = 64;
  unit->options = 8;
  unit->vtable = UnitVtable + 2;
  resources->units = unit;
  auto* expanded = &resources->exp_allocator;
  expanded->vtable = ExpVtable + 2;
  expanded->heap = lmem::CreateExpHeap(resources->exp_buffer, 16384, 4);
  expanded->vtable = ExpVtable + 2;
  resources->mixed_allocator.expanded = expanded;
  resources->mixed_allocator.unit_size = 64;
  resources->expanded = expanded;
  resources->mixed = &resources->mixed_allocator;
  auto* serialization = &resources->serialization_allocator;
  serialization->vtable = ExpVtable + 2;
  resources->mixed_allocator.vtable = MixedVtable + 2;
  resources->mixed_allocator.units = resources->units;
  serialization->heap =
    lmem::CreateExpHeap(resources->serialization_buffer, 16384, 4);
  serialization->vtable = ExpVtable + 2;
  resources->serialization = serialization;
  ContextSeriesArray::Storage storage{
    resources->series_records, 16, resources->context_records, 64};
  resources->series->AttachStorage(
    static_cast<ContextSeriesArray::Storage&&>(storage));
  resources->initialized = 1;
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

void ReleaseWriterSessions(WriterResourcePool* pool) {
  pool->sessions.manager.vtable = SessionManagerVtable + 2;
  pool->sessions.resize_mutex.Lock();
  ResizeSessions(&pool->sessions.manager, 0);
  pool->sessions.resize_mutex.Unlock();
  pool->mutex.Lock();

  if (--pool->references == 0) {
    auto* allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uint8_t*>(pool->heap) + 144);
    lmem::DestroyUnitHeap(allocator->heap);
    pool->heap = nullptr;
  }

  pool->mutex.Unlock();
}

uint32_t CreateWriterProxy(HipcClientSessionManager* manager,
  DomainProxy** output, sf::UnitHeapMemoryResource* allocator,
  uint32_t handle) {
  uint32_t id = 0;
  uint32_t result = manager->ConvertToDomainImpl(&id, handle);

  if (result) {
    return result;
  }

  using Allocate = void* (*)(sf::UnitHeapMemoryResource*, size_t, size_t);
  auto* proxy = static_cast<DomainProxy*>(
    reinterpret_cast<Allocate>(allocator->vtable[2])(allocator, 56, 8));

  if (proxy) {
    proxy->object.manager = manager;
    proxy->object.object_id = id;
    proxy->object.reserved14 = 0;
    proxy->reference.references = 1;
    proxy->object.owned = 1;
    proxy->allocator = allocator;
    proxy->vtable = WriterVtable + 2;
    proxy->reference_vtable = WriterVtable + 11;
  }

  DomainProxy* old = *output;
  *output = proxy;

  if (old) {
    Release(old);
  }

  ReturnSession(manager, handle);
  ++manager->session_count;
  return 0;
}

uint32_t ConnectWriter(WriterConnection* connection, DomainProxy** output) {
  auto* pool = connection->pool;
  pool->mutex.Lock();

  if (!pool->references) {
    auto* header = reinterpret_cast<lmem::detail::HeapHead*>(pool->header);
    auto* heap = lmem::CreateUnitHeap(pool->buffer, 128, 64, 4, 16, header);
    pool->heap = header;
    pool->allocator.vtable = ResourceVtable + 2;
    pool->allocator.heap = heap;
    pool->references = 1;
  }
  else {
    ++pool->references;
  }

  pool->mutex.Unlock();

  if (!connection->allocator) {
    connection->allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uint8_t*>(pool->heap) + 144);
  }

  InitializeSessions(&pool->sessions);
  const char* name = connection->service_name;
  auto* allocator = connection->allocator;
  DomainProxy* proxy = nullptr;
  sf::hipc::InitializeHipcServiceResolution();
  uint32_t handle = 0;
  uint32_t result = sf::hipc::ConnectToHipcService(&handle, name);

  if (result) {
    sf::hipc::FinalizeHipcServiceResolution();
  }
  else {
    result =
      CreateWriterProxy(&pool->sessions.manager, &proxy, allocator, handle);
    sf::hipc::FinalizeHipcServiceResolution();

    if (!result) {
      DomainProxy* old = *output;
      *output = proxy;
      proxy = nullptr;

      if (old) {
        Release(old);
      }
    }

    if (proxy) {
      Release(proxy);
    }
  }

  if (result) {
    ReleaseWriterSessions(pool);
  }

  return result;
}

}

namespace nn::err {

void InitializeContextWriterApi() {
  using namespace detail;
  WriterState.mutex.Lock();

  if (!(__atomic_load_n(&WriterState.initialized, __ATOMIC_ACQUIRE) & 1)) {
    WriterConnection connection{&WriterState.pool, WriterServiceName, nullptr};
    WriterState.writer_mutex.Lock();
    uint32_t result = 0;

    if (WriterState.references) {
      if (!WriterState.cleanup) {
        WriterState.cleanup = ReleaseWriterSessions;
        WriterState.cleanup_argument = &WriterState.pool;
      }

      ++WriterState.references;
    }
    else {
      sf::hipc::client::DomainProxy* proxy = nullptr;
      result = ConnectWriter(&connection, &proxy);

      if (!result) {
        WriterState.references = 1;
        WriterState.writer = proxy;
        WriterState.cleanup = ReleaseWriterSessions;
        WriterState.cleanup_argument = &WriterState.pool;
      }
      else if (proxy) {
        Release(proxy);
      }
    }

    WriterState.writer_mutex.Unlock();

    if (!result) {
      InitializeWriterResources(&Resources);
      WriterState.accessor = {
        Resources.series, Resources.mixed, Resources.serialization};
      sf::hipc::SetHipcErrorHandlerOnClient(HandleWriterError);
      __atomic_store_n(&WriterState.initialized, 1, __ATOMIC_RELEASE);
    }
    else if ((result & 0x3fffff) != 0x1015) {
      AbortResult(&result);
    }
  }

  WriterState.mutex.Unlock();
}

}
