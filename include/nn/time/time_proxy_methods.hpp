#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::ntc::detail::service {

class IEnsureNetworkClockAvailabilityService;

}

namespace nn::timesrv::detail::service {

class ISteadyClock;
class ISystemClock;
class ITimeZoneService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<timesrv::detail::service::ITimeZoneService, Kind>
  : public CmifProxyMethodsBase<timesrv::detail::service::ITimeZoneService,
    Kind> {
public:
  virtual Result GetDeviceLocationName(Out<RawData<36, 4>> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<RawData<36, 4>>)>(
      argument0);
  }

  virtual Result SetDeviceLocationName(const RawData<36, 4>& argument0) {
    return this->template InvokeMethod<false, 1, void(const RawData<36, 4>&)>(
      argument0);
  }

  virtual Result GetTotalLocationNameCount(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result LoadLocationNameList(
    Out<uint32_t> argument0, const OutArray<RawData<36, 4>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 3, void(
      Out<uint32_t>, const OutArray<RawData<36, 4>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)

  virtual Result GetTimeZoneRuleVersion(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 5, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result GetDeviceLocationNameAndUpdatedTime(
    Out<RawData<36, 4>> argument0, Out<RawData<24, 8>> argument1) {
    return this->template InvokeMethod<false, 6, void(
      Out<RawData<36, 4>>, Out<RawData<24, 8>>)>(argument0, argument1);
  }

  virtual Result Command7(
    const RawData<36, 4>& argument0, const InAutoSelectBuffer& argument1) {
    return this->template InvokeMethod<false, 7, void(
      const RawData<36, 4>&, const InAutoSelectBuffer&)>(argument0, argument1);
  }

  virtual Result Command8(
    Out<LargeData<22, 16384, 8>> argument0,
    const InAutoSelectBuffer& argument1) {
    return this->template InvokeMethod<false, 8, void(
      Out<LargeData<22, 16384, 8>>, const InAutoSelectBuffer&)>(
      argument0, argument1);
  }

  virtual Result GetDeviceLocationNameOperationEventReadableHandle(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result ToCalendarTime(
    Out<uint64_t> argument0, Out<RawData<24, 8>> argument1, uint64_t argument2,
    const LargeData<21, 16384, 8>& argument3) {
    return this->template InvokeMethod<false, 100, void(
      Out<uint64_t>, Out<RawData<24, 8>>, uint64_t,
      const LargeData<21, 16384, 8>&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result ToCalendarTimeWithMyRule(
    Out<uint64_t> argument0, Out<RawData<24, 8>> argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 101, void(
      Out<uint64_t>, Out<RawData<24, 8>>, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result ToPosixTime(
    Out<uint32_t> argument0, const BufferArray<10, uint64_t>& argument1,
    uint64_t argument2, const LargeData<21, 16384, 8>& argument3) {
    return this->template InvokeMethod<false, 201, void(
      Out<uint32_t>, const BufferArray<10, uint64_t>&, uint64_t,
      const LargeData<21, 16384, 8>&)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result ToPosixTimeWithMyRule(
    Out<uint32_t> argument0, const BufferArray<10, uint64_t>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 202, void(
      Out<uint32_t>, const BufferArray<10, uint64_t>&, uint64_t)>(
      argument0, argument1, argument2);
  }
};

template <typename Kind>
class CmifProxyMethods<timesrv::detail::service::ISteadyClock, Kind>
  : public CmifProxyMethodsBase<timesrv::detail::service::ISteadyClock, Kind> {
public:
  virtual Result GetCurrentTimePoint(Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result GetTestOffset(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result SetTestOffset(uint64_t argument0) {
    return this->template InvokeMethod<false, 3, void(uint64_t)>(argument0);
  }

  virtual Result GetRtcValue(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 100, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result IsRtcResetDetected(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 101, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetSetupResultValue(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 102, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetInternalOffset(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 200, void(Out<uint64_t>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<timesrv::detail::service::ISystemClock, Kind>
  : public CmifProxyMethodsBase<timesrv::detail::service::ISystemClock, Kind> {
public:
  virtual Result GetCurrentTime(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 0, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result SetCurrentTime(uint64_t argument0) {
    return this->template InvokeMethod<false, 1, void(uint64_t)>(argument0);
  }

  virtual Result GetSystemClockContext(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 2, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result SetSystemClockContext(const RawData<32, 8>& argument0) {
    return this->template InvokeMethod<false, 3, void(const RawData<32, 8>&)>(
      argument0);
  }

  virtual Result GetOperationEventReadableHandle(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<NativeHandle>)>(
      argument0);
  }
};

template <typename Kind>
class CmifProxyMethods<
  ntc::detail::service::IEnsureNetworkClockAvailabilityService, Kind>
  : public CmifProxyMethodsBase<
      ntc::detail::service::IEnsureNetworkClockAvailabilityService, Kind> {
public:
  virtual Result Command0() {
    return this->template InvokeMethod<false, 0, void()>();
  }

  virtual Result Command1(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command2() {
    return this->template InvokeMethod<false, 2, void()>();
  }

  virtual Result Command3() {
    return this->template InvokeMethod<false, 3, void()>();
  }

  virtual Result Command4(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 4, void(Out<uint8_t>)>(argument0);
  }

  virtual Result Command5(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 5, void(Out<uint64_t>)>(
      argument0);
  }
};

}
