#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::codec::detail {

class IHardwareOpusDecoder;
class IHardwareOpusDecoderManager;

}

namespace nn::codec::hwacod {

class IClientSession;
class IHardwareAudioCodecManagerSession;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<codec::detail::IHardwareOpusDecoderManager, Kind>
  : public CmifProxyMethodsBase<codec::detail::IHardwareOpusDecoderManager,
    Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(Out<uint32_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command2(
    const Out<SharedPointer<codec::detail::IHardwareOpusDecoder>>& out,
    const LargeData<25, 272, 8>& argument0, NativeHandle&& argument1,
    uint32_t argument2) {
    return this->template InvokeOutObjectMethod<false, 2, void(
      const Out<SharedPointer<codec::detail::IHardwareOpusDecoder>>&,
      const LargeData<25, 272, 8>&, NativeHandle&&, uint32_t)>(
      out, argument0, static_cast<NativeHandle&&>(argument1), argument2);
  }

  virtual Result Command3(
    Out<uint32_t> argument0, const LargeData<25, 272, 8>& argument1) {
    return this->template InvokeMethod<false, 3, void(
      Out<uint32_t>, const LargeData<25, 272, 8>&)>(argument0, argument1);
  }

  virtual Result OpenHardwareOpusDecoderEx(
    const Out<SharedPointer<codec::detail::IHardwareOpusDecoder>>& out,
    const RawData<16, 4>& argument0, NativeHandle&& argument1,
    uint32_t argument2) {
    return this->template InvokeOutObjectMethod<false, 4, void(
      const Out<SharedPointer<codec::detail::IHardwareOpusDecoder>>&,
      const RawData<16, 4>&, NativeHandle&&, uint32_t)>(
      out, argument0, static_cast<NativeHandle&&>(argument1), argument2);
  }

  virtual Result Command5(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result OpenHardwareOpusDecoderForMultiStreamEx(
    const Out<SharedPointer<codec::detail::IHardwareOpusDecoder>>& out,
    const LargeData<25, 280, 8>& argument0, NativeHandle&& argument1,
    uint32_t argument2) {
    return this->template InvokeOutObjectMethod<false, 6, void(
      const Out<SharedPointer<codec::detail::IHardwareOpusDecoder>>&,
      const LargeData<25, 280, 8>&, NativeHandle&&, uint32_t)>(
      out, argument0, static_cast<NativeHandle&&>(argument1), argument2);
  }

  virtual Result Command7(
    Out<uint32_t> argument0, const LargeData<25, 280, 8>& argument1) {
    return this->template InvokeMethod<false, 7, void(
      Out<uint32_t>, const LargeData<25, 280, 8>&)>(argument0, argument1);
  }

  virtual Result GetWorkBufferSizeExEx(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 8, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result GetWorkBufferSizeForMultiStreamExEx(
    Out<uint32_t> argument0, const LargeData<25, 280, 8>& argument1) {
    return this->template InvokeMethod<false, 9, void(
      Out<uint32_t>, const LargeData<25, 280, 8>&)>(argument0, argument1);
  }

  virtual Result GetHardwareAudioCodecService(
    const Out<SharedPointer<codec::hwacod::IClientSession>>& out) {
    return this->template InvokeOutObjectMethod<false, 100, void(
      const Out<SharedPointer<codec::hwacod::IClientSession>>&)>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<codec::hwacod::IClientSession, Kind>
  : public CmifProxyMethodsBase<codec::hwacod::IClientSession, Kind> {
public:
  virtual Result Command0(
    Out<uint32_t> argument0, const LargeData<25, 288, 8>& argument1) {
    return this->template InvokeMethod<false, 0, void(
      Out<uint32_t>, const LargeData<25, 288, 8>&)>(argument0, argument1);
  }

  virtual Result Command1(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>, uint32_t)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command3(
    Out<uint32_t> argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 3, void(
      Out<uint32_t>, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)
};

template <typename Kind>
class CmifProxyMethods<codec::detail::IHardwareOpusDecoder, Kind>
  : public CmifProxyMethodsBase<codec::detail::IHardwareOpusDecoder, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 1, void(const InBuffer&)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command3(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 3, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command4(
    Out<uint32_t> argument0, Out<uint64_t> argument1, Out<uint32_t> argument2,
    const BufferArray<70, uint8_t>& argument3, const InBuffer& argument4) {
    return this->template InvokeMethod<false, 4, void(
      Out<uint32_t>, Out<uint64_t>, Out<uint32_t>,
      const BufferArray<70, uint8_t>&, const InBuffer&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command5(
    Out<uint32_t> argument0, Out<uint64_t> argument1, Out<uint32_t> argument2,
    const BufferArray<70, uint8_t>& argument3, const InBuffer& argument4) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint32_t>, Out<uint64_t>, Out<uint32_t>,
      const BufferArray<70, uint8_t>&, const InBuffer&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command6(
    Out<uint32_t> argument0, Out<uint64_t> argument1, Out<uint32_t> argument2,
    const BufferArray<70, uint8_t>& argument3, const InBuffer& argument4,
    bool argument5) {
    return this->template InvokeMethod<false, 6, void(
      Out<uint32_t>, Out<uint64_t>, Out<uint32_t>,
      const BufferArray<70, uint8_t>&, const InBuffer&, bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command7(
    Out<uint32_t> argument0, Out<uint64_t> argument1, Out<uint32_t> argument2,
    const BufferArray<70, uint8_t>& argument3, const InBuffer& argument4,
    bool argument5) {
    return this->template InvokeMethod<false, 7, void(
      Out<uint32_t>, Out<uint64_t>, Out<uint32_t>,
      const BufferArray<70, uint8_t>&, const InBuffer&, bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result DecodeInterleaved(
    Out<uint32_t> argument0, Out<uint64_t> argument1, Out<uint32_t> argument2,
    const BufferArray<70, uint8_t>& argument3,
    const BufferArray<69, uint8_t>& argument4, bool argument5) {
    return this->template InvokeMethod<false, 8, void(
      Out<uint32_t>, Out<uint64_t>, Out<uint32_t>,
      const BufferArray<70, uint8_t>&, const BufferArray<69, uint8_t>&, bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result DecodeInterleavedForMultiStream(
    Out<uint32_t> argument0, Out<uint64_t> argument1, Out<uint32_t> argument2,
    const BufferArray<70, uint8_t>& argument3,
    const BufferArray<69, uint8_t>& argument4, bool argument5) {
    return this->template InvokeMethod<false, 9, void(
      Out<uint32_t>, Out<uint64_t>, Out<uint32_t>,
      const BufferArray<70, uint8_t>&, const BufferArray<69, uint8_t>&, bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }
};

template <typename Kind>
class CmifProxyMethods<
  codec::hwacod::IHardwareAudioCodecManagerSession, Kind>
  : public CmifProxyMethodsBase<
      codec::hwacod::IHardwareAudioCodecManagerSession, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(uint32_t argument0) {
    return this->template InvokeMethod<false, 1, void(uint32_t)>(argument0);
  }

  virtual Result Command10(const BufferArray<33, RawData<16, 8>>& argument0) {
    return this->template InvokeMethod<false, 10, void(
      const BufferArray<33, RawData<16, 8>>&)>(argument0);
  }
};

}
