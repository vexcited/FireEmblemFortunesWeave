#pragma once

#include <stdint.h>

#include "movie/movie_result.hpp"
#include "nn/movie/movie_buffer.hpp"

namespace movie {

enum SampleFormat : int32_t {
  SampleFormat_PcmUint8,
  SampleFormat_PcmInt16,
  SampleFormat_PcmInt24,
  SampleFormat_PcmInt32,
  SampleFormat_PcmFloat,
};

enum ChannelMap : int32_t {
  ChannelMap_None,
};

class AudioFrame {
public:
  static constexpr int ChannelCountMax = 16;

  AudioFrame();

  MovieResult GetBuffer(nn::movie::Buffer** pOutBuffer) const;
  MovieResult GetEndOfStreamState(bool* pOutIsEndOfStream) const;
  MovieResult GetChannelCount(int* pOutCount) const;
  MovieResult GetChannelCountMax(int* pOutCount) const;
  MovieResult GetSampleRate(int* pOutSampleRate) const;
  MovieResult GetSampleFormat(SampleFormat* pOutFormat) const;
  MovieResult GetSampleByteSize(int* pOutSize) const;
  MovieResult GetFrameByteSize(int* pOutSize) const;
  MovieResult GetSampleCount(int* pOutCount) const;
  MovieResult GetChannelConfiguration(ChannelMap* pOutMap,
    int* pOutCount) const;

  MovieResult SetBuffer(nn::movie::Buffer* buffer);
  MovieResult SetEndOfStreamState(bool isEndOfStream);
  MovieResult SetChannelCount(int count);
  MovieResult SetSampleRate(int sampleRate);
  MovieResult SetSampleFormat(SampleFormat format);
  MovieResult SetChannelConfiguration(const ChannelMap* map, int count);

private:
  nn::movie::Buffer* m_Buffer;
  void* m_Reserved;
  bool m_IsEndOfStream;
  int m_ChannelCount;
  int m_SampleRate;
  SampleFormat m_SampleFormat;
  ChannelMap m_ChannelMap[ChannelCountMax];
};

}
