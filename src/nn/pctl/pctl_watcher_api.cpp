#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/nifm_client_id.hpp"
#include "nn/os/system_event.hpp"
#include "nn/pctl/detail/pctl_event_holder.hpp"
#include "nn/pctl/detail/pctl_service.hpp"
#include "nn/pctl/pctl_api.hpp"
#include "nn/pctl/pctl_result.hpp"

namespace nn::pctl {

namespace {

using detail::AbortIfUnexpectResultImpl;
using detail::AsyncData;
using detail::EventHolder;
using detail::GetServiceObjectForWatcher;
using detail::service::watcher::EventData;

bool IsInternetAvailable() {
  return nifm::IsAnyInternetRequestAccepted(nifm::GetClientId());
}

void WaitAsyncEvent(sf::NativeHandle& handle) {
  os::SystemEventType event;
  os::AttachReadableHandleToSystemEvent(&event, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_ManualClear);
  handle.Detach();
  os::WaitSystemEvent(&event);
  os::DestroySystemEvent(&event);
}

}

bool IsPlayTimerEnabled() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->IsPlayTimerEnabled(sf::Out<bool>(&value)));
  return value;
}

TimeSpan GetPlayTimerRemainingTime() {
  TimeSpan value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetPlayTimerRemainingTime(
      sf::Out<TimeSpan>(&value)));
  return value;
}

void GetPlayTimerRemainingTimeDisplayInfo(
  PlayTimerRemainingTimeDisplayInfo* pOutInfo) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetPlayTimerRemainingTimeDisplayInfo(
      sf::Out<PlayTimerRemainingTimeDisplayInfo>(pOutInfo)));
}

bool IsBedtimeAlarmEnabledForDebug() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->IsBedtimeAlarmEnabledForDebug(
      sf::Out<bool>(&value)));
  return value;
}

int64_t GetBedtimeAlarmTimeForDebug() {
  int64_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetBedtimeAlarmTimeForDebug(
      sf::Out<int64_t>(&value)));
  return value;
}

uint8_t GetBedtimeAlarmTimeHourForDebug() {
  uint8_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetBedtimeAlarmTimeHourForDebug(
      sf::Out<uint8_t>(&value)));
  return value;
}

uint8_t GetBedtimeAlarmTimeMinuteForDebug() {
  uint8_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetBedtimeAlarmTimeMinuteForDebug(
      sf::Out<uint8_t>(&value)));
  return value;
}

uint8_t GetBedtimeAlarmResetTimeHourForDebug() {
  uint8_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetBedtimeAlarmResetTimeHourForDebug(
      sf::Out<uint8_t>(&value)));
  return value;
}

uint8_t GetBedtimeAlarmResetTimeMinuteForDebug() {
  uint8_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetBedtimeAlarmResetTimeMinuteForDebug(
      sf::Out<uint8_t>(&value)));
  return value;
}

TimeSpan GetExtraPlayingTimeForDebug() {
  TimeSpan value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetExtraPlayingTimeForDebug(
      sf::Out<TimeSpan>(&value)));
  return value;
}

Result GetDeviceIdForDebug(uint64_t& outDeviceId) {
  Result result = GetServiceObjectForWatcher()->GetDeviceIdForDebug(
    sf::Out<uint64_t>(&outDeviceId));
  AbortIfUnexpectResultImpl(result);
  return result;
}

bool IsPairingActive() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->IsPairingActive(sf::Out<bool>(&value)));
  return value;
}

