#include <mutex>
#include <new>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"
#include "nn/time/detail/time_static_service_provider_client.hpp"
#include "nn/time/time_adjustable_system_clock.hpp"
#include "nn/time/time_api.hpp"
#include "nn/time/time_standard_steady_clock.hpp"
#include "nn/time/time_system_clock_service.hpp"
#include "nn/time/time_time_zone_api.hpp"

namespace nn::time {

using timesrv::detail::service::IStaticService;
using timesrv::detail::service::ISteadyClock;
using timesrv::detail::service::ISystemClock;
using timesrv::detail::service::ITimeZoneService;

sf::SharedPointer<IStaticService> g_pStaticService;
sf::SharedPointer<ITimeZoneService> g_pTimeZoneService;
detail::SharedMemoryClientStorage g_SharedMemoryClient;

namespace {

enum InitializeMode {
  InitializeMode_None,
  InitializeMode_User,
  InitializeMode_Admin,
  InitializeMode_NetworkSync,
  InitializeMode_Repair,
  InitializeMode_SystemUser,
};

const Result ResultNotInitialized = {0x74};

bool g_IsAdjustableClockAdjusted;
os::SdkMutex g_Mutex;
int g_InitializeCount;
InitializeMode g_InitializeMode;
sf::SharedPointer<ISystemClock> g_pStandardLocalSystemClock;
sf::SharedPointer<ISystemClock> g_pStandardNetworkSystemClock;
sf::SharedPointer<ISystemClock> g_pEphemeralNetworkSystemClock;
sf::SharedPointer<ISteadyClock> g_pStandardSteadyClock;

detail::service::StaticServiceProviderClient& GetServiceProvider() {
  static detail::service::StaticServiceProviderClient s_Provider;
  return s_Provider;
}

template <typename Interface>
void MoveSharedPointer(sf::SharedPointer<Interface>* pOut,
  sf::SharedPointer<Interface>* pIn) {
  sf::SharedPointer<Interface>(pIn->Detach(), false).Swap(*pOut);
}

void DestroySharedMemoryClient() {
  if (g_SharedMemoryClient.isInitialized) {
    g_SharedMemoryClient->~SharedMemoryClient();
    g_SharedMemoryClient.isInitialized = false;
  }
}

Result GetStaticService(sf::SharedPointer<IStaticService>* pOutService,
  InitializeMode mode) {
  detail::service::StaticServiceProviderClient& provider =
    GetServiceProvider();
  switch (mode) {
    case InitializeMode_User:
      return provider.GetUserStaticServiceSharedPointer(pOutService);
    case InitializeMode_Admin:
      return provider.GetAdminStaticServiceSharedPointer(pOutService);
    case InitializeMode_NetworkSync:
      return provider.GetNetworkSyncStaticServiceSharedPointer(pOutService);
    case InitializeMode_Repair:
      return provider.GetRepairStaticServiceSharedPointer(pOutService);
    default:
      return provider.GetSystemUserStaticServiceSharedPointer(pOutService);
  }
}

class ProviderFinalizer {
 public:
  ~ProviderFinalizer() {
    if (g_pTimeZoneService == nullptr) {
      GetServiceProvider().Finalize();
    }
  }
};

Result InitializeImpl(InitializeMode mode) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);

  if (g_InitializeCount != 0) {
    NN_ABORT_UNLESS(mode == g_InitializeMode);
    ++g_InitializeCount;
    return Result{0};
  }

  sf::SharedPointer<IStaticService> staticService;
  NN_RESULT_DO(GetStaticService(&staticService, mode));

  ProviderFinalizer finalizer;
  sf::SharedPointer<ITimeZoneService> timeZoneService;
  NN_RESULT_DO(staticService->GetTimeZoneService(
    sf::Out<sf::SharedPointer<ITimeZoneService>>(&timeZoneService)));

  MoveSharedPointer(&g_pStaticService, &staticService);
  MoveSharedPointer(&g_pTimeZoneService, &timeZoneService);

  DestroySharedMemoryClient();
  new (g_SharedMemoryClient.storage) detail::SharedMemoryClient(
    g_pStaticService);
  g_SharedMemoryClient.isInitialized = true;

  if (!g_IsAdjustableClockAdjusted) {
    AdjustableUserSystemClock::Adjust();
    AdjustableNetworkSystemClock::Adjust();
    g_IsAdjustableClockAdjusted = true;
  }

  ++g_InitializeCount;
  g_InitializeMode = mode;
  return Result{0};
}

template <typename Interface>
Result GetClockService(sf::SharedPointer<Interface>* pOutService,
  sf::SharedPointer<Interface>* pCache,
  Result (IStaticService::*getter)(
    const sf::Out<sf::SharedPointer<Interface>>&)) {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);

  if (g_pStaticService == nullptr) {
    return ResultNotInitialized;
  }

  if (*pCache == nullptr) {
    NN_RESULT_DO((g_pStaticService.Get()->*getter)(
      sf::Out<sf::SharedPointer<Interface>>(pCache)));
  }

  *pOutService = *pCache;
  return Result{0};
}

}

Result Initialize() {
  return InitializeImpl(InitializeMode_User);
}

Result InitializeForMenu() {
  return InitializeImpl(InitializeMode_Admin);
}

Result InitializeForSystem() {
  return InitializeImpl(InitializeMode_NetworkSync);
}

Result InitializeForRepair() {
  return InitializeImpl(InitializeMode_Repair);
}

Result InitializeForSystemUser() {
  return InitializeImpl(InitializeMode_SystemUser);
}

bool IsInitialized() {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);
  return g_InitializeCount != 0;
}

Result Finalize() {
  std::lock_guard<os::SdkMutex> lock(g_Mutex);

  if (g_InitializeCount != 0) {
    if (--g_InitializeCount == 0) {
      g_pStaticService.Reset();
      g_pStandardLocalSystemClock.Reset();
      g_pStandardNetworkSystemClock.Reset();
      g_pStandardSteadyClock.Reset();
      g_pTimeZoneService.Reset();
      g_pEphemeralNetworkSystemClock.Reset();
      DestroySharedMemoryClient();
      GetServiceProvider().Finalize();
      g_InitializeMode = InitializeMode_None;
    }
  }

  return Result{0};
}

Result GetStandardLocalSystemClockService(
  sf::SharedPointer<ISystemClock>* pOutService) {
  return GetClockService(pOutService, &g_pStandardLocalSystemClock,
    &IStaticService::GetStandardLocalSystemClock);
}

Result GetEphemeralNetworkSystemClockService(
  sf::SharedPointer<ISystemClock>* pOutService) {
  return GetClockService(pOutService, &g_pEphemeralNetworkSystemClock,
    &IStaticService::GetEphemeralNetworkSystemClock);
}

Result GetStandardNetworkSystemClockService(
  sf::SharedPointer<ISystemClock>* pOutService) {
  return GetClockService(pOutService, &g_pStandardNetworkSystemClock,
    &IStaticService::GetStandardNetworkSystemClock);
}

Result GetStandardSteadyClockService(
  sf::SharedPointer<ISteadyClock>* pOutService) {
  return GetClockService(pOutService, &g_pStandardSteadyClock,
    &IStaticService::GetStandardSteadyClock);
}

}
