// The public decoders construct and destroy their allocator.
#define NN_MEM_STANDARD_ALLOCATOR_LIFETIME

#include <algorithm>
#include <new>
#include <vector>

#include "movie/detail/movie_audio_decoder_impl.hpp"
#include "movie/detail/movie_utils.hpp"
#include "movie/movie_audio_decoder.hpp"
#include "movie/movie_audio_frame.hpp"
#include "nn/movie/detail/movie_heap_memory_manager.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_buffer.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/util/sdk_version.hpp"

namespace nn::movie {

Result IsInitialized();

}

namespace movie {

namespace detail {

using nn::movie::detail::AllocateMemory;
using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::AllocatorType_StandardAllocator;
using nn::movie::detail::FreeMemory;
using nn::movie::detail::HeapMemoryManager;
using nn::movie::detail::ThreadManager;

struct AudioDecoderHolder {
  AudioDecoderImpl* pImpl;
  std::vector<AudioFrame*> availableFrames;
  std::vector<AudioFrame*> registeredFrames;
  nn::os::SdkMutexType mutex;
  AllocatorInfo allocatorInfo;
};

}

namespace {

constexpr size_t FrameCountReserved = 16;

inline MovieResult FoldEndOfStream(MovieResult result) {
  return result == MovieResult_EndOfStream ? MovieResult_Success : result;
}

inline bool IsReady(detail::AudioDecoderHolder* holder) {
  return holder != nullptr && holder->pImpl != nullptr;
}

inline void UpdateRegisteredFrameCount(detail::AudioDecoderHolder* holder,
  detail::AudioDecoderImpl* impl) {
  impl->m_RegisteredAudioFrameCount = holder->registeredFrames.size();
}

}

AudioDecoder::AudioDecoder() {
  m_pHolder = nullptr;
}

AudioDecoder::~AudioDecoder() {
  Finalize();
  m_pHolder = nullptr;
}

void AudioDecoder::Finalize() {
  detail::ThreadManager::GetInstance()->_RemoveThreadConfigurationByInstance(
    this);

  detail::AudioDecoderHolder* holder = m_pHolder;
  if (holder == nullptr) {
    return;
  }

  detail::AllocatorInfo allocatorInfo = holder->allocatorInfo;
  if (holder->pImpl != nullptr) {
    holder->pImpl->Finalize();
    if (holder->pImpl != nullptr) {
      holder->pImpl->~AudioDecoderImpl();
      detail::FreeMemory(holder->pImpl, &allocatorInfo);
      holder->pImpl = nullptr;
    }
  }

  for (auto it = holder->registeredFrames.begin();
    it != holder->registeredFrames.end(); ++it) {
    if (*it != nullptr) {
      detail::FreeMemory(*it, &allocatorInfo);
    }
  }

  holder->registeredFrames.clear();
  holder->registeredFrames.~vector();
  holder->availableFrames.~vector();
  detail::FreeMemory(holder, &allocatorInfo);
  m_pHolder = nullptr;
  if (allocatorInfo.type == detail::AllocatorType_StandardAllocator) {
    nn::mem::StandardAllocator* allocator = allocatorInfo.allocator;
    if (allocator != nullptr) {
      if (allocatorInfo.CalculateLeakedMemory() != 0) {
        allocator->Dump();
      }

      allocator->Finalize();
    }
  }
}

MovieResult AudioDecoder::Initialize(void* memory, size_t memorySize,
  nn::movie::MediaMimeType mimeType, AudioDecoderOutputFormat outputFormat,
  AudioCodecMode codecMode) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::movie::IsInitialized());
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_movie-22_2_0-Release");

  bool isAllocatorInitialized = false;
  if (memory == nullptr) {
    detail::HeapMemoryManager::GetInstance().GetCurrentHeap();
  }
  else {
    if (memorySize == 0) {
      return MovieResult_InvalidArgument;
    }

    if ((reinterpret_cast<uintptr_t>(memory) & 0xfff) != 0) {
      return MovieResult_InvalidAlignment;
    }

    if (m_pHolder == nullptr) {
      m_Allocator.Initialize(memory, memorySize);
      isAllocatorInitialized = true;
    }
  }

  detail::AudioDecoderHolder* holder = m_pHolder;
  detail::AllocatorInfo allocatorInfo = {};
  allocatorInfo.reserved = 1;
  if (holder != nullptr && holder->pImpl != nullptr &&
    !holder->pImpl->m_IsReinitializable) {
    return MovieResult_AlreadyInitialized;
  }

  if (memory != nullptr) {
    allocatorInfo.type = detail::AllocatorType_StandardAllocator;
    allocatorInfo.allocator = &m_Allocator;
    allocatorInfo.size = m_Allocator.GetTotalFreeSize();
  }
  else {
    allocatorInfo = *reinterpret_cast<detail::AllocatorInfo*>(
      detail::HeapMemoryManager::GetInstance().GetCurrentHeap());
  }

  if (holder == nullptr) {
    void* storage = detail::AllocateMemory(sizeof(detail::AudioDecoderHolder),
      &allocatorInfo);
    if (storage == nullptr) {
      if (isAllocatorInitialized) {
        m_Allocator.Finalize();
      }

      return MovieResult_OutOfMemory;
    }

    holder = new (storage) detail::AudioDecoderHolder();
    holder->allocatorInfo = allocatorInfo;
    m_pHolder = holder;
  }

  if (holder->pImpl == nullptr) {
    void* storage = detail::AllocateMemory(sizeof(detail::AudioDecoderImpl),
      &holder->allocatorInfo);
    if (storage == nullptr) {
      holder->pImpl = nullptr;
      return MovieResult_OutOfMemory;
    }

    holder->pImpl = new (storage) detail::AudioDecoderImpl(
      &holder->allocatorInfo);
  }

  MovieResult result = holder->pImpl->Initialize(mimeType, outputFormat,
    codecMode, this);
  if (!IsSucceeded(result)) {
    return result;
  }

  holder->availableFrames.reserve(FrameCountReserved);
  holder->registeredFrames.reserve(FrameCountReserved);
  holder->registeredFrames.clear();
  holder->availableFrames.clear();
  return MovieResult_Success;
}

