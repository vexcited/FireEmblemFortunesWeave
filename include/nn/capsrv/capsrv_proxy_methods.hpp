#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::capsrv::sf {

class IAlbumAccessorApplicationSession;
class IAlbumApplicationService;
class IScreenShotApplicationService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<capsrv::sf::IAlbumApplicationService, Kind>
  : public CmifProxyMethodsBase<capsrv::sf::IAlbumApplicationService, Kind> {
public:
  virtual Result Command32(uint64_t argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 32, void(uint64_t, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command102(
    Out<uint64_t> argument0, const OutArray<RawData<48, 8>>& argument1,
    uint8_t argument2, uint64_t argument3, uint64_t argument4,
    uint64_t argument5) {
    return this->template InvokeMethod<true, 102, void(
      Out<uint64_t>, const OutArray<RawData<48, 8>>&, uint8_t, uint64_t,
      uint64_t, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command103(
    const RawData<48, 8>& argument0, uint8_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<true, 103, void(
      const RawData<48, 8>&, uint8_t, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command104(
    Out<uint64_t> argument0, const RawData<48, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<true, 104, void(
      Out<uint64_t>, const RawData<48, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command105(
    const RawData<48, 8>& argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 105, void(
      const RawData<48, 8>&, uint64_t)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result Command130(
    uint8_t argument0, uint64_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<true, 130, void(
      uint8_t, uint64_t, uint64_t)>(argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)
};

template <typename Kind>
class CmifProxyMethods<capsrv::sf::IScreenShotApplicationService, Kind>
  : public CmifProxyMethodsBase<capsrv::sf::IScreenShotApplicationService,
    Kind> {
public:
  virtual Result Command32(uint64_t argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 32, void(uint64_t, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command201(
    Out<RawData<32, 8>> argument0, const BufferArray<69, uint8_t>& argument1,
    uint32_t argument2, uint64_t argument3, uint32_t argument4) {
    return this->template InvokeMethod<true, 201, void(
      Out<RawData<32, 8>>, const BufferArray<69, uint8_t>&, uint32_t, uint64_t,
      uint32_t)>(argument0, argument1, argument2, argument3, argument4);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)
};

template <typename Kind>
class CmifProxyMethods<capsrv::sf::IAlbumAccessorApplicationSession, Kind>
  : public CmifProxyMethodsBase<capsrv::sf::IAlbumAccessorApplicationSession,
    Kind> {
public:
  virtual Result Command2001(
    Out<uint64_t> argument0, const RawData<48, 8>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<true, 2001, void(
      Out<uint64_t>, const RawData<48, 8>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command2002(uint64_t argument0) {
    return this->template InvokeMethod<false, 2002, void(uint64_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command2004(
    Out<uint64_t> argument0, const OutBuffer& argument1, uint64_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<false, 2004, void(
      Out<uint64_t>, const OutBuffer&, uint64_t, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command2005(uint64_t argument0) {
    return this->template InvokeMethod<false, 2005, void(uint64_t)>(argument0);
  }
};

}
