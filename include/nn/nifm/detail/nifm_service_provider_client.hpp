#pragma once

#include "nn/nifm/detail/nifm_sf.hpp"

namespace nn::nifm::detail {

class ServiceProviderClient {
 public:
  ServiceProviderClient();
  ~ServiceProviderClient();

  Result GetUserServiceSharedPointer(
    ::nn::sf::SharedPointer<IGeneralService>* pOutService);
  Result GetAdminServiceSharedPointer(
    ::nn::sf::SharedPointer<IGeneralService>* pOutService);
  Result GetSystemServiceSharedPointer(
    ::nn::sf::SharedPointer<IGeneralService>* pOutService);
  void Finalize();
};

}
