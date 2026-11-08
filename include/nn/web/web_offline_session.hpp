#pragma once

#include <stddef.h>

#include "nn/result.hpp"
#include "nn/web/detail/web_session_impl.hpp"
#include "nn/web/web_offline_html_page_arg.hpp"
#include "nn/web/web_return_value.hpp"

namespace nn::web {

class OfflineWebSession {
 public:
  OfflineWebSession();
  ~OfflineWebSession();

  static size_t GetWorkBufferSize();
  void Initialize(void* buffer, size_t size);
  void Start(os::SystemEventType** pOutEvent,
    const ShowOfflineHtmlPageArg& arg);
  void Finalize();
  Result WaitForExit(OfflineHtmlPageReturnValue* pOutValue);
  bool NeedsWaitForExit() const;
  bool Appear();
  void RequestExit();
  bool TrySendContentMessage(const char* content, size_t size);
  bool TryReceiveContentMessage(size_t* pOutSize, char* buffer, size_t size);

 private:
  detail::WebSessionImpl* m_pImpl;
};

}
