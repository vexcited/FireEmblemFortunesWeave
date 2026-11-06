#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/mem/standard_allocator.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::movie {

class MediaProperty;

}

namespace movie {

class AudioFrame;
class VideoFrame;

namespace detail {

struct MediaDecoderHolder;

}

class MediaDecoder {
public:
  MediaDecoder();
  ~MediaDecoder();

  MovieResult Initialize(void* memory, size_t memorySize, size_t cacheSize,
    AudioDecoderOutputFormat audioFormat, AudioCodecMode audioMode,
    VideoDecoderOutputFormat videoFormat, VideoCodecMode videoMode);
  void Finalize();

  MovieResult SetUriMedia(const char* uri, int length);
  MovieResult SetInMemoryMedia(const void* data, size_t size);
  MovieResult GetTrackCount(int* pOutCount);
  MovieResult SelectTrack(int index);
  MovieResult DeselectTrack(int index);
  MovieResult GetTrackProperties(nn::movie::MediaProperty* pOutProperty,
    int index);
  MovieResult SeekTo(nn::TimeSpan time, nn::movie::SeekMode mode);
  MovieResult GetSeekCompletedEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetCacheRangeCount(int* pOutCount);
  MovieResult GetCacheRange(nn::TimeSpan* pOutStart, nn::TimeSpan* pOutEnd,
    int index);

  MovieResult GetAudioOutputReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetAudioFormatChangedEvent(
    nn::os::SystemEventType** pOutEvent);
  MovieResult GetAudioFrameProperties(nn::movie::MediaProperty* pOut);
  MovieResult GetAudioFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult RegisterAudioFrame(AudioFrame** frames, int count);
  MovieResult AcquireAudioFrame(AudioFrame** pOutFrame, int* pOutCount);
  MovieResult ReleaseAudioFrame(AudioFrame* frame);

  MovieResult GetVideoOutputReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetVideoFormatChangedEvent(
    nn::os::SystemEventType** pOutEvent);
  MovieResult GetVideoFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult GetVideoFrameProperties(nn::movie::MediaProperty* pOut);
  MovieResult RegisterVideoFrame(VideoFrame** frames, int count);
  MovieResult AcquireVideoFrame(VideoFrame** pOutFrame, int* pOutCount);
  MovieResult AcquireVideoFrame(VideoFrame** pOutFrame);
  MovieResult ReleaseVideoFrame(VideoFrame* frame);

  MovieResult Start();
  MovieResult Stop();

  void SetThreadCoreMask(uint64_t coreMask);
  uint64_t GetThreadCoreMask();
  MovieResult SetThreadPriority(int priority);
  int GetThreadPriority();

private:
  detail::MediaDecoderHolder* m_pHolder = nullptr;
  nn::mem::StandardAllocator m_Allocator;
};

}
