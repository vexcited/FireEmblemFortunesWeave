#include <string.h>
#include <strings.h>

#include <new>

#include "nandroid/MovieHeap.h"
#include "nn/fs/fs_filesystem.hpp"
#include "nn/movie/detail/movie_base_media_extractor.hpp"
#include "nn/movie/detail/movie_media_extractor_impl.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"

namespace nn::movie::detail {

MediaExtractorImpl::TrackInfo::TrackInfo()
  : index(-1), isSelected(false) {
}

MediaExtractorImpl::TrackInfo::~TrackInfo() {
}

bool MediaExtractorImpl::IsHlsUri(const char* uri) {
  return strstr(uri, ".m3u8") != nullptr;
}

bool MediaExtractorImpl::IsHttpLiveUri(const char* uri) {
  if (strncasecmp("http://", uri, 7) != 0 &&
      strncasecmp("https://", uri, 8) != 0 &&
      strncasecmp("file://", uri, 7) != 0) {
    return false;
  }

  size_t length = strlen(uri);
  if (length >= 5 && strcasecmp(".m3u8", uri + length - 5) == 0) {
    return true;
  }

  return strstr(uri, "m3u8") != nullptr;
}

Result MediaExtractorImpl::DoSetUpStreamSource(
  std::shared_ptr<void> argument) {
  return {};
}

Result MediaExtractorImpl::GetStreamSourceSeekPosition(int64_t* pOutPosition) {
  return {};
}

Result MediaExtractorImpl::SendStreamSourceData(const void* data,
  int64_t size) {
  return {};
}

Result MediaExtractorImpl::GetTaskCompletedResult() {
  return m_TaskCompletedResult;
}

}

namespace nn::movie::detail {

namespace {

constexpr Result ResultInvalidState = {0x3f500};
constexpr Result ResultOutOfMemory = {0x3f700};
constexpr Result ResultExtractorUnavailable = {0x7eb00};
constexpr Result ResultNoTrackSelected = {0x7ed00};
constexpr Result ResultWorkerStopped = {0x7f100};
constexpr Result ResultMediaUnavailable = {0x7ff00};
constexpr Result ResultMessageTimedOut = {0x80500};

using Request = MediaExtractorImpl::MediaExtractorMessage;

template <typename T>
std::shared_ptr<T> MakeMessageData(AllocatorInfo* allocatorInfo) {
  return std::allocate_shared<T>(StdLibAllocator<T>(allocatorInfo));
}

}

Result MediaExtractorImpl::Initialize(AllocatorInfo* allocatorInfo,
  size_t cacheSize, NetworkConnection* connection, size_t connectionCount,
  void* threadInstance) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_Initialize);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_pNetworkConnection = connection;
  m_NetworkConnectionCount = connectionCount;
  result = Initialize(allocatorInfo, cacheSize, threadInstance);
  if (result.IsFailure()) {
    return ToPublicResult(result);
  }

  return {};
}

Result MediaExtractorImpl::SetUriMedia(const char* uri, int length) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_SetUriMedia);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto data = MakeMessageData<Request::SetMediaUriData>(m_pAllocatorInfo);
  data->uri = uri;
  data->length = length;
  return SendMessage(MediaExtractorMessageType_SetMediaUri, data, true, -1);
}

Result MediaExtractorImpl::SetInMemoryMedia(const void* data, size_t size) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_SetInMemoryMedia);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto message =
    MakeMessageData<Request::SetMediaBufferData>(m_pAllocatorInfo);
  message->data = data;
  message->size = size;
  return SendMessage(MediaExtractorMessageType_SetMediaBuffer, message, true,
    -1);
}

Result MediaExtractorImpl::SetUpStreamSource(int64_t size) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_SetUpStreamSource);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto data =
    MakeMessageData<Request::SetUpStreamSourceData>(m_pAllocatorInfo);
  data->size = size;
  return SendMessage(MediaExtractorMessageType_SetUpStreamSource, data, false,
    -1);
}

