#pragma once

#include <stdint.h>

#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_procedures.hpp"

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
  virtual Result CreateProcedureToLinkWithNintendoAccount(
    const sf::Out<sf::SharedPointer<
      nas::IOAuthProcedureForNintendoAccountLinkage>>& pOut) = 0;
  virtual Result ResumeProcedureToLinkWithNintendoAccount(
    const sf::Out<sf::SharedPointer<
      nas::IOAuthProcedureForNintendoAccountLinkage>>& pOut,
    const SessionId& sessionId) = 0;
  virtual Result CreateProcedureToUpdateLinkageStateOfNintendoAccount(
    const sf::Out<sf::SharedPointer<http::IOAuthProcedure>>& pOut) = 0;
  virtual Result ResumeProcedureToUpdateLinkageStateOfNintendoAccount(
    const sf::Out<sf::SharedPointer<http::IOAuthProcedure>>& pOut,
    const SessionId& sessionId) = 0;
  virtual Result CreateProcedureToLinkNnidWithNintendoAccount(
    const sf::Out<sf::SharedPointer<http::IOAuthProcedure>>& pOut) = 0;
  virtual Result ResumeProcedureToLinkNnidWithNintendoAccount(
    const sf::Out<sf::SharedPointer<http::IOAuthProcedure>>& pOut,
    const SessionId& sessionId) = 0;
  virtual Result
    ProxyProcedureToAcquireApplicationAuthorizationForNintendoAccount(
    const sf::Out<sf::SharedPointer<http::IOAuthProcedure>>& pOut,
    const SessionId& sessionId) = 0;
  virtual Result GetRequestForNintendoAccountInfoView(
    sf::Out<RequestUrl> pOutRequest) = 0;
  virtual Result GetRequestForAnalyticsOptIn(sf::Out<RequestUrl> pOutRequest,
    NintendoAccountAnalyticsOptInTarget target) = 0;
  virtual Result TryRecoverNintendoAccountUserStateAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result IsRequiredLicenseCacheRefreshRequiredForOnlinePlay(
    sf::Out<bool> pOutIsRequired, uint64_t applicationId) = 0;
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
  Result GetRequiredLicenseCacheForOnlinePlay(
    NetworkServiceLicenseKind* pOutKind,
    const ApplicationId& applicationId) const;
  Result IsRequiredLicenseCacheRefreshRequiredForOnlinePlay(
    bool* pOutIsRequired, const ApplicationId& applicationId) const;
  Result CreateProcedureToLinkWithNintendoAccount(
    NintendoAccountLinkageProcedure* pOutProcedure);
  Result ResumeProcedureToLinkWithNintendoAccount(
    NintendoAccountLinkageProcedure* pOutProcedure, const SessionId& sessionId);
  Result CreateProcedureToUpdateLinkageStateOfNintendoAccount(
    NintendoAccountLinkageStateUpdateProcedure* pOutProcedure);
  Result ResumeProcedureToUpdateLinkageStateOfNintendoAccount(
    NintendoAccountLinkageStateUpdateProcedure* pOutProcedure,
    const SessionId& sessionId);
  Result CreateProcedureToLinkNnidWithNintendoAccount(
    detail::SimpleOAuthProcedureBase* pOutProcedure);
  Result ResumeProcedureToLinkNnidWithNintendoAccount(
    detail::SimpleOAuthProcedureBase* pOutProcedure,
    const SessionId& sessionId);
  Result ProxyProcedureToAcquireApplicationAuthorizationForNintendoAccount(
    NintendoAccountApplicationAuthorizationProcedure* pOutProcedure,
    const SessionId& sessionId);

 private:
  baas::IAdministrator* GetAdministrator() const {
    return static_cast<baas::IAdministrator*>(m_pManager);
  }
};

}
