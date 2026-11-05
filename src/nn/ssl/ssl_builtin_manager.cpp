#include "nn/ssl/detail/ssl_service.hpp"
#include "nn/ssl/ssl_result.hpp"
#include "nn/ssl/ssl_types.hpp"

namespace nn::ssl {

Result BuiltInManager::GetBuiltInCertificates(
  BuiltInCertificateInfoBase** ppOutInfos, uint8_t* buffer,
  uint32_t bufferSize, CaCertificateId* ids, uint32_t idCount) {
  if (ppOutInfos == nullptr || buffer == nullptr || ids == nullptr) {
    return ResultInvalidPointer();
  }

  if (bufferSize == 0) {
    return ResultBufferTooShort();
  }

  if (idCount == 0) {
    return ResultNoCertificateId();
  }

  auto pService = detail::ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  uint32_t count = idCount;
  Result result = (*pService)->GetCertificates(
    nn::sf::OutBuffer(buffer, bufferSize), nn::sf::Out<uint32_t>(&count),
    nn::sf::InBuffer(ids, idCount * sizeof(CaCertificateId)));
  if (result.IsFailure()) {
    return result;
  }

  // The service writes buffer offsets into the low half of the pointers.
  auto pInfos = reinterpret_cast<BuiltInCertificateInfoBase*>(buffer);
  for (uint32_t i = 0; i < count; ++i) {
    uint32_t offset =
      *reinterpret_cast<const uint32_t*>(&pInfos[i].pCertificate);
    pInfos[i].pCertificate = buffer + offset;
  }

  *ppOutInfos = pInfos;
  return result;
}

Result BuiltInManager::GetBuiltInCertificateBufSize(uint32_t* pOutSize,
  CaCertificateId* ids, uint32_t idCount) {
  if (pOutSize == nullptr || ids == nullptr) {
    return ResultInvalidPointer();
  }

  if (idCount == 0) {
    return ResultNoCertificateId();
  }

  auto pService = detail::ServiceSession::GetServiceSession();
  if (pService == nullptr || pService->Get() == nullptr) {
    return ResultLibraryNotInitialized();
  }

  uint32_t size = 0;
  Result result = (*pService)->GetCertificateBufSize(
    nn::sf::Out<uint32_t>(&size),
    nn::sf::InBuffer(ids, idCount * sizeof(CaCertificateId)));
  if (result.IsSuccess()) {
    *pOutSize = size;
  }

  return result;
}

}
