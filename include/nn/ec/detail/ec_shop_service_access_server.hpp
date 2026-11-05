#pragma once

#include <stdint.h>

#include "nn/ec/ec_consumable_service_item.hpp"
#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::ec::detail::ShopServiceAccessServer {

class Proxy {
public:
  Result CreateAccessorInterface(
    sf::SharedPointer<nim::detail::IShopServiceAccessor>* pOutAccessor,
    const uint8_t& type);
  void Attach(ShopServiceAccessor* accessor);
  void Detach(ShopServiceAccessor* accessor);
};

class ProxyStore {
public:
  static ProxyStore& GetInstance();

  Proxy* m_pProxy;
};

Result ToResult(Result result);

}
