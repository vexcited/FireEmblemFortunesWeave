#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/mem/standard_allocator.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/mutex.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

class Message {
public:
  virtual ~Message();

  void Reset();
  os::LightEventType* GetWaiter();
  void SetWaiter(os::LightEventType* waiter);
  Result GetResult();
  void SetResult(Result result);
  void SignalWaiter();
  int64_t GetWaitTimeMs();
  void SetWaitTimeMs(int64_t waitTimeMs);
  bool IsTimedOut();
  void Wait();
  bool TimedWait(int64_t waitTimeMs);

private:
  Result m_Result;
  os::LightEventType* m_Waiter;
  int64_t m_WaitTimeMs;
  bool m_IsTimedOut;
};

class MessageBufferList {
public:
  static constexpr int BufferCountMax = 16;

  Result Initialize(mem::StandardAllocator* allocator, int count,
    size_t size);
  void Finalize();
  void AcquireBuffer(void** pOutBuffer);
  void ReleaseBuffer(void* buffer);

private:
  int m_Count;
  uint32_t m_Alignment;
  void* m_Buffers[BufferCountMax];
  mem::StandardAllocator* m_Allocator;
  os::MutexType m_Mutex;
};

struct AllocatorInfo {
  mem::StandardAllocator* allocator;
  void* memory;
  size_t size;

  size_t CalculateLeakedMemory();
};

}
