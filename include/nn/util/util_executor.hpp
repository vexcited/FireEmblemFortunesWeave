#pragma once

#include <stddef.h>

#include "nn/os/event.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/os/system_event.hpp"
#include "nn/result.hpp"
#include "nn/util/optional.hpp"

namespace nn::util {

class Cancelable {
public:
  class Listener {
  public:
    virtual void Signal() = 0;
  };

  void Cancel();
  bool IsCanceled() const;
  void AttachListener(Listener* listener);
  void DetachListener();

private:
  friend class AbstractExecutor;
  friend class AsyncExecution;

  os::SdkMutexType m_Lock;
  bool m_IsCanceled;
  Listener* m_pListener;
};

class CancelInjectable {
public:
  explicit CancelInjectable(const Cancelable* cancelable);
  bool IsCanceled() const;

private:
  const Cancelable* m_pCancelable;
};

class Executable {
public:
  ~Executable();
  Result Initialize();
  uint32_t GetReadableHandle();
  void Execute(void* buffer, size_t size);
  bool HasDone() const;
  bool TryLock();
  void Lock();
  void Unlock();

protected:
  virtual Result ExecuteImpl(void* buffer, size_t size) = 0;

private:
  friend class AbstractExecutor;
  friend class AsyncExecution;

  Cancelable m_Cancelable;
  os::SdkMutexType m_Lock;
  bool m_IsEventInitialized;
  os::SystemEventType m_Event;
  bool m_IsDone;
  optional<Result> m_Result;
};

class AbstractExecutor {
public:
  AbstractExecutor();
  ~AbstractExecutor() {}
  Result Register(Executable* executable);
  void Unregister(Executable* executable);
  bool TryUnregister(Executable* executable);
  void Execute(void* buffer, size_t size);
  void InitializeMultiWaitHolder(os::MultiWaitHolderType* holder);
  bool TryWaitSignal();
  void WaitSignal();
  void ClearSignal();

protected:
  virtual Result RegisterImpl(Executable* executable) = 0;
  virtual void UnregisterImpl(Executable* executable) = 0;
  virtual Executable* DequeueImpl() = 0;

private:
  // The event is initialized by the constructor body only.
  union {
    os::EventType m_Event;
  };
};

class AsyncExecution {
public:
  explicit AsyncExecution(Executable* executable);
  AsyncExecution(AsyncExecution&& other);
  ~AsyncExecution();
  AsyncExecution& operator=(AsyncExecution&& other);
  bool IsInitialized() const;
  Result Initialize(AbstractExecutor* executor);
  void Finalize();
  void Cancel();

private:
  Executable* m_pExecutable;
  AbstractExecutor* m_pExecutor;
};

}
