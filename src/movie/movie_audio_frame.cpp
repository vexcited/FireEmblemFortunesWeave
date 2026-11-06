#include <cstring>

#include "movie/detail/movie_utils.hpp"
#include "movie/movie_audio_frame.hpp"

namespace movie {

namespace detail {

// The original reaches this table directly, so it is a named global.
extern const int SampleByteSizeTable[] = {1, 2, 3, 4, 4};

}

namespace {

bool TryGetSampleByteSize(int* pOutSize, SampleFormat format) {
  if (static_cast<uint32_t>(format) > SampleFormat_PcmFloat) {
    return false;
  }

  *pOutSize = detail::SampleByteSizeTable[format];
  return true;
}

}

// The whole frame is cleared, padding included.
AudioFrame::AudioFrame() {
  std::memset(this, 0, sizeof(*this));
  m_SampleFormat = SampleFormat_PcmInt16;
}

MovieResult AudioFrame::GetBuffer(nn::movie::Buffer** pOutBuffer) const {
  if (m_Buffer == nullptr) {
    return MovieResult_NullPointer;
  }

  *pOutBuffer = m_Buffer;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetEndOfStreamState(bool* pOutIsEndOfStream) const {
  *pOutIsEndOfStream = m_IsEndOfStream;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetChannelCount(int* pOutCount) const {
  *pOutCount = m_ChannelCount;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetChannelCountMax(int* pOutCount) const {
  *pOutCount = ChannelCountMax;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetSampleRate(int* pOutSampleRate) const {
  *pOutSampleRate = m_SampleRate;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetSampleFormat(SampleFormat* pOutFormat) const {
  *pOutFormat = m_SampleFormat;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetSampleByteSize(int* pOutSize) const {
  if (!TryGetSampleByteSize(pOutSize, m_SampleFormat)) {
    return MovieResult_NotSupported;
  }

  return MovieResult_Success;
}

MovieResult AudioFrame::GetFrameByteSize(int* pOutSize) const {
  int sampleByteSize;
  if (!TryGetSampleByteSize(&sampleByteSize, m_SampleFormat)) {
    return MovieResult_NotSupported;
  }

  *pOutSize = m_ChannelCount * sampleByteSize;
  return MovieResult_Success;
}

MovieResult AudioFrame::GetSampleCount(int* pOutCount) const {
  if (m_Buffer == nullptr) {
    return MovieResult_NullPointer;
  }

  int sampleByteSize;
  if (!TryGetSampleByteSize(&sampleByteSize, m_SampleFormat)) {
    return MovieResult_NotSupported;
  }

  size_t filledSize = 0;
  MovieResult result = detail::ConvertNnMovieToMovieResult(
    m_Buffer->GetFilledBufferSize(&filledSize));
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutCount = static_cast<int>(filledSize) / sampleByteSize;
  return IsSucceeded(result) ? MovieResult_Success : result;
}

MovieResult AudioFrame::GetChannelConfiguration(ChannelMap* pOutMap,
  int* pOutCount) const {
  if (m_ChannelCount > ChannelCountMax) {
    return MovieResult_OutOfRange;
  }

  for (int i = 0; i < m_ChannelCount; i++) {
    pOutMap[i] = m_ChannelMap[i];
  }

  *pOutCount = m_ChannelCount;
  return MovieResult_Success;
}

MovieResult AudioFrame::SetBuffer(nn::movie::Buffer* buffer) {
  m_Buffer = buffer;
  return MovieResult_Success;
}

MovieResult AudioFrame::SetEndOfStreamState(bool isEndOfStream) {
  m_IsEndOfStream = isEndOfStream;
  return MovieResult_Success;
}

MovieResult AudioFrame::SetChannelCount(int count) {
  if (count == 0 || count > ChannelCountMax) {
    return MovieResult_InvalidArgument;
  }

  m_ChannelCount = count;
  for (int i = count; i < ChannelCountMax; i++) {
    m_ChannelMap[i] = ChannelMap_None;
  }

  return MovieResult_Success;
}

MovieResult AudioFrame::SetSampleRate(int sampleRate) {
  if (sampleRate < 8000) {
    return MovieResult_InvalidArgument;
  }

  m_SampleRate = sampleRate;
  return MovieResult_Success;
}

MovieResult AudioFrame::SetSampleFormat(SampleFormat format) {
  if (static_cast<uint32_t>(format) > SampleFormat_PcmFloat) {
    return MovieResult_InvalidArgument;
  }

  m_SampleFormat = format;
  return MovieResult_Success;
}

MovieResult AudioFrame::SetChannelConfiguration(const ChannelMap* map,
  int count) {
  if (count == 0 || count > ChannelCountMax) {
    return MovieResult_InvalidArgument;
  }

  for (int i = 0; i < count; i++) {
    m_ChannelMap[i] = map[i];
  }

  for (int i = count; i < ChannelCountMax; i++) {
    m_ChannelMap[i] = ChannelMap_None;
  }

  m_ChannelCount = count;
  return MovieResult_Success;
}

}
