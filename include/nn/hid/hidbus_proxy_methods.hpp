#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::hidbus {

class IHidbusSystemServer;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<hidbus::IHidbusSystemServer, Kind>
  : public CmifProxyMethodsBase<hidbus::IHidbusSystemServer, Kind> {
public:
  virtual Result Command500(uint64_t argument0) {
    return this->template InvokeMethod<false, 500, void(uint64_t)>(argument0);
  }

  virtual Result Command501(uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 501, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command502(uint64_t argument0) {
    return this->template InvokeMethod<false, 502, void(uint64_t)>(argument0);
  }
};

}
