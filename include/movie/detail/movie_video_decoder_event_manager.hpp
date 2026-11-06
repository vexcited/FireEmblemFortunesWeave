#pragma once

#include <new>
#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_gs_handles.hpp"
#include "nn/os/condition_variable.hpp"
#include "nn/os/event.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/syncpt/syncpt_sdk.hpp"

namespace nn::syncpt::sdk {

struct SyncPointEventType {
  alignas(8) uint8_t storage[128];
};

}

namespace nn::gsdrv::function {

template <typename Signature, size_t Size, size_t Alignment>
class TTrivialInplaceFunctor;

// Calls a trivially copyable functor stored in place.
template <typename R, typename... Args, size_t Size, size_t Alignment>
class TTrivialInplaceFunctor<R(Args...), Size, Alignment> {
public:
  TTrivialInplaceFunctor() = default;

  template <typename F>
  explicit TTrivialInplaceFunctor(F function)
    : m_pInvoke(&Invoke<F>), m_Storage() {
    new (m_Storage) F(function);
  }

  R operator()(Args... args) {
    return m_pInvoke(m_Storage, args...);
  }

private:
  template <typename F>
  static R Invoke(void* storage, Args... args) {
    return (*static_cast<F*>(storage))(args...);
  }

  R (*m_pInvoke)(void* storage, Args... args);
  alignas(Alignment) uint8_t m_Storage[Size];
};

}

namespace movie::detail {

// Runs the callback of the sync point of the last decoded frame on the
// thread of Loop. Pause and Stop keep the mutex until Resume or Finalize.
class VideoDecoderEventManager {
public:
  using Callback = nn::gsdrv::function::TTrivialInplaceFunctor<void(), 16, 8>;

  void Initialize();
  void Finalize();
  void RegisterImpl(Callback callback);
  void UnregisterSyncPointCallback();
  void Stop();
  void Loop();
  void Pause();
  void Resume();
  void SetFence(nn::gs::NativeSyncHandle fence);

private:
  nn::os::MutexType m_Mutex;
  nn::os::MultiWaitType m_MultiWait;
  nn::os::SemaphoreType m_PauseSemaphore;
  nn::os::MultiWaitHolderType m_PauseHolder;
  nn::os::EventType m_StopEvent;
  nn::os::MultiWaitHolderType m_StopHolder;
  nn::os::ConditionVariableType m_ResumeCondition;
  nn::syncpt::sdk::SyncPointEventType m_SyncPointEvent;
  nn::os::MultiWaitHolderType m_SyncPointHolder;
  Callback m_Callback;
  bool m_IsSyncPointLinked;
};

}
