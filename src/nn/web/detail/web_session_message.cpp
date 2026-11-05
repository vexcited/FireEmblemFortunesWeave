#include "nn/web/detail/web_session_impl.hpp"

namespace nn::web::detail {

WebSessionSendMessageGroupKind GetWebSessionSendMessageGroupKind(
  WebSessionSendMessageKind kind) {
  if (WebSessionSendBrowserEngineMessageGroupIncludes(kind)) {
    return WebSessionSendMessageGroupKind_BrowserEngine;
  }
  if (WebSessionSendSystemMessageGroupIncludes(kind)) {
    return WebSessionSendMessageGroupKind_System;
  }
  return WebSessionSendMessageGroupKind_Unknown;
}

bool WebSessionSendBrowserEngineMessageGroupIncludes(
  WebSessionSendMessageKind kind) {
  return kind == WebSessionSendMessageKind_BrowserEngineContent;
}

bool WebSessionSendSystemMessageGroupIncludes(WebSessionSendMessageKind kind) {
  return kind == WebSessionSendMessageKind_SystemMessageAppear;
}

}
