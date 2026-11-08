#include "nn/crypto/aes_ctr.hpp"
#include "nn/crypto/detail/sha1_impl.hpp"
#include "nn/crypto/detail/sha256_impl.hpp"

extern "C" auto nncryptoEncryptAes128Ctr(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, void const* buffer4, unsigned long value4) {
  return nn::crypto::EncryptAes128Ctr(
    buffer, value, buffer2, value2, buffer3, value3, buffer4, value4);
}

extern "C" auto nncryptoDecryptAes128Ctr(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, void const* buffer4, unsigned long value4) {
  return nn::crypto::DecryptAes128Ctr(
    buffer, value, buffer2, value2, buffer3, value3, buffer4, value4);
}

extern "C" auto nncryptoEncryptAes192Ctr(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, void const* buffer4, unsigned long value4) {
  return nn::crypto::EncryptAes192Ctr(
    buffer, value, buffer2, value2, buffer3, value3, buffer4, value4);
}

extern "C" auto nncryptoDecryptAes192Ctr(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, void const* buffer4, unsigned long value4) {
  return nn::crypto::DecryptAes192Ctr(
    buffer, value, buffer2, value2, buffer3, value3, buffer4, value4);
}

extern "C" auto nncryptoEncryptAes256Ctr(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, void const* buffer4, unsigned long value4) {
  return nn::crypto::EncryptAes256Ctr(
    buffer, value, buffer2, value2, buffer3, value3, buffer4, value4);
}

extern "C" auto nncryptoDecryptAes256Ctr(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, void const* buffer4, unsigned long value4) {
  return nn::crypto::DecryptAes256Ctr(
    buffer, value, buffer2, value2, buffer3, value3, buffer4, value4);
}

extern "C" auto nncryptoEncryptAes128CtrPartial(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, long value4, void const* buffer4, unsigned long value5) {
  return nn::crypto::EncryptAes128CtrPartial(
    buffer, value, buffer2, value2, buffer3, value3, value4, buffer4, value5);
}

extern "C" auto nncryptoDecryptAes128CtrPartial(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, long value4, void const* buffer4, unsigned long value5) {
  return nn::crypto::DecryptAes128CtrPartial(
    buffer, value, buffer2, value2, buffer3, value3, value4, buffer4, value5);
}

extern "C" auto nncryptoEncryptAes192CtrPartial(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, long value4, void const* buffer4, unsigned long value5) {
  return nn::crypto::EncryptAes192CtrPartial(
    buffer, value, buffer2, value2, buffer3, value3, value4, buffer4, value5);
}

extern "C" auto nncryptoDecryptAes192CtrPartial(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, long value4, void const* buffer4, unsigned long value5) {
  return nn::crypto::DecryptAes192CtrPartial(
    buffer, value, buffer2, value2, buffer3, value3, value4, buffer4, value5);
}

extern "C" auto nncryptoEncryptAes256CtrPartial(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, long value4, void const* buffer4, unsigned long value5) {
  return nn::crypto::EncryptAes256CtrPartial(
    buffer, value, buffer2, value2, buffer3, value3, value4, buffer4, value5);
}

extern "C" auto nncryptoDecryptAes256CtrPartial(
  void* buffer, unsigned long value, void const* buffer2, unsigned long value2, void const* buffer3, unsigned long value3, long value4, void const* buffer4, unsigned long value5) {
  return nn::crypto::DecryptAes256CtrPartial(
    buffer, value, buffer2, value2, buffer3, value3, value4, buffer4, value5);
}

// The C generators start with the hash implementation they drive.
extern "C" void nncryptoHmacSha1GeneratorUpdate(void* pGenerator,
  const void* data, size_t size) {
  static_cast<nn::crypto::detail::Sha1Impl*>(pGenerator)->Update(data, size);
}

extern "C" void nncryptoSha256GeneratorInitialize(void* pGenerator) {
  static_cast<nn::crypto::detail::Sha256Impl*>(pGenerator)->Initialize();
}

extern "C" void nncryptoSha256GeneratorUpdate(void* pGenerator,
  const void* data, size_t size) {
  static_cast<nn::crypto::detail::Sha256Impl*>(pGenerator)->Update(data,
    size);
}

extern "C" void nncryptoSha256GeneratorFinalize(void* pGenerator, void* hash,
  size_t hashSize) {
  static_cast<nn::crypto::detail::Sha256Impl*>(pGenerator)->GetHash(hash,
    hashSize);
}
