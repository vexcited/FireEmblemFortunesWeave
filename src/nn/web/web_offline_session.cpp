#include "nn/web/web_offline_session.hpp"

namespace nn::web {

namespace {

// The session works in a caller provided buffer of this size.
const size_t WorkBufferSize = 0xd0;

}

OfflineWebSession::OfflineWebSession() : m_pImpl(nullptr) {}

OfflineWebSession::~OfflineWebSession() {}

size_t OfflineWebSession::GetWorkBufferSize() {
  return WorkBufferSize;
}

bool OfflineWebSession::NeedsWaitForExit() const {
  return m_pImpl->HasLibraryApplet();
}

bool OfflineWebSession::Appear() {
  return m_pImpl->appear();
}

void OfflineWebSession::RequestExit() {
  m_pImpl->requestExit();
}

bool OfflineWebSession::TrySendContentMessage(
  const char* content, size_t size) {
  return m_pImpl->trySendContentMessage(content, static_cast<uint32_t>(size));
}

bool OfflineWebSession::TryReceiveContentMessage(
  size_t* pOutSize, char* buffer, size_t size) {
  return m_pImpl->tryReceiveContentMessage(pOutSize, buffer, size);
}

}
