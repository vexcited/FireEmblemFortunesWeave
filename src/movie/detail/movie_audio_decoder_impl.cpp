#include <algorithm>
#include <cstring>
#include <new>

#include "movie/detail/movie_audio_decoder_impl.hpp"
#include "movie/detail/movie_audio_decoders.hpp"
#include "movie/detail/movie_configuration_data.hpp"
#include "movie/detail/movie_utils.hpp"
#include "movie/movie_audio_frame.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_heap_memory_manager.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_buffer.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/os/thread_api.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);

}

namespace movie::detail {

using nn::movie::MediaProperty;
using nn::movie::detail::AllocateMemory;
using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::FreeMemory;
using nn::movie::detail::HeapMemoryManager;
using nn::movie::detail::ThreadInfo;
using nn::movie::detail::ThreadManager;

namespace {

enum Message : uintptr_t {
  Message_Initialize,
  Message_Finalize,
  Message_Configure,
  Message_Start,
  Message_FormatChanged,
  Message_Decode,
  Message_CheckInputBuffer,
  Message_Exit,
};

constexpr MovieResult ResultNoBufferAvailable = static_cast<MovieResult>(2);
constexpr MovieResult ResultBufferTooSmall = static_cast<MovieResult>(6);
constexpr MovieResult ResultThreadCreationFailed =
  static_cast<MovieResult>(31);
constexpr MovieResult ResultPending = static_cast<MovieResult>(37);
constexpr MovieResult ResultPropertyMissing = static_cast<MovieResult>(38);
constexpr MovieResult ResultDecoderNotCreated = static_cast<MovieResult>(39);
constexpr MovieResult ResultNoInputMemory = static_cast<MovieResult>(40);
constexpr MovieResult ResultInvalidBufferIndex = static_cast<MovieResult>(42);
constexpr MovieResult ResultInputTooLarge = static_cast<MovieResult>(43);
constexpr MovieResult ResultSetBufferFailed = static_cast<MovieResult>(44);
constexpr MovieResult ResultUnsupportedMimeType = static_cast<MovieResult>(47);
constexpr MovieResult ResultUnsupportedOutputFormat =
  static_cast<MovieResult>(48);
constexpr MovieResult ResultUnsupportedCodecMode =
  static_cast<MovieResult>(49);
constexpr MovieResult ResultNeedMoreData = static_cast<MovieResult>(9);
constexpr MovieResult ResultDecoderBusy = static_cast<MovieResult>(121);

constexpr auto MimeType_Aac = static_cast<nn::movie::MediaMimeType>(65);
constexpr auto MimeType_Vorbis = static_cast<nn::movie::MediaMimeType>(66);
constexpr auto MimeType_Opus = static_cast<nn::movie::MediaMimeType>(67);

constexpr auto OutputFormat_Pcm8 = static_cast<AudioDecoderOutputFormat>(1);
constexpr auto OutputFormat_Pcm16 = static_cast<AudioDecoderOutputFormat>(2);
constexpr auto OutputFormat_Pcm32 = static_cast<AudioDecoderOutputFormat>(3);
constexpr auto CodecMode_Default = static_cast<AudioCodecMode>(1);

constexpr auto ComponentType_AudioDecoder =
  static_cast<ThreadInfo::ComponentType>(1);

constexpr size_t MessageBufferSize = 1024;
constexpr int MessageCount = 128;
constexpr size_t ThreadStackSize = 0x40000;
constexpr size_t ThreadStackAlignment = 0x1000;
constexpr size_t BufferSizeMin = 0x2000;

inline AllocatorInfo* GetCurrentAllocatorInfo(AllocatorInfo* allocatorInfo) {
  if (allocatorInfo != nullptr) {
    return allocatorInfo;
  }

  return reinterpret_cast<AllocatorInfo*>(
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

template <typename T>
T* Make(AllocatorInfo* allocatorInfo) {
  allocatorInfo = GetCurrentAllocatorInfo(allocatorInfo);
  if (allocatorInfo == nullptr) {
    return nullptr;
  }

  void* storage = nn::movie::detail::AllocateMemory(sizeof(T), allocatorInfo);
  if (storage == nullptr) {
    return nullptr;
  }

  return new (storage) T();
}

template <typename T>
void Delete(T* object, AllocatorInfo* allocatorInfo) {
  allocatorInfo = GetCurrentAllocatorInfo(allocatorInfo);
  if (allocatorInfo != nullptr) {
    object->~T();
    FreeMemory(object, allocatorInfo);
  }
}

inline void ClearSystemEventStorage(nn::os::SystemEventType* event) {
  std::memset(event->storage, 0, sizeof(event->storage));
  event->state = 0;
}

inline int GetSampleByteSize(AudioDecoderOutputFormat format) {
  if (format == OutputFormat_Pcm8) {
    return 1;
  }

  return format == OutputFormat_Pcm32 ? 4 : 2;
}

void AudioDecoderThreadFunction(void* argument) {
  NN_ABORT_UNLESS_NOT_NULL(argument);
  AudioDecoderImpl* impl = static_cast<AudioDecoderImpl*>(argument);
  AllocatorInfo* allocatorInfo = impl->m_pAllocatorInfo;
  NN_ABORT_UNLESS_NOT_NULL(allocatorInfo);
  HeapMemoryManager::SetCurrentHeap(
    reinterpret_cast<nn::movie::detail::HeapContext*>(allocatorInfo));
  impl->ExecuteAudioDecoderThreadBody();
}

}

template struct SystemEventManager<3, nn::os::EventClearMode_AutoClear>;

AudioDecoderImpl::AudioDecoderImpl(AllocatorInfo* allocatorInfo)
  : m_ApiMutex(true),
    m_MessageProcessedEvent(false, nn::os::EventClearMode_AutoClear),
    m_Result(ResultPending), m_pConfigureProperty(nullptr),
    m_pConfiguration(nullptr), m_ConfigurationSize(0), m_pDecoder(nullptr),
    m_MimeType(MimeType_Aac), m_OutputFormat(OutputFormat_Pcm16),
    m_CodecMode(CodecMode_Default), m_pThreadStack(nullptr),
    m_IsThreadCreated(false), m_IsThreadRunning(false),
    m_pThreadInfo(nullptr), m_pInstance(nullptr), m_InputBufferMutex(false),
    m_OutputBufferMutex(false),
    m_InputBuffers(nn::movie::detail::StdLibAllocator<AudioInputBuffer*>(
      allocatorInfo)),
    m_OutputBuffers(nn::movie::detail::StdLibAllocator<AudioFrame*>(
      allocatorInfo)),
    m_InputBufferIndexMutex(false), m_OutputBufferIndexMutex(false),
    m_InputBufferIndexList(nn::movie::detail::StdLibAllocator<int>(
      allocatorInfo)),
    m_OutputBufferIndexList(nn::movie::detail::StdLibAllocator<int>(
      allocatorInfo)),
    m_AvailableInputBufferIndexMutex(false),
    m_AvailableInputBufferIndexList(nn::movie::detail::StdLibAllocator<int>(
      allocatorInfo)),
    m_DecodeInputBufferIndexMutex(false),
    m_DecodeInputBufferIndexList(nn::movie::detail::StdLibAllocator<int>(
      allocatorInfo)),
    m_AvailableAudioFrameIndexMutex(false),
    m_AvailableAudioFrameIndexList(nn::movie::detail::StdLibAllocator<int>(
      allocatorInfo)),
    m_pMessageBuffer(nullptr), m_pWorkerBuffer(nullptr),
    m_WorkerBufferSize(BufferSizeMin), m_CurrentOutputIndex(-1),
    m_pAllocatorInfo(allocatorInfo), m_ConfigurationMutex(false),
    m_ConfigurationList(
      nn::movie::detail::StdLibAllocator<ConfigurationData*>(allocatorInfo)),
    m_ChannelCount(0), m_SampleRate(0), m_SampleByteSize(0),
    m_IsInputEndOfStream(false), m_InputBufferSize(BufferSizeMin),
    m_OutputBufferSize(BufferSizeMin), m_DecodedAudioFrameCount(0),
    m_RegisteredAudioFrameCount(BufferCount), m_AudioFrameReadyMutex(true),
    m_EventManager(), m_IsReinitializable(false) {
  ClearSystemEventStorage(&m_InputBufferEvent);
  ClearSystemEventStorage(&m_AudioFrameReadyEvent);
  ClearSystemEventStorage(&m_AudioFrameFormatChangedEvent);
}

AudioDecoderImpl::~AudioDecoderImpl() {
  Finalize();
}

MovieResult AudioDecoderImpl::Finalize() {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Finalize);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pDecoder != nullptr) {
    m_ApiMutex.Lock();
    nn::os::SendMessageQueue(&m_MessageQueue, Message_Finalize);
    m_MessageProcessedEvent.Wait();
    FinalizeAudioDecoderThread();
    DeallocateBuffers();
    DeallocatePendingFormatChanges();
    m_State.SetState(MediaState::State_Created);
    m_ApiMutex.Unlock();
  }

