#include "nn/diag/diag_abort.hpp"
#include "nn/movie/detail/movie_message.hpp"

namespace nn::movie::detail {

namespace {

constexpr Result ResultMessageNotProcessed = {0x3f100};
constexpr Result ResultOutOfMemory = {0x3f700};

}

void Message::Reset() {
  m_Waiter = nullptr;
  m_WaitTimeMs = 0;
  m_IsTimedOut = false;
  m_Result = ResultMessageNotProcessed;
}

os::LightEventType* Message::GetWaiter() {
  return m_Waiter;
}

void Message::SetWaiter(os::LightEventType* waiter) {
  m_Waiter = waiter;
}

Result Message::GetResult() {
  return m_Result;
}

void Message::SetResult(Result result) {
  m_Result = result;
}

void Message::SignalWaiter() {
  if (m_Waiter != nullptr && !m_IsTimedOut) {
    os::SignalLightEvent(m_Waiter);
  }
}

int64_t Message::GetWaitTimeMs() {
  return m_WaitTimeMs;
}

void Message::SetWaitTimeMs(int64_t waitTimeMs) {
  m_WaitTimeMs = waitTimeMs;
}

bool Message::IsTimedOut() {
  return m_IsTimedOut;
}

void Message::Wait() {
  if (m_Waiter != nullptr) {
    os::WaitLightEvent(m_Waiter);
    m_Result = {};
  }
}

bool Message::TimedWait(int64_t waitTimeMs) {
  m_WaitTimeMs = waitTimeMs;
  m_IsTimedOut = false;

  if (waitTimeMs < 1 || m_Waiter == nullptr) {
    m_Result = {};
    return true;
  }

  bool isSignaled =
    os::TimedWaitLightEvent(m_Waiter, {waitTimeMs * 1000 * 1000});
  m_IsTimedOut = !isSignaled;
  return isSignaled;
}

Result MessageBufferList::Initialize(mem::StandardAllocator* allocator,
  int count, size_t size) {
  os::LockMutex(&m_Mutex);
  NN_ABORT_UNLESS_NULL(m_Allocator);

  m_Buffers[BufferCountMax - 1] = nullptr;
  m_Allocator = allocator;
  m_Count = count;
  for (int i = 0; i < BufferCountMax - 1; i++) {
    m_Buffers[i] = nullptr;
  }

  Result result = {};
  for (int i = 0; i < m_Count; i++) {
    void* buffer = m_Allocator->Allocate(size, m_Alignment);
    if (buffer == nullptr) {
      result = ResultOutOfMemory;
      break;
    }

    m_Buffers[i] = buffer;
  }

  os::UnlockMutex(&m_Mutex);
  return result;
}

void MessageBufferList::Finalize() {
  os::LockMutex(&m_Mutex);

  for (int i = 0; i < BufferCountMax; i++) {
    if (m_Buffers[i] != nullptr) {
      m_Allocator->Free(m_Buffers[i]);
      m_Buffers[i] = nullptr;
    }
  }

  m_Allocator = nullptr;
  m_Count = 0;
  os::UnlockMutex(&m_Mutex);
}

void MessageBufferList::AcquireBuffer(void** pOutBuffer) {
  os::LockMutex(&m_Mutex);

  int index = 0;
  while (true) {
    NN_ABORT_UNLESS(index < m_Count);
    if (m_Buffers[index] != nullptr) {
      break;
    }

    index++;
  }

  *pOutBuffer = m_Buffers[index];
  m_Buffers[index] = nullptr;
  os::UnlockMutex(&m_Mutex);
}

void MessageBufferList::ReleaseBuffer(void* buffer) {
  os::LockMutex(&m_Mutex);

  for (int i = 0; i < m_Count; i++) {
    NN_ABORT_UNLESS(m_Buffers[i] != buffer);
  }

  int index = 0;
  while (true) {
    NN_ABORT_UNLESS(index < m_Count);
    if (m_Buffers[index] == nullptr) {
      break;
    }

    index++;
  }

  m_Buffers[index] = buffer;
  os::UnlockMutex(&m_Mutex);
}

size_t AllocatorInfo::CalculateLeakedMemory() {
  mem::StandardAllocator* standardAllocator = allocator;
  standardAllocator->CleanUpManagementArea();
  return size - standardAllocator->GetTotalFreeSize();
}

}
