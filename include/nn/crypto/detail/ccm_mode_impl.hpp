#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/crypto/detail/cbc_mac_impl.hpp"
#include "nn/crypto/detail/clear_memory.hpp"
#include "nn/crypto/detail/ctr_mode_impl.hpp"

namespace nn::crypto::detail {

// The MAC covers the formatted first block, the encoded and zero padded
// additional data and the zero padded plaintext, and is masked with the
// encrypted first counter block.
template <typename BlockCipher> class CcmModeImpl {
public:
  static constexpr size_t BlockSize = BlockCipher::BlockSize;

  ~CcmModeImpl() {
    ClearMemoryImpl(this, sizeof(*this));
  }

  [[gnu::noinline]] void Initialize(const BlockCipher* blockCipher,
    const void* nonce, size_t nonceSize, int64_t aadSize, int64_t dataSize,
    size_t macSize);
  [[gnu::noinline]] void GetMac(void* mac, size_t macSize);

  void UpdateAad(const void* aad, size_t aadSize) {
    m_CbcMac.template Update<BlockCipher>(aad, aadSize);
    m_ProcessedAadSize += aadSize;
    if (m_ProcessedAadSize == m_AadSize) {
      PadMac();
      m_State = m_DataSize > 0 ? State_ProcessingData : State_Processed;
    }
  }

  size_t Encrypt(void* dst, size_t dstSize, const void* src,
    size_t srcSize) {
    m_CbcMac.template Update<BlockCipher>(src, srcSize);
    size_t processed;
    [[clang::noinline]] processed = m_Ctr.Update(dst, dstSize, src, srcSize);
    m_ProcessedDataSize += srcSize;
    if (m_ProcessedDataSize == m_DataSize) {
      PadMac();
      m_State = State_Processed;
    }
    return processed;
  }

  size_t Decrypt(void* dst, size_t dstSize, const void* src,
    size_t srcSize) {
    size_t processed;
    [[clang::noinline]] processed = m_Ctr.Update(dst, dstSize, src, srcSize);
    m_ProcessedDataSize += srcSize;
    m_CbcMac.template Update<BlockCipher>(dst, processed);
    if (m_ProcessedDataSize == m_DataSize) {
      PadMac();
      m_State = State_Processed;
    }
    return processed;
  }

private:
  enum State {
    State_None,
    State_ProcessingAad,
    State_ProcessingData,
    State_Processed,
    State_Done,
  };

  [[gnu::visibility("hidden")]] static void EncryptBlock(void* dst,
    const void* src, const void* context) {
    static_cast<const BlockCipher*>(context)->EncryptBlock(dst, BlockSize,
      src, BlockSize);
  }

  void PadMac() {
    if (m_CbcMac.GetBufferedDataSize() != 0) {
      uint8_t zero[BlockSize] = {};
      m_CbcMac.template Update<BlockCipher>(zero,
        BlockSize - m_CbcMac.GetBufferedDataSize());
    }
  }

  uint8_t m_Mac[BlockSize];
  int64_t m_DataSize;
  int64_t m_AadSize;
  size_t m_MacSize;
  int64_t m_ProcessedDataSize;
  int64_t m_ProcessedAadSize;
  State m_State;
  CtrModeImpl<BlockCipher> m_Ctr;
  CbcMacImpl m_CbcMac;
};

template <typename BlockCipher>
void CcmModeImpl<BlockCipher>::Initialize(const BlockCipher* blockCipher,
  const void* nonce, size_t nonceSize, int64_t aadSize, int64_t dataSize,
  size_t macSize) {
  m_DataSize = dataSize;
  m_AadSize = aadSize;
  m_MacSize = macSize;
  m_ProcessedDataSize = 0;
  m_ProcessedAadSize = 0;

  const size_t lengthSize = BlockSize - 1 - nonceSize;

  uint8_t block[BlockSize] = {};
  block[0] = static_cast<uint8_t>((lengthSize - 1) & 7);
  memcpy(block + 1, nonce, nonceSize);
  blockCipher->EncryptBlock(m_Mac, BlockSize, block, BlockSize);

  m_Ctr.Initialize(blockCipher, block, BlockSize);
  [[clang::noinline]] m_Ctr.IncrementCounter();

  uint64_t length = static_cast<uint64_t>(dataSize);
  for (int i = 0; i < 7; ++i) {
    block[1 + i] = 0;
  }
  for (int i = 0; i < 8; ++i) {
    block[BlockSize - 1 - i] = static_cast<uint8_t>(length >> (8 * i));
  }
  block[0] = static_cast<uint8_t>((aadSize > 0 ? 0x40 : 0) |
    ((((macSize - 2) / 2) & 7) << 3) | ((lengthSize - 1) & 7));
  memcpy(block + 1, nonce, nonceSize);

  m_CbcMac.Initialize(blockCipher, EncryptBlock);
  m_CbcMac.template Update<BlockCipher>(block, BlockSize);

  if (aadSize > 0) {
    uint64_t size = static_cast<uint64_t>(m_AadSize);
    uint8_t encoded[10] = {};
    size_t encodedSize;
    if (static_cast<int64_t>(size) < 0xff00) {
      encoded[0] = static_cast<uint8_t>(size >> 8);
      encoded[1] = static_cast<uint8_t>(size);
      encodedSize = 2;
    }
    else if (size <= 0xfffffffe) {
      encoded[0] = 0xff;
      encoded[1] = 0xfe;
      for (int i = 0; i < 4; ++i) {
        encoded[2 + i] = static_cast<uint8_t>(size >> (8 * (3 - i)));
      }
      encodedSize = 6;
    }
    else {
      encoded[0] = 0xff;
      encoded[1] = 0xff;
      for (int i = 0; i < 8; ++i) {
        encoded[2 + i] = static_cast<uint8_t>(size >> (8 * (7 - i)));
      }
      encodedSize = 10;
    }
    m_CbcMac.template Update<BlockCipher>(encoded, encodedSize);
    m_State = State_ProcessingAad;
  }
  else {
    m_State = State_ProcessingData;
  }
}

template <typename BlockCipher>
void CcmModeImpl<BlockCipher>::GetMac(void* mac, size_t macSize) {
  if (m_State == State_Processed) {
    uint8_t tag[BlockSize] = {};
    m_CbcMac.GetMac(tag, BlockSize);
    for (size_t i = 0; i < BlockSize; ++i) {
      m_Mac[i] ^= tag[i];
    }
    m_State = State_Done;
  }

  memcpy(mac, m_Mac, m_MacSize);
}

static_assert(sizeof(CcmModeImpl<AesEncryptor<16>>) == 184);

}
