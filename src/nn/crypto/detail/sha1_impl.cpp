#include "nn/crypto/detail/sha1_impl.hpp"

#include <arm_neon.h>
#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

namespace {

constexpr uint32_t GetRoundConstant(int group) {
  return group < 5 ? 0x5a827999 : group < 10 ? 0x6ed9eba1
    : group < 15 ? 0x8f1bbcdc : 0xca62c1d6;
}

void ProcessBlockData(uint32x4_t* abcd, uint32_t* e, const uint8_t* data) {
  uint32x4_t message[4];
  for (int i = 0; i < 4; ++i) {
    message[i] = vreinterpretq_u32_u8(vrev32q_u8(vld1q_u8(data + 16 * i)));
  }

  uint32x4_t hash = *abcd;
  uint32_t hashE = *e;
  for (int i = 0; i < 20; ++i) {
    uint32x4_t schedule =
      vaddq_u32(message[i % 4], vdupq_n_u32(GetRoundConstant(i)));
    uint32_t nextE = vsha1h_u32(vgetq_lane_u32(hash, 0));
    if (i < 5) {
      hash = vsha1cq_u32(hash, hashE, schedule);
    }
    else if (i < 10 || i >= 15) {
      hash = vsha1pq_u32(hash, hashE, schedule);
    }
    else {
      hash = vsha1mq_u32(hash, hashE, schedule);
    }
    hashE = nextE;
    if (i < 16) {
      message[i % 4] = vsha1su1q_u32(
        vsha1su0q_u32(message[i % 4], message[(i + 1) % 4],
          message[(i + 2) % 4]),
        message[(i + 3) % 4]);
    }
  }

  *abcd = vaddq_u32(*abcd, hash);
  *e += hashE;
}

}

Sha1Impl::~Sha1Impl() {
  ClearMemoryImpl(this, sizeof(*this));
}

void Sha1Impl::Initialize() {
  m_BufferedBytes = 0;
  m_BitsConsumed = 0;
  m_IntermediateHash[0] = 0x67452301;
  m_IntermediateHash[1] = 0xefcdab89;
  m_IntermediateHash[2] = 0x98badcfe;
  m_IntermediateHash[3] = 0x10325476;
  m_IntermediateHash[4] = 0xc3d2e1f0;
  m_State = State_Initialized;
}

void Sha1Impl::Update(const void* data, size_t size) {
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
      ProcessBlock(m_Buffer);
      m_BufferedBytes = 0;
    }
  }

  if (size >= BlockSize) {
    ProcessBlocks(current, static_cast<int>(size / BlockSize));
    current += size & ~(BlockSize - 1);
    size %= BlockSize;
  }

  if (size > 0) {
    m_BufferedBytes = size;
    memcpy(m_Buffer, current, size);
  }
}

void Sha1Impl::GetHash(void* hash, size_t hashSize) {
  (void)hashSize;
  if (m_State == State_Initialized) {
    ProcessLastBlock();
    for (int i = 0; i < 5; ++i) {
      m_IntermediateHash[i] = __builtin_bswap32(m_IntermediateHash[i]);
    }
    m_State = State_Done;
  }
  memcpy(hash, m_IntermediateHash, HashSize);
}

void Sha1Impl::ProcessBlock(const uint8_t* data) {
  uint32x4_t abcd = vld1q_u32(m_IntermediateHash);
  uint32_t e = m_IntermediateHash[4];
  ProcessBlockData(&abcd, &e, data);
  vst1q_u32(m_IntermediateHash, abcd);
  m_IntermediateHash[4] = e;
}

void Sha1Impl::ProcessBlocks(const uint8_t* data, int blockCount) {
  uint32x4_t abcd = vld1q_u32(m_IntermediateHash);
  uint32_t e = m_IntermediateHash[4];
  do {
    ProcessBlockData(&abcd, &e, data);
    data += BlockSize;
  } while (--blockCount > 0);
  vst1q_u32(m_IntermediateHash, abcd);
  m_IntermediateHash[4] = e;
}

// GetHash inlines this copy and keeps the out of line one.
[[gnu::always_inline]] void Sha1Impl::ProcessLastBlock() {
  m_Buffer[m_BufferedBytes] = 0x80;
  ++m_BufferedBytes;

  constexpr size_t LengthOffset = BlockSize - sizeof(uint64_t);
  if (m_BufferedBytes > LengthOffset) {
    memset(m_Buffer + m_BufferedBytes, 0, BlockSize - m_BufferedBytes);
    ProcessBlock(m_Buffer);
    memset(m_Buffer, 0, LengthOffset);
  }
  else {
    memset(m_Buffer + m_BufferedBytes, 0, LengthOffset - m_BufferedBytes);
  }

  uint64_t bits = __builtin_bswap64(m_BitsConsumed);
  memcpy(m_Buffer + LengthOffset, &bits, sizeof(bits));
  ProcessBlock(m_Buffer);
}

}
