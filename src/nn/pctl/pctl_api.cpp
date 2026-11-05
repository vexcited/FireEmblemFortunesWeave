#include "nn/pctl/pctl_api.hpp"

#include <string.h>

#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/err/err_show_error.hpp"
#include "nn/pctl/detail/pctl_event_holder.hpp"
#include "nn/pctl/detail/pctl_service.hpp"
#include "nn/pctl/pctl_result.hpp"

namespace nn::pctl {

namespace {

using detail::AbortIfUnexpectResultImpl;
using detail::EventHolder;
using detail::GetServiceObject;
using detail::GetServiceObjectForWatcher;

sf::InArray<char> MakeStringArray(const char* string) {
  return sf::InArray<char>(string, strlen(string) + 1);
}

}

bool CheckFreeCommunicationPermission(bool showsErrorUi) {
  Result result = GetServiceObject()->CheckFreeCommunicationPermission();

  if (showsErrorUi && ResultFreeCommunicationRestricted::Includes(result)) {
    err::ShowError(result);
    Result again = GetServiceObject()->CheckFreeCommunicationPermission();

    if (again.IsFailure() &&
      !ResultFreeCommunicationRestricted::Includes(again)) {
      diag::detail::AbortImpl(&again);
    }
  }

  return result.IsSuccess();
}

bool TryBeginFreeCommunication(bool showsErrorUi) {
  Result result = GetServiceObject()->CheckFreeCommunicationPermission();

  if (showsErrorUi && ResultFreeCommunicationRestricted::Includes(result)) {
    err::ShowError(result);
    Result again = GetServiceObject()->CheckFreeCommunicationPermission();

    if (again.IsFailure() &&
      !ResultFreeCommunicationRestricted::Includes(again)) {
      diag::detail::AbortImpl(&again);
    }
  }

  return result.IsSuccess();
}

bool IsFreeCommunicationAvailable() {
  return GetServiceObject()->IsFreeCommunicationAvailable().IsSuccess();
}

void EndFreeCommunication() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->EndFreeCommunication());
}

Result UnlockRestrictionTemporarily(const char* pinCode) {
  sf::InArray<char> array = MakeStringArray(pinCode);
  Result result = GetServiceObject()->UnlockRestriction(array);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result UnlockSystemSettingsRestriction(const char* pinCode) {
  sf::InArray<char> array = MakeStringArray(pinCode);
  Result result =
    GetServiceObject()->UnlockSystemSettingsRestriction(array, 0);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result UnlockSystemSettingsRestriction(const char* pinCode,
  RestrictedScene scene) {
  sf::InArray<char> array = MakeStringArray(pinCode);
  Result result =
    GetServiceObject()->UnlockSystemSettingsRestriction(array, scene);
  AbortIfUnexpectResultImpl(result);
  return result;
}

void SetPinCode(const char* pinCode) {
  size_t size = pinCode != nullptr ? strlen(pinCode) + 1 : 0;
  sf::InArray<char> array(pinCode, size);
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->SetPinCode(array));
}

int GetPinCodeLength() {
  int length = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetPinCodeLength(sf::Out<int>(&length)));
  return length;
}

int GetPinCode(char* pOutPinCode, int size) {
  if (size < 1) {
    return 0;
  }

  int length = 0;
  sf::OutArray<char> array(pOutPinCode, static_cast<size_t>(size));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetPinCode(sf::Out<int>(&length), array));
  return length;
}

void NotifyWrongPinCodeInputManyTimes() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->NotifyWrongPinCodeInputManyTimes());
}

void GenerateInquiryCode(InquiryCode* pOutCode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GenerateInquiryCode(sf::Out<InquiryCode>(pOutCode)));
}

bool CheckMasterKey(const InquiryCode& code, const char* masterKey) {
  sf::InArray<char> array = MakeStringArray(masterKey);
  bool isValid = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->CheckMasterKey(
    sf::Out<bool>(&isValid), code, array));
  return isValid;
}

