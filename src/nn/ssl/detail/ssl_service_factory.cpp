#include "nn/diag/diag_abort.hpp"
#include "nn/sf/client_session.hpp"
#include "nn/sf/hipc.hpp"
#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"

namespace nn::ssl::detail {

namespace {

nn::sf::SharedPointer<sf::ISslService> g_Service;
nn::sf::SharedPointer<sf::ISslServiceForSystem> g_SystemService;
nn::sf::hipc::client::SessionManagerStorage g_SessionManager;

constexpr uint32_t ResultSmNotAllowedValue = 0x615;

}

// Unexported template instances at 0x5ce700 and 0x5cb8d0 that wrap a service
// handle into a proxy object owned by the session manager.
Result CreateServiceObject(
  nn::sf::hipc::client::SessionManagerStorage* pManager,
  nn::sf::SharedPointer<sf::ISslService>* pOut,
  SslMemoryManager::SfAllocator* pAllocator, uint32_t handle);
Result CreateServiceObject(
  nn::sf::hipc::client::SessionManagerStorage* pManager,
  nn::sf::SharedPointer<sf::ISslServiceForSystem>* pOut,
  SslMemoryManager::SfAllocator* pAllocator, uint32_t handle);

Result ISslServiceFactory::Initialize(uint32_t concurrencyLimit,
  bool isSystem) {
  if (g_Service.Get() != nullptr) {
    return ResultLibraryAlreadyInitialized();
  }

  SslMemoryManager::SfAllocator* pAllocator =
    SslMemoryManager::GetSfAllocator();
  nn::sf::hipc::InitializeHipcServiceResolution();

  Result result;
  if (isSystem) {
    uint32_t handle = 0;
    result = Result{nn::sf::hipc::ConnectToHipcService(&handle, "ssl:s")};
    if (result.IsSuccess()) {
      result = CreateServiceObject(&g_SessionManager, &g_SystemService,
        pAllocator, handle);
    }

    nn::sf::hipc::FinalizeHipcServiceResolution();
    g_Service = g_SystemService;
  }
  else {
    uint32_t handle = 0;
    result = Result{nn::sf::hipc::ConnectToHipcService(&handle, "ssl")};
    if (result.IsSuccess()) {
      result = CreateServiceObject(&g_SessionManager, &g_Service, pAllocator,
        handle);
    }

    nn::sf::hipc::FinalizeHipcServiceResolution();
  }

  if (result.IsFailure()) {
    return result.GetInnerValueForDebug() == ResultSmNotAllowedValue ?
      ResultNoServiceAccess() : ResultServiceUnavailable();
  }

  g_SessionManager.resize_mutex.Lock();
  uint32_t sessionCount = g_SessionManager.manager.session_count;
  g_SessionManager.resize_mutex.Unlock();
  if (sessionCount == concurrencyLimit) {
    return Result{};
  }

  g_SessionManager.resize_mutex.Lock();
  NN_ABORT_UNLESS(static_cast<int>(concurrencyLimit) <=
    static_cast<int>(g_SessionManager.manager.capacity));
  result = Result{nn::sf::hipc::client::ResizeSessions(
    &g_SessionManager.manager, concurrencyLimit)};
  g_SessionManager.resize_mutex.Unlock();
  return result;
}

Result ISslServiceFactory::Finalize() {
  g_SystemService.Reset();
  g_Service.Reset();
  g_SessionManager.resize_mutex.Lock();
  nn::sf::hipc::client::ResizeSessions(&g_SessionManager.manager, 0);
  g_SessionManager.resize_mutex.Unlock();
  return Result{};
}

Result ISslServiceFactory::CreateISslService(
  nn::sf::SharedPointer<sf::ISslService>* pOut) {
  if (g_Service.Get() == nullptr) {
    return ResultInternalError();
  }

  *pOut = g_Service;
  return Result{};
}

Result ISslServiceFactory::CreateISslServiceForSystem(
  nn::sf::SharedPointer<sf::ISslServiceForSystem>* pOut) {
  if (g_SystemService.Get() == nullptr) {
    return ResultInternalError();
  }

  *pOut = g_SystemService;
  return Result{};
}

}
