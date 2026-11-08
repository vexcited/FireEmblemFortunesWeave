#include "nn/movie/detail/movie_extractor_unwrapper.hpp"
#include "nn/movie/detail/movie_media_extractor_impl.hpp"

namespace nn::movie::detail {

// Only the cache and stream size controls reach the wrapped extractor.
// Every other entry point is a stub that reports success.

namespace {

constexpr Result ResultNotInitialized = {0x3eb00};
constexpr Result ResultNoExtractor = {0x7e500};
constexpr Result ResultNoCoreExtractor = {0x7eb00};

[[gnu::always_inline]] inline MediaExtractorImpl* GetImpl(
  MediaExtractorImpl*** owner) {
  return owner != nullptr ? **owner : nullptr;
}

}

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

Result ExtractorUnwrapper::StreamSourceSetSize(int64_t size) {
  MediaExtractorImpl* impl = GetImpl(m_pOwner);
  if (impl == nullptr) {
    return ResultNotInitialized;
  }

  if (impl->m_pExtractor == nullptr) {
    return ResultNoCoreExtractor;
  }

  return ToPublicResult(impl->m_pExtractor->StreamSourceSetSize(size));
}

Result ExtractorUnwrapper::IsCacheFull(bool* pOutIsFull,
  bool* pOutIsEndOfStream) {
  MediaExtractorImpl* impl = GetImpl(m_pOwner);
  if (impl == nullptr) {
    return ResultNoExtractor;
  }

  const Result result = impl->m_State.ValidateCurrentState(
    MediaExtractorState::MediaExtractorFunctions_IsCacheFull);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (impl->m_pExtractor == nullptr) {
    return ResultNoCoreExtractor;
  }

  return ToPublicResult(impl->m_pExtractor->IsCacheFull(pOutIsFull,
    pOutIsEndOfStream));
}

Result ExtractorUnwrapper::SetPreferredPixels(size_t pixels) {
  MediaExtractorImpl* impl = GetImpl(m_pOwner);
  if (impl == nullptr) {
    return ResultNoExtractor;
  }

  if (pixels == impl->m_PreferredPixels) {
    return {};
  }

  impl->m_PreferredPixels = pixels;
  if (impl->m_pExtractor == nullptr) {
    return {};
  }

  return ToPublicResult(impl->m_pExtractor->SetPreferredPixels(pixels));
}

Result ExtractorUnwrapper::SetMinBandwidthSamples(size_t samples) {
  MediaExtractorImpl* impl = GetImpl(m_pOwner);
  if (impl == nullptr) {
    return ResultNoExtractor;
  }

  if (samples == impl->m_MinBandwidthSamples) {
    return {};
  }

  impl->m_MinBandwidthSamples = samples;
  if (impl->m_pExtractor == nullptr) {
    return {};
  }

  return ToPublicResult(impl->m_pExtractor->SetMinBandwidthSamples(samples));
}

}
