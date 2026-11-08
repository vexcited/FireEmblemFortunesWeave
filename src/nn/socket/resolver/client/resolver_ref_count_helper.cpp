#include <stdint.h>

#include <atomic>

#include "nn/os/event.hpp"
#include "nn/os/timer_event.hpp"

namespace nn::os {

void FinalizeEvent(EventType* event);
void SignalEvent(EventType* event);
void WaitEvent(EventType* event);
void ClearEvent(EventType* event);

}

namespace nn::socket::resolver {

namespace {

constexpr uint32_t ResolverCallsEnabledFlag = 0x80000000;

struct State {
  bool isInitialized;
  std::atomic<uint32_t> count;
  os::EventType event;
};

State g_State;

[[gnu::always_inline]] inline void DecrementAndSignal() {
  const uint32_t previous = g_State.count.fetch_sub(1);
  const uint32_t current = g_State.count.load();
  if (previous == 1 && (current & ResolverCallsEnabledFlag) == 0 &&
    g_State.isInitialized) {
    os::SignalEvent(&g_State.event);
  }
}

}

void RefCountHelperInitialize() {
  if (g_State.isInitialized) {
    return;
  }
  os::InitializeEvent(&g_State.event, false,
    os::EventClearMode_AutoClear);
  g_State.isInitialized = true;
}

void RefCountHelperFinalize() {
  if (g_State.isInitialized == true) {
    g_State.isInitialized = false;
    os::FinalizeEvent(&g_State.event);
  }
}

void DecrementSocketAndSignalIfNeeded() {
  DecrementAndSignal();
}

bool IncrementSocketIfNeeded() {
  g_State.count.fetch_add(1);
  const uint32_t current = g_State.count.load();
  if ((current & ResolverCallsEnabledFlag) == 0) {
    DecrementAndSignal();
  }
  return current >> 31;
}

bool AreResolverCallsEnabled() {
  return g_State.count.load() >> 31;
}

void WaitForAllResolverCallsToComplete() {
  if (g_State.isInitialized != true) {
    return;
  }
  while (g_State.count.load() != 0) {
    os::WaitEvent(&g_State.event);
  }
}

void EnableResolverCalls() {
  if (g_State.isInitialized == true) {
    os::ClearEvent(&g_State.event);
  }
  g_State.count.store(ResolverCallsEnabledFlag);
}

void DisableResolverCalls() {
  g_State.count.fetch_and(~ResolverCallsEnabledFlag);
}

}
