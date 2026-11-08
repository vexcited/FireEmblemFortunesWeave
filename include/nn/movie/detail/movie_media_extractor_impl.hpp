#pragma once

#include <list>
#include <memory>
#include <stddef.h>
#include <stdint.h>

#include "nandroid/media/StreamSourceObserver.h"
#include "nn/movie/detail/movie_event_manager.hpp"
#include "nn/movie/detail/movie_i_media_extractor.hpp"
#include "nn/movie/detail/movie_media_extractor_state.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/os/event.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/message_queue.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

struct ThreadInfo;

// Results from the movie module reporting success are folded to success.
inline bool IsSucceeded(Result result) {
  return result.IsSuccess() || (result.value & 0x3fffff) == 0x40100;
}

inline Result ToPublicResult(Result result) {
  return (result.value & 0x3fffff) == 0x40100 ? Result{} : result;
}

class MediaExtractorImpl : public nandroid::StreamSourceObserver {
  friend class ExtractorUnwrapper;

public:
  enum MediaExtractorMessageType : int32_t {
    MediaExtractorMessageType_None,
    MediaExtractorMessageType_SetMediaUri,
    MediaExtractorMessageType_SetMediaBuffer,
    MediaExtractorMessageType_SetUpStreamSource,
    MediaExtractorMessageType_SetUpMediaSourceMode,
    MediaExtractorMessageType_SelectTrack,
    MediaExtractorMessageType_DeselectTrack,
    MediaExtractorMessageType_GetMediaTrackProperty,
    MediaExtractorMessageType_GetTrackMimeType,
    MediaExtractorMessageType_GetMediaTrackConfigurationSize,
    MediaExtractorMessageType_GetMediaTrackConfiguration,
    MediaExtractorMessageType_Start,
    MediaExtractorMessageType_Stop,
    MediaExtractorMessageType_SeekTo,
    MediaExtractorMessageType_GetSampleBufferSize,
    MediaExtractorMessageType_ReadSamples,
    MediaExtractorMessageType_Reserved,
    MediaExtractorMessageType_GetSampleTime,
    MediaExtractorMessageType_GetSampleProperties,
    MediaExtractorMessageType_Exit,
  };

  struct MediaExtractorMessage {
    struct SetMediaUriData {
      const char* uri;
      int length;
    };

    struct SetMediaBufferData {
      const void* data;
      size_t size;
    };

    struct SetUpStreamSourceData {
      int64_t size;
    };

    struct SelectTrackData {
      int index;
    };

    struct DeselectTrackData {
      int index;
    };

    struct GetMediaTrackPropertyData {
      MediaProperty* pProperty;
      int index;
    };

    struct GetTrackMimeTypeData {
      MediaMimeType* pMimeType;
      int index;
    };

    struct GetMediaTrackConfigurationSizeData {
      size_t* pSize;
      int index;
    };

    struct GetMediaTrackConfigurationData {
      void* buffer;
      size_t size;
      int index;
    };

    struct SeekToData {
      int64_t timeUs;
      SeekMode mode;
    };

    struct GetSampleBufferSizeData {
      size_t* pSize;
      int index;
    };

    struct ReadSamplesData {
      void* buffer;
      size_t* pSize;
      int64_t* pTimeUs;
      uint32_t* pFlags;
      size_t bufferSize;
      int index;
    };

    struct GetSampleTimeData {
      int64_t* pTimeUs;
      int index;
    };

    struct GetSamplePropertiesData {
      MediaProperty* pProperty;
      int index;
    };

    MediaExtractorMessageType type;
    std::shared_ptr<void> data;
    Result result;
    std::shared_ptr<os::LightEvent> waiter;
  };

  class TrackInfo {
  public:
    TrackInfo();
    ~TrackInfo();

    os::SystemEventType sampleAvailableEvent;
    int index;
    bool isSelected;
  };

  using TrackList = std::list<TrackInfo, StdLibAllocator<TrackInfo>>;

