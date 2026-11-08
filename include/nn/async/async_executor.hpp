#pragma once

#include <memory>
#include <stddef.h>
#include <stdint.h>

#include "nn/async/async_detail.hpp"
#include "nn/memory_resource.hpp"
#include "nn/os/event.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/span.hpp"

namespace nn::os {

struct ThreadType;

}

namespace nn::async {

namespace detail {

class IWaitHandler {
public:
  virtual ~IWaitHandler() = default;
  virtual void InitializeMultiWaitHolder(os::MultiWaitHolderType* holder) = 0;
};

}

class ExecutionBlocker {
public:
  bool IsBlocked() const;

private:
  std::shared_ptr<detail::IWaitHandler> m_Handler;
};

namespace detail {

class ExecutionScheduler {
public:
  explicit ExecutionScheduler(MemoryResource* resource);
  ~ExecutionScheduler();

  bool IsEmpty();
  void DequeueAndCall(os::EventType* pExitEvent);
  bool TryDequeueAndCall();
  void DequeueAndCallAll();

private:
  uint8_t m_Storage[0x118];
};

}

class Executor {
public:
  virtual void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token) = 0;
  virtual void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token, ExecutionBlocker blocker) = 0;
  virtual ~Executor() = default;
};

void EnqueueExecutable(Executor* executor,
  std::shared_ptr<Executable> executable, const CancellationToken& token);
void EnqueueExecutable(Executor* executor,
  std::shared_ptr<Executable> executable, const CancellationToken& token,
  ExecutionBlocker blocker);

class QueuingExecutor final : public Executor {
public:
  explicit QueuingExecutor(MemoryResource* resource);
  ~QueuingExecutor() override;

  void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token) override;
  void EnqueueExecutable(std::shared_ptr<Executable> executable,
    const CancellationToken& token, ExecutionBlocker blocker) override;

  bool TryExecuteOne();
  void LoopExecution();
  void RequestLoopExecutionExit();
  bool IsRequestedLoopExecutionExit();
  void ExecuteAll();

private:
  detail::ExecutionScheduler m_Scheduler;

  // The event is only set up by InitializeEvent.
  union {
    os::EventType m_ExitEvent;
  };
};

class ThreadPool {
public:
  explicit ThreadPool(MemoryResource* resource);
  ~ThreadPool();

  bool HasStartedThreads() const;
  void StartThreads(int count, size_t stackSize, int priority);
  void StartThreads(int count, void** stacks, size_t stackSize,
    int priority);
  void StartThreads(int count, void** stacks, size_t stackSize, int priority,
    int* pCoreNumbers);
  void RequestThreadExit();
  void JoinThreads();

private:
  void StartThreadsImpl(int count, void** stacks, size_t stackSize,
    int priority, int* pCoreNumbers);

  MemoryResource* m_pResource;
  Span<os::ThreadType*> m_Threads;
  QueuingExecutor m_Executor;
  bool m_IsJoined;
};

bool IsAwaitable();
void YieldTask();
Executor* GetCurrentExecutor();
void DumpAllTaskDebugData();
void DumpAllTaskDebugData(bool isDetailed);

}
