#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn::os {

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

class ExtractorUnwrapper {
public:
  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize);
  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize,
    NetworkConnection* connection, size_t connectionCount);
  Result Finalize();
  Result SetUriMedia(const char* uri, int length);
  Result SetInMemoryMedia(const void* data, size_t size);
  Result SetUpMediaSourceMode();
  Result AppendMediaSourceData(const void* data, size_t size);
  Result GetMediaSourceModeSeekPosition(int64_t* pOutPosition);
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
  Result SeekTo(int64_t timeUs, SeekMode mode);
  Result GetSampleBufferSize(size_t* pOutSize, int index);
  Result ReadSamples(void* buffer, size_t* pOutSize, int64_t* pOutTimeUs,
    uint32_t* pOutFlags, size_t size, int index);
  Result GetSampleTime(int64_t* pOutTimeUs, int index);
  Result GetSampleProperties(MediaProperty* pOutProperty, int index);
  Result GetCacheRangeCount(int* pOutCount);
  Result GetCacheRange(int64_t* pOutStart, int64_t* pOutEnd, int index);
  Result StreamSourceReadData(void* buffer, int64_t* pOutSize,
    int64_t size);
  Result StreamSourceSeekTo(int64_t position);
  Result SetTrackSampleAvailableEventType(int index,
    os::SystemEventType* event);
};

}
