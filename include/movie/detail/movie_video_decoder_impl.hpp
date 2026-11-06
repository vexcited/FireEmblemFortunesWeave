#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_video_decoder_buffer.hpp"
#include "movie/detail/movie_video_decoder_event_manager.hpp"
#include "movie/detail/movie_video_decoder_types.hpp"
#include "movie/movie_decoder_types.hpp"
#include "movie/movie_video_frame.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::movie {

class Buffer;
class MediaProperty;

}

namespace nn::movie::detail {

struct ThreadInfo;

}

namespace movie::detail {

// A ring of N entries, pushed at the tail and popped at the head.
template <typename T, size_t N>
struct FixedQueue {
  void Push(T value) {
    items[tail] = value;
    tail = (tail + 1) % N;
    count++;
  }

  T& Front() {
    return items[head % N];
  }

  T Pop() {
    NN_ABORT_UNLESS(count != 0);
    count--;
    size_t index = head % N;
    T value = items[index];
    items[index] = T();
    head = (index + 1) % N;
    return value;
  }

  void Clear() {
    while (count != 0) {
      count--;
      items[head % N] = T();
      head = (head + 1) % N;
    }
  }

  T items[N] = {};
  size_t tail = 0;
  size_t head = 0;
  size_t count = 0;
};

// The public video decoder places this at the start of its memory and gives
// it the rest past the first page.
class VideoDecoderImpl {
public:
  static constexpr size_t FrameCountMax = 8;

  struct Memory {
    void* address;
    size_t size;
  };

  struct Frame {
    VideoDecoderBuffer buffer;
    VideoFrame frame;
    uint32_t index;
  };

  struct ListNode {
    ListNode* prev;
    ListNode* next;
  };

  struct AcquiredFrame {
    ListNode link;
    size_t index;
    Frame* frame;
  };

  enum State : int32_t {
    State_None,
    State_Initialized,
    State_Configured,
    State_Started,
  };

  VideoDecoderImpl() = default;

  MovieResult Initialize(void* memory, size_t memorySize,
    VideoDecoderType type, VideoDecoderOutputFormat outputFormat,
    VideoCodecMode codecMode);
  void Finalize();
  MovieResult Configure(const nn::movie::MediaProperty* property,
    const void* configuration, size_t size);
  MovieResult GetVideoFrameRequirements(nn::movie::MediaProperty* pOut);
  MovieResult Flush();
  MovieResult DecodeAsync(const nn::movie::Buffer* buffer);
  MovieResult RegisterVideoFrame(VideoFrame** frames, int count);
  MovieResult AcquireVideoFrame(VideoFrame** pOutFrame, int* pOutCount);
  MovieResult ReleaseVideoFrame(VideoFrame* frame);
  size_t CalculateBufferRequirements(
    const nn::movie::MediaProperty* property) const;

  void HandleSyncPoint();
  bool TryPopDecodingFrame(Frame** pOutFrame);
  void ResubmitFrame(Frame* frame);
  size_t CalculateInputBufferSize(const nn::movie::MediaProperty* property);
  nn::movie::detail::ThreadInfo* CreateEventThread(void* stack,
    size_t stackSize);

  uint64_t m_AdditionalRemoteMemorySize = 0;
  int32_t m_ColorStandard = 4;
  int32_t m_ColorRange = 2;
  int32_t m_ColorTransfer = 3;
  VideoDecoderTypes m_Decoder = {};
  void* m_pMemory = nullptr;
  size_t m_MemorySize = 0;
  nn::codec::VideoDecoderOutputFormat m_OutputFormat = {};
  nn::codec::ImageTilingMode m_TilingMode = {};
  nn::os::SystemEventType* m_pInputReadyEvent = nullptr;
  nn::os::SystemEventType m_OutputReadyEvent = {};
  nn::os::SystemEventType m_FormatChangedEvent = {};
  FixedQueue<Memory, FrameCountMax> m_FreeMemory;
  Frame m_Frames[FrameCountMax] = {};
  size_t m_FrameCount = 0;
  FixedQueue<Frame*, FrameCountMax> m_DecodingFrames;
  FixedQueue<Frame*, FrameCountMax> m_DecodedFrames;
  ListNode m_AcquiredFrames = {&m_AcquiredFrames, &m_AcquiredFrames};
  AcquiredFrame m_AcquiredFramePool[FrameCountMax];
  // One bit per pool entry, set while the entry is in use.
  size_t m_AcquiredBitmapCount = 1;
  std::atomic<uint64_t> m_AcquiredBitmap[1] = {~uint64_t(0xff)};
  nn::movie::detail::ThreadInfo* m_pThread = nullptr;
  VideoDecoderEventManager m_EventManager;
  bool m_IsRemoteMemoryEnabled = false;
  int32_t m_Width = 0;
  int32_t m_Height = 0;
  int32_t m_Reserved[2] = {};
  size_t m_InputBufferSize = 0;
  nn::Result m_LastResult = {};
  nn::os::SdkMutexType m_Mutex = {};
  State m_State = State_None;
};

}
