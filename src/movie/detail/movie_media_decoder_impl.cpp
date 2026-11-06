#include <algorithm>
#include <cctype>
#include <cstring>
#include <new>

#include "movie/detail/movie_media_decoder_impl.hpp"
#include "movie/detail/movie_utils.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_heap_memory_manager.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_buffer.hpp"
#include "nn/os/multi_wait_utility.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/thread_api.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);

inline AllocatorInfo* GetCurrentAllocatorInfo(AllocatorInfo* allocatorInfo) {
  if (allocatorInfo != nullptr) {
    return allocatorInfo;
  }

  return reinterpret_cast<AllocatorInfo*>(
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

template <typename T, typename... Args>
__attribute__((noinline)) T* Make(AllocatorInfo* allocatorInfo,
  Args&&... args) {
  allocatorInfo = GetCurrentAllocatorInfo(allocatorInfo);
  if (allocatorInfo == nullptr) {
    return nullptr;
  }

  void* storage = AllocateMemory(sizeof(T), allocatorInfo);
  if (storage == nullptr) {
    return nullptr;
  }

  return new (storage) T(args...);
}

template <typename T>
void Delete(T* object, AllocatorInfo* allocatorInfo) {
  allocatorInfo = GetCurrentAllocatorInfo(allocatorInfo);
  if (allocatorInfo != nullptr) {
    object->~T();
    FreeMemory(object, allocatorInfo);
  }
}

template nn::movie::Buffer* Make<nn::movie::Buffer>(AllocatorInfo*);

}

namespace movie::detail {

using nn::movie::detail::AllocateMemory;
using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::FreeMemory;
using nn::movie::detail::ThreadInfo;
using nn::movie::detail::ThreadManager;

namespace {

constexpr MovieResult ResultTrackNotSelected = static_cast<MovieResult>(151);
constexpr MovieResult ResultTrackAlreadySelected =
  static_cast<MovieResult>(152);
constexpr MovieResult ResultInvalidTrack = static_cast<MovieResult>(153);
constexpr MovieResult ResultNoTrackAvailable = static_cast<MovieResult>(154);
constexpr MovieResult ResultUnsupportedTrack = static_cast<MovieResult>(150);
constexpr MovieResult ResultEventListFull = static_cast<MovieResult>(22);
constexpr MovieResult ResultThreadStartTimeout = static_cast<MovieResult>(31);

constexpr size_t ThreadStackSize = 0x20000;
constexpr size_t ThreadStackAlignment = 0x1000;
constexpr size_t SampleAlignment = 16;
constexpr nn::movie::BufferFlags BufferFlags_EndOfStream =
  static_cast<nn::movie::BufferFlags>(8);
constexpr auto ComponentType_MediaDecoder =
  static_cast<ThreadInfo::ComponentType>(3);

inline bool IsEndOfStream(nn::Result result) {
  return (result.value & 0x3fffff) == 0x40100;
}

inline int64_t GetMilliSeconds() {
  return nn::os::ConvertToTimeSpan(nn::os::GetSystemTick()).nanoseconds /
    1000000;
}

void MediaDecoderThreadFunction(void* argument) {
  NN_ABORT_UNLESS_NOT_NULL(argument);
  static_cast<MediaDecoderImpl*>(argument)->ThreadLoop();
}

}

MediaDecoderImpl::MediaDecoderImpl()
  : m_pVideoDecoderMemory(nullptr), m_pAudioDecoderMemory(nullptr),
    m_pReservedMemory(nullptr), m_VideoDecoderMemorySize(0),
    m_AudioDecoderMemorySize(0), m_ReservedMemorySize(0),
    m_AudioOutputFormat(static_cast<AudioDecoderOutputFormat>(2)),
    m_AudioCodecMode(static_cast<AudioCodecMode>(1)),
    m_VideoOutputFormat(static_cast<VideoDecoderOutputFormat>(3)),
    m_VideoCodecMode(static_cast<VideoCodecMode>(1)), m_IsFinalized(false),
    m_IsAudioDecoderStarted(false), m_IsVideoDecoderStarted(false),
    m_AudioMutex(true), m_VideoMutex(true), m_Mutex(true),
    m_pThreadStack(nullptr), m_IsThreadCreated(false),
    m_IsThreadRunning(false), m_pThreadInfo(nullptr), m_pInstance(nullptr),
    m_pAllocatorInfo(nullptr), m_pVideoInputReadyEvent(nullptr),
    m_pReserved0(nullptr), m_pReserved1(nullptr),
    m_pVideoSampleAvailableEvent(nullptr),
    m_pAudioSampleAvailableEvent(nullptr), m_pReserved2(nullptr),
    m_pAudioInputReadyEvent(nullptr), m_TrackCount(0),
    m_NoTrackIndex(InvalidTrackIndex), m_VideoTrackIndex(InvalidTrackIndex),
    m_VideoMaxInputSize(0), m_VideoMinInputSize(0x10000), m_Width(0),
    m_Height(0), m_pVideoSampleMemory(nullptr),
    m_pVideoSampleBuffer(nullptr), m_VideoConfigurationSize(0),
    m_pVideoConfiguration(nullptr), m_IsVideoTrackSelected(false),
    m_AudioTrackIndex(InvalidTrackIndex), m_AudioMaxInputSize(0),
    m_AudioMinInputSize(0x1000), m_ChannelCount(0), m_SampleRate(0),
    m_pAudioSampleBuffer(nullptr), m_pAudioSampleMemory(nullptr),
    m_AudioConfigurationSize(0), m_pAudioConfiguration(nullptr),
    m_IsAudioTrackSelected(false), m_AudioSampleCount(0),
    m_VideoSampleCount(0), m_AudioInputBufferCount(0),
    m_VideoInputBufferCount(0), m_IsExitRequested(false), m_EventList() {
}

MediaDecoderImpl::~MediaDecoderImpl() {
  Finalize();
}

MovieResult MediaDecoderImpl::Initialize(AllocatorInfo* allocatorInfo,
  void* memory, size_t memorySize, size_t cacheSize,
  AudioDecoderOutputFormat audioFormat, AudioCodecMode audioMode,
  VideoDecoderOutputFormat videoFormat, VideoCodecMode videoMode,
  void* instance) {
  m_pAllocatorInfo = allocatorInfo;
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_Initialize);
  if (IsSucceeded(result)) {
    if (!m_EventList.Add(&m_ExitEvent)) {
      result = ResultEventListFull;
    }
    else {
      m_IsFinalized = false;
      m_IsVideoTrackSelected = false;
      m_IsAudioTrackSelected = false;
      m_pInstance = instance;
      size_t quarterSize = memorySize / 4;
      uint8_t* base = static_cast<uint8_t*>(memory);
      m_AudioDecoderMemorySize = quarterSize;
      m_ReservedMemorySize = quarterSize;
      m_AudioOutputFormat = audioFormat;
      m_AudioCodecMode = audioMode;
      m_VideoOutputFormat = videoFormat;
      m_VideoCodecMode = videoMode;
      m_pVideoDecoderMemory = base + quarterSize;
      m_pAudioDecoderMemory = base + quarterSize * 2;
      m_pReservedMemory = base + quarterSize * 3;
      m_VideoDecoderMemorySize = quarterSize;
      result = ConvertNnMovieToMovieResult(m_Extractor.Initialize(memory,
        memorySize, cacheSize));
      if (IsSucceeded(result)) {
        m_State.SetState(MediaState::State_Initialized);
        result = MovieResult_Success;
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

inline void MediaDecoderImpl::ReleaseMemory(void** pMemory) {
  if (*pMemory != nullptr) {
    nn::movie::detail::FreeMemory(*pMemory, m_pAllocatorInfo);
    *pMemory = nullptr;
  }
}

inline void MediaDecoderImpl::DeleteBuffer(nn::movie::Buffer** pBuffer) {
  if (*pBuffer != nullptr) {
    nn::movie::detail::Delete(*pBuffer, m_pAllocatorInfo);
    *pBuffer = nullptr;
  }
}

MovieResult MediaDecoderImpl::FinalizeMediaDecoderThread() {
  if (m_IsThreadCreated) {
    m_IsThreadCreated = false;
    if (m_IsThreadRunning) {
      m_IsThreadRunning = false;
      nn::os::SignalEvent(&m_ExitEvent);
      nn::os::WaitThread(&m_pThreadInfo->thread);
    }

    ThreadManager::GetInstance()->_Destroy(m_pThreadInfo);
  }

  if (m_pThreadStack != nullptr) {
    FreeMemory(m_pThreadStack, m_pAllocatorInfo);
    m_pThreadStack = nullptr;
  }

  return MovieResult_Success;
}

void MediaDecoderImpl::Finalize() {
  m_Mutex.Lock();
  if (m_IsFinalized) {
    m_Mutex.Unlock();
    return;
  }

  m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_Finalize);
  if (m_IsAudioDecoderStarted) {
    m_AudioMutex.Lock();
    m_AudioDecoder.Stop();
    m_IsAudioDecoderStarted = false;
    m_AudioMutex.Unlock();
  }

  if (m_IsVideoDecoderStarted) {
    m_VideoMutex.Lock();
    m_VideoDecoder.Stop();
    m_IsVideoDecoderStarted = false;
    m_VideoMutex.Unlock();
  }

  FinalizeMediaDecoderThread();
  m_Extractor.Finalize();
  m_AudioMutex.Lock();
  m_AudioDecoder.Finalize();
  m_AudioMutex.Unlock();
  m_VideoMutex.Lock();
  m_VideoDecoder.Finalize();
  m_VideoMutex.Unlock();
  ReleaseMemory(&m_pVideoConfiguration);
  ReleaseMemory(&m_pAudioConfiguration);
  ReleaseMemory(&m_pVideoSampleMemory);
  ReleaseMemory(&m_pAudioSampleMemory);
  DeleteBuffer(&m_pAudioSampleBuffer);
  DeleteBuffer(&m_pVideoSampleBuffer);
  m_IsVideoTrackSelected = false;
  m_IsAudioTrackSelected = false;
  m_EventList.Remove(&m_ExitEvent);
  m_State.SetState(MediaState::State_Created);
  m_IsFinalized = true;
  m_Mutex.Unlock();
}

MovieResult MediaDecoderImpl::SetUriMedia(const char* uri, int length) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_SetUriMedia);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.SetUriMedia(uri,
      length));
    if (IsSucceeded(result)) {
      m_State.SetState(MediaState::State_Prepared);
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::SetInMemoryMedia(const void* data,
  size_t size) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_SetInMemoryMedia);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.SetInMemoryMedia(data,
      size));
    if (IsSucceeded(result)) {
      m_State.SetState(MediaState::State_Prepared);
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetTrackCount(int* pOutCount) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetTrackCount);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackCount(
      pOutCount));
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
      m_TrackCount = *pOutCount;
    }
  }

  m_Mutex.Unlock();
  return result;
}