  m_EventManager.ReleaseSystemEvent(&m_InputBufferEvent);
  m_EventManager.ReleaseSystemEvent(&m_AudioFrameReadyEvent);
  m_EventManager.ReleaseSystemEvent(&m_AudioFrameFormatChangedEvent);
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::Initialize(nn::movie::MediaMimeType mimeType,
  AudioDecoderOutputFormat outputFormat, AudioCodecMode codecMode,
  void* instance) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Initialize);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_pInstance = instance;
  if (mimeType != MimeType_Aac && mimeType != MimeType_Vorbis &&
    (mimeType != MimeType_Opus || !m_IsReinitializable)) {
    return ResultUnsupportedMimeType;
  }

  result = CheckDecoderMode(codecMode);
  if (result != MovieResult_Success) {
    return result;
  }

  result = CheckOutputFormat(outputFormat);
  if (result != MovieResult_Success) {
    return result;
  }

  m_MimeType = mimeType;
  m_OutputFormat = outputFormat;
  m_CodecMode = codecMode;
  result = m_EventManager.AcquireSystemEvent(&m_InputBufferEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_EventManager.AcquireSystemEvent(&m_AudioFrameReadyEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = m_EventManager.AcquireSystemEvent(&m_AudioFrameFormatChangedEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = InitializeAudioDecoderThread();
  if (result == MovieResult_Success) {
    m_ApiMutex.Lock();
    m_Result = ResultPending;
    nn::os::SendMessageQueue(&m_MessageQueue, Message_Initialize);
    m_MessageProcessedEvent.Wait();
    result = m_Result;
    m_ApiMutex.Unlock();
  }

  if (m_Result != MovieResult_Success) {
    Finalize();
  }

  return result;
}

MovieResult AudioDecoderImpl::CheckDecoderMode(
  AudioCodecMode codecMode) const {
  return codecMode == CodecMode_Default ? MovieResult_Success :
    ResultUnsupportedCodecMode;
}

MovieResult AudioDecoderImpl::CheckOutputFormat(
  AudioDecoderOutputFormat outputFormat) const {
  return outputFormat == OutputFormat_Pcm16 ? MovieResult_Success :
    ResultUnsupportedOutputFormat;
}

MovieResult AudioDecoderImpl::InitializeAudioDecoderThread() {
  m_pMessageBuffer = static_cast<uintptr_t*>(
    nn::movie::detail::AllocateMemory(MessageBufferSize, m_pAllocatorInfo));
  if (m_pMessageBuffer == nullptr) {
    return MovieResult_OutOfMemory;
  }

  nn::os::InitializeMessageQueue(&m_MessageQueue, m_pMessageBuffer,
    MessageCount);
  m_pThreadStack = AllocateMemory(ThreadStackAlignment, ThreadStackSize,
    m_pAllocatorInfo);
  if (m_pThreadStack == nullptr) {
    return MovieResult_OutOfMemory;
  }

  int priority =
    ThreadManager::GetInstance()->_GetThreadPriorityByInstance(m_pInstance);
  uint64_t coreMask =
    ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(m_pInstance);
  if (ThreadManager::_StaticCreate(ComponentType_AudioDecoder, &m_pThreadInfo,
    AudioDecoderThreadFunction, this, m_pThreadStack, ThreadStackSize,
    priority, "AudioDecoderThread", coreMask, m_pInstance) != 0) {
    return ResultThreadCreationFailed;
  }

  m_IsThreadCreated = true;
  m_IsThreadRunning = true;
  nn::os::StartThread(&m_pThreadInfo->thread);
  return MovieResult_Success;
}

void AudioDecoderImpl::DoInitialize() {
  m_Result = AllocateCoreDecoder(&m_pDecoder, m_MimeType);
  if (m_Result == MovieResult_Success) {
    m_Result = m_pDecoder->Initialize(m_pAllocatorInfo, m_OutputFormat);
  }

  if (m_Result != MovieResult_Success) {
    DeallocateCoreDecoder();
    m_MessageProcessedEvent.Signal();
    return;
  }

  m_Result = AllocateBuffers();
  m_State.SetState(MediaState::State_Initialized);
  m_MessageProcessedEvent.Signal();
}

MovieResult AudioDecoderImpl::AllocateCoreDecoder(IAudioDecoder** pOutDecoder,
  nn::movie::MediaMimeType mimeType) {
  if (*pOutDecoder != nullptr) {
    return MovieResult_AlreadyInitialized;
  }

  switch (mimeType) {
    case MimeType_Aac:
      *pOutDecoder = Make<AacAudioDecoder>(m_pAllocatorInfo);
      break;
    case MimeType_Vorbis:
      *pOutDecoder = Make<VorbisAudioDecoder>(m_pAllocatorInfo);
      break;
    case MimeType_Opus:
      *pOutDecoder = Make<OpusAudioDecoder>(m_pAllocatorInfo);
      break;
    default:
      return MovieResult_Success;
  }

  return *pOutDecoder != nullptr ? MovieResult_Success :
    MovieResult_OutOfMemory;
}

MovieResult AudioDecoderImpl::AllocateBuffers() {
  MovieResult result = AllocateInputBuffers();
  if (result != MovieResult_Success) {
    return result;
  }

  return AllocateOutputBuffers();
}

void AudioDecoderImpl::DeallocateCoreDecoder() {
  if (m_pDecoder != nullptr) {
    m_pDecoder->Finalize();
    if (m_pDecoder != nullptr) {
      Delete(m_pDecoder, m_pAllocatorInfo);
    }

    m_pDecoder = nullptr;
  }
}

void AudioDecoderImpl::FinalizeAudioDecoderThread() {
  if (m_IsThreadCreated) {
    if (m_IsThreadRunning) {
      SignalThreadExit();
      nn::os::WaitThread(&m_pThreadInfo->thread);
      m_IsThreadRunning = false;
    }

    ThreadManager::GetInstance()->_Destroy(m_pThreadInfo);
    m_IsThreadCreated = false;
  }

  if (m_pThreadStack != nullptr) {
    FreeMemory(m_pThreadStack, m_pAllocatorInfo);
    m_pThreadStack = nullptr;
  }

  if (m_pMessageBuffer != nullptr) {
    nn::os::FinalizeMessageQueue(&m_MessageQueue);
    FreeMemory(m_pMessageBuffer, m_pAllocatorInfo);
    m_pMessageBuffer = nullptr;
  }
}

void AudioDecoderImpl::DeallocateBuffers() {
  DeallocateInputBuffers();
  DeallocateOutputBuffers();
  if (m_pWorkerBuffer != nullptr) {
    FreeMemory(m_pWorkerBuffer, m_pAllocatorInfo);
    m_pWorkerBuffer = nullptr;
  }
}

void AudioDecoderImpl::DeallocatePendingFormatChanges() {
  m_ConfigurationMutex.Lock();
  while (!m_ConfigurationList.empty()) {
    ConfigurationData* data = m_ConfigurationList.front();
    m_ConfigurationList.pop_front();
    if (data != nullptr) {
      Delete(data, m_pAllocatorInfo);
    }
  }

  m_ConfigurationMutex.Unlock();
}

void AudioDecoderImpl::DoFinalize() {
  if (m_pDecoder != nullptr) {
    DeallocateCoreDecoder();
  }

  m_MessageProcessedEvent.Signal();
}

MovieResult AudioDecoderImpl::Configure(const MediaProperty* property,
  const char* configuration, size_t size) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Configure);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pDecoder == nullptr) {
    return ResultDecoderNotCreated;
  }

