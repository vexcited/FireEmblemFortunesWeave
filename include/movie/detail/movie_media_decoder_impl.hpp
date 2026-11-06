#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_media_decoder_state.hpp"
#include "movie/movie_audio_decoder.hpp"
#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "movie/movie_video_decoder.hpp"
#include "nn/movie/detail/movie_message.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_media_extractor.hpp"
#include "nn/movie/movie_media_property.hpp"
#include "nn/os/event.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/time.hpp"

namespace nn::os {

struct SystemEventType;

}

namespace nn::movie {

class Buffer;

namespace detail {

struct ThreadInfo;

}

}

namespace movie {

class AudioFrame;
class VideoFrame;

}

namespace movie::detail {

// Keeps the events a worker thread waits on besides its decoders.
template <int Count>
struct EventList {
  struct Lock {
    Lock() {
      nn::os::InitializeMutex(&mutex, true, 0);
    }

    ~Lock() {
      nn::os::FinalizeMutex(&mutex);
    }

    nn::os::MutexType mutex;
  };

  bool Add(nn::os::EventType* event) {
    nn::os::LockMutex(&lock.mutex);
    if (count == Count) {
      nn::os::UnlockMutex(&lock.mutex);
      return false;
    }

    nn::os::InitializeEvent(event, false, nn::os::EventClearMode_AutoClear);
    for (int i = 0; i < Count; i++) {
      if (events[i] == nullptr) {
        events[i] = event;
        count++;
        break;
      }
    }

    nn::os::UnlockMutex(&lock.mutex);
    return true;
  }

  void Remove(nn::os::EventType* event) {
    nn::os::LockMutex(&lock.mutex);
    for (int i = 0; i < Count; i++) {
      if (events[i] == event) {
        nn::os::ClearEvent(event);
        nn::os::FinalizeEvent(event);
        events[i] = nullptr;
        count--;
        break;
      }
    }

    nn::os::UnlockMutex(&lock.mutex);
  }

  Lock lock;
  nn::os::EventType* events[Count];
  int count = 0;
};

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

  MovieResult IsTrackSelected() const;
  MovieResult IsAudioTrackSelected() const;
  MovieResult IsVideoTrackSelected() const;

  MovieResult InitializeMediaDecoderThread();
  MovieResult FinalizeMediaDecoderThread();
  void ThreadLoop();
  int ThreadLoopMultiwaitAudio();
  int ThreadLoopMultiwaitVideo();
  int ThreadLoopMultiwaitAudioVideo();
  MovieResult ProcessAudioInputBufferEvent();
  MovieResult ProcessVideoInputBufferEvent();

private:
  static constexpr int InvalidTrackIndex = -1;

  void ReleaseMemory(void** pMemory);
  void DeleteBuffer(nn::movie::Buffer** pBuffer);
  MovieResult SelectAudioTrack(int index);
  MovieResult SelectVideoTrack(int index);

  VideoDecoder m_VideoDecoder;
  AudioDecoder m_AudioDecoder;
  nn::movie::MediaExtractor m_Extractor;
  void* m_pVideoDecoderMemory;
  void* m_pAudioDecoderMemory;
  void* m_pReservedMemory;
  size_t m_VideoDecoderMemorySize;
  size_t m_AudioDecoderMemorySize;
  size_t m_ReservedMemorySize;
  nn::movie::MediaProperty m_TrackProperty;
  AudioDecoderOutputFormat m_AudioOutputFormat;
  AudioCodecMode m_AudioCodecMode;
  VideoDecoderOutputFormat m_VideoOutputFormat;
  VideoCodecMode m_VideoCodecMode;
  bool m_IsFinalized;
  bool m_IsAudioDecoderStarted;
  bool m_IsVideoDecoderStarted;
  MediaDecoderState m_State;
  nn::os::Mutex m_AudioMutex;
  nn::os::Mutex m_VideoMutex;
  nn::os::Mutex m_Mutex;
  void* m_pThreadStack;
  bool m_IsThreadCreated;
  std::atomic<bool> m_IsThreadRunning;
  nn::movie::detail::ThreadInfo* m_pThreadInfo;
  void* m_pInstance;
  nn::movie::detail::AllocatorInfo* m_pAllocatorInfo;
  // Constructed by InitializeEvent only.
  union {
    nn::os::EventType m_ExitEvent;
  };
  nn::os::SystemEventType* m_pVideoInputReadyEvent;
  nn::os::SystemEventType* m_pReserved0;
  nn::os::SystemEventType* m_pReserved1;
  nn::os::SystemEventType* m_pVideoSampleAvailableEvent;
  nn::os::SystemEventType* m_pAudioSampleAvailableEvent;
  nn::os::SystemEventType* m_pReserved2;
  nn::os::SystemEventType* m_pAudioInputReadyEvent;
  int m_TrackCount;
  int m_NoTrackIndex;
  int m_VideoTrackIndex;
  size_t m_VideoMaxInputSize;
  size_t m_VideoMinInputSize;
  int m_Width;
  int m_Height;
  void* m_pVideoSampleMemory;
  nn::movie::Buffer* m_pVideoSampleBuffer;
  size_t m_VideoConfigurationSize;
  void* m_pVideoConfiguration;
  bool m_IsVideoTrackSelected;
  int m_AudioTrackIndex;
  size_t m_AudioMaxInputSize;
  size_t m_AudioMinInputSize;
  int m_ChannelCount;
  int m_SampleRate;
  nn::movie::Buffer* m_pAudioSampleBuffer;
  void* m_pAudioSampleMemory;
  size_t m_AudioConfigurationSize;
  void* m_pAudioConfiguration;
  bool m_IsAudioTrackSelected;
  std::atomic<int32_t> m_AudioSampleCount;
  std::atomic<int32_t> m_VideoSampleCount;
  std::atomic<int32_t> m_AudioInputBufferCount;
  std::atomic<int32_t> m_VideoInputBufferCount;
  bool m_IsExitRequested;
  EventList<1> m_EventList;
};

}
