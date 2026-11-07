#pragma once

#include <utility>

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<am::service::IAppletAccessor, Kind>
  : public CmifProxyMethodsBase<am::service::IAppletAccessor, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result RequestExit() {
    return this->template InvokeMethod<false, 20, void()>();
  }

  virtual Result Command25() {
    return this->template InvokeMethod<false, 25, void()>();
  }

  virtual Result Command30() {
    return this->template InvokeMethod<false, 30, void()>();
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IAppletAlternativeFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IAppletAlternativeFunctions,
    Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command1(Out<uint32_t> argument0, uint8_t argument1,
    uint32_t argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>, uint8_t,
      uint32_t, uint32_t)>(argument0, argument1, argument2, argument3);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)
};

template <typename Kind>
class CmifProxyMethods<am::service::IAppletCommonFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IAppletCommonFunctions, Kind> {
public:
  virtual Result Command0(uint32_t argument0) {
    return this->template InvokeMethod<false, 0, void(uint32_t)>(argument0);
  }

  virtual Result Command10(Out<uint64_t> argument0, uint64_t argument1,
    const OutAutoSelectBuffer& argument2) {
    return this->template InvokeMethod<false, 10, void(Out<uint64_t>, uint64_t,
      const OutAutoSelectBuffer&)>(argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command20(SharedPointer<CmifProxyObject> argument0) {
    SharedPointer<CmifProxyObject> object(argument0.Detach(), false);
    return this->template InvokeMethod<false, 20,
      void(CmifProxyObject*)>(object.Get());
  }

  virtual Result PopFromAppletBoundChannel(
    const Out<SharedPointer<nn::am::service::IStorage>>& out) {
    return this->template ProcessWithSharedOutObject<false, 21>(out);
  }

  virtual Result Command40(Out<uint32_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 40, void(Out<uint32_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command42(float argument0, float argument1, float argument2,
    float argument3) {
    return this->template InvokeMethod<false, 42, void(float, float, float,
      float)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command50(bool argument0) {
    return this->template InvokeMethod<false, 50, void(bool)>(argument0);
  }

  virtual Result Command51(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 51, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command52(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 52, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command60(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 60, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command61(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 61, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command62(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 62, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command70(uint32_t argument0) {
    return this->template InvokeMethod<false, 70, void(uint32_t)>(argument0);
  }

  virtual Result Command80(bool argument0) {
    return this->template InvokeMethod<false, 80, void(bool)>(argument0);
  }

  virtual Result Command81(bool argument0) {
    return this->template InvokeMethod<false, 81, void(bool)>(argument0);
  }

  virtual Result Command82(bool argument0) {
    return this->template InvokeMethod<false, 82, void(bool)>(argument0);
  }

  virtual Result Command90(
    const Out<SharedPointer<am::service::IStorageChannel>>& out,
    const RawData<16, 4>& argument0) {
    return this->template ProcessWithSharedOutObject<false, 90>(out, argument0);
  }

  virtual Result Command91(
    const Out<SharedPointer<am::service::IStorageChannel>>& out,
    const RawData<16, 4>& argument0) {
    return this->template ProcessWithSharedOutObject<false, 91>(out, argument0);
  }

  virtual Result Command100(uint32_t argument0) {
    return this->template InvokeMethod<false, 100, void(uint32_t)>(argument0);
  }

  virtual Result Command110() {
    return this->template InvokeMethod<false, 110, void()>();
  }

  virtual Result Command111() {
    return this->template InvokeMethod<false, 111, void()>();
  }

  virtual Result Command112(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 112, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command113() {
    return this->template InvokeMethod<false, 113, void()>();
  }

  virtual Result Command114() {
    return this->template InvokeMethod<false, 114, void()>();
  }

  virtual Result Command115(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 115, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command116() {
    return this->template InvokeMethod<false, 116, void()>();
  }

  virtual Result Command117() {
    return this->template InvokeMethod<false, 117, void()>();
  }

  virtual Result Command118(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 118, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command119(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 119, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command120(bool argument0) {
    return this->template InvokeMethod<false, 120, void(bool)>(argument0);
  }

  virtual Result Command121(bool argument0) {
    return this->template InvokeMethod<false, 121, void(bool)>(argument0);
  }

  virtual Result Command122(bool argument0) {
    return this->template InvokeMethod<false, 122, void(bool)>(argument0);
  }

  virtual Result Command123(bool argument0) {
    return this->template InvokeMethod<false, 123, void(bool)>(argument0);
  }

  virtual Result Command124(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 124, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command130(const RawData<12, 4>& argument0) {
    return this->template InvokeMethod<false, 130, void(const RawData<12, 4>&)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(36)

  virtual Result Command135(Out<RawData<12, 4>> argument0) {
    return this->template InvokeMethod<false, 135, void(Out<RawData<12, 4>>)>(
      argument0);
  }

  virtual Result Command140(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 140, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command150(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 150,
      void(Out<uint8_t>)>(argument0);
  }

  virtual Result GetNotificationReceiverService(
    const Out<SharedPointer<nn::am::service::IReceiverService>>& out) {
    return this->template ProcessWithSharedOutObject<false, 160>(out);
  }

  virtual Result GetNotificationSenderService(
    const Out<SharedPointer<nn::am::service::ISenderService>>& out) {
    return this->template ProcessWithSharedOutObject<false, 161>(out);
  }

  virtual Result Command170(bool argument0) {
    return this->template InvokeMethod<false, 170, void(bool)>(argument0);
  }

  virtual Result Command171(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 171, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command200(const InBuffer& argument0) {
    return this->template InvokeMethod<false, 200, void(const InBuffer&)>(
      argument0);
  }

  virtual Result Command210() {
    return this->template InvokeMethod<false, 210, void()>();
  }

  virtual Result Command211() {
    return this->template InvokeMethod<false, 211, void()>();
  }

  virtual Result Command220() {
    return this->template InvokeMethod<false, 220, void()>();
  }

  virtual Result Command221() {
    return this->template InvokeMethod<false, 221, void()>();
  }

  virtual Result Command230() {
    return this->template InvokeMethod<false, 230, void()>();
  }

  virtual Result Command231() {
    return this->template InvokeMethod<false, 231, void()>();
  }

  virtual Result Command250() {
    return this->template InvokeMethod<false, 250, void()>();
  }

  virtual Result Command251() {
    return this->template InvokeMethod<false, 251, void()>();
  }

  virtual Result Command252(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 252, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command253(uint32_t argument0, uint32_t argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 253, void(uint32_t, uint32_t,
      uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command260(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 260, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command271(uint16_t argument0, uint16_t argument1) {
    return this->template InvokeMethod<false, 271, void(uint16_t, uint16_t)>(
      argument0, argument1);
  }

  virtual Result Command272(uint16_t argument0, uint16_t argument1) {
    return this->template InvokeMethod<false, 272, void(uint16_t, uint16_t)>(
      argument0, argument1);
  }

  virtual Result Command273(uint32_t argument0) {
    return this->template InvokeMethod<false, 273, void(uint32_t)>(argument0);
  }

  virtual Result Command280(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 280, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result RequestChatProhibition(bool argument0) {
    return this->template InvokeMethod<false, 290, void(bool)>(argument0);
  }

  virtual Result RequestChatExpirationCheckSkip(bool argument0) {
    return this->template InvokeMethod<false, 291, void(bool)>(argument0);
  }

  virtual Result Command300(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 300, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command310(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 310, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command311(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 311, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command320(uint64_t argument0) {
    return this->template InvokeMethod<false, 320, void(uint64_t)>(argument0);
  }

  virtual Result Command321(uint64_t argument0) {
    return this->template InvokeMethod<false, 321, void(uint64_t)>(argument0);
  }

  virtual Result Command322(uint64_t argument0) {
    return this->template InvokeMethod<false, 322, void(uint64_t)>(argument0);
  }

  virtual Result Command330(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 330, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command340() {
    return this->template InvokeMethod<false, 340, void()>();
  }

  virtual Result Command341() {
    return this->template InvokeMethod<false, 341, void()>();
  }

  virtual Result Command342(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 342, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command350(Out<uint8_t> argument0, Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 350, void(Out<uint8_t>,
      Out<uint8_t>)>(argument0, argument1);
  }

  virtual Result Command360() {
    return this->template InvokeMethod<false, 360, void()>();
  }

  virtual Result GetGpuErrorDetectedSystemEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 370, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command2000() {
    return this->template InvokeMethod<false, 2000, void()>();
  }

  virtual Result Command2010(uint64_t argument0) {
    return this->template InvokeMethod<false, 2010, void(uint64_t)>(argument0);
  }

  virtual Result Command2100(bool argument0) {
    return this->template InvokeMethod<false, 2100, void(bool)>(argument0);
  }

  virtual Result Command2110(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2110, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command2120(bool argument0) {
    return this->template InvokeMethod<false, 2120, void(bool)>(argument0);
  }

  virtual Result Command2130(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2130, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command2140(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2140, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command3000(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 3000, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command3010(bool argument0) {
    return this->template InvokeMethod<false, 3010, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IApplicationAccessor, Kind>
  : public CmifProxyMethodsBase<am::service::IApplicationAccessor, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command20() {
    return this->template InvokeMethod<false, 20, void()>();
  }

  virtual Result Command25() {
    return this->template InvokeMethod<false, 25, void()>();
  }

  virtual Result Command30() {
    return this->template InvokeMethod<false, 30, void()>();
  }

  virtual Result Command101() {
    return this->template InvokeMethod<false, 101, void()>();
  }

  virtual Result Command110() {
    return this->template InvokeMethod<false, 110, void()>();
  }

  virtual Result Command111(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 111, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command112(
    const Out<SharedPointer<am::service::IAppletAccessor>>& out) {
    return this->template ProcessWithOutObject<false, 112>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)

  virtual Result Command122(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 122, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result Command123(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 123, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result Command124(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 124, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result Command130(bool argument0, const InArray<RawData<16,
    8>>& argument1) {
    return this->template InvokeMethod<false, 130, void(bool,
      const InArray<RawData<16, 8>>&)>(argument0, argument1);
  }

  virtual Result Command131(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 131, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command132(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 132, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command140(Out<uint32_t> argument0, const OutArray<RawData<16,
    8>>& argument1) {
    return this->template InvokeMethod<false, 140, void(Out<uint32_t>,
      const OutArray<RawData<16, 8>>&)>(argument0, argument1);
  }

  virtual Result Command150() {
    return this->template InvokeMethod<false, 150, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(21)

  virtual Result Command170(Out<uint8_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 170, void(Out<uint8_t>,
      uint64_t)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(23)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(24)

  virtual Result Command200() {
    return this->template InvokeMethod<false, 200, void()>();
  }

  virtual Result Command201() {
    return this->template InvokeMethod<false, 201, void()>();
  }

  virtual Result Command300(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 300, void(Out<uint8_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(28)

  virtual Result Command310() {
    return this->template InvokeMethod<false, 310, void()>();
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IApplicationCreator, Kind>
  : public CmifProxyMethodsBase<am::service::IApplicationCreator, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::IApplicationAccessor>>& out,
    uint64_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 0>(out, argument0);
  }

  virtual Result Command1(
    const Out<SharedPointer<nn::am::service::IApplicationAccessor>>& out) {
    return this->template ProcessWithSharedOutObject<false, 1>(out);
  }

  virtual Result Command10(
    const Out<SharedPointer<am::service::IApplicationAccessor>>& out,
    uint64_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 10>(out, argument0);
  }

  virtual Result Command100(
    const Out<SharedPointer<nn::am::service::IApplicationAccessor>>& out) {
    return this->template ProcessWithSharedOutObject<false, 100>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IApplicationFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IApplicationFunctions, Kind> {
public:
  virtual Result Command1(const Out<SharedPointer<am::service::IStorage>>& out,
    uint32_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 1>(out, argument0);
  }

  virtual Result Command10(uint64_t argument0,
    SharedPointer<CmifProxyObject> argument1) {
    SharedPointer<CmifProxyObject> object(argument1.Detach(), false);
    return this->template InvokeMethod<false, 10, void(uint64_t,
      CmifProxyObject*)>(argument0, object.Get());
  }

  virtual Result Command11(uint64_t argument0,
    SharedPointer<CmifProxyObject> argument1, uint32_t argument2,
    uint32_t argument3) {
    SharedPointer<CmifProxyObject> object(argument1.Detach(), false);
    return this->template InvokeMethod<false, 11, void(uint64_t,
      CmifProxyObject*, uint32_t, uint32_t)>(argument0, object.Get(), argument2,
      argument3);
  }

  virtual Result Command12(uint64_t argument0) {
    return this->template InvokeMethod<false, 12, void(uint64_t)>(argument0);
  }

  virtual Result Command13(uint64_t argument0, uint32_t argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 13, void(uint64_t, uint32_t,
      uint32_t)>(argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result Command20(Out<uint64_t> argument0, const RawData<16,
    8>& argument1) {
    return this->template InvokeMethod<false, 20, void(Out<uint64_t>,
      const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result GetDesiredLanguage(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 21, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command22(uint32_t argument0) {
    return this->template InvokeMethod<false, 22, void(uint32_t)>(argument0);
  }

  virtual Result GetDisplayVersion(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 23, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result GetLaunchStorageInfoForDebug(Out<uint8_t> argument0,
    Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 24, void(Out<uint8_t>,
      Out<uint8_t>)>(argument0, argument1);
  }

  virtual Result Command25(Out<uint64_t> argument0, uint8_t argument1,
    const RawData<16, 8>& argument2, uint64_t argument3, uint64_t argument4) {
    return this->template InvokeMethod<false, 25, void(Out<uint64_t>, uint8_t,
      const RawData<16, 8>&, uint64_t, uint64_t)>(argument0, argument1,
      argument2, argument3, argument4);
  }

  virtual Result Command26(Out<uint64_t> argument0, Out<uint64_t> argument1,
    uint8_t argument2, const RawData<16, 8>& argument3) {
    return this->template InvokeMethod<false, 26, void(Out<uint64_t>,
      Out<uint64_t>, uint8_t, const RawData<16, 8>&)>(argument0, argument1,
      argument2, argument3);
  }

  virtual Result Command27(Out<uint64_t> argument0, Out<uint32_t> argument1,
    uint16_t argument2, uint64_t argument3, uint64_t argument4) {
    return this->template InvokeMethod<false, 27, void(Out<uint64_t>,
      Out<uint32_t>, uint16_t, uint64_t, uint64_t)>(argument0, argument1,
      argument2, argument3, argument4);
  }

  virtual Result Command28(Out<uint64_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 28, void(Out<uint64_t>,
      Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result Command29(Out<uint32_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 29, void(Out<uint32_t>,
      Out<uint64_t>)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)

  virtual Result EndBlockingHomeButton() {
    return this->template InvokeMethod<false, 31, void()>();
  }

  virtual Result BeginBlockingHomeButtonShortAndLongPressed(
    uint64_t argument0) {
    return this->template InvokeMethod<false, 32, void(uint64_t)>(argument0);
  }

  virtual Result Command33() {
    return this->template InvokeMethod<false, 33, void()>();
  }

  virtual Result Command35(Out<uint64_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 35, void(Out<uint64_t>,
      Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result Command36(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 36, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command37(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 37, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result NotifyRunning(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 40, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetPseudoDeviceId(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 50, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result SetMediaPlaybackStateForApplication(bool argument0) {
    return this->template InvokeMethod<false, 60, void(bool)>(argument0);
  }

  virtual Result IsGamePlayRecordingSupported(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 65, void(Out<uint8_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(28)

  virtual Result SetGamePlayRecordingState(uint32_t argument0) {
    return this->template InvokeMethod<false, 67, void(uint32_t)>(argument0);
  }

  virtual Result RequestFlushGamePlayingMovieForDebug() {
    return this->template InvokeMethod<false, 68, void()>();
  }

  virtual Result RequestToShutdown() {
    return this->template InvokeMethod<false, 70, void()>();
  }

  virtual Result RequestToReboot() {
    return this->template InvokeMethod<false, 71, void()>();
  }

  virtual Result Command72() {
    return this->template InvokeMethod<false, 72, void()>();
  }

  virtual Result ExitAndGoBackToInStoreDemoMenu() {
    return this->template InvokeMethod<false, 80, void()>();
  }

  virtual Result SetCrashReportEnabled(bool argument0) {
    return this->template InvokeMethod<false, 90, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(36)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(37)

  virtual Result Command102(bool argument0) {
    return this->template InvokeMethod<false, 102, void(bool)>(argument0);
  }

  virtual Result Command110(Out<uint32_t> argument0,
    const OutArray<RawData<24, 8>>& argument1,
    const InArray<uint64_t>& argument2) {
    return this->template InvokeMethod<false, 110, void(Out<uint32_t>,
      const OutArray<RawData<24, 8>>&, const InArray<uint64_t>&)>(argument0,
      argument1, argument2);
  }

  virtual Result Command111(Out<uint32_t> argument0,
    const OutArray<RawData<24, 8>>& argument1, const RawData<16, 8>& argument2,
    const InArray<uint64_t>& argument3) {
    return this->template InvokeMethod<false, 111, void(Out<uint32_t>,
      const OutArray<RawData<24, 8>>&, const RawData<16, 8>&,
      const InArray<uint64_t>&)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command112(Out<uint32_t> argument0,
    const OutArray<RawData<24, 8>>& argument1,
    const InArray<uint64_t>& argument2) {
    return this->template InvokeMethod<false, 112, void(Out<uint32_t>,
      const OutArray<RawData<24, 8>>&, const InArray<uint64_t>&)>(argument0,
      argument1, argument2);
  }

  virtual Result Command113(Out<uint32_t> argument0,
    const OutArray<RawData<24, 8>>& argument1, const RawData<16, 8>& argument2,
    const InArray<uint64_t>& argument3) {
    return this->template InvokeMethod<false, 113, void(Out<uint32_t>,
      const OutArray<RawData<24, 8>>&, const RawData<16, 8>&,
      const InArray<uint64_t>&)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command120(uint32_t argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 120, void(uint32_t, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command121() {
    return this->template InvokeMethod<false, 121, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(45)

  virtual Result Command123(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 123, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result EnableApplicationAllThreadDumpOnCrash(bool argument0) {
    return this->template InvokeMethod<false, 124, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(48)

  virtual Result SetDelayTimeToAbortOnGpuError(uint64_t argument0) {
    return this->template InvokeMethod<false, 131, void(uint64_t)>(argument0);
  }

  virtual Result Command140(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 140, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command141(
    const Out<SharedPointer<nn::am::service::IStorage>>& out) {
    return this->template ProcessWithSharedOutObject<false, 141>(out);
  }

  virtual Result Command150(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 150, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command151(
    const Out<SharedPointer<nn::am::service::IStorage>>& out) {
    return this->template ProcessWithSharedOutObject<false, 151>(out);
  }

  virtual Result Command160(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 160, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetHdcpAuthenticationActivated(bool argument0) {
    return this->template InvokeMethod<false, 170, void(bool)>(argument0);
  }

  virtual Result GetLaunchRequiredVersion(Out<RawData<64, 8>> argument0,
    uint64_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<true, 180, void(Out<RawData<64, 8>>,
      uint64_t, uint64_t)>(argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(57)

  virtual Result SendServerMaintenanceOverlayNotification(uint64_t argument0,
    uint64_t argument1) {
    return this->template InvokeMethod<false, 190, void(uint64_t, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command200(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 200, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command210(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 210, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetAudioOutputPolicy(uint8_t argument0) {
    return this->template InvokeMethod<false, 220, void(uint8_t)>(argument0);
  }

  virtual Result IsTensorRtSupported(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 230, void(Out<uint8_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(63)

  virtual Result Command310(uint8_t argument0, const RawData<16, 8>& argument1,
    SharedPointer<CmifProxyObject> argument2) {
    SharedPointer<CmifProxyObject> object(argument2.Detach(), false);
    return this->template InvokeMethod<false, 310, void(uint8_t,
      const RawData<16, 8>&, CmifProxyObject*)>(argument0, argument1,
      object.Get());
  }

  virtual Result Command320(Out<uint8_t> argument0, Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 320, void(Out<uint8_t>,
      Out<uint8_t>)>(argument0, argument1);
  }

  virtual Result Command321(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 321, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result IsLanguageSelectionLimited(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 330, void(Out<uint8_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(68)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(69)

  virtual Result Command1001() {
    return this->template InvokeMethod<false, 1001, void()>();
  }

  virtual Result SetMovieMakerLayerEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2000, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IApplicationObserver, Kind>
  : public CmifProxyMethodsBase<am::service::IApplicationObserver, Kind> {
public:
  virtual Result Command1(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command2(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command10(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 10, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result Command20(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command30(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 30, void(Out<uint32_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)
};

template <typename Kind>
class CmifProxyMethods<am::service::IAudioController, Kind>
  : public CmifProxyMethodsBase<am::service::IAudioController, Kind> {
public:
  virtual Result Command0(float argument0, float argument1) {
    return this->template InvokeMethod<false, 0, void(float, float)>(argument0,
      argument1);
  }

  virtual Result GetMainAppletExpectedMasterVolume(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetLibraryAppletExpectedMasterVolume(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command3(float argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 3, void(float, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command4(float argument0) {
    return this->template InvokeMethod<false, 4, void(float)>(argument0);
  }

  virtual Result Command5(float argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 5, void(float, uint64_t)>(
      argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ICMenuFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::ICMenuFunctions, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4(bool argument0) {
    return this->template InvokeMethod<false, 4, void(bool)>(argument0);
  }

  virtual Result Command5(uint32_t argument0) {
    return this->template InvokeMethod<false, 5, void(uint32_t)>(argument0);
  }

  virtual Result Command6(bool argument0) {
    return this->template InvokeMethod<false, 6, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command20(bool argument0) {
    return this->template InvokeMethod<false, 20, void(bool)>(argument0);
  }

  virtual Result Command21(bool argument0) {
    return this->template InvokeMethod<false, 21, void(bool)>(argument0);
  }

  virtual Result Command30(bool argument0) {
    return this->template InvokeMethod<false, 30, void(bool)>(argument0);
  }

  virtual Result Command31(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 31, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command40(Out<uint64_t> argument0,
    const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 40, void(Out<uint64_t>,
      const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Command41(Out<uint64_t> argument0,
    const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 41, void(Out<uint64_t>,
      const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Command50(uint64_t argument0) {
    return this->template InvokeMethod<false, 50, void(uint64_t)>(argument0);
  }

  virtual Result Command60(bool argument0) {
    return this->template InvokeMethod<false, 60, void(bool)>(argument0);
  }

  virtual Result Command61(bool argument0) {
    return this->template InvokeMethod<false, 61, void(bool)>(argument0);
  }

  virtual Result Command70() {
    return this->template InvokeMethod<false, 70, void()>();
  }

  virtual Result Command71() {
    return this->template InvokeMethod<false, 71, void()>();
  }

  virtual Result Command75(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 75, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command90(bool argument0) {
    return this->template InvokeMethod<false, 90, void(bool)>(argument0);
  }

  virtual Result Command101() {
    return this->template InvokeMethod<false, 101, void()>();
  }

  virtual Result Command110() {
    return this->template InvokeMethod<false, 110, void()>();
  }

  virtual Result Command1000(bool argument0) {
    return this->template InvokeMethod<false, 1000, void(bool)>(argument0);
  }

  virtual Result Command200(
    const Out<SharedPointer<am::service::ILibraryAppletAgent>>& out) {
    return this->template ProcessWithOutObject<false, 200>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(26)

  virtual Result Command210(bool argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 210, void(bool, uint64_t)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(28)
};

template <typename Kind>
class CmifProxyMethods<am::service::IChatFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IChatFunctions, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command102(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 102, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command103(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 103, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command104(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 104, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command110(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 110, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command111(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 111, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command120() {
    return this->template InvokeMethod<false, 120, void()>();
  }

  virtual Result Command121() {
    return this->template InvokeMethod<false, 121, void()>();
  }

  virtual Result Command130(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 130, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command140(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 140, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command141(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 141, void(Out<uint8_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)

  virtual Result Command201(uint64_t argument0) {
    return this->template InvokeMethod<false, 201, void(uint64_t)>(argument0);
  }

  virtual Result Command210(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 210, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  virtual Result Command230(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 230, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command300(bool argument0) {
    return this->template InvokeMethod<false, 300, void(bool)>(argument0);
  }

  virtual Result Command310() {
    return this->template InvokeMethod<false, 310, void()>();
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ICommonStateGetter, Kind>
  : public CmifProxyMethodsBase<am::service::ICommonStateGetter, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result ReceiveMessage(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command2(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  virtual Result GetOperationMode(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 5, void(Out<uint8_t>)>(argument0);
  }

  virtual Result GetPerformanceMode(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 6, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command7(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 7, void(Out<uint8_t>)>(argument0);
  }

  virtual Result Command8(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 8, void(Out<uint8_t>)>(argument0);
  }

  virtual Result Command9(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 9, void(Out<uint8_t>)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command12() {
    return this->template InvokeMethod<false, 12, void()>();
  }

  virtual Result Command13(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 13, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetWakeupCount(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 14, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command15(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 15, void(Out<NativeHandle>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)

  virtual Result Command30(
    const Out<SharedPointer<nn::am::service::ILockAccessor>>& out) {
    return this->template ProcessWithSharedOutObject<false, 30>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)

  virtual Result Command32(
    const Out<SharedPointer<am::service::ILockAccessor>>& out,
    uint32_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 32>(out, argument0);
  }

  virtual Result Command40(Out<uint32_t> argument0, Out<uint32_t> argument1,
    Out<uint32_t> argument2, Out<uint32_t> argument3) {
    return this->template InvokeMethod<false, 40, void(Out<uint32_t>,
      Out<uint32_t>, Out<uint32_t>, Out<uint32_t>)>(argument0, argument1,
      argument2, argument3);
  }

  virtual Result IsVrModeEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 50, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetVrModeEnabled(bool argument0) {
    return this->template InvokeMethod<false, 51, void(bool)>(argument0);
  }

  virtual Result SetLcdBacklightOffEnabled(bool argument0) {
    return this->template InvokeMethod<false, 52, void(bool)>(argument0);
  }

  virtual Result BeginVrModeEx() {
    return this->template InvokeMethod<false, 53, void()>();
  }

  virtual Result EndVrModeEx() {
    return this->template InvokeMethod<false, 54, void()>();
  }

  virtual Result Command55(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 55, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command59(uint32_t argument0, uint32_t argument1,
    uint32_t argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 59, void(uint32_t, uint32_t,
      uint32_t, uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result GetDefaultDisplayResolution(Out<uint32_t> argument0,
    Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 60, void(Out<uint32_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result GetDefaultDisplayResolutionChangeEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 61, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetHdcpAuthenticationState(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 62, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetHdcpAuthenticationStateChangeEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 63, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetTvPowerStateMatchingMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 64, void(uint32_t)>(argument0);
  }

  virtual Result Command65(Out<uint64_t> argument0, const InBuffer& argument1) {
    return this->template InvokeMethod<false, 65, void(Out<uint64_t>,
      const InBuffer&)>(argument0, argument1);
  }

  virtual Result SetCpuBoostMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 66, void(uint32_t)>(argument0);
  }

  virtual Result Command67() {
    return this->template InvokeMethod<false, 67, void()>();
  }

  virtual Result Command68(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 68, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result PerformSystemButtonPressingIfInFocus(uint32_t argument0) {
    return this->template InvokeMethod<false, 80, void(uint32_t)>(argument0);
  }

  virtual Result Command90(bool argument0) {
    return this->template InvokeMethod<false, 90, void(bool)>(argument0);
  }

  virtual Result Command91(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 91, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command100(bool argument0) {
    return this->template InvokeMethod<false, 100, void(bool)>(argument0);
  }

  virtual Result GetGpuErrorHandler(
    const Out<SharedPointer<nn::am::service::IGpuErrorHandler>>& out) {
    return this->template ProcessWithSharedOutObject<false, 110>(out);
  }

  virtual Result GetAppletLaunchedHistory(Out<uint32_t> argument0,
    const OutArray<uint32_t>& argument1) {
    return this->template InvokeMethod<false, 120, void(Out<uint32_t>,
      const OutArray<uint32_t>&)>(argument0, argument1);
  }

  virtual Result EnableStartupLogoDisappearedMessage() {
    return this->template InvokeMethod<false, 130, void()>();
  }

  virtual Result Command200(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 200, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command300(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 300, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result ActivateMigrationService() {
    return this->template InvokeMethod<false, 400, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(47)

  virtual Result RestrictPowerOperationForSecureLaunchMode() {
    return this->template InvokeMethod<false, 500, void()>();
  }

  virtual Result SuppressDisablingSleepTemporarily(uint64_t argument0) {
    return this->template InvokeMethod<false, 501, void(uint64_t)>(argument0);
  }

  virtual Result IsSleepEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 502, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result IsDisablingSleepSuppressed(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 503, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetHidInputMagnificationForApplication(const RawData<12,
    4>& argument0) {
    return this->template InvokeMethod<false, 600, void(const RawData<12, 4>&)>(
      argument0);
  }

  virtual Result Command610(float argument0, float argument1) {
    return this->template InvokeMethod<false, 610, void(float, float)>(
      argument0, argument1);
  }

  virtual Result Command611(bool argument0) {
    return this->template InvokeMethod<false, 611, void(bool)>(argument0);
  }

  virtual Result BeginUsingCameraResource() {
    return this->template InvokeMethod<false, 650, void()>();
  }

  virtual Result EndUsingCameraResource() {
    return this->template InvokeMethod<false, 651, void()>();
  }

  virtual Result Command900() {
    return this->template InvokeMethod<false, 900, void()>();
  }

  virtual Result GetLaunchRequiredTick(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 910, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result BeginVrModeForLadybird() {
    return this->template InvokeMethod<false, 1000, void()>();
  }

  virtual Result EndVrModeForLadybird() {
    return this->template InvokeMethod<false, 1001, void()>();
  }

  virtual Result IsVrModeForLadybird(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1002, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetVrLaboGoggleViewport(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 1003, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result GetPanelPhysicalSizeForSpecificTitle(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1004, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetPanelResolutionForSpecificTitle(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1005, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result SetRtcModeChangedMessageEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2000, void(bool)>(argument0);
  }

  virtual Result GetCurrentDisplayLayoutRatio(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2010, void(Out<uint64_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ICradleFirmwareUpdater, Kind>
  : public CmifProxyMethodsBase<am::service::ICradleFirmwareUpdater, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result Command5() {
    return this->template InvokeMethod<false, 5, void()>();
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IDebugFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IDebugFunctions, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command10(uint32_t argument0) {
    return this->template InvokeMethod<false, 10, void(uint32_t)>(argument0);
  }

  virtual Result Command20() {
    return this->template InvokeMethod<false, 20, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result Command40(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 40, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result Command50(uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 50, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result Command51(uint32_t argument0) {
    return this->template InvokeMethod<false, 51, void(uint32_t)>(argument0);
  }

  virtual Result Command52(Out<uint64_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 52, void(Out<uint64_t>,
      uint32_t)>(argument0, argument1);
  }

  virtual Result Command53(Out<uint64_t> argument0, uint32_t argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 53, void(Out<uint64_t>, uint32_t,
      uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command100(uint32_t argument0) {
    return this->template InvokeMethod<false, 100, void(uint32_t)>(argument0);
  }

  virtual Result Command101() {
    return this->template InvokeMethod<false, 101, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  virtual Result Command121() {
    return this->template InvokeMethod<false, 121, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)

  virtual Result Command131() {
    return this->template InvokeMethod<false, 131, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)

  virtual Result Command140() {
    return this->template InvokeMethod<false, 140, void()>();
  }

  virtual Result Command150() {
    return this->template InvokeMethod<false, 150, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(22)

  virtual Result Command300() {
    return this->template InvokeMethod<false, 300, void()>();
  }

  virtual Result LaunchDebugApplet() {
    return this->template InvokeMethod<false, 400, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(25)

  virtual Result IsDebugAppletLaunched(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 402, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command403(uint32_t argument0, uint32_t argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 403, void(uint32_t, uint32_t,
      uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command410(uint64_t argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 410, void(uint64_t, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command411(Out<uint64_t> argument0,
    const OutAutoSelectBuffer& argument1, uint64_t argument2,
    uint64_t argument3) {
    return this->template InvokeMethod<false, 411, void(Out<uint64_t>,
      const OutAutoSelectBuffer&, uint64_t, uint64_t)>(argument0, argument1,
      argument2, argument3);
  }

  virtual Result Command412(const InAutoSelectBuffer& argument0,
    uint64_t argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 412, void(
      const InAutoSelectBuffer&, uint64_t, uint64_t)>(argument0, argument1,
      argument2);
  }

  virtual Result Command430() {
    return this->template InvokeMethod<false, 430, void()>();
  }

  virtual Result Command431(uint32_t argument0) {
    return this->template InvokeMethod<false, 431, void(uint32_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(33)

  virtual Result Command910(Out<uint32_t> argument0, const OutArray<RawData<16,
    8>>& argument1) {
    return this->template InvokeMethod<false, 910, void(Out<uint32_t>,
      const OutArray<RawData<16, 8>>&)>(argument0, argument1);
  }

  virtual Result Command2000(uint64_t argument0) {
    return this->template InvokeMethod<false, 2000, void(uint64_t)>(argument0);
  }

  virtual Result Command2100(bool argument0) {
    return this->template InvokeMethod<false, 2100, void(bool)>(argument0);
  }

  virtual Result Command2110(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2110, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command2120(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2120, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command2130(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2130, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command10000(const RawData<12, 4>& argument0) {
    return this->template InvokeMethod<false, 10000, void(const RawData<12,
      4>&)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IDisplayController, Kind>
  : public CmifProxyMethodsBase<am::service::IDisplayController, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 2, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result Command3(const OutBuffer& argument0) {
    return this->template InvokeMethod<false, 3, void(const OutBuffer&)>(
      argument0);
  }

  virtual Result TakeScreenShotOfCallerApplet() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result TakeScreenShotOfOwnLayer(uint32_t argument0, bool argument1) {
    return this->template InvokeMethod<false, 8, void(uint32_t, bool)>(
      argument0, argument1);
  }

  virtual Result Command9(uint32_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 9, void(uint32_t, uint32_t)>(
      argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  virtual Result Command15() {
    return this->template InvokeMethod<false, 15, void()>();
  }

  virtual Result Command16(Out<uint8_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 16, void(Out<uint8_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command17(Out<uint8_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 17, void(Out<uint8_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command18(Out<uint8_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 18, void(Out<uint8_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command20(uint32_t argument0, bool argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 20, void(uint32_t, bool,
      uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result Command21(uint32_t argument0) {
    return this->template InvokeMethod<false, 21, void(uint32_t)>(argument0);
  }

  virtual Result Command22(Out<uint8_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 22, void(Out<uint8_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command23() {
    return this->template InvokeMethod<false, 23, void()>();
  }

  virtual Result Command24(Out<uint8_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 24, void(Out<uint8_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command25() {
    return this->template InvokeMethod<false, 25, void()>();
  }

  virtual Result Command26(Out<uint8_t> argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 26, void(Out<uint8_t>,
      Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result Command27() {
    return this->template InvokeMethod<false, 27, void()>();
  }

  virtual Result TakeScreenShotOfOwnLayerEx(uint32_t argument0, bool argument1,
    bool argument2) {
    return this->template InvokeMethod<false, 28, void(uint32_t, bool, bool)>(
      argument0, argument1, argument2);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IFocusableLayer, Kind>
  : public CmifProxyMethodsBase<am::service::IFocusableLayer, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command3(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command4(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<uint8_t>)>(argument0);
  }

  virtual Result Command10(bool argument0) {
    return this->template InvokeMethod<false, 10, void(bool)>(argument0);
  }

  virtual Result Command11(bool argument0) {
    return this->template InvokeMethod<false, 11, void(bool)>(argument0);
  }

  virtual Result Command20(bool argument0) {
    return this->template InvokeMethod<false, 20, void(bool)>(argument0);
  }

  virtual Result Command21(bool argument0) {
    return this->template InvokeMethod<false, 21, void(bool)>(argument0);
  }

  virtual Result Command32(uint8_t argument0) {
    return this->template InvokeMethod<false, 32, void(uint8_t)>(argument0);
  }

  virtual Result Command33(uint8_t argument0) {
    return this->template InvokeMethod<false, 33, void(uint8_t)>(argument0);
  }

  virtual Result Command40(uint32_t argument0, uint32_t argument1,
    uint32_t argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 40, void(uint32_t, uint32_t,
      uint32_t, uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result Command41(bool argument0) {
    return this->template InvokeMethod<false, 41, void(bool)>(argument0);
  }

  virtual Result Command42(uint32_t argument0) {
    return this->template InvokeMethod<false, 42, void(uint32_t)>(argument0);
  }

  virtual Result Command50(float argument0) {
    return this->template InvokeMethod<false, 50, void(float)>(argument0);
  }

  virtual Result Command51(float argument0) {
    return this->template InvokeMethod<false, 51, void(float)>(argument0);
  }

  virtual Result Command60(uint32_t argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 60, void(uint32_t, uint64_t)>(
      argument0, argument1);
  }

  virtual Result Command70(bool argument0) {
    return this->template InvokeMethod<false, 70, void(bool)>(argument0);
  }

  virtual Result Command71(bool argument0, bool argument1) {
    return this->template InvokeMethod<false, 71, void(bool, bool)>(argument0,
      argument1);
  }

  virtual Result Command72(uint16_t argument0, uint16_t argument1) {
    return this->template InvokeMethod<false, 72, void(uint16_t, uint16_t)>(
      argument0, argument1);
  }

  virtual Result Command73(uint32_t argument0) {
    return this->template InvokeMethod<false, 73, void(uint32_t)>(argument0);
  }

  virtual Result Command74(bool argument0) {
    return this->template InvokeMethod<false, 74, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IGlobalStateController, Kind>
  : public CmifProxyMethodsBase<am::service::IGlobalStateController, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2(bool argument0) {
    return this->template InvokeMethod<false, 2, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  virtual Result Command9(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 9, void(Out<uint8_t>)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command12(uint64_t argument0) {
    return this->template InvokeMethod<false, 12, void(uint64_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  virtual Result Command14(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 14, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command15(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 15, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command30(
    const Out<SharedPointer<am::service::ICradleFirmwareUpdater>>& out) {
    return this->template ProcessWithOutObject<false, 30>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  virtual Result Command201(uint64_t argument0) {
    return this->template InvokeMethod<false, 201, void(uint64_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)
};

template <typename Kind>
class CmifProxyMethods<am::service::IGpuErrorHandler, Kind>
  : public CmifProxyMethodsBase<am::service::IGpuErrorHandler, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result GetManualGpuErrorInfo(Out<uint64_t> argument0,
    const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 101, void(Out<uint64_t>,
      const OutBuffer&)>(argument0, argument1);
  }

  virtual Result GetManualGpuErrorDetectionSystemEvent(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 102, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result FinishManualGpuErrorHandling() {
    return this->template InvokeMethod<false, 103, void()>();
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IGraphicsScalingParametersFunctions, Kind>
  : public CmifProxyMethodsBase<
    am::service::IGraphicsScalingParametersFunctions, Kind> {
public:
  virtual Result GetGraphicsScalingParameters(Out<RawData<12, 4>> argument0) {
    return this->template InvokeMethod<false, 10, void(Out<RawData<12, 4>>)>(
      argument0);
  }

  virtual Result Command1000(const InArray<RawData<12, 4>>& argument0) {
    return this->template InvokeMethod<false, 1000,
      void(const InArray<RawData<12, 4>>&)>(argument0);
  }

  virtual Result SetGpuQuotaForDebug(Out<uint8_t> argument0,
    uint32_t argument1) {
    return this->template InvokeMethod<false, 1010, void(Out<uint8_t>,
      uint32_t)>(argument0, argument1);
  }

  virtual Result ClearGpuQuotaForDebug() {
    return this->template InvokeMethod<false, 1020, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result ClearScreenRatioForDebug() {
    return this->template InvokeMethod<false, 1040, void()>();
  }

  virtual Result SetGraphicsScaleChangedNotificationEnabled(bool argument0) {
    return this->template InvokeMethod<false, 1050, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IHomeMenuFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IHomeMenuFunctions, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command12() {
    return this->template InvokeMethod<false, 12, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result Command30(
    const Out<SharedPointer<nn::am::service::ILockAccessor>>& out) {
    return this->template ProcessWithSharedOutObject<false, 30>(out);
  }

  virtual Result Command31(
    const Out<SharedPointer<am::service::ILockAccessor>>& out,
    uint32_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 31>(out, argument0);
  }

  virtual Result Command40(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 40, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command41(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 41, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command50() {
    return this->template InvokeMethod<false, 50, void()>();
  }

  virtual Result Command51() {
    return this->template InvokeMethod<false, 51, void()>();
  }

  virtual Result Command60() {
    return this->template InvokeMethod<false, 60, void()>();
  }

  virtual Result Command61() {
    return this->template InvokeMethod<false, 61, void()>();
  }

  virtual Result Command100(Out<uint64_t> argument0, Out<uint32_t> argument1,
    const OutArray<RawData<16, 8>>& argument2) {
    return this->template InvokeMethod<false, 100, void(Out<uint64_t>,
      Out<uint32_t>, const OutArray<RawData<16, 8>>&)>(argument0, argument1,
      argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  virtual Result Command200() {
    return this->template InvokeMethod<false, 200, void()>();
  }

  virtual Result Command1000(uint32_t argument0) {
    return this->template InvokeMethod<false, 1000, void(uint32_t)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ILibraryAppletAccessor, Kind>
  : public CmifProxyMethodsBase<am::service::ILibraryAppletAccessor, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command1(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint8_t>)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command20() {
    return this->template InvokeMethod<false, 20, void()>();
  }

  virtual Result Command25() {
    return this->template InvokeMethod<false, 25, void()>();
  }

  virtual Result Command30() {
    return this->template InvokeMethod<false, 30, void()>();
  }

  virtual Result Command50(bool argument0) {
    return this->template InvokeMethod<false, 50, void(bool)>(argument0);
  }

  virtual Result Command60() {
    return this->template InvokeMethod<false, 60, void()>();
  }

  virtual Result Command70(SharedPointer<CmifProxyObject> argument0) {
    SharedPointer<CmifProxyObject> object(argument0.Detach(), false);
    return this->template InvokeMethod<false, 70,
      void(CmifProxyObject*)>(object.Get());
  }

  virtual Result Command80() {
    return this->template InvokeMethod<false, 80, void()>();
  }

  virtual Result Command81(
    const Out<SharedPointer<am::service::IAppletAccessor>>& out) {
    return this->template ProcessWithOutObject<false, 81>(out);
  }

  virtual Result Command90(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 90, void(const RawData<32, 8>&)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(20)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(21)

  virtual Result Command150() {
    return this->template InvokeMethod<false, 150, void()>();
  }

  virtual Result Command160(Out<uint64_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<true, 160, void(Out<uint64_t>,
      uint64_t)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(24)
};

template <typename Kind>
class CmifProxyMethods<am::service::ILibraryAppletAgent, Kind>
  : public CmifProxyMethodsBase<am::service::ILibraryAppletAgent, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<NativeHandle>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  virtual Result Command10(
    const Out<SharedPointer<am::service::IStorage>>& out) {
    return this->template ProcessWithOutObject<false, 10>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  virtual Result Command32() {
    return this->template InvokeMethod<false, 32, void()>();
  }

  virtual Result Command33(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 33, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result Command34(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 34, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result Command35(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 35, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)

  virtual Result Command42(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 42, void(Out<uint8_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ILibraryAppletSelfAccessor, Kind>
  : public CmifProxyMethodsBase<am::service::ILibraryAppletSelfAccessor, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::IStorage>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result Command1(SharedPointer<CmifProxyObject> argument0) {
    SharedPointer<CmifProxyObject> object(argument0.Detach(), false);
    return this->template InvokeMethod<false, 1,
      void(CmifProxyObject*)>(object.Get());
  }

  virtual Result Command2(
    const Out<SharedPointer<am::service::IStorage>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result Command11(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 11, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command12(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 12, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result Command13(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 13, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command14(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 14, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)

  virtual Result Command16(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 16, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command17(Out<uint32_t> argument0, const OutArray<RawData<16,
    8>>& argument1) {
    return this->template InvokeMethod<false, 17, void(Out<uint32_t>,
      const OutArray<RawData<16, 8>>&)>(argument0, argument1);
  }

  virtual Result Command18(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 18, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)

  virtual Result Command20(
    const Out<SharedPointer<am::service::IStorage>>& out) {
    return this->template ProcessWithOutObject<false, 20>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)

  virtual Result GetIndirectLayerProducerHandle(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 40, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command50(uint64_t argument0) {
    return this->template InvokeMethod<false, 50, void(uint64_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(22)

  virtual Result Command60(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 60, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command70(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 70, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command80() {
    return this->template InvokeMethod<false, 80, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(26)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(27)

  virtual Result Command101() {
    return this->template InvokeMethod<false, 101, void()>();
  }

  virtual Result Command102() {
    return this->template InvokeMethod<false, 102, void()>();
  }

  virtual Result Command110(Out<uint8_t> argument0, Out<uint32_t> argument1,
    const OutArray<RawData<16, 8>>& argument2) {
    return this->template InvokeMethod<false, 110, void(Out<uint8_t>,
      Out<uint32_t>, const OutArray<RawData<16, 8>>&)>(argument0, argument1,
      argument2);
  }

  virtual Result Command120(Out<uint8_t> argument0, Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 120, void(Out<uint8_t>,
      Out<uint8_t>)>(argument0, argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(32)

  virtual Result Command140(uint64_t argument0) {
    return this->template InvokeMethod<false, 140, void(uint64_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(34)

  virtual Result Command160(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 160, void(Out<uint64_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ILockAccessor, Kind>
  : public CmifProxyMethodsBase<am::service::ILockAccessor, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command4(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<uint8_t>)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::INotificationReceiver, Kind>
  : public CmifProxyMethodsBase<am::service::INotificationReceiver, Kind> {
public:
  virtual Result Command0(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 0,
      void(const RawData<16, 8>&)>(argument0);
  }

  virtual Result RemoveSource(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 1, void(const RawData<16, 8>&)>(
      argument0);
  }

  virtual Result GetEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result TryReceive(Out<RawData<128, 8>> argument0) {
    return this->template InvokeMethod<false, 3, void(Out<RawData<128, 8>>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)
};

template <typename Kind>
class CmifProxyMethods<am::service::INotificationSender, Kind>
  : public CmifProxyMethodsBase<am::service::INotificationSender, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result GetUnreceivedMessageCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<uint32_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::INxCompatApplicationFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::INxCompatApplicationFunctions,
    Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command2001(bool argument0) {
    return this->template InvokeMethod<false, 2001, void(bool)>(argument0);
  }

  virtual Result Command2002(bool argument0) {
    return this->template InvokeMethod<false, 2002, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command2004(bool argument0) {
    return this->template InvokeMethod<false, 2004, void(bool)>(argument0);
  }

  virtual Result Command2010(Out<uint8_t> argument0, Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 2010, void(Out<uint8_t>,
      Out<uint8_t>)>(argument0, argument1);
  }

  virtual Result Command2020() {
    return this->template InvokeMethod<false, 2020, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command2040(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2040, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command2050(uint32_t argument0) {
    return this->template InvokeMethod<false, 2050, void(uint32_t)>(argument0);
  }

  virtual Result Command2060(uint32_t argument0) {
    return this->template InvokeMethod<false, 2060, void(uint32_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
};

template <typename Kind>
class CmifProxyMethods<am::service::IOverlayFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IOverlayFunctions, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Command2(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4(bool argument0) {
    return this->template InvokeMethod<false, 4, void(bool)>(argument0);
  }

  virtual Result Command5(uint32_t argument0) {
    return this->template InvokeMethod<false, 5, void(uint32_t)>(argument0);
  }

  virtual Result Command6(bool argument0) {
    return this->template InvokeMethod<false, 6, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command20(bool argument0) {
    return this->template InvokeMethod<false, 20, void(bool)>(argument0);
  }

  virtual Result Command21(bool argument0) {
    return this->template InvokeMethod<false, 21, void(bool)>(argument0);
  }

  virtual Result Command30(bool argument0) {
    return this->template InvokeMethod<false, 30, void(bool)>(argument0);
  }

  virtual Result Command31(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 31, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command40(Out<uint64_t> argument0,
    const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 40, void(Out<uint64_t>,
      const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Command41(Out<uint64_t> argument0,
    const OutBuffer& argument1) {
    return this->template InvokeMethod<false, 41, void(Out<uint64_t>,
      const OutBuffer&)>(argument0, argument1);
  }

  virtual Result Command50(uint64_t argument0) {
    return this->template InvokeMethod<false, 50, void(uint64_t)>(argument0);
  }

  virtual Result Command60(bool argument0) {
    return this->template InvokeMethod<false, 60, void(bool)>(argument0);
  }

  virtual Result Command61(bool argument0) {
    return this->template InvokeMethod<false, 61, void(bool)>(argument0);
  }

  virtual Result Command70() {
    return this->template InvokeMethod<false, 70, void()>();
  }

  virtual Result Command71() {
    return this->template InvokeMethod<false, 71, void()>();
  }

  virtual Result Command75(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 75, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command90(bool argument0) {
    return this->template InvokeMethod<false, 90, void(bool)>(argument0);
  }

  virtual Result Command101() {
    return this->template InvokeMethod<false, 101, void()>();
  }

  virtual Result Command110() {
    return this->template InvokeMethod<false, 110, void()>();
  }

  virtual Result Command1000(bool argument0) {
    return this->template InvokeMethod<false, 1000, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IPerformanceFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::IPerformanceFunctions, Kind> {
public:
  virtual Result Command0(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<uint8_t>)>(argument0);
  }

  virtual Result SetCpuOverclockEnabled(bool argument0) {
    return this->template InvokeMethod<false, 1, void(bool)>(argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IProcessWindingController, Kind>
  : public CmifProxyMethodsBase<am::service::IProcessWindingController, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result Command11(
    const Out<SharedPointer<am::service::ILibraryAppletAccessor>>& out) {
    return this->template ProcessWithOutObject<false, 11>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command23() {
    return this->template InvokeMethod<false, 23, void()>();
  }

  virtual Result Command30() {
    return this->template InvokeMethod<false, 30, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)
};

template <typename Kind>
class CmifProxyMethods<am::service::ISelfController, Kind>
  : public CmifProxyMethodsBase<am::service::ISelfController, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4() {
    return this->template InvokeMethod<false, 4, void()>();
  }

  virtual Result Command9(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 9, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetScreenShotPermission(uint32_t argument0) {
    return this->template InvokeMethod<false, 10, void(uint32_t)>(argument0);
  }

  virtual Result SetOperationModeChangedNotification(bool argument0) {
    return this->template InvokeMethod<false, 11, void(bool)>(argument0);
  }

  virtual Result SetPerformanceModeChangedNotification(bool argument0) {
    return this->template InvokeMethod<false, 12, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  virtual Result SetRestartMessageEnabled(bool argument0) {
    return this->template InvokeMethod<false, 14, void(bool)>(argument0);
  }

  virtual Result Command15(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 15, void(const RawData<16, 8>&)>(
      argument0);
  }

  virtual Result SetOutOfFocusSuspendingEnabled(bool argument0) {
    return this->template InvokeMethod<false, 16, void(bool)>(argument0);
  }

  virtual Result Command17(bool argument0) {
    return this->template InvokeMethod<false, 17, void(bool)>(argument0);
  }

  virtual Result SetRequiresCaptureButtonShortPressedMessage(bool argument0) {
    return this->template InvokeMethod<false, 18, void(bool)>(argument0);
  }

  virtual Result SetAlbumImageOrientation(uint32_t argument0) {
    return this->template InvokeMethod<false, 19, void(uint32_t)>(argument0);
  }

  virtual Result SetDesirableKeyboardLayout(uint32_t argument0) {
    return this->template InvokeMethod<false, 20, void(uint32_t)>(argument0);
  }

  virtual Result Command21(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 21, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command22(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 22, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command23(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 23, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command24(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 24, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result Command40(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 40, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command41() {
    return this->template InvokeMethod<false, 41, void()>();
  }

  virtual Result Command42(Out<uint64_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 42, void(Out<uint64_t>,
      Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result Command43(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 43, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command44(Out<uint64_t> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 44, void(Out<uint64_t>,
      Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result Command45(uint32_t argument0) {
    return this->template InvokeMethod<false, 45, void(uint32_t)>(argument0);
  }

  virtual Result Command46(bool argument0) {
    return this->template InvokeMethod<false, 46, void(bool)>(argument0);
  }

  virtual Result Command50(bool argument0) {
    return this->template InvokeMethod<false, 50, void(bool)>(argument0);
  }

  virtual Result Command51() {
    return this->template InvokeMethod<false, 51, void()>();
  }

  virtual Result OverrideAutoSleepTimeAndDimmingTime(uint32_t argument0,
    uint32_t argument1, uint32_t argument2, uint32_t argument3) {
    return this->template InvokeMethod<false, 60, void(uint32_t, uint32_t,
      uint32_t, uint32_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result SetMediaPlaybackState(bool argument0) {
    return this->template InvokeMethod<false, 61, void(bool)>(argument0);
  }

  virtual Result SetIdleTimeDetectionExtension(uint32_t argument0) {
    return this->template InvokeMethod<false, 62, void(uint32_t)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(33)

  virtual Result SetInputDetectionSourceSet(uint32_t argument0) {
    return this->template InvokeMethod<false, 64, void(uint32_t)>(argument0);
  }

  virtual Result ReportUserIsActive() {
    return this->template InvokeMethod<false, 65, void()>();
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(36)

  virtual Result IsIlluminanceAvailable(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 67, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetAutoSleepDisabled(bool argument0) {
    return this->template InvokeMethod<false, 68, void(bool)>(argument0);
  }

  virtual Result IsAutoSleepDisabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 69, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result ReportMultimediaError(uint32_t argument0,
    const InBuffer& argument1) {
    return this->template InvokeMethod<false, 70, void(uint32_t,
      const InBuffer&)>(argument0, argument1);
  }

  virtual Result GetCurrentIlluminanceEx(Out<uint32_t> argument0,
    Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 71, void(Out<uint32_t>,
      Out<uint8_t>)>(argument0, argument1);
  }

  virtual Result SetInputDetectionPolicy(uint32_t argument0) {
    return this->template InvokeMethod<false, 72, void(uint32_t)>(argument0);
  }

  virtual Result ReportNplnError(uint32_t argument0) {
    return this->template InvokeMethod<false, 73, void(uint32_t)>(argument0);
  }

  virtual Result SetWirelessPriorityMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 80, void(uint32_t)>(argument0);
  }

  virtual Result Command90(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 90, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(46)

  virtual Result SetAlbumImageTakenNotificationEnabled(bool argument0) {
    return this->template InvokeMethod<false, 100, void(bool)>(argument0);
  }

  virtual Result SetAlbumUserData(const InAutoSelectBuffer& argument0) {
    return this->template InvokeMethod<false, 110, void(
      const InAutoSelectBuffer&)>(argument0);
  }

  virtual Result SaveCurrentScreenShot(uint32_t argument0) {
    return this->template InvokeMethod<false, 120, void(uint32_t)>(argument0);
  }

  virtual Result SetRecordVolumeMuted(bool argument0) {
    return this->template InvokeMethod<false, 130, void(bool)>(argument0);
  }

  virtual Result Command200(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 200, void(const RawData<32, 8>&)>(
      argument0);
  }

  virtual Result Command210(const InArray<RawData<16, 8>>& argument0) {
    return this->template InvokeMethod<false, 210, void(
      const InArray<RawData<16, 8>>&)>(argument0);
  }

  virtual Result Command211() {
    return this->template InvokeMethod<false, 211, void()>();
  }

  virtual Result Command220(bool argument0) {
    return this->template InvokeMethod<false, 220, void(bool)>(argument0);
  }

  virtual Result Command221(bool argument0) {
    return this->template InvokeMethod<false, 221, void(bool)>(argument0);
  }

  virtual Result Command230(Out<uint8_t> argument0, Out<uint8_t> argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 230, void(Out<uint8_t>,
      Out<uint8_t>, uint32_t)>(argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(57)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(58)

  virtual Result SetRecordingLayerEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2100, void(bool)>(argument0);
  }

  virtual Result SetSharingLayerEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2200, void(bool)>(argument0);
  }

  virtual Result SetCopyrightLayerEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2300, void(bool)>(argument0);
  }

  virtual Result SetRtcScreenSharingAudioEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2400, void(bool)>(argument0);
  }

  virtual Result SetStreamPlayMirroringAudioEnabled(bool argument0) {
    return this->template InvokeMethod<false, 2401, void(bool)>(argument0);
  }

  virtual Result Command2402(bool argument0, bool argument1) {
    return this->template InvokeMethod<false, 2402, void(bool, bool)>(argument0,
      argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IStorageAccessor, Kind>
  : public CmifProxyMethodsBase<am::service::IStorageAccessor, Kind> {
public:
  virtual Result Command0(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 0,
      void(Out<uint64_t>)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result Read(uint64_t argument0,
    const OutAutoSelectBuffer& argument1) {
    return this->template InvokeMethod<false, 11, void(uint64_t,
      const OutAutoSelectBuffer&)>(argument0, argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IStorageChannel, Kind>
  : public CmifProxyMethodsBase<am::service::IStorageChannel, Kind> {
public:
  virtual Result Command0(SharedPointer<CmifProxyObject> argument0) {
    SharedPointer<CmifProxyObject> object(argument0.Detach(), false);
    return this->template InvokeMethod<false, 0,
      void(CmifProxyObject*)>(object.Get());
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command4() {
    return this->template InvokeMethod<false, 4, void()>();
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ISystemAppletControllerForDebug, Kind>
  : public CmifProxyMethodsBase<am::service::ISystemAppletControllerForDebug,
    Kind> {
public:
  virtual Result Command1(uint64_t argument0, const InArray<RawData<16,
    8>>& argument1) {
    return this->template InvokeMethod<false, 1, void(uint64_t,
      const InArray<RawData<16, 8>>&)>(argument0, argument1);
  }

  virtual Result Command2(
    const Out<SharedPointer<am::service::IStorageChannel>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)
};

template <typename Kind>
class CmifProxyMethods<am::service::IWindowController, Kind>
  : public CmifProxyMethodsBase<am::service::IWindowController, Kind> {
public:
  virtual Result Command0(const Out<SharedPointer<am::service::IWindow>>& out,
    uint32_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 0>(out, argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  virtual Result GetAppletResourceUserIdOfCallerApplet(
    Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint64_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  virtual Result Command11() {
    return this->template InvokeMethod<false, 11, void()>();
  }

  virtual Result Command12() {
    return this->template InvokeMethod<false, 12, void()>();
  }

  virtual Result Command20(bool argument0) {
    return this->template InvokeMethod<false, 20, void(bool)>(argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)
};


template <typename Kind>
class CmifProxyMethods<am::service::ISystemAppletProxy, Kind>
  : public CmifProxyMethodsBase<am::service::ISystemAppletProxy, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::ICommonStateGetter>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
};

template <typename Kind>
class CmifProxyMethods<am::service::IMovieMaker, Kind>
  : public CmifProxyMethodsBase<am::service::IMovieMaker, Kind> {
public:
  virtual Result Command0(const Out<SharedPointer<grcsrv::IMovieMaker>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)
};

template <typename Kind>
class CmifProxyMethods<am::service::IStorage, Kind>
  : public CmifProxyMethodsBase<am::service::IStorage, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::IStorageAccessor>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)
};

template <typename Kind>
class CmifProxyMethods<am::service::IMovieWriter, Kind>
  : public CmifProxyMethodsBase<am::service::IMovieWriter, Kind> {
public:
  virtual Result Command0(const Out<SharedPointer<grcsrv::IMovieWriter>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IChatProxy, Kind>
  : public CmifProxyMethodsBase<am::service::IChatProxy, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command20(
    const Out<SharedPointer<am::service::IChatFunctions>>& out) {
    return this->template ProcessWithOutObject<false, 20>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ICMenuProxy, Kind>
  : public CmifProxyMethodsBase<am::service::ICMenuProxy, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command20(
    const Out<SharedPointer<am::service::IOverlayFunctions>>& out) {
    return this->template ProcessWithOutObject<false, 20>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  virtual Result Command24(
    const Out<SharedPointer<am::service::ICMenuFunctions>>& out) {
    return this->template ProcessWithOutObject<false, 24>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ISystemProcessCommonFunctions, Kind>
  : public CmifProxyMethodsBase<am::service::ISystemProcessCommonFunctions,
    Kind> {
public:
  virtual Result Command1(
    const Out<SharedPointer<am::service::IApplicationObserver>>& out) {
    return this->template ProcessWithOutObject<false, 1>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ILibraryAppletProxy, Kind>
  : public CmifProxyMethodsBase<am::service::ILibraryAppletProxy, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command20(
    const Out<SharedPointer<am::service::ILibraryAppletSelfAccessor>>& out) {
    return this->template ProcessWithOutObject<false, 20>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
};

template <typename Kind>
class CmifProxyMethods<am::service::IApplicationProxy, Kind>
  : public CmifProxyMethodsBase<am::service::IApplicationProxy, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)

  virtual Result Command20(
    const Out<SharedPointer<am::service::IApplicationFunctions>>& out) {
    return this->template ProcessWithOutObject<false, 20>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)
};

template <typename Kind>
class CmifProxyMethods<am::service::IReceiverService, Kind>
  : public CmifProxyMethodsBase<am::service::IReceiverService, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::INotificationReceiver>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::ILibraryAppletCreator, Kind>
  : public CmifProxyMethodsBase<am::service::ILibraryAppletCreator, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::ILibraryAppletAccessor>>& out,
    uint32_t argument0, uint32_t argument1) {
    return this->template ProcessWithSharedOutObject<false, 0>(out, argument0,
      argument1);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result Command3(
    const Out<SharedPointer<am::service::ILibraryAppletAccessor>>& out,
    uint32_t argument0, uint32_t argument1, uint64_t argument2) {
    return this->template ProcessWithSharedOutObject<false, 3>(out, argument0,
      argument1, argument2);
  }

  virtual Result Command10(const Out<SharedPointer<am::service::IStorage>>& out,
    uint64_t argument0) {
    return this->template ProcessWithSharedOutObject<false, 10>(out, argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)
};

template <typename Kind>
class CmifProxyMethods<am::service::ISenderService, Kind>
  : public CmifProxyMethodsBase<am::service::ISenderService, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<am::service::INotificationSender>>& out,
    const RawData<16, 4>& argument0, uint64_t argument1) {
    return this->template ProcessWithSharedOutObject<false, 0>(out, argument0,
      argument1);
  }
};

template <typename Kind>
class CmifProxyMethods<am::service::IApplicationProxyService, Kind>
  : public CmifProxyMethodsBase<am::service::IApplicationProxyService, Kind> {
public:
  virtual Result Command2000(
    const Out<SharedPointer<am::service::INxCompatApplicationFunctions>>& out,
    uint64_t argument0) {
    return this->template ProcessWithSharedOutObject<true, 2000>(out,
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)
};

template <typename Kind>
class CmifProxyMethods<am::service::IAllSystemAppletProxiesService, Kind>
  : public CmifProxyMethodsBase<am::service::IAllSystemAppletProxiesService,
    Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)

  virtual Result Command400(
    const Out<SharedPointer<am::service::ILibraryAppletCreator>>& out,
    uint64_t argument0) {
    return this->template ProcessWithSharedOutObject<true, 400>(out, argument0);
  }

  virtual Result Command410(
    const Out<SharedPointer<am::service::ISystemAppletControllerForDebug>>&
      out) {
    return this->template ProcessWithSharedOutObject<false, 410>(out);
  }

  virtual Result Command450(
    const Out<SharedPointer<am::service::ISystemProcessCommonFunctions>>& out) {
    return this->template ProcessWithSharedOutObject<false, 450>(out);
  }

  virtual Result Command460(
    const Out<SharedPointer<am::service::IAppletAlternativeFunctions>>& out) {
    return this->template ProcessWithSharedOutObject<false, 460>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)
};

}
