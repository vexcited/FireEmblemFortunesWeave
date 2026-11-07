#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::grcsrv {

class IGameMovieTrimmer;
class IMovieMaker;
class IMovieWriter;

}

namespace nns::hosbinder {

class IHOSBinderDriver;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<::nns::hosbinder::IHOSBinderDriver, Kind>
  : public CmifProxyMethodsBase<::nns::hosbinder::IHOSBinderDriver, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(
    uint32_t argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 1, void(
      uint32_t, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command2(
    uint32_t argument0, uint32_t argument1, Out<NativeHandle> argument2) {
    return this->template InvokeMethod<false, 2, void(
      uint32_t, uint32_t, Out<NativeHandle>)>(argument0, argument1, argument2);
  }

  virtual Result Command3(
    uint32_t argument0, uint32_t argument1, const InAutoSelectBuffer& argument2,
    const OutAutoSelectBuffer& argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 3, void(
      uint32_t, uint32_t, const InAutoSelectBuffer&, const OutAutoSelectBuffer&,
      uint32_t)>(argument0, argument1, argument2, argument3, argument4);
  }
};

template <typename Kind>
class CmifProxyMethods<grcsrv::IMovieWriter, Kind>
  : public CmifProxyMethodsBase<grcsrv::IMovieWriter, Kind> {
public:
  virtual Result SetShimLibraryVersion(uint64_t argument0) {
    return this->template InvokeMethod<false, 0, void(uint64_t)>(argument0);
  }

  virtual Result Abort() {
    return this->template InvokeMethod<false, 10, void()>();
  }

  virtual Result GetError() {
    return this->template InvokeMethod<false, 20, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result WriteMp4Data(uint64_t argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 110, void(
      uint64_t, const InBuffer&)>(argument0, argument1);
  }

  virtual Result RequestFinishReady() {
    return this->template InvokeMethod<false, 120, void()>();
  }

  virtual Result CompleteFinish(
    Out<RawData<32, 8>> argument0, const InBuffer& argument1,
    const InBuffer& argument2, uint32_t argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 130, void(
      Out<RawData<32, 8>>, const InBuffer&, const InBuffer&, uint32_t,
      uint32_t)>(argument0, argument1, argument2, argument3, argument4);
  }
};

template <typename Kind>
class CmifProxyMethods<grcsrv::IMovieMaker, Kind>
  : public CmifProxyMethodsBase<grcsrv::IMovieMaker, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result SetShimLibraryVersion(uint64_t argument0) {
    return this->template InvokeMethod<false, 9, void(uint64_t)>(argument0);
  }

  virtual Result Command10(Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint32_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result Command11(uint64_t argument0) {
    return this->template InvokeMethod<false, 11, void(uint64_t)>(argument0);
  }

  virtual Result Command20(uint64_t argument0) {
    return this->template InvokeMethod<false, 20, void(uint64_t)>(argument0);
  }

  virtual Result AbortOffscreenRecording(uint64_t argument0) {
    return this->template InvokeMethod<false, 21, void(uint64_t)>(argument0);
  }

  virtual Result RequestOffscreenRecordingFinishReady(uint64_t argument0) {
    return this->template InvokeMethod<false, 22, void(uint64_t)>(argument0);
  }

  virtual Result Command23(uint64_t argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 23, void(
      uint64_t, const InBuffer&)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)

  virtual Result Command25(
    uint64_t argument0, const InBuffer& argument1, const InBuffer& argument2,
    uint32_t argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 25, void(
      uint64_t, const InBuffer&, const InBuffer&, uint32_t, uint32_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  virtual Result GetOffscreenLayerError(uint64_t argument0) {
    return this->template InvokeMethod<false, 30, void(uint64_t)>(argument0);
  }

  virtual Result EncodeOffscreenLayerAudioSample(
    Out<uint64_t> argument0, uint64_t argument1, const InBuffer& argument2) {
    return this->template InvokeMethod<false, 41, void(
      Out<uint64_t>, uint64_t, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)
};

template <typename Kind>
class CmifProxyMethods<grcsrv::IGameMovieTrimmer, Kind>
  : public CmifProxyMethodsBase<grcsrv::IGameMovieTrimmer, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command2(Out<RawData<64, 8>> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<RawData<64, 8>>)>(
      argument0);
  }

  virtual Result Command10(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 10, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command20(
    const BufferArray<69, uint8_t>& argument0, uint32_t argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 20, void(
      const BufferArray<69, uint8_t>&, uint32_t, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command21(
    const BufferArray<69, uint8_t>& argument0, uint32_t argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 21, void(
      const BufferArray<69, uint8_t>&, uint32_t, uint32_t)>(
      argument0, argument1, argument2);
  }
};

}
