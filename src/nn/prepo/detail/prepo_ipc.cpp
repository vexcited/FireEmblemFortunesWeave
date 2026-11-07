#include "nn/prepo/detail/prepo_shim_library_global.hpp"

namespace nn::prepo::detail::ipc {

struct ServiceState {
  os::SdkMutexType mutex;
  IPrepoService* pService;
};

// The session manager object is shared and freed with the last reference.
struct SessionHolder {
  sf::IServiceObject* pObject;
  os::SdkMutexType mutex;
  int referenceCount;
  void (*pFinalizer)(void* pArgument);
  void* pArgument;
};

extern ServiceState g_ServiceState;
extern SessionHolder g_SessionHolder;

void Finalize() {
  g_ServiceState.mutex.Lock();
  if (g_ServiceState.pService != nullptr) {
    g_ServiceState.pService->Release();
    g_ServiceState.pService = nullptr;
  }
  g_SessionHolder.mutex.Lock();
  if (--g_SessionHolder.referenceCount == 0) {
    g_SessionHolder.pObject->Release();
    void (*pFinalizer)(void*) = g_SessionHolder.pFinalizer;
    g_SessionHolder.pObject = nullptr;
    if (pFinalizer != nullptr) {
      pFinalizer(g_SessionHolder.pArgument);
    }
    g_SessionHolder.pFinalizer = nullptr;
    g_SessionHolder.pArgument = nullptr;
  }
  g_SessionHolder.mutex.Unlock();
  g_ServiceState.mutex.Unlock();
}

IPrepoService* GetPrepoService() {
  g_ServiceState.mutex.Lock();
  IPrepoService* pService = g_ServiceState.pService;
  g_ServiceState.mutex.Unlock();
  return pService;
}

}
