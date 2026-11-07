#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::pctl::detail::ipc {

class IParentalControlService;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<pctl::detail::ipc::IParentalControlService, Kind>
  : public CmifProxyMethodsBase<pctl::detail::ipc::IParentalControlService,
    Kind> {
public:
  virtual Result Initialize() {
    return this->template InvokeMethod<false, 1, void()>();
  }

  virtual Result CheckFreeCommunicationPermission() {
    return this->template InvokeMethod<false, 1001, void()>();
  }

  virtual Result Command1002(
    uint64_t argument0, const BufferArray<9, uint8_t>& argument1,
    bool argument2) {
    return this->template InvokeMethod<false, 1002, void(
      uint64_t, const BufferArray<9, uint8_t>&, bool)>(
      argument0, argument1, argument2);
  }

  virtual Result ConfirmResumeApplicationPermission(
    uint64_t argument0, const BufferArray<9, uint8_t>& argument1,
    bool argument2) {
    return this->template InvokeMethod<false, 1003, void(
      uint64_t, const BufferArray<9, uint8_t>&, bool)>(
      argument0, argument1, argument2);
  }

  virtual Result ConfirmSnsPostPermission() {
    return this->template InvokeMethod<false, 1004, void()>();
  }

  virtual Result ConfirmSystemSettingsPermission() {
    return this->template InvokeMethod<false, 1005, void()>();
  }

  virtual Result IsRestrictionTemporaryUnlocked(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1006, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result RevertRestrictionTemporaryUnlocked() {
    return this->template InvokeMethod<false, 1007, void()>();
  }

  virtual Result EnterRestrictedSystemSettings() {
    return this->template InvokeMethod<false, 1008, void()>();
  }

  virtual Result LeaveRestrictedSystemSettings() {
    return this->template InvokeMethod<false, 1009, void()>();
  }

  virtual Result IsRestrictedSystemSettingsEntered(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1010, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result RevertRestrictedSystemSettingsEntered() {
    return this->template InvokeMethod<false, 1011, void()>();
  }

  virtual Result GetRestrictedFeatures(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1012, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command1013() {
    return this->template InvokeMethod<false, 1013, void()>();
  }

  virtual Result Command1014(const BufferArray<9, uint8_t>& argument0) {
    return this->template InvokeMethod<false, 1014, void(
      const BufferArray<9, uint8_t>&)>(argument0);
  }

  virtual Result ConfirmPlayableApplicationVideo(
    uint64_t argument0, const BufferArray<9, uint8_t>& argument1) {
    return this->template InvokeMethod<false, 1015, void(
      uint64_t, const BufferArray<9, uint8_t>&)>(argument0, argument1);
  }

  virtual Result ConfirmShowNewsPermission(
    const BufferArray<9, uint8_t>& argument0) {
    return this->template InvokeMethod<false, 1016, void(
      const BufferArray<9, uint8_t>&)>(argument0);
  }

  virtual Result EndFreeCommunication() {
    return this->template InvokeMethod<false, 1017, void()>();
  }

  virtual Result IsFreeCommunicationAvailable() {
    return this->template InvokeMethod<false, 1018, void()>();
  }

  virtual Result ConfirmLaunchApplicationPermission(
    uint64_t argument0, uint8_t argument1,
    const BufferArray<9, uint8_t>& argument2, bool argument3) {
    return this->template InvokeMethod<false, 1019, void(
      uint64_t, uint8_t, const BufferArray<9, uint8_t>&, bool)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result ConfirmLaunchSharedApplicationPermission(
    uint64_t argument0, uint8_t argument1,
    const BufferArray<9, uint8_t>& argument2, bool argument3, bool argument4) {
    return this->template InvokeMethod<false, 1020, void(
      uint64_t, uint8_t, const BufferArray<9, uint8_t>&, bool, bool)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result TryBeginFreeCommunicationForStreamPlay() {
    return this->template InvokeMethod<false, 1021, void()>();
  }

  virtual Result EndFreeCommunicationForStreamPlay() {
    return this->template InvokeMethod<false, 1022, void()>();
  }

  virtual Result IsRestrictionEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1031, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetSafetyLevel(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1032, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetSafetyLevel(uint32_t argument0) {
    return this->template InvokeMethod<false, 1033, void(uint32_t)>(argument0);
  }

  virtual Result GetSafetyLevelSettings(
    Out<RawData<3, 1>> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 1034, void(
      Out<RawData<3, 1>>, uint32_t)>(argument0, argument1);
  }

  virtual Result GetCurrentSettings(Out<RawData<3, 1>> argument0) {
    return this->template InvokeMethod<false, 1035, void(Out<RawData<3, 1>>)>(
      argument0);
  }

  virtual Result SetCustomSafetyLevelSettings(RawData<3, 1> argument0) {
    return this->template InvokeMethod<false, 1036, void(RawData<3, 1>)>(
      argument0);
  }

  virtual Result GetDefaultRatingOrganization(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1037, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetDefaultRatingOrganization(uint32_t argument0) {
    return this->template InvokeMethod<false, 1038, void(uint32_t)>(argument0);
  }

  virtual Result GetFreeCommunicationApplicationListCount(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1039, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command1042(uint64_t argument0) {
    return this->template InvokeMethod<false, 1042, void(uint64_t)>(argument0);
  }

  virtual Result DeleteSettings() {
    return this->template InvokeMethod<false, 1043, void()>();
  }

  virtual Result GetFreeCommunicationApplicationList(
    Out<uint32_t> argument0, const OutArray<RawData<16, 8>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 1044, void(
      Out<uint32_t>, const OutArray<RawData<16, 8>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result UpdateFreeCommunicationApplicationList(
    const InArray<RawData<16, 8>>& argument0) {
    return this->template InvokeMethod<false, 1045, void(
      const InArray<RawData<16, 8>>&)>(argument0);
  }

  virtual Result DisableFeaturesForReset() {
    return this->template InvokeMethod<false, 1046, void()>();
  }

  virtual Result Command1047(uint64_t argument0) {
    return this->template InvokeMethod<false, 1047, void(uint64_t)>(argument0);
  }

  virtual Result NotifyNetworkProfileCreated() {
    return this->template InvokeMethod<false, 1048, void()>();
  }

  virtual Result ResetFreeCommunicationApplicationList() {
    return this->template InvokeMethod<false, 1049, void()>();
  }

  virtual Result AddToFreeCommunicationApplicationList(
    uint64_t argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 1050, void(uint64_t, uint8_t)>(
      argument0, argument1);
  }

  virtual Result NotifyApplicationDownloadStarted(
    uint64_t argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 1051, void(uint64_t, uint8_t)>(
      argument0, argument1);
  }

  virtual Result Command1061() {
    return this->template InvokeMethod<false, 1061, void()>();
  }

  virtual Result GetStereoVisionRestriction(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1062, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetStereoVisionRestriction(bool argument0) {
    return this->template InvokeMethod<false, 1063, void(bool)>(argument0);
  }

  virtual Result Command1064() {
    return this->template InvokeMethod<false, 1064, void()>();
  }

  virtual Result IsStereoVisionPermitted(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1065, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command1081(
    Out<uint64_t> argument0, Out<NativeHandle> argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 1081, void(
      Out<uint64_t>, Out<NativeHandle>, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command1082(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 1082, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command1083(uint64_t argument0) {
    return this->template InvokeMethod<false, 1083, void(uint64_t)>(argument0);
  }

  virtual Result UnlockRestriction(const BufferArray<9, uint8_t>& argument0) {
    return this->template InvokeMethod<false, 1201, void(
      const BufferArray<9, uint8_t>&)>(argument0);
  }

  virtual Result Command1202(const BufferArray<9, uint8_t>& argument0) {
    return this->template InvokeMethod<false, 1202, void(
      const BufferArray<9, uint8_t>&)>(argument0);
  }

  virtual Result SetPinCode(const BufferArray<9, uint8_t>& argument0) {
    return this->template InvokeMethod<false, 1203, void(
      const BufferArray<9, uint8_t>&)>(argument0);
  }

  virtual Result GenerateInquiryCode(Out<RawData<32, 8>> argument0) {
    return this->template InvokeMethod<false, 1204, void(Out<RawData<32, 8>>)>(
      argument0);
  }

  virtual Result CheckMasterKey(
    Out<uint8_t> argument0, const RawData<32, 8>& argument1,
    const BufferArray<9, uint8_t>& argument2) {
    return this->template InvokeMethod<false, 1205, void(
      Out<uint8_t>, const RawData<32, 8>&, const BufferArray<9, uint8_t>&)>(
      argument0, argument1, argument2);
  }

  virtual Result GetPinCodeLength(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1206, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetPinCodeChangedEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1207, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetPinCode(
    Out<uint32_t> argument0, const BufferArray<10, uint8_t>& argument1) {
    return this->template InvokeMethod<false, 1208, void(
      Out<uint32_t>, const BufferArray<10, uint8_t>&)>(argument0, argument1);
  }

  virtual Result UnlockSystemSettingsRestriction(
    const BufferArray<9, uint8_t>& argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 1209, void(
      const BufferArray<9, uint8_t>&, uint8_t)>(argument0, argument1);
  }

  virtual Result IsPairingActive(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1403, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetSettingsLastUpdated(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1406, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetPairingAccountInfo(
    Out<RawData<16, 8>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 1411, void(
      Out<RawData<16, 8>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result GetAccountNickname(
    Out<uint32_t> argument0, const BufferArray<10, uint8_t>& argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 1421, void(
      Out<uint32_t>, const BufferArray<10, uint8_t>&, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result GetAccountState(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 1424, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result GetSynchronizationEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1432, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result StartPlayTimer() {
    return this->template InvokeMethod<false, 1451, void()>();
  }

  virtual Result StopPlayTimer() {
    return this->template InvokeMethod<false, 1452, void()>();
  }

  virtual Result IsPlayTimerEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1453, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetPlayTimerRemainingTime(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1454, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result IsRestrictedByPlayTimer(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1455, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetPlayTimerEventToRequestSuspension(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1457, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result IsPlayTimerAlarmDisabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1458, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetPlayTimerRemainingTimeDisplayInfo(
    Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 1459, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result NotifyWrongPinCodeInputManyTimes() {
    return this->template InvokeMethod<false, 1471, void()>();
  }

  virtual Result CancelNetworkRequest() {
    return this->template InvokeMethod<false, 1472, void()>();
  }

  virtual Result GetUnlinkedEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1473, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result ClearUnlinkedEvent() {
    return this->template InvokeMethod<false, 1474, void()>();
  }

  virtual Result GetExtendedPlayTimerEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 1475, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetAutoProcessingEnabled(bool argument0) {
    return this->template InvokeMethod<false, 1501, void(bool)>(argument0);
  }

  virtual Result DisableAllFeatures(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1601, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result PostEnableAllFeatures(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1602, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result IsAllFeaturesDisabled(
    Out<uint8_t> argument0, Out<uint8_t> argument1) {
    return this->template InvokeMethod<false, 1603, void(
      Out<uint8_t>, Out<uint8_t>)>(argument0, argument1);
  }

  virtual Result DeleteFromFreeCommunicationApplicationListForDebug(
    uint64_t argument0) {
    return this->template InvokeMethod<false, 1901, void(uint64_t)>(argument0);
  }

  virtual Result ClearFreeCommunicationApplicationListForDebug() {
    return this->template InvokeMethod<false, 1902, void()>();
  }

  virtual Result GetExemptApplicationListCountForDebug(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 1903, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetExemptApplicationListForDebug(
    Out<uint32_t> argument0, const OutArray<RawData<16, 8>>& argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 1904, void(
      Out<uint32_t>, const OutArray<RawData<16, 8>>&, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result UpdateExemptApplicationListForDebug(
    const InArray<RawData<16, 8>>& argument0) {
    return this->template InvokeMethod<false, 1905, void(
      const InArray<RawData<16, 8>>&)>(argument0);
  }

  virtual Result AddToExemptApplicationListForDebug(uint64_t argument0) {
    return this->template InvokeMethod<false, 1906, void(uint64_t)>(argument0);
  }

  virtual Result DeleteFromExemptApplicationListForDebug(uint64_t argument0) {
    return this->template InvokeMethod<false, 1907, void(uint64_t)>(argument0);
  }

  virtual Result ClearExemptApplicationListForDebug() {
    return this->template InvokeMethod<false, 1908, void()>();
  }

  virtual Result DeletePairing() {
    return this->template InvokeMethod<false, 1941, void()>();
  }

  virtual Result GetPlayTimerSpentTimeForTest(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1952, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result SetPlayTimerAlarmDisabledForDebug(bool argument0) {
    return this->template InvokeMethod<false, 1953, void(bool)>(argument0);
  }

  virtual Result IsBedtimeAlarmEnabledForDebug(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1954, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetBedtimeAlarmTimeForDebug(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1955, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetBedtimeAlarmTimeHourForDebug(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1956, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetBedtimeAlarmTimeMinuteForDebug(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1957, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetBedtimeAlarmResetTimeHourForDebug(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1958, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetBedtimeAlarmResetTimeMinuteForDebug(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 1959, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetExtraPlayingTimeForDebug(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 1960, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command2001(
    Out<uint64_t> argument0, Out<NativeHandle> argument1,
    const BufferArray<9, uint8_t>& argument2) {
    return this->template InvokeMethod<false, 2001, void(
      Out<uint64_t>, Out<NativeHandle>, const BufferArray<9, uint8_t>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command2002(
    Out<RawData<16, 8>> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 2002, void(
      Out<RawData<16, 8>>, uint64_t)>(argument0, argument1);
  }

  virtual Result Command2003(
    Out<uint64_t> argument0, Out<NativeHandle> argument1,
    const RawData<16, 8>& argument2) {
    return this->template InvokeMethod<false, 2003, void(
      Out<uint64_t>, Out<NativeHandle>, const RawData<16, 8>&)>(
      argument0, argument1, argument2);
  }

  virtual Result Command2004(
    Out<RawData<16, 8>> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 2004, void(
      Out<RawData<16, 8>>, uint64_t)>(argument0, argument1);
  }

  virtual Result RequestPairingAsync(
    Out<uint64_t> argument0, Out<NativeHandle> argument1) {
    return this->template InvokeMethod<false, 2005, void(
      Out<uint64_t>, Out<NativeHandle>)>(argument0, argument1);
  }

  virtual Result FinishRequestPairing(
    Out<RawData<16, 8>> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 2006, void(
      Out<RawData<16, 8>>, uint64_t)>(argument0, argument1);
  }

  virtual Result UnlinkPairingAsync(
    Out<uint64_t> argument0, Out<NativeHandle> argument1, bool argument2) {
    return this->template InvokeMethod<false, 2007, void(
      Out<uint64_t>, Out<NativeHandle>, bool)>(argument0, argument1, argument2);
  }

  virtual Result FinishUnlinkPairing(RawData<8, 4> argument0, bool argument1) {
    return this->template InvokeMethod<false, 2008, void(RawData<8, 4>, bool)>(
      argument0, argument1);
  }

  virtual Result GetAccountMiiImageAsync(
    Out<RawData<8, 4>> argument0, Out<NativeHandle> argument1,
    Out<uint32_t> argument2, const OutBuffer& argument3,
    const RawData<16, 8>& argument4) {
    return this->template InvokeMethod<false, 2009, void(
      Out<RawData<8, 4>>, Out<NativeHandle>, Out<uint32_t>, const OutBuffer&,
      const RawData<16, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result FinishGetAccountMiiImage(
    Out<uint32_t> argument0, const OutBuffer& argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 2010, void(
      Out<uint32_t>, const OutBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result GetAccountMiiImageContentTypeAsync(
    Out<RawData<8, 4>> argument0, Out<NativeHandle> argument1,
    Out<uint32_t> argument2, const BufferArray<10, uint8_t>& argument3,
    const RawData<16, 8>& argument4) {
    return this->template InvokeMethod<false, 2011, void(
      Out<RawData<8, 4>>, Out<NativeHandle>, Out<uint32_t>,
      const BufferArray<10, uint8_t>&, const RawData<16, 8>&)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result FinishGetAccountMiiImageContentType(
    Out<uint32_t> argument0, const BufferArray<10, uint8_t>& argument1,
    uint64_t argument2) {
    return this->template InvokeMethod<false, 2012, void(
      Out<uint32_t>, const BufferArray<10, uint8_t>&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result SynchronizeParentalControlSettingsAsync(
    Out<uint64_t> argument0, Out<NativeHandle> argument1) {
    return this->template InvokeMethod<false, 2013, void(
      Out<uint64_t>, Out<NativeHandle>)>(argument0, argument1);
  }

  virtual Result Command2014(uint64_t argument0) {
    return this->template InvokeMethod<false, 2014, void(uint64_t)>(argument0);
  }

  virtual Result FinishSynchronizeParentalControlSettingsWithLastUpdated(
    Out<uint64_t> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 2015, void(
      Out<uint64_t>, uint64_t)>(argument0, argument1);
  }

  virtual Result RequestUpdateExemptionListAsync(
    Out<uint64_t> argument0, Out<NativeHandle> argument1, uint64_t argument2,
    bool argument3) {
    return this->template InvokeMethod<false, 2016, void(
      Out<uint64_t>, Out<NativeHandle>, uint64_t, bool)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result Command2017(
    Out<uint64_t> argument0, Out<NativeHandle> argument1,
    const RawData<16, 8>& argument2, const RawData<16, 8>& argument3) {
    return this->template InvokeMethod<false, 2017, void(
      Out<uint64_t>, Out<NativeHandle>, const RawData<16, 8>&,
      const RawData<16, 8>&)>(argument0, argument1, argument2, argument3);
  }

  virtual Result RequestUpdateDeviceUsersBackground() {
    return this->template InvokeMethod<false, 2019, void()>();
  }

  virtual Result Command2021(
    Out<uint64_t> argument0, Out<NativeHandle> argument1) {
    return this->template InvokeMethod<false, 2021, void(
      Out<uint64_t>, Out<NativeHandle>)>(argument0, argument1);
  }

  virtual Result Command2022(
    Out<RawData<16, 8>> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 2022, void(
      Out<RawData<16, 8>>, uint64_t)>(argument0, argument1);
  }

  virtual Result Command2023(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 2023, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command2024() {
    return this->template InvokeMethod<false, 2024, void()>();
  }

  virtual Result Command2101(
    const RawData<16, 8>& argument0, const RawData<16, 4>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 2101, void(
      const RawData<16, 8>&, const RawData<16, 4>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command2102(
    const RawData<16, 8>& argument0, const RawData<16, 4>& argument1) {
    return this->template InvokeMethod<false, 2102, void(
      const RawData<16, 8>&, const RawData<16, 4>&)>(argument0, argument1);
  }

  virtual Result Command2103(
    const RawData<16, 8>& argument0, const RawData<16, 4>& argument1,
    const BufferArray<9, uint64_t>& argument2) {
    return this->template InvokeMethod<false, 2103, void(
      const RawData<16, 8>&, const RawData<16, 4>&,
      const BufferArray<9, uint64_t>&)>(argument0, argument1, argument2);
  }

  virtual Result Command2104(
    const RawData<16, 8>& argument0, const RawData<16, 4>& argument1) {
    return this->template InvokeMethod<false, 2104, void(
      const RawData<16, 8>&, const RawData<16, 4>&)>(argument0, argument1);
  }

  virtual Result Command2105(
    const RawData<16, 8>& argument0, const RawData<16, 4>& argument1) {
    return this->template InvokeMethod<false, 2105, void(
      const RawData<16, 8>&, const RawData<16, 4>&)>(argument0, argument1);
  }

  virtual Result Command2106(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 2106, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command2107(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 2107, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command2108(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 2108, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command2109(
    Out<uint32_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 2109, void(
      Out<uint32_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command2110(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 2110, void(
      const RawData<16, 8>&)>(argument0);
  }

  virtual Result Command2901(
    Out<uint64_t> argument0, Out<NativeHandle> argument1,
    const RawData<16, 8>& argument2, bool argument3, uint32_t argument4) {
    return this->template InvokeMethod<false, 2901, void(
      Out<uint64_t>, Out<NativeHandle>, const RawData<16, 8>&, bool, uint32_t)>(
      argument0, argument1, argument2, argument3, argument4);
  }

  virtual Result Command2902(uint64_t argument0) {
    return this->template InvokeMethod<false, 2902, void(uint64_t)>(argument0);
  }

  virtual Result GetErrorContextChangedEvent(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 3001, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result GetEvents(
    Out<uint32_t> argument0, const OutArray<RawData<208, 8>>& argument1,
    uint16_t argument2) {
    return this->template InvokeMethod<false, 9401, void(
      Out<uint32_t>, const OutArray<RawData<208, 8>>&, uint16_t)>(
      argument0, argument1, argument2);
  }

  virtual Result GetEventsWithJson(
    Out<uint32_t> argument0, const OutArray<RawData<208, 8>>& argument1,
    const OutBuffer& argument2) {
    return this->template InvokeMethod<false, 9402, void(
      Out<uint32_t>, const OutArray<RawData<208, 8>>&, const OutBuffer&)>(
      argument0, argument1, argument2);
  }

  virtual Result RequestPostEvents(
    Out<uint32_t> argument0, const OutArray<RawData<208, 8>>& argument1) {
    return this->template InvokeMethod<false, 9403, void(
      Out<uint32_t>, const OutArray<RawData<208, 8>>&)>(argument0, argument1);
  }

  virtual Result GetPostEventInterval(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 9404, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result SetPostEventInterval(uint32_t argument0) {
    return this->template InvokeMethod<false, 9405, void(uint32_t)>(argument0);
  }

  virtual Result GetDeviceIdForDebug(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 9406, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result GetPlayTimerSettings(Out<RawData<68, 4>> argument0) {
    return this->template InvokeMethod<false, 145601, void(
      Out<RawData<68, 4>>)>(argument0);
  }

  virtual Result SetPlayTimerSettingsForDebug(const RawData<68, 4>& argument0) {
    return this->template InvokeMethod<false, 195101, void(
      const RawData<68, 4>&)>(argument0);
  }
};

}
