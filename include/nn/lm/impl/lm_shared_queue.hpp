#pragma once

#include <stddef.h>
#include <stdint.h>

#include <atomic>
#include <cstddef>

#include "nn/os/sdk_mutex.hpp"
#include "nn/os/shared_memory.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/span.hpp"

namespace nn::lm::impl {

class SharedQueueBase {
 public:
  // Positions are published through two slots selected by a sequence.
  struct Header {
    std::atomic<uint32_t> writeSequence;
    uint64_t writePositions[2];
    std::atomic<uint32_t> readSequence;
    uint64_t readPositions[2];
  };

  static_assert(sizeof(Header) == 48);

  class Producer {
   public:
    void AttachBuffer(Span<std::byte> buffer, bool initializes);
    [[gnu::noinline]] bool TryPush(Span<const std::byte> data);
    void Write(size_t readPosition, Span<const std::byte> data);

   protected:
    Header* m_Header = nullptr;
    std::byte* m_Buffer = nullptr;
    size_t m_BufferSize = 0;
    size_t m_Position = 0;
    bool m_IsValid = true;
    os::SdkMutex m_Mutex;
  };

  class Consumer {
   public:
    void AttachBuffer(Span<std::byte> buffer, bool initializes);
    [[gnu::noinline]] size_t Pop(Span<std::byte> buffer);
    void Read(Span<std::byte> buffer, size_t writePosition, size_t size);

   protected:
    Header* m_Header = nullptr;
    std::byte* m_Buffer = nullptr;
    size_t m_BufferSize = 0;
    size_t m_Position = 0;
    bool m_IsValid = true;
    os::SdkMutex m_Mutex;
  };
};

class SharedQueue {
 public:
  class Producer : public SharedQueueBase::Producer {
   public:
    bool TryPush(Span<const std::byte> data);
    void Push(Span<const std::byte> data);
    os::SystemEvent* GetPushEvent();
    os::SystemEvent* GetPopEvent();
    void AttachPushEventWritableHandle(uint32_t handle, bool isManaged);
    void AttachPopEventReadableHandle(uint32_t handle, bool isManaged);
    void CreatePushEvent();
    void CreatePopEvent();

   protected:
    os::SystemEvent m_PushEvent;
    os::SystemEvent m_PopEvent;
  };

  class Consumer : public SharedQueueBase::Consumer {
   public:
    size_t Pop(Span<std::byte> buffer);
    os::SystemEvent* GetPushEvent();
    os::SystemEvent* GetPopEvent();
    void AttachPushEventReadableHandle(uint32_t handle, bool isManaged);
    void AttachPopEventWritableHandle(uint32_t handle, bool isManaged);
    void CreatePushEvent();
    void CreatePopEvent();

   protected:
    os::SystemEvent m_PushEvent;
    os::SystemEvent m_PopEvent;
  };
};

template <typename Memory>
class SharedQueueWithMemory {
 public:
  class Producer : public SharedQueue::Producer {
   public:
    explicit Producer(size_t size);
    Producer(size_t size, uint32_t handle, bool isManaged);
    explicit Producer(Span<std::byte> buffer);

    Memory* GetSharedMemory();
    Memory* GetTransferMemory();
    void AttachSharedMemory(size_t size, uint32_t handle, bool isManaged);

   private:
    Memory m_Memory;
  };

  class Consumer : public SharedQueue::Consumer {
   public:
    explicit Consumer(size_t size);
    Consumer(size_t size, uint32_t handle, bool isManaged);
    explicit Consumer(Span<std::byte> buffer);

    Memory* GetSharedMemory();
    Memory* GetTransferMemory();
    void AttachSharedMemory(size_t size, uint32_t handle, bool isManaged);

   private:
    Memory m_Memory;
  };

  static Span<std::byte> MapSharedMemory(os::SharedMemory* memory,
    size_t size);
  static Span<std::byte> MapTransferMemory(os::TransferMemory* memory,
    size_t size);
};

}
