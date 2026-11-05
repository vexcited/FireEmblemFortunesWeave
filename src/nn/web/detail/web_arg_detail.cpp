#include "nn/web/detail/web_arg_detail.hpp"

#include "nn/web/web_return_value.hpp"

namespace nn::web::detail {

const size_t CallbackUrlSize = 1024;

void ShowOfflinePageArgDetail::SetApplicationId(uint8_t* data,
  const ApplicationId& applicationId) {
  SetWebArgData(data, WebArgKind_ApplicationId, applicationId);
}

void ShowOfflinePageArgDetail::SetDocumentPath(uint8_t* data, size_t size,
  const char* path) {
  SetWebArgString(data, WebArgKind_DocumentPath, path, size);
}

void ShowOfflinePageArgDetail::SetDocumentKind(uint8_t* data,
  const OfflineDocumentKind& kind) {
  SetWebArgData(data, WebArgKind_DocumentKind, kind);
}

void ShowOfflinePageArgDetail::SetSystemDataId(uint8_t* data,
  const ncm::SystemDataId& systemDataId) {
  SetWebArgData(data, WebArgKind_SystemDataId, systemDataId);
}

void ShowOfflinePageArgDetail::SetPointerEnabled(uint8_t* data,
  bool isEnabled) {
  SetWebArgData(data, WebArgKind_PointerEnabled, isEnabled);
}

void ShowOfflinePageArgDetail::SetLeftStickMode(uint8_t* data,
  const OfflineLeftStickMode& mode) {
  const OfflineLeftStickMode value = mode;
  SetWebArgData(data, WebArgKind_LeftStickMode, value);
}

void ShowSharePageArgDetail::SetCallbackUrl(uint8_t* data, const char* url) {
  SetWebArgString(data, WebArgKind_CallbackUrl, url, CallbackUrlSize);
}

void ShowOfflineHtmlPageArgWriter::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

void ShowWebPageArgWriter::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

void ShowLobbyPageArgWriter::PushToInChannel(
  applet::LibraryAppletHandle handle) const {
  PushWebArgToInChannel(handle, m_Data);
}

void SharePageReturnValue2_0::SetLastUrl(const char* url) {
  size_t size = strlen(url) + 1;
  if (size >= sizeof(m_LastUrl)) {
    size = sizeof(m_LastUrl);
  }

  memcpy(m_LastUrl, url, size);
  m_LastUrlSize = size;
  m_LastUrl[sizeof(m_LastUrl) - 1] = '\0';
}

void WebPageReturnValue6_0::SetLastUrl(const char* url) {
  size_t size = strlen(url) + 1;
  if (size >= sizeof(m_LastUrl)) {
    size = sizeof(m_LastUrl);
  }

  memcpy(m_LastUrl, url, size);
  m_LastUrlSize = size;
  m_LastUrl[sizeof(m_LastUrl) - 1] = '\0';
}

}
