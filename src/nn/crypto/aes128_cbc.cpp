#include "nn/crypto/detail/cbc_mode_impl.hpp"

namespace nn::crypto {

size_t DecryptAes128Cbc(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize) {
  Aes128CbcDecryptor decryptor;
  decryptor.Initialize(key, keySize, iv, ivSize);
  return decryptor.Update(dst, dstSize, src, srcSize);
}

size_t EncryptAes128Cbc(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize) {
  Aes128CbcEncryptor encryptor;
  encryptor.Initialize(key, keySize, iv, ivSize);
  return encryptor.Update(dst, dstSize, src, srcSize);
}

}
