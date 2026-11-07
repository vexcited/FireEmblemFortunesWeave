#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::ngc::detail {

class IService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<ngc::detail::IService, Kind>
  : public CmifProxyMethodsBase<ngc::detail::IService, Kind> {
public:
  virtual Result Command0(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command1(
    Out<uint32_t> argument0, const InBuffer& argument1, uint32_t argument2,
    const RawData<20, 4>& argument3) {
    return this->template InvokeMethod<false, 1, void(
      Out<uint32_t>, const InBuffer&, uint32_t, const RawData<20, 4>&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command2(
    Out<uint32_t> argument0, const OutBuffer& argument1,
    const InBuffer& argument2, uint32_t argument3,
    const RawData<20, 4>& argument4) {
    return this->template InvokeMethod<false, 2, void(
      Out<uint32_t>, const OutBuffer&, const InBuffer&, uint32_t,
      const RawData<20, 4>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command3() {
    return this->template InvokeMethod<false, 3, void()>();
  }

  virtual Result Command4(
    Out<uint32_t> argument0, const InBuffer& argument1, uint32_t argument2,
    const RawData<20, 4>& argument3) {
    return this->template InvokeMethod<false, 4, void(
      Out<uint32_t>, const InBuffer&, uint32_t, const RawData<20, 4>&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command5(
    Out<uint32_t> argument0, const OutBuffer& argument1,
    const InBuffer& argument2, uint32_t argument3,
    const RawData<20, 4>& argument4) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint32_t>, const OutBuffer&, const InBuffer&, uint32_t,
      const RawData<20, 4>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }
};

}
