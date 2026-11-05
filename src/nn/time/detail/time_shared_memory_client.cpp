#include "nn/time/detail/time_shared_memory_client.hpp"

#include "nn/diag/diag_abort.hpp"

namespace nn::time::detail {

namespace {

const Result ResultClockSourceMismatch = {0xcc74};
const Result ResultSteadyClockNotReady = {0xce74};
const int64_t NanoSecondsPerSecond = 1000000000;

template <typename T>
T LoadFromLockFreeAtomicType(const LockFreeAtomicType<T>& atomic) {
  T value;
  uint32_t counter;
  do {
    counter = atomic.counter.load(std::memory_order_relaxed);
    value = atomic.value[counter & 1];
    std::atomic_thread_fence(std::memory_order_acquire);
  } while (counter != atomic.counter.load(std::memory_order_relaxed));
  return value;
}

// Steady time in nanoseconds, the adjusted offset is clamped toward upper.
int64_t GetCurrentTimeNanoSeconds(const ContinuousAdjustmentTimePoint& point) {
  int64_t now = os::ConvertToTimeSpan(os::GetSystemTick()).nanoseconds;
  int64_t adjusted = ((point.diffScale * (now - point.baseTime)) >>
    point.shiftAmount) + point.lower;
  if (point.diffScale >= 0) {
    adjusted = adjusted < point.upper ? adjusted : point.upper;
  }
  else {
    adjusted = adjusted > point.upper ? adjusted : point.upper;
  }
  return adjusted + now;
}

bool IsSameSource(const SystemClockContext& context,
  const ContinuousAdjustmentTimePoint& point) {
  return context.timeStamp.sourceId != util::InvalidUuid &&
    context.timeStamp.sourceId == point.sourceId;
}

}

SharedMemoryClient::SharedMemoryClient(
  sf::SharedPointer<timesrv::detail::service::IStaticService> service) {
  m_SharedMemory.state = os::SharedMemoryType::State_NotInitialized;
  m_pClockData = nullptr;
  sf::NativeHandle handle;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetSharedMemoryNativeHandle(
    sf::Out<sf::NativeHandle>(&handle)));
  NN_ABORT_UNLESS(m_SharedMemory.state ==
    os::SharedMemoryType::State_NotInitialized);
  os::AttachSharedMemory(&m_SharedMemory, 0x1000, handle.GetOsHandle(),
    handle.IsManaged());
  handle.Detach();
  void* address = os::MapSharedMemory(&m_SharedMemory,
    os::MemoryPermission_ReadOnly);
  NN_ABORT_UNLESS_NOT_NULL(address);
  m_pClockData = static_cast<const SharedMemoryClockData*>(address);
}

void SharedMemoryClient::GetStandardSteadyClockCurrentTimePoint(
  SteadyClockTimePoint* pOutTimePoint) {
  ContinuousAdjustmentTimePoint point =
    LoadFromLockFreeAtomicType(m_pClockData->steadyClockTimePoint);
  pOutTimePoint->value = GetCurrentTimeNanoSeconds(point) /
    NanoSecondsPerSecond;
  pOutTimePoint->sourceId = point.sourceId;
}

Result SharedMemoryClient::GetStandardUserSystemClockCurrentTime(
  PosixTime* pOutTime) {
  SystemClockContext context =
    LoadFromLockFreeAtomicType(m_pClockData->userSystemClockContext);
  Result result = CalculateSystemClockCurrentTime(pOutTime, context);
  if (result.IsFailure()) {
    pOutTime->value = 0;
  }
  return result;
}

Result SharedMemoryClient::CalculateSystemClockCurrentTime(
  PosixTime* pOutTime, const SystemClockContext& context) {
  ContinuousAdjustmentTimePoint point =
    LoadFromLockFreeAtomicType(m_pClockData->steadyClockTimePoint);
  return CalculateSystemClockCurrentTime(pOutTime, context, point);
}

void SharedMemoryClient::GetStandardUserSystemClockContext(
  SystemClockContext* pOutContext) {
  *pOutContext =
    LoadFromLockFreeAtomicType(m_pClockData->userSystemClockContext);
}

bool SharedMemoryClient::IsStandardUserSystemClockAutomaticCorrectionEnabled() {
  return LoadFromLockFreeAtomicType(
    m_pClockData->isAutomaticCorrectionEnabled);
}

Result SharedMemoryClient::GetStandardNetworkSystemClockCurrentTime(
  PosixTime* pOutTime) {
  SystemClockContext context =
    LoadFromLockFreeAtomicType(m_pClockData->networkSystemClockContext);
  return CalculateSystemClockCurrentTime(pOutTime, context);
}

void SharedMemoryClient::GetStandardNetworkSystemClockContext(
  SystemClockContext* pOutContext) {
  *pOutContext =
    LoadFromLockFreeAtomicType(m_pClockData->networkSystemClockContext);
}

Result SharedMemoryClient::CalculateSystemClockCurrentTime(
  PosixTime* pOutTime, const SystemClockContext& context,
  const ContinuousAdjustmentTimePoint& point) {
  if (!IsSameSource(context, point)) {
    return ResultClockSourceMismatch;
  }
  pOutTime->value = GetCurrentTimeNanoSeconds(point) / NanoSecondsPerSecond +
    context.offset;
  return Result();
}

Result SharedMemoryClient::GetStandardUserSystemClockCurrentTimespec(
  timespec* pOutTime) {
  SystemClockContext context =
    LoadFromLockFreeAtomicType(m_pClockData->userSystemClockContext);
  return CalculateSystemClockCurrentTimespec(pOutTime, context);
}

Result SharedMemoryClient::CalculateSystemClockCurrentTimespec(
  timespec* pOutTime, const SystemClockContext& context) {
  ContinuousAdjustmentTimePoint point =
    LoadFromLockFreeAtomicType(m_pClockData->steadyClockTimePoint);
  return CalculateSystemClockCurrentTimespec(pOutTime, context, point);
}

Result SharedMemoryClient::CalculateSystemClockCurrentTimespec(
  timespec* pOutTime, const SystemClockContext& context,
  const ContinuousAdjustmentTimePoint& point) {
  if (!IsSameSource(context, point)) {
    return ResultClockSourceMismatch;
  }
  int64_t nanoSeconds = GetCurrentTimeNanoSeconds(point) +
    context.offset * NanoSecondsPerSecond;
  pOutTime->tv_sec = nanoSeconds / NanoSecondsPerSecond;
  pOutTime->tv_nsec = nanoSeconds % NanoSecondsPerSecond;
  return Result();
}

Result SharedMemoryClient::GetStandardSteadyClockCurrentTimespec(
  timespec* pOutTime) {
  ContinuousAdjustmentTimePoint point =
    LoadFromLockFreeAtomicType(m_pClockData->steadyClockTimePoint);
  if (point.sourceId == util::InvalidUuid) {
    return ResultSteadyClockNotReady;
  }
  int64_t nanoSeconds = GetCurrentTimeNanoSeconds(point);
  pOutTime->tv_sec = nanoSeconds / NanoSecondsPerSecond;
  pOutTime->tv_nsec = nanoSeconds % NanoSecondsPerSecond;
  return Result();
}

Result SharedMemoryClient::GetStandardNetworkSystemClockCurrentTimespec(
  timespec* pOutTime) {
  SystemClockContext context =
    LoadFromLockFreeAtomicType(m_pClockData->networkSystemClockContext);
  return CalculateSystemClockCurrentTimespec(pOutTime, context);
}

}
