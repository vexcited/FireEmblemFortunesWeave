#pragma once

#include <memory>
#include <stddef.h>
#include <stdint.h>

#include "nn/mem/standard_allocator.hpp"
#include "nn/movie/detail/movie_media_extractor_impl.hpp"
#include "nn/movie/detail/movie_media_muxer_impl.hpp"
#include "nn/movie/movie_buffer.hpp"
#include "nn/os/event.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::movie {

class MediaProperty;
class MediaWriter;

enum MediaMimeType : int32_t;
enum SeekMode : int32_t;
enum ContainerType : int32_t;

namespace detail {

class ThreadManager {
public:
  static ThreadManager* GetInstance();

  Result _SetThreadCoreMaskByInstance(void* instance, uint64_t coreMask);
  uint64_t _GetThreadCoreMaskByInstance(void* instance);
  void _SetThreadPriorityByInstance(void* instance, int priority);
  int _GetThreadPriorityByInstance(void* instance);
};

struct MediaExtractorHolder {
  MediaExtractorImpl* pImpl;
  uint8_t reserved[88];
  os::EventType* pTaskCompletedEvent;
};

struct MediaMuxerHolder {
  MediaMuxerImpl* pImpl;
  os::SdkMutexType mutex;
};

}

class MediaExtractor {
public:
  Result SetInMemoryMedia(const void* data, size_t size);
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
  Result SeekTo(TimeSpan time, SeekMode mode);
  Result GetSampleBufferSize(size_t* pOutSize, int index);
  Result ReadSamples(Buffer* buffer, int index);
  Result GetSampleTime(TimeSpan* pOutTime, int index);
  Result GetSampleProperties(MediaProperty* pOutProperty, int index);
  Result GetCacheRangeCount(int* pOutCount);
  Result GetCacheRange(TimeSpan* pOutStart, TimeSpan* pOutEnd, int index);
  Result SetThreadCoreMask(uint64_t coreMask);
  uint64_t GetThreadCoreMask();
  Result SetThreadPriority(int priority);
  int GetThreadPriority();

private:
  detail::MediaExtractorHolder* m_pHolder;
  mem::StandardAllocator m_Allocator;
};

class HlsMediaExtractor {
public:
  Result SetUriMedia(const char* uri, int length);
  Result SetInMemoryMedia(const void* data, size_t size);
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
  Result SeekTo(TimeSpan time, SeekMode mode);
  Result GetSampleBufferSize(size_t* pOutSize, int index);
  Result ReadSamples(Buffer* buffer, int index);
  Result GetSampleTime(TimeSpan* pOutTime, int index);
  Result GetSampleProperties(MediaProperty* pOutProperty, int index);
  Result GetCacheRangeCount(int* pOutCount);
  Result GetCacheRange(TimeSpan* pOutStart, TimeSpan* pOutEnd, int index);
  Result SetPreferredPixels(size_t pixels);
  Result SetMinBandwidthSamples(size_t samples);

private:
  detail::MediaExtractorHolder* m_pHolder;
  mem::StandardAllocator m_Allocator;
  size_t m_PreferredPixels;
  size_t m_MinBandwidthSamples;
};

class MediaMuxer {
public:
  Result Configure(const MediaProperty* property);
  Result AddTrack(int* pOutIndex, const MediaProperty* property,
    const void* configuration, size_t configurationSize);
  Result Start();
  Result GetTrackCount(int* pOutCount);
  Result Stop();
  Result WriteAsync(const Buffer* buffer, int index);
  Result SetThreadCoreMask(uint64_t coreMask);
  uint64_t GetThreadCoreMask();
  Result SetThreadPriority(int priority);
  int GetThreadPriority();

private:
  detail::MediaMuxerHolder* m_pHolder;
  mem::StandardAllocator m_Allocator;
};

}