  m_ApiMutex.Lock();
  m_pConfigureProperty = property;
  m_pConfiguration = configuration;
  m_ConfigurationSize = size;
  nn::os::SendMessageQueue(&m_MessageQueue, Message_Configure);
  m_MessageProcessedEvent.Wait();
  result = m_Result;
  if (result == MovieResult_Success &&
    m_State.GetState() != MediaState::State_Started) {
    m_State.SetState(MediaState::State_Prepared);
  }

  m_ApiMutex.Unlock();
  return result;
}

void AudioDecoderImpl::DoConfigure() {
  if (m_State.GetState() == MediaState::State_Started) {
    // A configuration while decoding applies with the next queued input.
    ConfigurationData* data = Make<ConfigurationData>(m_pAllocatorInfo);
    if (data == nullptr) {
      m_Result = MovieResult_OutOfMemory;
      m_MessageProcessedEvent.Signal();
      return;
    }

    m_Result = data->Initialize(m_pAllocatorInfo, m_pConfigureProperty,
      m_pConfiguration, m_ConfigurationSize);
    if (m_Result == MovieResult_Success) {
      m_ConfigurationMutex.Lock();
      m_ConfigurationList.push_back(data);
      m_ConfigurationMutex.Unlock();
    }
  }
  else {
    m_Result = m_pDecoder->Configure(m_pConfigureProperty, m_pConfiguration,
      m_ConfigurationSize);
    if (m_Result == MovieResult_Success) {
      m_Result = m_pDecoder->GetAudioFrameRequirements(&m_InputFormat);
      if (m_Result == MovieResult_Success) {
        m_Result = ConfigureBuffers();
      }
    }
  }

  m_MessageProcessedEvent.Signal();
}

