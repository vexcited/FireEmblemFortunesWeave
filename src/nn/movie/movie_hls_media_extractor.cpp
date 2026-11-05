#include "nn/movie/movie_media_extractor.hpp"
#include "nn/movie/movie_result.hpp"

namespace nn::movie {

namespace {

constexpr Result ResultTimedOut = {0x7e500};
constexpr int64_t TaskTimeoutNanoSeconds = 30ll * 1000 * 1000 * 1000;

}

Result HlsMediaExtractor::SetUriMedia(const char* uri, int length) {
  if (m_pHolder == nullptr) {
    return ResultNotInitialized;
  }

  if (length < 1) {
    return ResultInvalidArgument;
  }

  if (m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(m_pHolder->pImpl->SetUriMedia(uri, length));
}

Result HlsMediaExtractor::SetInMemoryMedia(const void* data, size_t size) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  if (size == 0) {
    return ResultInvalidArgument;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->SetInMemoryMedia(data, size));
}

Result HlsMediaExtractor::SetUpMediaSourceMode() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->SetUpMediaSourceMode());
}

Result HlsMediaExtractor::GetEventsForMediaSourceMode(
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

Result HlsMediaExtractor::GetMediaSourceModeSeekPosition(
  int64_t* pOutPosition) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetMediaSourceModeSeekPosition(pOutPosition));
}

Result HlsMediaExtractor::AppendMediaSourceData(const void* data, size_t size) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->AppendMediaSourceData(data, size));
}

Result HlsMediaExtractor::GetTrackCount(int* pOutCount) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackCount(pOutCount));
}

Result HlsMediaExtractor::SelectTrack(int index) {
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

Result HlsMediaExtractor::DeselectTrack(int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->DeselectTrack(index));
}

Result HlsMediaExtractor::GetTrackProperties(MediaProperty* pOutProperty,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackProperties(pOutProperty, index));
}

Result HlsMediaExtractor::GetTrackMimeType(MediaMimeType* pOutMimeType,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackMimeType(pOutMimeType, index));
}

Result HlsMediaExtractor::GetTrackConfigurationSize(size_t* pOutSize,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetTrackConfigurationSize(pOutSize, index));
}

Result HlsMediaExtractor::GetTrackConfiguration(void* buffer, size_t size,
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

Result HlsMediaExtractor::Start() {
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

Result HlsMediaExtractor::Stop() {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return m_pHolder->pImpl->Stop();
}

Result HlsMediaExtractor::GetSampleAvailableEvent(
  os::SystemEventType** pOutEvent, int index) {
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

Result HlsMediaExtractor::GetSeekCompletedEvent(
  os::SystemEventType** pOutEvent) {
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

Result HlsMediaExtractor::SeekTo(TimeSpan time, SeekMode mode) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->SeekTo(time.nanoseconds / 1000, mode));
}

Result HlsMediaExtractor::GetSampleBufferSize(size_t* pOutSize, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetSampleBufferSize(pOutSize, index));
}

Result HlsMediaExtractor::ReadSamples(Buffer* buffer, int index) {
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

Result HlsMediaExtractor::GetSampleTime(TimeSpan* pOutTime, int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  int64_t timeUs = -1;
  Result result = m_pHolder->pImpl->GetSampleTime(&timeUs, index);
  if (!detail::IsSucceeded(result)) {
    return result;
  }

  *pOutTime = {timeUs * 1000};
  return {};
}

Result HlsMediaExtractor::GetSampleProperties(MediaProperty* pOutProperty,
  int index) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return m_pHolder->pImpl->GetSampleProperties(pOutProperty, index);
}

Result HlsMediaExtractor::GetCacheRangeCount(int* pOutCount) {
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return ResultNotInitialized;
  }

  return detail::ToPublicResult(
    m_pHolder->pImpl->GetCacheRangeCount(pOutCount));
}

Result HlsMediaExtractor::GetCacheRange(TimeSpan* pOutStart, TimeSpan* pOutEnd,
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

Result HlsMediaExtractor::SetPreferredPixels(size_t pixels) {
  m_PreferredPixels = pixels;
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return {};
  }

  Result result = m_pHolder->pImpl->SetPreferredPixels(pixels);
  if (detail::IsSucceeded(result)) {
    return {};
  }

  return result;
}

Result HlsMediaExtractor::SetMinBandwidthSamples(size_t samples) {
  m_MinBandwidthSamples = samples;
  if (m_pHolder == nullptr || m_pHolder->pImpl == nullptr) {
    return {};
  }

  Result result = m_pHolder->pImpl->SetMinBandwidthSamples(samples);
  if (detail::IsSucceeded(result)) {
    return {};
  }

  return result;
}

}
