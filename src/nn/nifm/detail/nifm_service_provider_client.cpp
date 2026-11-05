#include "nn/nifm/detail/nifm_service_provider_client.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::nifm::detail {

class IStaticService : public ::nn::sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result CreateGeneralService(
    const ::nn::sf::Out<::nn::sf::SharedPointer<IGeneralService>>&
      pOutService,
    uint64_t processId) = 0;
};

struct HipcClientManager;

struct ServiceFactory {
  HipcClientManager* pManager;
  const char* name;
  void* pAllocator;
};

// Both helpers are template code of the hipc client manager in this unit.
[[gnu::visibility("hidden")]] Result CreateStaticService(
  ServiceFactory* pFactory,
  ::nn::sf::SharedPointer<IStaticService>* pOutService);
[[gnu::visibility("hidden")]] void ReleaseHipcClientManager(
  HipcClientManager* pManager);

namespace {

struct ShimLibraryObjectHolder {
  IStaticService* pObject;
  os::SdkMutexType mutex;
  int referenceCount;
  void (*release)(HipcClientManager* pManager);
  HipcClientManager* pContext;
};

struct ServiceState {
  ShimLibraryObjectHolder holder;
  alignas(16) char manager[0x340];

  HipcClientManager* GetManager() {
    return reinterpret_cast<HipcClientManager*>(manager);
  }
};

ServiceState g_State;

[[gnu::always_inline]] inline Result GetServiceSharedPointer(
  ::nn::sf::SharedPointer<IGeneralService>* pOutService, const char* name) {
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
    ::nn::sf::SharedPointer<IStaticService> service;
    const Result result = CreateStaticService(&factory, &service);
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

  ::nn::sf::SharedPointer<IStaticService> service(holder.pObject, true);
  return service->CreateGeneralService(
    ::nn::sf::Out<::nn::sf::SharedPointer<IGeneralService>>(pOutService), 0);
}

}

Result ServiceProviderClient::GetUserServiceSharedPointer(
  ::nn::sf::SharedPointer<IGeneralService>* pOutService) {
  return GetServiceSharedPointer(pOutService, "nifm:u");
}

Result ServiceProviderClient::GetAdminServiceSharedPointer(
  ::nn::sf::SharedPointer<IGeneralService>* pOutService) {
  return GetServiceSharedPointer(pOutService, "nifm:a");
}

Result ServiceProviderClient::GetSystemServiceSharedPointer(
  ::nn::sf::SharedPointer<IGeneralService>* pOutService) {
  return GetServiceSharedPointer(pOutService, "nifm:s");
}

void ServiceProviderClient::Finalize() {
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

}
