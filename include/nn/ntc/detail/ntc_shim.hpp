#pragma once

#include "nn/os/system_event.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"

namespace nn::ntc::detail {

namespace service {

class IStaticService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result SuspendAutonomicTimeCorrection() = 0;
  virtual Result ResumeAutonomicTimeCorrection() = 0;
};

class IEnsureNetworkClockAvailabilityService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result StartTask() = 0;
  virtual void Reserved5() = 0;
  virtual Result GetResult() = 0;
  virtual Result Cancel() = 0;
  virtual Result IsProcessing(sf::Out<bool> pOutIsProcessing) = 0;
  virtual Result GetServerTime(sf::Out<time::PosixTime> pOutTime) = 0;
};

}

namespace shim {

Result GetStaticServiceSharedPointer(
  sf::SharedPointer<service::IStaticService>* pOutService);

class EnsureNetworkClockAvailabilityClientImpl {
 public:
  ~EnsureNetworkClockAvailabilityClientImpl();

  Result StartTask();
  Result GetResult();
  void Cancel();
  bool IsProcessing();
  Result GetServerTime(time::PosixTime* pOutTime);

 private:
  sf::SharedPointer<service::IEnsureNetworkClockAvailabilityService>
    m_Service;
  alignas(8) uint8_t m_EventStorage[0x28];
  uint8_t m_IsEventInitialized;
};

}

}
