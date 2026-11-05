#include <string.h>

#include "nn/ssl/detail/ssl_builtin_data.hpp"

namespace nn::ssl::detail {

Sha256Digest::Sha256Digest() : value() {}

bool Sha256Digest::operator==(const Sha256Digest& other) const {
  return memcmp(value, other.value, sizeof(value)) == 0;
}

BuiltinDataInfo::BuiltinDataInfo(uint32_t id, BuiltinDataStatus status,
  const char* name, BuiltinDataLoader* pLoader, const Sha256Digest& digest)
  : m_Id(id), m_Status(status), m_pName(name), m_pLoader(pLoader),
    m_Digest(digest) {}

BuiltinDataInfo::~BuiltinDataInfo() {}

uint32_t BuiltinDataInfo::GetId() const {
  return m_Id;
}

BuiltinDataInfo::BuiltinDataStatus BuiltinDataInfo::GetStatus() const {
  return m_Status;
}

const char* BuiltinDataInfo::GetName() const {
  return m_pName;
}

Result BuiltinDataInfo::GetData(uint8_t* pOutBuffer, uint32_t bufferSize,
  uint32_t* pOutSize) {
  return m_pLoader->GetData(pOutBuffer, bufferSize, pOutSize);
}

uint32_t BuiltinDataInfo::GetDataSize() const {
  return m_pLoader->GetDataSize();
}

const Sha256Digest& BuiltinDataInfo::GetDigest() const {
  return m_Digest;
}

}
