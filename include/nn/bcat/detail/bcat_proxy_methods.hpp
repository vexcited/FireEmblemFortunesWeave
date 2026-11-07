#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::bcat::ipc {

class IDeliveryCacheDirectoryService;
class IDeliveryCacheFileService;
class IDeliveryCacheProgressService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<bcat::ipc::IDeliveryCacheDirectoryService, Kind>
  : public CmifProxyMethodsBase<bcat::ipc::IDeliveryCacheDirectoryService,
    Kind> {
public:
  virtual Result Open(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 0, void(const RawData<32, 8>&)>(
      argument0);
  }

  virtual Result Read(
    Out<uint32_t> argument0, const OutArray<RawData<56, 8>>& argument1) {
    return this->template InvokeMethod<false, 1, void(
      Out<uint32_t>, const OutArray<RawData<56, 8>>&)>(argument0, argument1);
  }

  virtual Result GetCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint32_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<bcat::ipc::IDeliveryCacheProgressService, Kind>
  : public CmifProxyMethodsBase<bcat::ipc::IDeliveryCacheProgressService,
    Kind> {
public:
  virtual Result GetEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetImpl(Out<LargeData<26, 512, 8>> argument0) {
    return this->template InvokeMethod<false, 1, void(
      Out<LargeData<26, 512, 8>>)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<bcat::ipc::IDeliveryCacheFileService, Kind>
  : public CmifProxyMethodsBase<bcat::ipc::IDeliveryCacheFileService, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Read(
    Out<uint64_t> argument0, uint64_t argument1, const OutBuffer& argument2) {
    return this->template InvokeMethod<false, 1, void(
      Out<uint64_t>, uint64_t, const OutBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result GetSize(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetDigest(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<RawData<16, 8>>)>(
      argument0);
  }
};

}
