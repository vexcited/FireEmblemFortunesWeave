#include "nn/crypto/detail/ghash_impl.hpp"

#include <arm_neon.h>

namespace nn::crypto::detail {

namespace {

const uint8x16_t ReverseMask = {
  15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
};

const uint8x16_t SwapMask = {
  8, 9, 10, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7,
};

constexpr uint64_t ReductionPolynomial = 0x1c2000000000000;

uint64x2_t Reverse(uint64x2_t value) {
  return vreinterpretq_u64_u8(
    vqtbl1q_u8(vreinterpretq_u8_u64(value), ReverseMask));
}

uint64x2_t Load(const void* data) {
  return vreinterpretq_u64_u8(vld1q_u8(static_cast<const uint8_t*>(data)));
}

uint64x2_t ToVector(poly128_t value) {
  return vreinterpretq_u64_p128(value);
}

// The 256 bit product is folded twice by the bit reflected polynomial.
uint64x2_t Reduce(uint64x2_t low, uint64x2_t high) {
  unsigned __int128 t = vmull_p64(vgetq_lane_u64(low, 0),
    ReductionPolynomial);
  uint64_t t0 = static_cast<uint64_t>(t);
  uint64_t t1 = static_cast<uint64_t>(t >> 64);

  uint64_t m1 = vgetq_lane_u64(low, 1) ^ (t0 << 8);
  uint64_t m2 = vgetq_lane_u64(high, 0) ^ static_cast<uint64_t>(t >> 56);
  uint64_t m3 = vgetq_lane_u64(high, 1) ^ (t1 >> 56);

  uint64_t r0 = (m2 << 1) | (m1 >> 63);
  uint64_t r1 = (m3 << 1) | (m2 >> 63);

  unsigned __int128 u = vmull_p64(m1 << 1, ReductionPolynomial);
  r0 ^= static_cast<uint64_t>(u) << 8;
  r1 ^= static_cast<uint64_t>(u >> 56);

  return vcombine_u64(vcreate_u64(r0), vcreate_u64(r1));
}

[[gnu::noinline]] uint64x2_t GfMult(uint64x2_t a, uint64x2_t b) {
  uint64x2_t low = ToVector(vmull_p64(vgetq_lane_u64(a, 0),
    vgetq_lane_u64(b, 0)));
  uint64x2_t high = ToVector(vmull_p64(vgetq_lane_u64(a, 1),
    vgetq_lane_u64(b, 1)));
  uint64x2_t middle = veorq_u64(
    ToVector(vmull_p64(vgetq_lane_u64(a, 0), vgetq_lane_u64(b, 1))),
    ToVector(vmull_p64(vgetq_lane_u64(a, 1), vgetq_lane_u64(b, 0))));

  low = veorq_u64(low, vcombine_u64(vcreate_u64(0),
    vget_low_u64(middle)));
  high = veorq_u64(high, vcombine_u64(vget_high_u64(middle),
    vcreate_u64(0)));

  return Reduce(low, high);
}

void Multiply(uint64x2_t* low, uint64x2_t* high, uint64x2_t a,
  uint64x2_t b) {
  uint64x2_t swapped = vreinterpretq_u64_u8(
    vqtbl1q_u8(vreinterpretq_u8_u64(a), SwapMask));
  uint64x2_t middle = veorq_u64(
    ToVector(vmull_high_p64(vreinterpretq_p64_u64(swapped),
      vreinterpretq_p64_u64(b))),
    ToVector(vmull_p64(vgetq_lane_u64(swapped, 0), vgetq_lane_u64(b, 0))));

  *low = veorq_u64(ToVector(vmull_p64(vgetq_lane_u64(a, 0),
    vgetq_lane_u64(b, 0))), vcombine_u64(vcreate_u64(0),
    vget_low_u64(middle)));
  *high = veorq_u64(ToVector(vmull_high_p64(vreinterpretq_p64_u64(a),
    vreinterpretq_p64_u64(b))), vcombine_u64(vget_high_u64(middle),
    vcreate_u64(0)));
}

}

void GhashImpl::InitializeHashKey(Block* hashKey) {
  uint64x2_t h = Reverse(Load(hashKey));
  vst1q_u64(m_HashKeyTable[1].data, h);

  uint64x2_t power = GfMult(h, h);
  vst1q_u64(m_HashKeyTable[2].data, power);
  power = GfMult(power, h);
  vst1q_u64(m_HashKeyTable[3].data, power);
  power = GfMult(power, h);
  vst1q_u64(m_HashKeyTable[4].data, power);
}

void GhashImpl::GfMultH(Block* block) {
  vst1q_u64(block->data, GfMult(Load(block),
    vld1q_u64(m_HashKeyTable[1].data)));
}

void GhashImpl::ProcessPartialData(const uint8_t* data, size_t size) {
  uint8_t* ghash = reinterpret_cast<uint8_t*>(m_Ghash.data);
  for (int i = 0; i < static_cast<int>(size); ++i) {
    ghash[15 - i - m_BufferedBytes] ^= data[i];
  }

  m_BufferedBytes += size;
  if (m_BufferedBytes == 16) {
    vst1q_u64(m_Ghash.data, GfMult(vld1q_u64(m_Ghash.data),
      vld1q_u64(m_HashKeyTable[1].data)));
    m_BufferedBytes = 0;
  }
}

void GhashImpl::ProcessBlocksGeneric(const uint8_t* data, int blockCount) {
  uint64x2_t h = vld1q_u64(m_HashKeyTable[1].data);
  uint64x2_t ghash = vld1q_u64(m_Ghash.data);
  unsigned int count = blockCount;

  if (count >= 4) {
    uint64x2_t h2 = vld1q_u64(m_HashKeyTable[2].data);
    uint64x2_t h3 = vld1q_u64(m_HashKeyTable[3].data);
    uint64x2_t h4 = vld1q_u64(m_HashKeyTable[4].data);

    do {
      uint64x2_t low[4];
      uint64x2_t high[4];
      Multiply(&low[0], &high[0], veorq_u64(Reverse(Load(data)), ghash), h4);
      Multiply(&low[1], &high[1], Reverse(Load(data + 16)), h3);
      Multiply(&low[2], &high[2], Reverse(Load(data + 32)), h2);
      Multiply(&low[3], &high[3], Reverse(Load(data + 48)), h);

      ghash = Reduce(
        veorq_u64(veorq_u64(low[1], low[0]), veorq_u64(low[2], low[3])),
        veorq_u64(veorq_u64(high[1], high[0]),
          veorq_u64(high[2], high[3])));

      count -= 4;
      data += 64;
    } while (count > 3);
  }

  while (count > 0) {
    ghash = GfMult(veorq_u64(Reverse(Load(data)), ghash), h);
    data += 16;
    --count;
  }

  vst1q_u64(m_Ghash.data, ghash);
}

void GhashImpl::ProcessRemainingData(const uint8_t* data, size_t size) {
  uint8_t* ghash = reinterpret_cast<uint8_t*>(m_Ghash.data);
  for (int i = 0; i < static_cast<int>(size); ++i) {
    ghash[15 - i] ^= data[i];
  }

  m_BufferedBytes = size;
}

void GhashImpl::Update(const void* data, size_t size) {
  const uint8_t* bytes = static_cast<const uint8_t*>(data);
  m_MessageSize[1] += size;

  if (m_BufferedBytes != 0) {
    size_t partial = size < 16 - m_BufferedBytes ?
      size : 16 - m_BufferedBytes;
    ProcessPartialData(bytes, partial);
    bytes += partial;
    size -= partial;
  }

  if (size >= 16) {
    int blockCount = static_cast<int>(size / 16);
    ProcessBlocksGeneric(bytes, blockCount);
    bytes += 16 * blockCount;
    size -= 16 * blockCount;
  }

  if (size != 0) {
    ProcessRemainingData(bytes, size);
  }
}

void GhashImpl::GetGhash(void* ghash, size_t ghashSize) {
  if (m_State == State_ProcessingData) {
    uint64x2_t h = vld1q_u64(m_HashKeyTable[1].data);
    uint64x2_t value = vld1q_u64(m_Ghash.data);
    if (m_BufferedBytes != 0) {
      value = GfMult(value, h);
    }

    uint64x2_t lengths = vshlq_n_u64(vcombine_u64(
      vcreate_u64(m_MessageSize[1]), vcreate_u64(m_MessageSize[0])), 3);
    value = GfMult(veorq_u64(value, lengths), h);

    m_State = State_Done;
    vst1q_u64(m_Ghash.data, Reverse(value));
  }

  static_cast<Block*>(ghash)[0] = m_Ghash;
}

}