Result MediaExtractorImpl::GetEventsForStreamSource(
  os::SystemEventType** pOutDataEvent, os::SystemEventType** pOutSeekEvent) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetEventsForStreamSource);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutDataEvent = &m_StreamSourceDataEvent;
  *pOutSeekEvent = &m_StreamSourceSeekEvent;
  return {};
}

Result MediaExtractorImpl::SetUpMediaSourceMode() {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_SetUpMediaSourceMode);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor != nullptr) {
    return {};
  }

  return SendMessage(MediaExtractorMessageType_SetUpMediaSourceMode, nullptr,
    true, -1);
}

Result MediaExtractorImpl::AppendMediaSourceData(const void* data,
  size_t size) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_AppendMediaSourceData);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultMediaUnavailable;
  }

  return ToPublicResult(m_pExtractor->AppendMediaSourceData(data, size));
}

Result MediaExtractorImpl::GetEventsForMediaSourceMode(
  os::SystemEventType** pOutDataEvent, os::SystemEventType** pOutSeekEvent) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetEventsForMediaSourceMode);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutDataEvent = &m_StreamSourceDataEvent;
  *pOutSeekEvent = &m_StreamSourceSeekEvent;
  return {};
}

Result MediaExtractorImpl::GetMediaSourceModeSeekPosition(
  int64_t* pOutPosition) {
  Result result = m_State.ValidateCurrentState(MediaExtractorState::
    MediaExtractorFunctions_GetMediaSourceModeSeekPosition);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultMediaUnavailable;
  }

  return ToPublicResult(
    m_pExtractor->GetMediaSourceModeSeekPosition(pOutPosition));
}

Result MediaExtractorImpl::GetTrackCount(int* pOutCount) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetTrackCount);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  result = m_pExtractor->GetTrackCount(&m_TrackCount);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutCount = m_TrackCount;
  return {};
}

Result MediaExtractorImpl::SelectTrack(int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_SelectTrack);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = MakeMessageData<Request::SelectTrackData>(m_pAllocatorInfo);
  data->index = index;
  return SendMessage(MediaExtractorMessageType_SelectTrack, data, false, -1);
}

Result MediaExtractorImpl::DeselectTrack(int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_DeselectTrack);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = MakeMessageData<Request::DeselectTrackData>(m_pAllocatorInfo);
  data->index = index;
  return SendMessage(MediaExtractorMessageType_DeselectTrack, data, true, -1);
}

Result MediaExtractorImpl::GetTrackProperties(MediaProperty* pOutProperty,
  int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetTrackProperties);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data =
    MakeMessageData<Request::GetMediaTrackPropertyData>(m_pAllocatorInfo);
  data->pProperty = pOutProperty;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetMediaTrackProperty, data,
    true, -1);
}

Result MediaExtractorImpl::GetTrackMimeType(MediaMimeType* pOutMimeType,
  int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetTrackMimeType);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data =
    MakeMessageData<Request::GetTrackMimeTypeData>(m_pAllocatorInfo);
  data->pMimeType = pOutMimeType;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetTrackMimeType, data, true,
    -1);
}

Result MediaExtractorImpl::GetTrackConfigurationSize(size_t* pOutSize,
  int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetTrackConfigurationSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = MakeMessageData<Request::GetMediaTrackConfigurationSizeData>(
    m_pAllocatorInfo);
  data->pSize = pOutSize;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetMediaTrackConfigurationSize,
    data, true, -1);
}

Result MediaExtractorImpl::GetTrackConfiguration(void* buffer, size_t size,
  int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetTrackConfiguration);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = MakeMessageData<Request::GetMediaTrackConfigurationData>(
    m_pAllocatorInfo);
  data->buffer = buffer;
  data->size = size;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetMediaTrackConfiguration,
    data, true, -1);
}

