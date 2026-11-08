#include "nn/jit/jit_api.hpp"

#include <atomic>

#include "nn/am/interfaces.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::jit {

namespace detail {

struct HipcClientManager;

struct ServiceFactory {
  HipcClientManager* pManager;
  const char* name;
  void* pAllocator;
};

// Both helpers are template code of the hipc client manager in this unit.
[[gnu::visibility("hidden")]] Result CreateJitService(
  ServiceFactory* pFactory, sf::SharedPointer<jitsrv::IJitService>* pOut);
[[gnu::visibility("hidden")]] void ReleaseHipcClientManager(
  HipcClientManager* pManager);

}

namespace {

using detail::HipcClientManager;
using detail::ServiceFactory;

// The application asks am for the jit permission before opening the service.
constexpr int PrepareForJitSlot = 74;

struct ShimLibraryObjectHolder {
  jitsrv::IJitService* pObject;
  os::SdkMutexType mutex;
  int referenceCount;
  void (*release)(HipcClientManager* pManager);
  HipcClientManager* pContext;
};

struct ServiceState {
  std::atomic<bool> isEnvironmentUsed;
  ShimLibraryObjectHolder holder;
  detail::JitEnvironmentImpl environment;
  alignas(16) char manager[0x4b0];

  HipcClientManager* GetManager() {
    return reinterpret_cast<HipcClientManager*>(manager);
  }
};

ServiceState g_State;

}

Result Initialize() {
  am::Interface* object = am::GetApplicationFunctions();
  using Function = Result (*)(am::Interface*);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    reinterpret_cast<Function>(object->vtable[PrepareForJitSlot])(object));

  ServiceFactory factory = {g_State.GetManager(), "jit:u", nullptr};
  ShimLibraryObjectHolder& holder = g_State.holder;
  holder.mutex.Lock();
  if (holder.referenceCount != 0) {
    if (holder.release == nullptr) {
      holder.release = detail::ReleaseHipcClientManager;
      holder.pContext = g_State.GetManager();
    }
    ++holder.referenceCount;
  }
  else {
    sf::SharedPointer<jitsrv::IJitService> service;
    const Result result = detail::CreateJitService(&factory, &service);
    if (result.IsFailure()) {
      service.Reset();
      holder.mutex.Unlock();
      return result;
    }
    holder.referenceCount = 1;
    holder.pObject = service.Detach();
    holder.release = detail::ReleaseHipcClientManager;
    holder.pContext = g_State.GetManager();
  }
  holder.mutex.Unlock();
  return Result{0};
}

sf::SharedPointer<jitsrv::IJitService> GetJitService() {
  return sf::SharedPointer<jitsrv::IJitService>(g_State.holder.pObject, true);
}

void Finalize() {
  ShimLibraryObjectHolder& holder = g_State.holder;
  holder.mutex.Lock();
  if (--holder.referenceCount == 0) {
    holder.pObject->Release();
    holder.pObject = nullptr;
    if (holder.release != nullptr) {
      holder.release(holder.pContext);
    }
    holder.release = nullptr;
    holder.pContext = nullptr;
  }
  holder.mutex.Unlock();
}

// Only one environment exists at a time.
JitHandle NewJitEnvironment() {
  NN_ABORT_UNLESS(!g_State.isEnvironmentUsed.exchange(true));
  return JitHandle{&g_State.environment};
}

void CloseJitEnvironment(JitHandle handle) {
  NN_ABORT_UNLESS(g_State.isEnvironmentUsed.load());
  NN_ABORT_UNLESS(handle.pImpl == &g_State.environment);
  g_State.environment = {};
  g_State.isEnvironmentUsed.store(false);
}

detail::JitEnvironmentImpl* GetImpl(JitHandle handle) {
  return handle.pImpl;
}

}
