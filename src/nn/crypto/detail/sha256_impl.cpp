#include "nn/crypto/detail/sha256_impl.hpp"

#include <arm_neon.h>
#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

namespace {

alignas(16) constexpr uint32_t RoundConstants[64] = {
  0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1,
  0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
  0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786,
  0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
  0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147,
  0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
  0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
  0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
  0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a,
  0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
  0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
};

}

Sha256Impl::~Sha256Impl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void Sha256Impl::Initialize() {
  m_BufferedBytes = 0;
  m_BitsConsumed = 0;
  m_IntermediateHash[0] = 0x6a09e667;
  m_IntermediateHash[1] = 0xbb67ae85;
  m_IntermediateHash[2] = 0x3c6ef372;
  m_IntermediateHash[3] = 0xa54ff53a;
  m_IntermediateHash[4] = 0x510e527f;
  m_IntermediateHash[5] = 0x9b05688c;
  m_IntermediateHash[6] = 0x1f83d9ab;
  m_IntermediateHash[7] = 0x5be0cd19;
  m_State = State_Initialized;
}

void Sha256Impl::Update(const void* data, size_t size) {
  const uint8_t* current = static_cast<const uint8_t*>(data);
  m_BitsConsumed += 8 * size;

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
      ProcessBlocks(m_Buffer, 1);
      m_BufferedBytes = 0;
    }
  }

  if (size >= BlockSize) {
    size_t blockCount = size / BlockSize;
    ProcessBlocks(current, blockCount);
    current += blockCount * BlockSize;
    size %= BlockSize;
  }

  if (size > 0) {
    m_BufferedBytes = size;
    memcpy(m_Buffer, current, size);
  }
}

void Sha256Impl::GetHash(void* hash, size_t hashSize) {
  (void)hashSize;
  if (m_State == State_Initialized) {
    ProcessLastBlock();
    for (int i = 0; i < 8; ++i) {
      m_IntermediateHash[i] = __builtin_bswap32(m_IntermediateHash[i]);
    }
    m_State = State_Done;
  }
  memcpy(hash, m_IntermediateHash, HashSize);
}

void Sha256Impl::InitializeWithContext(const Sha256Context* context) {
  memcpy(m_IntermediateHash, context->intermediateHash,
    sizeof(m_IntermediateHash));
  m_BufferedBytes = 0;
  m_BitsConsumed = context->bitsConsumed;
  m_State = State_Initialized;
}

size_t Sha256Impl::GetContext(Sha256Context* context) const {
  memcpy(context->intermediateHash, m_IntermediateHash,
    sizeof(m_IntermediateHash));
  context->bitsConsumed = m_BitsConsumed - 8 * m_BufferedBytes;
  return m_BufferedBytes;
}

void Sha256Impl::ProcessBlocks(const uint8_t* data, size_t blockCount) {
  uint32x4_t hash0 = vld1q_u32(m_IntermediateHash);
  uint32x4_t hash1 = vld1q_u32(m_IntermediateHash + 4);

  do {
    uint32x4_t message[4];
    for (int i = 0; i < 4; ++i) {
      message[i] = vreinterpretq_u32_u8(vrev32q_u8(vld1q_u8(data + 16 * i)));
    }

    uint32x4_t state0 = hash0;
    uint32x4_t state1 = hash1;
    for (int i = 0; i < 16; ++i) {
      uint32x4_t schedule =
        vaddq_u32(message[i % 4], vld1q_u32(RoundConstants + 4 * i));
      uint32x4_t previous = state0;
      state0 = vsha256hq_u32(state0, state1, schedule);
      state1 = vsha256h2q_u32(state1, previous, schedule);
      if (i < 12) {
        message[i % 4] = vsha256su1q_u32(
          vsha256su0q_u32(message[i % 4], message[(i + 1) % 4]),
          message[(i + 2) % 4], message[(i + 3) % 4]);
      }
    }

    hash0 = vaddq_u32(hash0, state0);
    hash1 = vaddq_u32(hash1, state1);
    data += BlockSize;
  } while (--blockCount != 0);

  vst1q_u32(m_IntermediateHash, hash0);
  vst1q_u32(m_IntermediateHash + 4, hash1);
}

[[gnu::always_inline]] void Sha256Impl::ProcessLastBlock() {
  // The count is read again after the store, which may alias it.
  m_Buffer[m_BufferedBytes] = 0x80;
  ++m_BufferedBytes;

  constexpr size_t LengthOffset = BlockSize - sizeof(uint64_t);
  if (m_BufferedBytes > LengthOffset) {
    memset(m_Buffer + m_BufferedBytes, 0, BlockSize - m_BufferedBytes);
    ProcessBlocks(m_Buffer, 1);
    memset(m_Buffer, 0, LengthOffset);
  }
  else {
    memset(m_Buffer + m_BufferedBytes, 0, LengthOffset - m_BufferedBytes);
  }

  uint64_t bits = __builtin_bswap64(m_BitsConsumed);
  memcpy(m_Buffer + LengthOffset, &bits, sizeof(bits));
  ProcessBlocks(m_Buffer, 1);
}

}
