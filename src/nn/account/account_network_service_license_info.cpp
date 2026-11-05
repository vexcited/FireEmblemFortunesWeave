#include <utility>

#include "nn/account/account_network_service_license_info.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::account {

AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext(
  baas::IAsyncContextForLoginForOnlinePlay* pContext)
  : AsyncContext(pContext) {}

AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext()
  : AsyncContext() {}

AsyncNetworkServiceLicenseInfoContext::AsyncNetworkServiceLicenseInfoContext(
  AsyncNetworkServiceLicenseInfoContext&& other)
  : AsyncContext(std::move(other)) {}

AsyncNetworkServiceLicenseInfoContext&
AsyncNetworkServiceLicenseInfoContext::operator=(
  AsyncNetworkServiceLicenseInfoContext&& other) {
  AsyncNetworkServiceLicenseInfoContext(std::move(other)).Swap(*this);
  return *this;
}

NetworkServiceLicenseKind
AsyncNetworkServiceLicenseInfoContext::GetNetworkServiceLicenseKind() {
  uint32_t kind = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    static_cast<baas::IAsyncContextForLoginForOnlinePlay*>(GetPointerUnsafe())
      ->GetNetworkServiceLicenseKind(sf::Out<uint32_t>(&kind)));
  switch (kind) {
    case 0:
      return NetworkServiceLicenseKind_None;
    case 1:
      return NetworkServiceLicenseKind_Common;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result LoadNetworkServiceLicenseInfoAsync(
  AsyncNetworkServiceLicenseInfoContext* pOutContext,
  const UserHandle& handle) {
  using Context = baas::IAsyncContextForLoginForOnlinePlay;
  sf::SharedPointer<Context> context;
  NN_RESULT_DO(handle.pManager->LoadNetworkServiceLicenseKindAsync(
    sf::Out<sf::SharedPointer<Context>>(&context)));
  *pOutContext = AsyncNetworkServiceLicenseInfoContext(context.Detach());
  return Result{0};
}

}