bool GetSettingsLastUpdated(time::PosixTime* pOutTime) {
  Result result = GetServiceObjectForWatcher()->GetSettingsLastUpdated(
    sf::Out<time::PosixTime>(pOutTime));
  AbortIfUnexpectResultImpl(result);

  if (ResultPairingNotActive::Includes(result)) {
    return false;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return true;
}

Result RetrievePairingInfo(PairingInfo* pOutInfo) {
  if (!IsInternetAvailable()) {
    return ResultInternetRequestNotAccepted::Make();
  }

  sf::NativeHandle handle;
  AsyncData data = {};
  Result result = GetServiceObjectForWatcher()->RequestPairingAsync(
    sf::Out<AsyncData>(&data), sf::Out<sf::NativeHandle>(&handle));
  AbortIfUnexpectResultImpl(result);

  if (result.IsSuccess()) {
    if (handle.GetOsHandle() != 0) {
      WaitAsyncEvent(handle);
      result = GetServiceObjectForWatcher()->FinishRequestPairing(
        sf::Out<detail::PairingInfoBase>(&pOutInfo->m_Info), data);
      AbortIfUnexpectResultImpl(result);
    }
    else {
      result = Result{0};
      pOutInfo->m_Info.id = 0;
      pOutInfo->m_Info.state = 0;
    }
  }

  return result;
}

Result UnlinkPairing(bool force) {
  if (!IsInternetAvailable()) {
    return ResultInternetRequestNotAccepted::Make();
  }

  sf::NativeHandle handle;
  AsyncData data = {};
  Result result = GetServiceObjectForWatcher()->UnlinkPairingAsync(
    sf::Out<AsyncData>(&data), sf::Out<sf::NativeHandle>(&handle), force);
  AbortIfUnexpectResultImpl(result);

  if (result.IsSuccess()) {
    if (handle.GetOsHandle() != 0) {
      WaitAsyncEvent(handle);
      result = GetServiceObjectForWatcher()->FinishUnlinkPairing(data, force);
      AbortIfUnexpectResultImpl(result);
    }
    else {
      result = Result{0};
    }
  }

  return result;
}

void DeletePairing() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->DeletePairing());
}

Result SynchronizeParentalControlSettings(time::PosixTime* pOutLastUpdated) {
  if (!IsInternetAvailable()) {
    return ResultInternetRequestNotAccepted::Make();
  }

  sf::NativeHandle handle;
  AsyncData data = {};
  Result result =
    GetServiceObjectForWatcher()->SynchronizeParentalControlSettingsAsync(
      sf::Out<AsyncData>(&data), sf::Out<sf::NativeHandle>(&handle));
  AbortIfUnexpectResultImpl(result);

  if (result.IsSuccess()) {
    if (handle.GetOsHandle() != 0) {
      WaitAsyncEvent(handle);
      time::PosixTime lastUpdated = {};
      result = GetServiceObjectForWatcher()
        ->FinishSynchronizeParentalControlSettingsWithLastUpdated(
          sf::Out<time::PosixTime>(&lastUpdated), data);
      AbortIfUnexpectResultImpl(result);

      if (pOutLastUpdated != nullptr && result.IsSuccess()) {
        *pOutLastUpdated = lastUpdated;
      }
    }
    else {
      result = Result{0};
    }
  }

  return result;
}

Result RequestUpdateExemptionList(ncm::ApplicationId applicationId) {
  if (!IsInternetAvailable()) {
    return ResultInternetRequestNotAccepted::Make();
  }

  AsyncData data = {};
  sf::NativeHandle handle;
  Result result =
    GetServiceObjectForWatcher()->RequestUpdateExemptionListAsync(
      sf::Out<AsyncData>(&data), sf::Out<sf::NativeHandle>(&handle),
      applicationId, true);
  AbortIfUnexpectResultImpl(result);

  if (result.IsSuccess()) {
    if (handle.GetOsHandle() != 0) {
      WaitAsyncEvent(handle);
      time::PosixTime lastUpdated = {};
      result = GetServiceObjectForWatcher()
        ->FinishSynchronizeParentalControlSettingsWithLastUpdated(
          sf::Out<time::PosixTime>(&lastUpdated), data);
      AbortIfUnexpectResultImpl(result);
    }
    else {
      result = Result{0};
    }
  }

  return result;
}

