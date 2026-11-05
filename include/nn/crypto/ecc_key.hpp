#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/detail/ecc_operations.hpp"

namespace nn::crypto {

template <detail::EccCurveType Type> class EccKey {
public:
  static constexpr int MaxDigits = detail::EccOperations<Type>::MaxDigits;
  static constexpr size_t ByteLength = MaxDigits * sizeof(uint32_t);

  EccKey();
  ~EccKey();

  void Initialize(const void* publicKey, size_t publicKeySize,
    const void* privateKey, size_t privateKeySize);
  bool HasPrivateKey() const;
  bool HasPublicKey() const;
  void GetPublicKey(void* publicKey, size_t publicKeySize) const;
  void GetPrivateKey(void* privateKey, size_t privateKeySize) const;
  bool SignHash(void* signature, size_t signatureSize, const void* hash,
    size_t hashSize, const void* random, size_t randomSize) const;
  bool VerifyHash(const void* signature, size_t signatureSize,
    const void* hash, size_t hashSize) const;
  bool GenerateSharedSecret(void* sharedSecret, size_t sharedSecretSize,
    const EccKey& peer) const;
  void GenerateKeyPair(void* publicKey, size_t publicKeySize,
    void* privateKey, size_t privateKeySize, const void* random,
    size_t randomSize) const;

private:
  typename detail::EccOperations<Type>::Point m_PublicKey;
  uint32_t m_PrivateKey[MaxDigits];
  bool m_HasPublicKey;
  bool m_HasPrivateKey;
};

}
