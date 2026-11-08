#pragma once

#include <stdint.h>

#include "nn/ec/ec_consumable_service_item.hpp"
#include "nn/os/mutex.hpp"
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

private:
  os::Mutex m_Mutex{true};
  sf::SharedPointer<nim::detail::IShopServiceAccessServer> m_Service;
  os::TransferMemoryType m_TransferMemory;
  util::IntrusiveListNode m_Accessors;
  uint8_t m_IsInitialized;
};

class ProxyStore {
public:
  static ProxyStore& GetInstance();

  Proxy* m_pProxy;
};

Result ToResult(Result result);

}