MovieResult AudioDecoderImpl::ConfigureBuffers() {
  size_t maxInputSize = 0;
  if (!m_InputFormat.GetSize(&maxInputSize, "max-input-size")) {
    return ResultPropertyMissing;
  }

  int32_t channelCount = 0;
  if (!m_InputFormat.GetInt32(&channelCount, "channel-count")) {
    return ResultPropertyMissing;
  }

  int sampleByteSize = GetSampleByteSize(m_OutputFormat);
  m_SampleByteSize = sampleByteSize;
  size_t outputBufferSize = 0;
  if (!m_InputFormat.GetSize(&outputBufferSize, "output-buf-size")) {
    return ResultPropertyMissing;
  }

  size_t inputBufferSize = 0;
  if (!m_InputFormat.GetSize(&inputBufferSize, "input-buf-size")) {
    return ResultPropertyMissing;
  }

  inputBufferSize = std::max(inputBufferSize, BufferSizeMin);
  outputBufferSize = std::max(outputBufferSize, BufferSizeMin);
  m_InputBufferSize = inputBufferSize;
  m_OutputBufferSize = outputBufferSize;
  m_WorkerBufferSize = maxInputSize * sampleByteSize;
  DeconfigureInputBuffers();
  DeconfigureOutputBuffers();
  if (m_pWorkerBuffer != nullptr) {
    FreeMemory(m_pWorkerBuffer, m_pAllocatorInfo);
    m_pWorkerBuffer = nullptr;
  }

  MovieResult result = ConfigureInputBuffers();
  if (result == MovieResult_Success) {
    result = ConfigureOutputBuffers();
    if (result == MovieResult_Success) {
      result = AllocateWorkerBuffer();
    }
  }

  if (result != MovieResult_Success) {
    DeconfigureInputBuffers();
    DeconfigureOutputBuffers();
    if (m_pWorkerBuffer != nullptr) {
      FreeMemory(m_pWorkerBuffer, m_pAllocatorInfo);
      m_pWorkerBuffer = nullptr;
    }
  }

  return result;
}

void AudioDecoderImpl::DecodeInputBufferEventAndSignal() {
  m_Result = DecodeInputBufferEvent();
  m_MessageProcessedEvent.Signal();
}

// The original build inlines these pushes, which the current libc++ list
// does not get by default in a function this large.
MovieResult AudioDecoderImpl::DecodeInputBufferEvent() {
  m_DecodeInputBufferIndexMutex.Lock();
  if (static_cast<int>(m_DecodeInputBufferIndexList.size()) <= 0) {
    m_DecodeInputBufferIndexMutex.Unlock();
    return ResultNoBufferAvailable;
  }

  int inputIndex = m_DecodeInputBufferIndexList.front();
  m_DecodeInputBufferIndexList.pop_front();
  m_DecodeInputBufferIndexMutex.Unlock();

  if (m_pDecoder == nullptr) {
    return ResultDecoderNotCreated;
  }

  m_OutputBufferIndexMutex.Lock();
  if (static_cast<int>(m_OutputBufferIndexList.size()) <= 0) {
    m_OutputBufferIndexMutex.Unlock();
    return MovieResult_NotAvailable;
  }

  int outputIndex = m_OutputBufferIndexList.front();
  m_OutputBufferIndexList.pop_front();
  m_OutputBufferIndexMutex.Unlock();
  if (outputIndex < 0) {
    return MovieResult_NotAvailable;
  }

  size_t consumedSize = 0;
  size_t sampleCount = 0;
  m_InputBufferMutex.Lock();
  AudioInputBuffer* input = m_InputBuffers.at(inputIndex);
  MovieResult result;
  ConfigurationData* data = input->m_pConfigurationData;
  if (data != nullptr) {
    result = m_pDecoder->Configure(&data->m_Property, data->m_pConfiguration,
      data->m_ConfigurationSize);
    if (IsSucceeded(result)) {
      result = m_pDecoder->GetAudioFrameRequirements(&m_InputFormat);
    }

    if (!IsSucceeded(result)) {
      m_InputBufferMutex.Unlock();
      return result;
    }

    if (input->m_pConfigurationData != nullptr) {
      Delete(input->m_pConfigurationData, m_pAllocatorInfo);
    }

    input->m_pConfigurationData = nullptr;
  }
  else if (input->m_FilledSize != 0) {
    result = m_pDecoder->Decode(&consumedSize, &sampleCount,
      static_cast<int16_t*>(m_pWorkerBuffer), m_WorkerBufferSize,
      input->m_pData, input->m_FilledSize);
    if (!IsSucceeded(result)) {
      if (result == ResultDecoderBusy || result == ResultNeedMoreData) {
        m_AvailableInputBufferIndexMutex.Lock();
        [[clang::always_inline]]
        m_AvailableInputBufferIndexList.push_back(inputIndex);
        m_AvailableInputBufferIndexMutex.Unlock();
        m_OutputBufferIndexMutex.Lock();
        [[clang::always_inline]]
        m_OutputBufferIndexList.push_back(outputIndex);
        m_OutputBufferIndexMutex.Unlock();
        nn::os::SendMessageQueue(&m_MessageQueue, Message_CheckInputBuffer);
      }

      m_InputBufferMutex.Unlock();
      return result;
    }
  }

  m_InputBufferMutex.Unlock();
  int sampleRate = 0;
  int channelCount = 0;
  m_OutputBufferMutex.Lock();
  MediaProperty* format = &m_OutputFormats[outputIndex];
  m_pDecoder->GetAudioFrameProperties(format);
  format->GetInt32(&channelCount, "channel-count");
  format->GetInt32(&sampleRate, "sample-rate");
  nn::movie::Buffer* buffer = nullptr;
  AudioFrame* frame = m_OutputBuffers.at(outputIndex);
  result = frame->GetBuffer(&buffer);
  if (result == MovieResult_Success) {
    if (input->m_FilledSize != 0) {
      void* frameData = nullptr;
      size_t capacity = 0;
      size_t filledSize = 0;
      result = ConvertNnMovieToMovieResult(buffer->GetBuffer(&frameData,
        &capacity, &filledSize));
      if (result == MovieResult_Success) {
        size_t size = sampleCount * channelCount * m_SampleByteSize;
        result = ConvertNnMovieToMovieResult(
          buffer->SetFilledBufferSize(size));
        if (result == MovieResult_Success) {
          std::memcpy(frameData, m_pWorkerBuffer, size);
        }
      }

      frame->SetEndOfStreamState(input->m_IsEndOfStream);
    }
    else {
      NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->SetFilledBufferSize(0));
      frame->SetEndOfStreamState(true);
    }
  }

  frame->SetChannelCount(channelCount);
  frame->SetSampleRate(sampleRate);
  NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->SetTimeStamp(
    nn::TimeSpan{input->m_PresentationTimeUs * 1000}));
  frame->SetSampleFormat(SampleFormat_PcmInt16);
  m_OutputBufferMutex.Unlock();
  m_AvailableAudioFrameIndexMutex.Lock();
  [[clang::always_inline]]
  m_AvailableAudioFrameIndexList.push_back(outputIndex);
  if (m_AvailableAudioFrameIndexList.size() == 1 &&
    (channelCount != m_ChannelCount || sampleRate != m_SampleRate)) {
    m_ChannelCount = channelCount;
    m_SampleRate = sampleRate;
    nn::os::SignalSystemEvent(&m_AudioFrameFormatChangedEvent);
  }

  AudioFrameReady();
  m_AvailableAudioFrameIndexMutex.Unlock();
  nn::os::SendMessageQueue(&m_MessageQueue, Message_CheckInputBuffer);
  return result;
}

