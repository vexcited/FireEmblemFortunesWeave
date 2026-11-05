#pragma once

#include <stdint.h>
#include <time.h>

#include <atomic>

#include "nn/os/shared_memory.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/time_types.hpp"

namespace nn::time::detail {

struct SfClockSnapshot;

}

namespace nn::timesrv::detail::service {

class ISystemClock;
class ISteadyClock;
class ITimeZoneService;

class IStaticService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetStandardUserSystemClock(
    const sf::Out<sf::SharedPointer<ISystemClock>>& pOutService) = 0;
  virtual Result GetStandardNetworkSystemClock(
    const sf::Out<sf::SharedPointer<ISystemClock>>& pOutService) = 0;
  virtual Result GetStandardSteadyClock(
    const sf::Out<sf::SharedPointer<ISteadyClock>>& pOutService) = 0;
  virtual Result GetTimeZoneService(
    const sf::Out<sf::SharedPointer<ITimeZoneService>>& pOutService) = 0;
  virtual Result GetStandardLocalSystemClock(
    const sf::Out<sf::SharedPointer<ISystemClock>>& pOutService) = 0;
  virtual Result GetEphemeralNetworkSystemClock(
    const sf::Out<sf::SharedPointer<ISystemClock>>& pOutService) = 0;
  virtual Result GetSharedMemoryNativeHandle(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result SetStandardSteadyClockInternalOffset(TimeSpan offset) = 0;
  virtual Result GetStandardSteadyClockRtcValue(sf::Out<int64_t> pOutValue)
    = 0;
  virtual void Reserved13() = 0;
  virtual Result SetStandardUserSystemClockAutomaticCorrectionEnabled(
    bool isEnabled) = 0;
  virtual Result GetStandardUserSystemClockInitialYear(
    sf::Out<int> pOutYear) = 0;
  virtual Result IsStandardNetworkSystemClockAccuracySufficient(
    sf::Out<bool> pOutIsSufficient) = 0;
  virtual Result GetStandardUserSystemClockAutomaticCorrectionUpdatedTime(
    sf::Out<time::SteadyClockTimePoint> pOutTime) = 0;
  virtual void Reserved18() = 0;
  virtual Result GetClockSnapshot(
    sf::Out<time::detail::SfClockSnapshot> pOutValue, uint8_t initialType) = 0;
  virtual Result GetClockSnapshotFromSystemClockContext(
    sf::Out<time::detail::SfClockSnapshot> pOutValue,
    const time::SystemClockContext& userContext,
    const time::SystemClockContext& networkContext, uint8_t initialType) = 0;
  virtual Result CalculateStandardUserSystemClockDifferenceByUser(
    sf::Out<TimeSpan> pOutValue, const time::detail::SfClockSnapshot& lhs,
    const time::detail::SfClockSnapshot& rhs) = 0;
  virtual Result CalculateSpanBetween(sf::Out<TimeSpan> pOutValue,
    const time::detail::SfClockSnapshot& lhs,
    const time::detail::SfClockSnapshot& rhs) = 0;
  virtual Result GetInitialLaunchEndTime(
    sf::Out<time::PosixTime> pOutTime) = 0;
  virtual Result NotifyInitialLaunchSettingsDone() = 0;
};

}

namespace nn::time::detail {

struct ContinuousAdjustmentTimePoint {
  int64_t baseTime;
  int64_t diffScale;
  int64_t shiftAmount;
  int64_t lower;
  int64_t upper;
  util::Uuid sourceId;
};

template <typename T>
struct LockFreeAtomicType {
  std::atomic<uint32_t> counter;
  T value[2];
};

struct SharedMemoryClockData {
  uint8_t reserved00[0x38];
  LockFreeAtomicType<SystemClockContext> userSystemClockContext;
  LockFreeAtomicType<SystemClockContext> networkSystemClockContext;
  LockFreeAtomicType<bool> isAutomaticCorrectionEnabled;
  LockFreeAtomicType<ContinuousAdjustmentTimePoint> steadyClockTimePoint;
};

class SharedMemoryClient {
 public:
  explicit SharedMemoryClient(
    sf::SharedPointer<timesrv::detail::service::IStaticService> service);

  ~SharedMemoryClient() {
    if (m_SharedMemory.state != os::SharedMemoryType::State_NotInitialized) {
      os::DestroySharedMemory(&m_SharedMemory);
    }
  }

  void GetStandardSteadyClockCurrentTimePoint(
    SteadyClockTimePoint* pOutTimePoint);
  Result GetStandardUserSystemClockCurrentTime(PosixTime* pOutTime);
  Result CalculateSystemClockCurrentTime(PosixTime* pOutTime,
    const SystemClockContext& context);
  void GetStandardUserSystemClockContext(SystemClockContext* pOutContext);
  bool IsStandardUserSystemClockAutomaticCorrectionEnabled();
  Result GetStandardNetworkSystemClockCurrentTime(PosixTime* pOutTime);
  void GetStandardNetworkSystemClockContext(SystemClockContext* pOutContext);
  Result CalculateSystemClockCurrentTime(PosixTime* pOutTime,
    const SystemClockContext& context,
    const ContinuousAdjustmentTimePoint& timePoint);
  Result GetStandardUserSystemClockCurrentTimespec(timespec* pOutTime);
  Result CalculateSystemClockCurrentTimespec(timespec* pOutTime,
    const SystemClockContext& context);
  Result CalculateSystemClockCurrentTimespec(timespec* pOutTime,
    const SystemClockContext& context,
    const ContinuousAdjustmentTimePoint& timePoint);
  Result GetStandardSteadyClockCurrentTimespec(timespec* pOutTime);
  Result GetStandardNetworkSystemClockCurrentTimespec(timespec* pOutTime);

 private:
  os::SharedMemoryType m_SharedMemory;
  const SharedMemoryClockData* m_pClockData;
};

// Constructed in place by the time library initialization.
struct SharedMemoryClientStorage {
  alignas(SharedMemoryClient) char storage[sizeof(SharedMemoryClient)];
  bool isInitialized;

  SharedMemoryClient* operator->() {
    return reinterpret_cast<SharedMemoryClient*>(storage);
  }
};

}

namespace nn::time {

extern detail::SharedMemoryClientStorage g_SharedMemoryClient;
extern sf::SharedPointer<timesrv::detail::service::IStaticService>
  g_pStaticService;

}
