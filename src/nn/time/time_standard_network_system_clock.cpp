#include "nn/diag/diag_abort.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/time_standard_user_system_clock.hpp"
#include "nn/time/time_system_clock_service.hpp"

namespace nn::time {

namespace {

const Result ResultNotInitialized = {0x74};

}

Result StandardNetworkSystemClock::GetCurrentTime(PosixTime* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    return g_SharedMemoryClient->GetStandardNetworkSystemClockCurrentTime(
      outValue);
  }
  return ResultNotInitialized;
}

Result StandardNetworkSystemClock::GetSystemClockContext(
  SystemClockContext* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    g_SharedMemoryClient->GetStandardNetworkSystemClockContext(outValue);
    return Result();
  }
  return ResultNotInitialized;
}

bool StandardNetworkSystemClock::IsAccuracySufficient() {
  NN_ABORT_UNLESS(g_pStaticService != nullptr);
  bool isSufficient = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_pStaticService->IsStandardNetworkSystemClockAccuracySufficient(
      sf::Out<bool>(&isSufficient)));
  return isSufficient;
}

StandardNetworkSystemClock::time_point StandardNetworkSystemClock::now() {
  PosixTime time = {};
  if (GetCurrentTime(&time).IsFailure()) {
    return time_point();
  }
  return time_point(duration(time.value));
}

time_t StandardNetworkSystemClock::to_time_t(const time_point& timePoint) {
  return timePoint.time_since_epoch().count();
}

StandardNetworkSystemClock::time_point StandardNetworkSystemClock::from_time_t(
  time_t time) {
  return time_point(duration(time));
}

Result GetStandardNetworkSystemClockCurrentTimespec(timespec* outValue) {
  if (g_SharedMemoryClient.isInitialized) {
    return g_SharedMemoryClient->GetStandardNetworkSystemClockCurrentTimespec(
      outValue);
  }
  return ResultNotInitialized;
}

Result SetStandardNetworkSystemClockCurrentTime(const PosixTime& time) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetStandardNetworkSystemClockService(&service));
  return service->SetCurrentTime(time);
}

Result SetStandardNetworkSystemClockContext(const SystemClockContext& context) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetStandardNetworkSystemClockService(&service));
  return service->SetSystemClockContext(context);
}

}
