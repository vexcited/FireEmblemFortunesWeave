#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/ncm/ncm_ids.hpp"
#include "nn/ns/ns_application_control_property.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/os/time.hpp"
#include "nn/pctl/pctl_types.hpp"
#include "nn/result.hpp"
#include "nn/time/time_types.hpp"

namespace nn::pctl {

bool CheckFreeCommunicationPermission(bool showsErrorUi);
bool TryBeginFreeCommunication(bool showsErrorUi);
bool IsFreeCommunicationAvailable();
void EndFreeCommunication();
Result UnlockRestrictionTemporarily(const char* pinCode);
Result UnlockSystemSettingsRestriction(const char* pinCode);
Result UnlockSystemSettingsRestriction(const char* pinCode,
  RestrictedScene scene);
void SetPinCode(const char* pinCode);
int GetPinCodeLength();
int GetPinCode(char* pOutPinCode, int size);
void NotifyWrongPinCodeInputManyTimes();
void GenerateInquiryCode(InquiryCode* pOutCode);
bool CheckMasterKey(const InquiryCode& code, const char* masterKey);
os::SystemEvent* GetPinCodeChangedEvent();
os::SystemEvent* GetErrorContextChangedEvent();
void PauseAutoProcessing();
void UnpauseAutoProcessing();
bool DisableAllFeatures();
bool PostEnableAllFeatures();
bool IsAllFeaturesDisabled(bool* pOutIsPending);
int GetExemptApplicationListCount();
int GetExemptApplicationList(ExemptApplicationInfo* pOutList, int offset,
  int count);
TimeSpan GetPlayTimerSpentTimeForTest();
bool IsRestrictionEnabled();
SafetyLevel GetSafetyLevel();
void GetCurrentSettings(RestrictionSettings* pOutSettings);
Result ConfirmSnsPostPermission();
bool CheckStereoVisionPermission(bool showsErrorUi);
bool GetStereoVisionRestriction();
void SetStereoVisionRestriction(bool isRestricted);
Result ConfirmLaunchApplicationPermission(ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property);
Result ConfirmResumeApplicationPermission(ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property);
void RevertRestrictionTemporaryUnlocked();
void EnterRestrictedSystemSettings();
void LeaveRestrictedSystemSettings();
void RevertRestrictedSystemSettingsEntered();
void SetSafetyLevel(SafetyLevel level);
void GetSafetyLevelSettings(RestrictionSettings* pOutSettings,
  SafetyLevel level);
void SetCustomSafetyLevelSettings(const RestrictionSettings& settings);
ns::RatingOrganization GetDefaultRatingOrganization();
void SetDefaultRatingOrganization(ns::RatingOrganization organization);
void DeleteSettings();
void DisableFeaturesForReset();
int GetFreeCommunicationApplicationListCount();
int GetFreeCommunicationApplicationList(
  FreeCommunicationApplicationInfo* pOutList, int offset, int count);
void UpdateFreeCommunicationApplicationList(
  const FreeCommunicationApplicationInfo* list, int count);
void AddToFreeCommunicationApplicationList(ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property);
void NotifyApplicationDownloadStarted(ncm::ApplicationId applicationId);
void NotifyApplicationDownloadStarted(ncm::ApplicationId applicationId,
  uint8_t option);
void NotifyNetworkProfileCreated();
void ResetFreeCommunicationApplicationList();
void DeleteFromFreeCommunicationApplicationListForDebug(
  ncm::ApplicationId applicationId);
void ClearFreeCommunicationApplicationListForDebug();
int GetExemptApplicationListCountForDebug();
int GetExemptApplicationListForDebug(ExemptApplicationInfo* pOutList,
  int offset, int count);
void UpdateExemptApplicationListForDebug(const ExemptApplicationInfo* list,
  int count);
void AddToExemptApplicationListForDebug(ncm::ApplicationId applicationId);
void DeleteFromExemptApplicationListForDebug(
  ncm::ApplicationId applicationId);
void ClearExemptApplicationListForDebug();
Result ConfirmLaunchSharedApplicationPermission(
  ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property);
Result ConfirmLaunchSharedApplicationPermission(
  ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property, bool isShared);
bool TryBeginFreeCommunicationForStreamPlay(bool showsErrorUi);
void EndFreeCommunicationForStreamPlay();
Result ConfirmSystemSettingsPermission();
bool IsRestrictionTemporaryUnlocked();
bool IsRestrictedSystemSettingsEntered();
int GetRestrictedFeatures();
Result ConfirmPlayableApplicationVideo(ncm::ApplicationId applicationId,
  const int8_t (&ratingAge)[32]);
Result ConfirmShowNewsPermission(const int8_t (&ratingAge)[32]);

bool IsPlayTimerEnabled();
TimeSpan GetPlayTimerRemainingTime();
void GetPlayTimerRemainingTimeDisplayInfo(
  PlayTimerRemainingTimeDisplayInfo* pOutInfo);
bool IsBedtimeAlarmEnabledForDebug();
int64_t GetBedtimeAlarmTimeForDebug();
uint8_t GetBedtimeAlarmTimeHourForDebug();
uint8_t GetBedtimeAlarmTimeMinuteForDebug();
uint8_t GetBedtimeAlarmResetTimeHourForDebug();
uint8_t GetBedtimeAlarmResetTimeMinuteForDebug();
TimeSpan GetExtraPlayingTimeForDebug();
Result GetDeviceIdForDebug(uint64_t& outDeviceId);
bool IsPairingActive();
bool GetSettingsLastUpdated(time::PosixTime* pOutTime);
Result RetrievePairingInfo(PairingInfo* pOutInfo);
Result UnlinkPairing(bool force);
void DeletePairing();
Result SynchronizeParentalControlSettings(time::PosixTime* pOutLastUpdated);
Result RequestUpdateExemptionList(ncm::ApplicationId applicationId);
Result GetEvents(int* pOutCount,
  detail::service::watcher::EventData* pOutEvents, int count,
  uint16_t version);
Result GetEventsWithJson(int* pOutCount,
  detail::service::watcher::EventData* pOutEvents, char* pOutJson, int count,
  size_t jsonSize);
Result RequestPostEvents(int* pOutCount,
  detail::service::watcher::EventData* events, int count);
int GetPostEventInterval();
void SetPostEventInterval(int interval);
os::SystemEvent* GetSynchronizationEvent();
os::SystemEvent* GetUnlinkedEvent();
void ClearUnlinkedEvent();
os::SystemEvent* GetExtendedPlayTimerEvent();
void StartPlayTimer();
void StopPlayTimer();
bool IsRestrictedByPlayTimer();
void GetPlayTimerSettings(PlayTimerSettingsVer3* pOutSettings);
os::SystemEvent* GetPlayTimerEventToRequestSuspension();
bool IsPlayTimerAlarmDisabled();
void SetPlayTimerSettingsForDebug(const PlayTimerSettingsVer3& settings);
void SetPlayTimerAlarmDisabledForDebug(bool isDisabled);
void CancelNetworkRequest();
void RequestUpdateDeviceUsersBackground();

}