MovieResult AudioDecoderImpl::GetAudioFrameRequirements(MediaProperty* pOut) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_GetAudioFrameRequirements);
  if (!IsSucceeded(result)) {
    return result;
  }

  if (m_pDecoder == nullptr) {
    return ResultDecoderNotCreated;
  }

  pOut->Clear();
  result = m_pDecoder->GetAudioFrameRequirements(pOut);
  if (!IsSucceeded(result)) {
    return result;
  }

  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::GetInputBufferEvent(
  nn::os::SystemEventType** pOutEvent) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_GetInputBufferEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = &m_InputBufferEvent;
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::GetAudioFrameReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_GetAudioFrameReadyEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = &m_AudioFrameReadyEvent;
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::GetAudioFrameFormatChangedEvent(
  nn::os::SystemEventType** pOutEvent) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_GetAudioFrameFormatChangedEvent);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutEvent = &m_AudioFrameFormatChangedEvent;
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::Start() {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Start);
  if (!IsSucceeded(result)) {
    return result;
  }

  FlushBuffers();
  m_IsInputEndOfStream = false;
  nn::os::SendMessageQueue(&m_MessageQueue, Message_Start);
  m_State.SetState(MediaState::State_Started);
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::FlushBuffers() {
  m_InputBufferIndexMutex.Lock();
  m_InputBufferIndexList.clear();
  m_InputBufferIndexMutex.Unlock();
  m_OutputBufferIndexMutex.Lock();
  m_OutputBufferIndexList.clear();
  m_OutputBufferIndexMutex.Unlock();
  m_AvailableInputBufferIndexMutex.Lock();
  m_AvailableInputBufferIndexList.clear();
  m_AvailableInputBufferIndexMutex.Unlock();
  m_DecodeInputBufferIndexMutex.Lock();
  m_DecodeInputBufferIndexList.clear();
  m_DecodeInputBufferIndexMutex.Unlock();
  m_AvailableAudioFrameIndexMutex.Lock();
  m_AvailableAudioFrameIndexList.clear();
  m_AvailableAudioFrameIndexMutex.Unlock();
  return m_pDecoder->Flush();
}

MovieResult AudioDecoderImpl::Stop() {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Stop);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_State.SetState(MediaState::State_Stopped);
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::Flush() {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Flush);
  if (!IsSucceeded(result)) {
    return result;
  }

  FlushBuffers();
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::Decode(const void* data, size_t capacity,
  size_t filledSize, int64_t presentationTimeUs, bool isEndOfStream) {
  if (filledSize > capacity) {
    return ResultBufferTooSmall;
  }

  if (isEndOfStream) {
    m_IsInputEndOfStream = true;
  }

  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_Decode);
  if (!IsSucceeded(result)) {
    return result;
  }

  int index = -1;
  int remaining = 0;
  result = AcquireInputBufferIndex(&index, &remaining);
  if (result != MovieResult_Success) {
    return result;
  }

  result = CopyInputBufferToDecoderMemory(index, data, filledSize,
    presentationTimeUs, isEndOfStream);
  if (!IsSucceeded(result)) {
    return result;
  }

  m_DecodeInputBufferIndexMutex.Lock();
  m_DecodeInputBufferIndexList.push_back(index);
  m_DecodeInputBufferIndexMutex.Unlock();
  m_ApiMutex.Lock();
  nn::os::SendMessageQueue(&m_MessageQueue, Message_Decode);
  m_MessageProcessedEvent.Wait();
  result = m_Result;
  if (IsSucceeded(result)) {
    result = MovieResult_Success;
  }

  m_ApiMutex.Unlock();
  return result;
}

