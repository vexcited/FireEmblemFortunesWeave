#include "nn/crypto/detail/cbc_mode_impl.hpp"

#include <arm_neon.h>

namespace nn::crypto::detail {

namespace {

uint8x16_t EncryptBlock(uint8x16_t block, const uint8x16_t* roundKey) {
  for (int i = 0; i < 9; ++i) {
    block = vaesmcq_u8(vaeseq_u8(block, roundKey[i]));
  }
  return veorq_u8(vaeseq_u8(block, roundKey[9]), roundKey[10]);
}

uint8x16_t DecryptBlock(uint8x16_t block, const uint8x16_t* roundKey) {
  for (int i = 10; i > 1; --i) {
    block = vaesimcq_u8(vaesdq_u8(block, roundKey[i]));
  }
  return veorq_u8(vaesdq_u8(block, roundKey[1]), roundKey[0]);
}

}

template <>
void CbcModeImpl<AesEncryptor<16>>::EncryptBlocks(uint8_t* dst, uint8_t* iv,
  const uint8_t* src, int blockCount, const AesEncryptor<16>* blockCipher) {
  const uint8x16_t* roundKey =
    reinterpret_cast<const uint8x16_t*>(blockCipher->GetRoundKey());
  uint8x16_t chain = vld1q_u8(iv);
  for (int i = 0; i < blockCount; ++i) {
    chain = EncryptBlock(veorq_u8(vld1q_u8(src), chain), roundKey);
    vst1q_u8(dst, chain);
    src += BlockSize;
    dst += BlockSize;
  }
  vst1q_u8(iv, chain);
}

// Three blocks are decrypted per iteration to interleave the AES rounds.
template <>
void CbcModeImpl<AesDecryptor<16>>::DecryptBlocks(uint8_t* dst, uint8_t* iv,
  const uint8_t* src, int blockCount, const AesDecryptor<16>* blockCipher) {
  const uint8x16_t* roundKey =
    reinterpret_cast<const uint8x16_t*>(blockCipher->GetRoundKey());
  uint8x16_t chain = vld1q_u8(iv);

  for (; blockCount >= 3; blockCount -= 3) {
    uint8x16_t block0 = vld1q_u8(src);
    uint8x16_t block1 = vld1q_u8(src + 16);
    uint8x16_t block2 = vld1q_u8(src + 32);
    vst1q_u8(dst, veorq_u8(DecryptBlock(block0, roundKey), chain));
    vst1q_u8(dst + 16, veorq_u8(DecryptBlock(block1, roundKey), block0));
    vst1q_u8(dst + 32, veorq_u8(DecryptBlock(block2, roundKey), block1));
    chain = block2;
    src += 3 * BlockSize;
    dst += 3 * BlockSize;
  }

  for (; blockCount > 0; --blockCount) {
    uint8x16_t block = vld1q_u8(src);
    vst1q_u8(dst, veorq_u8(DecryptBlock(block, roundKey), chain));
    chain = block;
    src += BlockSize;
    dst += BlockSize;
  }
  vst1q_u8(iv, chain);
}

}
