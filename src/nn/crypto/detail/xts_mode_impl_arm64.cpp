#include "nn/crypto/detail/xts_mode_impl.hpp"

#include <arm_neon.h>
#include <string.h>

#include "nn/crypto/detail/aes_impl.hpp"
#include "nn/crypto/detail/update_impl.hpp"

namespace nn::crypto::detail {

namespace {

uint8x16_t MultiplyTweak(uint8x16_t tweak) {
  uint64_t high = vgetq_lane_u64(vreinterpretq_u64_u8(tweak), 1);
  uint64_t low = vgetq_lane_u64(vreinterpretq_u64_u8(tweak), 0);
  uint64_t mask = static_cast<uint64_t>(static_cast<int64_t>(high) >> 63);
  high = (high << 1) | (low >> 63);
  low = (low << 1) ^ (mask & 0x87);
  return vreinterpretq_u8_u64(vcombine_u64(vcreate_u64(low),
    vcreate_u64(high)));
}

uint8x16_t EncryptBlock(uint8x16_t block, const uint8x16_t* keys) {
  for (int i = 0; i < 9; ++i) {
    block = vaesmcq_u8(vaeseq_u8(block, keys[i]));
  }
  return veorq_u8(vaeseq_u8(block, keys[9]), keys[10]);
}

uint8x16_t DecryptBlock(uint8x16_t block, const uint8x16_t* keys) {
  for (int i = 10; i > 1; --i) {
    block = vaesimcq_u8(vaesdq_u8(block, keys[i]));
  }
  return veorq_u8(vaesdq_u8(block, keys[1]), keys[0]);
}

template <typename BlockCipher>
uint8x16_t CryptBlock(uint8x16_t block, const uint8x16_t* keys) {
  if constexpr (__is_same(BlockCipher, AesEncryptor<16>)) {
    return EncryptBlock(block, keys);
  }
  else {
    return DecryptBlock(block, keys);
  }
}

}

size_t XtsModeImpl::UpdateGeneric(void* dst, size_t dstSize,
  const void* src, size_t srcSize) {
  return UpdateImpl<void>(this, dst, dstSize, src, srcSize);
}

size_t XtsModeImpl::ProcessBlocksGeneric(uint8_t* dst, const uint8_t* src,
  int blockCount) {
  size_t processed = BlockSize * (blockCount - 1);
  if (m_State == State_Processing) {
    ProcessBlock(dst, m_LastBlock);
    dst += BlockSize;
    processed += BlockSize;
  }

  uint8x16_t tweak = vld1q_u8(m_Tweak);
  while (--blockCount > 0) {
    uint8x16_t block = veorq_u8(vld1q_u8(src), tweak);
    src += BlockSize;
    vst1q_u8(dst, block);
    m_CipherFunction(dst, dst, m_CipherContext);
    vst1q_u8(dst, veorq_u8(vld1q_u8(dst), tweak));
    dst += BlockSize;
    tweak = MultiplyTweak(tweak);
  }

  vst1q_u8(m_Tweak, tweak);
  memcpy(m_LastBlock, src, BlockSize);
  m_State = State_Processing;
  return processed;
}

template <typename BlockCipher>
size_t XtsModeImpl::Update(void* dst, size_t dstSize, const void* src,
  size_t srcSize) {
  return UpdateImpl<BlockCipher>(this, dst, dstSize, src, srcSize);
}

template <typename BlockCipher>
[[gnu::noinline]] size_t XtsModeImpl::ProcessBlocks(uint8_t* dst,
  const uint8_t* src, int blockCount) {
  size_t processed = BlockSize * (blockCount - 1);
  if (m_State == State_Processing) {
    ProcessBlock(dst, m_LastBlock);
    dst += BlockSize;
    processed += BlockSize;
  }

  const uint8x16_t* roundKey = reinterpret_cast<const uint8x16_t*>(
    static_cast<const BlockCipher*>(m_CipherContext)->GetRoundKey());
  uint8x16_t keys[11];
  for (int i = 0; i < 11; ++i) {
    keys[i] = roundKey[i];
  }

  uint8x16_t tweak0 = vld1q_u8(m_Tweak);
  if (blockCount > 3) {
    uint8x16_t tweak1 = MultiplyTweak(tweak0);
    uint8x16_t tweak2 = MultiplyTweak(tweak1);
    do {
      uint8x16_t block0 = veorq_u8(vld1q_u8(src), tweak0);
      uint8x16_t block1 = veorq_u8(vld1q_u8(src + 16), tweak1);
      uint8x16_t block2 = veorq_u8(vld1q_u8(src + 32), tweak2);
      src += 3 * BlockSize;

      block0 = veorq_u8(CryptBlock<BlockCipher>(block0, keys), tweak0);
      block1 = veorq_u8(CryptBlock<BlockCipher>(block1, keys), tweak1);
      block2 = veorq_u8(CryptBlock<BlockCipher>(block2, keys), tweak2);

      vst1q_u8(dst, block0);
      vst1q_u8(dst + 16, block1);
      vst1q_u8(dst + 32, block2);
      dst += 3 * BlockSize;

      tweak0 = MultiplyTweak(tweak2);
      tweak1 = MultiplyTweak(tweak0);
      tweak2 = MultiplyTweak(tweak1);
      blockCount -= 3;
    } while (blockCount > 3);
  }

  while (--blockCount > 0) {
    uint8x16_t block = veorq_u8(vld1q_u8(src), tweak0);
    src += BlockSize;
    vst1q_u8(dst, veorq_u8(CryptBlock<BlockCipher>(block, keys), tweak0));
    dst += BlockSize;
    tweak0 = MultiplyTweak(tweak0);
  }

  vst1q_u8(m_Tweak, tweak0);
  memcpy(m_LastBlock, src, BlockSize);
  m_State = State_Processing;
  return processed;
}

template size_t XtsModeImpl::Update<AesEncryptor<16>>(void*, size_t,
  const void*, size_t);
template size_t XtsModeImpl::ProcessBlocks<AesEncryptor<16>>(uint8_t*,
  const uint8_t*, int);
template size_t XtsModeImpl::Update<AesDecryptor<16>>(void*, size_t,
  const void*, size_t);
template size_t XtsModeImpl::ProcessBlocks<AesDecryptor<16>>(uint8_t*,
  const uint8_t*, int);

}
