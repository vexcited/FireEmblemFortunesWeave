#pragma once

#include <atomic>
#include <list>
#include <stddef.h>
#include <stdint.h>
#include <vector>

#include "movie/detail/movie_audio_decoder_state.hpp"
#include "movie/movie_decoder_types.hpp"
#include "movie/movie_result.hpp"
#include "nn/movie/detail/movie_message.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/movie/movie_media_property.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/message_queue.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/timer_event.hpp"

namespace nn::movie::detail {

struct ThreadInfo;

}

namespace movie {

class AudioFrame;

}

namespace movie::detail {

class ConfigurationData;
class IAudioDecoder;

// Owns up to Count system events created with ClearMode.
template <int Count, nn::os::EventClearMode ClearMode>
struct SystemEventManager {
  MovieResult AcquireSystemEvent(nn::os::SystemEventType* event);

  void ReleaseSystemEvent(nn::os::SystemEventType* event) {
    mutex.Lock();
    for (int i = 0; i < Count; i++) {
      if (events[i] == event) {
        nn::os::DestroySystemEvent(event);
        events[i] = nullptr;
        count--;
        break;
      }
    }

    mutex.Unlock();
  }

  nn::os::Mutex mutex{true};
  nn::os::SystemEventType* events[Count];
  int count = 0;
};

template <int Count, nn::os::EventClearMode ClearMode>
MovieResult SystemEventManager<Count, ClearMode>::AcquireSystemEvent(
  nn::os::SystemEventType* event) {
  mutex.Lock();
  if (count == Count ||
    nn::os::CreateSystemEvent(event, ClearMode, false).IsFailure()) {
    mutex.Unlock();
    return static_cast<MovieResult>(22);
  }

  for (int i = 0; i < Count; i++) {
    if (events[i] == nullptr) {
      events[i] = event;
      count++;
      break;
    }
  }

  mutex.Unlock();
  return MovieResult_Success;
}

// Unlike nn::os::LightEvent this wrapper keeps no storage after the event.
class LightEvent {
public:
  LightEvent(bool isSignaled, nn::os::EventClearMode clearMode) {
    nn::os::InitializeLightEvent(&m_Event, isSignaled, clearMode);
  }

  ~LightEvent() {
    nn::os::FinalizeLightEvent(&m_Event);
  }

  void Signal() {
    nn::os::SignalLightEvent(&m_Event);
  }

  void Wait() {
    nn::os::WaitLightEvent(&m_Event);
  }

private:
  nn::os::LightEventType m_Event;
};

class AudioInputBuffer {
public:
  AudioInputBuffer();
  ~AudioInputBuffer();

  MovieResult Initialize(nn::movie::detail::AllocatorInfo* allocatorInfo,
    size_t size);
  void Finalize();
  void Clear();
  MovieResult SetData(const void* data, size_t size, int64_t presentationTimeUs,
    bool isEndOfStream);

  nn::movie::detail::AllocatorInfo* m_pAllocatorInfo;
  void* m_pData;
  size_t m_Capacity;
  size_t m_FilledSize;
  int64_t m_PresentationTimeUs;
  bool m_IsEndOfStream;
  // Applied to the decoder before this buffer is decoded.
  ConfigurationData* m_pConfigurationData;
};

class AudioDecoderImpl {
public:
  explicit AudioDecoderImpl(nn::movie::detail::AllocatorInfo* allocatorInfo);
  ~AudioDecoderImpl();

  MovieResult Initialize(nn::movie::MediaMimeType mimeType,
    AudioDecoderOutputFormat outputFormat, AudioCodecMode codecMode,
    void* instance);
  MovieResult Finalize();
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

