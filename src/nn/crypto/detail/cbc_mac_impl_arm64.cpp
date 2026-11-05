#include "nn/crypto/detail/cbc_mac_impl.hpp"

#include <arm_neon.h>
#include <string.h>

#include "nn/crypto/detail/aes_impl.hpp"
#include "nn/crypto/detail/update_impl.hpp"

namespace nn::crypto::detail {

void CbcMacImpl::UpdateGeneric(const void* data, size_t size) {
  [[clang::noinline]] UpdateImpl<void>(this, data, size);
}

void CbcMacImpl::ProcessBlocksGeneric(const void* data, int blockCount) {
  if (m_BufferedBytes == BlockSize) {
    ProcessBlock(m_Buffer);
    m_BufferedBytes = 0;
  }

  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  while (--blockCount > 0) {
    uint8x16_t block = veorq_u8(vld1q_u8(m_Mac), vld1q_u8(bytes));
    bytes += BlockSize;
    m_EncryptFunction(m_Mac, &block, m_CipherContext);
  }

  memcpy(m_Buffer, bytes, BlockSize);
  m_BufferedBytes = BlockSize;
}

template <typename BlockCipher>
void CbcMacImpl::Update(const void* data, size_t size) {
  UpdateImpl<BlockCipher>(this, data, size);
}

// The last block stays buffered so that it can still be masked.
template <typename BlockCipher>
void CbcMacImpl::ProcessBlocks(const void* data, int blockCount) {
  if (m_BufferedBytes == BlockSize) {
    ProcessBlock(m_Buffer);
    m_BufferedBytes = 0;
  }

  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  uint8x16_t mac = vld1q_u8(m_Mac);
  if (blockCount > 1) {
    const uint8x16_t* roundKey = reinterpret_cast<const uint8x16_t*>(
      static_cast<const BlockCipher*>(m_CipherContext)->GetRoundKey());
    uint8x16_t keys[11];
    for (int i = 0; i < 11; ++i) {
      keys[i] = roundKey[i];
    }

    while (--blockCount > 0) {
      uint8x16_t block = veorq_u8(mac, vld1q_u8(bytes));
      bytes += BlockSize;
      for (int i = 0; i < 9; ++i) {
        block = vaesmcq_u8(vaeseq_u8(block, keys[i]));
      }
      mac = veorq_u8(vaeseq_u8(block, keys[9]), keys[10]);
    }
  }

  vst1q_u8(m_Mac, mac);
  memcpy(m_Buffer, bytes, BlockSize);
  m_BufferedBytes = BlockSize;
}

template void CbcMacImpl::Update<AesEncryptor<16>>(const void*, size_t);
template void CbcMacImpl::ProcessBlocks<AesEncryptor<16>>(const void*, int);

}
