#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"

namespace nn::web::detail {

enum WebSessionSendMessageKind : int32_t {
  WebSessionSendMessageKind_BrowserEngineContent = 0,
  WebSessionSendMessageKind_SystemMessageAppear = 0x100,
};

enum WebSessionSendMessageGroupKind : int32_t {
  WebSessionSendMessageGroupKind_BrowserEngine,
  WebSessionSendMessageGroupKind_System,
  WebSessionSendMessageGroupKind_Unknown,
};

WebSessionSendMessageGroupKind GetWebSessionSendMessageGroupKind(
  WebSessionSendMessageKind kind);
bool WebSessionSendBrowserEngineMessageGroupIncludes(
  WebSessionSendMessageKind kind);
bool WebSessionSendSystemMessageGroupIncludes(WebSessionSendMessageKind kind);

class WebSessionImpl {
 public:
  bool appear();
  bool requestExit();
  bool trySendContentMessage(const char* content, uint32_t size);
  bool tryReceiveContentMessage(size_t* pOutSize, char* buffer, size_t size);

  bool HasLibraryApplet() const {
    return m_LibraryAppletHandle._p != nullptr;
  }

 private:
  uint8_t m_Reserved[0x20];
  applet::LibraryAppletHandle m_LibraryAppletHandle;
};

}