Result MediaExtractorImpl::Start() {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_Start);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  if (m_pTrackList->empty()) {
    return ResultNoTrackSelected;
  }

  return SendMessage(MediaExtractorMessageType_Start, nullptr, false, -1);
}

Result MediaExtractorImpl::GetSampleAvailableEvent(
  os::SystemEventType** pOutEvent, int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetSampleAvailableEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(
    m_pExtractor->GetSampleAvailableEvent(pOutEvent, index));
}

Result MediaExtractorImpl::GetSeekCompletedEvent(
  os::SystemEventType** pOutEvent) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetEvents);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = &m_SeekCompletedEvent;
  return {};
}

Result MediaExtractorImpl::GetTaskCompletedEvent(os::EventType** pOutEvent) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetEvents);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = &m_TaskCompletedEvent;
  return {};
}

Result MediaExtractorImpl::SeekTo(int64_t timeUs, SeekMode mode) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_SeekTo);
  if (!IsSucceeded(result)) {
    return result;
  }

  auto data = MakeMessageData<Request::SeekToData>(m_pAllocatorInfo);
  data->timeUs = timeUs;
  data->mode = mode;
  return SendMessage(MediaExtractorMessageType_SeekTo, data, false, -1);
}

Result MediaExtractorImpl::GetSampleBufferSize(size_t* pOutSize, int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetSampleBufferSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data =
    MakeMessageData<Request::GetSampleBufferSizeData>(m_pAllocatorInfo);
  data->pSize = pOutSize;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetSampleBufferSize, data,
    true, -1);
}

Result MediaExtractorImpl::ReadSamples(void* buffer, size_t* pOutSize,
  int64_t* pOutTimeUs, uint32_t* pOutFlags, size_t size, int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_ReadSamples);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = MakeMessageData<Request::ReadSamplesData>(m_pAllocatorInfo);
  data->buffer = buffer;
  data->pSize = pOutSize;
  data->pTimeUs = pOutTimeUs;
  data->pFlags = pOutFlags;
  data->bufferSize = size;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_ReadSamples, data, true, -1);
}

Result MediaExtractorImpl::GetSampleTime(int64_t* pOutTimeUs, int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetSampleTime);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = MakeMessageData<Request::GetSampleTimeData>(m_pAllocatorInfo);
  data->pTimeUs = pOutTimeUs;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetSampleTime, data, true, -1);
}

Result MediaExtractorImpl::GetSampleProperties(MediaProperty* pOutProperty,
  int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetSampleProperties);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data =
    MakeMessageData<Request::GetSamplePropertiesData>(m_pAllocatorInfo);
  data->pProperty = pOutProperty;
  data->index = index;
  return SendMessage(MediaExtractorMessageType_GetSampleProperties, data,
    true, -1);
}

Result MediaExtractorImpl::GetCacheRangeCount(int* pOutCount) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetCacheRangeCount);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(m_pExtractor->GetCacheRangeCount(pOutCount));
}

Result MediaExtractorImpl::GetCacheRange(int64_t* pOutStartUs,
  int64_t* pOutEndUs, int index) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_GetCacheRange);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(
    m_pExtractor->GetCacheRange(pOutStartUs, pOutEndUs, index));
}

Result MediaExtractorImpl::IsCacheFull(bool* pOutIsFull,
  bool* pOutIsEndOfStream) {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_IsCacheFull);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(
    m_pExtractor->IsCacheFull(pOutIsFull, pOutIsEndOfStream));
}

Result MediaExtractorImpl::StreamSourceReadData(void* buffer,
  int64_t* pOutSize, int64_t size) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(
    m_pExtractor->StreamSourceReadData(buffer, pOutSize, size));
}

Result MediaExtractorImpl::StreamSourceSeekTo(int64_t position) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(m_pExtractor->StreamSourceSeekTo(position));
}

