#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_oauth_procedure.hpp"

namespace nn::account {

enum NintendoAccountAuthorizationPageTheme : int32_t {};
enum NintendoAccountReauthenticationPageType : int32_t {};

namespace nas {

class IOAuthProcedureForNintendoAccountLinkage : public http::IOAuthProcedure {
 public:
  virtual Result GetRequestWithTheme(sf::Out<RequestUrl> pOutRequestUrl,
    sf::Out<CallbackUri> pOutCallbackUri,
    NintendoAccountAuthorizationPageTheme theme) = 0;
  virtual Result IsNetworkServiceAccountReplaced(
    sf::Out<bool> pOutIsReplaced) = 0;
};

class IOAuthProcedureForNintendoAccountReauthentication
  : public http::IOAuthProcedure {
 public:
  virtual Result GetRequestWithPageType(sf::Out<RequestUrl> pOutRequestUrl,
    sf::Out<CallbackUri> pOutCallbackUri,
    NintendoAccountReauthenticationPageType pageType) = 0;
  virtual Result GetSkipIdentification(sf::Out<bool> pOutIsSkipped) = 0;
};

class IOAuthProcedureForExternalNsa : public http::IOAuthProcedure {
 public:
  virtual Result GetAccountId(sf::Out<NetworkServiceAccountId> pOutId) = 0;
  virtual Result GetLinkedNintendoAccountId(
    sf::Out<NintendoAccountId> pOutId) = 0;
  virtual Result GetNickname(const sf::OutBuffer& nickname) = 0;
  virtual Result GetProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result GetProfileLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result GetRequestForMoving(sf::Out<RequestUrl> pOutRequestUrl,
    sf::Out<CallbackUri> pOutCallbackUri) = 0;
};

class IOAuthProcedureForDeviceMigrationOperatingUserAuthentication
  : public http::IOAuthProcedure {
 public:
  virtual Result GetTemporaryUserIdForTemporarySession(
    sf::Out<uint64_t> pOutId) = 0;
};

class IOAuthProcedureForDeviceMigrationDownload
  : public http::IOAuthProcedure {
 public:
  virtual Result GetTemporaryUserIdForTemporarySession(
    sf::Out<uint64_t> pOutId) = 0;
};

class IOAuthProcedureForUserRegistration : public http::IOAuthProcedure {
 public:
  virtual Result GetAccountId(sf::Out<NetworkServiceAccountId> pOutId) = 0;
  virtual Result GetLinkedNintendoAccountId(
    sf::Out<NintendoAccountId> pOutId) = 0;
  virtual Result GetNickname(const sf::OutBuffer& nickname) = 0;
  virtual Result GetProfileImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result GetProfileLargeImage(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& image) = 0;
  virtual Result RegisterUserAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result GetUid(sf::Out<Uid> pOutUid) = 0;
  virtual Result ApplyResponseForUserCreationAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const sf::InBuffer& response) = 0;
  virtual Result SuspendAfterApplyResponse(sf::Out<SessionId> pOutId) = 0;
  virtual Result IsProfileAvailable(sf::Out<bool> pOutIsAvailable) = 0;
  virtual Result RegisterUserForCreationAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result RegisterUserWithProfileAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const Nickname& nickname, const sf::InBuffer& image) = 0;
  virtual Result RegisterUserWithLargeImageProfileAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const Nickname& nickname, const sf::InBuffer& image) = 0;
};

}

class NintendoAccountLinkageProcedure : public detail::OAuthProcedureBase {
 public:
  NintendoAccountLinkageProcedure();
  NintendoAccountLinkageProcedure(const Uid& uid,
    nas::IOAuthProcedureForNintendoAccountLinkage* pProcedure);
  NintendoAccountLinkageProcedure(NintendoAccountLinkageProcedure&& other);

  void Swap(NintendoAccountLinkageProcedure& other);
  Result GetRequest(RequestUrl* pOutRequestUrl, CallbackUri* pOutCallbackUri,
    NintendoAccountAuthorizationPageTheme theme);
  Result IsNetworkServiceAccountReplaced(bool* pOutIsReplaced);
};

class NintendoAccountLinkageStateUpdateProcedure
  : public detail::OAuthProcedureBase {
 public:
  NintendoAccountLinkageStateUpdateProcedure();
  NintendoAccountLinkageStateUpdateProcedure(const Uid& uid,
    http::IOAuthProcedure* pProcedure);
  NintendoAccountLinkageStateUpdateProcedure(
    NintendoAccountLinkageStateUpdateProcedure&& other);

  void Swap(NintendoAccountLinkageStateUpdateProcedure& other);
};

class NintendoAccountApplicationAuthorizationProcedure
  : public detail::OAuthProcedureBase {
 public:
  NintendoAccountApplicationAuthorizationProcedure();
  NintendoAccountApplicationAuthorizationProcedure(const Uid& uid,
    http::IOAuthProcedure* pProcedure);
  NintendoAccountApplicationAuthorizationProcedure(
    NintendoAccountApplicationAuthorizationProcedure&& other);

  void Swap(NintendoAccountApplicationAuthorizationProcedure& other);
};

