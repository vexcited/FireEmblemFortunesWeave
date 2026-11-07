#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::ec {

class IPurchaseEventManager;

}

namespace nn::ec::detail {

class IAsyncData;

}

namespace nn::nim::detail {

class IShopServiceAccessServerInterface;
class IShopServiceAsync;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<nim::detail::IShopServiceAccessServerInterface, Kind>
  : public CmifProxyMethodsBase<nim::detail::IShopServiceAccessServerInterface,
    Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<nim::detail::IShopServiceAccessServer>>& out,
    uint64_t argument0, NativeHandle&& argument1, uint64_t argument2) {
    return this->template InvokeOutObjectMethod<true, 0, void(
      const Out<SharedPointer<nim::detail::IShopServiceAccessServer>>&,
      uint64_t, NativeHandle&&, uint64_t)>(
      out, argument0, static_cast<NativeHandle&&>(argument1), argument2);
  }

  virtual Result Command1() {
    return this->template InvokeMethod<false, 1, void()>();
  }

  virtual Result Command2() {
    return this->template InvokeMethod<false, 2, void()>();
  }

  virtual Result Command3(
    uint8_t argument0, const InBuffer& argument1, const InBuffer& argument2,
    uint32_t argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 3, void(
      uint8_t, const InBuffer&, const InBuffer&, uint32_t, uint32_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command4(Out<uint8_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 4, void(Out<uint8_t>, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command5(
    const Out<SharedPointer<nim::detail::IShopServiceAccessServer>>& out,
    uint64_t argument0, NativeHandle&& argument1, uint64_t argument2) {
    return this->template InvokeOutObjectMethod<true, 5, void(
      const Out<SharedPointer<nim::detail::IShopServiceAccessServer>>&,
      uint64_t, NativeHandle&&, uint64_t)>(
      out, argument0, static_cast<NativeHandle&&>(argument1), argument2);
  }
};

template <typename Kind>
class CmifProxyMethods<nim::detail::IShopServiceAsync, Kind>
  : public CmifProxyMethodsBase<nim::detail::IShopServiceAsync, Kind> {
public:
  virtual Result Cancel() {
    return this->template InvokeMethod<false, 0, void()>();
  }

  virtual Result GetSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result GetErrorCode(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command4() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)
};

template <typename Kind>
class CmifProxyMethods<ec::IPurchaseEventManager, Kind>
  : public CmifProxyMethodsBase<ec::IPurchaseEventManager, Kind> {
public:
  virtual Result SetDefaultDeliveryTarget(
    uint64_t argument0, const InArray<uint32_t>& argument1) {
    return this->template InvokeMethod<true, 0, void(
      uint64_t, const InArray<uint32_t>&)>(argument0, argument1);
  }

  virtual Result SetDeliveryTarget(
    uint64_t argument0, const InArray<uint32_t>& argument1) {
    return this->template InvokeMethod<false, 1, void(
      uint64_t, const InArray<uint32_t>&)>(argument0, argument1);
  }

  virtual Result GetPurchasedEventReadableHandle(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result PopPurchasedProductInfo(Out<RawData<128, 8>> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<RawData<128, 8>>)>(
      argument0);
  }

  virtual Result PopPurchasedProductInfoWithUid(
    Out<RawData<128, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 4, void(
      Out<RawData<128, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<ec::detail::IAsyncData, Kind>
  : public CmifProxyMethodsBase<ec::detail::IAsyncData, Kind> {
public:
  virtual Result Command0(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2() {
    return this->template InvokeMethod<false, 2, void()>();
  }
};

}
