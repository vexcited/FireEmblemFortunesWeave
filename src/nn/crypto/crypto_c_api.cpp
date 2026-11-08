#include "nn/crypto/aes_ctr.hpp"
#include "nn/crypto/detail/sha1_impl.hpp"
#include "nn/crypto/detail/sha256_impl.hpp"

namespace {

using nn::crypto::Aes128CtrEncryptor;
using nn::crypto::Aes192CtrEncryptor;
using nn::crypto::Aes256CtrEncryptor;

}

// The C objects are the C++ ones, counter mode decrypts the same way it
// encrypts.
#define NN_CRYPTO_C_AES_CTR(Name, Type)                                      \
  extern "C" void nncrypto##Name##Initialize(void* pObject,                  \
    const void* key, size_t keySize, const void* iv, size_t ivSize) {        \
    static_cast<Type*>(pObject)->Initialize(key, keySize, iv, ivSize);      \
  }                                                                          \
                                                                             \
  extern "C" void nncrypto##Name##SwitchMessage(void* pObject,               \
    const void* iv, size_t ivSize) {                                         \
    static_cast<Type*>(pObject)->SwitchMessage(iv, ivSize);                  \
  }                                                                          \
                                                                             \
  extern "C" size_t nncrypto##Name##Update(void* pObject, void* dst,         \
    size_t dstSize, const void* src, size_t srcSize) {                       \
    return static_cast<Type*>(pObject)->Update(dst, dstSize, src, srcSize); \
  }

NN_CRYPTO_C_AES_CTR(Aes128CtrEncryptor, Aes128CtrEncryptor)
NN_CRYPTO_C_AES_CTR(Aes128CtrDecryptor, Aes128CtrEncryptor)
NN_CRYPTO_C_AES_CTR(Aes192CtrEncryptor, Aes192CtrEncryptor)
NN_CRYPTO_C_AES_CTR(Aes192CtrDecryptor, Aes192CtrEncryptor)
NN_CRYPTO_C_AES_CTR(Aes256CtrEncryptor, Aes256CtrEncryptor)
NN_CRYPTO_C_AES_CTR(Aes256CtrDecryptor, Aes256CtrEncryptor)

#undef NN_CRYPTO_C_AES_CTR

#define NN_CRYPTO_C_AES_CTR_ONE_SHOT(Name)                                   \
  extern "C" auto nncrypto##Name(void* dst, size_t dstSize, const void* key, \
    size_t keySize, const void* iv, size_t ivSize, const void* src,          \
    size_t srcSize) {                                                        \
    return nn::crypto::Name(dst, dstSize, key, keySize, iv, ivSize, src,     \
      srcSize);                                                              \
  }                                                                          \
                                                                             \
  extern "C" auto nncrypto##Name##Partial(void* dst, size_t dstSize,         \
    const void* key, size_t keySize, const void* iv, size_t ivSize,          \
    int64_t offset, const void* src, size_t srcSize) {                       \
    return nn::crypto::Name##Partial(dst, dstSize, key, keySize, iv, ivSize, \
      offset, src, srcSize);                                                 \
  }

NN_CRYPTO_C_AES_CTR_ONE_SHOT(EncryptAes128Ctr)
NN_CRYPTO_C_AES_CTR_ONE_SHOT(DecryptAes128Ctr)
NN_CRYPTO_C_AES_CTR_ONE_SHOT(EncryptAes192Ctr)
NN_CRYPTO_C_AES_CTR_ONE_SHOT(DecryptAes192Ctr)
NN_CRYPTO_C_AES_CTR_ONE_SHOT(EncryptAes256Ctr)
NN_CRYPTO_C_AES_CTR_ONE_SHOT(DecryptAes256Ctr)

#undef NN_CRYPTO_C_AES_CTR_ONE_SHOT

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