MovieResult AudioDecoderImpl::AcquireInputBufferIndex(int* pOutIndex,
  int* pOutRemaining) {
  *pOutIndex = -1;
  *pOutRemaining = 0;
  m_InputBufferIndexMutex.Lock();
  int count = m_InputBufferIndexList.size();
  if (count < 1) {
    m_InputBufferIndexMutex.Unlock();
    return ResultNoBufferAvailable;
  }

  *pOutIndex = m_InputBufferIndexList.front();
  *pOutRemaining = count - 1;
  m_InputBufferIndexList.pop_front();
  m_InputBufferIndexMutex.Unlock();
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::CopyInputBufferToDecoderMemory(int index,
  const void* data, size_t size, int64_t presentationTimeUs,
  bool isEndOfStream) {
  m_InputBufferMutex.Lock();
  if (index < 0 || static_cast<size_t>(index) >= m_InputBuffers.size()) {
    m_InputBufferMutex.Unlock();
    return ResultInvalidBufferIndex;
  }

  AudioInputBuffer* input = m_InputBuffers[index];
  input->Clear();
  MovieResult result = input->SetData(data, size, presentationTimeUs,
    isEndOfStream);
  m_ConfigurationMutex.Lock();
  if (!m_ConfigurationList.empty()) {
    input->m_pConfigurationData = m_ConfigurationList.front();
    m_ConfigurationList.pop_front();
  }

  m_ConfigurationMutex.Unlock();
  m_InputBufferMutex.Unlock();
  return result;
}

MovieResult AudioDecoderImpl::GetAudioFrameProperties(MediaProperty* pOut) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_GetAudioFrameProperties);
  if (!IsSucceeded(result)) {
    return result;
  }

  int index = m_CurrentOutputIndex;
  if (index < 0) {
    return MovieResult_NotAvailable;
  }

  int32_t channelCount = 0;
  int32_t sampleRate = 0;
  int32_t bitRate = 0;
  const MediaProperty& format = m_OutputFormats[index];
  if (!format.GetInt32(&channelCount, "channel-count") ||
    !format.GetInt32(&sampleRate, "sample-rate") ||
    !format.GetInt32(&bitRate, "bitrate")) {
    return ResultPropertyMissing;
  }

  pOut->Clear();
  pOut->SetInt32("channel-count", channelCount);
  pOut->SetInt32("sample-rate", sampleRate);
  pOut->SetInt32("bitrate", bitRate);
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::GetAudioFrame(AudioFrame* frame,
  int* pOutRemaining) {
  MovieResult result = m_State.ValidateCurrentState(
    AudioDecoderState::AudioDecoderFunctions_GetAudioFrame);
  if (!IsSucceeded(result)) {
    return result;
  }

  *pOutRemaining = 0;
  m_AvailableAudioFrameIndexMutex.Lock();
  if (static_cast<int>(m_AvailableAudioFrameIndexList.size()) <= 0) {
    m_AvailableAudioFrameIndexMutex.Unlock();
    return MovieResult_NotAvailable;
  }

  int index = m_AvailableAudioFrameIndexList.front();
  m_AvailableAudioFrameIndexList.pop_front();
  m_AvailableAudioFrameIndexMutex.Unlock();
  m_OutputBufferIndexMutex.Lock();
  m_OutputBufferIndexList.push_back(index);
  m_OutputBufferIndexMutex.Unlock();
  m_OutputBufferMutex.Lock();
  AudioFrame* decoded = m_OutputBuffers.at(index);
  if (decoded != nullptr) {
    result = CopyDecodedAudioFrameData(frame, decoded);
    if (result == MovieResult_Success) {
      m_CurrentOutputIndex = index;
    }
  }
  else {
    result = MovieResult_NotAvailable;
  }

  m_OutputBufferMutex.Unlock();
  m_AvailableAudioFrameIndexMutex.Lock();
  if (!m_AvailableAudioFrameIndexList.empty()) {
    int channelCount = 0;
    int sampleRate = 0;
    int nextChannelCount = 0;
    int nextSampleRate = 0;
    m_OutputBufferMutex.Lock();
    AudioFrame* next =
      m_OutputBuffers.at(m_AvailableAudioFrameIndexList.front());
    m_OutputBufferMutex.Unlock();
    decoded->GetChannelCount(&channelCount);
    decoded->GetSampleRate(&sampleRate);
    next->GetChannelCount(&nextChannelCount);
    next->GetSampleRate(&nextSampleRate);
    if (channelCount != nextChannelCount || sampleRate != nextSampleRate) {
      m_ChannelCount = nextChannelCount;
      m_SampleRate = nextSampleRate;
      nn::os::SignalSystemEvent(&m_AudioFrameFormatChangedEvent);
    }

    *pOutRemaining = m_AvailableAudioFrameIndexList.size();
  }

  m_AvailableAudioFrameIndexMutex.Unlock();
  m_AvailableInputBufferIndexMutex.Lock();
  m_AvailableInputBufferIndexList.push_back(index);
  m_AvailableInputBufferIndexMutex.Unlock();
  nn::os::SendMessageQueue(&m_MessageQueue, Message_CheckInputBuffer);
  return result;
}

