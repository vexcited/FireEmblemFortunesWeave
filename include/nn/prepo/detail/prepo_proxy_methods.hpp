#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::prepo::detail::ipc {

class IPrepoService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<prepo::detail::ipc::IPrepoService, Kind>
  : public CmifProxyMethodsBase<prepo::detail::ipc::IPrepoService, Kind> {
public:
  virtual Result Command10100(
    const BufferArray<9, uint8_t>& argument0, const InBuffer& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<true, 10100, void(
      const BufferArray<9, uint8_t>&, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command10101(
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    const InBuffer& argument2, uint64_t argument3) {
    return this->template InvokeMethod<true, 10101, void(
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, const InBuffer&,
      uint64_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command10102(
    const BufferArray<9, uint8_t>& argument0, const InBuffer& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<true, 10102, void(
      const BufferArray<9, uint8_t>&, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command10103(
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    const InBuffer& argument2, uint64_t argument3) {
    return this->template InvokeMethod<true, 10103, void(
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, const InBuffer&,
      uint64_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command10104(
    const BufferArray<9, uint8_t>& argument0, const InBuffer& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<true, 10104, void(
      const BufferArray<9, uint8_t>&, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command10105(
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    const InBuffer& argument2, uint64_t argument3) {
    return this->template InvokeMethod<true, 10105, void(
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, const InBuffer&,
      uint64_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command10106(
    const BufferArray<9, uint8_t>& argument0, const InBuffer& argument1,
    uint64_t argument2, bool argument3) {
    return this->template InvokeMethod<true, 10106, void(
      const BufferArray<9, uint8_t>&, const InBuffer&, uint64_t, bool)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command10107(
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    const InBuffer& argument2, uint64_t argument3, bool argument4) {
    return this->template InvokeMethod<true, 10107, void(
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, const InBuffer&,
      uint64_t, bool)>(argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result RequestImmediateTransmission() {
    return this->template InvokeMethod<false, 10200, void()>();
  }

  virtual Result GetTransmissionStatus(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 10300, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetSystemSessionId(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 10400, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command10500(
    const Out<SharedPointer<prepo::detail::ipc::IAsyncContext>>& out,
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    bool argument2, NativeHandle&& argument3, uint32_t argument4,
    uint32_t argument5, uint64_t argument6) {
    return this->template InvokeOutObjectMethod<true, 10500, void(
      const Out<SharedPointer<prepo::detail::ipc::IAsyncContext>>&,
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, bool,
      NativeHandle&&, uint32_t, uint32_t, uint64_t)>(
      out, argument0, argument1, argument2, static_cast<NativeHandle&&>(
      argument3), argument4, argument5, argument6);
  }

  virtual Result Command10501(
    const Out<SharedPointer<prepo::detail::ipc::IAsyncContext>>& out,
    const BufferArray<9, uint8_t>& argument0, bool argument1,
    NativeHandle&& argument2, uint32_t argument3, uint32_t argument4,
    uint64_t argument5) {
    return this->template InvokeOutObjectMethod<true, 10501, void(
      const Out<SharedPointer<prepo::detail::ipc::IAsyncContext>>&,
      const BufferArray<9, uint8_t>&, bool, NativeHandle&&, uint32_t, uint32_t,
      uint64_t)>(out, argument0, argument1, static_cast<NativeHandle&&>(
      argument2), argument3, argument4, argument5);
  }

  virtual Result Command20100(
    const BufferArray<9, uint8_t>& argument0, uint64_t argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 20100, void(
      const BufferArray<9, uint8_t>&, uint64_t, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command20101(
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    uint64_t argument2, const InBuffer& argument3) {
    return this->template InvokeMethod<false, 20101, void(
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, uint64_t,
      const InBuffer&)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command20102(
    const BufferArray<9, uint8_t>& argument0, uint64_t argument1,
    const InBuffer& argument2, bool argument3) {
    return this->template InvokeMethod<false, 20102, void(
      const BufferArray<9, uint8_t>&, uint64_t, const InBuffer&, bool)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command20103(
    const RawData<16, 8>& argument0, const BufferArray<9, uint8_t>& argument1,
    uint64_t argument2, const InBuffer& argument3, bool argument4) {
    return this->template InvokeMethod<false, 20103, void(
      const RawData<16, 8>&, const BufferArray<9, uint8_t>&, uint64_t,
      const InBuffer&, bool)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result SetOperationMode(uint64_t argument0) {
    return this->template InvokeMethod<false, 20200, void(uint64_t)>(argument0);
  }

  virtual Result ClearStorage() {
    return this->template InvokeMethod<false, 30100, void()>();
  }

  virtual Result ClearStatistics() {
    return this->template InvokeMethod<false, 30200, void()>();
  }

  virtual Result GetStorageUsage(
    Out<uint64_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 30300, void(
      Out<uint64_t>, Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result GetStatistics(Out<LargeData<22, 408, 8>> argument0) {
    return this->template InvokeMethod<false, 30400, void(
      Out<LargeData<22, 408, 8>>)>(argument0);
  }

  virtual Result GetThroughputHistory(
    Out<uint32_t> argument0, const OutArray<uint32_t>& argument1) {
    return this->template InvokeMethod<false, 30401, void(
      Out<uint32_t>, const OutArray<uint32_t>&)>(argument0, argument1);
  }

  virtual Result GetLastUploadError() {
    return this->template InvokeMethod<false, 30500, void()>();
  }

  virtual Result GetApplicationUploadSummary(
    Out<uint64_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 30600, void(
      Out<uint64_t>, Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result IsUserAgreementCheckEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 40100, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetUserAgreementCheckEnabled(bool argument0) {
    return this->template InvokeMethod<false, 40101, void(bool)>(argument0);
  }

  virtual Result ReadAllApplicationReportFiles(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 50100, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result ReadAllReportFiles(
    Out<uint64_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 90100, void(
      Out<uint64_t>, const OutBuffer&)>(argument0, argument1);
  }
};

}