MovieResult AudioDecoder::Configure(const nn::movie::MediaProperty* property,
  const void* configuration, size_t size) {
  if (!IsReady(m_pHolder)) {
    return MovieResult_NotInitialized;
  }

  return FoldEndOfStream(m_pHolder->pImpl->Configure(property,
    static_cast<const char*>(configuration), size));
}

MovieResult AudioDecoder::GetAudioFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  if (!IsReady(m_pHolder)) {
    return MovieResult_NotInitialized;
  }

  return FoldEndOfStream(m_pHolder->pImpl->GetAudioFrameRequirements(pOut));
}

#define MOVIE_AUDIO_DECODER_GET_EVENT(name, implName) \
  MovieResult AudioDecoder::name(nn::os::SystemEventType** pOutEvent) { \
    if (!IsReady(m_pHolder)) { \
      return MovieResult_NotInitialized; \
    } \
    nn::os::SystemEventType* event = nullptr; \
    MovieResult result = m_pHolder->pImpl->implName(&event); \
    if (!IsSucceeded(result)) { \
      return result; \
    } \
    *pOutEvent = event; \
    return MovieResult_Success; \
  }

MOVIE_AUDIO_DECODER_GET_EVENT(GetInputReadyEvent, GetInputBufferEvent)
MOVIE_AUDIO_DECODER_GET_EVENT(GetOutputReadyEvent, GetAudioFrameReadyEvent)
MOVIE_AUDIO_DECODER_GET_EVENT(GetFormatChangedEvent,
  GetAudioFrameFormatChangedEvent)

