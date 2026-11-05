#include "nn/crypto/detail/rsa_key_pair_generator.hpp"

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto {

void GenerateCryptographicallyRandomBytes(void* buffer, size_t size);

}

namespace nn::crypto::detail {

RsaKeyPairGenerator::~RsaKeyPairGenerator() {
  if (m_Allocator.GetBuffer() != nullptr) {
    ClearMemoryImpl(m_Allocator.GetBuffer(),
      m_Allocator.GetMaxUsedCount() * static_cast<int>(sizeof(BigNum::Digit)));
  }
  ClearMemoryImpl(this, sizeof(*this));
}

bool RsaKeyPairGenerator::AllocateFromWorkBuffer(BigNum* number,
  int digits) {
  BigNum::Digit* buffer = m_Allocator.Allocate(digits);
  if (buffer == nullptr) {
    return false;
  }

  number->ReserveStatic(buffer, digits);
  number->Cleanse();
  return true;
}

void RsaKeyPairGenerator::FreeToWorkBuffer(BigNum* /* number */,
  int digits) {
  m_Allocator.Free(digits);
}

// The work buffer must hold 20 times the key size.
bool RsaKeyPairGenerator::Initialize(size_t keySize, void* workBuffer,
  size_t workBufferSize) {
  if (workBufferSize < keySize * 20) {
    return false;
  }

  m_KeySize = keySize;
  m_Allocator.Initialize(static_cast<BigNum::Digit*>(workBuffer),
    static_cast<int>(workBufferSize / sizeof(BigNum::Digit)));

  int digits = static_cast<int>(keySize / sizeof(BigNum::Digit));
  if (!AllocateFromWorkBuffer(&m_Modulus, digits) ||
    !AllocateFromWorkBuffer(&m_PrivateExponent, digits) ||
    !AllocateFromWorkBuffer(&m_P, digits / 2) ||
    !AllocateFromWorkBuffer(&m_Q, digits / 2)) {
    return false;
  }

  m_PublicExponent.GetDigits()[0] = 65537;
  m_PublicExponent.Recount();
  m_State = State_Initialized;
  return true;
}

// Candidates are odd random numbers whose predecessor is coprime with the
// public exponent. The second prime must differ from the first in more than
// the lowest 100 bits.
bool RsaKeyPairGenerator::GeneratePrime(BigNum* prime, BigNum* other,
  int digits) {
  BigNum work;
  if (!AllocateFromWorkBuffer(&work, digits * 2)) {
    return false;
  }

  int maxTries = static_cast<int>(m_KeySize * 20);
  int tries = 0;
  while (tries < maxTries) {
    GenerateCryptographicallyRandomBytes(prime->GetDigits(),
      sizeof(BigNum::Digit) * digits);
    prime->Recount();
    if (BigNum::IsEven(prime->GetDigits(), prime->GetCount())) {
      prime->Increment();
    }

    if (other != nullptr) {
      work.SubAbs(other, prime);
    }
    if (other == nullptr ||
      work.GetDigitsBits() > digits * BigNum::DigitBits - 100) {
      if (!work.Mult(prime, prime, &m_Allocator)) {
        return false;
      }
    }

    if (work.GetDigitsBits() < digits * BigNum::DigitBits * 2 - 1) {
      continue;
    }

    prime->Decrement();
    if (!work.Mod(prime, &m_PublicExponent, &m_Allocator)) {
      return false;
    }
    if (work.GetCount() != 0) {
      prime->Increment();
      if (prime->TestPrimality(&m_Allocator)) {
        FreeToWorkBuffer(&work, digits * 2);
        return true;
      }
    }
    ++tries;
  }

  return false;
}

bool RsaKeyPairGenerator::Generate() {
  BigNum totient;
  int digits = static_cast<int>(m_KeySize / sizeof(BigNum::Digit));
  if (!AllocateFromWorkBuffer(&totient, digits)) {
    return false;
  }

  if (!GeneratePrime(&m_P, nullptr, digits / 2) ||
    !GeneratePrime(&m_Q, &m_P, digits / 2)) {
    return false;
  }

  m_P.Decrement();
  m_Q.Decrement();
  if (!totient.Mult(&m_P, &m_Q, &m_Allocator)) {
    return false;
  }

  m_P.Increment();
  m_Q.Increment();
  if (!m_Modulus.Mult(&m_P, &m_Q, &m_Allocator) ||
    !m_PrivateExponent.ModInv(&m_PublicExponent, &totient, &m_Allocator)) {
    return false;
  }

  m_State = State_Generated;
  FreeToWorkBuffer(&totient, digits);
  return true;
}

void RsaKeyPairGenerator::GetKeyPair(void* modulus, size_t modulusSize,
  void* publicExponent, size_t publicExponentSize, void* privateExponent,
  size_t privateExponentSize) const {
  m_Modulus.Get(modulus, modulusSize);
  m_PublicExponent.Get(publicExponent, publicExponentSize);
  m_PrivateExponent.Get(privateExponent, privateExponentSize);
}

}
