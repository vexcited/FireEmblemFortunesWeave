#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nandroid/media/StreamSourceObserver.h"
#include "nn/movie/detail/movie_i_media_extractor.hpp"

namespace nn::movie::detail {

class BaseMediaExtractor : public nandroid::StreamSourceObserver,
  public IMediaExtractor {
public:
  BaseMediaExtractor();
  ~BaseMediaExtractor() override;

  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize) override;
  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize,
    NetworkConnection* connection, size_t connectionCount) override;
  Result Finalize() override;
  Result SetUriMedia(const char* uri, int length) override;
  Result SetInMemoryMedia(const void* data, size_t size) override;
  Result SetUpMediaSourceMode() override;
  Result AppendMediaSourceData(const void* data, size_t size) override;
  Result GetMediaSourceModeSeekPosition(int64_t* pOutPosition) override;
  Result GetTrackCount(int* pOutCount) override;
  Result SelectTrack(int index) override;
  Result DeselectTrack(int index) override;
  Result GetTrackProperties(MediaProperty* pOutProperty, int index) override;
  Result GetTrackMimeType(MediaMimeType* pOutMimeType, int index) override;
  Result GetTrackConfigurationSize(size_t* pOutSize, int index) override;
  Result GetTrackConfiguration(void* buffer, size_t size, int index) override;
  Result Start() override;
  Result Stop() override;
  Result GetSampleAvailableEvent(os::SystemEventType** pOutEvent,
    int index) override;
  Result SeekTo(int64_t timeUs, SeekMode mode) override;
  Result GetSampleBufferSize(size_t* pOutSize, int index) override;
  Result ReadSamples(void* buffer, size_t* pOutSize, int64_t* pOutTimeUs,
    uint32_t* pOutFlags, size_t size, int index) override;
  Result GetSampleTime(int64_t* pOutTimeUs, int index) override;
  Result GetSampleProperties(MediaProperty* pOutProperty, int index) override;
  Result GetCacheRangeCount(int* pOutCount) override;
  Result GetCacheRange(int64_t* pOutStartUs, int64_t* pOutEndUs,
    int index) override;
  Result IsCacheFull(bool* pOutIsFull, bool* pOutIsEndOfStream) override;
  Result StreamSourceReadData(void* buffer, int64_t* pOutSize,
    int64_t size) override;
  Result StreamSourceSeekTo(int64_t position) override;
  Result StreamSourceSetSize(int64_t size) override;
  Result SetPreferredPixels(size_t pixels) override;
  Result SetMinBandwidthSamples(size_t samples) override;
  Result SetTrackSampleAvailableEventType(int index,
    os::SystemEventType* event) override;

private:
  uint8_t m_Storage[1424];
};

static_assert(sizeof(BaseMediaExtractor) == 1472);

class HlsMediaExtractor : public IMediaExtractor {
public:
  HlsMediaExtractor();
  ~HlsMediaExtractor() override;

  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize) override;
  Result Initialize(AllocatorInfo* allocatorInfo, size_t cacheSize,
    NetworkConnection* connection, size_t connectionCount) override;
  Result Finalize() override;
  Result SetUriMedia(const char* uri, int length) override;
  Result SetInMemoryMedia(const void* data, size_t size) override;
  Result SetUpMediaSourceMode() override;
  Result AppendMediaSourceData(const void* data, size_t size) override;
  Result GetMediaSourceModeSeekPosition(int64_t* pOutPosition) override;
  Result GetTrackCount(int* pOutCount) override;
  Result SelectTrack(int index) override;
  Result DeselectTrack(int index) override;
  Result GetTrackProperties(MediaProperty* pOutProperty, int index) override;
  Result GetTrackMimeType(MediaMimeType* pOutMimeType, int index) override;
  Result GetTrackConfigurationSize(size_t* pOutSize, int index) override;
  Result GetTrackConfiguration(void* buffer, size_t size, int index) override;
  Result Start() override;
  Result Stop() override;
  Result GetSampleAvailableEvent(os::SystemEventType** pOutEvent,
    int index) override;
  Result SeekTo(int64_t timeUs, SeekMode mode) override;
  Result GetSampleBufferSize(size_t* pOutSize, int index) override;
  Result ReadSamples(void* buffer, size_t* pOutSize, int64_t* pOutTimeUs,
    uint32_t* pOutFlags, size_t size, int index) override;
  Result GetSampleTime(int64_t* pOutTimeUs, int index) override;
  Result GetSampleProperties(MediaProperty* pOutProperty, int index) override;
  Result GetCacheRangeCount(int* pOutCount) override;
  Result GetCacheRange(int64_t* pOutStartUs, int64_t* pOutEndUs,
    int index) override;
  Result IsCacheFull(bool* pOutIsFull, bool* pOutIsEndOfStream) override;
  Result StreamSourceReadData(void* buffer, int64_t* pOutSize,
    int64_t size) override;
  Result StreamSourceSeekTo(int64_t position) override;
  Result StreamSourceSetSize(int64_t size) override;
  Result SetPreferredPixels(size_t pixels) override;
  Result SetMinBandwidthSamples(size_t samples) override;
  Result SetTrackSampleAvailableEventType(int index,
    os::SystemEventType* event) override;

private:
  uint8_t m_Storage[1568];
};

static_assert(sizeof(HlsMediaExtractor) == 1608);

}
