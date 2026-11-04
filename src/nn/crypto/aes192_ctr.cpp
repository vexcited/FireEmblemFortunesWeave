#include "nn/crypto/aes_ctr.hpp"

namespace nn::crypto {

template class detail::CtrModeImpl<AesEncryptor<24>>;

size_t EncryptAes192Ctr(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize) {
  Aes192CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

size_t DecryptAes192Ctr(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize) {
  Aes192CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

size_t EncryptAes192CtrPartial(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, int64_t offset,
  const void* src, size_t srcSize) {
  Aes192CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize, offset);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

size_t DecryptAes192CtrPartial(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, int64_t offset,
  const void* src, size_t srcSize) {
  Aes192CtrEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize, offset);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

}
