#include "nn/movie/detail/movie_extractor_unwrapper.hpp"

namespace nn::movie::detail {

// Only the cache and stream size controls reach the wrapped extractor.
// Every other entry point is a stub that reports success.

Result ExtractorUnwrapper::Initialize(AllocatorInfo* allocatorInfo,
  size_t cacheSize) {
  return {};
}

Result ExtractorUnwrapper::Initialize(AllocatorInfo* allocatorInfo,
  size_t cacheSize, NetworkConnection* connection, size_t connectionCount) {
  return {};
}

Result ExtractorUnwrapper::Finalize() {
  return {};
}

Result ExtractorUnwrapper::SetUriMedia(const char* uri, int length) {
  return {};
}

Result ExtractorUnwrapper::SetInMemoryMedia(const void* data, size_t size) {
  return {};
}

Result ExtractorUnwrapper::SetUpMediaSourceMode() {
  return {};
}

Result ExtractorUnwrapper::AppendMediaSourceData(const void* data,
  size_t size) {
  return {};
}

Result ExtractorUnwrapper::GetMediaSourceModeSeekPosition(
  int64_t* pOutPosition) {
  return {};
}

Result ExtractorUnwrapper::GetTrackCount(int* pOutCount) {
  return {};
}

Result ExtractorUnwrapper::SelectTrack(int index) {
  return {};
}

Result ExtractorUnwrapper::DeselectTrack(int index) {
  return {};
}

Result ExtractorUnwrapper::GetTrackProperties(MediaProperty* pOutProperty,
  int index) {
  return {};
}

Result ExtractorUnwrapper::GetTrackMimeType(MediaMimeType* pOutMimeType,
  int index) {
  return {};
}

Result ExtractorUnwrapper::GetTrackConfigurationSize(size_t* pOutSize,
  int index) {
  return {};
}

Result ExtractorUnwrapper::GetTrackConfiguration(void* buffer, size_t size,
  int index) {
  return {};
}

Result ExtractorUnwrapper::Start() {
  return {};
}

Result ExtractorUnwrapper::Stop() {
  return {};
}

Result ExtractorUnwrapper::GetSampleAvailableEvent(
  os::SystemEventType** pOutEvent, int index) {
  return {};
}

Result ExtractorUnwrapper::SeekTo(int64_t timeUs, SeekMode mode) {
  return {};
}

Result ExtractorUnwrapper::GetSampleBufferSize(size_t* pOutSize, int index) {
  return {};
}

Result ExtractorUnwrapper::ReadSamples(void* buffer, size_t* pOutSize,
  int64_t* pOutTimeUs, uint32_t* pOutFlags, size_t size, int index) {
  return {};
}

Result ExtractorUnwrapper::GetSampleTime(int64_t* pOutTimeUs, int index) {
  return {};
}

Result ExtractorUnwrapper::GetSampleProperties(MediaProperty* pOutProperty,
  int index) {
  return {};
}

Result ExtractorUnwrapper::GetCacheRangeCount(int* pOutCount) {
  return {};
}

Result ExtractorUnwrapper::GetCacheRange(int64_t* pOutStart, int64_t* pOutEnd,
  int index) {
  return {};
}

Result ExtractorUnwrapper::StreamSourceReadData(void* buffer, int64_t* pOutSize,
  int64_t size) {
  return {};
}

Result ExtractorUnwrapper::StreamSourceSeekTo(int64_t position) {
  return {};
}

Result ExtractorUnwrapper::SetTrackSampleAvailableEventType(int index,
  os::SystemEventType* event) {
  return {};
}

}
