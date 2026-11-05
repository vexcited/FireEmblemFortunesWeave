#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_system_clock_service.hpp"
#include "nn/time/time_time_zone_api.hpp"

// Included last since its time::sf namespace hides nn::sf in the headers.
#include "nn/time/time_clock_snapshot.hpp"

namespace nn::time {

namespace {

void AttachOperationEvent(os::SystemEvent* pEvent,
  ::nn::sf::NativeHandle& handle, os::EventClearMode clearMode) {
  pEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    clearMode);
  handle.Detach();
}

}

PeriodicBenefitClaimResult ClaimPeriodicBenefitWithUserSystemClock(
  PeriodicBenefitClaimContext* pContext, const ClockSnapshot& snapshot,
  const TimeSpan& maxPenaltyTimeSpan,
  const TimeSpan& acceptableOperationTimeSpan,
  const CheckCalendarTimeCallback* pCallback) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  static_cast<void>(detail::GetSfClockSnapshotPtr(&snapshot));
  return detail::ClaimPeriodicBenefitWithUserSystemClock(pContext, snapshot,
    maxPenaltyTimeSpan, acceptableOperationTimeSpan, pCallback);
}

// The user clock event is read from the local system clock service.
void GetStandardUserClockOperationEvent(os::SystemEvent* pEvent,
  os::EventClearMode clearMode) {
  ::nn::sf::SharedPointer<SystemClockService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetStandardLocalSystemClockService(&service));
  ::nn::sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetOperationEventReadableHandle(
    ::nn::sf::Out<::nn::sf::NativeHandle>(&handle)));
  AttachOperationEvent(pEvent, handle, clearMode);
}

void GetStandardNetworkClockOperationEvent(os::SystemEvent* pEvent,
  os::EventClearMode clearMode) {
  ::nn::sf::SharedPointer<SystemClockService> service;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetStandardNetworkSystemClockService(&service));
  ::nn::sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetOperationEventReadableHandle(
    ::nn::sf::Out<::nn::sf::NativeHandle>(&handle)));
  AttachOperationEvent(pEvent, handle, clearMode);
}

void GetDeviceLocationNameOperationEvent(os::SystemEvent* pEvent,
  os::EventClearMode clearMode) {
  NN_ABORT_UNLESS(g_pTimeZoneService != nullptr);
  ::nn::sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pTimeZoneService->GetDeviceLocationNameOperationEventReadableHandle(
      ::nn::sf::Out<::nn::sf::NativeHandle>(&handle)));
  AttachOperationEvent(pEvent, handle, clearMode);
}

TimeSpan CalculateStandardUserSystemClockDifferenceByUser(
  const ClockSnapshot& from, const ClockSnapshot& to) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  TimeSpan difference = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->CalculateStandardUserSystemClockDifferenceByUser(
      ::nn::sf::Out<TimeSpan>(&difference),
      *detail::GetSfClockSnapshotPtr(&from),
      *detail::GetSfClockSnapshotPtr(&to)));
  return difference;
}

bool CalculateSpanBetween(TimeSpan* pOutValue, const ClockSnapshot& from,
  const ClockSnapshot& to) {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  TimeSpan span = {};
  const Result result = g_pStaticService->CalculateSpanBetween(
    ::nn::sf::Out<TimeSpan>(&span), *detail::GetSfClockSnapshotPtr(&from),
    *detail::GetSfClockSnapshotPtr(&to));
  if (result.IsSuccess()) {
    *pOutValue = span;
  }
  return result.IsSuccess();
}

}
