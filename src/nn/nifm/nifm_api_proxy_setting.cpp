#include "nn/nifm/detail/nifm_request_client.hpp"
#include "nn/nifm/nifm_api.hpp"

namespace nn::nifm {

Result GetCurrentProxySetting(ProxySetting* pOutSetting) {
  ::nn::sf::SharedPointer<detail::IGeneralService> service;
  NN_RESULT_DO(detail::GetGeneralServicePointer(&service));
  NetworkProfileDataV2 profile = {};
  NN_RESULT_DO(GetCurrentNetworkProfile(&profile));
  *pOutSetting = profile.ipSetting.proxy;
  return Result{};
}

}
