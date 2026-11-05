#pragma once

#include "nn/account/account_types.hpp"
#include "nn/account/detail/account_i_async_context.hpp"
#include "nn/os/system_event.hpp"
#include "nn/result.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::account {

class AsyncContext {
 public:
  AsyncContext();
  explicit AsyncContext(detail::IAsyncContext* pContext);
  AsyncContext(detail::IAsyncContext* pContext, const Uid& uid);
  AsyncContext(AsyncContext&& other);
  virtual ~AsyncContext();

  AsyncContext& operator=(AsyncContext&& other);
  void Swap(AsyncContext& other);
  detail::IAsyncContext* GetPointerUnsafe() const;
  explicit operator bool() const;

  Result GetSystemEvent(os::SystemEvent* pOutEvent);
  Result Cancel();
  Result HasDone(bool* pOutIsDone) const;
  Result HasDone(bool* pOutIsDone);
  Result GetResult() const;
  Result GetResult();

 private:
  Uid m_Uid;
  detail::IAsyncContext* m_pContext;
};

}