#undef MOVIE_AUDIO_DECODER_GET_EVENT

MovieResult AudioDecoder::Start() {
  if (!IsReady(m_pHolder)) {
    return MovieResult_NotInitialized;
  }

  UpdateRegisteredFrameCount(m_pHolder, m_pHolder->pImpl);
  return FoldEndOfStream(m_pHolder->pImpl->Start());
}

MovieResult AudioDecoder::Stop() {
  if (!IsReady(m_pHolder)) {
    return MovieResult_NotInitialized;
  }

  return FoldEndOfStream(m_pHolder->pImpl->Stop());
}

MovieResult AudioDecoder::Flush() {
  detail::AudioDecoderHolder* holder = m_pHolder;
  if (!IsReady(holder)) {
    return MovieResult_NotInitialized;
  }

  detail::AudioDecoderImpl* impl = holder->pImpl;
  MovieResult result = impl->Flush();
  if (!IsSucceeded(result)) {
    return result;
  }

  UpdateRegisteredFrameCount(holder, impl);
  holder->mutex.Lock();
  holder->availableFrames.clear();
  for (AudioFrame* frame : holder->registeredFrames) {
    holder->availableFrames.push_back(frame);
  }

  holder->mutex.Unlock();
  return MovieResult_Success;
}

MovieResult AudioDecoder::DecodeAsync(const nn::movie::Buffer* buffer) {
  if (!IsReady(m_pHolder)) {
    return MovieResult_NotInitialized;
  }

  detail::AudioDecoderImpl* impl = m_pHolder->pImpl;
  size_t capacity = 0;
  MovieResult result = detail::ConvertNnMovieToMovieResult(
    buffer->GetBufferCapacity(&capacity));
  if (!IsSucceeded(result)) {
    return result;
  }

  size_t filledSize = 0;
  result = detail::ConvertNnMovieToMovieResult(
    buffer->GetFilledBufferSize(&filledSize));
  if (!IsSucceeded(result)) {
    return result;
  }

  void* data = nullptr;
  size_t bufferCapacity = 0;
  size_t bufferFilledSize = 0;
  result = detail::ConvertNnMovieToMovieResult(
    buffer->GetBuffer(&data, &bufferCapacity, &bufferFilledSize));
  if (!IsSucceeded(result)) {
    return result;
  }

  nn::TimeSpan timeStamp = {};
  result = detail::ConvertNnMovieToMovieResult(
    buffer->GetTimeStamp(&timeStamp));
  if (!IsSucceeded(result)) {
    return result;
  }

  nn::movie::BufferFlags flags = nn::movie::BufferFlags_None;
  result = detail::ConvertNnMovieToMovieResult(
    buffer->GetBufferFlags(&flags));
  if (!IsSucceeded(result)) {
    return result;
  }

  // Flag 8 marks the end of the stream, as does an empty buffer.
  bool isEndOfStream = flags == 8 || filledSize == 0;
  result = impl->Decode(data, capacity, filledSize,
    timeStamp.nanoseconds / 1000, isEndOfStream);
  if (!IsSucceeded(result)) {
    return result;
  }

  return MovieResult_Success;
}

MovieResult AudioDecoder::RegisterAudioFrame(AudioFrame** frames,
  int count) {
  detail::AudioDecoderHolder* holder = m_pHolder;
  if (!IsReady(holder)) {
    return MovieResult_NotInitialized;
  }

  detail::AudioDecoderImpl* impl = holder->pImpl;
  holder->mutex.Lock();
  holder->availableFrames.clear();
  holder->mutex.Unlock();

  for (int i = 0; i < count; i++) {
    AudioFrame* frame = frames[i];
    if (frame == nullptr) {
      return MovieResult_NotInitialized;
    }

    void* storage = detail::AllocateMemory(sizeof(AudioFrame),
      &holder->allocatorInfo);
    if (storage == nullptr) {
      return MovieResult_OutOfMemory;
    }

    AudioFrame* copy = new (storage) AudioFrame();
    *copy = *frame;
    holder->mutex.Lock();
    holder->availableFrames.push_back(copy);
    holder->registeredFrames.push_back(copy);
    holder->mutex.Unlock();
  }

  UpdateRegisteredFrameCount(holder, impl);
  return MovieResult_Success;
}

