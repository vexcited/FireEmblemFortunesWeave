#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>

#include "nn/lmem/exp_heap.hpp"
#include "nn/mem/standard_allocator.hpp"
#include "nn/os/light_event.hpp"
#include "nn/os/mutex.hpp"
#include "nn/result.hpp"

namespace nn::movie::detail {

class Message {
public:
  Message()
    : m_Result{0x3f100}, m_Waiter(nullptr), m_WaitTimeMs(0),
      m_IsTimedOut(false), m_ReferenceCount(0) {}

  virtual ~Message();
  virtual void Execute() = 0;

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

  void AddReference() {
    ++m_ReferenceCount;
  }

  bool RemoveReference() {
    return --m_ReferenceCount == 0;
  }

private:
  Result m_Result;
  os::LightEventType* m_Waiter;
  int64_t m_WaitTimeMs;
  bool m_IsTimedOut;
  std::atomic<uint32_t> m_ReferenceCount;
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
  int m_Count = 0;
  uint32_t m_Alignment = 16;
  void* m_Buffers[BufferCountMax] = {};
  mem::StandardAllocator* m_Allocator = nullptr;
  os::Mutex m_Mutex{true};
};

enum AllocatorType : int32_t {
  AllocatorType_StandardAllocator = 1,
  AllocatorType_ExpHeap = 2,
  AllocatorType_StandardLibrary = 3,
  AllocatorType_Callback = 4,
};

struct AllocatorCallbacks {
  void* (*allocate)(size_t size, size_t alignment, void* userData);
  void (*free)(void* address, void* userData);
  void* (*reallocate)(void* address, size_t size, void* userData);
  void* userData;
};

// The allocator member is reinterpreted by type. The statistics are only
// updated while the heap memory manager has them enabled.
struct AllocatorInfo {
  union {
    mem::StandardAllocator* allocator;
    lmem::detail::HeapHead** pExpHeap;
    AllocatorCallbacks* pCallbacks;
  };
  AllocatorType type;
  size_t size;
  size_t peakUsedSize;
  size_t usedSize;
  size_t freeSize;
  size_t allocatableSize;
  size_t blockSize;
  uintptr_t firstAddress;
  size_t blockCount;
  // The movie library of subsdk2 always sets it to 1.
  uint64_t reserved;

  size_t CalculateLeakedMemory();
};

}
