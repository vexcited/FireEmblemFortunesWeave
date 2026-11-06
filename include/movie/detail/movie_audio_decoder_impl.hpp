#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/movie/detail/movie_message.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::movie {

class MediaProperty;

}

namespace movie {

class AudioFrame;

}

namespace movie::detail {

class alignas(8) AudioDecoderImpl {
public:
  explicit AudioDecoderImpl(nn::movie::detail::AllocatorInfo* allocatorInfo);
  ~AudioDecoderImpl();

  MovieResult Initialize(nn::movie::MediaMimeType mimeType,
    AudioDecoderOutputFormat outputFormat, AudioCodecMode codecMode,
    void* instance);
  void Finalize();
  MovieResult Configure(const nn::movie::MediaProperty* property,
    const char* configuration, size_t size);
  MovieResult GetAudioFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult GetInputBufferEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetAudioFrameReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetAudioFrameFormatChangedEvent(
    nn::os::SystemEventType** pOutEvent);
  MovieResult Start();
  MovieResult Stop();
  MovieResult Flush();
  MovieResult Decode(const void* data, size_t capacity, size_t filledSize,
    int64_t presentationTimeUs, bool isEndOfStream);
  MovieResult GetAudioFrame(AudioFrame* frame, int* pOutRemaining);
  MovieResult ReleaseAudioFrame();
  MovieResult GetAudioFrameProperties(nn::movie::MediaProperty* pOut);

  // Only the members the public decoder reaches are laid out.
  uint8_t m_Reserved0[0x2654];
  std::atomic<uint32_t> m_RegisteredAudioFrameCount;
  uint8_t m_Reserved1[0x60];
  // Set once the decoder may be initialized again.
  bool m_IsReinitializable;
};

}