MovieResult AudioDecoderImpl::AcquireAvailableAudioFrameIndex(int* pOutIndex,
  int* pOutRemaining) {
  *pOutIndex = -1;
  *pOutRemaining = 0;
  m_AvailableAudioFrameIndexMutex.Lock();
  int count = m_AvailableAudioFrameIndexList.size();
  if (count < 1) {
    m_AvailableAudioFrameIndexMutex.Unlock();
    return MovieResult_NotAvailable;
  }

  *pOutIndex = m_AvailableAudioFrameIndexList.front();
  *pOutRemaining = count - 1;
  m_AvailableAudioFrameIndexList.pop_front();
  m_AvailableAudioFrameIndexMutex.Unlock();
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::CopyDecodedAudioFrameData(AudioFrame* pOut,
  AudioFrame* frame) const {
  nn::movie::Buffer* outBuffer = nullptr;
  void* outData = nullptr;
  size_t outCapacity = 0;
  size_t outFilledSize = 0;
  MovieResult result = pOut->GetBuffer(&outBuffer);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = ConvertNnMovieToMovieResult(outBuffer->GetBuffer(&outData,
    &outCapacity, &outFilledSize));
  if (!IsSucceeded(result)) {
    return result;
  }

  nn::movie::Buffer* buffer = nullptr;
  void* data = nullptr;
  size_t capacity = 0;
  size_t filledSize = 0;
  result = frame->GetBuffer(&buffer);
  if (!IsSucceeded(result)) {
    return result;
  }

  result = ConvertNnMovieToMovieResult(buffer->GetBuffer(&data, &capacity,
    &filledSize));
  if (!IsSucceeded(result)) {
    return result;
  }

  if (filledSize > outCapacity) {
    return ResultBufferTooSmall;
  }

  *pOut = *frame;
  std::memcpy(outData, data, filledSize);
  *outBuffer = *buffer;
  result = ConvertNnMovieToMovieResult(outBuffer->SetBuffer(outData,
    outCapacity, filledSize));
  if (!IsSucceeded(result)) {
    return result;
  }

  result = pOut->SetBuffer(outBuffer);
  if (!IsSucceeded(result)) {
    return result;
  }

  return MovieResult_Success;
}

void AudioDecoderImpl::SignalAudioFrameFormatChangedEvent() {
  nn::os::SignalSystemEvent(&m_AudioFrameFormatChangedEvent);
}

void AudioDecoderImpl::ExecuteAudioDecoderThreadBody() {
  uintptr_t message = 0;
  while (true) {
    nn::os::ReceiveMessageQueue(&message, &m_MessageQueue);
    switch (static_cast<int>(message)) {
      case Message_Initialize:
        DoInitialize();
        break;
      case Message_Finalize:
        DoFinalize();
        break;
      case Message_Configure:
        DoConfigure();
        break;
      case Message_Start:
        StartAudioDecoderEvent();
        break;
      case Message_FormatChanged:
        SignalAudioFrameFormatChangedEvent();
        break;
      case Message_Decode:
        DecodeInputBufferEventAndSignal();
        break;
      case Message_CheckInputBuffer:
        CheckInputBufferAvailableEvent();
        break;
      default:
        return;
    }
  }
}

MovieResult AudioDecoderImpl::StartAudioDecoderEvent() {
  m_AvailableInputBufferIndexMutex.Lock();
  for (int i = 0; i < BufferCount; i++) {
    m_AvailableInputBufferIndexList.push_back(i);
  }

  m_AvailableInputBufferIndexMutex.Unlock();
  m_OutputBufferIndexMutex.Lock();
  for (int i = 0; i < BufferCount; i++) {
    m_OutputBufferIndexList.push_back(i);
  }

  m_OutputBufferIndexMutex.Unlock();
  nn::os::SendMessageQueue(&m_MessageQueue, Message_CheckInputBuffer);
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::CheckInputBufferAvailableEvent() {
  int index = -1;
  int remaining = 0;
  MovieResult result = AcquireAvailableInputBufferIndex(&index, &remaining);
  if (result != MovieResult_Success) {
    return result;
  }

  AddBuffertoInputBufferList(index);
  SignalInputBufferAvailableEvent();
  nn::os::SleepThread(nn::TimeSpan{2000000});
  return MovieResult_Success;
}

void AudioDecoderImpl::SignalThreadExit() {
  nn::os::SendMessageQueue(&m_MessageQueue, Message_Exit);
}

void AudioDecoderImpl::SignalInputBufferAvailableEvent() {
  if (!m_IsInputEndOfStream) {
    nn::os::SignalSystemEvent(&m_InputBufferEvent);
  }
}

void AudioDecoderImpl::SignalAudioFrameReadyEvent() {
  m_AudioFrameReadyMutex.Lock();
  if (m_DecodedAudioFrameCount >= 1 && m_RegisteredAudioFrameCount >= 1) {
    m_DecodedAudioFrameCount--;
    m_RegisteredAudioFrameCount--;
    nn::os::SignalSystemEvent(&m_AudioFrameReadyEvent);
  }

  m_AudioFrameReadyMutex.Unlock();
}

void AudioDecoderImpl::AudioFrameReady() {
  m_AudioFrameReadyMutex.Lock();
  if (m_State.GetState() == MediaState::State_Started) {
    m_DecodedAudioFrameCount++;
    SignalAudioFrameReadyEvent();
  }

  m_AudioFrameReadyMutex.Unlock();
}

MovieResult AudioDecoderImpl::ReleaseAudioFrame() {
  m_RegisteredAudioFrameCount++;
  SignalAudioFrameReadyEvent();
  return MovieResult_Success;
}

MovieResult AudioDecoderImpl::AllocateInputBuffers() {
  m_InputBufferMutex.Lock();
  while (m_InputBuffers.size() < BufferCount) {
    AudioInputBuffer* buffer = Make<AudioInputBuffer>(m_pAllocatorInfo);
    if (buffer == nullptr) {
      m_InputBufferMutex.Unlock();
      DeallocateInputBuffers();
      return MovieResult_OutOfMemory;
    }

    m_InputBuffers.push_back(buffer);
  }

  m_InputBufferMutex.Unlock();
  return MovieResult_Success;
}

void AudioDecoderImpl::DeallocateInputBuffers() {
  m_InputBufferMutex.Lock();
  for (AudioInputBuffer* buffer : m_InputBuffers) {
    if (buffer == nullptr) {
      continue;
    }

    if (buffer->m_pConfigurationData != nullptr) {
      Delete(buffer->m_pConfigurationData, m_pAllocatorInfo);
      buffer->m_pConfigurationData = nullptr;
    }

    buffer->Finalize();
    Delete(buffer, m_pAllocatorInfo);
  }

  m_InputBuffers.clear();
  m_InputBufferMutex.Unlock();
}

MovieResult AudioDecoderImpl::AllocateOutputBuffers() {
  m_OutputBufferMutex.Lock();
  while (m_OutputBuffers.size() < BufferCount) {
    AudioFrame* frame = Make<AudioFrame>(m_pAllocatorInfo);
    if (frame == nullptr) {
      m_OutputBufferMutex.Unlock();
      DeallocateOutputBuffers();
      return MovieResult_OutOfMemory;
    }

    nn::movie::Buffer* buffer = Make<nn::movie::Buffer>(m_pAllocatorInfo);
    if (buffer == nullptr) {
      m_OutputBufferMutex.Unlock();
      DeallocateOutputBuffers();
      return MovieResult_OutOfMemory;
    }

    MovieResult result = frame->SetBuffer(buffer);
    if (result != MovieResult_EndOfStream && result != MovieResult_Success) {
      m_OutputBufferMutex.Unlock();
      return result;
    }

    m_OutputBuffers.push_back(frame);
  }

  m_OutputBufferMutex.Unlock();
  return MovieResult_Success;
}

void AudioDecoderImpl::DeallocateOutputBuffers() {
  m_OutputBufferMutex.Lock();
  for (AudioFrame* frame : m_OutputBuffers) {
    if (frame == nullptr) {
      continue;
    }

    nn::movie::Buffer* buffer = nullptr;
    void* data = nullptr;
    size_t capacity = 0;
    size_t filledSize = 0;
    frame->GetBuffer(&buffer);
    if (buffer != nullptr) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetBuffer(&data, &capacity,
        &filledSize));
      if (buffer != nullptr) {
        Delete(buffer, m_pAllocatorInfo);
        buffer = nullptr;
      }
    }

    if (data != nullptr) {
      FreeMemory(data, m_pAllocatorInfo);
      data = nullptr;
    }

    Delete(frame, m_pAllocatorInfo);
  }

  m_OutputBuffers.clear();
  m_OutputBufferMutex.Unlock();
}

void AudioDecoderImpl::DeconfigureInputBuffers() {
  m_InputBufferMutex.Lock();
  for (AudioInputBuffer* buffer : m_InputBuffers) {
    if (buffer != nullptr) {
      buffer->Finalize();
    }
  }

  m_InputBufferMutex.Unlock();
}

