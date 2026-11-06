// The public decoders construct and destroy their allocator.
#define NN_MEM_STANDARD_ALLOCATOR_LIFETIME

#include <new>

#include "movie/detail/movie_media_decoder_impl.hpp"
#include "movie/movie_media_decoder.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"

namespace nn::movie {

Result IsInitialized();

}

namespace movie {

namespace detail {

using nn::movie::detail::AllocateMemory;
using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::AllocatorType_StandardAllocator;
using nn::movie::detail::FreeMemory;
using nn::movie::detail::ThreadManager;

struct MediaDecoderHolder {
  MediaDecoderImpl* pImpl;
  void* reserved;
  AllocatorInfo allocatorInfo;
};

}

namespace {

constexpr size_t ManagementMemorySize = 0x100000;

inline MovieResult FoldEndOfStream(MovieResult result) {
  return result == MovieResult_EndOfStream ? MovieResult_Success : result;
}

}

MediaDecoder::MediaDecoder() {
  m_pHolder = nullptr;
}

MediaDecoder::~MediaDecoder() {
  Finalize();
  m_pHolder = nullptr;
}

void MediaDecoder::Finalize() {
  detail::ThreadManager::GetInstance()->_RemoveThreadConfigurationByInstance(
    this);

  detail::MediaDecoderHolder* holder = m_pHolder;
  if (holder == nullptr) {
    return;
  }

  detail::AllocatorInfo allocatorInfo = holder->allocatorInfo;
  if (holder->pImpl != nullptr) {
    holder->pImpl->Finalize();
    if (holder->pImpl != nullptr) {
      holder->pImpl->~MediaDecoderImpl();
      detail::FreeMemory(holder->pImpl, &allocatorInfo);
    }

    holder->pImpl = nullptr;
  }

  detail::FreeMemory(holder, &allocatorInfo);
  m_pHolder = nullptr;
  if (allocatorInfo.type == detail::AllocatorType_StandardAllocator) {
    nn::mem::StandardAllocator* allocator = allocatorInfo.allocator;
    if (allocatorInfo.CalculateLeakedMemory() != 0) {
      allocator->Dump();
    }

    allocator->Finalize();
  }
}

MovieResult MediaDecoder::Initialize(void* memory, size_t memorySize,
  size_t cacheSize, AudioDecoderOutputFormat audioFormat,
  AudioCodecMode audioMode, VideoDecoderOutputFormat videoFormat,
  VideoCodecMode videoMode) {
  if (memorySize == 0) {
    return MovieResult_InvalidArgument;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::movie::IsInitialized());
  if (m_pHolder != nullptr) {
    return MovieResult_AlreadyInitialized;
  }

  if ((reinterpret_cast<uintptr_t>(memory) & 0xfff) != 0) {
    return MovieResult_InvalidAlignment;
  }

  if (memorySize < ManagementMemorySize) {
    return MovieResult_OutOfMemory;
  }

  m_Allocator.Initialize(memory, ManagementMemorySize);
  detail::AllocatorInfo allocatorInfo = {};
  allocatorInfo.allocator = &m_Allocator;
  allocatorInfo.type = detail::AllocatorType_StandardAllocator;
  allocatorInfo.size = m_Allocator.GetTotalFreeSize();
  allocatorInfo.reserved = 1;

  auto* holder = static_cast<detail::MediaDecoderHolder*>(
    detail::AllocateMemory(sizeof(detail::MediaDecoderHolder),
      &allocatorInfo));
  if (holder == nullptr) {
    m_pHolder = nullptr;
    return MovieResult_OutOfMemory;
  }

  holder->pImpl = nullptr;
  holder->reserved = nullptr;
  m_pHolder = holder;
  holder->allocatorInfo = allocatorInfo;

  void* storage = detail::AllocateMemory(sizeof(detail::MediaDecoderImpl),
    &allocatorInfo);
  if (storage == nullptr) {
    holder->pImpl = nullptr;
    return MovieResult_OutOfMemory;
  }

  holder->pImpl = new (storage) detail::MediaDecoderImpl();
  return FoldEndOfStream(holder->pImpl->Initialize(&holder->allocatorInfo,
    static_cast<uint8_t*>(memory) + ManagementMemorySize,
    memorySize - ManagementMemorySize, cacheSize, audioFormat, audioMode,
    videoFormat, videoMode, this));
}

#define MOVIE_MEDIA_DECODER_FORWARD(call) \
  if (m_pHolder == nullptr) { \
    return MovieResult_OutOfMemory; \
  } \
  if (m_pHolder->pImpl == nullptr) { \
    return MovieResult_NotInitialized; \
  } \
  return FoldEndOfStream(m_pHolder->pImpl->call)

MovieResult MediaDecoder::SetUriMedia(const char* uri, int length) {
  if (length < 1) {
    return MovieResult_InvalidArgument;
  }

  MOVIE_MEDIA_DECODER_FORWARD(SetUriMedia(uri, length));
}

MovieResult MediaDecoder::SetInMemoryMedia(const void* data, size_t size) {
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  MOVIE_MEDIA_DECODER_FORWARD(SetInMemoryMedia(data, size));
}

MovieResult MediaDecoder::GetTrackCount(int* pOutCount) {
  MOVIE_MEDIA_DECODER_FORWARD(GetTrackCount(pOutCount));
}

MovieResult MediaDecoder::SelectTrack(int index) {
  MOVIE_MEDIA_DECODER_FORWARD(SelectTrack(index));
}

MovieResult MediaDecoder::DeselectTrack(int index) {
  MOVIE_MEDIA_DECODER_FORWARD(DeselectTrack(index));
}

MovieResult MediaDecoder::GetTrackProperties(
  nn::movie::MediaProperty* pOutProperty, int index) {
  MOVIE_MEDIA_DECODER_FORWARD(GetTrackProperties(pOutProperty, index));
}

MovieResult MediaDecoder::SeekTo(nn::TimeSpan time,
  nn::movie::SeekMode mode) {
  MOVIE_MEDIA_DECODER_FORWARD(SeekTo(time, mode));
}

// The event is never handed out.
MovieResult MediaDecoder::GetSeekCompletedEvent(
  nn::os::SystemEventType** pOutEvent) {
  if (m_pHolder == nullptr) {
    return MovieResult_OutOfMemory;
  }

  if (m_pHolder->pImpl == nullptr) {
    return MovieResult_NotInitialized;
  }

  return MovieResult_Success;
}

MovieResult MediaDecoder::GetCacheRangeCount(int* pOutCount) {
  MOVIE_MEDIA_DECODER_FORWARD(GetCacheRanges(pOutCount));
}

MovieResult MediaDecoder::GetCacheRange(nn::TimeSpan* pOutStart,
  nn::TimeSpan* pOutEnd, int index) {
  MOVIE_MEDIA_DECODER_FORWARD(GetCacheRange(pOutStart, pOutEnd, index));
}

MovieResult MediaDecoder::GetAudioOutputReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  MOVIE_MEDIA_DECODER_FORWARD(GetAudioFrameReadyEvent(pOutEvent));
}

