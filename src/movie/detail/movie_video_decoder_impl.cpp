#include <string.h>

#include "movie/detail/movie_video_decoder_impl.hpp"
#include "nn/movie/detail/movie_thread_manager.hpp"
#include "nn/movie/movie_buffer.hpp"
#include "nn/movie/movie_media_property.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/thread_api.hpp"

namespace nv {

void InitCheck();

}

namespace nn::codec::video {

void Initialize();
void Finalize();

}

namespace nn::gs {

bool TryWaitNativeSync(const NativeSyncHandle& sync);

}

namespace nn::os {

void WaitThread(ThreadType* thread);

}

namespace movie::detail {

nn::codec::VideoDecoderOutputFormat
  MovieVideoDecoderOutputFormatToNnCodecVideoOutputFormat(
    VideoDecoderOutputFormat format);
nn::codec::ImageTilingMode MovieVideoCodecModeToNnCodecImageTilingMode(
  VideoCodecMode mode);
int GetVideoMinCompressionRatio(nn::movie::MediaMimeType mimeType,
  int level);

namespace {

using nn::movie::detail::ThreadInfo;
using nn::movie::detail::ThreadManager;

constexpr auto ComponentType_VideoDecoder =
  static_cast<ThreadInfo::ComponentType>(6);
constexpr size_t InputBufferSizeMax = 0xbdd800;
// The first part of the decoder memory is the stack of the event thread.
constexpr size_t EventThreadStackSize = 0x4000;
constexpr MovieResult ResultInvalidParameter = static_cast<MovieResult>(9);
// Flag 8 marks the end of the stream, as does an empty buffer.
constexpr int BufferFlags_EndOfStream = 8;

struct EventThreadArgument {
  VideoDecoderImpl* impl;
  nn::os::LightEventType* startedEvent;
};

void EventThreadFunction(void* argument) {
  EventThreadArgument* thread = static_cast<EventThreadArgument*>(argument);
  VideoDecoderImpl* impl = thread->impl;
  nn::os::SignalLightEvent(thread->startedEvent);
  impl->m_EventManager.Loop();
}

// Moves the node out of its list and links it to itself.
inline void Unlink(VideoDecoderImpl::ListNode* node) {
  VideoDecoderImpl::ListNode* next = node->next;
  VideoDecoderImpl::ListNode* last = next->prev;
  node->prev->next = next;
  next->prev = node->prev;
  last->next = node;
  node->prev = last;
}

}

MovieResult VideoDecoderImpl::Initialize(void* memory, size_t memorySize,
  VideoDecoderType type, VideoDecoderOutputFormat outputFormat,
  VideoCodecMode codecMode) {
  nv::InitCheck();
  NN_ABORT_UNLESS(static_cast<uint32_t>(type) <= VideoDecoderType_Vp8 &&
    type != VideoDecoderType_Reserved2);
  nn::codec::video::Initialize();
  m_Mutex.Lock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::os::CreateSystemEvent(
    &m_OutputReadyEvent, nn::os::EventClearMode_AutoClear, false));
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::os::CreateSystemEvent(
    &m_FormatChangedEvent, nn::os::EventClearMode_AutoClear, false));
  m_EventManager.Initialize();
  m_EventManager.RegisterImpl(VideoDecoderEventManager::Callback(
    [this]() {
      HandleSyncPoint();
    }));
  memset(m_Decoder.storage, 0, sizeof(m_Decoder.storage));
  m_Decoder.type = type;
  m_Decoder.reserved = 0;
  m_pMemory = memory;
  m_MemorySize = memorySize;
  m_OutputFormat =
    MovieVideoDecoderOutputFormatToNnCodecVideoOutputFormat(outputFormat);
  m_TilingMode = MovieVideoCodecModeToNnCodecImageTilingMode(codecMode);
  m_State = State_Initialized;
  m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoderImpl::Configure(
  const nn::movie::MediaProperty* property, const void* configuration,
  size_t size) {
  int32_t value = 0;
  int32_t width = property->GetInt32(&value, "width") ? value : 0;
  value = 0;
  int32_t height = property->GetInt32(&value, "height") ? value : 0;
  value = 0;
  int32_t frameRate = property->GetInt32(&value, "frame-rate") ? value : 60;
  value = 0;
  int32_t maxWidth = property->GetInt32(&value, "max-width") ? value : width;
  value = 0;
  int32_t maxHeight =
    property->GetInt32(&value, "max-height") ? value : height;
  value = 0;
  int32_t colorStandard =
    property->GetInt32(&value, "color-standard") ? value : 0;
  value = 0;
  int32_t colorRange = property->GetInt32(&value, "color-range") ? value : 0;
  value = 0;
  int32_t colorTransfer =
    property->GetInt32(&value, "color-transfer") ? value : 0;
  value = 0;
  uint32_t frameCount =
    property->GetInt32(&value, "video-frame-count") ? value : 2;
  if (width < 1 || height < 1 || maxWidth < 1 || maxHeight < 1) {
    return ResultInvalidParameter;
  }

  NN_ABORT_UNLESS(frameCount <= FrameCountMax);
  uint32_t alignedMaxWidth = (maxWidth + 1) & ~1;
  int32_t alignedMaxHeight = (maxHeight + 1) & ~1;
  m_Mutex.Lock();
  int32_t outputFormat = static_cast<int32_t>(m_OutputFormat);
  bool isHighBitDepth = (outputFormat & ~1) == 4;
  // The color option of the decoder, from the color description.
  uint32_t option;
  if (static_cast<uint32_t>(colorStandard - 2) < 4) {
    option = 1;
    if (colorTransfer == 3 && colorRange == 1) {
      option++;
    }
  }
  else if (static_cast<uint32_t>(colorStandard - 6) < 2) {
    if (colorRange == 2 && colorTransfer == 3) {
      option = 7;
    }
    else {
      option = 5;
      if (colorTransfer == 6 && colorRange == 1) {
        option++;
      }
    }
  }
  else if (colorStandard == 1) {
    option = 3;
    if (colorTransfer == 3 && colorRange == 1) {
      option++;
    }
  }
  else if (isHighBitDepth) {
    option = 5;
  }
  else if (alignedMaxHeight < 1080 && static_cast<int32_t>(alignedMaxWidth)
    < 1920) {
    option = 1;
  }
  else {
    option = 3;
  }

  m_ColorRange = colorRange;
  m_ColorTransfer = colorTransfer;
  m_ColorStandard = colorStandard;
  if (isHighBitDepth && colorTransfer != 6) {
    m_Mutex.Unlock();
    return MovieResult_InvalidOperation;
  }

  if (static_cast<int32_t>(m_TilingMode) == 2) {
    m_ColorRange = 2;
    m_ColorTransfer = 3;
    switch (option) {
      case 1:
        m_ColorStandard = 4;
        break;
      case 2:
        m_ColorStandard = 4;
        m_ColorRange = 1;
        break;
      case 3:
        m_ColorStandard = 1;
        break;
      case 4:
        m_ColorStandard = 1;
        m_ColorRange = 1;
        break;
      case 5:
        m_ColorStandard = 6;
        m_ColorTransfer = 6;
        break;
      case 6:
        m_ColorStandard = 6;
        m_ColorRange = 1;
        m_ColorTransfer = 6;
        break;
      default:
        m_ColorStandard = 6;
        break;
    }
  }

  size_t inputBufferSize = CalculateInputBufferSize(property);
  if (m_MemorySize < EventThreadStackSize) {
    m_Mutex.Unlock();
    return MovieResult_OutOfMemory;
  }

  size_t remaining = m_MemorySize - EventThreadStackSize;
  uint32_t alignedHeight = (height + 1) & ~1;
  uint8_t* address = static_cast<uint8_t*>(m_pMemory) + EventThreadStackSize;
  uint32_t alignedWidth = (width + 1) & ~1;
  ThreadInfo* thread = CreateEventThread(m_pMemory, EventThreadStackSize);
  size_t bufferSize = 0;
  size_t alignment = 0;
  VideoDecoderBuffer::CalculateBufferRequirement(&bufferSize, &alignment,
    alignedWidth, alignedHeight, m_OutputFormat, m_TilingMode);
  for (; frameCount != 0; frameCount--) {
    uint8_t* aligned = reinterpret_cast<uint8_t*>(
      (reinterpret_cast<uintptr_t>(address) + alignment - 1) & -alignment);
    uint8_t* end = aligned + bufferSize;
    size_t used = end - address;
    NN_ABORT_UNLESS(remaining >= used);
    remaining -= used;
    m_FreeMemory.Push({aligned, bufferSize});
    address = end;
  }

  if (m_IsRemoteMemoryEnabled) {
    MovieResult result = InitializeDecoderByRemoteMemory(&m_Decoder,
      inputBufferSize, alignedMaxWidth, alignedMaxHeight, frameRate,
      static_cast<nn::codec::VideoDecoderInputFormat>(option),
      m_OutputFormat, configuration, size);
    if (!IsSucceeded(result)) {
      m_Mutex.Unlock();
      return result;
    }
  }
  else {
    InitializeDecoderByTransferMemory(&m_Decoder, address, remaining,
      inputBufferSize, alignedMaxWidth, alignedMaxHeight, frameRate,
      static_cast<nn::codec::VideoDecoderInputFormat>(option),
      m_OutputFormat, configuration, size);
  }

  m_pInputReadyEvent = GetDecoderSubmissionReadyEvent(&m_Decoder);
  m_Width = alignedWidth;
  m_Height = alignedHeight;
  m_InputBufferSize = inputBufferSize;
  m_pThread = thread;
  m_State = State_Configured;
  m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoderImpl::GetVideoFrameRequirements(
  nn::movie::MediaProperty* pOut) {
  m_Mutex.Lock();
  NN_ABORT_UNLESS(m_State == State_Configured || m_State == State_Started);
  pOut->Clear();
  pOut->SetInt32("width", m_Width);
  pOut->SetInt32("height", m_Height);
  pOut->SetInt32("color-standard", m_ColorStandard);
  pOut->SetInt32("color-range", m_ColorRange);
  pOut->SetInt32("color-transfer", m_ColorTransfer);
  pOut->SetSize("input-buf-size", m_InputBufferSize);
  pOut->SetSize("output-buf-size", 3 * m_Width * m_Height / 2);
  m_Mutex.Unlock();
  return MovieResult_Success;
}

MovieResult VideoDecoderImpl::DecodeAsync(const nn::movie::Buffer* buffer) {
  m_Mutex.Lock();
  nn::os::ClearSystemEvent(m_pInputReadyEvent);
  size_t filledSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetFilledBufferSize(&filledSize));
  size_t capacity = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetBufferCapacity(&capacity));
  nn::movie::BufferFlags flags = nn::movie::BufferFlags_None;
  NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetBufferFlags(&flags));
  NN_ABORT_UNLESS(filledSize <= capacity);
  NN_ABORT_UNLESS(capacity <= InputBufferSizeMax);
  void* data = nullptr;
  size_t bufferCapacity = 0;
  size_t bufferSize = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetBuffer(&data, &bufferCapacity,
    &bufferSize));
  nn::TimeSpan timeStamp = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(buffer->GetTimeStamp(&timeStamp));
  bool isEndOfStream = flags == BufferFlags_EndOfStream || filledSize == 0;
  uint64_t id = 0;
  MovieResult result = SubmitDecoderInputBuffer(&id, &m_Decoder, data,
    bufferSize, timeStamp, isEndOfStream);
  m_Mutex.Unlock();
  return result;
}

