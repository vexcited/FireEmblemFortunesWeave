#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::lm {

class IDevNotificationReceiver;
class ILogger;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<lm::ILogger, Kind>
  : public CmifProxyMethodsBase<lm::ILogger, Kind> {
public:
  virtual Result Command0(const InAutoSelectBuffer& argument0) {
    return this->template InvokeMethod<false, 0, void(
      const InAutoSelectBuffer&)>(argument0);
  }

  virtual Result Command1(uint32_t argument0) {
    return this->template InvokeMethod<false, 1, void(uint32_t)>(argument0);
  }

  virtual Result Command2(const InAutoSelectBuffer& argument0) {
    return this->template InvokeMethod<false, 2, void(
      const InAutoSelectBuffer&)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)
};

template <typename Kind>
class CmifProxyMethods<lm::IDevNotificationReceiver, Kind>
  : public CmifProxyMethodsBase<lm::IDevNotificationReceiver, Kind> {
public:
  virtual Result Command0(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command1(Out<uint32_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 1, void(
      Out<uint32_t>, const OutBuffer&)>(argument0, argument1);
  }
};

}
