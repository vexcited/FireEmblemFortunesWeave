#include "nn/time/time_adjustable_system_clock.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_monotonic_system_clock.hpp"

namespace nn::time {

namespace {

detail::MonotonicSystemClock g_AdjustableNetworkSystemClock;
detail::MonotonicSystemClock g_AdjustableUserSystemClock;

}

Result AdjustableNetworkSystemClock::GetCurrentTime(PosixTime* outValue) {
  if (!g_AdjustableNetworkSystemClock.IsAdjusted()) {
    Adjust();
  }
  return g_AdjustableNetworkSystemClock.GetCurrentTime(outValue);
}

void AdjustableNetworkSystemClock::Adjust() {
  SystemClockContext context;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    StandardNetworkSystemClock::GetSystemClockContext(&context));
  g_AdjustableNetworkSystemClock.SetSystemClockContext(context);
}

void AdjustableNetworkSystemClock::GetSystemClockContext(
  SystemClockContext* outValue) {
  if (!g_AdjustableNetworkSystemClock.IsAdjusted()) {
    Adjust();
  }
  *outValue = g_AdjustableNetworkSystemClock.GetSystemClockContext();
}

AdjustableNetworkSystemClock::time_point AdjustableNetworkSystemClock::now() {
  PosixTime time = {};
  if (GetCurrentTime(&time).IsFailure()) {
    return time_point();
  }
  return time_point(duration(time.value));
}

time_t AdjustableNetworkSystemClock::to_time_t(const time_point& timePoint) {
  return timePoint.time_since_epoch().count();
}

AdjustableNetworkSystemClock::time_point
  AdjustableNetworkSystemClock::from_time_t(time_t time) {
  return time_point(duration(time));
}

Result GetAdjustableNetworkSystemClockCurrentTimespec(timespec* outValue) {
  return g_AdjustableNetworkSystemClock.GetCurrentTimespec(outValue);
}

Result AdjustableUserSystemClock::GetCurrentTime(PosixTime* outValue) {
  return g_AdjustableUserSystemClock.GetCurrentTime(outValue);
}

void AdjustableUserSystemClock::Adjust() {
  SystemClockContext context;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    StandardUserSystemClock::GetSystemClockContext(&context));
  g_AdjustableUserSystemClock.SetSystemClockContext(context);
}

void AdjustableUserSystemClock::GetSystemClockContext(
  SystemClockContext* outValue) {
  *outValue = g_AdjustableUserSystemClock.GetSystemClockContext();
}

AdjustableUserSystemClock::time_point AdjustableUserSystemClock::now() {
  PosixTime time = {};
  if (GetCurrentTime(&time).IsFailure()) {
    return time_point();
  }
  return time_point(duration(time.value));
}

time_t AdjustableUserSystemClock::to_time_t(const time_point& timePoint) {
  return timePoint.time_since_epoch().count();
}

AdjustableUserSystemClock::time_point AdjustableUserSystemClock::from_time_t(
  time_t time) {
  return time_point(duration(time));
}

Result GetAdjustableUserSystemClockCurrentTimespec(timespec* outValue) {
  return g_AdjustableUserSystemClock.GetCurrentTimespec(outValue);
}

}
