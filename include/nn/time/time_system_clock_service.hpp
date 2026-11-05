#pragma once

#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"

namespace nn::timesrv::detail::service {

class ISystemClock : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetCurrentTime(sf::Out<time::PosixTime> pOutTime) = 0;
  virtual Result SetCurrentTime(time::PosixTime time) = 0;
  virtual Result GetSystemClockContext(
    sf::Out<time::SystemClockContext> pOutContext) = 0;
  virtual Result SetSystemClockContext(
    const time::SystemClockContext& context) = 0;
  virtual Result GetOperationEventReadableHandle(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
};

}

namespace nn::time {

using SystemClockService = timesrv::detail::service::ISystemClock;

Result GetStandardLocalSystemClockService(
  sf::SharedPointer<SystemClockService>* pOutService);
Result GetStandardNetworkSystemClockService(
  sf::SharedPointer<SystemClockService>* pOutService);
Result GetEphemeralNetworkSystemClockService(
  sf::SharedPointer<SystemClockService>* pOutService);

Result SetStandardLocalSystemClockCurrentTime(const PosixTime& time);
Result SetStandardLocalSystemClockContext(const SystemClockContext& context);
Result SetStandardNetworkSystemClockCurrentTime(const PosixTime& time);
Result SetStandardNetworkSystemClockContext(
  const SystemClockContext& context);
Result GetEphemeralNetworkSystemClockContext(SystemClockContext* pOutContext);
Result SetEphemeralNetworkSystemClockCurrentTime(const PosixTime& time);
Result SetEphemeralNetworkSystemClockContext(
  const SystemClockContext& context);

}
