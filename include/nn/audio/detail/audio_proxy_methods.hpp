#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::audio::adspshell {

class IAdspShellSession;

}

namespace nn::audio::detail {

class IAudioInManager;
class IAudioOutManager;
class ISpatialDownmixOutputModeManager;

}

namespace nn::audio::devmgr {

class ISystemSession;
class IUserSession;

}

namespace nn::audio::dpm {

class IClientSession;

}

namespace nn::audio::karaoke {

class IClientSession;

}

namespace nn::audio::sysmix {

class IExternalStreamSession;
class IUserSession;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<audio::devmgr::ISystemSession, Kind>
  : public CmifProxyMethodsBase<audio::devmgr::ISystemSession, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(Out<NativeHandle> argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 1, void(
      Out<NativeHandle>, uint8_t)>(argument0, argument1);
  }

  virtual Result Command2(uint8_t argument0) {
    return this->template InvokeMethod<false, 2, void(uint8_t)>(argument0);
  }

  virtual Result Command3(Out<uint8_t> argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 3, void(Out<uint8_t>, uint8_t)>(
      argument0, argument1);
  }

  virtual Result Command4(
    Out<uint32_t> argument0, const OutBuffer& argument1, uint32_t argument2,
    uint32_t argument3, bool argument4, uint8_t argument5, bool argument6) {
    return this->template InvokeMethod<false, 4, void(
      Out<uint32_t>, const OutBuffer&, uint32_t, uint32_t, bool, uint8_t,
      bool)>(
      argument0, argument1, argument2, argument3, argument4, argument5,
      argument6);
  }

