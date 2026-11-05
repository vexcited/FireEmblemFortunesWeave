#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_async_context.hpp"
#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_oauth_procedure.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account {

struct SystemProgramIdentification;

namespace baas {

class IFloatingRegistrationRequest : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSessionId(sf::Out<SessionId> pOutSessionId) = 0;
  virtual Result GetAccountId(sf::Out<NetworkServiceAccountId> pOutId) = 0;
  virtual void Reserved6() = 0;
  virtual Result GetNickname(const sf::OutArray<char>& outNickname) = 0;
  virtual Result GetProfileImage(
    sf::Out<uint32_t> pOutSize, const sf::OutBuffer& outImage) = 0;
  virtual Result GetProfileLargeImage(
    sf::Out<uint32_t> pOutSize, const sf::OutBuffer& outImage) = 0;
  virtual Result LoadIdTokenCache(
    sf::Out<uint32_t> pOutSize, const sf::OutBuffer& outToken) = 0;
  virtual Result RegisterUser(sf::Out<Uid> pOutUid) = 0;
  virtual Result RegisterUserWithUid(const Uid& uid) = 0;
  virtual Result RegisterNetworkServiceAccountAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result RegisterNetworkServiceAccountWithUidAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const Uid& uid) = 0;
  virtual Result SetSystemProgramIdentification(
    const SystemProgramIdentification& identification, uint64_t processId) = 0;
  virtual Result EnsureIdTokenCacheAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
};

}

class ExternalNetworkServiceAccountRegistrar {
 public:
  ExternalNetworkServiceAccountRegistrar();
  explicit ExternalNetworkServiceAccountRegistrar(
    baas::IFloatingRegistrationRequest* pRequest);
  ExternalNetworkServiceAccountRegistrar(
    ExternalNetworkServiceAccountRegistrar&& other);
  ~ExternalNetworkServiceAccountRegistrar();

  ExternalNetworkServiceAccountRegistrar& operator=(
    ExternalNetworkServiceAccountRegistrar&& other);
  void Swap(ExternalNetworkServiceAccountRegistrar& other);

  Result GetOAuthProcedureSessionId(SessionId* pOutSessionId) const;
  Result RegisterUser(Uid* pOutUid);
  Result RegisterUserAs(const Uid& uid);
  Result RegisterNetworkServiceAccountAsync(AsyncContext* pOutContext);
  Result RegisterNetworkServiceAccountAsync(
    AsyncContext* pOutContext, const Uid& uid);
  Result GetNickname(Nickname* pOutNickname) const;
  Result GetProfileImage(size_t* pOutSize, void* buffer, size_t size) const;
  Result GetProfileLargeImage(size_t* pOutSize, void* buffer, size_t size)
    const;
  Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId) const;
  Result SetSystemProgramIdentification(
    const SystemProgramIdentification& identification);
  Result EnsureNetworkServiceAccountIdTokenCacheAsync(
    AsyncContext* pOutContext);
  Result LoadNetworkServiceAccountIdTokenCache(
    size_t* pOutSize, char* buffer, size_t size) const;

 private:
  baas::IFloatingRegistrationRequest* m_pRequest;
};

}
