#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::mii::detail {

class IDatabaseService;
class IImageDatabaseService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<mii::detail::IDatabaseService, Kind>
  : public CmifProxyMethodsBase<mii::detail::IDatabaseService, Kind> {
public:
  virtual Result Command0(Out<uint8_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 0, void(Out<uint8_t>, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command1(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint8_t>)>(argument0);
  }

  virtual Result Command2(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 2, void(Out<uint32_t>, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command3(
    Out<uint32_t> argument0, const OutArray<RawData<92, 4>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 3, void(
      Out<uint32_t>, const OutArray<RawData<92, 4>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command4(
    Out<uint32_t> argument0, const OutArray<RawData<88, 8>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 4, void(
      Out<uint32_t>, const OutArray<RawData<88, 8>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command5(
    Out<RawData<88, 4>> argument0, const RawData<88, 4>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 5, void(
      Out<RawData<88, 4>>, const RawData<88, 4>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command6(
    Out<RawData<88, 8>> argument0, uint32_t argument1, uint32_t argument2,
    uint32_t argument3) {
    return this->template InvokeMethod<false, 6, void(
      Out<RawData<88, 8>>, uint32_t, uint32_t, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command7(Out<RawData<88, 8>> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 7, void(
      Out<RawData<88, 8>>, uint32_t)>(argument0, argument1);
  }

  virtual Result Command8(
    Out<uint32_t> argument0, const OutArray<RawData<72, 8>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 8, void(
      Out<uint32_t>, const OutArray<RawData<72, 8>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command9(
    Out<uint32_t> argument0, const OutArray<RawData<68, 4>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 9, void(
      Out<uint32_t>, const OutArray<RawData<68, 4>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command10(
    Out<RawData<68, 4>> argument0, const RawData<68, 4>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 10, void(
      Out<RawData<68, 4>>, const RawData<68, 4>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command11(
    Out<RawData<4, 1>> argument0, const RawData<16, 1>& argument1,
    bool argument2) {
    return this->template InvokeMethod<false, 11, void(
      Out<RawData<4, 1>>, const RawData<16, 1>&, bool)>(
      argument0, argument1, argument2);
  }

  virtual Result Command12(
    uint32_t argument0, const RawData<16, 1>& argument1) {
    return this->template InvokeMethod<false, 12, void(
      uint32_t, const RawData<16, 1>&)>(argument0, argument1);
  }

  virtual Result Command13(const RawData<68, 4>& argument0) {
    return this->template InvokeMethod<false, 13, void(const RawData<68, 4>&)>(
      argument0);
  }

  virtual Result Command14(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 14, void(const RawData<16, 8>&)>(
      argument0);
  }

  virtual Result Command15() {
    return this->template InvokeMethod<false, 15, void()>();
  }

  virtual Result Command16() {
    return this->template InvokeMethod<false, 16, void()>();
  }

  virtual Result Command17() {
    return this->template InvokeMethod<false, 17, void()>();
  }

  virtual Result Command18(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 18, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command19(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 19, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result Command20(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command21(
    Out<uint32_t> argument0, const RawData<88, 8>& argument1) {
    return this->template InvokeMethod<false, 21, void(
      Out<uint32_t>, const RawData<88, 8>&)>(argument0, argument1);
  }

  virtual Result Command22(uint32_t argument0) {
    return this->template InvokeMethod<false, 22, void(uint32_t)>(argument0);
  }

  virtual Result Command23(
    Out<RawData<88, 8>> argument0, const RawData<96, 8>& argument1) {
    return this->template InvokeMethod<false, 23, void(
      Out<RawData<88, 8>>, const RawData<96, 8>&)>(argument0, argument1);
  }

  virtual Result Command24(
    Out<RawData<88, 8>> argument0, const RawData<48, 8>& argument1) {
    return this->template InvokeMethod<false, 24, void(
      Out<RawData<88, 8>>, const RawData<48, 8>&)>(argument0, argument1);
  }

  virtual Result Command25(
    Out<RawData<48, 8>> argument0, const RawData<88, 8>& argument1) {
    return this->template InvokeMethod<false, 25, void(
      Out<RawData<48, 8>>, const RawData<88, 8>&)>(argument0, argument1);
  }

  virtual Result Command26(const RawData<88, 8>& argument0) {
    return this->template InvokeMethod<false, 26, void(const RawData<88, 8>&)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<mii::detail::IImageDatabaseService, Kind>
  : public CmifProxyMethodsBase<mii::detail::IImageDatabaseService, Kind> {
public:
  virtual Result Command0(Out<uint8_t> argument0, bool argument1) {
    return this->template InvokeMethod<false, 0, void(Out<uint8_t>, bool)>(
      argument0, argument1);
  }

  virtual Result Command10() {
    return this->template InvokeMethod<false, 10, void()>();
  }

  virtual Result Command11(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 11, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command12(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 12, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command13(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 13, void(Out<uint8_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  virtual Result Command15(
    const OutBuffer& argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 15, void(
      const OutBuffer&, const RawData<16, 8>&)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command17(const InArray<RawData<16, 8>>& argument0) {
    return this->template InvokeMethod<false, 17, void(
      const InArray<RawData<16, 8>>&)>(argument0);
  }

  virtual Result Command18(
    uint8_t argument0, uint8_t argument1, uint8_t argument2,
    const RawData<22, 2>& argument3, const RawData<16, 1>& argument4,
    const InBuffer& argument5, const RawData<16, 1>& argument6) {
    return this->template InvokeMethod<false, 18, void(
      uint8_t, uint8_t, uint8_t, const RawData<22, 2>&, const RawData<16, 1>&,
      const InBuffer&, const RawData<16, 1>&)>(
      argument0, argument1, argument2, argument3, argument4, argument5,
      argument6);
  }

  virtual Result Command19() {
    return this->template InvokeMethod<false, 19, void()>();
  }

  virtual Result Command20() {
    return this->template InvokeMethod<false, 20, void()>();
  }

  virtual Result Command100() {
    return this->template InvokeMethod<false, 100, void()>();
  }

  virtual Result Command101() {
    return this->template InvokeMethod<false, 101, void()>();
  }

  virtual Result Command102(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 102, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command103(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 103, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Command104(Out<uint8_t> argument0, bool argument1) {
    return this->template InvokeMethod<false, 104, void(Out<uint8_t>, bool)>(
      argument0, argument1);
  }
};

}
