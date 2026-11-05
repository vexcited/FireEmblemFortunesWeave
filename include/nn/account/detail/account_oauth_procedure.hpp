#pragma once

#include <stddef.h>

#include "nn/account/account_async_context.hpp"
#include "nn/account/account_types.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account {

struct RequestUrl;
struct CallbackUri;

struct SessionId {
  uint64_t value[2];
};

namespace http {

class IOAuthProcedure : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result PrepareAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result GetRequest(sf::Out<RequestUrl> pOutRequestUrl,
    sf::Out<CallbackUri> pOutCallbackUri) = 0;
  virtual Result ApplyResponse(const sf::InBuffer& response) = 0;
  virtual Result ApplyResponseAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext,
    const sf::InBuffer& response) = 0;
  virtual Result Suspend(sf::Out<SessionId> pOutSessionId) = 0;
};

}

namespace detail {

class OAuthProcedureBase {
 public:
  OAuthProcedureBase();
  OAuthProcedureBase(const Uid& uid, http::IOAuthProcedure* pProcedure);
  OAuthProcedureBase(OAuthProcedureBase&& other);

  virtual ~OAuthProcedureBase() {
    if (m_pProcedure != nullptr) {
      m_pProcedure->Release();
    }
  }

  OAuthProcedureBase& operator=(OAuthProcedureBase&& other);
  void Swap(OAuthProcedureBase& other);
  http::IOAuthProcedure* GetPtr() const;

  Result PrepareAsync(AsyncContext* pOutContext);
  Result GetRequest(RequestUrl* pOutRequestUrl, CallbackUri* pOutCallbackUri);
  Result ApplyResponse(const char* response, size_t size);
  Result ApplyResponseAsync(
    AsyncContext* pOutContext, const char* response, size_t size);
  Result Suspend(SessionId* pOutSessionId);

 protected:
  Uid m_Uid;
  http::IOAuthProcedure* m_pProcedure;
};

class SimpleOAuthProcedureBase : public OAuthProcedureBase {
 public:
  SimpleOAuthProcedureBase();
  SimpleOAuthProcedureBase(const Uid& uid, http::IOAuthProcedure* pProcedure);
  SimpleOAuthProcedureBase(SimpleOAuthProcedureBase&& other);

  SimpleOAuthProcedureBase& operator=(SimpleOAuthProcedureBase&& other);
  void Swap(SimpleOAuthProcedureBase& other);
};

}

}