os::SystemEvent* GetPinCodeChangedEvent() {
  static bool s_IsUnsupported = false;
  static EventHolder s_Holder;
  std::lock_guard<os::SdkMutex> lock(s_Holder.mutex);

  if (!s_IsUnsupported && !s_Holder.isInitialized) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->GetPinCodeChangedEvent(
      sf::Out<sf::NativeHandle>(&handle)));

    if (handle.GetOsHandle() != 0) {
      s_Holder.event.AttachReadableHandle(handle.GetOsHandle(),
        handle.IsManaged(), os::EventClearMode_AutoClear);
      handle.Detach();
      s_Holder.isInitialized = true;
      s_IsUnsupported = false;
    }
    else {
      s_IsUnsupported = true;
    }
  }

  return s_IsUnsupported ? nullptr : &s_Holder.event;
}

void PauseAutoProcessing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->SetAutoProcessingEnabled(false));
}

void UnpauseAutoProcessing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->SetAutoProcessingEnabled(true));
}

bool DisableAllFeatures() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->DisableAllFeatures(sf::Out<bool>(&value)));
  return value;
}

bool PostEnableAllFeatures() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->PostEnableAllFeatures(
      sf::Out<bool>(&value)));
  return value;
}

bool IsAllFeaturesDisabled(bool* pOutIsPending) {
  bool value = false;
  bool isPending = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->IsAllFeaturesDisabled(
      sf::Out<bool>(&value), sf::Out<bool>(&isPending)));

  if (pOutIsPending != nullptr) {
    *pOutIsPending = isPending;
  }

  return value;
}

int GetExemptApplicationListCount() {
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetExemptApplicationListCountForDebug(
      sf::Out<int>(&count)));
  return count;
}

int GetExemptApplicationList(ExemptApplicationInfo* pOutList, int offset,
  int count) {
  int outCount = 0;
  sf::OutArray<ExemptApplicationInfo> array(pOutList, count);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetExemptApplicationListForDebug(
      sf::Out<int>(&outCount), array, offset));
  return outCount;
}

TimeSpan GetPlayTimerSpentTimeForTest() {
  TimeSpan value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetPlayTimerSpentTimeForTest(
      sf::Out<TimeSpan>(&value)));
  return value;
}

bool IsRestrictionEnabled() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->IsRestrictionEnabled(sf::Out<bool>(&value)));
  return value;
}

SafetyLevel GetSafetyLevel() {
  int value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetSafetyLevel(sf::Out<int>(&value)));
  return static_cast<SafetyLevel>(value);
}

void GetCurrentSettings(RestrictionSettings* pOutSettings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->GetCurrentSettings(
    sf::Out<RestrictionSettings>(pOutSettings)));
}

Result ConfirmSnsPostPermission() {
  Result result = GetServiceObject()->ConfirmSnsPostPermission();
  AbortIfUnexpectResultImpl(result);
  return result;
}

bool CheckStereoVisionPermission(bool showsErrorUi) {
  bool isPermitted = false;
  Result result =
    GetServiceObject()->IsStereoVisionPermitted(sf::Out<bool>(&isPermitted));

  if (result.IsSuccess()) {
    return isPermitted;
  }

  AbortIfUnexpectResultImpl(result);

  if (!showsErrorUi) {
    return false;
  }

  err::ShowError(result);
  bool again = false;
  result = GetServiceObject()->IsStereoVisionPermitted(sf::Out<bool>(&again));

  if (result.IsFailure()) {
    AbortIfUnexpectResultImpl(result);
    return false;
  }

  return again;
}

bool GetStereoVisionRestriction() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetStereoVisionRestriction(sf::Out<bool>(&value)));
  return value;
}

void SetStereoVisionRestriction(bool isRestricted) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->SetStereoVisionRestriction(isRestricted));
}

