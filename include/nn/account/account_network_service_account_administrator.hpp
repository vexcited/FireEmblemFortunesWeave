#pragma once

#include <stdint.h>

#include "nn/account/account_network_service_account_manager.hpp"

namespace nn {

struct ApplicationId {
  uint64_t value;
};

}

namespace nn::account {

struct RequestUrl;

enum NintendoAccountAnalyticsOptInTarget : int32_t {};

enum NetworkServiceLicenseKind : int32_t {
  NetworkServiceLicenseKind_None,
  NetworkServiceLicenseKind_Common,
};

struct NetworkServiceAccountAuthenticationInfo {
  NetworkServiceAccountId accountId;
  uint64_t deviceAccountId;
  char token[40];
};

namespace baas {

class IAdministrator : public IManagerForSystemService {
 public:
  virtual void Reserved30() = 0;
  virtual void Reserved31() = 0;
  virtual void Reserved32() = 0;
  virtual Result IsRegistered(sf::Out<bool> pOutIsRegistered) = 0;
  virtual Result RegisterAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result UnregisterAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result DeleteRegistrationInfoLocally() = 0;
  virtual Result SynchronizeProfileAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result UploadProfileAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result SynchronizeProfileAsyncIfTimeElapsed(
    sf::Out<bool> pOutIsRequested,
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    uint32_t thresholdSeconds) = 0;
  virtual Result DownloadProfileAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result IsLinkedWithNintendoAccount(sf::Out<bool> pOutIsLinked) = 0;
  virtual void Reserved42() = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual void Reserved46() = 0;
  virtual void Reserved47() = 0;
  virtual void Reserved48() = 0;
  virtual Result GetRequestForNintendoAccountInfoView(
    sf::Out<RequestUrl> pOutRequest) = 0;
  virtual Result GetRequestForAnalyticsOptIn(sf::Out<RequestUrl> pOutRequest,
    NintendoAccountAnalyticsOptInTarget target) = 0;
  virtual Result TryRecoverNintendoAccountUserStateAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual void Reserved52() = 0;
  virtual Result RefreshRequiredLicenseCacheForOnlinePlayAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    uint64_t applicationId) = 0;
  virtual Result CheckRequiredLicenseForLexAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result GetAuthenticationInfoForWin(
    sf::Out<NetworkServiceAccountId> pOutAccountId,
    sf::Out<uint64_t> pOutDeviceAccountId, const sf::OutBuffer& token) = 0;
  virtual Result ImportAsyncForWin(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    NetworkServiceAccountId accountId, uint64_t deviceAccountId,
    const sf::InBuffer& token) = 0;
  virtual Result DebugUnlinkNintendoAccountAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
};

}

class NetworkServiceAccountAdministrator : public NetworkServiceAccountManager {
 public:
  NetworkServiceAccountAdministrator();
  NetworkServiceAccountAdministrator(const Uid& uid,
    baas::IAdministrator* pAdministrator);

  void Swap(NetworkServiceAccountAdministrator& other);

  Result IsNetworkServiceAccountRegistered(bool* pOutIsRegistered) const;
  Result RegisterAsync(AsyncContext* pOutContext);
  Result UnregisterAsync(AsyncContext* pOutContext);
  Result DeleteRegistrationInfoLocally();
  Result SynchronizeProfileAsync(AsyncContext* pOutContext);
  Result SynchronizeProfileAsyncIfTimeElapsed(bool* pOutIsRequested,
    AsyncContext* pOutContext, TimeSpan threshold);
  Result DownloadProfileAsync(AsyncContext* pOutContext);
  Result UploadProfileAsync(AsyncContext* pOutContext);
  Result IsLinkedWithNintendoAccount(bool* pOutIsLinked) const;
  Result GetRequestForNintendoAccountInfoView(RequestUrl* pOutRequest) const;
  Result GetRequestForAnalyticsOptIn(RequestUrl* pOutRequest,
    NintendoAccountAnalyticsOptInTarget target) const;
  Result GetRequiredLicenseCacheForLogin(NetworkServiceLicenseKind* pOutKind,
    const ApplicationId& applicationId) const;
  Result RefreshRequiredLicenseCacheForOnlinePlayAync(
    AsyncContext* pOutContext, const ApplicationId& applicationId);
  Result InvalidateRequiredLicenseCache(const ApplicationId& applicationId);
  Result CheckRequiredLicenseForLexAsync(AsyncContext* pOutContext);
  Result TryRecoverNintendoAccountUserStateAsync(AsyncContext* pOutContext);
  Result DebugUnlinkNintendoAccountAsync(AsyncContext* pOutContext);
  Result GetAuthenticationInfoForWin(
    NetworkServiceAccountAuthenticationInfo* pOutInfo) const;
  Result ImportAsyncForWin(AsyncContext* pOutContext,
    const NetworkServiceAccountAuthenticationInfo& info);

 private:
  baas::IAdministrator* GetAdministrator() const {
    return static_cast<baas::IAdministrator*>(m_pManager);
  }
};

}
