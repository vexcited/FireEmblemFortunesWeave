#include "nn/sf/client_session.hpp"

#include <stddef.h>

#include "nn/sf/hipc.hpp"

namespace nn::sf::hipc::client {

static_assert(sizeof(HipcClientSessionManager) == 64);
static_assert(sizeof(SessionManagerStorage) == 328);
static_assert(offsetof(SessionManagerStorage, nodes) == 72);
static_assert(sizeof(DomainProxy) == 56);
static_assert(offsetof(DomainProxy, reference) == 40);

uint32_t QueryPointerBufferSize(uint16_t*, uint32_t) asm(
  "_ZN2nn2sf4hipc6client22QueryPointerBufferSizeEPtNS_3svc6HandleE");
uint32_t ConvertSessionToDomain(uint32_t*, uint32_t) asm(
  "_ZN2nn2sf4hipc6client22ConvertSessionToDomainEPNS0_"
  "4cmif18CmifDomainObjectIdENS_3svc6HandleE");
uint32_t DuplicateSession(uint32_t*, uint32_t) asm(
  "_ZN2nn2sf4hipc6client16DuplicateSessionEPNS_3svc6HandleES4_");
uint32_t GetInlineContext() asm("_ZN2nn2sf4cmif16GetInlineContextEv");
void ParseDomainCloseReply(void*, void*);
[[noreturn]] void AbortDomainReply() asm("_ZN2nn4diag6detail9AbortImplEv");

template <typename T> static void Write(void* address, T value) {
  __builtin_memcpy(address, &value, sizeof(value));
}

uint32_t HipcClientSessionManager::ConvertToDomainImpl(
  uint32_t* output, uint32_t handle) {
  uint16_t size = 0;
  uint32_t result = QueryPointerBufferSize(&size, handle);

  if (result) {
    return result;
  }

  pointer_buffer_size = size;
  return ConvertSessionToDomain(output, handle);
}

uint32_t HipcClientSessionManager::CreateNewSession(uint32_t* output) {
  using Acquire = uint32_t (*)(HipcClientSessionManager*);
  uint32_t handle = reinterpret_cast<Acquire>(vtable[0])(this);
  uint32_t result = DuplicateSession(output, handle);
  using Return = void (*)(HipcClientSessionManager*, uint32_t);
  reinterpret_cast<Return>(vtable[1])(this, handle);
  return result;
}

uint32_t AcquireSession(HipcClientSessionManager* manager) {
  manager->mutex.Lock();
  SessionNode* node = manager->available;

  while (!node) {
    manager->condition.Wait(manager->mutex);
    node = manager->available;
  }

  manager->available = node->next;
  node->next = manager->free;
  manager->free = node;
  uint32_t handle = node->handle;
  manager->mutex.Unlock();
  return handle;
}

void ReturnSession(HipcClientSessionManager* manager, uint32_t handle) {
  manager->mutex.Lock();
  SessionNode* previous = manager->available;
  SessionNode* node = manager->free;
  manager->free = node->next;
  node->next = previous;
  manager->available = node;
  node->handle = handle;

  if (!previous) {
    manager->condition.Broadcast();
  }

  manager->mutex.Unlock();
}

void CloseSession(HipcClientSessionManager* manager) {
  manager->mutex.Lock();
  SessionNode* node = manager->available;

  while (!node) {
    manager->condition.Wait(manager->mutex);
    node = manager->available;
  }

  manager->available = node->next;
  node->next = manager->free;
  manager->free = node;
  uint32_t handle = node->handle;
  manager->mutex.Unlock();
  void* buffer = GetMessageBufferOnTls();
  Write<uint64_t>(buffer, 2);
  SendSyncRequest(handle, buffer, 256);
  CloseClientSessionHandle(handle);
  --manager->session_count;
}

uint32_t ResizeSessions(HipcClientSessionManager* manager, int32_t count) {
  int32_t difference = int32_t(uint32_t(count) - manager->session_count);

  if (count > int32_t(manager->session_count)) {
    uint32_t added = 0;

    do {
      uint32_t handle = 0;
      uint32_t result = manager->CreateNewSession(&handle);

      if (result) {
        while (added) {
          CloseSession(manager);
          --added;
        }

        return result;
      }

      ReturnSession(manager, handle);
      ++added;
      ++manager->session_count;
    } while (uint32_t(difference) != added);
  }
  else if (difference < 0) {
    int32_t remaining = int32_t(0U - uint32_t(difference));

    if (remaining <= 1) {
      remaining = 1;
    }

    do {
      CloseSession(manager);
    } while (--remaining);
  }

  return 0;
}

void DestroyDomainObject(DomainObject* object) {
  if (object->owned != 1) {
    return;
  }

  auto* manager = object->manager;
  uint32_t object_id = object->object_id;
  alignas(8) uint8_t reply[80] = {};
  using Acquire = uint32_t (*)(HipcClientSessionManager*);
  uint32_t handle = reinterpret_cast<Acquire>(manager->vtable[0])(manager);
  auto* buffer = static_cast<uint8_t*>(GetMessageBufferOnTls());
  Write<uint64_t>(buffer, 0x800000006ULL);
  auto* domain = reinterpret_cast<uint8_t*>((uintptr_t(buffer) + 23) & ~15ULL);
  Write<uint8_t>(domain, 2);
  Write<uint16_t>(domain + 1, 0);
  Write<uint8_t>(domain + 3, 0);
  Write<uint32_t>(domain + 4, object_id);
  Write<uint64_t>(domain + 8, 0);
  Write<uint32_t>(domain + 12, GetInlineContext());

  if (!SendSyncRequest(handle, buffer, 256)) {
    ParseDomainCloseReply(reply, buffer);
    uint16_t count;
    __builtin_memcpy(&count, reply + 36, sizeof(count));

    if (count >= 65) {
      AbortDomainReply();
    }
  }

  using Return = void (*)(HipcClientSessionManager*, uint32_t);
  reinterpret_cast<Return>(manager->vtable[1])(manager, handle);
}

void ReleaseDomainProxy(DomainProxy* proxy) {
  if (proxy->reference.ReleaseImpl()) {
    auto* allocator = proxy->allocator;
    DestroyDomainObject(&proxy->object);
    using Free = void (*)(UnitHeapMemoryResource*, void*, size_t, size_t);
    reinterpret_cast<Free>(allocator->vtable[3])(allocator, proxy, 56, 8);
  }
}

void AddDomainProxyReference(DomainProxy* proxy) {
  proxy->reference.AddReferenceImpl();
}

void* GetDomainProxyReference(DomainProxy* proxy) {
  return &proxy->reference_vtable;
}

uintptr_t GetDomainProxyZero(DomainProxy*) {
  return 0;
}

DomainObject* GetDomainProxyOwner(void* reference) {
  return reinterpret_cast<DomainObject*>(static_cast<uint8_t*>(reference) - 24);
}

}