  MovieResult CheckDecoderMode(AudioCodecMode codecMode) const;
  MovieResult CheckOutputFormat(AudioDecoderOutputFormat outputFormat) const;
  MovieResult InitializeAudioDecoderThread();
  void FinalizeAudioDecoderThread();
  void DoInitialize();
  void DoFinalize();
  void DoConfigure();
  MovieResult AllocateCoreDecoder(IAudioDecoder** pOutDecoder,
    nn::movie::MediaMimeType mimeType);
  void DeallocateCoreDecoder();
  MovieResult AllocateBuffers();
  void DeallocateBuffers();
  void DeallocatePendingFormatChanges();
  MovieResult ConfigureBuffers();
  void DecodeInputBufferEventAndSignal();
  MovieResult DecodeInputBufferEvent();
  MovieResult FlushBuffers();
  MovieResult AcquireInputBufferIndex(int* pOutIndex, int* pOutRemaining);
  MovieResult CopyInputBufferToDecoderMemory(int index, const void* data,
    size_t size, int64_t presentationTimeUs, bool isEndOfStream);
  MovieResult AcquireAvailableAudioFrameIndex(int* pOutIndex,
    int* pOutRemaining);
  MovieResult CopyDecodedAudioFrameData(AudioFrame* pOut,
    AudioFrame* frame) const;
  void SignalAudioFrameFormatChangedEvent();
  void ExecuteAudioDecoderThreadBody();
  MovieResult StartAudioDecoderEvent();
  MovieResult CheckInputBufferAvailableEvent();
  void SignalThreadExit();
  void SignalInputBufferAvailableEvent();
  void SignalAudioFrameReadyEvent();
  void AudioFrameReady();
  MovieResult AllocateInputBuffers();
  void DeallocateInputBuffers();
  MovieResult AllocateOutputBuffers();
  void DeallocateOutputBuffers();
  void DeconfigureInputBuffers();
  void DeconfigureOutputBuffers();
  MovieResult ConfigureInputBuffers();
  MovieResult ConfigureOutputBuffers();
  MovieResult AllocateWorkerBuffer();
  MovieResult AcquireAvailableInputBufferIndex(int* pOutIndex,
    int* pOutRemaining);
  void AddBuffertoInputBufferList(int index);
  MovieResult AcquireDecodeInputBufferIndex(int* pOutIndex);

  template <typename T>
  using List = std::list<T, nn::movie::detail::StdLibAllocator<T>>;
  template <typename T>
  using Vector = std::vector<T, nn::movie::detail::StdLibAllocator<T>>;

  static constexpr int BufferCount = 4;

  nn::os::Mutex m_ApiMutex;
  // Signaled by the decoder thread when a message is processed.
  LightEvent m_MessageProcessedEvent;
  int32_t m_Reserved0;
  MovieResult m_Result;
  const nn::movie::MediaProperty* m_pConfigureProperty;
  const char* m_pConfiguration;
  size_t m_ConfigurationSize;
  nn::os::SystemEventType m_InputBufferEvent;
  nn::os::SystemEventType m_AudioFrameReadyEvent;
  nn::os::SystemEventType m_AudioFrameFormatChangedEvent;
  IAudioDecoder* m_pDecoder;
  nn::movie::MediaMimeType m_MimeType;
  AudioDecoderOutputFormat m_OutputFormat;
  AudioCodecMode m_CodecMode;
  AudioDecoderState m_State;
  void* m_pThreadStack;
  bool m_IsThreadCreated;
  bool m_IsThreadRunning;
  nn::movie::detail::ThreadInfo* m_pThreadInfo;
  void* m_pInstance;
  nn::os::Mutex m_InputBufferMutex;
  nn::os::Mutex m_OutputBufferMutex;
  Vector<AudioInputBuffer*> m_InputBuffers;
  Vector<AudioFrame*> m_OutputBuffers;
  nn::os::Mutex m_InputBufferIndexMutex;
  nn::os::Mutex m_OutputBufferIndexMutex;
  List<int> m_InputBufferIndexList;
  List<int> m_OutputBufferIndexList;
  nn::os::Mutex m_AvailableInputBufferIndexMutex;
  List<int> m_AvailableInputBufferIndexList;
  nn::os::Mutex m_DecodeInputBufferIndexMutex;
  List<int> m_DecodeInputBufferIndexList;
  nn::os::Mutex m_AvailableAudioFrameIndexMutex;
  List<int> m_AvailableAudioFrameIndexList;
  uintptr_t* m_pMessageBuffer;
  // Constructed by InitializeMessageQueue only.
  union {
    nn::os::MessageQueueType m_MessageQueue;
  };
  void* m_pWorkerBuffer;
  int32_t m_WorkerBufferSize;
  nn::movie::MediaProperty m_InputFormat;
  nn::movie::MediaProperty m_OutputFormats[BufferCount];
  int32_t m_CurrentOutputIndex;
  nn::movie::detail::AllocatorInfo* m_pAllocatorInfo;
  nn::os::Mutex m_ConfigurationMutex;
  List<ConfigurationData*> m_ConfigurationList;
  int32_t m_ChannelCount;
  int32_t m_SampleRate;
  int32_t m_SampleByteSize;
  bool m_IsInputEndOfStream;
  int32_t m_InputBufferSize;
  int32_t m_OutputBufferSize;
  std::atomic<int32_t> m_DecodedAudioFrameCount;
  // Set by the public decoder to the number of frames it registered.
  std::atomic<int32_t> m_RegisteredAudioFrameCount;
  nn::os::Mutex m_AudioFrameReadyMutex;
  SystemEventManager<3, nn::os::EventClearMode_AutoClear> m_EventManager;
  // Opus streams are only accepted when this is set.
  bool m_IsReinitializable;
};

}
