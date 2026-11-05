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

bool g_IsInitialized;
std::atomic<uint32_t> g_Count;
os::EventType g_Event;

[[gnu::always_inline]] inline void DecrementAndSignal() {
  const uint32_t previous = g_Count.fetch_sub(1);
  const uint32_t current = g_Count.load();
  if (previous == 1 && (current & ResolverCallsEnabledFlag) == 0 &&
    g_IsInitialized) {
    os::SignalEvent(&g_Event);
  }
}

}

void RefCountHelperInitialize() {
  if (g_IsInitialized) {
    return;
  }
  os::InitializeEvent(&g_Event, false,
    os::EventClearMode_AutoClear);
  g_IsInitialized = true;
}

void RefCountHelperFinalize() {
  if (g_IsInitialized == true) {
    g_IsInitialized = false;
    os::FinalizeEvent(&g_Event);
  }
}

void DecrementSocketAndSignalIfNeeded() {
  DecrementAndSignal();
}

bool IncrementSocketIfNeeded() {
  g_Count.fetch_add(1);
  const uint32_t current = g_Count.load();
  if ((current & ResolverCallsEnabledFlag) == 0) {
    DecrementAndSignal();
  }
  return current >> 31;
}

bool AreResolverCallsEnabled() {
  return g_Count.load() >> 31;
}

void WaitForAllResolverCallsToComplete() {
  if (g_IsInitialized != true) {
    return;
  }
  while (g_Count.load() != 0) {
    os::WaitEvent(&g_Event);
  }
}

void EnableResolverCalls() {
  if (g_IsInitialized == true) {
    os::ClearEvent(&g_Event);
  }
  g_Count.store(ResolverCallsEnabledFlag);
}

void DisableResolverCalls() {
  g_Count.fetch_and(~ResolverCallsEnabledFlag);
}

}