class NintendoAccountReauthenticationProcedure
  : public detail::OAuthProcedureBase {
 public:
  NintendoAccountReauthenticationProcedure();
  NintendoAccountReauthenticationProcedure(const Uid& uid,
    nas::IOAuthProcedureForNintendoAccountReauthentication* pProcedure);
  NintendoAccountReauthenticationProcedure(
    NintendoAccountReauthenticationProcedure&& other);

  void Swap(NintendoAccountReauthenticationProcedure& other);
  Result GetRequest(RequestUrl* pOutRequestUrl, CallbackUri* pOutCallbackUri,
    NintendoAccountReauthenticationPageType pageType);
  Result GetSkipIdentification(bool* pOutIsSkipped);
};

class ExternalNetworkServiceAccountIntroducingProcedure
  : public detail::OAuthProcedureBase {
 public:
  ExternalNetworkServiceAccountIntroducingProcedure();
  explicit ExternalNetworkServiceAccountIntroducingProcedure(
    nas::IOAuthProcedureForExternalNsa* pProcedure);
  ExternalNetworkServiceAccountIntroducingProcedure(
    ExternalNetworkServiceAccountIntroducingProcedure&& other);

  void Swap(ExternalNetworkServiceAccountIntroducingProcedure& other);
  Result GetRequestForMoving(RequestUrl* pOutRequestUrl,
    CallbackUri* pOutCallbackUri);
  Result GetNickname(Nickname* pOutNickname) const;
  Result GetProfileImage(size_t* pOutSize, void* buffer, size_t size) const;
  Result GetProfileLargeImage(size_t* pOutSize, void* buffer,
    size_t size) const;
  Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId) const;
  Result GetLinkedNintendoAccountId(NintendoAccountId* pOutId) const;
};

class DeviceMigrationOperatingUserAuthenticationProcedure
  : public detail::OAuthProcedureBase {
 public:
  using Interface =
    nas::IOAuthProcedureForDeviceMigrationOperatingUserAuthentication;

  DeviceMigrationOperatingUserAuthenticationProcedure();
  explicit DeviceMigrationOperatingUserAuthenticationProcedure(
    Interface* pProcedure);
  DeviceMigrationOperatingUserAuthenticationProcedure(
    DeviceMigrationOperatingUserAuthenticationProcedure&& other);

  void Swap(DeviceMigrationOperatingUserAuthenticationProcedure& other);
  Result GetTemporaryUserIdForTemporarySession(uint64_t* pOutId) const;
};

class DeviceMigrationDownloadProcedure : public detail::OAuthProcedureBase {
 public:
  DeviceMigrationDownloadProcedure();
  explicit DeviceMigrationDownloadProcedure(
    nas::IOAuthProcedureForDeviceMigrationDownload* pProcedure);
  DeviceMigrationDownloadProcedure(DeviceMigrationDownloadProcedure&& other);

  void Swap(DeviceMigrationDownloadProcedure& other);
  Result GetTemporaryUserIdForTemporarySession(uint64_t* pOutId) const;
};

class UserRegistrationProcedure : public detail::OAuthProcedureBase {
 public:
  UserRegistrationProcedure();
  explicit UserRegistrationProcedure(
    nas::IOAuthProcedureForUserRegistration* pProcedure);
  UserRegistrationProcedure(UserRegistrationProcedure&& other);

  void Swap(UserRegistrationProcedure& other);
  Result GetNickname(Nickname* pOutNickname) const;
  Result GetProfileImage(size_t* pOutSize, void* buffer, size_t size) const;
  Result GetProfileLargeImage(size_t* pOutSize, void* buffer,
    size_t size) const;
  Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId) const;
  Result GetLinkedNintendoAccountId(NintendoAccountId* pOutId) const;
  Result RegisterUserAsync(AsyncContext* pOutContext);
  Uid GetUid() const;
};

class UserCreationProcedure : public detail::OAuthProcedureBase {
 public:
  UserCreationProcedure();
  explicit UserCreationProcedure(
    nas::IOAuthProcedureForUserRegistration* pProcedure);
  UserCreationProcedure(UserCreationProcedure&& other);

  void Swap(UserCreationProcedure& other);
  Result ApplyResponseAsync(AsyncContext* pOutContext, const char* response,
    size_t size);
  bool IsProfileAvailable() const;
  Result GetNickname(Nickname* pOutNickname) const;
  Result GetProfileImage(size_t* pOutSize, void* buffer, size_t size) const;
  Result GetProfileLargeImage(size_t* pOutSize, void* buffer,
    size_t size) const;
  Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId) const;
  Result GetLinkedNintendoAccountId(NintendoAccountId* pOutId) const;
  Result RegisterUserAsync(AsyncContext* pOutContext);
  Result SuspendAfterApplyResponse(SessionId* pOutSessionId);
  Result RegisterUserWithProfileAsync(AsyncContext* pOutContext,
    const Nickname& nickname, const void* image, size_t size);
  Result RegisterUserWithLargeImageProfileAsync(AsyncContext* pOutContext,
    const Nickname& nickname, const void* image, size_t size);
  Uid GetUid() const;
};

}
