#include "nn/crypto/aes_ctr.hpp"

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
