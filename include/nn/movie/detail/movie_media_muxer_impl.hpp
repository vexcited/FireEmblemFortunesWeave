#pragma once

#include <atomic>
#include <new>
#include <stddef.h>
#include <stdint.h>

#include "nn/movie/detail/movie_android_media_muxer.hpp"
#include "nn/movie/detail/movie_media_muxer_state.hpp"
#include "nn/movie/detail/movie_message.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/message_queue.hpp"
#include "nn/result.hpp"

namespace nn::movie {

class Buffer;
class MediaProperty;
class MediaWriter;

enum ContainerType : int32_t;

}

namespace nn::movie::detail {

struct ThreadInfo;

class MediaMuxerImpl {
public:
  class MuxerInitialize : public Message {
  public:
    explicit MuxerInitialize(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
    MediaWriter* m_pWriter = nullptr;
    ContainerType m_ContainerType = static_cast<ContainerType>(-1);
    void* m_pThreadInstance = nullptr;
  };

  class MuxerFinalize : public Message {
  public:
    explicit MuxerFinalize(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
  };

  class MuxerThreadExit : public Message {
  public:
    explicit MuxerThreadExit(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
  };

  class MuxerConfigure : public Message {
  public:
    explicit MuxerConfigure(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
    const MediaProperty* m_pProperty = nullptr;
  };

  class MuxerAddTrack : public Message {
  public:
    explicit MuxerAddTrack(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
    const MediaProperty* m_pProperty = nullptr;
    int* m_pOutIndex = nullptr;
    const void* m_pConfiguration = nullptr;
    size_t m_ConfigurationSize = 0;
  };

  class MuxerGetTrackCount : public Message {
  public:
    explicit MuxerGetTrackCount(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
    int* m_pOutCount = nullptr;
  };

  class MuxerStart : public Message {
  public:
    explicit MuxerStart(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
  };

  class MuxerStop : public Message {
  public:
    explicit MuxerStop(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
  };

  class MuxerWriteAsync : public Message {
  public:
    explicit MuxerWriteAsync(MediaMuxerImpl* owner) : m_pOwner(owner) {}
    void Execute() override;

    MediaMuxerImpl* m_pOwner;
    const Buffer* m_pBuffer = nullptr;
    int m_Index = 0;
  };

  MediaMuxerImpl();
  ~MediaMuxerImpl();

  Result Initialize(AllocatorInfo* allocatorInfo, MediaWriter* writer,
    ContainerType containerType, void* threadInstance);
  Result Finalize();
  Result Configure(const MediaProperty* property);
  Result AddTrack(int* pOutIndex, const MediaProperty* property,
    const void* configuration, size_t configurationSize);
  Result Start();
  Result GetTrackCount(int* pOutCount);
  Result Stop();
  Result WriteAsync(const Buffer* buffer, int index);

  void* Allocate(size_t size);
  void* Allocate(size_t alignment, size_t size);
  void Deallocate(void* address);

  Result SendMuxerMessage(Message* message);
  void ReleaseMuxerMessage(Message* message);
  Result InitializeMediaMuxerThread();
  Result FinalizeMediaMuxerThread();
  void MediaMuxerThreadLoop();

  AllocatorInfo* GetAllocatorInfo() const {
    return m_pAllocatorInfo;
  }

  void RunMessageLoop() {
    uintptr_t received = 0;
    while (!m_IsThreadExitRequested) {
      os::ReceiveMessageQueue(&received, &m_MessageQueue);
      auto message = reinterpret_cast<Message*>(received);
      if (message != nullptr) {
        message->Execute();
        if (message->RemoveReference()) {
          m_MessageBufferList.ReleaseBuffer(message);
        }
      }
    }
  }

private:
  template <typename T>
  T* AcquireMessage() {
    void* buffer = nullptr;
    m_MessageBufferList.AcquireBuffer(&buffer);
    return new (buffer) T(this);
  }

  Result PostMessage(Message* message) {
    message->AddReference();
    os::SendMessageQueue(&m_MessageQueue, reinterpret_cast<uintptr_t>(message));
    message->Wait();
    Result result = message->GetResult();
    if (message->RemoveReference()) {
      m_MessageBufferList.ReleaseBuffer(message);
    }

    return result;
  }

  AndroidMediaMuxer* m_pMuxer;
  MediaMuxerState m_State;
  int m_TrackCount;
  bool m_IsFinalized;
  void* m_pThreadStack;
  bool m_IsThreadCreated;
  bool m_IsThreadRunning;
  std::atomic<bool> m_IsThreadExitRequested;
  ThreadInfo* m_pThreadInfo;
  void* m_pThreadInstance;
  uintptr_t* m_pMessageQueueBuffer;
  // The original constructs nothing in the queue before initializing it.
  union {
    os::MessageQueueType m_MessageQueue;
  };
  MessageBufferList m_MessageBufferList;
  AllocatorInfo* m_pAllocatorInfo;
  os::LightEventType m_Waiter;
  uint64_t m_Reserved;
};

}
