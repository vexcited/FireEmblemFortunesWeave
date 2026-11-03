#pragma once

#include "nn/os/synchronization.hpp"
#include "nn/sf/service_object.hpp"
#include "nn/sf/unit_heap_memory_resource.hpp"

namespace nn::sf::hipc::client {

struct SessionNode {
  uint32_t handle;
  uint32_t reserved;
  SessionNode* next;
};

struct HipcClientSessionManager {
  uintptr_t* vtable;
  uint16_t pointer_buffer_size;
  uint8_t reserved0a[6];
  SessionNode* nodes;
  os::SdkMutexType mutex;
  os::SdkConditionVariableType condition;
  SessionNode* available;
  SessionNode* free;
  HipcClientSessionManager* owner;
  uint32_t capacity;
  uint32_t session_count;

  uint32_t ConvertToDomainImpl(uint32_t* output, uint32_t handle) asm(
    "_ZN2nn2sf4hipc6client24HipcClientSessionManager19ConvertToDomainImplEPNS0_"
    "4cmif18CmifDomainObjectIdENS_3svc6HandleE");
  uint32_t CreateNewSession(uint32_t* output) asm(
    "_ZN2nn2sf4hipc6client24HipcClientSessionManager16CreateNewSessionEPNS_"
    "3svc6HandleE");
};

struct SessionManagerStorage {
  HipcClientSessionManager manager;
  os::SdkMutexType resize_mutex;
  uint32_t reserved44;
  SessionNode nodes[16];
};

struct DomainObject {
  uint8_t owned;
  uint8_t reserved01[7];
  HipcClientSessionManager* manager;
  uint32_t object_id;
  uint32_t reserved14;
};

struct DomainProxy {
  uintptr_t* vtable;
  DomainObject object;
  uintptr_t* reference_vtable;
  impl::detail::ServiceObjectImplBase2 reference;
  uint32_t reserved2c;
  UnitHeapMemoryResource* allocator;
};

uint32_t AcquireSession(HipcClientSessionManager* manager);
void ReturnSession(HipcClientSessionManager* manager, uint32_t handle);
uint32_t ResizeSessions(HipcClientSessionManager* manager, int32_t count);
void CloseSession(HipcClientSessionManager* manager);
void DestroyDomainObject(DomainObject* object);
void ReleaseDomainProxy(DomainProxy* proxy);
void AddDomainProxyReference(DomainProxy* proxy);
void* GetDomainProxyReference(DomainProxy* proxy);
uintptr_t GetDomainProxyZero(DomainProxy* proxy);
DomainObject* GetDomainProxyOwner(void* reference);

}
