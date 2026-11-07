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
    sf::SharedPointer<IBcatService> service;
    sf::SharedPointer<IServiceCreator> creator = g_ServiceCreator;
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
    sf::SharedPointer<IDeliveryCacheStorageService> service;
    sf::SharedPointer<IServiceCreator> creator = g_ServiceCreator;
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
    sf::SharedPointer<IDeliveryCacheStorageService> service;
    sf::SharedPointer<IServiceCreator> creator = g_ServiceCreator;
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
