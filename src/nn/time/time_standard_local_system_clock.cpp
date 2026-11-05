#include "nn/diag/diag_abort.hpp"
#include "nn/time/time_system_clock_service.hpp"

namespace nn::time {

Result SetStandardLocalSystemClockCurrentTime(const PosixTime& time) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetStandardLocalSystemClockService(&service));
  return service->SetCurrentTime(time);
}

Result SetStandardLocalSystemClockContext(const SystemClockContext& context) {
  sf::SharedPointer<SystemClockService> service;
  NN_RESULT_DO(GetStandardLocalSystemClockService(&service));
  return service->SetSystemClockContext(context);
}

}
