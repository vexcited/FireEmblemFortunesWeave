#include "nn/lm/impl/lm_shared_queue.hpp"

#include <string.h>

#include <mutex>
#include <new>

#include "nn/diag/diag_abort.hpp"

namespace nn::lm::impl {

namespace {

using Header = SharedQueueBase::Header;

[[gnu::always_inline]] inline void FenceLoadLoad() {
  __builtin_arm_dmb(9);
}

[[gnu::always_inline]] inline void FenceStoreStore() {
  __builtin_arm_dmb(10);
}

[[gnu::always_inline]] inline uint64_t LoadPosition(
  std::atomic<uint32_t>* sequence, const volatile uint64_t* positions) {
  uint32_t current;
  uint64_t position;

  do {
    current = sequence->load(std::memory_order_relaxed);
    position = positions[current & 1];
    FenceLoadLoad();
  } while (current != sequence->load(std::memory_order_relaxed));

  return position;
}

[[gnu::always_inline]] inline void StorePosition(
  std::atomic<uint32_t>* sequence, volatile uint64_t* positions,
  uint64_t position) {
  uint32_t next = sequence->load(std::memory_order_relaxed) + 1;
  positions[next & 1] = position;
  FenceStoreStore();
  sequence->store(next, std::memory_order_relaxed);
}

[[gnu::always_inline]] inline void InitializeHeader(Header* header) {
  new (header) Header();
}

[[gnu::always_inline]] inline size_t WriteToRing(std::byte* ring,
  size_t ringSize, size_t position, size_t readPosition, const void* data,
  size_t size, size_t* pPosition) {
  if (position >= readPosition) {
    size_t contiguous = ringSize - position;

    if (size > contiguous) {
      memcpy(ring + position, data, contiguous);
      memcpy(ring, static_cast<const std::byte*>(data) + contiguous,
        size - contiguous);
      return size - contiguous;
    }

    memcpy(ring + position, data, size);

    if (size == contiguous) {
      return 0;
    }
  }
  else {
    memcpy(ring + position, data, size);
  }

  return *pPosition + size;
}

[[gnu::always_inline]] inline size_t ReadFromRing(const std::byte* ring,
  size_t ringSize, size_t position, size_t writePosition, void* buffer,
  size_t size, size_t* pPosition) {
  if (writePosition >= position) {
    memcpy(buffer, ring + position, size);
    return *pPosition + size;
  }

  size_t contiguous = ringSize - position;

  if (size > contiguous) {
    memcpy(buffer, ring + position, contiguous);
    memcpy(static_cast<std::byte*>(buffer) + contiguous, ring,
      size - contiguous);
    return size - contiguous;
  }

  memcpy(buffer, ring + position, size);
  return size == contiguous ? 0 : *pPosition + size;
}

}

void SharedQueueBase::Producer::AttachBuffer(Span<std::byte> buffer,
  bool initializes) {
  Header* header = reinterpret_cast<Header*>(buffer.data);

  if (initializes) {
    InitializeHeader(header);
  }

  m_Header = header;
  m_Buffer = buffer.data + sizeof(Header);
  m_BufferSize = buffer.size - sizeof(Header);
}

bool SharedQueueBase::Producer::TryPush(Span<const std::byte> data) {
  if (data.size == 0) {
    return false;
  }

  std::lock_guard<os::SdkMutex> lock(m_Mutex);

  if (!m_IsValid) {
    return false;
  }

  uint64_t readPosition =
    LoadPosition(&m_Header->readSequence, m_Header->readPositions);

  if (readPosition >= m_BufferSize) {
    m_IsValid = false;
    return false;
  }

  size_t freeSize = readPosition > m_Position
    ? readPosition - m_Position
    : m_BufferSize - m_Position + readPosition;

  if (data.size + sizeof(uint64_t) + 1 > freeSize) {
    return false;
  }

  uint64_t size = data.size;
  m_Position = WriteToRing(m_Buffer, m_BufferSize, m_Position, readPosition,
    &size, sizeof(size), &m_Position);
  m_Position = WriteToRing(m_Buffer, m_BufferSize, m_Position, readPosition,
    data.data, data.size, &m_Position);
  StorePosition(&m_Header->writeSequence, m_Header->writePositions,
    m_Position);
  return true;
}

void SharedQueueBase::Producer::Write(size_t readPosition,
  Span<const std::byte> data) {
  m_Position = WriteToRing(m_Buffer, m_BufferSize, m_Position, readPosition,
    data.data, data.size, &m_Position);
}

void SharedQueueBase::Consumer::AttachBuffer(Span<std::byte> buffer,
  bool initializes) {
  Header* header = reinterpret_cast<Header*>(buffer.data);

  if (initializes) {
    InitializeHeader(header);
  }

  m_Header = header;
  m_Buffer = buffer.data + sizeof(Header);
  m_BufferSize = buffer.size - sizeof(Header);
}

size_t SharedQueueBase::Consumer::Pop(Span<std::byte> buffer) {
  std::lock_guard<os::SdkMutex> lock(m_Mutex);

  if (!m_IsValid) {
    return 0;
  }

  uint64_t writePosition =
    LoadPosition(&m_Header->writeSequence, m_Header->writePositions);

  if (writePosition >= m_BufferSize) {
    m_IsValid = false;
    return 0;
  }

  if (writePosition == m_Position) {
    return 0;
  }

  size_t usedSize = writePosition >= m_Position
    ? writePosition - m_Position
    : m_BufferSize - m_Position + writePosition;

  if (usedSize <= sizeof(uint64_t)) {
    m_IsValid = false;
    return 0;
  }

  uint64_t size = 0;
  m_Position = ReadFromRing(m_Buffer, m_BufferSize, m_Position,
    writePosition, &size, sizeof(size), &m_Position);

  if (size - 1 >= usedSize - sizeof(uint64_t)) {
    m_IsValid = false;
    return 0;
  }

  m_Position = ReadFromRing(m_Buffer, m_BufferSize, m_Position,
    writePosition, buffer.data, size, &m_Position);
  StorePosition(&m_Header->readSequence, m_Header->readPositions,
    m_Position);
  return size;
}

void SharedQueueBase::Consumer::Read(Span<std::byte> buffer,
  size_t writePosition, size_t size) {
  m_Position = ReadFromRing(m_Buffer, m_BufferSize, m_Position,
    writePosition, buffer.data, size, &m_Position);
}

bool SharedQueue::Producer::TryPush(Span<const std::byte> data) {
  bool isPushed = SharedQueueBase::Producer::TryPush(data);

  if (isPushed) {
    os::SignalSystemEvent(m_PushEvent.GetBase());
  }

  return isPushed;
}

void SharedQueue::Producer::Push(Span<const std::byte> data) {
  while (!SharedQueueBase::Producer::TryPush(data)) {
    os::WaitSystemEvent(m_PopEvent.GetBase());
    os::ClearSystemEvent(m_PopEvent.GetBase());
  }

  os::SignalSystemEvent(m_PushEvent.GetBase());
}

os::SystemEvent* SharedQueue::Producer::GetPushEvent() {
  return &m_PushEvent;
}

os::SystemEvent* SharedQueue::Producer::GetPopEvent() {
  return &m_PopEvent;
}

void SharedQueue::Producer::AttachPushEventWritableHandle(uint32_t handle,
  bool isManaged) {
  m_PushEvent.AttachWritableHandle(handle, isManaged,
    os::EventClearMode_ManualClear);
}

void SharedQueue::Producer::AttachPopEventReadableHandle(uint32_t handle,
  bool isManaged) {
  m_PopEvent.AttachReadableHandle(handle, isManaged,
    os::EventClearMode_ManualClear);
}

void SharedQueue::Producer::CreatePushEvent() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSystemEvent(m_PushEvent.GetBase(),
    os::EventClearMode_ManualClear, true));
}