MovieResult AudioDecoder::AcquireAudioFrame(AudioFrame** pOutFrame,
  int* pOutCount) {
  detail::AudioDecoderHolder* holder = m_pHolder;
  if (!IsReady(holder)) {
    return MovieResult_NotInitialized;
  }

  detail::AudioDecoderImpl* impl = holder->pImpl;
  *pOutCount = 0;
  int remaining = 0;
  holder->mutex.Lock();
  if (holder->availableFrames.empty()) {
    holder->mutex.Unlock();
    return MovieResult_NotAvailable;
  }

  AudioFrame* frame = holder->availableFrames.front();
  size_t availableCount = holder->availableFrames.size();
  holder->mutex.Unlock();
  if (frame == nullptr) {
    return MovieResult_NotAvailable;
  }

  MovieResult result = impl->GetAudioFrame(frame, &remaining);
  if (result == MovieResult_NotAvailable) {
    return result;
  }

  *pOutCount = std::min(static_cast<int>(availableCount) - 1, remaining);
  *pOutFrame = frame;
  holder->mutex.Lock();
  holder->availableFrames.erase(holder->availableFrames.begin());
  holder->mutex.Unlock();
  return FoldEndOfStream(result);
}

MovieResult AudioDecoder::ReleaseAudioFrame(AudioFrame* frame) {
  detail::AudioDecoderHolder* holder = m_pHolder;
  if (!IsReady(holder)) {
    return MovieResult_NotInitialized;
  }

  detail::AudioDecoderImpl* impl = holder->pImpl;
  MovieResult result = MovieResult_Success;
  holder->mutex.Lock();
  for (AudioFrame* registered : holder->registeredFrames) {
    if (registered == nullptr) {
      result = MovieResult_Unknown;
      break;
    }

    if (registered != frame) {
      continue;
    }

    bool isAvailable = false;
    for (AudioFrame* available : holder->availableFrames) {
      if (available == nullptr) {
        result = MovieResult_Unknown;
        break;
      }

      if (available == frame) {
        isAvailable = true;
        break;
      }
    }

    if (result == MovieResult_Success && !isAvailable) {
      holder->availableFrames.push_back(frame);
      result = impl->ReleaseAudioFrame();
      if (IsSucceeded(result)) {
        result = MovieResult_Success;
      }
    }

    break;
  }

  holder->mutex.Unlock();
  return result;
}

MovieResult AudioDecoder::GetOutputFrameProperties(
  nn::movie::MediaProperty* pOut) {
  if (!IsReady(m_pHolder)) {
    return MovieResult_NotInitialized;
  }

  return FoldEndOfStream(m_pHolder->pImpl->GetAudioFrameProperties(pOut));
}

void AudioDecoder::SetThreadCoreMask(uint64_t coreMask) {
  detail::ThreadManager::GetInstance()->_SetThreadCoreMaskByInstance(this,
    coreMask);
}

uint64_t AudioDecoder::GetThreadCoreMask() {
  return detail::ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(
    this);
}

MovieResult AudioDecoder::SetThreadPriority(int priority) {
  if (static_cast<uint32_t>(priority) > 31) {
    return MovieResult_InvalidArgument;
  }

  detail::ThreadManager::GetInstance()->_SetThreadPriorityByInstance(this,
    priority);
  return MovieResult_Success;
}

int AudioDecoder::GetThreadPriority() {
  return detail::ThreadManager::GetInstance()->_GetThreadPriorityByInstance(
    this);
}

}
