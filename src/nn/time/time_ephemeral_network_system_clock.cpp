#include "nn/time/time_ephemeral_network_system_clock.hpp"

#include "nn/diag/diag_abort.hpp"
#include "nn/time/time_system_clock_service.hpp"

namespace nn::time {

Result EphemeralNetworkSystemClock::GetCurrentTime(PosixTime* outValue) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetEphemeralNetworkSystemClockService(&service));
  return service->GetCurrentTime(sf::Out<PosixTime>(outValue));
}

Result GetEphemeralNetworkSystemClockContext(SystemClockContext* pOutContext) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetEphemeralNetworkSystemClockService(&service));
  return service->GetSystemClockContext(
    sf::Out<SystemClockContext>(pOutContext));
}

Result SetEphemeralNetworkSystemClockCurrentTime(const PosixTime& time) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetEphemeralNetworkSystemClockService(&service));
  return service->SetCurrentTime(time);
}

Result SetEphemeralNetworkSystemClockContext(
  const SystemClockContext& context) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetEphemeralNetworkSystemClockService(&service));
  return service->SetSystemClockContext(context);
}

EphemeralNetworkSystemClock::time_point EphemeralNetworkSystemClock::now() {
  PosixTime time = {};
  if (GetCurrentTime(&time).IsFailure()) {
    return time_point();
  }
  return time_point(duration(time.value));
}

time_t EphemeralNetworkSystemClock::to_time_t(const time_point& timePoint) {
  return timePoint.time_since_epoch().count();
}

EphemeralNetworkSystemClock::time_point
  EphemeralNetworkSystemClock::from_time_t(time_t time) {
  return time_point(duration(time));
}

}