inline MovieResult MediaDecoderImpl::SelectAudioTrack(int index) {
  if (!m_TrackProperty.GetSize(&m_AudioMaxInputSize, "max-input-size")) {
    if (m_AudioMaxInputSize < m_AudioMinInputSize) {
      m_AudioMaxInputSize = m_AudioMinInputSize;
    }
  }

  m_pAudioSampleBuffer = nn::movie::detail::Make<nn::movie::Buffer>(
    m_pAllocatorInfo);
  if (m_pAudioSampleBuffer == nullptr) {
    return MovieResult_OutOfMemory;
  }

  m_pAudioSampleMemory = AllocateMemory(SampleAlignment, m_AudioMaxInputSize,
    m_pAllocatorInfo);
  if (m_pAudioSampleMemory == nullptr) {
    return MovieResult_OutOfMemory;
  }

  MovieResult result = ConvertNnMovieToMovieResult(
    m_pAudioSampleBuffer->SetBuffer(m_pAudioSampleMemory,
      m_AudioMaxInputSize, 0));
  if (!IsSucceeded(result)) {
    return result;
  }

  auto mimeType = static_cast<nn::movie::MediaMimeType>(-1);
  result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackMimeType(
    &mimeType, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  if (static_cast<uint32_t>(mimeType) - 65 > 1) {
    return ResultUnsupportedTrack;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.SelectTrack(index));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackConfigurationSize(
    &m_AudioConfigurationSize, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  m_pAudioConfiguration = AllocateMemory(SampleAlignment,
    m_AudioConfigurationSize, m_pAllocatorInfo);
  if (m_pAudioConfiguration == nullptr) {
    return MovieResult_OutOfMemory;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackConfiguration(
    m_pAudioConfiguration, m_AudioConfigurationSize, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.GetSampleAvailableEvent(
    &m_pAudioSampleAvailableEvent, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_AudioDecoder.Initialize(m_pAudioDecoderMemory,
    m_AudioDecoderMemorySize, mimeType, m_AudioOutputFormat,
    m_AudioCodecMode);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_AudioDecoder.GetInputReadyEvent(&m_pAudioInputReadyEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_AudioDecoder.Configure(&m_TrackProperty, m_pAudioConfiguration,
    m_AudioConfigurationSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_AudioTrackIndex = index;
  m_IsAudioTrackSelected = true;
  return MovieResult_Success;
}

inline MovieResult MediaDecoderImpl::SelectVideoTrack(int index) {
  if (!m_TrackProperty.GetInt32(&m_Width, "width") ||
      !m_TrackProperty.GetInt32(&m_Height, "height")) {
    return ResultUnsupportedTrack;
  }

  size_t sampleSize;
  if (m_TrackProperty.GetSize(&m_VideoMaxInputSize, "max-input-size")) {
    sampleSize = m_VideoMaxInputSize;
  }
  else {
    sampleSize = std::max(
      static_cast<size_t>(m_Width * m_Height * 3 / 2) / 6,
      m_VideoMinInputSize);
    m_VideoMaxInputSize = sampleSize;
  }

  m_pVideoSampleMemory = AllocateMemory(SampleAlignment, sampleSize,
    m_pAllocatorInfo);
  if (m_pVideoSampleMemory == nullptr) {
    return MovieResult_OutOfMemory;
  }

  m_pVideoSampleBuffer = nn::movie::detail::Make<nn::movie::Buffer>(
    m_pAllocatorInfo);
  if (m_pVideoSampleBuffer == nullptr) {
    return MovieResult_OutOfMemory;
  }

  MovieResult result = ConvertNnMovieToMovieResult(
    m_pVideoSampleBuffer->SetBuffer(m_pVideoSampleMemory,
      m_VideoMaxInputSize, 0));
  if (!IsSucceeded(result)) {
    return result;
  }

  auto mimeType = static_cast<nn::movie::MediaMimeType>(-1);
  result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackMimeType(
    &mimeType, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  if (mimeType > 3 || mimeType == 2) {
    return ResultUnsupportedTrack;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.SelectTrack(index));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackConfigurationSize(
    &m_VideoConfigurationSize, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  m_pVideoConfiguration = AllocateMemory(SampleAlignment,
    m_VideoConfigurationSize, m_pAllocatorInfo);
  if (m_pVideoConfiguration == nullptr) {
    return MovieResult_OutOfMemory;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackConfiguration(
    m_pVideoConfiguration, m_VideoConfigurationSize, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.GetSampleAvailableEvent(
    &m_pVideoSampleAvailableEvent, index));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_VideoDecoder.Initialize(m_pVideoDecoderMemory,
    m_VideoDecoderMemorySize, mimeType, m_VideoOutputFormat,
    m_VideoCodecMode);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_VideoDecoder.Configure(&m_TrackProperty, m_pVideoConfiguration,
    m_VideoConfigurationSize);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_VideoDecoder.GetInputReadyEvent(&m_pVideoInputReadyEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_VideoTrackIndex = index;
  m_IsVideoTrackSelected = true;
  return MovieResult_Success;
}

MovieResult MediaDecoderImpl::SelectTrack(int index) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_SelectTrack);
  if (IsSucceeded(result)) {
    if (index == m_NoTrackIndex) {
      result = ResultInvalidTrack;
    }
    else if (index == m_VideoTrackIndex || index == m_AudioTrackIndex) {
      result = ResultTrackAlreadySelected;
    }
    else if (m_VideoTrackIndex != m_NoTrackIndex &&
        m_AudioTrackIndex != m_NoTrackIndex) {
      result = ResultNoTrackAvailable;
    }
    else {
      result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackProperties(
        &m_TrackProperty, index));
      if (IsSucceeded(result)) {
        char mime[16] = {};
        if (!m_TrackProperty.GetString(mime, sizeof(mime), "mime")) {
          result = ResultUnsupportedTrack;
        }
        else {
          for (int i = 0; i < 6; i++) {
            mime[i] = std::tolower(mime[i]);
          }

          if (std::memcmp(mime, "video/", 6) == 0) {
            result = SelectVideoTrack(index);
          }
          else if (std::memcmp(mime, "audio/", 6) == 0 &&
              m_TrackProperty.GetInt32(&m_ChannelCount, "channel-count") &&
              m_TrackProperty.GetInt32(&m_SampleRate, "sample-rate")) {
            result = SelectAudioTrack(index);
          }
          else {
            result = ResultUnsupportedTrack;
          }
        }
      }
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::DeselectTrack(int index) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_DeselectTrack);
  if (IsSucceeded(result)) {
    if (index == m_NoTrackIndex) {
      result = ResultInvalidTrack;
    }
    else if (index == m_VideoTrackIndex || index == m_AudioTrackIndex) {
      result = ConvertNnMovieToMovieResult(m_Extractor.DeselectTrack(index));
      if (IsSucceeded(result)) {
        if (index == m_AudioTrackIndex) {
          m_AudioMutex.Lock();
          ReleaseMemory(&m_pAudioConfiguration);
          ReleaseMemory(&m_pAudioSampleMemory);
          m_AudioDecoder.Finalize();
          m_IsAudioTrackSelected = false;
          m_AudioTrackIndex = m_NoTrackIndex;
          m_AudioMutex.Unlock();
        }

        if (index == m_VideoTrackIndex) {
          m_VideoMutex.Lock();
          ReleaseMemory(&m_pVideoConfiguration);
          ReleaseMemory(&m_pVideoSampleMemory);
          m_VideoDecoder.Finalize();
          m_IsVideoTrackSelected = false;
          m_VideoTrackIndex = m_NoTrackIndex;
          m_VideoMutex.Unlock();
        }

        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetTrackProperties(
  nn::movie::MediaProperty* pOutProperty, int index) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetTrackProperties);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.GetTrackProperties(
      pOutProperty, index));
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::SeekTo(nn::TimeSpan time,
  nn::movie::SeekMode mode) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_SeekTo);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.SeekTo(time, mode));
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetSeekCompletedEvent(
  nn::os::SystemEventType** pOutEvent) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetSeekCompletedEvent);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.GetSeekCompletedEvent(
      pOutEvent));
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetCacheRanges(int* pOutCount) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetCacheRanges);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.GetCacheRangeCount(
      pOutCount));
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetCacheRange(nn::TimeSpan* pOutStart,
  nn::TimeSpan* pOutEnd, int index) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetCacheRange);
  if (IsSucceeded(result)) {
    result = ConvertNnMovieToMovieResult(m_Extractor.GetCacheRange(pOutStart,
      pOutEnd, index));
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::IsTrackSelected() const {
  if (m_IsAudioTrackSelected || m_IsVideoTrackSelected) {
    return MovieResult_Success;
  }

  return ResultTrackNotSelected;
}

MovieResult MediaDecoderImpl::IsAudioTrackSelected() const {
  if (m_IsAudioTrackSelected) {
    return MovieResult_Success;
  }

  return ResultTrackNotSelected;
}

MovieResult MediaDecoderImpl::IsVideoTrackSelected() const {
  if (m_IsVideoTrackSelected) {
    return MovieResult_Success;
  }

  return ResultTrackNotSelected;
}

MovieResult MediaDecoderImpl::GetAudioFrameReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetAudioFrameReadyEvent);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      nn::os::SystemEventType* event = nullptr;
      result = m_AudioDecoder.GetOutputReadyEvent(&event);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
        *pOutEvent = event;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetAudioFrameFormatChangedEvent(
  nn::os::SystemEventType** pOutEvent) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetAudioFrameFormatChangedEvent);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      nn::os::SystemEventType* event = nullptr;
      result = m_AudioDecoder.GetFormatChangedEvent(&event);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
        *pOutEvent = event;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetAudioFrameProperties(
  nn::movie::MediaProperty* pOut) {
  m_AudioMutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetAudioFrameProperties);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      result = m_AudioDecoder.GetOutputFrameProperties(pOut);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_AudioMutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetAudioFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetAudioFrameRequirements);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      result = m_AudioDecoder.GetAudioFrameRequirements(pOut);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::RegisterAudioFrame(AudioFrame** frames,
  int count) {
  m_AudioMutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_RegisterAudioFrame);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      result = m_AudioDecoder.RegisterAudioFrame(frames, count);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_AudioMutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::AcquireAudioFrame(AudioFrame** pOutFrame,
  int* pOutCount) {
  m_AudioMutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_AcquireAudioFrame);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      result = m_AudioDecoder.AcquireAudioFrame(pOutFrame, pOutCount);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_AudioMutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::ReleaseAudioFrame(AudioFrame* frame) {
  m_AudioMutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_ReleaseAudioFrame);
  if (IsSucceeded(result)) {
    if (m_IsAudioTrackSelected) {
      result = m_AudioDecoder.ReleaseAudioFrame(frame);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_AudioMutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetVideoFrameReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetVideoFrameReadyEvent);
  if (IsSucceeded(result)) {
    if (m_IsVideoTrackSelected) {
      nn::os::SystemEventType* event = nullptr;
      result = m_VideoDecoder.GetOutputReadyEvent(&event);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
        *pOutEvent = event;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetVideoFrameFormatChangedEvent(
  nn::os::SystemEventType** pOutEvent) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetVideoFrameFormatChangedEvent);
  if (IsSucceeded(result)) {
    if (m_IsVideoTrackSelected) {
      nn::os::SystemEventType* event = nullptr;
      result = m_VideoDecoder.GetFormatChangedEvent(&event);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
        *pOutEvent = event;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetVideoFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetVideoFrameRequirements);
  if (IsSucceeded(result)) {
    if (m_IsVideoTrackSelected) {
      result = m_VideoDecoder.GetVideoFrameRequirements(pOut);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::GetVideoFrameProperties(
  nn::movie::MediaProperty* pOut) {
  m_VideoMutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_GetVideoFrameProperties);
  if (IsSucceeded(result)) {
    if (m_IsVideoTrackSelected) {
      result = m_VideoDecoder.GetOutputFrameProperties(pOut);
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }
    else {
      result = ResultTrackNotSelected;
    }
  }

  m_VideoMutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::RegisterVideoFrame(VideoFrame** frames,
  int count) {
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_RegisterVideoFrame);
  if (IsSucceeded(result)) {
    result = m_VideoDecoder.RegisterVideoFrame(frames, count);
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  return result;
}

MovieResult MediaDecoderImpl::AcquireVideoFrame(VideoFrame** pOutFrame,
  int* pOutCount) {
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_AcquireVideoFrame);
  if (IsSucceeded(result)) {
    result = m_VideoDecoder.AcquireVideoFrame(pOutFrame, pOutCount);
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  return result;
}

MovieResult MediaDecoderImpl::ReleaseVideoFrame(VideoFrame* frame) {
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_ReleaseVideoFrame);
  if (IsSucceeded(result)) {
    result = m_VideoDecoder.ReleaseVideoFrame(frame);
    if (IsSucceeded(result)) {
      result = MovieResult_Success;
    }
  }

  return result;
}

MovieResult MediaDecoderImpl::InitializeMediaDecoderThread() {
  m_pThreadStack = AllocateMemory(ThreadStackAlignment, ThreadStackSize,
    m_pAllocatorInfo);
  if (m_pThreadStack == nullptr) {
    return MovieResult_OutOfMemory;
  }

  int priority =
    ThreadManager::GetInstance()->_GetThreadPriorityByInstance(m_pInstance);
  uint64_t coreMask =
    ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(m_pInstance);
  MovieResult result = ConvertNnMovieToMovieResult({static_cast<uint32_t>(
    ThreadManager::_StaticCreate(ComponentType_MediaDecoder, &m_pThreadInfo,
      MediaDecoderThreadFunction, this, m_pThreadStack, ThreadStackSize,
      priority, "MediaDecoderThread", coreMask, m_pInstance))});
  if (!IsSucceeded(result)) {
    return result;
  }

  m_IsThreadCreated = true;
  nn::os::StartThread(&m_pThreadInfo->thread);
  return MovieResult_Success;
}

MovieResult MediaDecoderImpl::Start() {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_Start);
  if (!IsSucceeded(result)) {
    m_Mutex.Unlock();
    return result;
  }

  if (!m_IsAudioTrackSelected && !m_IsVideoTrackSelected) {
    m_Mutex.Unlock();
    return ResultTrackNotSelected;
  }

  result = InitializeMediaDecoderThread();
  if (result != MovieResult_Success) {
    m_Mutex.Unlock();
    return result;
  }

  int64_t deadline = GetMilliSeconds() + 2000;
  do {
    if (m_IsThreadRunning) {
      break;
    }

    nn::os::SleepThread(nn::TimeSpan{2000000});
  } while (GetMilliSeconds() < deadline);

  if (!m_IsThreadRunning) {
    m_Mutex.Unlock();
    return ResultThreadStartTimeout;
  }

  if (m_AudioTrackIndex != m_NoTrackIndex && m_IsAudioTrackSelected) {
    m_AudioMutex.Lock();
    result = m_AudioDecoder.Start();
    if (!IsSucceeded(result)) {
      m_AudioMutex.Unlock();
      m_Mutex.Unlock();
      return result;
    }

    m_IsAudioDecoderStarted = true;
    m_AudioMutex.Unlock();
  }

  if (m_VideoTrackIndex != m_NoTrackIndex && m_IsVideoTrackSelected) {
    m_VideoMutex.Lock();
    result = m_VideoDecoder.Start();
    if (!IsSucceeded(result)) {
      m_VideoMutex.Unlock();
      m_Mutex.Unlock();
      return result;
    }

    m_IsVideoDecoderStarted = true;
    m_VideoMutex.Unlock();
  }

  result = ConvertNnMovieToMovieResult(m_Extractor.Start());
  if (IsSucceeded(result)) {
    m_State.SetState(MediaState::State_Started);
    result = MovieResult_Success;
  }

  m_Mutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::Stop() {
  m_Mutex.Lock();
  MovieResult result = m_State.ValidateCurrentState(
    MediaDecoderState::MediaDecoderFunctions_Stop);
  if (!IsSucceeded(result)) {
    m_Mutex.Unlock();
    return result;
  }

  if (m_IsAudioDecoderStarted) {
    m_AudioMutex.Lock();
    result = m_AudioDecoder.Stop();
    if (!IsSucceeded(result)) {
      m_AudioMutex.Unlock();
      m_Mutex.Unlock();
      return result;
    }

    m_IsAudioDecoderStarted = false;
    m_AudioMutex.Unlock();
  }

  if (m_IsVideoDecoderStarted) {
    m_VideoMutex.Lock();
    result = m_VideoDecoder.Stop();
    if (!IsSucceeded(result)) {
      m_VideoMutex.Unlock();
      m_Mutex.Unlock();
      return result;
    }

    m_IsVideoDecoderStarted = false;
    m_VideoMutex.Unlock();
  }

  m_State.SetState(MediaState::State_Stopped);
  m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult MediaDecoderImpl::ProcessAudioInputBufferEvent() {
  if (IsEndOfStream(m_Extractor.ReadSamples(m_pAudioSampleBuffer,
      m_AudioTrackIndex))) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(m_pAudioSampleBuffer->SetBufferFlags(
      BufferFlags_EndOfStream));
  }

  m_AudioSampleCount--;
  m_AudioMutex.Lock();
  MovieResult result = m_AudioDecoder.DecodeAsync(m_pAudioSampleBuffer);
  if (IsSucceeded(result)) {
    result = MovieResult_Success;
    m_AudioInputBufferCount--;
  }

  m_AudioMutex.Unlock();
  return result;
}

MovieResult MediaDecoderImpl::ProcessVideoInputBufferEvent() {
  if (IsEndOfStream(m_Extractor.ReadSamples(m_pVideoSampleBuffer,
      m_VideoTrackIndex))) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(m_pVideoSampleBuffer->SetBufferFlags(
      BufferFlags_EndOfStream));
  }

  m_VideoSampleCount--;
  m_VideoMutex.Lock();
  MovieResult result = m_VideoDecoder.DecodeAsync(m_pVideoSampleBuffer);
  if (IsSucceeded(result)) {
    result = MovieResult_Success;
    m_VideoInputBufferCount--;
  }

  m_VideoMutex.Unlock();
  return result;
}

int MediaDecoderImpl::ThreadLoopMultiwaitAudio() {
  return nn::os::WaitAny(m_pAudioInputReadyEvent, m_pAudioSampleAvailableEvent,
    &m_ExitEvent);
}

int MediaDecoderImpl::ThreadLoopMultiwaitVideo() {
  return nn::os::WaitAny(m_pVideoInputReadyEvent, m_pVideoSampleAvailableEvent,
    &m_ExitEvent);
}

int MediaDecoderImpl::ThreadLoopMultiwaitAudioVideo() {
  return nn::os::WaitAny(m_pVideoInputReadyEvent, m_pAudioInputReadyEvent,
    m_pAudioSampleAvailableEvent, m_pVideoSampleAvailableEvent, &m_ExitEvent);
}

void MediaDecoderImpl::ThreadLoop() {
  enum Event {
    Event_VideoInputReady,
    Event_AudioInputReady,
    Event_AudioSampleAvailable,
    Event_VideoSampleAvailable,
  };

  m_IsThreadRunning = true;
  do {
    int event;
    if (m_IsAudioTrackSelected) {
      if (m_IsVideoTrackSelected) {
        event = ThreadLoopMultiwaitAudioVideo();
      }
      else {
        switch (ThreadLoopMultiwaitAudio()) {
          case 0:
            event = Event_AudioInputReady;
            break;
          case 1:
            event = Event_AudioSampleAvailable;
            break;
          default:
            event = -1;
            break;
        }
      }
    }
    else if (m_IsVideoTrackSelected) {
      switch (ThreadLoopMultiwaitVideo()) {
        case 0:
          event = Event_VideoInputReady;
          break;
        case 1:
          event = Event_VideoSampleAvailable;
          break;
        default:
          event = -1;
          break;
      }
    }
    else {
      return;
    }

    switch (event) {
      case Event_VideoInputReady:
        nn::os::ClearSystemEvent(m_pVideoInputReadyEvent);
        m_VideoInputBufferCount++;
        if (m_VideoSampleCount >= 1) {
          ProcessVideoInputBufferEvent();
        }

        break;
      case Event_AudioInputReady:
        nn::os::ClearSystemEvent(m_pAudioInputReadyEvent);
        m_AudioInputBufferCount++;
        if (m_AudioSampleCount >= 1) {
          ProcessAudioInputBufferEvent();
        }

        break;
      case Event_AudioSampleAvailable:
        nn::os::ClearSystemEvent(m_pAudioSampleAvailableEvent);
        m_AudioSampleCount++;
        if (m_AudioInputBufferCount >= 1) {
          ProcessAudioInputBufferEvent();
        }

        break;
      case Event_VideoSampleAvailable:
        nn::os::ClearSystemEvent(m_pVideoSampleAvailableEvent);
        m_VideoSampleCount++;
        if (m_VideoInputBufferCount >= 1) {
          ProcessVideoInputBufferEvent();
        }

        break;
      default:
        m_IsExitRequested = true;
        break;
    }
  } while (!m_IsExitRequested);
}

}
