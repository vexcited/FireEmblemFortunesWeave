#include "nn/os/synchronization.hpp"
#include "nn/time/detail/time_static_service_provider_client.hpp"

namespace nn::time::detail::service {

using timesrv::detail::service::IStaticService;

struct HipcClientManager;

struct ServiceFactory {
  HipcClientManager* pManager;
  const char* name;
  void* pAllocator;
};

// Both helpers are template code of the hipc client manager in this unit.
[[gnu::visibility("hidden")]] Result CreateStaticService(
  ServiceFactory* pFactory, sf::SharedPointer<IStaticService>* pOutService);
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

[[gnu::always_inline]] inline Result GetStaticServiceSharedPointer(
  sf::SharedPointer<IStaticService>* pOutService, const char* name) {
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
    sf::SharedPointer<IStaticService> service;
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

  sf::SharedPointer<IStaticService>(holder.pObject, true).Swap(*pOutService);
  return Result{0};
}

}

StaticServiceProviderClient::StaticServiceProviderClient() {}

StaticServiceProviderClient::~StaticServiceProviderClient() {}

Result StaticServiceProviderClient::GetUserStaticServiceSharedPointer(
  sf::SharedPointer<StaticService>* pOutService) {
  return GetStaticServiceSharedPointer(pOutService, "time:u");
}

Result StaticServiceProviderClient::GetAdminStaticServiceSharedPointer(
  sf::SharedPointer<StaticService>* pOutService) {
  return GetStaticServiceSharedPointer(pOutService, "time:a");
}

Result StaticServiceProviderClient::GetNetworkSyncStaticServiceSharedPointer(
  sf::SharedPointer<StaticService>* pOutService) {
  return GetStaticServiceSharedPointer(pOutService, "time:s");
}

Result StaticServiceProviderClient::GetRepairStaticServiceSharedPointer(
  sf::SharedPointer<StaticService>* pOutService) {
  return GetStaticServiceSharedPointer(pOutService, "time:r");
}

Result StaticServiceProviderClient::GetSystemUserStaticServiceSharedPointer(
  sf::SharedPointer<StaticService>* pOutService) {
  return GetStaticServiceSharedPointer(pOutService, "time:su");
}

void StaticServiceProviderClient::Finalize() {
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