Result MediaExtractorImpl::StreamSourceSetSize(int64_t size) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(m_pExtractor->StreamSourceSetSize(size));
}

Result MediaExtractorImpl::SetPreferredPixels(size_t pixels) {
  if (pixels == m_PreferredPixels) {
    return {};
  }

  m_PreferredPixels = pixels;
  if (m_pExtractor == nullptr) {
    return {};
  }

  return ToPublicResult(m_pExtractor->SetPreferredPixels(pixels));
}

Result MediaExtractorImpl::SetMinBandwidthSamples(size_t samples) {
  if (samples == m_MinBandwidthSamples) {
    return {};
  }

  m_MinBandwidthSamples = samples;
  if (m_pExtractor == nullptr) {
    return {};
  }

  return ToPublicResult(m_pExtractor->SetMinBandwidthSamples(samples));
}

Result MediaExtractorImpl::DoGetMediaTrackProperty(
  std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = static_cast<Request::GetMediaTrackPropertyData*>(argument.get());
  return ToPublicResult(
    m_pExtractor->GetTrackProperties(data->pProperty, data->index));
}

Result MediaExtractorImpl::DoGetTrackMimeType(std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultMediaUnavailable;
  }

  auto data = static_cast<Request::GetTrackMimeTypeData*>(argument.get());
  return ToPublicResult(
    m_pExtractor->GetTrackMimeType(data->pMimeType, data->index));
}

Result MediaExtractorImpl::DoGetMediaTrackConfigurationSize(
  std::shared_ptr<void> argument) {
  auto data =
    static_cast<Request::GetMediaTrackConfigurationSizeData*>(argument.get());
  if (data == nullptr) {
    return ResultOutOfMemory;
  }

  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return ToPublicResult(
    m_pExtractor->GetTrackConfigurationSize(data->pSize, data->index));
}

Result MediaExtractorImpl::DoGetMediaTrackConfiguration(
  std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data =
    static_cast<Request::GetMediaTrackConfigurationData*>(argument.get());
  return ToPublicResult(m_pExtractor->GetTrackConfiguration(data->buffer,
    data->size, data->index));
}

Result MediaExtractorImpl::DoStart() {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  Result result = m_pExtractor->Start();
  if (!IsSucceeded(result)) {
    return result;
  }

  m_IsStarted = true;
  m_State.SetState(MediaState::State_Started);
  return {};
}

Result MediaExtractorImpl::DoStop() {
  m_State.SetState(MediaState::State_Stopped);
  return ToPublicResult(m_pExtractor->Stop());
}

Result MediaExtractorImpl::DoSeekTo(std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = static_cast<Request::SeekToData*>(argument.get());
  return ToPublicResult(m_pExtractor->SeekTo(data->timeUs, data->mode));
}

Result MediaExtractorImpl::DoGetSampleBufferSize(
  std::shared_ptr<void> argument) {
  std::shared_ptr<Request::GetSampleBufferSizeData> data =
    std::static_pointer_cast<Request::GetSampleBufferSizeData>(argument);
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return m_pExtractor->GetSampleBufferSize(data->pSize, data->index);
}

Result MediaExtractorImpl::DoReadSamples(std::shared_ptr<void> argument) {
  std::shared_ptr<Request::ReadSamplesData> data =
    std::static_pointer_cast<Request::ReadSamplesData>(argument);
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  return m_pExtractor->ReadSamples(data->buffer, data->pSize, data->pTimeUs,
    data->pFlags, data->bufferSize, data->index);
}

Result MediaExtractorImpl::DoGetSampleTime(std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = static_cast<Request::GetSampleTimeData*>(argument.get());
  return m_pExtractor->GetSampleTime(data->pTimeUs, data->index);
}

Result MediaExtractorImpl::DoGetSampleProperties(
  std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  auto data = static_cast<Request::GetSamplePropertiesData*>(argument.get());
  return m_pExtractor->GetSampleProperties(data->pProperty, data->index);
}