  virtual Result Command5(
    Out<uint32_t> argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 5, void(
      Out<uint32_t>, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command6(const OutBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 6, void(
      const OutBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command7(
    uint32_t argument0, uint32_t argument1, uint32_t argument2,
    float argument3) {
    return this->template InvokeMethod<false, 7, void(
      uint32_t, uint32_t, uint32_t, float)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command8(
    const InBuffer& argument0, uint32_t argument1, uint32_t argument2,
    uint32_t argument3, uint32_t argument4, float argument5) {
    return this->template InvokeMethod<false, 8, void(
      const InBuffer&, uint32_t, uint32_t, uint32_t, uint32_t, float)>(
      argument0, argument1, argument2, argument3, argument4, argument5);
  }

  virtual Result Command9(uint32_t argument0) {
    return this->template InvokeMethod<false, 9, void(uint32_t)>(argument0);
  }

  virtual Result Command10(
    const OutBuffer& argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 10, void(
      const OutBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command11(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 11, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result Command12(
    const InBuffer& argument0, uint32_t argument1, float argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<false, 12, void(
      const InBuffer&, uint32_t, float, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command13(
    Out<uint32_t> argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 13, void(
      Out<uint32_t>, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command14(
    const InBuffer& argument0, uint32_t argument1, float argument2,
    uint64_t argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 14, void(
      const InBuffer&, uint32_t, float, uint64_t, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command15(
    Out<uint32_t> argument0, const InBuffer& argument1, uint32_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 15, void(
      Out<uint32_t>, const InBuffer&, uint32_t, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command16(
    const InBuffer& argument0, float argument1, uint64_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 16, void(
      const InBuffer&, float, uint64_t, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command17(
    Out<uint32_t> argument0, const InBuffer& argument1, uint64_t argument2) {
    return this->template InvokeMethod<true, 17, void(
      Out<uint32_t>, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command18(
    const InBuffer& argument0, uint32_t argument1, bool argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 18, void(
      const InBuffer&, uint32_t, bool, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command19(
    const InBuffer& argument0, uint32_t argument1, const InBuffer& argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 19, void(
      const InBuffer&, uint32_t, const InBuffer&, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command20(
    const OutBuffer& argument0, const InBuffer& argument1, uint32_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 20, void(
      const OutBuffer&, const InBuffer&, uint32_t, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command21(
    const InBuffer& argument0, uint32_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<true, 21, void(
      const InBuffer&, uint32_t, uint64_t)>(argument0, argument1, argument2);
  }

  virtual Result Command22(
    const InBuffer& argument0, uint32_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<true, 22, void(
      const InBuffer&, uint32_t, uint64_t)>(argument0, argument1, argument2);
  }

  virtual Result Command23(
    uint32_t argument0, float argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 23, void(
      uint32_t, float, uint64_t)>(argument0, argument1, argument2);
  }

  virtual Result Command24(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 24, void(
      Out<uint32_t>, uint32_t)>(argument0, argument1);
  }

  virtual Result Command25(
    uint8_t argument0, uint32_t argument1, uint32_t argument2,
    const InBuffer& argument3) {
    return this->template InvokeMethod<false, 25, void(
      uint8_t, uint32_t, uint32_t, const InBuffer&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command26(
    const OutBuffer& argument0, uint8_t argument1, uint32_t argument2,
    uint32_t argument3) {
    return this->template InvokeMethod<false, 26, void(
      const OutBuffer&, uint8_t, uint32_t, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command27(
    uint8_t argument0, uint32_t argument1, const InBuffer& argument2) {
    return this->template InvokeMethod<false, 27, void(
      uint8_t, uint32_t, const InBuffer&)>(argument0, argument1, argument2);
  }

  virtual Result Command28(
    const OutBuffer& argument0, uint8_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 28, void(
      const OutBuffer&, uint8_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command29(
    Out<NativeHandle> argument0, uint8_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 29, void(
      Out<NativeHandle>, uint8_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command30(uint8_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 30, void(uint8_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command31(
    const InBuffer& argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 31, void(
      const InBuffer&, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command32(bool argument0) {
    return this->template InvokeMethod<false, 32, void(bool)>(argument0);
  }

  virtual Result Command33(uint64_t argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 33, void(
      uint64_t, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Command34(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 34, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command35(
    uint64_t argument0, const InBuffer& argument1, const OutBuffer& argument2) {
    return this->template InvokeMethod<false, 35, void(
      uint64_t, const InBuffer&, const OutBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command36(
    Out<uint32_t> argument0, const OutBuffer& argument1,
    const InBuffer& argument2) {
    return this->template InvokeMethod<false, 36, void(
      Out<uint32_t>, const OutBuffer&, const InBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command37(
    bool argument0, const InBuffer& argument1, uint32_t argument2,
    uint64_t argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 37, void(
      bool, const InBuffer&, uint32_t, uint64_t, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command38(
    Out<uint8_t> argument0, const InBuffer& argument1, uint32_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 38, void(
      Out<uint8_t>, const InBuffer&, uint32_t, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command39(
    const InBuffer& argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 39, void(
      const InBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command40(
    const OutBuffer& argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 40, void(
      const OutBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command41(
    Out<uint32_t> argument0, const OutBuffer& argument1,
    const InBuffer& argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 41, void(
      Out<uint32_t>, const OutBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command46(const InBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 46, void(
      const InBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command47(
    const InBuffer& argument0, float argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 47, void(
      const InBuffer&, float, uint64_t)>(argument0, argument1, argument2);
  }

  virtual Result Command48(Out<uint32_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 48, void(
      Out<uint32_t>, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Command49(
    const InBuffer& argument0, uint32_t argument1, const InBuffer& argument2,
    uint64_t argument3, uint64_t argument4) {
    return this->template InvokeMethod<true, 49, void(
      const InBuffer&, uint32_t, const InBuffer&, uint64_t, uint64_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command50(
    const OutBuffer& argument0, const InBuffer& argument1, uint32_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<true, 50, void(
      const OutBuffer&, const InBuffer&, uint32_t, uint64_t)>(
      argument0, argument1, argument2, argument3);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::detail::IAudioInManager, Kind>
  : public CmifProxyMethodsBase<audio::detail::IAudioInManager, Kind> {
public:
  virtual Result Command0(const OutBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 0, void(
      const OutBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command1(
    const Out<SharedPointer<audio::detail::IAudioIn>>& out,
    const InBuffer& argument0, uint64_t argument1, NativeHandle&& argument2,
    Out<RawData<16, 8>> argument3, const OutBuffer& argument4,
    uint64_t argument5) {
    return this->template InvokeOutObjectMethod<true, 1, void(
      const Out<SharedPointer<audio::detail::IAudioIn>>&, const InBuffer&,
      uint64_t, NativeHandle&&, Out<RawData<16, 8>>, const OutBuffer&,
      uint64_t)>(out, argument0, argument1, static_cast<NativeHandle&&>(
      argument2), argument3, argument4, argument5);
  }

  virtual Result Command2(
    const OutAutoSelectBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 2, void(
      const OutAutoSelectBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4(
    const OutAutoSelectBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 4, void(
      const OutAutoSelectBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)
};

template <typename Kind>
class CmifProxyMethods<audio::sysmix::IUserSession, Kind>
  : public CmifProxyMethodsBase<audio::sysmix::IUserSession, Kind> {
public:
  virtual Result Command1(
    const Out<SharedPointer<audio::sysmix::IExternalStreamSession>>& out,
    Out<uint32_t> argument0, uint32_t argument1, const InBuffer& argument2,
    uint32_t argument3, uint64_t argument4, uint64_t argument5,
    uint64_t argument6) {
    return this->template InvokeOutObjectMethod<true, 1, void(
      const Out<SharedPointer<audio::sysmix::IExternalStreamSession>>&,
      Out<uint32_t>, uint32_t, const InBuffer&, uint32_t, uint64_t, uint64_t,
      uint64_t)>(
      out, argument0, argument1, argument2, argument3, argument4, argument5,
      argument6);
  }

  virtual Result Command2(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 2, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command3(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 3, void(const InBuffer&)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::detail::IAudioOutManager, Kind>
  : public CmifProxyMethodsBase<audio::detail::IAudioOutManager, Kind> {
public:
  virtual Result Command0(const OutBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 0, void(
      const OutBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command1(
    const Out<SharedPointer<audio::detail::IAudioOut>>& out,
    const InBuffer& argument0, uint64_t argument1, NativeHandle&& argument2,
    Out<RawData<16, 8>> argument3, const OutBuffer& argument4,
    uint64_t argument5) {
    return this->template InvokeOutObjectMethod<true, 1, void(
      const Out<SharedPointer<audio::detail::IAudioOut>>&, const InBuffer&,
      uint64_t, NativeHandle&&, Out<RawData<16, 8>>, const OutBuffer&,
      uint64_t)>(out, argument0, argument1, static_cast<NativeHandle&&>(
      argument2), argument3, argument4, argument5);
  }

  virtual Result Command2(
    const OutAutoSelectBuffer& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 2, void(
      const OutAutoSelectBuffer&, Out<uint32_t>)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)
};

template <typename Kind>
class CmifProxyMethods<audio::karaoke::IClientSession, Kind>
  : public CmifProxyMethodsBase<audio::karaoke::IClientSession, Kind> {
public:
  virtual Result Command0() {
    return this->template InvokeMethod<false, 0, void()>();
  }

  virtual Result Command100() {
    return this->template InvokeMethod<false, 100, void()>();
  }

  virtual Result Command200(
    Out<uint32_t> argument0, const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 200, void(
      Out<uint32_t>, const OutBuffer&)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command400(const InBuffer& argument0, float argument1) {
    return this->template InvokeMethod<false, 400, void(
      const InBuffer&, float)>(argument0, argument1);
  }

  virtual Result Command500(
    Out<uint32_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 500, void(
      Out<uint32_t>, const InBuffer&)>(argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::detail::ISpatialDownmixOutputModeManager, Kind>
  : public CmifProxyMethodsBase<audio::detail::ISpatialDownmixOutputModeManager,
    Kind> {
public:
  virtual Result Command0(uint32_t argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 0, void(uint32_t, uint64_t)>(
      argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::devmgr::IUserSession, Kind>
  : public CmifProxyMethodsBase<audio::devmgr::IUserSession, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command100(const OutBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 100, void(
      const OutBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command200(const InBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 200, void(
      const InBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command300(
    const InBuffer& argument0, const RawData<12, 4>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 300, void(
      const InBuffer&, const RawData<12, 4>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command401(
    const OutBuffer& argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 401, void(
      const OutBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command500(
    Out<NativeHandle> argument0, uint64_t argument1, const InBuffer& argument2,
    uint32_t argument3) {
    return this->template InvokeMethod<false, 500, void(
      Out<NativeHandle>, uint64_t, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command600(
    uint64_t argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 600, void(
      uint64_t, const InBuffer&, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command700(
    const InBuffer& argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 700, void(
      const InBuffer&, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command800(uint32_t argument0) {
    return this->template InvokeMethod<false, 800, void(uint32_t)>(argument0);
  }

  virtual Result Command900(
    const OutBuffer& argument0, const InBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 900, void(
      const OutBuffer&, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command1000(
    Out<RawData<12, 4>> argument0, const InBuffer& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 1000, void(
      Out<RawData<12, 4>>, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command1500(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1500, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command1550(
    Out<uint32_t> argument0, const OutBuffer& argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 1550, void(
      Out<uint32_t>, const OutBuffer&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command1600(
    const OutBuffer& argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 1600, void(
      const OutBuffer&, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command2000(
    const InBuffer& argument0, const RawData<12, 4>& argument1) {
    return this->template InvokeMethod<false, 2000, void(
      const InBuffer&, const RawData<12, 4>&)>(argument0, argument1);
  }

  virtual Result Command2100(const InBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 2100, void(
      const InBuffer&, uint32_t)>(argument0, argument1);
  }

  virtual Result Command2301(
    const OutBuffer& argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 2301, void(
      const OutBuffer&, const InBuffer&)>(argument0, argument1);
  }

  virtual Result Command3000(const InBuffer& argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 3000, void(
      const InBuffer&, uint32_t)>(argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::sysmix::IExternalStreamSession, Kind>
  : public CmifProxyMethodsBase<audio::sysmix::IExternalStreamSession, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1() {
    return this->template InvokeMethod<false, 1, void()>();
  }

  virtual Result Command2(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command3(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command4(float argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 4, void(float, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command5(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 5, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command6() {
    return this->template InvokeMethod<false, 6, void()>();
  }

  virtual Result Command7(
    Out<NativeHandle> argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 7, void(
      Out<NativeHandle>, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command8() {
    return this->template InvokeMethod<false, 8, void()>();
  }

  virtual Result Command9(uint64_t argument0) {
    return this->template InvokeMethod<false, 9, void(uint64_t)>(argument0);
  }

  virtual Result Command10(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint32_t>, uint32_t)>(argument0, argument1);
  }

  virtual Result Command11(Out<uint32_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 11, void(
      Out<uint32_t>, uint32_t)>(argument0, argument1);
  }

  virtual Result Command12(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 12, void(const InBuffer&)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::adspshell::IAdspShellSession, Kind>
  : public CmifProxyMethodsBase<audio::adspshell::IAdspShellSession, Kind> {
public:
  virtual Result Command0(const RawData<16, 1>& argument0) {
    return this->template InvokeMethod<false, 0, void(const RawData<16, 1>&)>(
      argument0);
  }

  virtual Result Command1(uint16_t argument0) {
    return this->template InvokeMethod<false, 1, void(uint16_t)>(argument0);
  }

  virtual Result Command2(
    const OutBuffer& argument0, uint64_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 2, void(
      const OutBuffer&, uint64_t, uint64_t)>(argument0, argument1, argument2);
  }

  virtual Result Command3(const RawData<24, 8>& argument0) {
    return this->template InvokeMethod<false, 3, void(const RawData<24, 8>&)>(
      argument0);
  }

  virtual Result Command4(uint8_t argument0) {
    return this->template InvokeMethod<false, 4, void(uint8_t)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::dpm::IClientSession, Kind>
  : public CmifProxyMethodsBase<audio::dpm::IClientSession, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(uint32_t argument0) {
    return this->template InvokeMethod<false, 1, void(uint32_t)>(argument0);
  }

  virtual Result Command2(uint32_t argument0) {
    return this->template InvokeMethod<false, 2, void(uint32_t)>(argument0);
  }
};

}
