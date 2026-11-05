#pragma once

#include "nn/lmem/exp_heap.hpp"
#include "nn/sf/client_session.hpp"

namespace nn::err {

void InitializeContextWriterApi();

namespace detail {

struct ContextSeriesArray {
  struct Storage {
    void* series;
    size_t series_count;
    void* contexts;
    size_t context_count;
  };

  struct SeriesHolder;

  os::SdkRecursiveMutexType mutex;
  Storage storage;

  void AttachStorage(Storage&& storage);
  void lock();
  void unlock();
};

struct ContextWriterClientResourceAccessor {
  ContextSeriesArray* series;
  void* allocator;
  void* serialization_allocator;
};

struct WriterResourcePool {
  lmem::detail::HeapHead* heap;
  os::SdkMutexType mutex;
  uint32_t references;
  uint8_t header[144];
  sf::UnitHeapMemoryResource allocator;
  uint8_t buffer[128];
  sf::hipc::client::SessionManagerStorage sessions;
};

struct WriterConnection {
  WriterResourcePool* pool;
  const char* service_name;
  sf::UnitHeapMemoryResource* allocator;
};

struct WriterInitializationState {
  uint8_t initialized;
  uint8_t reserved01[3];
  os::SdkMutexType mutex;
  ContextWriterClientResourceAccessor accessor;
  sf::hipc::client::DomainProxy* writer;
  os::SdkMutexType writer_mutex;
  uint32_t references;
  void (*cleanup)(WriterResourcePool*);
  WriterResourcePool* cleanup_argument;
  WriterResourcePool pool;
};

struct ContextSeriesRecord {
  uint32_t descriptor;
  uint8_t reserved04[12];
  uintptr_t values[3];
};

struct ContextRecord {
  uintptr_t values[2];
  uint8_t active;
  uint8_t reserved11[7];
  uint8_t kind;
  uint8_t reserved19;
  uint16_t size;
  uint8_t reserved1c[4];
  uintptr_t data[3];
};

struct UnitAllocator {
  uintptr_t* vtable;
  lmem::detail::HeapHead* heap;
  size_t unit_size;
  uint32_t options;
  uint32_t reserved1c;
};

struct ExpAllocator {
  uintptr_t* vtable;
  lmem::detail::HeapHead* heap;
};

struct MixinAllocator {
  uintptr_t* vtable;
  UnitAllocator* units;
  ExpAllocator* expanded;
  size_t unit_size;
};

struct WriterResources {
  uint8_t initialized;
  uint8_t reserved01[7];
  ContextSeriesRecord* series_records;
  ContextRecord* context_records;
  ContextSeriesArray* series;
  UnitAllocator* units;
  ExpAllocator* expanded;
  MixinAllocator* mixed;
  ExpAllocator* serialization;
  ContextSeriesRecord series_buffer[16];
  ContextRecord context_buffer[64];
  ContextSeriesArray series_array;
  UnitAllocator unit_allocator;
  uint8_t unit_buffer[4096];
  uint8_t unit_header[144];
  ExpAllocator exp_allocator;
  uint8_t exp_buffer[16384];
  MixinAllocator mixed_allocator;
  ExpAllocator serialization_allocator;
  uint8_t serialization_buffer[16384];
};

extern WriterInitializationState WriterState;
extern WriterResources Resources;

ContextWriterClientResourceAccessor* GetContextWriterClientResourceAccessor();
void InitializeWriterResources(WriterResources* resources);
uint32_t ConnectWriter(
  WriterConnection* connection, sf::hipc::client::DomainProxy** output);
uint32_t CreateWriterProxy(sf::hipc::client::HipcClientSessionManager* manager,
  sf::hipc::client::DomainProxy** output, sf::UnitHeapMemoryResource* allocator,
  uint32_t handle);
void ReleaseWriterSessions(WriterResourcePool* pool);

}

}
