#include "nn/crypto/detail/ctr_mode_impl.hpp"

#include <arm_neon.h>

namespace nn::crypto::detail {

namespace {

uint8x16_t MakeCounter(uint64_t high, uint64_t low) {
  return vreinterpretq_u8_u64(vcombine_u64(
    vcreate_u64(__builtin_bswap64(high)), vcreate_u64(__builtin_bswap64(low))));
}

void AddCounter(uint64_t* high, uint64_t* low, uint64_t value) {
  uint64_t sum = *low + value;
  if (sum < *low) {
    ++*high;
  }
  *low = sum;
}

uint8x16_t EncryptCounter(uint8x16_t block, const uint8x16_t* roundKey) {
  for (int i = 0; i < 9; ++i) {
    block = vaesmcq_u8(vaeseq_u8(block, roundKey[i]));
  }
  return veorq_u8(vaeseq_u8(block, roundKey[9]), roundKey[10]);
}

}

// Three counters are encrypted per iteration to interleave the AES rounds.
template <>
void CtrModeImpl<AesEncryptor<16>>::ProcessBlocks(uint8_t* dst,
  const uint8_t* src, int blockCount) {
  const uint8x16_t* roundKey =
    reinterpret_cast<const uint8x16_t*>(m_BlockCipher->GetRoundKey());
  uint8x16_t keys[11];
  for (int i = 0; i < 11; ++i) {
    keys[i] = roundKey[i];
  }

  uint8x16_t counter = vld1q_u8(m_Counter);
  uint64_t high = __builtin_bswap64(vgetq_lane_u64(
    vreinterpretq_u64_u8(counter), 0));
  uint64_t low = __builtin_bswap64(vgetq_lane_u64(
    vreinterpretq_u64_u8(counter), 1));

  if (blockCount >= 3) {
    do {
      uint64_t high1 = high;
      uint64_t low1 = low;
      AddCounter(&high1, &low1, 1);
      uint64_t high2 = high;
      uint64_t low2 = low;
      AddCounter(&high2, &low2, 2);

      uint8x16_t block0 = EncryptCounter(counter, keys);
      uint8x16_t block1 = EncryptCounter(MakeCounter(high1, low1), keys);
      uint8x16_t block2 = EncryptCounter(MakeCounter(high2, low2), keys);

      vst1q_u8(dst, veorq_u8(block0, vld1q_u8(src)));
      vst1q_u8(dst + 16, veorq_u8(block1, vld1q_u8(src + 16)));
      vst1q_u8(dst + 32, veorq_u8(block2, vld1q_u8(src + 32)));

      AddCounter(&high, &low, 3);
      counter = MakeCounter(high, low);
      dst += 3 * BlockSize;
      src += 3 * BlockSize;
      blockCount -= 3;
    } while (blockCount >= 3);
  }

  vst1q_u8(m_Counter, counter);
  while (blockCount != 0) {
    uint8x16_t block = EncryptCounter(counter, keys);
    vst1q_u8(dst, veorq_u8(block, vld1q_u8(src)));
    AddCounter(&high, &low, 1);
    counter = MakeCounter(high, low);
    dst += BlockSize;
    src += BlockSize;
    --blockCount;
  }
  vst1q_u8(m_Counter, counter);
}

}
