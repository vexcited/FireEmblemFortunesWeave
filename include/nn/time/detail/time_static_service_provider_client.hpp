#pragma once

#include "nn/result.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/time/detail/time_shared_memory_client.hpp"

namespace nn::time::detail::service {

class StaticServiceProviderClient {
 public:
  using StaticService = timesrv::detail::service::IStaticService;

  StaticServiceProviderClient();
  ~StaticServiceProviderClient();

  Result GetUserStaticServiceSharedPointer(
    sf::SharedPointer<StaticService>* pOutService);
  Result GetAdminStaticServiceSharedPointer(
    sf::SharedPointer<StaticService>* pOutService);
  Result GetNetworkSyncStaticServiceSharedPointer(
    sf::SharedPointer<StaticService>* pOutService);
  Result GetRepairStaticServiceSharedPointer(
    sf::SharedPointer<StaticService>* pOutService);
  Result GetSystemUserStaticServiceSharedPointer(
    sf::SharedPointer<StaticService>* pOutService);
  void Finalize();
};

}
