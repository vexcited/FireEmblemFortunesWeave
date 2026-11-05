#include "nn/web/web_session.hpp"

namespace nn::web {

namespace {

// The session works in a caller provided buffer of this size.
const size_t WorkBufferSize = 0xd0;

}

WebSession::WebSession() : m_pImpl(nullptr) {}

WebSession::~WebSession() {}

size_t WebSession::GetWorkBufferSize() {
  return WorkBufferSize;
}

bool WebSession::NeedsWaitForExit() const {
  return m_pImpl->HasLibraryApplet();
}

bool WebSession::Appear() {
  return m_pImpl->appear();
}

bool WebSession::RequestExit() {
  return m_pImpl->requestExit();
}

bool WebSession::TrySendContentMessage(const char* content, size_t size) {
  return m_pImpl->trySendContentMessage(content, static_cast<uint32_t>(size));
}

bool WebSession::TryReceiveContentMessage(
  size_t* pOutSize, char* buffer, size_t size) {
  return m_pImpl->tryReceiveContentMessage(pOutSize, buffer, size);
}

}
