#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/detail/aes_impl.hpp"
#include "nn/crypto/detail/ccm_mode_impl.hpp"

namespace nn::crypto {

template <typename BlockCipher> class CcmEncryptor {
public:
  void Initialize(const void* key, size_t keySize, const void* nonce,
    size_t nonceSize, int64_t aadSize, int64_t dataSize, size_t macSize) {
    m_BlockCipher.Initialize(key, keySize);
    m_Impl.Initialize(&m_BlockCipher, nonce, nonceSize, aadSize, dataSize,
      macSize);
  }

  void UpdateAad(const void* aad, size_t aadSize) {
    m_Impl.UpdateAad(aad, aadSize);
  }

  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize) {
    return m_Impl.Encrypt(dst, dstSize, src, srcSize);
  }

  void GetMac(void* mac, size_t macSize) {
    m_Impl.GetMac(mac, macSize);
  }

private:
  BlockCipher m_BlockCipher;
  detail::CcmModeImpl<BlockCipher> m_Impl;
};

template <typename BlockCipher> class CcmDecryptor {
public:
  void Initialize(const void* key, size_t keySize, const void* nonce,
    size_t nonceSize, int64_t aadSize, int64_t dataSize, size_t macSize) {
    m_BlockCipher.Initialize(key, keySize);
    m_Impl.Initialize(&m_BlockCipher, nonce, nonceSize, aadSize, dataSize,
      macSize);
  }

  void UpdateAad(const void* aad, size_t aadSize) {
    m_Impl.UpdateAad(aad, aadSize);
  }

  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize) {
    return m_Impl.Decrypt(dst, dstSize, src, srcSize);
  }

  void GetMac(void* mac, size_t macSize) {
    m_Impl.GetMac(mac, macSize);
  }

private:
  BlockCipher m_BlockCipher;
  detail::CcmModeImpl<BlockCipher> m_Impl;
};

using Aes128CcmEncryptor = CcmEncryptor<AesEncryptor128>;
using Aes128CcmDecryptor = CcmDecryptor<AesEncryptor128>;

size_t EncryptAes128Ccm(void* dst, size_t dstSize, void* mac, size_t macSize,
  const void* key, size_t keySize, const void* nonce, size_t nonceSize,
  const void* src, size_t srcSize, const void* aad, size_t aadSize,
  size_t macLength);
size_t DecryptAes128Ccm(void* dst, size_t dstSize, void* mac, size_t macSize,
  const void* key, size_t keySize, const void* nonce, size_t nonceSize,
  const void* src, size_t srcSize, const void* aad, size_t aadSize,
  size_t macLength);

}
