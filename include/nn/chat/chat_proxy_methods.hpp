#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::chat {

class IUserLayoutCustomizationShimScopedObject;
class IUserSelectiveTalkShimScopedObject;
class IUserShimScopedObject;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<chat::IUserSelectiveTalkShimScopedObject, Kind>
  : public CmifProxyMethodsBase<chat::IUserSelectiveTalkShimScopedObject,
    Kind> {
public:
  virtual Result CreateSelectiveTalkSession(
    const BufferArray<9, RawData<16, 8>>& argument0) {
    return this->template InvokeMethod<false, 1, void(
      const BufferArray<9, RawData<16, 8>>&)>(argument0);
  }

  virtual Result EnterSelectiveTalk() {
    return this->template InvokeMethod<false, 2, void()>();
  }

  virtual Result LeaveSelectiveTalk() {
    return this->template InvokeMethod<false, 3, void()>();
  }

  virtual Result DestroySelectiveTalkSession() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result GetSelectiveTalkEntryListChangeEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 6, void(Out<NativeHandle>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<chat::IUserShimScopedObject, Kind>
  : public CmifProxyMethodsBase<chat::IUserShimScopedObject, Kind> {
public:
  virtual Result GetChattingEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetRoomInfoChangedEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetLocalCameraImageProcessingModeChangedEventDeprecated(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetLocalCameraZoomMagnificationChangedEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetRoomInfoChangedEventForTest(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 5, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetChattingStateChangedEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 6, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetLocalCameraImageProcessingModeChangedEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 7, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetCameraImageProcessingModeForVirtualCameraChangedEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 8, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result StartLocalCameraStreaming() {
    return this->template InvokeMethod<false, 10, void()>();
  }

  virtual Result StopLocalCameraStreaming() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command20(Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 20, void(
      Out<uint32_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result Command21(uint32_t argument0) {
    return this->template InvokeMethod<false, 21, void(uint32_t)>(argument0);
  }

  virtual Result Command22(Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 22, void(
      Out<uint32_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result Command23(uint32_t argument0) {
    return this->template InvokeMethod<false, 23, void(uint32_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  virtual Result DestroyAudioStreamWorkBuffer() {
    return this->template InvokeMethod<false, 31, void()>();
  }

  virtual Result GetAudioStreamCapacityFrameCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 32, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result StartAudioStreamRecording(uint64_t argument0) {
    return this->template InvokeMethod<false, 33, void(uint64_t)>(argument0);
  }

  virtual Result StopAudioStreamRecording(uint64_t argument0) {
    return this->template InvokeMethod<false, 34, void(uint64_t)>(argument0);
  }

  virtual Result GetAudioStreamFreeFrameCount(
    Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 35, void(
      Out<uint32_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result GetAudioStreamFilledFrameCount(
    Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 36, void(
      Out<uint32_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result ReadAudioStream(
    Out<uint64_t> argument0, const OutAutoSelectBuffer& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 37, void(
      Out<uint64_t>, const OutAutoSelectBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }
};

template <typename Kind>
class CmifProxyMethods<chat::IUserLayoutCustomizationShimScopedObject, Kind>
  : public CmifProxyMethodsBase<chat::IUserLayoutCustomizationShimScopedObject,
    Kind> {
public:
  virtual Result Command0(uint64_t argument0) {
    return this->template InvokeMethod<true, 0, void(uint64_t)>(argument0);
  }

  virtual Result Command1(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command10() {
    return this->template InvokeMethod<false, 10, void()>();
  }

  virtual Result Command11(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 11, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command12() {
    return this->template InvokeMethod<false, 12, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  virtual Result Command20(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<uint8_t>)>(
      argument0);
  }
};

}
