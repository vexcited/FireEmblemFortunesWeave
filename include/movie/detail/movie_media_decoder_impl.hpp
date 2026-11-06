#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/movie/detail/movie_message.hpp"
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

}

namespace movie::detail {

class MediaDecoderImpl {
public:
  MediaDecoderImpl();
  ~MediaDecoderImpl();

  MovieResult Initialize(nn::movie::detail::AllocatorInfo* allocatorInfo,
    void* memory, size_t memorySize, size_t cacheSize,
    AudioDecoderOutputFormat audioFormat, AudioCodecMode audioMode,
    VideoDecoderOutputFormat videoFormat, VideoCodecMode videoMode,
    void* instance);
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
  MovieResult GetCacheRanges(int* pOutCount);
  MovieResult GetCacheRange(nn::TimeSpan* pOutStart, nn::TimeSpan* pOutEnd,
    int index);

  MovieResult GetAudioFrameReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetAudioFrameFormatChangedEvent(
    nn::os::SystemEventType** pOutEvent);
  MovieResult GetAudioFrameProperties(nn::movie::MediaProperty* pOut);
  MovieResult GetAudioFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult RegisterAudioFrame(AudioFrame** frames, int count);
  MovieResult AcquireAudioFrame(AudioFrame** pOutFrame, int* pOutCount);
  MovieResult ReleaseAudioFrame(AudioFrame* frame);

  MovieResult GetVideoFrameReadyEvent(nn::os::SystemEventType** pOutEvent);
  MovieResult GetVideoFrameFormatChangedEvent(
    nn::os::SystemEventType** pOutEvent);
  MovieResult GetVideoFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult GetVideoFrameProperties(nn::movie::MediaProperty* pOut);
  MovieResult RegisterVideoFrame(VideoFrame** frames, int count);
  MovieResult AcquireVideoFrame(VideoFrame** pOutFrame, int* pOutCount);
  MovieResult ReleaseVideoFrame(VideoFrame* frame);

  MovieResult Start();
  MovieResult Stop();

private:
  uint8_t m_Storage[0xd88];
};

}
