#include <stddef.h>
#include <stdint.h>

namespace {

// The C objects hold the block cipher first and the mode after it, whose
// hash state follows the counter block.
constexpr size_t Aes128GcmOffset = 0xb0;
constexpr size_t Aes256GcmOffset = 0xf0;
constexpr size_t GhashOffset = 0x18;

[[gnu::always_inline]] inline void* At(void* object, size_t offset) {
  return static_cast<uint8_t*>(object) + offset;
}

}

namespace nn::crypto::detail {

class GhashImpl {
public:
  void Update(const void* data, size_t size);
};

}

extern "C" {

#define NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS                                     \
  void* dst, size_t dstSize, void* mac, size_t macSize, const void* key,     \
  size_t keySize, const void* iv, size_t ivSize, const void* src,            \
  size_t srcSize, const void* aad, size_t aadSize
#define NN_CRYPTO_GCM_ONE_SHOT_ARGUMENTS                                      \
  dst, dstSize, mac, macSize, key, keySize, iv, ivSize, src, srcSize, aad,   \
  aadSize

[[gnu::visibility("hidden")]] size_t __nncrypto_EncryptAes128Gcm(
  NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS);
[[gnu::visibility("hidden")]] size_t __nncrypto_DecryptAes128Gcm(
  NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS);
[[gnu::visibility("hidden")]] size_t __nncrypto_EncryptAes256Gcm(
  NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS);
[[gnu::visibility("hidden")]] size_t __nncrypto_DecryptAes256Gcm(
  NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS);
[[gnu::visibility("hidden")]] void __nncrypto_ResetAes128Gcm(void* mode,
  const void* iv, size_t ivSize);
[[gnu::visibility("hidden")]] void __nncrypto_ResetAes256Gcm(void* mode,
  const void* iv, size_t ivSize);
[[gnu::visibility("hidden")]] void __nncrypto_GetGcmMac(void* mode, void* mac,
  size_t macSize);

size_t nncryptoEncryptAes128Gcm(NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS) {
  return __nncrypto_EncryptAes128Gcm(NN_CRYPTO_GCM_ONE_SHOT_ARGUMENTS);
}

size_t nncryptoDecryptAes128Gcm(NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS) {
  return __nncrypto_DecryptAes128Gcm(NN_CRYPTO_GCM_ONE_SHOT_ARGUMENTS);
}

size_t nncryptoEncryptAes256Gcm(NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS) {
  return __nncrypto_EncryptAes256Gcm(NN_CRYPTO_GCM_ONE_SHOT_ARGUMENTS);
}

size_t nncryptoDecryptAes256Gcm(NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS) {
  return __nncrypto_DecryptAes256Gcm(NN_CRYPTO_GCM_ONE_SHOT_ARGUMENTS);
}

#undef NN_CRYPTO_GCM_ONE_SHOT_PARAMETERS
#undef NN_CRYPTO_GCM_ONE_SHOT_ARGUMENTS

#define NN_CRYPTO_C_AES_GCM(Name, Bits)                                       \
  void nncrypto##Name##Reset(void* object, const void* iv, size_t ivSize) {  \
    __nncrypto_ResetAes##Bits##Gcm(At(object, Aes##Bits##GcmOffset), iv,     \
      ivSize);                                                               \
  }                                                                          \
                                                                             \
  void nncrypto##Name##UpdateAad(void* object, const void* aad,              \
    size_t size) {                                                           \
    static_cast<nn::crypto::detail::GhashImpl*>(                             \
      At(object, Aes##Bits##GcmOffset + GhashOffset))->Update(aad, size);    \
  }                                                                          \
                                                                             \
  void nncrypto##Name##GetMac(void* object, void* mac, size_t macSize) {     \
    __nncrypto_GetGcmMac(At(object, Aes##Bits##GcmOffset), mac, macSize);    \
  }

NN_CRYPTO_C_AES_GCM(Aes128GcmEncryptor, 128)
NN_CRYPTO_C_AES_GCM(Aes128GcmDecryptor, 128)
NN_CRYPTO_C_AES_GCM(Aes256GcmEncryptor, 256)
NN_CRYPTO_C_AES_GCM(Aes256GcmDecryptor, 256)

#undef NN_CRYPTO_C_AES_GCM

}
