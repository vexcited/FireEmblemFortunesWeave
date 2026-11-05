#include <new>
#include <string.h>

#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"
#include "nn/ssl/ssl_types.hpp"

namespace nn::ssl {

namespace {

detail::ContextSession* GetSession(uint64_t contextId) {
  return detail::GetSessionFromId<detail::ContextSession>(contextId);
}

}

Context::Context() : m_ContextId(0) {}

Context::~Context() {}

Result Context::Create(SslVersion version) {
  auto pSystemService = detail::ServiceSession::GetServiceSessionForSystem();
  bool isSystem = pSystemService != nullptr && pSystemService->Get() != nullptr;
  auto pService = detail::ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  void* storage = detail::SslMemoryManager::AllocateChunk(
    sizeof(detail::ContextSession), 0);
  if (storage == nullptr) {
    return ResultInsufficientMemory();
  }

  auto pSession = new (storage) detail::ContextSession();
  Result result;
  if (isSystem) {
    result = (*pSystemService)->CreateContextForSystem(
      nn::sf::Out<detail::ContextSession>(pSession), version, 0);
  }
  else {
    result = (*pService)->CreateContext(
      nn::sf::Out<detail::ContextSession>(pSession), version, 0);
  }

  if (result.IsFailure()) {
    pSession->~SharedPointer();
    detail::SslMemoryManager::Free(pSession, 0);
    return result;
  }

  m_ContextId = detail::GetIdFromSession(pSession);
  return Result{};
}

Result Context::Destroy() {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  uint32_t connectionCount = 0;
  Result result = (*pSession)->GetConnectionCount(
    nn::sf::Out<uint32_t>(&connectionCount));
  if (result.IsFailure()) {
    return result;
  }

  if (connectionCount != 0) {
    return ResultConnectionRemaining();
  }

  m_ContextId = 0;
  pSession->Reset();
  pSession->~SharedPointer();
  detail::SslMemoryManager::Free(pSession, 0);
  return Result{};
}

Result Context::SetOption(ContextOption option, int value) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->SetOption(option, value);
}

Result Context::GetOption(int* pOutValue, ContextOption option) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->GetOption(nn::sf::Out<int>(pOutValue), option);
}

Result Context::GetContextId(uint64_t* pOutValue) {
  if (pOutValue == nullptr) {
    return ResultInvalidPointer();
  }

  *pOutValue = m_ContextId;
  return Result{};
}

Result Context::ImportServerPki(uint64_t* pOutId, const char* certificate,
  uint32_t certificateSize, CertificateFormat format) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutId == nullptr || certificate == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->ImportServerPki(nn::sf::Out<uint64_t>(pOutId),
    nn::sf::InBuffer(certificate, certificateSize), format);
}

Result Context::ImportClientPki(uint64_t* pOutId, const char* p12,
  const char* password, uint32_t p12Size, uint32_t passwordSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutId == nullptr || p12 == nullptr ||
    (password == nullptr && passwordSize != 0)) {
    return ResultInvalidPointer();
  }

  if (password != nullptr && passwordSize == 0) {
    return ResultInvalidPassword();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->ImportClientPki(nn::sf::Out<uint64_t>(pOutId),
    nn::sf::InBuffer(p12, p12Size), nn::sf::InBuffer(password, passwordSize));
}

Result Context::RemovePki(uint64_t id) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  // The id kind is unknown here, so each list is tried in turn.
  Result result = (*pSession)->RemoveServerPki(id);
  if (result.GetInnerValueForDebug() != ResultPkiNotFound().value) {
    return result;
  }

  result = (*pSession)->RemoveClientPki(id);
  if (result.GetInnerValueForDebug() != ResultPkiNotFound().value) {
    return result;
  }

  return (*pSession)->RemoveCrl(id);
}

Result Context::RegisterInternalPki(uint64_t* pOutId, InternalPki pki) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->RegisterInternalPki(nn::sf::Out<uint64_t>(pOutId), pki);
}

Result Context::AddPolicyOid(const char* oid, uint32_t oidSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (oid == nullptr) {
    return ResultInvalidPointer();
  }

  if (oidSize > 0xff) {
    return ResultPolicyOidTooLong();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->AddPolicyOid(nn::sf::InBuffer(oid, oidSize));
}

Result Context::ImportCrl(uint64_t* pOutId, const char* crl,
  uint32_t crlSize) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutId == nullptr || crl == nullptr) {
    return ResultInvalidPointer();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->ImportCrl(nn::sf::Out<uint64_t>(pOutId),
    nn::sf::InBuffer(crl, crlSize));
}

Result ContextPrivate::ImportClientPki(uint64_t* pOutId,
  const char* certificate, const char* key, uint32_t certificateSize,
  uint32_t keySize, CertificateFormat format) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (certificate == nullptr || key == nullptr) {
    return ResultInvalidPointer();
  }

  if (certificateSize == 0 || keySize == 0) {
    return ResultInvalidArgument();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->ImportClientCertKeyPki(nn::sf::Out<uint64_t>(pOutId),
    nn::sf::InBuffer(certificate, certificateSize),
    nn::sf::InBuffer(key, keySize), format);
}

ContextPrivate::KeyAndCertParams::KeyAndCertParams()
  : keyType(0), keySize(0), pSubject(nullptr), commonName(),
    commonNameLength(0) {}

Result ContextPrivate::GeneratePrivateKeyAndCert(char* pOutCertificate,
  uint32_t* pOutCertificateSize, char* pOutKey, uint32_t* pOutKeySize,
  uint32_t certificateBufferSize, uint32_t keyBufferSize,
  const KeyAndCertParams& params) {
  if (!detail::ServiceSession::IsInitialized()) {
    return ResultLibraryNotInitialized();
  }

  if (pOutCertificate == nullptr || pOutCertificateSize == nullptr ||
    pOutKey == nullptr || pOutKeySize == nullptr) {
    return ResultInvalidPointer();
  }

  if (certificateBufferSize == 0 || keyBufferSize == 0 ||
    params.keySize == 0 || params.pSubject == nullptr ||
    params.commonNameLength == 0) {
    return ResultInvalidArgument();
  }

  if (params.commonNameLength >= sizeof(params.commonName)) {
    return ResultCommonNameTooLong();
  }

  if (strnlen(params.commonName, sizeof(params.commonName)) !=
    params.commonNameLength) {
    return ResultInvalidArgument();
  }

  detail::ContextSession* pSession = GetSession(m_ContextId);
  if (pSession == nullptr || pSession->Get() == nullptr) {
    return ResultInvalidContext();
  }

  return (*pSession)->GeneratePrivateKeyAndCert(
    nn::sf::OutBuffer(pOutCertificate, certificateBufferSize),
    nn::sf::Out<uint32_t>(pOutCertificateSize),
    nn::sf::OutBuffer(pOutKey, keyBufferSize),
    nn::sf::Out<uint32_t>(pOutKeySize), true,
    nn::sf::InBuffer(&params, sizeof(params)));
}

}
