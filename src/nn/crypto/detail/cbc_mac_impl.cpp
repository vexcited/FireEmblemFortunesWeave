#include "nn/crypto/detail/cbc_mac_impl.hpp"

#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

CbcMacImpl::~CbcMacImpl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void CbcMacImpl::ProcessPartialData(const void* data, size_t size) {
  memcpy(m_Buffer + m_BufferedBytes, data, size);
  m_BufferedBytes += size;
}

void CbcMacImpl::ProcessRemainingData(const void* data, size_t size) {
  if (m_BufferedBytes == BlockSize) {
    ProcessBlock(m_Buffer);
    m_BufferedBytes = 0;
  }

  memcpy(m_Buffer, data, size);
  m_BufferedBytes = size;
}

void CbcMacImpl::ProcessBlock(const void* data) {
  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  uint8_t block[BlockSize];
  for (size_t i = 0; i < BlockSize; ++i) {
    block[i] = bytes[i] ^ m_Mac[i];
  }

  m_EncryptFunction(m_Mac, block, m_CipherContext);
}

void CbcMacImpl::GetMac(void* mac, size_t macSize) {
  if (m_State == State_Initialized) {
    if (m_BufferedBytes == sizeof(m_Buffer)) {
      ProcessBlock(m_Buffer);
      m_BufferedBytes = 0;
    }
    m_State = State_Done;
  }

  memcpy(mac, m_Mac, sizeof(m_Mac));
}

void CbcMacImpl::MaskBufferedData(const void* data, size_t size) {
  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  for (size_t i = 0; i < BlockSize; ++i) {
    m_Buffer[i] ^= bytes[i];
  }
}

}
