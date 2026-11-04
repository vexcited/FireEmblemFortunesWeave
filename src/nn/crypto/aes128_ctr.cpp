#include "nn/crypto/aes_ctr.hpp"

namespace nn::crypto {

template class detail::CtrModeImpl<AesEncryptor<16>>;

size_t EncryptAes128Ctr(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize) {
  Aes128CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

size_t DecryptAes128Ctr(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize) {
  Aes128CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

size_t EncryptAes128CtrPartial(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, int64_t offset,
  const void* src, size_t srcSize) {
  Aes128CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize, offset);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

size_t DecryptAes128CtrPartial(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, int64_t offset,
  const void* src, size_t srcSize) {
  Aes128CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize, offset);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

}
