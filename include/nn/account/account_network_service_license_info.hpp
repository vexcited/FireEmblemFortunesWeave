#pragma once

#include <stdint.h>

#include "nn/account/account_async_context.hpp"
#include "nn/account/account_cached_nintendo_account_info.hpp"
#include "nn/account/account_network_service_account_administrator.hpp"
#include "nn/account/detail/account_i_async_context.hpp"

namespace nn::account {

namespace baas {

class IAsyncContextForLoginForOnlinePlay : public detail::IAsyncContext {
 public:
  virtual Result GetNetworkServiceLicenseKind(sf::Out<uint32_t> pOutKind) = 0;
};

class IManagerForApplication : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CheckAvailability() = 0;
  virtual Result GetAccountId(sf::Out<NetworkServiceAccountId> pOutId) = 0;
  virtual Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual void Reserved7() = 0;
  virtual Result LoadIdTokenCache(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& buffer) = 0;
  virtual Result GetNintendoAccountUserResourceCacheForApplication(
    sf::Out<NintendoAccountId> pOutId,
    sf::Out<CachedNintendoAccountInfo> pOutInfo,
    const sf::OutBuffer& buffer) = 0;
  virtual void Reserved10() = 0;
  // Keeps the user open for the next program.
  virtual Result StoreOpenContext() = 0;
  virtual Result LoadNetworkServiceLicenseKindAsync(
    const sf::Out<sf::SharedPointer<IAsyncContextForLoginForOnlinePlay>>&
      pOutContext) = 0;
};

}

struct UserHandle {
  uint64_t _data[2];
  baas::IManagerForApplication* pManager;
};

class AsyncNetworkServiceLicenseInfoContext : public AsyncContext {
 public:
  AsyncNetworkServiceLicenseInfoContext();
  explicit AsyncNetworkServiceLicenseInfoContext(
    baas::IAsyncContextForLoginForOnlinePlay* pContext);
  AsyncNetworkServiceLicenseInfoContext(
    AsyncNetworkServiceLicenseInfoContext&& other);
  AsyncNetworkServiceLicenseInfoContext& operator=(
    AsyncNetworkServiceLicenseInfoContext&& other);

  NetworkServiceLicenseKind GetNetworkServiceLicenseKind();
};

Result LoadNetworkServiceLicenseInfoAsync(
  AsyncNetworkServiceLicenseInfoContext* pOutContext,
  const UserHandle& handle);

}
