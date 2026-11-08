#pragma once

#include <memory>

#include "nn/async/async_detail.hpp"
#include "nn/os/event.hpp"
#include "nn/os/event_class.hpp"
#include "nn/os/multi_wait.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::async {

class CancellationObserver {
public:
  virtual ~CancellationObserver();

  void NotifyCancel();

protected:
  virtual void OnCancel() = 0;

private:
  friend class detail::CancellationState;

  util::IntrusiveListNode m_Node;
};

bool CanReceiveCancellationRequest(const CancellationToken& token);
void RegisterCancellationObserver(const CancellationToken& token,
  CancellationObserver* pObserver);
void UnregisterCancellationObserver(const CancellationToken& token,
  CancellationObserver* pObserver);
void InitializeMultiWaitHolder(os::MultiWaitHolderType* pHolder,
  const CancellationToken& token);
const CancellationToken& GetCurrentCancellationToken();

class CancellationTokenSource {
public:
  explicit CancellationTokenSource(MemoryResource* resource);

  CancellationToken GetToken() const;
  void RequestCancel();

private:
  std::shared_ptr<detail::CancellationState> m_State;
};

}

namespace nn::async::detail {

class CancellationState {
public:
  CancellationState() {}
  ~CancellationState();

  void RequestCancel();
  void RegisterObserver(CancellationObserver* pObserver);
  void UnregisterObserver(CancellationObserver* pObserver);

private:
  friend void InitializeMultiWaitHolder(os::MultiWaitHolderType* pHolder,
    CancellationState* pState);
  friend class nn::async::CancellationToken;

  using ObserverList = util::IntrusiveList<CancellationObserver,
    util::IntrusiveListMemberNodeTraits<CancellationObserver,
      &CancellationObserver::m_Node>>;

  os::Event m_Event{os::EventClearMode_ManualClear};
  os::SdkMutexType m_Mutex = {};
  ObserverList m_Observers;
};

void InitializeMultiWaitHolder(os::MultiWaitHolderType* pHolder,
  CancellationState* pState);

class CancellationTokenAccessor {
public:
  static CancellationToken GetToken(
    std::shared_ptr<CancellationState> state);
  static bool CanReceiveCancellationRequest(const CancellationToken& token);
  static void RegisterObserver(const CancellationToken& token,
    CancellationObserver* pObserver);
  static void UnregisterObserver(const CancellationToken& token,
    CancellationObserver* pObserver);
  static CancellationState* GetState(const CancellationToken& token) {
    return token.m_State.get();
  }
};

enum DebugComponent : int32_t {
  DebugComponent_All = 1,
};

void EnableDebugLogging(DebugComponent component);
void DisableDebugLogging(DebugComponent component);
bool IsDebugLoggingEnabled(DebugComponent component);

}
