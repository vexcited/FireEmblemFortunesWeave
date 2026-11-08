#pragma once

#include <stddef.h>

#include "nn/result.hpp"
#include "nn/web/detail/web_session_impl.hpp"
#include "nn/web/web_page_arg.hpp"
#include "nn/web/web_return_value.hpp"

namespace nn::web {

class WebSession {
 public:
  WebSession();
  ~WebSession();

  static size_t GetWorkBufferSize();
  void Initialize(void* buffer, size_t size);
  void Start(os::SystemEventType** pOutEvent, const ShowWebPageArg& arg);
  void Finalize();
  Result WaitForExit(WebPageReturnValue* pOutValue);
  bool NeedsWaitForExit() const;
  bool Appear();
  void RequestExit();
  bool TrySendContentMessage(const char* content, size_t size);
  bool TryReceiveContentMessage(size_t* pOutSize, char* buffer, size_t size);

 private:
  detail::WebSessionImpl* m_pImpl;
};

}
