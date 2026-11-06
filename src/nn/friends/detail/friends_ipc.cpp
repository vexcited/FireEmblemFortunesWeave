#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/sf/client_session.hpp"

namespace nn::friends::detail::ipc {

class IDaemonSuspendSessionService : public sf::IServiceObject {};

class IServiceCreator : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateFriendService(
    const sf::Out<sf::SharedPointer<IFriendService>>& pOutService) = 0;
  virtual Result CreateNotificationService(
    const sf::Out<sf::SharedPointer<INotificationService>>& pOutService,
    const account::Uid& uid) = 0;
  virtual Result CreateDaemonSuspendSessionService(
    const sf::Out<sf::SharedPointer<IDaemonSuspendSessionService>>&
      pOutService) = 0;
};

struct HipcClientManager;

struct ServiceFactory {
  HipcClientManager* pManager;
  const char* name;
  void* pAllocator;
};

// Both helpers are template code of the hipc client manager in this unit.
[[gnu::visibility("hidden")]] Result CreateServiceCreator(
  ServiceFactory* pFactory, sf::SharedPointer<IServiceCreator>* pOutService);
[[gnu::visibility("hidden")]] void ReleaseHipcClientManager(
  HipcClientManager* pManager);

namespace {

// sm reports a service name that is not registered.
constexpr uint32_t ResultNotRegisteredValue = 0x1015;

struct ShimLibraryObjectHolder {
  IServiceCreator* pObject;
  os::SdkMutexType mutex;
  int referenceCount;
  void (*release)(HipcClientManager* pManager);
  HipcClientManager* pContext;

  sf::SharedPointer<IServiceCreator> GetObject() const {
    return sf::SharedPointer<IServiceCreator>(pObject, true);
  }

  void Finalize() {
    mutex.Lock();
    if (--referenceCount == 0) {
      pObject->Release();
      pObject = nullptr;
      if (release != nullptr) {
        release(pContext);
      }
      release = nullptr;
      pContext = nullptr;
    }
    mutex.Unlock();
  }
};

struct ServiceState {
  os::SdkMutex mutex;
  ShimLibraryObjectHolder holder;
  alignas(16) char manager[0x4b0];
  sf::hipc::client::SessionManagerStorage sessions;

  HipcClientManager* GetManager() {
    return reinterpret_cast<HipcClientManager*>(manager);
  }
};

ServiceState g_State;

[[gnu::always_inline]] inline Result InitializeHolder(const char* name) {
  ServiceFactory factory = {g_State.GetManager(), name, nullptr};
  ShimLibraryObjectHolder& holder = g_State.holder;

  holder.mutex.Lock();
  if (holder.referenceCount != 0) {
    if (holder.release == nullptr) {
      holder.release = ReleaseHipcClientManager;
      holder.pContext = g_State.GetManager();
    }
    ++holder.referenceCount;
  }
  else {
    sf::SharedPointer<IServiceCreator> service;
    const Result result = CreateServiceCreator(&factory, &service);
    if (result.IsFailure()) {
      service.Reset();
      holder.mutex.Unlock();
      return result;
    }
    holder.referenceCount = 1;
    holder.pObject = service.Detach();
    holder.release = ReleaseHipcClientManager;
    holder.pContext = g_State.GetManager();
  }
  holder.mutex.Unlock();
  return Result{0};
}

}

void Initialize() {
  std::lock_guard<os::SdkMutex> lock(g_State.mutex);

  static const char* const Names[] = {
    "friend:u", "friend:v", "friend:m", "friend:s", "friend:a",
  };
  bool initialized = false;
  for (const char* name : Names) {
    const Result result = InitializeHolder(name);
    if (result.IsSuccess()) {
      initialized = true;
      break;
    }
    if (result.GetInnerValueForDebug() != ResultNotRegisteredValue) {
      diag::detail::AbortImpl(&result);
    }
  }
  NN_ABORT_UNLESS(initialized);

  g_State.sessions.resize_mutex.Lock();
  NN_ABORT_UNLESS(4 <= static_cast<int>(g_State.sessions.manager.capacity));
  const Result result = Result{sf::hipc::client::ResizeSessions(
    &g_State.sessions.manager, 4)};
  g_State.sessions.resize_mutex.Unlock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void Finalize() {
  std::lock_guard<os::SdkMutex> lock(g_State.mutex);
  g_State.holder.Finalize();
}

Result CreateFriendService(IFriendService** pOutService) {
  std::lock_guard<os::SdkMutex> lock(g_State.mutex);
  sf::SharedPointer<IFriendService> service;
  NN_RESULT_DO(g_State.holder.GetObject()->CreateFriendService(
    sf::Out<sf::SharedPointer<IFriendService>>(&service)));
  *pOutService = service.Detach();
  return Result{0};
}

Result CreateNotificationService(INotificationService** pOutService,
  const account::Uid& uid) {
  std::lock_guard<os::SdkMutex> lock(g_State.mutex);
  sf::SharedPointer<INotificationService> service;
  NN_RESULT_DO(g_State.holder.GetObject()->CreateNotificationService(
    sf::Out<sf::SharedPointer<INotificationService>>(&service), uid));
  *pOutService = service.Detach();
  return Result{0};
}

Result CreateDaemonSuspendSessionService(
  IDaemonSuspendSessionService** pOutService) {
  std::lock_guard<os::SdkMutex> lock(g_State.mutex);
  sf::SharedPointer<IDaemonSuspendSessionService> service;
  NN_RESULT_DO(g_State.holder.GetObject()->CreateDaemonSuspendSessionService(
    sf::Out<sf::SharedPointer<IDaemonSuspendSessionService>>(&service)));
  *pOutService = service.Detach();
  return Result{0};
}

}
