#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"
#include "nn/os/sdk_mutex.hpp"

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

namespace {

struct HipcClientManager;

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
};

ServiceState g_State;

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
