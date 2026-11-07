#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::irsensor {

class IIrSensorServer;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<irsensor::IIrSensorServer, Kind>
  : public CmifProxyMethodsBase<irsensor::IIrSensorServer, Kind> {
public:
  virtual Result ActivateIrsensor(uint64_t argument0) {
    return this->template InvokeMethod<true, 302, void(uint64_t)>(argument0);
  }

  virtual Result DeactivateIrsensor(uint64_t argument0) {
    return this->template InvokeMethod<true, 303, void(uint64_t)>(argument0);
  }

  virtual Result GetIrsensorSharedMemoryHandle(
    Out<NativeHandle> argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 304, void(
      Out<NativeHandle>, uint64_t)>(argument0, argument1);
  }

  virtual Result StopImageProcessor(uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<true, 305, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result RunClusteringProcessor(
    uint64_t argument0, uint32_t argument1, const RawData<40, 8>& argument2) {
    return this->template InvokeMethod<true, 307, void(
      uint64_t, uint32_t, const RawData<40, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result RunImageTransferProcessor(
    uint64_t argument0, uint32_t argument1, const RawData<24, 8>& argument2,
    NativeHandle&& argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 308, void(
      uint64_t, uint32_t, const RawData<24, 8>&, NativeHandle&&, uint64_t)>(
      argument0, argument1, argument2, static_cast<NativeHandle&&>(argument3),
      argument4);
  }

  virtual Result GetImageTransferProcessorState(
    uint64_t argument0, Out<RawData<16, 8>> argument1,
    const OutBuffer& argument2, uint32_t argument3) {
    return this->template InvokeMethod<true, 309, void(
      uint64_t, Out<RawData<16, 8>>, const OutBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result RunTeraPluginProcessor(
    uint64_t argument0, uint32_t argument1, RawData<8, 4> argument2) {
    return this->template InvokeMethod<true, 310, void(
      uint64_t, uint32_t, RawData<8, 4>)>(argument0, argument1, argument2);
  }

  virtual Result GetNpadIrCameraHandle(
    Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 311, void(
      Out<uint32_t>, uint32_t)>(argument0, argument1);
  }

  virtual Result RunPointingProcessor(
    uint64_t argument0, uint32_t argument1, const RawData<12, 4>& argument2) {
    return this->template InvokeMethod<true, 312, void(
      uint64_t, uint32_t, const RawData<12, 4>&)>(
      argument0, argument1, argument2);
  }

  virtual Result SuspendImageProcessor(uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<true, 313, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result CheckFirmwareVersion(
    uint64_t argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<true, 314, void(
      uint64_t, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result SetFunctionLevel(
    uint64_t argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<true, 315, void(
      uint64_t, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result RunImageTransferExProcessor(
    uint64_t argument0, uint32_t argument1, const RawData<32, 8>& argument2,
    NativeHandle&& argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 316, void(
      uint64_t, uint32_t, const RawData<32, 8>&, NativeHandle&&, uint64_t)>(
      argument0, argument1, argument2, static_cast<NativeHandle&&>(argument3),
      argument4);
  }

  virtual Result RunIrLedProcessor(
    uint64_t argument0, uint32_t argument1, RawData<8, 4> argument2) {
    return this->template InvokeMethod<true, 317, void(
      uint64_t, uint32_t, RawData<8, 4>)>(argument0, argument1, argument2);
  }

  virtual Result StopImageProcessorAsync(
    uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<true, 318, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result ActivateIrsensorWithFunctionLevel(
    uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<true, 319, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }
};

}