MovieResult VideoDecoderImpl::ReleaseVideoFrame(VideoFrame* frame) {
  m_EventManager.Pause();
  m_Mutex.Lock();
  ListNode* node = &m_AcquiredFrames;
  do {
    node = node->next;
    NN_ABORT_UNLESS(node != &m_AcquiredFrames);
  } while (&reinterpret_cast<AcquiredFrame*>(node)->frame->frame != frame);

  AcquiredFrame* acquired = reinterpret_cast<AcquiredFrame*>(node);
  Unlink(node);
  size_t index = acquired->index;
  m_AcquiredBitmap[index / 64].fetch_and(~(uint64_t(1) << (index % 64)),
    std::memory_order_release);
  Frame* released = acquired->frame;
  nn::gs::NativeSyncHandle sync = GetVideoFramePreSyncHandle(frame);
  SetVideoFramePreSyncHandle(&released->frame, sync);
  ResubmitFrame(released);
  m_Mutex.Unlock();
  m_EventManager.Resume();
  return MovieResult_Success;
}

bool VideoDecoderImpl::TryPopDecodingFrame(Frame** pOutFrame) {
  if (m_DecodingFrames.count == 0) {
    return false;
  }

  nn::gs::NativeSyncHandle sync =
    GetVideoFramePostSyncHandle(&m_DecodingFrames.Front()->frame);
  if (!nn::gs::TryWaitNativeSync(sync)) {
    return false;
  }

  Frame* frame = m_DecodingFrames.Pop();
  if (m_DecodingFrames.count != 0) {
    m_EventManager.SetFence(
      GetVideoFramePostSyncHandle(&m_DecodingFrames.Front()->frame));
  }

  *pOutFrame = frame;
  return true;
}