Result ConfirmLaunchApplicationPermission(ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property) {
  sf::InArray<int8_t> ratingAge(property.ratingAge, 32);
  Result result = GetServiceObject()->ConfirmLaunchApplicationPermission(
    applicationId, property.parentalControlOption, ratingAge,
    property.parentalControlFlag & 1);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result ConfirmResumeApplicationPermission(ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property) {
  sf::InArray<int8_t> ratingAge(property.ratingAge, 32);
  Result result = GetServiceObject()->ConfirmResumeApplicationPermission(
    applicationId, ratingAge, property.parentalControlFlag & 1);
  AbortIfUnexpectResultImpl(result);
  return result;
}

void RevertRestrictionTemporaryUnlocked() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->RevertRestrictionTemporaryUnlocked());
}

void EnterRestrictedSystemSettings() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->EnterRestrictedSystemSettings());
}

void LeaveRestrictedSystemSettings() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->LeaveRestrictedSystemSettings());
}

void RevertRestrictedSystemSettingsEntered() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->RevertRestrictedSystemSettingsEntered());
}

void SetSafetyLevel(SafetyLevel level) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->SetSafetyLevel(level));
}

void GetSafetyLevelSettings(RestrictionSettings* pOutSettings,
  SafetyLevel level) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->GetSafetyLevelSettings(
    sf::Out<RestrictionSettings>(pOutSettings), level));
}

void SetCustomSafetyLevelSettings(const RestrictionSettings& settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->SetCustomSafetyLevelSettings(settings));
}

ns::RatingOrganization GetDefaultRatingOrganization() {
  int value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetDefaultRatingOrganization(sf::Out<int>(&value)));
  return static_cast<ns::RatingOrganization>(value);
}

void SetDefaultRatingOrganization(ns::RatingOrganization organization) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->SetDefaultRatingOrganization(organization));
}

void DeleteSettings() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->DeleteSettings());
}

void DisableFeaturesForReset() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->DisableFeaturesForReset());
}

int GetFreeCommunicationApplicationListCount() {
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetFreeCommunicationApplicationListCount(
      sf::Out<int>(&count)));
  return count;
}

int GetFreeCommunicationApplicationList(
  FreeCommunicationApplicationInfo* pOutList, int offset, int count) {
  int outCount = 0;
  sf::OutArray<FreeCommunicationApplicationInfo> array(pOutList, count);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetFreeCommunicationApplicationList(
      sf::Out<int>(&outCount), array, offset));
  return outCount;
}

void UpdateFreeCommunicationApplicationList(
  const FreeCommunicationApplicationInfo* list, int count) {
  sf::InArray<FreeCommunicationApplicationInfo> array(list, count);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->UpdateFreeCommunicationApplicationList(array));
}

void AddToFreeCommunicationApplicationList(ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property) {
  if (property.parentalControlFlag & 1) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetServiceObject()->AddToFreeCommunicationApplicationList(
        applicationId, property.parentalControlOption));
  }
}

void NotifyApplicationDownloadStarted(ncm::ApplicationId applicationId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->NotifyApplicationDownloadStarted(applicationId, 0));
}

void NotifyApplicationDownloadStarted(ncm::ApplicationId applicationId,
  uint8_t option) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->NotifyApplicationDownloadStarted(applicationId,
      option));
}

void NotifyNetworkProfileCreated() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->NotifyNetworkProfileCreated());
}

void ResetFreeCommunicationApplicationList() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->ResetFreeCommunicationApplicationList());
}

void DeleteFromFreeCommunicationApplicationListForDebug(
  ncm::ApplicationId applicationId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->DeleteFromFreeCommunicationApplicationListForDebug(
      applicationId));
}

void ClearFreeCommunicationApplicationListForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->ClearFreeCommunicationApplicationListForDebug());
}

int GetExemptApplicationListCountForDebug() {
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetExemptApplicationListCountForDebug(
      sf::Out<int>(&count)));
  return count;
}

