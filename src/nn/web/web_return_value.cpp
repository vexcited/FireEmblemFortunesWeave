#include "nn/web/web_return_value.hpp"

namespace nn::web {

LobbyPageReturnValue::LobbyPageReturnValue()
  : m_ExitReason(LobbyExitReason_Unknown), m_LastUrl(), m_LastUrlSize(0) {}

LobbyExitReason LobbyPageReturnValue::GetLobbyExitReason() const {
  return static_cast<LobbyExitReason>(m_ExitReason);
}

const char* LobbyPageReturnValue::GetLastUrl() const {
  return m_LastUrl;
}

size_t LobbyPageReturnValue::GetLastUrlSize() const {
  return m_LastUrlSize;
}

OfflineHtmlPageReturnValue::OfflineHtmlPageReturnValue()
  : m_ExitReason(OfflineExitReason_Unknown), m_LastUrl(), m_LastUrlSize(0) {}

OfflineExitReason OfflineHtmlPageReturnValue::GetOfflineExitReason() const {
  return static_cast<OfflineExitReason>(m_ExitReason);
}

const char* OfflineHtmlPageReturnValue::GetLastUrl() const {
  return m_LastUrl;
}

size_t OfflineHtmlPageReturnValue::GetLastUrlSize() const {
  return m_LastUrlSize;
}

SharePageReturnValue::SharePageReturnValue() : m_Data() {}

WebPageReturnValue::WebPageReturnValue() : m_Data() {}

const uint8_t* WebPageReturnValue::Data() const {
  return m_Data;
}

namespace detail {

SharePageReturnValue2_0::SharePageReturnValue2_0()
  : m_ExitReason(20), m_LastUrl(), m_LastUrlSize(0) {}

void SharePageReturnValue2_0::SetShareExitReason(ShareExitReason exitReason) {
  m_ExitReason = static_cast<uint32_t>(exitReason);
}

WebPageReturnValue6_0::WebPageReturnValue6_0()
  : m_ExitReason(0), m_LastUrl(), m_LastUrlSize(0) {}

void WebPageReturnValue6_0::SetWebExitReason(WebExitReason exitReason) {
  m_ExitReason = static_cast<uint32_t>(exitReason);
}

}

}
