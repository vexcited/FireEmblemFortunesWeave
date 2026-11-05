#pragma once

#include "nn/ncm/ncm_ids.hpp"
#include "nn/os/time.hpp"
#include "nn/pctl/initialization.hpp"
#include "nn/pctl/pctl_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"

namespace nn::pctl::detail {

class IParentalControlService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Initialize() = 0;
  virtual Result CheckFreeCommunicationPermission() = 0;
  virtual void Reserved6() = 0;
  virtual Result ConfirmResumeApplicationPermission(
    ncm::ApplicationId applicationId, const sf::InArray<int8_t>& ratingAge,
    bool freeCommunicationRestricted) = 0;
  virtual Result ConfirmSnsPostPermission() = 0;
  virtual Result ConfirmSystemSettingsPermission() = 0;
  virtual Result IsRestrictionTemporaryUnlocked(sf::Out<bool> pOutValue) = 0;
  virtual Result RevertRestrictionTemporaryUnlocked() = 0;
  virtual Result EnterRestrictedSystemSettings() = 0;
  virtual Result LeaveRestrictedSystemSettings() = 0;
  virtual Result IsRestrictedSystemSettingsEntered(sf::Out<bool> pOutValue) = 0;
  virtual Result RevertRestrictedSystemSettingsEntered() = 0;
  virtual Result GetRestrictedFeatures(sf::Out<int> pOutValue) = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual Result ConfirmPlayableApplicationVideo(
    ncm::ApplicationId applicationId, const sf::InArray<int8_t>& ratingAge) = 0;
  virtual Result ConfirmShowNewsPermission(
    const sf::InArray<int8_t>& ratingAge) = 0;
  virtual Result EndFreeCommunication() = 0;
  virtual Result IsFreeCommunicationAvailable() = 0;
  virtual Result ConfirmLaunchApplicationPermission(
    ncm::ApplicationId applicationId, uint8_t option,
    const sf::InArray<int8_t>& ratingAge, bool freeCommunicationRestricted) = 0;
  virtual Result ConfirmLaunchSharedApplicationPermission(
    ncm::ApplicationId applicationId, uint8_t option,
    const sf::InArray<int8_t>& ratingAge, bool freeCommunicationRestricted,
    bool isShared) = 0;
  virtual Result TryBeginFreeCommunicationForStreamPlay() = 0;
  virtual Result EndFreeCommunicationForStreamPlay() = 0;
  virtual Result IsRestrictionEnabled(sf::Out<bool> pOutValue) = 0;
  virtual Result GetSafetyLevel(sf::Out<int> pOutValue) = 0;
  virtual Result SetSafetyLevel(int level) = 0;
  virtual Result GetSafetyLevelSettings(sf::Out<RestrictionSettings> pOutValue,
    int level) = 0;
  virtual Result GetCurrentSettings(sf::Out<RestrictionSettings> pOutValue) = 0;
  virtual Result SetCustomSafetyLevelSettings(RestrictionSettings settings) = 0;
  virtual Result GetDefaultRatingOrganization(sf::Out<int> pOutValue) = 0;
  virtual Result SetDefaultRatingOrganization(int organization) = 0;
  virtual Result GetFreeCommunicationApplicationListCount(
    sf::Out<int> pOutCount) = 0;
  virtual void Reserved36() = 0;
  virtual Result DeleteSettings() = 0;
  virtual Result GetFreeCommunicationApplicationList(sf::Out<int> pOutCount,
    const sf::OutArray<FreeCommunicationApplicationInfo>& outList,
    int offset) = 0;
  virtual Result UpdateFreeCommunicationApplicationList(
    const sf::InArray<FreeCommunicationApplicationInfo>& list) = 0;
  virtual Result DisableFeaturesForReset() = 0;
  virtual void Reserved41() = 0;
  virtual Result NotifyNetworkProfileCreated() = 0;
  virtual Result ResetFreeCommunicationApplicationList() = 0;
  virtual Result AddToFreeCommunicationApplicationList(
    ncm::ApplicationId applicationId, uint8_t option) = 0;
  virtual Result NotifyApplicationDownloadStarted(
    ncm::ApplicationId applicationId, uint8_t option) = 0;
  virtual void Reserved46() = 0;
  virtual Result GetStereoVisionRestriction(sf::Out<bool> pOutValue) = 0;
  virtual Result SetStereoVisionRestriction(bool value) = 0;
  virtual void Reserved49() = 0;
  virtual Result IsStereoVisionPermitted(sf::Out<bool> pOutValue) = 0;
  virtual void Reserved51() = 0;
  virtual void Reserved52() = 0;
  virtual void Reserved53() = 0;
  virtual Result UnlockRestriction(const sf::InArray<char>& pinCode) = 0;
  virtual void Reserved55() = 0;
  virtual Result SetPinCode(const sf::InArray<char>& pinCode) = 0;
  virtual Result GenerateInquiryCode(sf::Out<InquiryCode> pOutCode) = 0;
  virtual Result CheckMasterKey(sf::Out<bool> pOutValue,
    const InquiryCode& code, const sf::InArray<char>& masterKey) = 0;
  virtual Result GetPinCodeLength(sf::Out<int> pOutLength) = 0;
  virtual Result GetPinCodeChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetPinCode(sf::Out<int> pOutLength,
    const sf::OutArray<char>& outPinCode) = 0;
  virtual Result UnlockSystemSettingsRestriction(
    const sf::InArray<char>& pinCode, int scene) = 0;
  virtual Result IsPairingActive(sf::Out<bool> pOutValue) = 0;
  virtual Result GetSettingsLastUpdated(sf::Out<time::PosixTime> pOutValue) = 0;
  virtual Result GetPairingAccountInfo(sf::Out<PairingAccountInfoBase> pOutInfo,
    const PairingInfoBase& info) = 0;
  virtual Result GetAccountNickname(sf::Out<uint32_t> pOutSize,
    const sf::OutArray<char>& outNickname,
    const PairingAccountInfoBase& info) = 0;
  virtual Result GetAccountState(sf::Out<int> pOutState,
    const PairingAccountInfoBase& info) = 0;
  virtual Result GetSynchronizationEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result StartPlayTimer() = 0;
  virtual Result StopPlayTimer() = 0;
  virtual Result IsPlayTimerEnabled(sf::Out<bool> pOutValue) = 0;
  virtual Result GetPlayTimerRemainingTime(sf::Out<TimeSpan> pOutValue) = 0;
  virtual Result IsRestrictedByPlayTimer(sf::Out<bool> pOutValue) = 0;
  virtual Result GetPlayTimerEventToRequestSuspension(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result IsPlayTimerAlarmDisabled(sf::Out<bool> pOutValue) = 0;
  virtual Result GetPlayTimerRemainingTimeDisplayInfo(
    sf::Out<PlayTimerRemainingTimeDisplayInfo> pOutInfo) = 0;
  virtual Result NotifyWrongPinCodeInputManyTimes() = 0;
  virtual Result CancelNetworkRequest() = 0;
  virtual Result GetUnlinkedEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result ClearUnlinkedEvent() = 0;
  virtual Result GetExtendedPlayTimerEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result SetAutoProcessingEnabled(bool enabled) = 0;
  virtual Result DisableAllFeatures(sf::Out<bool> pOutValue) = 0;
  virtual Result PostEnableAllFeatures(sf::Out<bool> pOutValue) = 0;
  virtual Result IsAllFeaturesDisabled(sf::Out<bool> pOutValue,
    sf::Out<bool> pOutIsPending) = 0;
  virtual Result DeleteFromFreeCommunicationApplicationListForDebug(
    ncm::ApplicationId applicationId) = 0;
  virtual Result ClearFreeCommunicationApplicationListForDebug() = 0;
  virtual Result GetExemptApplicationListCountForDebug(
    sf::Out<int> pOutCount) = 0;
  virtual Result GetExemptApplicationListForDebug(sf::Out<int> pOutCount,
    const sf::OutArray<ExemptApplicationInfo>& outList, int offset) = 0;
  virtual Result UpdateExemptApplicationListForDebug(
    const sf::InArray<ExemptApplicationInfo>& list) = 0;
  virtual Result AddToExemptApplicationListForDebug(
    ncm::ApplicationId applicationId) = 0;
  virtual Result DeleteFromExemptApplicationListForDebug(
    ncm::ApplicationId applicationId) = 0;
  virtual Result ClearExemptApplicationListForDebug() = 0;
  virtual Result DeletePairing() = 0;
  virtual Result GetPlayTimerSpentTimeForTest(sf::Out<TimeSpan> pOutValue) = 0;
  virtual Result SetPlayTimerAlarmDisabledForDebug(bool value) = 0;
  virtual Result IsBedtimeAlarmEnabledForDebug(sf::Out<bool> pOutValue) = 0;
  virtual Result GetBedtimeAlarmTimeForDebug(sf::Out<int64_t> pOutValue) = 0;
  virtual Result GetBedtimeAlarmTimeHourForDebug(
    sf::Out<uint8_t> pOutValue) = 0;
  virtual Result GetBedtimeAlarmTimeMinuteForDebug(
    sf::Out<uint8_t> pOutValue) = 0;
  virtual Result GetBedtimeAlarmResetTimeHourForDebug(
    sf::Out<uint8_t> pOutValue) = 0;
  virtual Result GetBedtimeAlarmResetTimeMinuteForDebug(
    sf::Out<uint8_t> pOutValue) = 0;
  virtual Result GetExtraPlayingTimeForDebug(sf::Out<TimeSpan> pOutValue) = 0;
  virtual void Reserved104() = 0;
  virtual void Reserved105() = 0;
  virtual void Reserved106() = 0;
  virtual void Reserved107() = 0;
  virtual Result RequestPairingAsync(sf::Out<AsyncData> pOutData,
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result FinishRequestPairing(sf::Out<PairingInfoBase> pOutInfo,
    AsyncData data) = 0;
  virtual Result UnlinkPairingAsync(sf::Out<AsyncData> pOutData,
    sf::Out<sf::NativeHandle> pOutHandle, bool force) = 0;
  virtual Result FinishUnlinkPairing(AsyncData data, bool force) = 0;
  virtual Result GetAccountMiiImageAsync(sf::Out<AsyncData> pOutData,
    sf::Out<sf::NativeHandle> pOutHandle, sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage, const PairingAccountInfoBase& info) = 0;
  virtual Result FinishGetAccountMiiImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& outImage, AsyncData data) = 0;
  virtual Result GetAccountMiiImageContentTypeAsync(sf::Out<AsyncData> pOutData,
    sf::Out<sf::NativeHandle> pOutHandle, sf::Out<uint32_t> pOutSize,
    const sf::OutArray<char>& outContentType,
    const PairingAccountInfoBase& info) = 0;
  virtual Result FinishGetAccountMiiImageContentType(sf::Out<uint32_t> pOutSize,
    const sf::OutArray<char>& outContentType, AsyncData data) = 0;
  virtual Result SynchronizeParentalControlSettingsAsync(
    sf::Out<AsyncData> pOutData, sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual void Reserved117() = 0;
  virtual Result FinishSynchronizeParentalControlSettingsWithLastUpdated(
    sf::Out<time::PosixTime> pOutValue, AsyncData data) = 0;
  virtual Result RequestUpdateExemptionListAsync(sf::Out<AsyncData> pOutData,
    sf::Out<sf::NativeHandle> pOutHandle, ncm::ApplicationId applicationId,
    bool isExempt) = 0;
  virtual void Reserved120() = 0;
  virtual Result RequestUpdateDeviceUsersBackground() = 0;
  virtual void Reserved122() = 0;
  virtual void Reserved123() = 0;
  virtual void Reserved124() = 0;
  virtual void Reserved125() = 0;
  virtual void Reserved126() = 0;
  virtual void Reserved127() = 0;
  virtual void Reserved128() = 0;
  virtual void Reserved129() = 0;
  virtual void Reserved130() = 0;
  virtual void Reserved131() = 0;
  virtual void Reserved132() = 0;
  virtual void Reserved133() = 0;
  virtual void Reserved134() = 0;
  virtual void Reserved135() = 0;
  virtual void Reserved136() = 0;
  virtual void Reserved137() = 0;
  virtual Result GetErrorContextChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetEvents(sf::Out<int> pOutCount,
    const sf::OutArray<detail::service::watcher::EventData>& outEvents,
    uint16_t version) = 0;
  virtual Result GetEventsWithJson(sf::Out<int> pOutCount,
    const sf::OutArray<detail::service::watcher::EventData>& outEvents,
    const sf::OutBuffer& outJson) = 0;
  virtual Result RequestPostEvents(sf::Out<int> pOutCount,
    const sf::InArray<detail::service::watcher::EventData>& events) = 0;
  virtual Result GetPostEventInterval(sf::Out<int> pOutValue) = 0;
  virtual Result SetPostEventInterval(int value) = 0;
  virtual Result GetDeviceIdForDebug(sf::Out<uint64_t> pOutValue) = 0;
  virtual Result GetPlayTimerSettings(
    sf::Out<PlayTimerSettingsVer3> pOutSettings) = 0;
  virtual Result SetPlayTimerSettingsForDebug(
    const PlayTimerSettingsVer3& settings) = 0;
};

inline IParentalControlService* GetServiceObject() {
  return reinterpret_cast<IParentalControlService*>(ipc::GetService());
}

inline IParentalControlService* GetServiceObjectForWatcher() {
  return reinterpret_cast<IParentalControlService*>(
    ipc::GetServiceForWatcher());
}

}