void VideoDecoderImpl::ResubmitFrame(Frame* frame) {
  uint32_t index = frame->index;
  ReleaseDecoderOutputBuffer(&m_Decoder, index,
    GetVideoFramePreSyncHandle(&frame->frame));
  uint32_t outputIndex = 0;
  nn::gs::NativeSyncHandle sync = {};
  AcquireDecoderOutputBuffer(&outputIndex, &sync, &m_Decoder);
  SetVideoFramePostSyncHandle(&frame->frame, sync);
  bool wasEmpty = m_DecodingFrames.count == 0;
  m_DecodingFrames.Push(frame);
  if (wasEmpty) {
    m_EventManager.SetFence(GetVideoFramePostSyncHandle(&frame->frame));
  }
}

void VideoDecoderImpl::Finalize() {
  m_EventManager.Stop();
  if (m_pThread != nullptr) {
    nn::os::WaitThread(&m_pThread->thread);
    ThreadManager::GetInstance()->_Destroy(m_pThread);
  }

  m_Mutex.Lock();
  m_DecodingFrames.Clear();
  m_DecodedFrames.Clear();
  while (m_AcquiredFrames.next != &m_AcquiredFrames) {
    AcquiredFrame* acquired =
      reinterpret_cast<AcquiredFrame*>(m_AcquiredFrames.next);
    size_t index = acquired->index;
    Unlink(&acquired->link);
    m_AcquiredBitmap[index / 64].fetch_and(~(uint64_t(1) << (index % 64)),
      std::memory_order_release);
  }

  for (size_t i = 0; i < m_FrameCount; i++) {
    m_Frames[i].buffer.Finalize();
  }

  m_FrameCount = 0;
  if (m_State == State_Configured || m_State == State_Started) {
    m_InputBufferSize = 0;
    m_Width = 0;
    m_Height = 0;
    m_Reserved[0] = 0;
    m_Reserved[1] = 0;
    FinalizeDecoder(&m_Decoder);
  }

  m_pMemory = nullptr;
  m_MemorySize = 0;
  m_OutputFormat = {};
  m_TilingMode = {};
  m_EventManager.UnregisterSyncPointCallback();
  m_EventManager.Finalize();
  nn::os::DestroySystemEvent(&m_OutputReadyEvent);
  nn::os::DestroySystemEvent(&m_FormatChangedEvent);
  nn::codec::video::Finalize();
  memset(&m_Decoder, 0, sizeof(m_Decoder));
  m_pThread = nullptr;
  m_State = State_None;
  m_Mutex.Unlock();
}

