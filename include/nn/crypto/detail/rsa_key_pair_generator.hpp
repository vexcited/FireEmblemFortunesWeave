#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/detail/big_num.hpp"

namespace nn::crypto::detail {

class RsaKeyPairGenerator {
public:
  ~RsaKeyPairGenerator();

  bool Initialize(size_t keySize, void* workBuffer, size_t workBufferSize);
  bool Generate();
  void GetKeyPair(void* modulus, size_t modulusSize, void* publicExponent,
    size_t publicExponentSize, void* privateExponent,
    size_t privateExponentSize) const;

private:
  enum State {
    State_None,
    State_Initialized,
    State_Generated,
  };

  bool AllocateFromWorkBuffer(BigNum* number, int digits);
  void FreeToWorkBuffer(BigNum* number, int digits);
  bool GeneratePrime(BigNum* prime, BigNum* other, int digits);

  size_t m_KeySize;
  BigNum::DigitAllocator m_Allocator;
  BigNum m_Modulus;
  StackBigNum<64> m_PublicExponent;
  BigNum m_PrivateExponent;
  BigNum m_P;
  BigNum m_Q;
  State m_State;
};

static_assert(sizeof(RsaKeyPairGenerator) == 216);

}
