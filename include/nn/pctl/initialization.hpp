#pragma once

#include "nn/result.hpp"
#include "nn/sf/client_session.hpp"

namespace nn::pctl {

void Initialize();

namespace detail {

void AbortIfUnexpectResultImpl(Result result);

namespace ipc {

using DomainProxy = sf::hipc::client::DomainProxy;
using SessionManager = sf::hipc::client::HipcClientSessionManager;

struct ResourcePool {
  lmem::detail::HeapHead* heap;
  os::SdkMutexType mutex;
  uint32_t references;
  alignas(8) uint8_t header[144];
  sf::UnitHeapMemoryResource allocator;
  uint8_t buffer[256];
};

struct ObjectHolder {
  DomainProxy* object;
  os::SdkMutexType mutex;
  uint32_t references;
  void (*release)(void*);
  void* context;
};

struct InitializationState {
  os::SdkRecursiveMutexType mutex;
  uint8_t initialized;
  uint8_t reserved09[7];
  DomainProxy* service;
  ObjectHolder holder;
  sf::hipc::client::SessionManagerStorage sessions;
  uint8_t reserved180[8];
  ResourcePool pool;
};

extern InitializationState State;

uint32_t InitializeIpcSessionIfNeeded();
uint32_t InitializeWatcherIpcSessionIfNeeded();
DomainProxy* GetService();
DomainProxy* GetServiceForWatcher();
DomainProxy* GetServiceImpl();
uint32_t CreateServiceFactory(SessionManager* manager, DomainProxy** output,
  sf::UnitHeapMemoryResource* allocator, uint32_t handle);

}
}
}