  explicit MediaExtractorImpl(bool isHls);
  ~MediaExtractorImpl() override;

  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize,
    void* threadInstance);
  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize,
    NetworkConnection* connection, size_t connectionCount,
    void* threadInstance);
  Result Finalize();

  bool IsHlsUri(const char* uri);
  bool IsHttpLiveUri(const char* uri);

  Result SetUriMedia(const char* uri, int length);
  Result SetInMemoryMedia(const void* data, size_t size);
  Result SetUpStreamSource(int64_t size);
  Result GetEventsForStreamSource(os::SystemEventType** pOutDataEvent,
    os::SystemEventType** pOutSeekEvent);
  Result GetStreamSourceSeekPosition(int64_t* pOutPosition);
  Result SendStreamSourceData(const void* data, int64_t size);
  Result SetUpMediaSourceMode();
  Result GetEventsForMediaSourceMode(os::SystemEventType** pOutDataEvent,
    os::SystemEventType** pOutSeekEvent);
  Result GetMediaSourceModeSeekPosition(int64_t* pOutPosition);
  Result AppendMediaSourceData(const void* data, size_t size);
  Result GetTrackCount(int* pOutCount);
  Result SelectTrack(int index);
  Result DeselectTrack(int index);
  Result GetTrackProperties(MediaProperty* pOutProperty, int index);
  Result GetTrackMimeType(MediaMimeType* pOutMimeType, int index);
  Result GetTrackConfigurationSize(size_t* pOutSize, int index);
  Result GetTrackConfiguration(void* buffer, size_t size, int index);
  Result Start();
  Result Stop();
  Result GetSampleAvailableEvent(os::SystemEventType** pOutEvent, int index);
  Result GetSeekCompletedEvent(os::SystemEventType** pOutEvent);
  Result GetTaskCompletedEvent(os::EventType** pOutEvent);
  Result SeekTo(int64_t timeUs, SeekMode mode);
  Result GetSampleBufferSize(size_t* pOutSize, int index);
  Result ReadSamples(void* buffer, size_t* pOutSize, int64_t* pOutTimeUs,
    uint32_t* pOutFlags, size_t size, int index);
  Result GetSampleTime(int64_t* pOutTimeUs, int index);
  Result GetSampleProperties(MediaProperty* pOutProperty, int index);
  Result GetCacheRangeCount(int* pOutCount);
  Result GetCacheRange(int64_t* pOutStartUs, int64_t* pOutEndUs, int index);
  Result IsCacheFull(bool* pOutIsFull, bool* pOutIsEndOfStream);
  Result GetTaskCompletedResult();
  Result StreamSourceReadData(void* buffer, int64_t* pOutSize,
    int64_t size) override;
  Result StreamSourceSeekTo(int64_t position) override;
  Result StreamSourceSetSize(int64_t size);
  Result SetPreferredPixels(size_t pixels);
  Result SetMinBandwidthSamples(size_t samples);

  Result SendMessage(MediaExtractorMessageType type,
    std::shared_ptr<void> data, bool isBlocking, int64_t timeoutMs);
  static void ExtractorWorker(void* argument);

  Result AllocateCoreMediaExtractor(IMediaExtractor** pOutExtractor,
    const char* uri);
  void DeallocateCoreMediaExtractor();

  Result DoSetMediaUri(std::shared_ptr<void> argument);
  Result DoSetMediaBuffer(std::shared_ptr<void> argument);
  Result DoSetUpStreamSource(std::shared_ptr<void> argument);
  Result DoSetUpMediaSourceMode();
  Result DoSetMedia();
  Result DoSelectTrack(std::shared_ptr<void> argument);
  Result DoDeselectTrack(std::shared_ptr<void> argument);
  Result DoGetMediaTrackProperty(std::shared_ptr<void> argument);
  Result DoGetTrackMimeType(std::shared_ptr<void> argument);
  Result DoGetMediaTrackConfigurationSize(std::shared_ptr<void> argument);
  Result DoGetMediaTrackConfiguration(std::shared_ptr<void> argument);
  Result DoStart();
  Result DoStop();
  Result DoSeekTo(std::shared_ptr<void> argument);
  Result DoGetSampleBufferSize(std::shared_ptr<void> argument);
  Result DoReadSamples(std::shared_ptr<void> argument);
  Result DoGetSampleTime(std::shared_ptr<void> argument);
  Result DoGetSampleProperties(std::shared_ptr<void> argument);

private:
  void SetUpExtractorEvents() {
    m_pExtractor->m_pStreamSourceDataEvent = &m_StreamSourceDataEvent;
    m_pExtractor->m_pStreamSourceSeekEvent = &m_StreamSourceSeekEvent;
    m_pExtractor->m_pSeekCompletedEvent = &m_SeekCompletedEvent;
    m_pExtractor->m_pErrorEvent = &m_ErrorEvent;
  }

  bool m_IsFinalized;
  IMediaExtractor* m_pExtractor;
  void* m_pExtractorStorage;
  NetworkConnection* m_pNetworkConnection;
  size_t m_NetworkConnectionCount;
  MediaExtractorState m_State;
  bool m_IsStarted;
  size_t m_CacheSize;
  TrackList* m_pTrackList;
  Result m_TaskCompletedResult;
  os::SystemEventType m_StreamSourceDataEvent;
  os::SystemEventType m_StreamSourceSeekEvent;
  os::SystemEventType m_SeekCompletedEvent;
  union {
    os::EventType m_TaskCompletedEvent;
  };
  union {
    os::EventType m_ErrorEvent;
  };
  int m_TrackCount;
  size_t m_PreferredPixels;
  size_t m_MinBandwidthSamples;
  void* m_pWorkerStack;
  ThreadInfo* m_pWorkerThread;
  void* m_pThreadInstance;
  uintptr_t* m_pMessageQueueBuffer;
  // The original constructs nothing in the queue before initializing it.
  union {
    os::MessageQueueType m_MessageQueue;
  };
  bool m_IsWorkerStopped;
  os::MutexType m_MessageMutex;
  AllocatorInfo* m_pAllocatorInfo;
  EventManager<64, os::EventClearMode_AutoClear> m_EventManager;
  SystemEventManager<64, os::EventClearMode_AutoClear, false>
    m_SystemEventManager;
};

static_assert(sizeof(MediaExtractorImpl) == 2792);

}
