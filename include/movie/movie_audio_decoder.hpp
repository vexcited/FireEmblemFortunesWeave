#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/mem/standard_allocator.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::movie {

class Buffer;
class MediaProperty;

}

namespace movie {

class AudioFrame;

namespace detail {

struct AudioDecoderHolder;

}

class AudioDecoder {
public:
  AudioDecoder();
  ~AudioDecoder();

  MovieResult Initialize(void* memory, size_t memorySize,
    nn::movie::MediaMimeType mimeType, AudioDecoderOutputFormat outputFormat,
    AudioCodecMode codecMode);
  void Finalize();
  MovieResult Configure(const nn::movie::MediaProperty* property,
    const void* configuration, size_t size);
  MovieResult GetAudioFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult GetInputReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetOutputReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetFormatChangedEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult Start();
  MovieResult Stop();
  MovieResult Flush();
  MovieResult DecodeAsync(const nn::movie::Buffer* buffer);
  MovieResult RegisterAudioFrame(AudioFrame** frames, int count);
  MovieResult AcquireAudioFrame(AudioFrame** pOutFrame, int* pOutCount);
  MovieResult ReleaseAudioFrame(AudioFrame* frame);
  MovieResult GetOutputFrameProperties(nn::movie::MediaProperty* pOut);

  void SetThreadCoreMask(uint64_t coreMask);
  uint64_t GetThreadCoreMask();
  MovieResult SetThreadPriority(int priority);
  int GetThreadPriority();

private:
  detail::AudioDecoderHolder* m_pHolder = nullptr;
  nn::mem::StandardAllocator m_Allocator;
};

}