Result MediaExtractorImpl::DoSetMedia() {
  if (m_pExtractor == nullptr) {
    return ResultMediaUnavailable;
  }

  Result result = m_pExtractor->GetTrackCount(&m_TrackCount);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_State.SetState(MediaState::State_MediaSet);
  return {};
}

void MediaExtractorImpl::DeallocateCoreMediaExtractor() {
  if (m_pExtractor != nullptr) {
    m_pExtractor->Finalize();
    m_pExtractor->~IMediaExtractor();
    m_pExtractor = nullptr;
  }

  if (m_pExtractorStorage != nullptr) {
    if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pExtractorStorage, m_pAllocatorInfo);
    }

    m_pExtractorStorage = nullptr;
  }
}

}

namespace nn::movie::detail {

Result MediaExtractorImpl::AllocateCoreMediaExtractor(
  IMediaExtractor** pOutExtractor, const char* uri) {
  if (*pOutExtractor != nullptr) {
    return ResultInvalidState;
  }

  if (uri != nullptr && strstr(uri, ".m3u8") != nullptr) {
    m_pExtractorStorage = m_pAllocatorInfo != nullptr
      ? AllocateMemory(sizeof(HlsMediaExtractor), m_pAllocatorInfo)
      : nullptr;
    if (m_pExtractorStorage == nullptr) {
      return ResultOutOfMemory;
    }

    *pOutExtractor = new (m_pExtractorStorage) HlsMediaExtractor();
    Result result = (*pOutExtractor)->SetPreferredPixels(m_PreferredPixels);
    if (!IsSucceeded(result)) {
      return result;
    }

    result = (*pOutExtractor)->SetMinBandwidthSamples(m_MinBandwidthSamples);
    if (!IsSucceeded(result)) {
      return result;
    }

    return {};
  }

  m_pExtractorStorage = m_pAllocatorInfo != nullptr
    ? AllocateMemory(sizeof(BaseMediaExtractor), m_pAllocatorInfo)
    : nullptr;
  if (m_pExtractorStorage == nullptr) {
    return ResultOutOfMemory;
  }

  *pOutExtractor = new (m_pExtractorStorage) BaseMediaExtractor();
  return {};
}

Result MediaExtractorImpl::DoSetMediaUri(std::shared_ptr<void> argument) {
  auto data = static_cast<Request::SetMediaUriData*>(argument.get());
  const char* uri = data->uri;
  int length = data->length;
  if (strstr(uri, ".m3u8") == nullptr) {
    fs::DirectoryEntryType type = {};
    if (fs::GetEntryType(&type, uri).IsFailure()) {
      return ResultMediaUnavailable;
    }
  }

  Result result = AllocateCoreMediaExtractor(&m_pExtractor, uri);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (strstr(uri, ".m3u8") != nullptr) {
    result = m_pExtractor->Initialize(m_pAllocatorInfo, m_CacheSize,
      m_pNetworkConnection, m_NetworkConnectionCount);
  }
  else {
    result = m_pExtractor->Initialize(m_pAllocatorInfo, m_CacheSize);
  }

  if (!IsSucceeded(result)) {
    return result;
  }

  SetUpExtractorEvents();
  result = m_pExtractor->SetUriMedia(uri, length);
  if (!IsSucceeded(result)) {
    return result;
  }

  return DoSetMedia();
}

Result MediaExtractorImpl::DoSetMediaBuffer(std::shared_ptr<void> argument) {
  if (m_pExtractor != nullptr) {
    return ResultInvalidState;
  }

  if (m_pAllocatorInfo == nullptr) {
    m_pExtractorStorage = nullptr;
    return ResultOutOfMemory;
  }

  auto data =
    static_cast<Request::SetMediaBufferData*>(argument.get());
  const void* buffer = data->data;
  size_t size = data->size;
  m_pExtractorStorage =
    AllocateMemory(sizeof(BaseMediaExtractor), m_pAllocatorInfo);
  if (m_pExtractorStorage == nullptr) {
    return ResultOutOfMemory;
  }

  m_pExtractor = new (m_pExtractorStorage) BaseMediaExtractor();
  Result result = m_pExtractor->Initialize(m_pAllocatorInfo, m_CacheSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  SetUpExtractorEvents();
  result = m_pExtractor->SetInMemoryMedia(buffer, size);
  if (!IsSucceeded(result)) {
    return result;
  }

  return DoSetMedia();
}

Result MediaExtractorImpl::DoSetUpMediaSourceMode() {
  if (m_pExtractor != nullptr) {
    return ResultInvalidState;
  }

  if (m_pAllocatorInfo == nullptr) {
    m_pExtractorStorage = nullptr;
    return ResultOutOfMemory;
  }

  m_pExtractorStorage =
    AllocateMemory(sizeof(BaseMediaExtractor), m_pAllocatorInfo);
  if (m_pExtractorStorage == nullptr) {
    return ResultOutOfMemory;
  }

  m_pExtractor = new (m_pExtractorStorage) BaseMediaExtractor();
  Result result = m_pExtractor->Initialize(m_pAllocatorInfo, m_CacheSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  SetUpExtractorEvents();
  m_State.SetState(MediaState::State_MediaSourceMode);
  result = m_pExtractor->SetUpMediaSourceMode();
  if (!IsSucceeded(result)) {
    return result;
  }

  return DoSetMedia();
}

Result MediaExtractorImpl::DoSelectTrack(std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  int index = static_cast<Request::SelectTrackData*>(
    argument.get())->index;
  for (TrackInfo& info : *m_pTrackList) {
    if (info.index == index) {
      return {};
    }
  }

  Result result = m_pExtractor->SelectTrack(index);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_pTrackList->emplace_back();
  m_pTrackList->back().index = index;
  result = m_SystemEventManager.AcquireSystemEvent(
    &m_pTrackList->back().sampleAvailableEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_pTrackList->back().isSelected = false;
  return ToPublicResult(m_pExtractor->SetTrackSampleAvailableEventType(index,
    &m_pTrackList->back().sampleAvailableEvent));
}

Result MediaExtractorImpl::DoDeselectTrack(std::shared_ptr<void> argument) {
  if (m_pExtractor == nullptr) {
    return ResultExtractorUnavailable;
  }

  int index = static_cast<Request::DeselectTrackData*>(
    argument.get())->index;
  Result result = m_pExtractor->DeselectTrack(index);
  if (!IsSucceeded(result)) {
    return result;
  }

  for (auto it = m_pTrackList->begin(); it != m_pTrackList->end(); ++it) {
    if (it->index == index) {
      result = m_SystemEventManager.ReleaseSystemEvent(
        &it->sampleAvailableEvent);
      if (!IsSucceeded(result)) {
        return result;
      }

      m_pTrackList->erase(it);
      return {};
    }
  }

  return ResultNoTrackSelected;
}

}

namespace nn::movie::detail {

Result MediaExtractorImpl::SendMessage(MediaExtractorMessageType type,
  std::shared_ptr<void> data, bool isBlocking, int64_t timeoutUs) {
  auto message = MakeMessageData<MediaExtractorMessage>(m_pAllocatorInfo);
  message->data = data;
  message->type = type;
  message->waiter = nullptr;

  Result result;
  os::LockMutex(&m_MessageMutex);
  if (m_IsWorkerStopped) {
    result = ResultWorkerStopped;
  }
  else {
    result = ResultOutOfMemory;
    if (isBlocking) {
      message->waiter = std::allocate_shared<os::LightEvent>(
        StdLibAllocator<os::LightEvent>(m_pAllocatorInfo), false,
        os::EventClearMode_AutoClear);
    }

    void* buffer = nullptr;
    if (!isBlocking || message->waiter != nullptr) {
      buffer = AllocateMemory(sizeof(std::shared_ptr<MediaExtractorMessage>),
        m_pAllocatorInfo);
    }

    if (buffer != nullptr) {
      std::shared_ptr<MediaExtractorMessage> queued = message;
      auto holder =
        new (buffer) std::shared_ptr<MediaExtractorMessage>(queued);
      os::SendMessageQueue(&m_MessageQueue,
        reinterpret_cast<uintptr_t>(holder));
      queued = nullptr;
      if (type == MediaExtractorMessageType_Exit) {
        m_IsWorkerStopped = true;
      }

      os::UnlockMutex(&m_MessageMutex);
      if (!isBlocking) {
        return {};
      }

      if (timeoutUs < 0) {
        message->waiter->Wait();
      }
      else if (!message->waiter->TimedWait(TimeSpan{timeoutUs * 1000})) {
        return ResultMessageTimedOut;
      }

      return message->result;
    }
  }

  os::UnlockMutex(&m_MessageMutex);
  return result;
}

}

namespace nn::movie::detail {

Result MediaExtractorImpl::Finalize() {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_Finalize);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pWorkerThread != nullptr) {
    result = SendMessage(MediaExtractorMessageType_Exit, nullptr, false, -1);
    if (!IsSucceeded(result)) {
      return result;
    }

    os::WaitThread(&m_pWorkerThread->thread);
    ThreadManager::GetInstance()->_Destroy(m_pWorkerThread);
    m_pWorkerThread = nullptr;
  }

  if (m_pWorkerStack != nullptr) {
    if (ThreadManager::GetInstance()->_IsStackAllocatorConfigured()) {
      ThreadManager::GetInstance()->_StackFree(m_pWorkerStack);
    }
    else if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pWorkerStack, m_pAllocatorInfo);
    }

    m_pWorkerStack = nullptr;
  }

