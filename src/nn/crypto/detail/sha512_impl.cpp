#include "nn/crypto/detail/sha512_impl.hpp"

#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

namespace {

constexpr uint64_t RoundConstants[80] = {
  0x428a2f98d728ae22, 0x7137449123ef65cd, 0xb5c0fbcfec4d3b2f,
  0xe9b5dba58189dbbc, 0x3956c25bf348b538, 0x59f111f1b605d019,
  0x923f82a4af194f9b, 0xab1c5ed5da6d8118, 0xd807aa98a3030242,
  0x12835b0145706fbe, 0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2,
  0x72be5d74f27b896f, 0x80deb1fe3b1696b1, 0x9bdc06a725c71235,
  0xc19bf174cf692694, 0xe49b69c19ef14ad2, 0xefbe4786384f25e3,
  0x0fc19dc68b8cd5b5, 0x240ca1cc77ac9c65, 0x2de92c6f592b0275,
  0x4a7484aa6ea6e483, 0x5cb0a9dcbd41fbd4, 0x76f988da831153b5,
  0x983e5152ee66dfab, 0xa831c66d2db43210, 0xb00327c898fb213f,
  0xbf597fc7beef0ee4, 0xc6e00bf33da88fc2, 0xd5a79147930aa725,
  0x06ca6351e003826f, 0x142929670a0e6e70, 0x27b70a8546d22ffc,
  0x2e1b21385c26c926, 0x4d2c6dfc5ac42aed, 0x53380d139d95b3df,
  0x650a73548baf63de, 0x766a0abb3c77b2a8, 0x81c2c92e47edaee6,
  0x92722c851482353b, 0xa2bfe8a14cf10364, 0xa81a664bbc423001,
  0xc24b8b70d0f89791, 0xc76c51a30654be30, 0xd192e819d6ef5218,
  0xd69906245565a910, 0xf40e35855771202a, 0x106aa07032bbd1b8,
  0x19a4c116b8d2d0c8, 0x1e376c085141ab53, 0x2748774cdf8eeb99,
  0x34b0bcb5e19b48a8, 0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb,
  0x5b9cca4f7763e373, 0x682e6ff3d6b2b8a3, 0x748f82ee5defb2fc,
  0x78a5636f43172f60, 0x84c87814a1f0ab72, 0x8cc702081a6439ec,
  0x90befffa23631e28, 0xa4506cebde82bde9, 0xbef9a3f7b2c67915,
  0xc67178f2e372532b, 0xca273eceea26619c, 0xd186b8c721c0c207,
  0xeada7dd6cde0eb1e, 0xf57d4f7fee6ed178, 0x06f067aa72176fba,
  0x0a637dc5a2c898a6, 0x113f9804bef90dae, 0x1b710b35131c471b,
  0x28db77f523047d84, 0x32caab7b40c72493, 0x3c9ebe0a15c9bebc,
  0x431d67c49c100d4c, 0x4cc5d4becb3e42b6, 0x597f299cfc657e2a,
  0x5fcb6fab3ad6faec, 0x6c44198c4a475817,
};

uint64_t RotateRight(uint64_t value, int shift) {
  return (value >> shift) | (value << (64 - shift));
}

uint64_t Choose(uint64_t x, uint64_t y, uint64_t z) {
  return (x & y) ^ (~x & z);
}

uint64_t Majority(uint64_t x, uint64_t y, uint64_t z) {
  return (x & y) ^ (x & z) ^ (y & z);
}

uint64_t Sigma0(uint64_t x) {
  return RotateRight(x, 28) ^ RotateRight(x, 34) ^ RotateRight(x, 39);
}

uint64_t Sigma1(uint64_t x) {
  return RotateRight(x, 14) ^ RotateRight(x, 18) ^ RotateRight(x, 41);
}

uint64_t SmallSigma0(uint64_t x) {
  return RotateRight(x, 1) ^ RotateRight(x, 8) ^ (x >> 7);
}

uint64_t SmallSigma1(uint64_t x) {
  return RotateRight(x, 19) ^ RotateRight(x, 61) ^ (x >> 6);
}

}

Sha512Impl::~Sha512Impl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void Sha512Impl::Initialize() {
  m_BufferedBytes = 0;
  m_BitsConsumed[0] = 0;
  m_BitsConsumed[1] = 0;
  m_IntermediateHash[0] = 0x6a09e667f3bcc908;
  m_IntermediateHash[1] = 0xbb67ae8584caa73b;
  m_IntermediateHash[2] = 0x3c6ef372fe94f82b;
  m_IntermediateHash[3] = 0xa54ff53a5f1d36f1;
  m_IntermediateHash[4] = 0x510e527fade682d1;
  m_IntermediateHash[5] = 0x9b05688c2b3e6c1f;
  m_IntermediateHash[6] = 0x1f83d9abfb41bd6b;
  m_IntermediateHash[7] = 0x5be0cd19137e2179;
  m_State = State_Initialized;
}

