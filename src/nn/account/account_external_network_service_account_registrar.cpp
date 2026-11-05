#include <utility>

#include "nn/account/account_external_network_service_account_registrar.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

using Registrar = ExternalNetworkServiceAccountRegistrar;

Registrar::ExternalNetworkServiceAccountRegistrar() : m_pRequest(nullptr) {}

Registrar::ExternalNetworkServiceAccountRegistrar(
  baas::IFloatingRegistrationRequest* pRequest)
  : m_pRequest(pRequest) {}

Registrar::ExternalNetworkServiceAccountRegistrar(Registrar&& other)
  : m_pRequest(other.m_pRequest) {
  other.m_pRequest = nullptr;
}

Registrar::~ExternalNetworkServiceAccountRegistrar() {
  if (m_pRequest != nullptr) {
    m_pRequest->Release();
  }
}

Registrar& Registrar::operator=(Registrar&& other) {
  Registrar(std::move(other)).Swap(*this);
  return *this;
}

void Registrar::Swap(Registrar& other) {
  std::swap(m_pRequest, other.m_pRequest);
}

Result Registrar::GetOAuthProcedureSessionId(SessionId* pOutSessionId) const {
  SessionId sessionId = {};
  NN_RESULT_DO(m_pRequest->GetSessionId(sf::Out<SessionId>(&sessionId)));
  *pOutSessionId = sessionId;
  return Result{0};
}

Result Registrar::RegisterUser(Uid* pOutUid) {
  return m_pRequest->RegisterUser(sf::Out<Uid>(pOutUid));
}

Result Registrar::RegisterUserAs(const Uid& uid) {
  return m_pRequest->RegisterUserWithUid(uid);
}

Result Registrar::RegisterNetworkServiceAccountAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pRequest->RegisterNetworkServiceAccountAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result Registrar::RegisterNetworkServiceAccountAsync(
  AsyncContext* pOutContext, const Uid& uid) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pRequest->RegisterNetworkServiceAccountWithUidAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context), uid));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result Registrar::GetNickname(Nickname* pOutNickname) const {
  return m_pRequest->GetNickname(
    sf::OutArray<char>(pOutNickname->name, sizeof(pOutNickname->name)));
}

Result Registrar::GetProfileImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(m_pRequest->GetProfileImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result Registrar::GetProfileLargeImage(
  size_t* pOutSize, void* buffer, size_t size) const {
  uint32_t imageSize = 0;
  NN_RESULT_DO(m_pRequest->GetProfileLargeImage(
    sf::Out<uint32_t>(&imageSize), sf::OutBuffer(buffer, size)));
  *pOutSize = imageSize;
  return Result{0};
}

Result Registrar::GetNetworkServiceAccountId(
  NetworkServiceAccountId* pOutId) const {
  return m_pRequest->GetAccountId(sf::Out<NetworkServiceAccountId>(pOutId));
}

Result Registrar::SetSystemProgramIdentification(
  const SystemProgramIdentification& identification) {
  return m_pRequest->SetSystemProgramIdentification(identification, 0);
}

Result Registrar::EnsureNetworkServiceAccountIdTokenCacheAsync(
  AsyncContext* pOutContext) {
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(m_pRequest->EnsureIdTokenCacheAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result Registrar::LoadNetworkServiceAccountIdTokenCache(
  size_t* pOutSize, char* buffer, size_t size) const {
  uint32_t tokenSize = 0;
  NN_RESULT_DO(m_pRequest->LoadIdTokenCache(
    sf::Out<uint32_t>(&tokenSize), sf::OutBuffer(buffer, size)));
  *pOutSize = tokenSize;
  return Result{0};
}

}