size_t VideoDecoderImpl::CalculateInputBufferSize(
  const nn::movie::MediaProperty* property) {
  int32_t level = 0;
  if (!property->GetInt32(&level, "level")) {
    level = 0;
  }

  int32_t width = 0;
  int32_t height = 0;
  int64_t size;
  if (property->GetInt32(&width, "max-width") &&
    property->GetInt32(&height, "max-height")) {
    height = (height + 1) & ~1;
    width = (width + 1) & ~1;
    int32_t pixels = height * width;
    size = pixels + (pixels >> 1);
  }
  else {
    NN_ABORT_UNLESS(property->GetInt32(&width, "width") &&
      property->GetInt32(&height, "height"));
    size_t maxInputSize = 0;
    height = (height + 1) & ~1;
    width = (width + 1) & ~1;
    if (property->GetSize(&maxInputSize, "max-input-size")) {
      return maxInputSize;
    }

    size = 3 * width * height / 2;
  }

  return size / GetVideoMinCompressionRatio(
    static_cast<nn::movie::MediaMimeType>(m_Decoder.type), level);
}

ThreadInfo* VideoDecoderImpl::CreateEventThread(void* stack,
  size_t stackSize) {
  nn::os::LightEventType startedEvent = {};
  nn::os::InitializeLightEvent(&startedEvent, false,
    nn::os::EventClearMode_AutoClear);
  EventThreadArgument argument = {this, &startedEvent};
  ThreadInfo* threadInfo = nullptr;
  int priority = ThreadManager::GetInstance()->
    _GetThreadPriorityByComponentType(ComponentType_VideoDecoder);
  uint64_t coreMask = ThreadManager::GetInstance()->
    _GetThreadCoreMaskByComponentType(ComponentType_VideoDecoder);
  NN_ABORT_UNLESS_RESULT_SUCCESS(nn::Result{static_cast<uint32_t>(
    ThreadManager::_StaticCreate(ComponentType_VideoDecoder, &threadInfo,
      EventThreadFunction, &argument, stack, stackSize, priority,
      "VideoDecoderThread", coreMask, this))});
  nn::os::StartThread(&threadInfo->thread);
  nn::os::WaitLightEvent(&startedEvent);
  ThreadInfo* created = threadInfo;
  nn::os::FinalizeLightEvent(&startedEvent);
  return created;
}

}