int GetExemptApplicationListForDebug(ExemptApplicationInfo* pOutList,
  int offset, int count) {
  int outCount = 0;
  sf::OutArray<ExemptApplicationInfo> array(pOutList, count);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetExemptApplicationListForDebug(
      sf::Out<int>(&outCount), array, offset));
  return outCount;
}

void UpdateExemptApplicationListForDebug(const ExemptApplicationInfo* list,
  int count) {
  sf::InArray<ExemptApplicationInfo> array(list, count);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->UpdateExemptApplicationListForDebug(array));
}

void AddToExemptApplicationListForDebug(ncm::ApplicationId applicationId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->AddToExemptApplicationListForDebug(applicationId));
}

void DeleteFromExemptApplicationListForDebug(
  ncm::ApplicationId applicationId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->DeleteFromExemptApplicationListForDebug(
      applicationId));
}

void ClearExemptApplicationListForDebug() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->ClearExemptApplicationListForDebug());
}

Result ConfirmLaunchSharedApplicationPermission(
  ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property) {
  sf::InArray<int8_t> ratingAge(property.ratingAge, 32);
  Result result =
    GetServiceObject()->ConfirmLaunchSharedApplicationPermission(
      applicationId, property.parentalControlOption, ratingAge,
      property.parentalControlFlag & 1, false);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result ConfirmLaunchSharedApplicationPermission(
  ncm::ApplicationId applicationId,
  const ns::ApplicationControlProperty& property, bool isShared) {
  sf::InArray<int8_t> ratingAge(property.ratingAge, 32);
  Result result =
    GetServiceObject()->ConfirmLaunchSharedApplicationPermission(
      applicationId, property.parentalControlOption, ratingAge,
      property.parentalControlFlag & 1, isShared);
  AbortIfUnexpectResultImpl(result);
  return result;
}

bool TryBeginFreeCommunicationForStreamPlay(bool showsErrorUi) {
  Result result =
    GetServiceObject()->TryBeginFreeCommunicationForStreamPlay();
  AbortIfUnexpectResultImpl(result);

  if (showsErrorUi && ResultFreeCommunicationRestricted::Includes(result)) {
    err::ShowError(result);
    result = GetServiceObject()->TryBeginFreeCommunicationForStreamPlay();
    AbortIfUnexpectResultImpl(result);
  }

  return result.IsSuccess();
}

void EndFreeCommunicationForStreamPlay() {
  Result result = GetServiceObject()->EndFreeCommunicationForStreamPlay();
  AbortIfUnexpectResultImpl(result);
}

Result ConfirmSystemSettingsPermission() {
  Result result = GetServiceObject()->ConfirmSystemSettingsPermission();
  AbortIfUnexpectResultImpl(result);
  return result;
}

bool IsRestrictionTemporaryUnlocked() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->IsRestrictionTemporaryUnlocked(
      sf::Out<bool>(&value)));
  return value;
}

bool IsRestrictedSystemSettingsEntered() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->IsRestrictedSystemSettingsEntered(
      sf::Out<bool>(&value)));
  return value;
}

int GetRestrictedFeatures() {
  int value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->GetRestrictedFeatures(sf::Out<int>(&value)));
  return value;
}

Result ConfirmPlayableApplicationVideo(ncm::ApplicationId applicationId,
  const int8_t (&ratingAge)[32]) {
  int8_t copy[32];
  memcpy(copy, ratingAge, sizeof(copy));
  sf::InArray<int8_t> array(copy, 32);
  Result result =
    GetServiceObject()->ConfirmPlayableApplicationVideo(applicationId, array);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result ConfirmShowNewsPermission(const int8_t (&ratingAge)[32]) {
  int8_t copy[32];
  memcpy(copy, ratingAge, sizeof(copy));
  sf::InArray<int8_t> array(copy, 32);
  Result result = GetServiceObject()->ConfirmShowNewsPermission(array);
  AbortIfUnexpectResultImpl(result);
  return result;
}

}
