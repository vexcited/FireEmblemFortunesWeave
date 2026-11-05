#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_async_context.hpp"
#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_i_async_context.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::account {

namespace nas {

class IDeviceHistoryRequest : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result InvokeWithoutInteractionAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result GetCount(sf::Out<int32_t> pOutCount) = 0;
};

class IAuthorizationRequest : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result InvokeWithoutInteractionAsync(
    const sf::Out<sf::SharedPointer<detail::IAsyncContext>>& pOutContext) = 0;
  virtual Result IsAuthorized(sf::Out<bool> pOutIsAuthorized) = 0;
  virtual Result GetAuthorizationCode(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& code) = 0;
  virtual Result GetIdToken(sf::Out<uint32_t> pOutSize,
    const sf::OutBuffer& token) = 0;
};

}

class NetworkServiceAccountDeviceHistoryRequestContext {
 public:
  NetworkServiceAccountDeviceHistoryRequestContext();
  NetworkServiceAccountDeviceHistoryRequestContext(
    nas::IDeviceHistoryRequest* pRequest, const Uid& uid);
  NetworkServiceAccountDeviceHistoryRequestContext(
    NetworkServiceAccountDeviceHistoryRequestContext&& other);
  ~NetworkServiceAccountDeviceHistoryRequestContext();
  NetworkServiceAccountDeviceHistoryRequestContext& operator=(
    NetworkServiceAccountDeviceHistoryRequestContext&& other);

  void Swap(NetworkServiceAccountDeviceHistoryRequestContext& other);
  Result Invoke();
  Result GetSystemEvent(os::SystemEvent* pOutEvent);
  Result Cancel();
  Result HasDone(bool* pOutIsDone) const;
  Result HasDone(bool* pOutIsDone);
  Result GetRawResult() const;
  Result GetRawResult();
  Result GetResult() const;
  Result GetResult();
  int GetCount();

 private:
  Uid m_Uid;
  nas::IDeviceHistoryRequest* m_pRequest;
  AsyncContext m_Context;
};

class NintendoAccountAuthorizationRequestContext {
 public:
  NintendoAccountAuthorizationRequestContext();
  NintendoAccountAuthorizationRequestContext(
    nas::IAuthorizationRequest* pRequest, const Uid& uid);
  NintendoAccountAuthorizationRequestContext(
    NintendoAccountAuthorizationRequestContext&& other);
  ~NintendoAccountAuthorizationRequestContext();
  NintendoAccountAuthorizationRequestContext& operator=(
    NintendoAccountAuthorizationRequestContext&& other);

  void Swap(NintendoAccountAuthorizationRequestContext& other);
  Result Invoke();
  Result GetSystemEvent(os::SystemEvent* pOutEvent);
  Result Cancel();
  Result HasDone(bool* pOutIsDone) const;
  Result HasDone(bool* pOutIsDone);
  Result GetRawResult() const;
  Result GetRawResult();
  Result GetResult() const;
  Result GetResult();
  Result GetAuthorizationCode(size_t* pOutSize, char* buffer, size_t size);
  Result GetIdToken(size_t* pOutSize, char* buffer, size_t size);

 private:
  Uid m_Uid;
  nas::IAuthorizationRequest* m_pRequest;
  AsyncContext m_Context;
};

}
