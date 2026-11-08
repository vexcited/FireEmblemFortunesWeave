#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/detail/nifm_service_provider_client.hpp"
#include "nn/nifm/nifm_api.hpp"
#include "nn/socket/socket_api.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::nifm {

namespace detail {

enum ShutdownPolicy : int32_t {
  ShutdownPolicy_Normal,
  ShutdownPolicy_Forced,
};

}

namespace {

enum ServiceType : int32_t {
  ServiceType_None,
  ServiceType_User,
  ServiceType_System,
  ServiceType_Admin,
};

constexpr Result ResultInitializedWithLowerPrivilege = {0xcc6e};

bool g_IsInitialized;
alignas(detail::ServiceProviderClient)
  uint8_t g_ServiceProviderClientStorage[sizeof(detail::ServiceProviderClient)];
os::SdkMutexType g_NetworkConnectionMutex;
os::SdkMutexType g_ScanRequestClientMutex;
ServiceType g_ServiceType;
::nn::sf::SharedPointer<detail::IGeneralService> g_GeneralService;
NetworkConnection* g_pNetworkConnection;
detail::ScanRequestClient* g_pScanRequestClient;
os::SdkRecursiveMutexType g_Mutex;
detail::ServiceProviderClient* g_pServiceProviderClient;
alignas(8) uint8_t g_ScanRequestClientStorage[
  sizeof(detail::ScanRequestClient)];
alignas(8) uint8_t g_NetworkConnectionStorage[sizeof(NetworkConnection)];

bool IsInitialized() {
  g_Mutex.Lock();
  bool isInitialized = g_IsInitialized;
  g_Mutex.Unlock();
  return isInitialized;
}

Result Initialize(ServiceType type) {
  g_Mutex.Lock();
  Result result = Result{};
  if (IsInitialized()) {
    if (g_ServiceType < type) {
      result = ResultInitializedWithLowerPrivilege;
    }
  }
  else {
    if (g_pServiceProviderClient == nullptr) {
      g_pServiceProviderClient = new (g_ServiceProviderClientStorage)
        detail::ServiceProviderClient();
    }
    if (!g_GeneralService) {
      switch (type) {
        case ServiceType_Admin:
          result = g_pServiceProviderClient->GetAdminServiceSharedPointer(
            &g_GeneralService);
          break;
        case ServiceType_System:
          result = g_pServiceProviderClient->GetSystemServiceSharedPointer(
            &g_GeneralService);
          break;
        default:
          result = g_pServiceProviderClient->GetUserServiceSharedPointer(
            &g_GeneralService);
          break;
      }
    }
    if (result.IsSuccess()) {
      g_ServiceType = type;
      g_IsInitialized = true;
    }
  }
  g_Mutex.Unlock();
  return result;
}

[[gnu::noinline]] Result Finalize(ServiceType type) {
  g_Mutex.Lock();
  if (IsInitialized() && g_ServiceType == type) {
    if (g_pNetworkConnection != nullptr) {
      g_pNetworkConnection->~NetworkConnection();
      g_pNetworkConnection = nullptr;
    }
    if (g_pScanRequestClient != nullptr) {
      g_pScanRequestClient->~ScanRequestClient();
      g_pScanRequestClient = nullptr;
    }
    g_ServiceType = ServiceType_None;
    g_GeneralService.Reset();
    g_pServiceProviderClient->Finalize();
    g_IsInitialized = false;
  }
  g_Mutex.Unlock();
  return Result{};
}

}

namespace detail {

int ShutdownSockets(ShutdownPolicy policy) {
  socket::ShutdownAllSocketsMask mask;
  switch (policy) {
    case ShutdownPolicy_Normal:
      mask = static_cast<socket::ShutdownAllSocketsMask>(1);
      break;
    case ShutdownPolicy_Forced:
      mask = static_cast<socket::ShutdownAllSocketsMask>(5);
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  // Any IPv4 address, laid out as nn::socket::SockAddrIn.
  struct {
    uint8_t length;
    uint8_t family;
    uint16_t port;
    uint32_t address;
    uint8_t zero[8];
  } any = {16, 2, 0, 0, {}};
  return socket::ShutdownAllSockets(
    reinterpret_cast<const socket::SockAddr*>(&any), sizeof(any), mask);
}

Result GetGeneralServicePointer(
  ::nn::sf::SharedPointer<IGeneralService>* pOutService) {
  if (!IsInitialized()) {
    return ResultNotInitialized;
  }
  *pOutService = g_GeneralService;
  return Result{};
}

Result GetNetworkConnectionPointer(NetworkConnection** pOutConnection) {
  if (!IsInitialized()) {
    return ResultNotInitialized;
  }
  g_NetworkConnectionMutex.Lock();
  if (g_pNetworkConnection == nullptr) {
    g_pNetworkConnection = new (g_NetworkConnectionStorage)
      NetworkConnection();
  }
  g_NetworkConnectionMutex.Unlock();
  *pOutConnection = g_pNetworkConnection;
  return Result{};
}

Result GetScanRequestClientPointer(ScanRequestClient** pOutClient) {
  if (!IsInitialized()) {
    return ResultNotInitialized;
  }
  g_ScanRequestClientMutex.Lock();
  if (g_pScanRequestClient == nullptr) {
    g_pScanRequestClient = new (g_ScanRequestClientStorage)
      ScanRequestClient(os::EventClearMode_AutoClear);
  }
  g_ScanRequestClientMutex.Unlock();
  *pOutClient = g_pScanRequestClient;
  return Result{};
}

Result GetNetworkConnectionResult() {
  if (!IsInitialized()) {
    return ResultNotInitialized;
  }
  g_NetworkConnectionMutex.Lock();
  if (g_pNetworkConnection == nullptr) {
    g_pNetworkConnection = new (g_NetworkConnectionStorage)
      NetworkConnection();
  }
  g_NetworkConnectionMutex.Unlock();
  return g_pNetworkConnection->GetResult();
}

}

Result Initialize() {
  return Initialize(ServiceType_User);
}

Result InitializeAdmin() {
  return Initialize(ServiceType_Admin);
}

Result InitializeSystem() {
  return Initialize(ServiceType_System);
}

void FinalizeForTest() {
  Finalize(ServiceType_User);
}

void FinalizeAdminForTest() {
  Finalize(ServiceType_Admin);
}

void FinalizeSystemForTest() {
  Finalize(ServiceType_System);
}

}
