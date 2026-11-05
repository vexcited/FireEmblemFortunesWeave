#include "nn/crypto/ecc_key.hpp"

#include "nn/crypto/detail/big_num.hpp"
#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto {

using detail::DigitsFromOctetString;
using detail::OctetStringFromDigits;

template <detail::EccCurveType Type> EccKey<Type>::EccKey()
  : m_HasPublicKey(false), m_HasPrivateKey(false) {}

template <detail::EccCurveType Type> EccKey<Type>::~EccKey() {
  if (m_HasPrivateKey) {
    detail::ClearMemoryImpl(m_PrivateKey, sizeof(m_PrivateKey));
  }
}

template <detail::EccCurveType Type>
void EccKey<Type>::Initialize(const void* publicKey, size_t publicKeySize,
  const void* privateKey, size_t privateKeySize) {
  if (publicKeySize != 0) {
    const uint8_t* bytes = static_cast<const uint8_t*>(publicKey);
    DigitsFromOctetString(m_PublicKey.x, MaxDigits, bytes, ByteLength);
    DigitsFromOctetString(m_PublicKey.y, MaxDigits, bytes + ByteLength,
      ByteLength);
    m_HasPublicKey = true;
  }
  else {
    m_HasPublicKey = false;
  }

  if (privateKeySize != 0) {
    DigitsFromOctetString(m_PrivateKey, MaxDigits, privateKey, ByteLength);
    m_HasPrivateKey = true;
  }
  else {
    m_HasPrivateKey = false;
  }
}

template <detail::EccCurveType Type>
bool EccKey<Type>::HasPrivateKey() const {
  return m_HasPrivateKey;
}

template <detail::EccCurveType Type>
bool EccKey<Type>::HasPublicKey() const {
  return m_HasPublicKey;
}

template <detail::EccCurveType Type>
void EccKey<Type>::GetPublicKey(void* publicKey, size_t publicKeySize) const {
  uint8_t* bytes = static_cast<uint8_t*>(publicKey);
  OctetStringFromDigits(bytes, ByteLength, m_PublicKey.x, MaxDigits);
  OctetStringFromDigits(bytes + ByteLength, ByteLength, m_PublicKey.y,
    MaxDigits);
}

template <detail::EccCurveType Type>
void EccKey<Type>::GetPrivateKey(void* privateKey,
  size_t privateKeySize) const {
  OctetStringFromDigits(privateKey, ByteLength, m_PrivateKey, MaxDigits);
}

template <detail::EccCurveType Type>
bool EccKey<Type>::SignHash(void* signature, size_t signatureSize,
  const void* hash, size_t hashSize, const void* random,
  size_t randomSize) const {
  uint32_t randomDigits[MaxDigits] = {};
  DigitsFromOctetString(randomDigits, MaxDigits, random, randomSize);

  typename detail::EccOperations<Type>::Signature result = {};
  detail::EccOperations<Type> operations;
  if (operations.EcdsaSign(&result, hash, hashSize, m_PrivateKey,
    randomDigits, MaxDigits) != 0) {
    return false;
  }

  uint8_t* bytes = static_cast<uint8_t*>(signature);
  OctetStringFromDigits(bytes, ByteLength, result.r, MaxDigits);
  OctetStringFromDigits(bytes + ByteLength, ByteLength, result.s, MaxDigits);
  return true;
}

template <detail::EccCurveType Type>
bool EccKey<Type>::VerifyHash(const void* signature, size_t signatureSize,
  const void* hash, size_t hashSize) const {
  typename detail::EccOperations<Type>::Signature value = {};
  const uint8_t* bytes = static_cast<const uint8_t*>(signature);
  DigitsFromOctetString(value.r, MaxDigits, bytes, ByteLength);
  DigitsFromOctetString(value.s, MaxDigits, bytes + ByteLength, ByteLength);

  detail::EccOperations<Type> operations;
  return operations.EcdsaVerify(&value, hash, hashSize, &m_PublicKey) == 0;
}

template <detail::EccCurveType Type>
bool EccKey<Type>::GenerateSharedSecret(void* sharedSecret,
  size_t sharedSecretSize, const EccKey& peer) const {
  if (sharedSecretSize != ByteLength) {
    return false;
  }

  uint32_t digits[MaxDigits] = {};
  detail::EccOperations<Type> operations;
  if (operations.GenerateSharedKey(digits, &peer.m_PublicKey,
    m_PrivateKey) != 0) {
    return false;
  }

  OctetStringFromDigits(sharedSecret, ByteLength, digits, MaxDigits);
  return true;
}

template <detail::EccCurveType Type>
void EccKey<Type>::GenerateKeyPair(void* publicKey, size_t publicKeySize,
  void* privateKey, size_t privateKeySize, const void* random,
  size_t randomSize) const {
  uint32_t randomDigits[MaxDigits] = {};
  DigitsFromOctetString(randomDigits, MaxDigits, random, randomSize);

  typename detail::EccOperations<Type>::KeyPair keyPair = {};
  detail::EccOperations<Type> operations;
  operations.GenerateKeyPair(&keyPair, randomDigits, MaxDigits);

  uint8_t* bytes = static_cast<uint8_t*>(publicKey);
  OctetStringFromDigits(privateKey, ByteLength, keyPair.privateKey,
    MaxDigits);
  OctetStringFromDigits(bytes, ByteLength, keyPair.publicKey.x, MaxDigits);
  OctetStringFromDigits(bytes + ByteLength, ByteLength, keyPair.publicKey.y,
    MaxDigits);
}

template class EccKey<detail::EccCurveType_P256>;
template class EccKey<detail::EccCurveType_Secp256k1>;

}
