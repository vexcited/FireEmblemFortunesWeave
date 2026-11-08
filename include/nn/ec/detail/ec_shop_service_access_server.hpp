#pragma once

#include <stdint.h>

#include "nn/ec/ec_consumable_service_item.hpp"
#include "nn/lmem/unit_heap.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/util/intrusive_list.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::ec::detail::ShopServiceAccessServer {

class Proxy {
public:
  Proxy();
  ~Proxy();

  Result Finalize();
  Result CreateAccessorInterface(
    sf::SharedPointer<nim::detail::IShopServiceAccessor>* pOutAccessor,
    const uint8_t& type);
  void Attach(ShopServiceAccessor* accessor);
  void Detach(ShopServiceAccessor* accessor);
  nim::detail::IShopServiceAccessServer* AcquireImpl();

private:
  os::Mutex m_Mutex{true};
  sf::SharedPointer<nim::detail::IShopServiceAccessServer> m_Service;
  os::TransferMemoryType m_TransferMemory;
  util::IntrusiveListNode m_Accessors;
  uint8_t m_IsInitialized;
};

class ProxyStore {
public:
  ProxyStore() : m_pProxy(nullptr) {}
  ~ProxyStore();

  static ProxyStore& GetInstance();

  void Initialize(Proxy* proxy);
  Result Finalize();

  Proxy* m_pProxy;
};

class ISpecialClient : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result Unregister(void* pClient) = 0;
};

// The unit heap the session objects come from is shared by every register.
struct SpecialClientResourcePool {
  lmem::detail::HeapHead* heap;
  os::SdkMutexType mutex;
  uint32_t references;
};

class SpecialClientRegister {
public:
  ~SpecialClientRegister();

private:
  os::Mutex m_Mutex{true};
  sf::SharedPointer<ISpecialClient> m_Session;
  uint64_t m_Reserved28;
  SpecialClientResourcePool m_Pool;
};

Result ToResult(Result result);

}