  if (m_pMessageQueueBuffer != nullptr) {
    os::FinalizeMessageQueue(&m_MessageQueue);
    if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pMessageQueueBuffer, m_pAllocatorInfo);
    }

    m_pMessageQueueBuffer = nullptr;
  }

  if (m_pTrackList != nullptr) {
    m_pTrackList->clear();
    m_pTrackList->~TrackList();
    if (m_pAllocatorInfo != nullptr) {
      FreeMemory(m_pTrackList, m_pAllocatorInfo);
    }

    m_pTrackList = nullptr;
  }

  if (m_IsFinalized) {
    return {};
  }

  result = m_SystemEventManager.ReleaseSystemEvent(&m_StreamSourceDataEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_SystemEventManager.ReleaseSystemEvent(&m_StreamSourceSeekEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_SystemEventManager.ReleaseSystemEvent(&m_SeekCompletedEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_EventManager.ReleaseEvent(&m_TaskCompletedEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_EventManager.ReleaseEvent(&m_ErrorEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_State.SetState(MediaState::State_None);
  m_IsFinalized = true;
  return {};
}

Result MediaExtractorImpl::Stop() {
  Result result = m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_Stop);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_State.GetState() == MediaState::State_Stopped) {
    return {};
  }

  result = SendMessage(MediaExtractorMessageType_Stop, nullptr, true, 100000);
  if (result.GetInnerValueForDebug() != ResultMessageTimedOut.value) {
    return result;
  }

  // The worker did not answer in time, the extractor is stopped from the
  // calling thread with the heap of this instance.
  HeapContext* heap = HeapMemoryManager::GetInstance().GetCurrentHeap();
  HeapMemoryManager::SetCurrentHeap(
    reinterpret_cast<HeapContext*>(m_pAllocatorInfo));
  m_State.SetState(MediaState::State_Stopped);
  result = ToPublicResult(m_pExtractor->Stop());
  HeapMemoryManager::SetCurrentHeap(heap);
  return result;
}

}
