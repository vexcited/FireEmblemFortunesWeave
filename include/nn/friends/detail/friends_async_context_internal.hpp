#pragma once

#include <stddef.h>

#include "nn/friends/detail/friends_async_memory_allocator.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/os/thread_manager.hpp"

namespace nn::friends::detail {

class AsyncFunctionBase {
 public:
  virtual ~AsyncFunctionBase() = default;
  virtual Result Execute() = 0;
};

class AsyncContextInternal {
 public:
  AsyncContextInternal();
  ~AsyncContextInternal();

  Result Initialize();
  void Cancel();
  bool IsCompleted();
  Result GetResult() const;
  void AttachAllocator(AsyncMemoryAllocator&& allocator);
  AsyncMemoryAllocator&& DetachAllocator();
  void Execute(AsyncFunctionBase* function, const char* threadName,
    void* stack, size_t stackSize);
  ipc::IFriendService* GetSession();
  Result AttachCompletionEventReadableHandle(os::SystemEvent* pEvent);

 private:
  static void EntryPoint(void* argument);
  void Invoke();

  mutable os::SdkMutexType m_Mutex;
  ipc::IFriendService* m_Session;
  os::ThreadType m_Thread;
  bool m_IsThreadCreated;
  os::SystemEventType m_CompletionEvent;
  bool m_IsCompletionEventInitialized;
  bool m_IsCompletionEventAttached;
  AsyncMemoryAllocator m_Allocator;
  AsyncFunctionBase* m_Function;
  Result m_Result;
};

}