void SharedQueue::Producer::CreatePopEvent() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSystemEvent(m_PopEvent.GetBase(),
    os::EventClearMode_ManualClear, true));
}

size_t SharedQueue::Consumer::Pop(Span<std::byte> buffer) {
  size_t size = SharedQueueBase::Consumer::Pop(buffer);

  if (size != 0) {
    os::SignalSystemEvent(m_PopEvent.GetBase());
  }

  return size;
}

os::SystemEvent* SharedQueue::Consumer::GetPushEvent() {
  return &m_PushEvent;
}

os::SystemEvent* SharedQueue::Consumer::GetPopEvent() {
  return &m_PopEvent;
}

void SharedQueue::Consumer::AttachPushEventReadableHandle(uint32_t handle,
  bool isManaged) {
  m_PushEvent.AttachReadableHandle(handle, isManaged,
    os::EventClearMode_ManualClear);
}

void SharedQueue::Consumer::AttachPopEventWritableHandle(uint32_t handle,
  bool isManaged) {
  m_PopEvent.AttachWritableHandle(handle, isManaged,
    os::EventClearMode_ManualClear);
}

void SharedQueue::Consumer::CreatePushEvent() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSystemEvent(m_PushEvent.GetBase(),
    os::EventClearMode_ManualClear, true));
}

void SharedQueue::Consumer::CreatePopEvent() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSystemEvent(m_PopEvent.GetBase(),
    os::EventClearMode_ManualClear, true));
}

