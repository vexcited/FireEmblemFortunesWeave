#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/detail/ctr_mode_impl.hpp"

namespace nn::crypto {

template <typename BlockCipher> class CtrEncryptor {
public:
  static constexpr size_t BlockSize = BlockCipher::BlockSize;

  void Initialize(const void* key, size_t keySize, const void* iv,
    size_t ivSize) {
    m_BlockCipher.Initialize(key, keySize);
    m_Impl.Initialize(&m_BlockCipher, iv, ivSize);
  }

  void Initialize(const void* key, size_t keySize, const void* iv,
    size_t ivSize, int64_t offset) {
    m_BlockCipher.Initialize(key, keySize);
    m_Impl.Initialize(&m_BlockCipher, iv, ivSize, offset);
  }

  void SwitchMessage(const void* iv, size_t ivSize) {
    m_Impl.SwitchMessage(iv, ivSize);
  }

  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize) {
    return m_Impl.Update(dst, dstSize, src, srcSize);
  }

private:
  BlockCipher m_BlockCipher = {};
  detail::CtrModeImpl<BlockCipher> m_Impl;
};

using Aes128CtrEncryptor = CtrEncryptor<AesEncryptor128>;
using Aes192CtrEncryptor = CtrEncryptor<AesEncryptor192>;
using Aes256CtrEncryptor = CtrEncryptor<AesEncryptor256>;

#define NN_CRYPTO_DECLARE_AES_CTR(bits)                                      \
  size_t EncryptAes##bits##Ctr(void* dst, size_t dstSize, const void* key,   \
    size_t keySize, const void* iv, size_t ivSize, const void* src,          \
    size_t srcSize);                                                         \
  size_t DecryptAes##bits##Ctr(void* dst, size_t dstSize, const void* key,   \
    size_t keySize, const void* iv, size_t ivSize, const void* src,          \
    size_t srcSize);                                                         \
  size_t EncryptAes##bits##CtrPartial(void* dst, size_t dstSize,             \
    const void* key, size_t keySize, const void* iv, size_t ivSize,          \
    int64_t offset, const void* src, size_t srcSize);                        \
  size_t DecryptAes##bits##CtrPartial(void* dst, size_t dstSize,             \
    const void* key, size_t keySize, const void* iv, size_t ivSize,          \
    int64_t offset, const void* src, size_t srcSize)

NN_CRYPTO_DECLARE_AES_CTR(128);
NN_CRYPTO_DECLARE_AES_CTR(192);
NN_CRYPTO_DECLARE_AES_CTR(256);

#undef NN_CRYPTO_DECLARE_AES_CTR

}
