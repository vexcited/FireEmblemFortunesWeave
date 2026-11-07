#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::nifm::detail {

class INetworkProfile;
class IRequest;
class IScanRequest;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<nifm::detail::INetworkProfile, Kind>
  : public CmifProxyMethodsBase<nifm::detail::INetworkProfile, Kind> {
public:
  virtual Result Command0(
    Out<RawData<16, 8>> argument0, const LargeData<25, 380, 4>& argument1) {
    return this->template InvokeMethod<false, 0, void(
      Out<RawData<16, 8>>, const LargeData<25, 380, 4>&)>(argument0, argument1);
  }

  virtual Result Command1(
    Out<RawData<16, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 1, void(
      Out<RawData<16, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Persist(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result Update(
    Out<RawData<16, 8>> argument0, const LargeData<25, 436, 4>& argument1) {
    return this->template InvokeMethod<false, 100, void(
      Out<RawData<16, 8>>, const LargeData<25, 436, 4>&)>(argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<nifm::detail::IScanRequest, Kind>
  : public CmifProxyMethodsBase<nifm::detail::IScanRequest, Kind> {
public:
  virtual Result Submit() {
    return this->template InvokeMethod<false, 0, void()>();
  }

  virtual Result IsProcessing(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint8_t>)>(argument0);
  }

  virtual Result GetResult() {
    return this->template InvokeMethod<false, 2, void()>();
  }

  virtual Result GetSystemEventReadableHandle(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetChannels(const BufferArray<9, uint16_t>& argument0) {
    return this->template InvokeMethod<false, 4, void(
      const BufferArray<9, uint16_t>&)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<nifm::detail::IRequest, Kind>
  : public CmifProxyMethodsBase<nifm::detail::IRequest, Kind> {
public:
  virtual Result GetRequestState(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetResult() {
    return this->template InvokeMethod<false, 1, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Cancel() {
    return this->template InvokeMethod<false, 3, void()>();
  }

  virtual Result Submit() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  virtual Result SetRequirement(const RawData<36, 4>& argument0) {
    return this->template InvokeMethod<false, 5, void(const RawData<36, 4>&)>(
      argument0);
  }

  virtual Result SetRequirementPreset(uint32_t argument0) {
    return this->template InvokeMethod<false, 6, void(uint32_t)>(argument0);
  }

  virtual Result SetPriority(uint8_t argument0) {
    return this->template InvokeMethod<false, 8, void(uint8_t)>(argument0);
  }

  virtual Result SetNetworkProfileId(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 9, void(const RawData<16, 8>&)>(
      argument0);
  }

  virtual Result SetRejectable(bool argument0) {
    return this->template InvokeMethod<false, 10, void(bool)>(argument0);
  }

  virtual Result SetConnectionConfirmationOption(uint8_t argument0) {
    return this->template InvokeMethod<false, 11, void(uint8_t)>(argument0);
  }

  virtual Result SetPersistent(bool argument0) {
    return this->template InvokeMethod<false, 12, void(bool)>(argument0);
  }

  virtual Result SetInstant(bool argument0) {
    return this->template InvokeMethod<false, 13, void(bool)>(argument0);
  }

  virtual Result SetSustainable(bool argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 14, void(bool, uint8_t)>(
      argument0, argument1);
  }

  virtual Result SetRawPriority(uint8_t argument0) {
    return this->template InvokeMethod<false, 15, void(uint8_t)>(argument0);
  }

  virtual Result SetGreedy(bool argument0) {
    return this->template InvokeMethod<false, 16, void(bool)>(argument0);
  }

  virtual Result SetSharable(bool argument0) {
    return this->template InvokeMethod<false, 17, void(bool)>(argument0);
  }

  virtual Result SetRequirementByRevision(uint32_t argument0) {
    return this->template InvokeMethod<false, 18, void(uint32_t)>(argument0);
  }

  virtual Result GetRequirement(Out<RawData<36, 4>> argument0) {
    return this->template InvokeMethod<false, 19, void(Out<RawData<36, 4>>)>(
      argument0);
  }

  virtual Result GetRevision(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetAppletInfo(
    Out<uint32_t> argument0, Out<uint32_t> argument1, Out<uint32_t> argument2,
    const OutBuffer& argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 21, void(
      Out<uint32_t>, Out<uint32_t>, Out<uint32_t>, const OutBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result GetAdditionalInfo(
    Out<LargeData<22, 1040, 8>> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 22, void(
      Out<LargeData<22, 1040, 8>>, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result SetKeptInSleep(bool argument0) {
    return this->template InvokeMethod<false, 23, void(bool)>(argument0);
  }

  virtual Result RegisterSocketDescriptor(uint32_t argument0) {
    return this->template InvokeMethod<false, 24, void(uint32_t)>(argument0);
  }

  virtual Result UnregisterSocketDescriptor(uint32_t argument0) {
    return this->template InvokeMethod<false, 25, void(uint32_t)>(argument0);
  }

  virtual Result GetNetworkAccessStatus(Out<LargeData<26, 256, 8>> argument0) {
    return this->template InvokeMethod<false, 26, void(
      Out<LargeData<26, 256, 8>>)>(argument0);
  }
};

}
