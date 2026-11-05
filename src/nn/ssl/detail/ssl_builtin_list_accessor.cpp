#include "nn/ssl/detail/ssl_builtin_list.hpp"
#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"

namespace nn::ssl::detail {

namespace {

constexpr uint32_t MinimumBufferSize = 0x800;

}

BuiltInList::Iterator::Iterator(const BuiltInList& list, uint32_t index)
  : m_pList(&list), m_Index(index) {}

BuiltInList::CertificateAccessor::CertificateAccessor(const BuiltInList& list,
  uint32_t index)
  : m_pList(&list), m_Index(index) {}

Result BuiltInList::CertificateAccessor::GetCertificate(
  BuiltInCertificateInfoBase* pOutInfo) {
  if (pOutInfo == nullptr) {
    return ResultInvalidPointer();
  }

  const BuiltInList* pList = m_pList;
  if (pList->m_pBuffer == nullptr || pList->m_Count == 0) {
    return ResultLibraryNotInitialized();
  }

  if (pList->m_BufferSize < MinimumBufferSize) {
    return ResultLibraryNotInitialized();
  }

  if (m_Index >= pList->m_Count) {
    return ResultInvalidCertIndex();
  }

  auto pService = ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  Result result = (*pService)->GetCertificate(
    nn::sf::OutBuffer(pOutInfo, sizeof(BuiltInCertificateInfoBase)),
    nn::sf::OutBuffer(m_pList->m_pBuffer, m_pList->m_BufferSize), m_Index);
  if (result.IsSuccess()) {
    pOutInfo->pCertificate = m_pList->m_pBuffer;
  }

  return result;
}

}
