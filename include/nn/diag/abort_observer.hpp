#pragma once

#include <stdint.h>

namespace nn::diag {

struct AbortInfo;
struct SdkAbortInfo;

struct AbortObserverHolder {
  void (*callback)(const AbortInfo&);
  AbortObserverHolder* next;
  uint8_t registered;
  uint8_t reserved[7];
};

struct SdkAbortObserverHolder {
  void (*callback)(const SdkAbortInfo&);
  SdkAbortObserverHolder* next;
  uint8_t registered;
  uint8_t reserved[7];
};

void InitializeAbortObserverHolder(AbortObserverHolder* holder,
                                   void (*callback)(const AbortInfo&));
void RegisterAbortObserver(AbortObserverHolder* holder);
void UnregisterAbortObserver(AbortObserverHolder* holder);
void EnableDefaultAbortObserver(bool enabled);
void InitializeSdkAbortObserverHolder(SdkAbortObserverHolder* holder,
                                      void (*callback)(const SdkAbortInfo&));
void RegisterSdkAbortObserver(SdkAbortObserverHolder* holder);
void UnregisterSdkAbortObserver(SdkAbortObserverHolder* holder);
void InitializeApplicationAbortObserver();

namespace detail {

extern uint8_t g_EnableDefaultAbortObserver;

void DefaultAbortObserver(const AbortInfo& info);
void InvokeAbortObserver(const AbortInfo& info);
void InvokeSdkAbortObserver(const SdkAbortInfo& info);
void ApplicationAbortCallback(const SdkAbortInfo& info);
void DestroyAbortObserverManager(void* manager);

}
}
