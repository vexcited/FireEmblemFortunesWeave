#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::account {

class IBaasAccessTokenAccessor;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<account::IBaasAccessTokenAccessor, Kind>
  : public CmifProxyMethodsBase<account::IBaasAccessTokenAccessor, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<account::detail::IAsyncContext>>& out,
    const RawData<16, 8>& argument0) {
    return this->template InvokeOutObjectMethod<false, 0, void(
      const Out<SharedPointer<account::detail::IAsyncContext>>&,
      const RawData<16, 8>&)>(out, argument0);
  }

  virtual Result Command1(
    Out<uint32_t> argument0, const OutBuffer& argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 1, void(
      Out<uint32_t>, const OutBuffer&, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command2(
    Out<uint64_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 2, void(
      Out<uint64_t>, const RawData<16, 8>&)>(argument0, argument1);
  }
};

}
