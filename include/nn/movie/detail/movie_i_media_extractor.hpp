#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::os {

struct EventType;
struct SystemEventType;

}

namespace nn::movie {

class MediaProperty;

enum MediaMimeType : int32_t;
enum SeekMode : int32_t;

}

namespace nn::movie::detail {

struct AllocatorInfo;
class NetworkConnection;

class IMediaExtractor {
public:
  virtual ~IMediaExtractor() {}

  virtual Result Initialize(AllocatorInfo* allocatorInfo,
    size_t cacheSize) = 0;
  virtual Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize,
    NetworkConnection* connection, size_t connectionCount) = 0;
  virtual Result Finalize() = 0;
  virtual Result SetUriMedia(const char* uri, int length) = 0;
  virtual Result SetInMemoryMedia(const void* data, size_t size) = 0;
  virtual Result SetUpMediaSourceMode() = 0;
  virtual Result AppendMediaSourceData(const void* data, size_t size) = 0;
  virtual Result GetMediaSourceModeSeekPosition(int64_t* pOutPosition) = 0;
  virtual Result GetTrackCount(int* pOutCount) = 0;
  virtual Result SelectTrack(int index) = 0;
  virtual Result DeselectTrack(int index) = 0;

  // The default implementation returns 0x41100, its name is not exported.
  virtual Result ReservedFunction();

  virtual Result GetTrackProperties(MediaProperty* pOutProperty,
    int index) = 0;
  virtual Result GetTrackMimeType(MediaMimeType* pOutMimeType,
    int index) = 0;
  virtual Result GetTrackConfigurationSize(size_t* pOutSize, int index) = 0;
  virtual Result GetTrackConfiguration(void* buffer, size_t size,
    int index) = 0;
  virtual Result Start() = 0;
  virtual Result Stop() = 0;
  virtual Result GetSampleAvailableEvent(os::SystemEventType** pOutEvent,
    int index) = 0;
  virtual Result SeekTo(int64_t timeUs, SeekMode mode) = 0;
  virtual Result GetSampleBufferSize(size_t* pOutSize, int index) = 0;
  virtual Result ReadSamples(void* buffer, size_t* pOutSize,
    int64_t* pOutTimeUs, uint32_t* pOutFlags, size_t size, int index) = 0;
  virtual Result GetSampleTime(int64_t* pOutTimeUs, int index) = 0;
  virtual Result GetSampleProperties(MediaProperty* pOutProperty,
    int index) = 0;
  virtual Result GetCacheRangeCount(int* pOutCount) = 0;
  virtual Result GetCacheRange(int64_t* pOutStartUs, int64_t* pOutEndUs,
    int index) = 0;
  virtual Result IsCacheFull(bool* pOutIsFull, bool* pOutIsEndOfStream) = 0;
  virtual Result StreamSourceReadData(void* buffer, int64_t* pOutSize,
    int64_t size) = 0;
  virtual Result StreamSourceSeekTo(int64_t position) = 0;
  virtual Result StreamSourceSetSize(int64_t size) = 0;
  virtual Result SetPreferredPixels(size_t pixels) = 0;
  virtual Result SetMinBandwidthSamples(size_t samples) = 0;
  virtual Result SetTrackSampleAvailableEventType(int index,
    os::SystemEventType* event) = 0;

  os::SystemEventType* m_pStreamSourceDataEvent;
  os::SystemEventType* m_pStreamSourceSeekEvent;
  os::SystemEventType* m_pSeekCompletedEvent;
  os::EventType* m_pErrorEvent;
};

}
