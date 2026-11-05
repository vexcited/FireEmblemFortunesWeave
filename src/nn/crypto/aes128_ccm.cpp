#include "nn/crypto/aes_ccm.hpp"

namespace nn::crypto {

size_t DecryptAes128Ccm(void* dst, size_t dstSize, void* mac, size_t macSize,
  const void* key, size_t keySize, const void* nonce, size_t nonceSize,
  const void* src, size_t srcSize, const void* aad, size_t aadSize,
  size_t macLength) {
  Aes128CcmDecryptor decryptor;
  decryptor.Initialize(key, keySize, nonce, nonceSize, aadSize, srcSize,
    macLength);
  if (aadSize != 0) {
    decryptor.UpdateAad(aad, aadSize);
  }

  size_t processed = 0;
  if (srcSize != 0) {
    processed = decryptor.Update(dst, dstSize, src, srcSize);
  }

  decryptor.GetMac(mac, macSize);
  return processed;
}

size_t EncryptAes128Ccm(void* dst, size_t dstSize, void* mac, size_t macSize,
  const void* key, size_t keySize, const void* nonce, size_t nonceSize,
  const void* src, size_t srcSize, const void* aad, size_t aadSize,
  size_t macLength) {
  Aes128CcmEncryptor encryptor;
  encryptor.Initialize(key, keySize, nonce, nonceSize, aadSize, srcSize,
    macLength);
  if (aadSize != 0) {
    encryptor.UpdateAad(aad, aadSize);
  }

  size_t processed = 0;
  if (srcSize != 0) {
    processed = encryptor.Update(dst, dstSize, src, srcSize);
  }

  encryptor.GetMac(mac, macSize);
  return processed;
}

}