Result GetEvents(int* pOutCount, EventData* pOutEvents, int count,
  uint16_t version) {
  sf::OutArray<EventData> array(pOutEvents, count);
  Result result = GetServiceObjectForWatcher()->GetEvents(
    sf::Out<int>(pOutCount), array, version);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result GetEventsWithJson(int* pOutCount, EventData* pOutEvents,
  char* pOutJson, int count, size_t jsonSize) {
  sf::OutBuffer json(pOutJson, jsonSize);
  sf::OutArray<EventData> array(pOutEvents, count);
  Result result = GetServiceObjectForWatcher()->GetEventsWithJson(
    sf::Out<int>(pOutCount), array, json);
  AbortIfUnexpectResultImpl(result);
  return result;
}

Result RequestPostEvents(int* pOutCount, EventData* events, int count) {
  if (!IsInternetAvailable()) {
    return ResultInternetRequestNotAccepted::Make();
  }

  sf::InArray<EventData> array(events, count);
  Result result = GetServiceObjectForWatcher()->RequestPostEvents(
    sf::Out<int>(pOutCount), array);
  AbortIfUnexpectResultImpl(result);
  return result;
}

int GetPostEventInterval() {
  int interval = 0;
  Result result = GetServiceObjectForWatcher()->GetPostEventInterval(
    sf::Out<int>(&interval));
  AbortIfUnexpectResultImpl(result);
  return interval;
}

void SetPostEventInterval(int interval) {
  Result result =
    GetServiceObjectForWatcher()->SetPostEventInterval(interval);
  AbortIfUnexpectResultImpl(result);
}

os::SystemEvent* GetSynchronizationEvent() {
  static EventHolder s_Holder;
  std::lock_guard<os::SdkMutex> lock(s_Holder.mutex);

  if (!s_Holder.isInitialized) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetServiceObjectForWatcher()->GetSynchronizationEvent(
        sf::Out<sf::NativeHandle>(&handle)));
    s_Holder.event.AttachReadableHandle(handle.GetOsHandle(),
      handle.IsManaged(), os::EventClearMode_AutoClear);
    handle.Detach();
    s_Holder.isInitialized = true;
  }

  return &s_Holder.event;
}

os::SystemEvent* GetUnlinkedEvent() {
  static EventHolder s_Holder;
  std::lock_guard<os::SdkMutex> lock(s_Holder.mutex);

  if (!s_Holder.isInitialized) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetServiceObjectForWatcher()->GetUnlinkedEvent(
        sf::Out<sf::NativeHandle>(&handle)));
    s_Holder.event.AttachReadableHandle(handle.GetOsHandle(),
      handle.IsManaged(), os::EventClearMode_ManualClear);
    handle.Detach();
    s_Holder.isInitialized = true;
  }

  return &s_Holder.event;
}

void ClearUnlinkedEvent() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->ClearUnlinkedEvent());
}

// The service is expected to reject this request as unsupported.
os::SystemEvent* GetExtendedPlayTimerEvent() {
  static EventHolder s_Holder;
  sf::NativeHandle handle;
  Result result = GetServiceObjectForWatcher()->GetExtendedPlayTimerEvent(
    sf::Out<sf::NativeHandle>(&handle));
  NN_ABORT_UNLESS(ResultNotSupported::Includes(result));
  return &s_Holder.event;
}

void StartPlayTimer() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->StartPlayTimer());
}

void StopPlayTimer() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObjectForWatcher()->StopPlayTimer());
}

bool IsRestrictedByPlayTimer() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->IsRestrictedByPlayTimer(
      sf::Out<bool>(&value)));
  return value;
}

void GetPlayTimerSettings(PlayTimerSettingsVer3* pOutSettings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->GetPlayTimerSettings(
      sf::Out<PlayTimerSettingsVer3>(pOutSettings)));
}

os::SystemEvent* GetPlayTimerEventToRequestSuspension() {
  static EventHolder s_Holder;
  std::lock_guard<os::SdkMutex> lock(s_Holder.mutex);

  if (!s_Holder.isInitialized) {
    sf::NativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      GetServiceObjectForWatcher()->GetPlayTimerEventToRequestSuspension(
        sf::Out<sf::NativeHandle>(&handle)));
    s_Holder.event.AttachReadableHandle(handle.GetOsHandle(),
      handle.IsManaged(), os::EventClearMode_AutoClear);
    handle.Detach();
    s_Holder.isInitialized = true;
  }

  return &s_Holder.event;
}

bool IsPlayTimerAlarmDisabled() {
  bool value = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->IsPlayTimerAlarmDisabled(
      sf::Out<bool>(&value)));
  return value;
}

void SetPlayTimerSettingsForDebug(const PlayTimerSettingsVer3& settings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->SetPlayTimerSettingsForDebug(settings));
}

void SetPlayTimerAlarmDisabledForDebug(bool isDisabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->SetPlayTimerAlarmDisabledForDebug(
      isDisabled));
}

void CancelNetworkRequest() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->CancelNetworkRequest());
}

void RequestUpdateDeviceUsersBackground() {
  Result result =
    GetServiceObjectForWatcher()->RequestUpdateDeviceUsersBackground();
  AbortIfUnexpectResultImpl(result);
}

}
