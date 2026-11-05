#include <utility>

#include "nn/account/detail/account_oauth_procedure.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account::detail {

namespace {

constexpr Result ResultNullAsyncContext = {0x25c7c};

}

OAuthProcedureBase::OAuthProcedureBase()
  : m_Uid(), m_pProcedure(nullptr) {}

OAuthProcedureBase::OAuthProcedureBase(
  const Uid& uid, http::IOAuthProcedure* pProcedure)
  : m_Uid(uid), m_pProcedure(pProcedure) {}

OAuthProcedureBase::OAuthProcedureBase(OAuthProcedureBase&& other)
  : m_Uid(other.m_Uid), m_pProcedure(other.m_pProcedure) {
  other.m_Uid = Uid();
  other.m_pProcedure = nullptr;
}

OAuthProcedureBase& OAuthProcedureBase::operator=(OAuthProcedureBase&& other) {
  OAuthProcedureBase(std::move(other)).Swap(*this);
  return *this;
}

void OAuthProcedureBase::Swap(OAuthProcedureBase& other) {
  std::swap(m_Uid, other.m_Uid);
  std::swap(m_pProcedure, other.m_pProcedure);
}

http::IOAuthProcedure* OAuthProcedureBase::GetPtr() const {
  return m_pProcedure;
}

Result OAuthProcedureBase::PrepareAsync(AsyncContext* pOutContext) {
  sf::SharedPointer<IAsyncContext> context;
  NN_RESULT_DO(m_pProcedure->PrepareAsync(
    sf::Out<sf::SharedPointer<IAsyncContext>>(&context)));
  if (context.operator->() == nullptr) {
    return ResultNullAsyncContext;
  }

  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result OAuthProcedureBase::GetRequest(
  RequestUrl* pOutRequestUrl, CallbackUri* pOutCallbackUri) {
  return m_pProcedure->GetRequest(
    sf::Out<RequestUrl>(pOutRequestUrl), sf::Out<CallbackUri>(pOutCallbackUri));
}

Result OAuthProcedureBase::ApplyResponse(const char* response, size_t size) {
  return m_pProcedure->ApplyResponse(sf::InBuffer(response, size));
}

Result OAuthProcedureBase::ApplyResponseAsync(
  AsyncContext* pOutContext, const char* response, size_t size) {
  sf::SharedPointer<IAsyncContext> context;
  NN_RESULT_DO(m_pProcedure->ApplyResponseAsync(
    sf::Out<sf::SharedPointer<IAsyncContext>>(&context),
    sf::InBuffer(response, size)));
  if (context.operator->() == nullptr) {
    return ResultNullAsyncContext;
  }

  *pOutContext = AsyncContext(context.Detach());
  return Result{0};
}

Result OAuthProcedureBase::Suspend(SessionId* pOutSessionId) {
  SessionId sessionId = {};
  NN_RESULT_DO(m_pProcedure->Suspend(sf::Out<SessionId>(&sessionId)));
  *pOutSessionId = sessionId;
  return Result{0};
}

SimpleOAuthProcedureBase::SimpleOAuthProcedureBase() : OAuthProcedureBase() {}

SimpleOAuthProcedureBase::SimpleOAuthProcedureBase(
  const Uid& uid, http::IOAuthProcedure* pProcedure)
  : OAuthProcedureBase(uid, pProcedure) {}

SimpleOAuthProcedureBase::SimpleOAuthProcedureBase(
  SimpleOAuthProcedureBase&& other)
  : OAuthProcedureBase(std::move(other)) {}

SimpleOAuthProcedureBase& SimpleOAuthProcedureBase::operator=(
  SimpleOAuthProcedureBase&& other) {
  SimpleOAuthProcedureBase(std::move(other)).Swap(*this);
  return *this;
}

void SimpleOAuthProcedureBase::Swap(SimpleOAuthProcedureBase& other) {
  OAuthProcedureBase::Swap(other);
}

}
