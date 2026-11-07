#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::ssl::sf {

class ISslConnection;
class ISslContext;
class ISslContextForSystem;
class ISslService;
class ISslServiceForSystem;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<ssl::sf::ISslServiceForSystem, Kind>
  : public CmifProxyMethodsBase<ssl::sf::ISslServiceForSystem, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command2(
    const OutBuffer& argument0, Out<uint32_t> argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 2, void(
      const OutBuffer&, Out<uint32_t>, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command3(Out<uint32_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 3, void(
      Out<uint32_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Command4(
    const OutBuffer& argument0, const InBuffer& argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 4, void(
      const OutBuffer&, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command5(uint32_t argument0) {
    return this->template InvokeMethod<false, 5, void(uint32_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result Command7(const InBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 7, void(
      const InBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command8(const OutBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 8, void(
      const OutBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command9() {
    return this->template InvokeMethod<false, 9, void()>();
  }

  virtual Result Command10(
    const OutBuffer& argument0, const OutBuffer& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 10, void(
      const OutBuffer&, const OutBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command11(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 11, void(Out<uint32_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)

  virtual Result Command101(uint64_t argument0) {
    return this->template InvokeMethod<false, 101, void(uint64_t)>(argument0);
  }

  virtual Result Command102(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 102, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command103(
    uint32_t argument0, const InBuffer& argument1, const InBuffer& argument2,
    const InBuffer& argument3) {
    return this->template InvokeMethod<false, 103, void(
      uint32_t, const InBuffer&, const InBuffer&, const InBuffer&)>(
      argument0, argument1, argument2, argument3);
  }
};

template <typename Kind>
class CmifProxyMethods<ssl::sf::ISslContextForSystem, Kind>
  : public CmifProxyMethodsBase<ssl::sf::ISslContextForSystem, Kind> {
public:
  virtual Result Command0(uint32_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 0, void(uint32_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command1(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>, uint32_t)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command3(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command4(
    Out<uint64_t> argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 4, void(
      Out<uint64_t>, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command5(
    Out<uint64_t> argument0, const InBuffer& argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint64_t>, const InBuffer&, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command6(uint64_t argument0) {
    return this->template InvokeMethod<false, 6, void(uint64_t)>(argument0);
  }

  virtual Result Command7(uint64_t argument0) {
    return this->template InvokeMethod<false, 7, void(uint64_t)>(argument0);
  }

  virtual Result Command8(Out<uint64_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 8, void(Out<uint64_t>, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command9(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 9, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command10(Out<uint64_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint64_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Command11(uint64_t argument0) {
    return this->template InvokeMethod<false, 11, void(uint64_t)>(argument0);
  }

  virtual Result Command12(
    Out<uint64_t> argument0, const InBuffer& argument1,
    const InBuffer& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 12, void(
      Out<uint64_t>, const InBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)
};

template <typename Kind>
class CmifProxyMethods<ssl::sf::ISslContext, Kind>
  : public CmifProxyMethodsBase<ssl::sf::ISslContext, Kind> {
public:
  virtual Result Command0(uint32_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 0, void(uint32_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command1(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>, uint32_t)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command3(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command4(
    Out<uint64_t> argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 4, void(
      Out<uint64_t>, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command5(
    Out<uint64_t> argument0, const InBuffer& argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint64_t>, const InBuffer&, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command6(uint64_t argument0) {
    return this->template InvokeMethod<false, 6, void(uint64_t)>(argument0);
  }

  virtual Result Command7(uint64_t argument0) {
    return this->template InvokeMethod<false, 7, void(uint64_t)>(argument0);
  }

  virtual Result Command8(Out<uint64_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 8, void(Out<uint64_t>, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command9(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 9, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command10(Out<uint64_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint64_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Command11(uint64_t argument0) {
    return this->template InvokeMethod<false, 11, void(uint64_t)>(argument0);
  }

  virtual Result Command12(
    Out<uint64_t> argument0, const InBuffer& argument1,
    const InBuffer& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 12, void(
      Out<uint64_t>, const InBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)
};

template <typename Kind>
class CmifProxyMethods<ssl::sf::ISslService, Kind>
  : public CmifProxyMethodsBase<ssl::sf::ISslService, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result GetContextCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetCertificates(
    const OutBuffer& argument0, Out<uint32_t> argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 2, void(
      const OutBuffer&, Out<uint32_t>, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result GetCertificateBufSize(
    Out<uint32_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 3, void(
      Out<uint32_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result DebugIoctl(
    const OutBuffer& argument0, const InBuffer& argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 4, void(
      const OutBuffer&, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result SetInterfaceVersion(uint32_t argument0) {
    return this->template InvokeMethod<false, 5, void(uint32_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result SetDebugOption(const InBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 7, void(
      const InBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result GetDebugOption(
    const OutBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 8, void(
      const OutBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result ClearTls12FallbackFlag() {
    return this->template InvokeMethod<false, 9, void()>();
  }

  virtual Result GetCertificate(
    const OutBuffer& argument0, const OutBuffer& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 10, void(
      const OutBuffer&, const OutBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result GetCertificateCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 11, void(Out<uint32_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<ssl::sf::ISslConnection, Kind>
  : public CmifProxyMethodsBase<ssl::sf::ISslConnection, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result SetHostName(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 1, void(const InBuffer&)>(
      argument0);
  }

  virtual Result SetVerifyOption(uint32_t argument0) {
    return this->template InvokeMethod<false, 2, void(uint32_t)>(argument0);
  }

  virtual Result SetIoMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 3, void(uint32_t)>(argument0);
  }

  virtual Result GetSocketDescriptor(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetHostName(
    const OutBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 5, void(
      const OutBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result GetVerifyOption(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 6, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetIoMode(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 7, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result DoHandshake() {
    return this->template InvokeMethod<false, 8, void()>();
  }

  virtual Result DoHandshakeGetServerCert(
    Out<uint32_t> argument0, Out<uint32_t> argument1,
    const OutBuffer& argument2) {
    return this->template InvokeMethod<false, 9, void(
      Out<uint32_t>, Out<uint32_t>, const OutBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Read(Out<uint32_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint32_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Write(Out<uint32_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 11, void(
      Out<uint32_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Pending(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 12, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Peek(Out<uint32_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 13, void(
      Out<uint32_t>, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Poll(
    Out<uint32_t> argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 14, void(
      Out<uint32_t>, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result GetVerifyCertError() {
    return this->template InvokeMethod<false, 15, void()>();
  }

  virtual Result GetNeededServerCertBufferSize(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 16, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetSessionCacheMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 17, void(uint32_t)>(argument0);
  }

  virtual Result GetSessionCacheMode(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 18, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result FlushSessionCache() {
    return this->template InvokeMethod<false, 19, void()>();
  }

  virtual Result SetRenegotiationMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 20, void(uint32_t)>(argument0);
  }

  virtual Result GetRenegotiationMode(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 21, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetOption(uint32_t argument0, bool argument1) {
    return this->template InvokeMethod<false, 22, void(uint32_t, bool)>(
      argument0, argument1);
  }

  virtual Result GetOption(Out<uint8_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 23, void(Out<uint8_t>, uint32_t)>(
      argument0, argument1);
  }

  virtual Result GetVerifyCertErrors(
    const OutBuffer& argument0, Out<uint32_t> argument1,
    Out<uint32_t> argument2) {
    return this->template InvokeMethod<false, 24, void(
      const OutBuffer&, Out<uint32_t>, Out<uint32_t>)>(
      argument0, argument1, argument2);
  }

  virtual Result GetCipherInfo(uint32_t argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 25, void(
      uint32_t, const OutBuffer&)>(argument0, argument1);
  }

  virtual Result SetNextAlpnProto(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 26, void(const InBuffer&)>(
      argument0);
  }

  virtual Result GetNextAlpnProto(
    Out<uint32_t> argument0, const OutBuffer& argument1,
    Out<uint32_t> argument2) {
    return this->template InvokeMethod<false, 27, void(
      Out<uint32_t>, const OutBuffer&, Out<uint32_t>)>(
      argument0, argument1, argument2);
  }

  virtual Result SetDtlsSocketDescriptor(
    uint32_t argument0, Out<uint32_t> argument1, const InBuffer& argument2) {
    return this->template InvokeMethod<false, 28, void(
      uint32_t, Out<uint32_t>, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result GetDtlsHandshakeTimeout(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 29, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result SetPrivateOption(uint32_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 30, void(uint32_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result SetSrtpCiphers(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 31, void(const InBuffer&)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(32)

  virtual Result ExportKeyingMaterial(
    const OutBuffer& argument0, const InBuffer& argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 33, void(
      const OutBuffer&, const InBuffer&, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result SetIoTimeout(uint32_t argument0) {
    return this->template InvokeMethod<false, 34, void(uint32_t)>(argument0);
  }

  virtual Result GetIoTimeout(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 35, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetSessionTicket(
    const OutBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 36, void(
      const OutBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result SetSessionTicket(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 37, void(const InBuffer&)>(
      argument0);
  }
};

}
