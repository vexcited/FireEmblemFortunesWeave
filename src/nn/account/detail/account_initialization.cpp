#include <mutex>

#include "nn/account/detail/account_object_holder.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::account::detail {

namespace {

struct InitializationState {
  int count;
  os::SdkMutex mutex;
};

InitializationState g_InitializationState;
InitializationInfo g_InitializationInfo;
ObjectHolder g_ObjectHolder;

template <typename Acquire>
[[gnu::always_inline]] void InitializeImpl(Acquire acquire) {
  std::lock_guard<os::SdkMutex> lock(g_InitializationState.mutex);
  if (g_InitializationState.count == 0) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(acquire());
  }
  else {
    NN_ABORT_UNLESS(g_InitializationState.count != -1);
  }
  ++g_InitializationState.count;
}

}

void InitializeForSystemService() {
  InitializeImpl([] { return g_ObjectHolder.AcquireForSystemService(); });
}

void InitializeForAdministrator() {
  InitializeImpl([] { return g_ObjectHolder.AcquireForAdministrator(); });
}

void InitializeForSystemProcess() {
  InitializeImpl([] { return g_ObjectHolder.AcquireForSystemProcess(); });
}

void InitializeForSystemProcessWithProfileEditor() {
  InitializeImpl([] {
    return g_ObjectHolder.AcquireForSystemProcessWithProfileEditor();
  });
}

void InitializeForSystemProcessAsAdministrator() {
  InitializeImpl([] {
    return g_ObjectHolder.AcquireForSystemProcessAsAdministrator();
  });
}

void InitializeWith(
  sf::SharedPointer<IAccountServiceForAdministrator>&& service) {
  InitializeImpl([&service] {
    return g_ObjectHolder.InitializeWith(static_cast<
      sf::SharedPointer<IAccountServiceForAdministrator>&&>(service));
  });
}

void Finalize() {
  std::lock_guard<os::SdkMutex> lock(g_InitializationState.mutex);
  if (g_InitializationState.count == 1) {
    g_ObjectHolder.Release();
    ClientUserHandleStore::Clear();
  }
  else {
    NN_ABORT_UNLESS(g_InitializationState.count != 0);
  }
  --g_InitializationState.count;
}

bool IsInitialized() {
  std::lock_guard<os::SdkMutex> lock(g_InitializationState.mutex);
  return g_InitializationState.count != 0;
}

InitializationInfo GetInitializationInfo() {
  return g_InitializationInfo;
}

IAccountServiceBase* GetAccountServiceObjectBase() {
  return g_ObjectHolder.GetBase();
}

IAccountServiceForApplication* GetAccountServiceObjectForApplication() {
  return g_ObjectHolder.GetForApplication();
}

IAccountServiceForSystemService* GetAccountServiceObjectForSystemService() {
  return g_ObjectHolder.GetForSystemService();
}

IAccountServiceForSystemServiceWithProfileEditor*
GetAccountServiceObjectForSystemServiceWithProfileEditor() {
  return g_ObjectHolder.GetForSystemServiceWithProfileEditor();
}

IAccountServiceForAdministrator* GetAccountServiceObjectForAdministrator() {
  return g_ObjectHolder.GetForAdministrator();
}

}
