#include "nn/bcat/detail/bcat_ipc.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::bcat::ipc {

namespace {

os::SdkMutexType g_Mutex;
sf::SharedPointer<IServiceCreator> g_ServiceCreator;

}

Result CreateBcatService(IBcatService** pOutService) {
  g_Mutex.Lock();
  Result result;
  {
    sf::SharedPointer<IServiceCreator> creator = g_ServiceCreator;
    sf::SharedPointer<IBcatService> service;
    result = creator->CreateBcatService(sf::Out(&service), os::ProcessId{});
    if (result.IsSuccess()) {
      *pOutService = service.Detach();
    }
  }
  g_Mutex.Unlock();
  return result;
}

Result CreateDeliveryCacheStorageService(
  IDeliveryCacheStorageService** pOutService) {
  g_Mutex.Lock();
  Result result;
  {
    sf::SharedPointer<IServiceCreator> creator = g_ServiceCreator;
    sf::SharedPointer<IDeliveryCacheStorageService> service;
    result = creator->CreateDeliveryCacheStorageService(sf::Out(&service),
      os::ProcessId{});
    if (result.IsSuccess()) {
      *pOutService = service.Detach();
    }
  }
  g_Mutex.Unlock();
  return result;
}

Result CreateDeliveryCacheStorageService(
  IDeliveryCacheStorageService** pOutService, ApplicationId applicationId) {
  g_Mutex.Lock();
  Result result;
  {
    sf::SharedPointer<IServiceCreator> creator = g_ServiceCreator;
    sf::SharedPointer<IDeliveryCacheStorageService> service;
    result = creator->CreateDeliveryCacheStorageServiceWithApplicationId(
      sf::Out(&service), applicationId);
    if (result.IsSuccess()) {
      *pOutService = service.Detach();
    }
  }
  g_Mutex.Unlock();
  return result;
}

}
