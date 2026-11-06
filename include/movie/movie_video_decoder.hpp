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

class VideoFrame;

namespace detail {

struct VideoDecoderHolder;

}

class VideoDecoder {
public:
  VideoDecoder();
  ~VideoDecoder();

  MovieResult Initialize(void* memory, size_t memorySize,
    nn::movie::MediaMimeType mimeType, VideoDecoderOutputFormat outputFormat,
    VideoCodecMode codecMode);
  void Finalize();
  MovieResult Configure(const nn::movie::MediaProperty* property,
    const void* configuration, size_t size);
  MovieResult GetVideoFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult GetInputReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetOutputReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetFormatChangedEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult Start();
  MovieResult Stop();
  MovieResult Flush();
  MovieResult DecodeAsync(const nn::movie::Buffer* buffer);
  MovieResult GetOutputFrameProperties(nn::movie::MediaProperty* pOut);
  MovieResult RegisterVideoFrame(VideoFrame** frames, int count);
  MovieResult AcquireVideoFrame(VideoFrame** pOutFrame);
  MovieResult AcquireVideoFrame(VideoFrame** pOutFrame, int* pOutCount);
  MovieResult ReleaseVideoFrame(VideoFrame* frame);

  void SetThreadCoreMask(uint64_t coreMask);
  uint64_t GetThreadCoreMask();
  MovieResult SetThreadPriority(int priority);
  int GetThreadPriority();

private:
  detail::VideoDecoderHolder* m_pHolder = nullptr;
  nn::mem::StandardAllocator m_Allocator;
};

}
