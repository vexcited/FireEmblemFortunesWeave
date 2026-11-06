#include "nn/crypto/aes_ctr.hpp"

namespace nn::crypto {

// The original inlines the destructor, which an explicit instantiation of
// the whole class would turn into an alias call.
template void detail::CtrModeImpl<AesEncryptor<16>>::Initialize(
  const AesEncryptor<16>* blockCipher, const void* iv, size_t ivSize,
  int64_t offset);
template size_t detail::CtrModeImpl<AesEncryptor<16>>::Update(void* dst,
  size_t dstSize, const void* src, size_t srcSize);
template void detail::CtrModeImpl<AesEncryptor<16>>::IncrementCounter();

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
