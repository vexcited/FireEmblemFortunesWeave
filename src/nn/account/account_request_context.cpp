#include <utility>

#include "nn/account/account_request_context.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

namespace {

// Module 124, description 280.
const Result ResultNetworkServiceAccountUnavailable = {(280 << 9) | 124};

Result ConvertRequestResult(Result result) {
  if (result.IsFailure()) {
    const uint32_t module = result.value & 0x1ff;
    const uint32_t description = (result.value >> 9) & 0x1fff;
    if ((module == 124 && description >= 200 && description < 270) ||
      result.GetInnerValueForDebug() ==
        ResultNetworkServiceAccountUnavailable.value) {
      return ResultNetworkServiceAccountUnavailable;
    }
  }
  return result;
}

}

#define NN_ACCOUNT_DEFINE_REQUEST_CONTEXT_COMMON(Context, Request) \
  Context::Context() : m_Uid(), m_pRequest(nullptr), m_Context() {} \
  \
  Context::Context(Request* pRequest, const Uid& uid) \
    : m_Uid(uid), m_pRequest(pRequest), m_Context() {} \
  \
  Context::Context(Context&& other) \
    : m_Uid(other.m_Uid), m_pRequest(other.m_pRequest), \
      m_Context(std::move(other.m_Context)) { \
    other.m_Uid = Uid(); \
    other.m_pRequest = nullptr; \
  } \
  \
  Context::~Context() { \
    if (m_pRequest != nullptr) { \
      m_pRequest->Release(); \
      m_pRequest = nullptr; \
    } \
  } \
  \
  Context& Context::operator=(Context&& other) { \
    Context(std::move(other)).Swap(*this); \
    return *this; \
  } \
  \
  void Context::Swap(Context& other) { \
    std::swap(m_Uid, other.m_Uid); \
    std::swap(m_pRequest, other.m_pRequest); \
    std::swap(other.m_Context, m_Context); \
  } \
  \
  Result Context::Invoke() { \
    sf::SharedPointer<detail::IAsyncContext> context; \
    NN_RESULT_DO(m_pRequest->InvokeWithoutInteractionAsync( \
      sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context))); \
    m_Context = AsyncContext(context.Detach(), m_Uid); \
    return Result{0}; \
  } \
  \
  Result Context::GetSystemEvent(os::SystemEvent* pOutEvent) { \
    return m_Context.GetSystemEvent(pOutEvent); \
  } \
  \
  Result Context::Cancel() { \
    return m_Context.Cancel(); \
  } \
  \
  Result Context::HasDone(bool* pOutIsDone) const { \
    return m_Context.HasDone(pOutIsDone); \
  } \
  \
  Result Context::HasDone(bool* pOutIsDone) { \
    return std::as_const(m_Context).HasDone(pOutIsDone); \
  }

NN_ACCOUNT_DEFINE_REQUEST_CONTEXT_COMMON(
  NetworkServiceAccountDeviceHistoryRequestContext, nas::IDeviceHistoryRequest)

NN_ACCOUNT_DEFINE_REQUEST_CONTEXT_COMMON(
  NintendoAccountAuthorizationRequestContext, nas::IAuthorizationRequest)

#undef NN_ACCOUNT_DEFINE_REQUEST_CONTEXT_COMMON

Result NetworkServiceAccountDeviceHistoryRequestContext::GetRawResult() const {
  return m_Context.GetResult();
}

Result NetworkServiceAccountDeviceHistoryRequestContext::GetRawResult() {
  return std::as_const(m_Context).GetResult();
}

Result NetworkServiceAccountDeviceHistoryRequestContext::GetResult() const {
  return ConvertRequestResult(m_Context.GetResult());
}

Result NetworkServiceAccountDeviceHistoryRequestContext::GetResult() {
  return ConvertRequestResult(std::as_const(m_Context).GetResult());
}

int NetworkServiceAccountDeviceHistoryRequestContext::GetCount() {
  int32_t count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    m_pRequest->GetCount(sf::Out<int32_t>(&count)));
  return count;
}

Result NintendoAccountAuthorizationRequestContext::GetRawResult() const {
  bool isAuthorized = false;
  NN_RESULT_DO(m_pRequest->IsAuthorized(sf::Out<bool>(&isAuthorized)));
  if (isAuthorized) {
    return Result{0};
  }
  return m_Context.GetResult();
}

Result NintendoAccountAuthorizationRequestContext::GetRawResult() {
  bool isAuthorized = false;
  NN_RESULT_DO(m_pRequest->IsAuthorized(sf::Out<bool>(&isAuthorized)));
  if (isAuthorized) {
    return Result{0};
  }
  return std::as_const(m_Context).GetResult();
}

Result NintendoAccountAuthorizationRequestContext::GetResult() const {
  return ConvertRequestResult(GetRawResult());
}

Result NintendoAccountAuthorizationRequestContext::GetResult() {
  return ConvertRequestResult(GetRawResult());
}

Result NintendoAccountAuthorizationRequestContext::GetAuthorizationCode(
  size_t* pOutSize, char* buffer, size_t size) {
  uint32_t codeSize = 0;
  NN_RESULT_DO(m_pRequest->GetAuthorizationCode(sf::Out<uint32_t>(&codeSize),
    sf::OutBuffer(buffer, size)));
  *pOutSize = codeSize;
  return Result{0};
}

Result NintendoAccountAuthorizationRequestContext::GetIdToken(
  size_t* pOutSize, char* buffer, size_t size) {
  uint32_t tokenSize = 0;
  NN_RESULT_DO(m_pRequest->GetIdToken(sf::Out<uint32_t>(&tokenSize),
    sf::OutBuffer(buffer, size)));
  *pOutSize = tokenSize;
  return Result{0};
}

}