using SharedMemoryQueue = SharedQueueWithMemory<os::SharedMemory>;
using TransferMemoryQueue = SharedQueueWithMemory<os::TransferMemory>;

template <>
SharedMemoryQueue::Producer::Producer(size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSharedMemory(m_Memory.GetBase(),
    size, os::MemoryPermission_ReadWrite, os::MemoryPermission_ReadWrite));
  void* address =
    os::MapSharedMemory(m_Memory.GetBase(), os::MemoryPermission_ReadWrite);
  AttachBuffer(Span<std::byte>{static_cast<std::byte*>(address), size}, true);
  CreatePushEvent();
  CreatePopEvent();
}

template <>
Span<std::byte> SharedMemoryQueue::MapSharedMemory(os::SharedMemory* memory,
  size_t size) {
  void* address =
    os::MapSharedMemory(memory->GetBase(), os::MemoryPermission_ReadWrite);
  return Span<std::byte>{static_cast<std::byte*>(address), size};
}

template <>
os::SharedMemory* SharedMemoryQueue::Producer::GetSharedMemory() {
  return &m_Memory;
}

template <>
void SharedMemoryQueue::Producer::AttachSharedMemory(size_t size,
  uint32_t handle, bool isManaged) {
  os::AttachSharedMemory(m_Memory.GetBase(), size, handle, isManaged);
  void* address =
    os::MapSharedMemory(m_Memory.GetBase(), os::MemoryPermission_ReadWrite);
  AttachBuffer(Span<std::byte>{static_cast<std::byte*>(address), size},
    false);
}

template <>
SharedMemoryQueue::Consumer::Consumer(size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateSharedMemory(m_Memory.GetBase(),
    size, os::MemoryPermission_ReadWrite, os::MemoryPermission_ReadWrite));
  void* address =
    os::MapSharedMemory(m_Memory.GetBase(), os::MemoryPermission_ReadWrite);
  AttachBuffer(Span<std::byte>{static_cast<std::byte*>(address), size}, true);
  CreatePushEvent();
  CreatePopEvent();
}

template <>
os::SharedMemory* SharedMemoryQueue::Consumer::GetSharedMemory() {
  return &m_Memory;
}

template <>
void SharedMemoryQueue::Consumer::AttachSharedMemory(size_t size,
  uint32_t handle, bool isManaged) {
  os::AttachSharedMemory(m_Memory.GetBase(), size, handle, isManaged);
  void* address =
    os::MapSharedMemory(m_Memory.GetBase(), os::MemoryPermission_ReadWrite);
  AttachBuffer(Span<std::byte>{static_cast<std::byte*>(address), size},
    false);
}

template <>
Span<std::byte> TransferMemoryQueue::MapTransferMemory(
  os::TransferMemory* memory, size_t size) {
  void* address = nullptr;
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::MapTransferMemory(&address,
    memory->GetBase(), os::MemoryPermission_ReadWrite));
  return Span<std::byte>{static_cast<std::byte*>(address), size};
}

template <>
TransferMemoryQueue::Producer::Producer(size_t size, uint32_t handle,
  bool isManaged)
  : SharedQueue::Producer() {
  os::AttachTransferMemory(m_Memory.GetBase(), size, handle, isManaged);
  Span<std::byte> buffer = MapTransferMemory(&m_Memory, size);
  AttachBuffer(buffer, true);
  CreatePushEvent();
  CreatePopEvent();
}

template <>
TransferMemoryQueue::Producer::Producer(Span<std::byte> buffer) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(m_Memory.GetBase(),
    buffer.data, buffer.size, os::MemoryPermission_ReadWrite));
  AttachBuffer(buffer, false);
}

template <>
os::TransferMemory* TransferMemoryQueue::Producer::GetTransferMemory() {
  return &m_Memory;
}

template <>
TransferMemoryQueue::Consumer::Consumer(size_t size, uint32_t handle,
  bool isManaged) {
  os::AttachTransferMemory(m_Memory.GetBase(), size, handle, isManaged);
  Span<std::byte> buffer = MapTransferMemory(&m_Memory, size);
  AttachBuffer(buffer, true);
  CreatePushEvent();
  CreatePopEvent();
}

template <>
TransferMemoryQueue::Consumer::Consumer(Span<std::byte> buffer) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(m_Memory.GetBase(),
    buffer.data, buffer.size, os::MemoryPermission_ReadWrite));
  AttachBuffer(buffer, false);
}

template <>
os::TransferMemory* TransferMemoryQueue::Consumer::GetTransferMemory() {
  return &m_Memory;
}

}