void Sha512Impl::Update(const void* data, size_t size) {
  const uint8_t* current = static_cast<const uint8_t*>(data);
  m_BitsConsumed[1] += 8 * size;

  if (m_BufferedBytes > 0) {
    size_t copySize = BlockSize - m_BufferedBytes;
    if (size < copySize) {
      copySize = size;
    }
    memcpy(m_Buffer + m_BufferedBytes, current, copySize);
    current += copySize;
    size -= copySize;
    m_BufferedBytes += copySize;

    if (m_BufferedBytes == BlockSize) {
      ProcessBlock(m_Buffer);
      m_BufferedBytes = 0;
    }
  }

  while (size >= BlockSize) {
    ProcessBlock(current);
    current += BlockSize;
    size -= BlockSize;
  }

  if (size > 0) {
    m_BufferedBytes = size;
    memcpy(m_Buffer, current, size);
  }
}

void Sha512Impl::GetHash(void* hash, size_t hashSize) {
  (void)hashSize;
  if (m_State == State_Initialized) {
    ProcessLastBlock();
    for (int i = 0; i < 8; ++i) {
      m_IntermediateHash[i] = __builtin_bswap64(m_IntermediateHash[i]);
    }
    m_State = State_Done;
  }
  memcpy(hash, m_IntermediateHash, HashSize);
}

void Sha512Impl::InitializeWithContext(const Sha512Context* context) {
  memcpy(m_IntermediateHash, context->intermediateHash,
    sizeof(m_IntermediateHash));
  m_BitsConsumed[0] = context->bitsConsumed[0];
  m_BufferedBytes = 0;
  m_BitsConsumed[1] = context->bitsConsumed[1];
  m_State = State_Initialized;
}

size_t Sha512Impl::GetContext(Sha512Context* context) const {
  memcpy(context->intermediateHash, m_IntermediateHash,
    sizeof(m_IntermediateHash));
  context->bitsConsumed[0] = m_BitsConsumed[0];
  context->bitsConsumed[1] = m_BitsConsumed[1] - 8 * m_BufferedBytes;
  return m_BufferedBytes;
}

void Sha512Impl::ProcessBlock(const void* data) {
  const uint8_t* block = static_cast<const uint8_t*>(data);
  uint64_t w[80];
  for (int i = 0; i < 16; ++i) {
    uint64_t word;
    memcpy(&word, block + 8 * i, sizeof(word));
    w[i] = __builtin_bswap64(word);
  }
  for (int i = 16; i < 80; ++i) {
    w[i] = SmallSigma1(w[i - 2]) + w[i - 7] + SmallSigma0(w[i - 15])
      + w[i - 16];
  }

  uint64_t a = m_IntermediateHash[0];
  uint64_t b = m_IntermediateHash[1];
  uint64_t c = m_IntermediateHash[2];
  uint64_t d = m_IntermediateHash[3];
  uint64_t e = m_IntermediateHash[4];
  uint64_t f = m_IntermediateHash[5];
  uint64_t g = m_IntermediateHash[6];
  uint64_t h = m_IntermediateHash[7];

  for (int i = 0; i < 80; i += 4) {
    for (int j = i; j < i + 4; ++j) {
      uint64_t t1 =
        h + Sigma1(e) + Choose(e, f, g) + RoundConstants[j] + w[j];
      uint64_t t2 = Sigma0(a) + Majority(a, b, c);
      h = g;
      g = f;
      f = e;
      e = d + t1;
      d = c;
      c = b;
      b = a;
      a = t1 + t2;
    }
  }

  m_IntermediateHash[0] += a;
  m_IntermediateHash[1] += b;
  m_IntermediateHash[2] += c;
  m_IntermediateHash[3] += d;
  m_IntermediateHash[4] += e;
  m_IntermediateHash[5] += f;
  m_IntermediateHash[6] += g;
  m_IntermediateHash[7] += h;
}

void Sha512Impl::ProcessLastBlock() {
  m_Buffer[m_BufferedBytes++] = 0x80;

  constexpr size_t LengthOffset = BlockSize - 2 * sizeof(uint64_t);
  if (m_BufferedBytes > LengthOffset) {
    memset(m_Buffer + m_BufferedBytes, 0, BlockSize - m_BufferedBytes);
    ProcessBlock(m_Buffer);
    memset(m_Buffer, 0, LengthOffset);
  }
  else {
    memset(m_Buffer + m_BufferedBytes, 0, LengthOffset - m_BufferedBytes);
  }

  uint64_t bits[2] = {
    __builtin_bswap64(m_BitsConsumed[0]),
    __builtin_bswap64(m_BitsConsumed[1]),
  };
  memcpy(m_Buffer + LengthOffset, bits, sizeof(bits));
  ProcessBlock(m_Buffer);
}

}