MovieResult MediaDecoder::GetAudioFormatChangedEvent(
  nn::os::SystemEventType** pOutEvent) {
  MOVIE_MEDIA_DECODER_FORWARD(GetAudioFrameFormatChangedEvent(pOutEvent));
}

MovieResult MediaDecoder::GetAudioFrameProperties(
  nn::movie::MediaProperty* pOut) {
  MOVIE_MEDIA_DECODER_FORWARD(GetAudioFrameProperties(pOut));
}

MovieResult MediaDecoder::GetAudioFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  MOVIE_MEDIA_DECODER_FORWARD(GetAudioFrameRequirements(pOut));
}

MovieResult MediaDecoder::RegisterAudioFrame(AudioFrame** frames,
  int count) {
  MOVIE_MEDIA_DECODER_FORWARD(RegisterAudioFrame(frames, count));
}

MovieResult MediaDecoder::AcquireAudioFrame(AudioFrame** pOutFrame,
  int* pOutCount) {
  MOVIE_MEDIA_DECODER_FORWARD(AcquireAudioFrame(pOutFrame, pOutCount));
}

MovieResult MediaDecoder::ReleaseAudioFrame(AudioFrame* frame) {
  MOVIE_MEDIA_DECODER_FORWARD(ReleaseAudioFrame(frame));
}

MovieResult MediaDecoder::GetVideoOutputReadyEvent(
  nn::os::SystemEventType** pOutEvent) {
  MOVIE_MEDIA_DECODER_FORWARD(GetVideoFrameReadyEvent(pOutEvent));
}

MovieResult MediaDecoder::GetVideoFormatChangedEvent(
  nn::os::SystemEventType** pOutEvent) {
  MOVIE_MEDIA_DECODER_FORWARD(GetVideoFrameFormatChangedEvent(pOutEvent));
}

MovieResult MediaDecoder::GetVideoFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  MOVIE_MEDIA_DECODER_FORWARD(GetVideoFrameRequirements(pOut));
}

MovieResult MediaDecoder::GetVideoFrameProperties(
  nn::movie::MediaProperty* pOut) {
  MOVIE_MEDIA_DECODER_FORWARD(GetVideoFrameProperties(pOut));
}

MovieResult MediaDecoder::RegisterVideoFrame(VideoFrame** frames,
  int count) {
  MOVIE_MEDIA_DECODER_FORWARD(RegisterVideoFrame(frames, count));
}

MovieResult MediaDecoder::AcquireVideoFrame(VideoFrame** pOutFrame,
  int* pOutCount) {
  MOVIE_MEDIA_DECODER_FORWARD(AcquireVideoFrame(pOutFrame, pOutCount));
}

MovieResult MediaDecoder::AcquireVideoFrame(VideoFrame** pOutFrame) {
  int count = 0;
  MOVIE_MEDIA_DECODER_FORWARD(AcquireVideoFrame(pOutFrame, &count));
}

MovieResult MediaDecoder::ReleaseVideoFrame(VideoFrame* frame) {
  MOVIE_MEDIA_DECODER_FORWARD(ReleaseVideoFrame(frame));
}

MovieResult MediaDecoder::Start() {
  MOVIE_MEDIA_DECODER_FORWARD(Start());
}

MovieResult MediaDecoder::Stop() {
  MOVIE_MEDIA_DECODER_FORWARD(Stop());
}

#undef MOVIE_MEDIA_DECODER_FORWARD

void MediaDecoder::SetThreadCoreMask(uint64_t coreMask) {
  detail::ThreadManager::GetInstance()->_SetThreadCoreMaskByInstance(this,
    coreMask);
}

uint64_t MediaDecoder::GetThreadCoreMask() {
  return detail::ThreadManager::GetInstance()->_GetThreadCoreMaskByInstance(
    this);
}

MovieResult MediaDecoder::SetThreadPriority(int priority) {
  if (static_cast<uint32_t>(priority) > 31) {
    return MovieResult_InvalidArgument;
  }

  detail::ThreadManager::GetInstance()->_SetThreadPriorityByInstance(this,
    priority);
  return MovieResult_Success;
}

int MediaDecoder::GetThreadPriority() {
  return detail::ThreadManager::GetInstance()->_GetThreadPriorityByInstance(
    this);
}

}
