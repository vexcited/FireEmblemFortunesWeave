#include "nn/ec/detail/ec_shop_service_access_server.hpp"

#include "nn/sf/unit_heap_memory_resource.hpp"

namespace nn::ec::detail::ShopServiceAccessServer {

namespace {

// The accessor starts with its list node.
[[gnu::always_inline]] util::IntrusiveListNode* GetNode(
  ShopServiceAccessor* accessor) {
  return reinterpret_cast<util::IntrusiveListNode*>(accessor);
}

}

Proxy::Proxy() : m_IsInitialized(0) {}

Proxy::~Proxy() {
  Finalize();
}

// Every attached accessor is finalized first, the first failure stops it.
Result Proxy::Finalize() {
  m_Mutex.Lock();
  Result result = {0};
  if (m_IsInitialized == 1) {
    while (m_Accessors.GetNext() != &m_Accessors) {
      result = reinterpret_cast<ShopServiceAccessor*>(m_Accessors.GetNext())
        ->Finalize();
      if (result.IsFailure()) {
        m_Mutex.Unlock();
        return result;
      }
    }
    m_Service.Reset();
    os::DestroyTransferMemory(&m_TransferMemory);
    result = {0};
    m_IsInitialized = 0;
  }
  m_Mutex.Unlock();
  return result;
}

Result Proxy::CreateAccessorInterface(
  sf::SharedPointer<nim::detail::IShopServiceAccessor>* pOutAccessor,
  const uint8_t& type) {
  m_Mutex.Lock();
  const Result result = m_Service->CreateAccessorInterface(
    sf::Out<sf::SharedPointer<nim::detail::IShopServiceAccessor>>(
      pOutAccessor), type);
  m_Mutex.Unlock();
  return result;
}

void Proxy::Attach(ShopServiceAccessor* accessor) {
  m_Mutex.Lock();
  m_Accessors.LinkPrev(GetNode(accessor));
  m_Mutex.Unlock();
}

void Proxy::Detach(ShopServiceAccessor* accessor) {
  m_Mutex.Lock();
  util::IntrusiveListNode* node = GetNode(accessor);
  if (node->IsLinked() && node != &m_Accessors) {
    node->Unlink();
  }
  m_Mutex.Unlock();
}

// A proxy that fails to finalize stays registered.
ProxyStore::~ProxyStore() {
  if (m_pProxy != nullptr && m_pProxy->Finalize().IsSuccess()) {
    m_pProxy = nullptr;
  }
}

SpecialClientRegister::~SpecialClientRegister() {
  m_Mutex.Lock();
  if (m_Session != nullptr) {
    m_Session->Unregister(nullptr);
    m_Session.Reset();
  }
  m_Pool.mutex.Lock();
  if (--m_Pool.references == 0) {
    auto* allocator = reinterpret_cast<sf::UnitHeapMemoryResource*>(
      reinterpret_cast<uintptr_t>(m_Pool.heap) + 0x90);
    lmem::DestroyUnitHeap(allocator->heap);
    m_Pool.heap = nullptr;
  }
  m_Pool.mutex.Unlock();
  m_Mutex.Unlock();
}

}