void AudioDecoderImpl::DeconfigureOutputBuffers() {
  m_OutputBufferMutex.Lock();
  for (AudioFrame* frame : m_OutputBuffers) {
    if (frame == nullptr) {
      continue;
    }

    nn::movie::Buffer* buffer = nullptr;
    void* data = nullptr;
    size_t capacity = 0;
    size_t filledSize = 0;
    frame->GetBuffer(&buffer);
    if (buffer != nullptr) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetBuffer(&data, &capacity,
        &filledSize));
      if (data != nullptr) {
        FreeMemory(data, m_pAllocatorInfo);
      }
    }
  }

  m_OutputBufferMutex.Unlock();
}

MovieResult AudioDecoderImpl::ConfigureInputBuffers() {
  MovieResult result = MovieResult_Success;
  m_InputBufferMutex.Lock();
  for (AudioInputBuffer* buffer : m_InputBuffers) {
    result = buffer->Initialize(m_pAllocatorInfo, m_InputBufferSize);
    if (result != MovieResult_Success) {
      break;
    }
  }

  m_InputBufferMutex.Unlock();
  return result;
}

MovieResult AudioDecoderImpl::ConfigureOutputBuffers() {
  MovieResult result = MovieResult_Success;
  m_OutputBufferMutex.Lock();
  for (AudioFrame* frame : m_OutputBuffers) {
    nn::movie::Buffer* buffer = nullptr;
    result = frame->GetBuffer(&buffer);
    if (!IsSucceeded(result)) {
      break;
    }

    void* data = nn::movie::detail::AllocateMemory(m_OutputBufferSize,
      m_pAllocatorInfo);
    if (data == nullptr) {
      result = MovieResult_OutOfMemory;
      break;
    }

    if (ConvertNnMovieToMovieResult(buffer->SetBuffer(data,
      m_OutputBufferSize, 0)) != MovieResult_Success) {
      FreeMemory(data, m_pAllocatorInfo);
      result = ResultSetBufferFailed;
      break;
    }

    result = MovieResult_Success;
  }

  m_OutputBufferMutex.Unlock();
  return result;
}

MovieResult AudioDecoderImpl::AllocateWorkerBuffer() {
  if (m_pWorkerBuffer != nullptr) {
    FreeMemory(m_pWorkerBuffer, m_pAllocatorInfo);
    m_pWorkerBuffer = nullptr;
  }

  m_pWorkerBuffer = nn::movie::detail::AllocateMemory(m_WorkerBufferSize,
    m_pAllocatorInfo);
  return m_pWorkerBuffer != nullptr ? MovieResult_Success :
    MovieResult_OutOfMemory;
}

MovieResult AudioInputBuffer::Initialize(AllocatorInfo* allocatorInfo,
  size_t size) {
  m_pAllocatorInfo = allocatorInfo;
  if (m_pData != nullptr) {
    FreeMemory(m_pData, m_pAllocatorInfo);
  }

  m_pData = nn::movie::detail::AllocateMemory(size, m_pAllocatorInfo);
  if (m_pData == nullptr) {
    return MovieResult_OutOfMemory;
  }

  m_Capacity = size;
  m_FilledSize = 0;
  return MovieResult_Success;
}

void AudioInputBuffer::Finalize() {
  if (m_pData != nullptr) {
    FreeMemory(m_pData, m_pAllocatorInfo);
    m_Capacity = 0;
    m_FilledSize = 0;
    m_pAllocatorInfo = nullptr;
    m_pData = nullptr;
  }
}

MovieResult AudioDecoderImpl::AcquireAvailableInputBufferIndex(int* pOutIndex,
  int* pOutRemaining) {
  *pOutIndex = -1;
  *pOutRemaining = 0;
  m_AvailableInputBufferIndexMutex.Lock();
  int count = m_AvailableInputBufferIndexList.size();
  if (count < 1) {
    m_AvailableInputBufferIndexMutex.Unlock();
    return ResultNoBufferAvailable;
  }

  *pOutIndex = m_AvailableInputBufferIndexList.front();
  *pOutRemaining = count - 1;
  m_AvailableInputBufferIndexList.pop_front();
  m_AvailableInputBufferIndexMutex.Unlock();
  return MovieResult_Success;
}

void AudioDecoderImpl::AddBuffertoInputBufferList(int index) {
  m_InputBufferIndexMutex.Lock();
  m_InputBufferIndexList.push_back(index);
  m_InputBufferIndexMutex.Unlock();
}

MovieResult AudioDecoderImpl::AcquireDecodeInputBufferIndex(int* pOutIndex) {
  *pOutIndex = -1;
  m_DecodeInputBufferIndexMutex.Lock();
  if (static_cast<int>(m_DecodeInputBufferIndexList.size()) < 1) {
    m_DecodeInputBufferIndexMutex.Unlock();
    return ResultNoBufferAvailable;
  }

  *pOutIndex = m_DecodeInputBufferIndexList.front();
  m_DecodeInputBufferIndexList.pop_front();
  m_DecodeInputBufferIndexMutex.Unlock();
  return MovieResult_Success;
}

void AudioInputBuffer::Clear() {
  if (m_pData != nullptr) {
    std::memset(m_pData, 0, m_Capacity);
    m_PresentationTimeUs = 0;
  }
}

MovieResult AudioInputBuffer::SetData(const void* data, size_t size,
  int64_t presentationTimeUs, bool isEndOfStream) {
  if (m_pData == nullptr) {
    return ResultNoInputMemory;
  }

  if (size > m_Capacity) {
    return ResultInputTooLarge;
  }

  std::memcpy(m_pData, data, size);
  m_FilledSize = size;
  m_PresentationTimeUs = presentationTimeUs;
  m_IsEndOfStream = isEndOfStream;
  return MovieResult_Success;
}

AudioInputBuffer::AudioInputBuffer()
  : m_pAllocatorInfo(nullptr), m_pData(nullptr), m_Capacity(0),
    m_FilledSize(0), m_PresentationTimeUs(0), m_IsEndOfStream(false),
    m_pConfigurationData(nullptr) {
}

AudioInputBuffer::~AudioInputBuffer() {
  Finalize();
}

}
