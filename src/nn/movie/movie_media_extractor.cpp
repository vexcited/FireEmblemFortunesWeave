#include "nn/movie/movie_media_extractor.hpp"
#include "nn/movie/movie_result.hpp"

namespace nn::movie {

namespace {

constexpr Result ResultTimedOut = {0x7e500};
constexpr int64_t TaskTimeoutNanoSeconds = 30ll * 1000 * 1000 * 1000;

}

Result MediaExtractor::SetInMemoryMedia(const void* data, size_t size) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  if (size == 0) {
    return ResultInvalidArgument;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->SetInMemoryMedia(data, size));
}

Result MediaExtractor::SetUpMediaSourceMode() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->SetUpMediaSourceMode());
}

Result MediaExtractor::GetEventsForMediaSourceMode(
  os::SystemEventType** pOutDataEvent, os::SystemEventType** pOutSeekEvent) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  os::SystemEventType* dataEvent = nullptr;
  os::SystemEventType* seekEvent = nullptr;
  Result result =
    m_pHolder->pImpl->GetEventsForMediaSourceMode(&dataEvent, &seekEvent);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  *pOutDataEvent = dataEvent;
  *pOutSeekEvent = seekEvent;
  return {};
}

Result MediaExtractor::GetMediaSourceModeSeekPosition(int64_t* pOutPosition) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetMediaSourceModeSeekPosition(pOutPosition));
}

Result MediaExtractor::AppendMediaSourceData(const void* data, size_t size) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->AppendMediaSourceData(data, size));
}

Result MediaExtractor::GetTrackCount(int* pOutCount) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackCount(pOutCount));
}

Result MediaExtractor::SelectTrack(int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  Result result = m_pHolder->pImpl->SelectTrack(index);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  if (!os::TimedWaitEvent(m_pHolder->pTaskCompletedEvent,
        {TaskTimeoutNanoSeconds})) {
    return ResultTimedOut;
  }

  return m_pHolder->pImpl->GetTaskCompletedResult();
}

Result MediaExtractor::DeselectTrack(int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->DeselectTrack(index));
}

Result MediaExtractor::GetTrackProperties(MediaProperty* pOutProperty,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackProperties(pOutProperty, index));
}

Result MediaExtractor::GetTrackMimeType(MediaMimeType* pOutMimeType,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackMimeType(pOutMimeType, index));
}

Result MediaExtractor::GetTrackConfigurationSize(size_t* pOutSize, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackConfigurationSize(pOutSize, index));
}

Result MediaExtractor::GetTrackConfiguration(void* buffer, size_t size,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  if (size == 0) {
    return ResultInvalidArgument;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackConfiguration(buffer, size, index));
}

Result MediaExtractor::Start() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  Result result = m_pHolder->pImpl->Start();
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  if (!os::TimedWaitEvent(m_pHolder->pTaskCompletedEvent,
        {TaskTimeoutNanoSeconds})) {
    return ResultTimedOut;
  }

  return m_pHolder->pImpl->GetTaskCompletedResult();
}

Result MediaExtractor::Stop() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return m_pHolder->pImpl->Stop();
}

Result MediaExtractor::GetSampleAvailableEvent(os::SystemEventType** pOutEvent,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  os::SystemEventType* event = nullptr;
  Result result = m_pHolder->pImpl->GetSampleAvailableEvent(&event, index);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = event;
  return {};
}

Result MediaExtractor::GetSeekCompletedEvent(os::SystemEventType** pOutEvent) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  os::SystemEventType* event = nullptr;
  Result result = m_pHolder->pImpl->GetSeekCompletedEvent(&event);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = event;
  return {};
}

Result MediaExtractor::SeekTo(TimeSpan time, SeekMode mode) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->SeekTo(time.nanoseconds / 1000, mode));
}

Result MediaExtractor::GetSampleBufferSize(size_t* pOutSize, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return m_pHolder->pImpl->GetSampleBufferSize(pOutSize, index);
}

Result MediaExtractor::ReadSamples(Buffer* buffer, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  size_t capacity = 0;
  Result result = buffer->GetBufferCapacity(&capacity);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  if (capacity == 0) {
    return ResultInvalidArgument;
  }

  void* data = nullptr;
  size_t bufferCapacity = 0;
  size_t filledSize = 0;
  result = buffer->GetBuffer(&data, &bufferCapacity, &filledSize);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  uint32_t flags = 0;
  int64_t timeUs = -1;
  size_t size = 0;
  Result readResult = m_pHolder->pImpl->ReadSamples(data, &size, &timeUs,
    &flags, capacity, index);

  result = buffer->SetFilledBufferSize(size);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  result = buffer->SetTimeStamp({timeUs * 1000});
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  result = buffer->SetBufferFlags(static_cast<BufferFlags>(flags));
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  return readResult;
}

Result MediaExtractor::GetSampleTime(TimeSpan* pOutTime, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  int64_t timeUs = -1;
  Result result = m_pHolder->pImpl->GetSampleTime(&timeUs, index);
  *pOutTime = {timeUs * 1000};
  return result;
}

Result MediaExtractor::GetSampleProperties(MediaProperty* pOutProperty,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return m_pHolder->pImpl->GetSampleProperties(pOutProperty, index);
}

Result MediaExtractor::GetCacheRangeCount(int* pOutCount) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetCacheRangeCount(pOutCount));
}

Result MediaExtractor::GetCacheRange(TimeSpan* pOutStart, TimeSpan* pOutEnd,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  int64_t startUs = -1;
  int64_t endUs = -1;
  Result result = m_pHolder->pImpl->GetCacheRange(&startUs, &endUs, index);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  *pOutStart = {startUs * 1000};
  *pOutEnd = {endUs * 1000};
  return {};
}

Result MediaExtractor::SetThreadCoreMask(uint64_t coreMask) {
  return detail::ThreadManager::GetInstance()->_SetThreadCoreMaskByInstance(
    this, coreMask);
}

uint64_t MediaExtractor::GetThreadCoreMask() {
  return detail::ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(
    this);
}

Result MediaExtractor::SetThreadPriority(int priority) {
  if (static_cast<uint32_t>(priority) > 31) {
    return ResultInvalidArgument;
  }

  detail::ThreadManager::GetInstance()->_SetThreadPriorityByInstance(this,
    priority);
  return {};
}

int MediaExtractor::GetThreadPriority() {
  return detail::ThreadManager::GetInstance()->_GetThreadPriorityByInstance(
    this);
}

}
