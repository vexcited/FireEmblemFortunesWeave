#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/crypto/detail/aes_impl.hpp"
#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

template <typename BlockCipher> class CtrModeImpl {
public:
  static constexpr size_t BlockSize = BlockCipher::BlockSize;
  static constexpr size_t IvSize = BlockSize;

  CtrModeImpl() = default;

  ~CtrModeImpl() {
    ClearMemoryImpl(this, sizeof(*this));
  }

  void Initialize(const BlockCipher* blockCipher, const void* iv,
    size_t ivSize) {
    m_BlockCipher = blockCipher;
    m_State = State_Initialized;
    memcpy(m_Counter, iv, ivSize);
    m_BufferedBytes = 0;
  }

  void Initialize(const BlockCipher* blockCipher, const void* iv,
    size_t ivSize, int64_t offset);

  void SwitchMessage(const void* iv, size_t ivSize) {
    memcpy(m_Counter, iv, ivSize);
    m_BufferedBytes = 0;
  }

  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize);

private:
  template <typename> friend class CcmModeImpl;

  enum State {
    State_None,
    State_Initialized,
  };

  void ProcessBlocks(uint8_t* dst, const uint8_t* src, int blockCount);
  void IncrementCounter();

  const BlockCipher* m_BlockCipher = nullptr;
  uint8_t m_Counter[IvSize] = {};
  uint8_t m_EncryptedCounter[BlockSize] = {};
  size_t m_BufferedBytes = 0;
  State m_State = State_None;
};

template <typename BlockCipher>
void CtrModeImpl<BlockCipher>::Initialize(const BlockCipher* blockCipher,
  const void* iv, size_t ivSize, int64_t offset) {
  Initialize(blockCipher, iv, ivSize);

  if (offset >= 0) {
    uint64_t blockOffset = static_cast<uint64_t>(offset) / BlockSize;
    if (blockOffset > 0) {
      uint8_t increment[IvSize] = {};
      for (int i = 0; i < 8; ++i) {
        increment[IvSize - 1 - i] =
          static_cast<uint8_t>(blockOffset >> (8 * i));
      }

      unsigned carry = 0;
      for (int i = IvSize - 1; i >= 0; --i) {
        carry += m_Counter[i] + increment[i];
        m_Counter[i] = static_cast<uint8_t>(carry);
        carry >>= 8;
      }
    }

    size_t remaining = static_cast<uint64_t>(offset) % BlockSize;
    if (remaining != 0) {
      m_BlockCipher->EncryptBlock(m_EncryptedCounter, BlockSize, m_Counter,
        IvSize);
      IncrementCounter();
      m_BufferedBytes = remaining;
    }
  }
}

template <typename BlockCipher>
size_t CtrModeImpl<BlockCipher>::Update(void* dst, size_t dstSize,
  const void* src, size_t srcSize) {
  (void)dstSize;
  uint8_t* output = static_cast<uint8_t*>(dst);
  const uint8_t* input = static_cast<const uint8_t*>(src);
  size_t remaining = srcSize;

  if (m_BufferedBytes > 0) {
    size_t size = BlockSize - m_BufferedBytes;
    if (remaining < size) {
      size = remaining;
    }
    const uint8_t* encryptedCounter = &m_EncryptedCounter[m_BufferedBytes];
    for (int i = 0; i < static_cast<int>(size); ++i) {
      output[i] = encryptedCounter[i] ^ input[i];
    }
    output += size;
    input += size;
    remaining -= size;

    m_BufferedBytes += size;
    if (m_BufferedBytes == BlockSize) {
      m_BufferedBytes = 0;
    }
  }

  if (remaining >= BlockSize) {
    int blockCount = static_cast<int>(remaining / BlockSize);
    ProcessBlocks(output, input, blockCount);
    size_t processed = static_cast<size_t>(blockCount) * BlockSize;
    output += processed;
    input += processed;
    remaining -= processed;
  }

  if (remaining > 0) {
    m_BlockCipher->EncryptBlock(m_EncryptedCounter, BlockSize, m_Counter,
      IvSize);
    IncrementCounter();
    for (int i = 0; i < static_cast<int>(remaining); ++i) {
      output[i] = m_EncryptedCounter[i] ^ input[i];
    }
    m_BufferedBytes = remaining;
  }

  return srcSize;
}

template <typename BlockCipher>
void CtrModeImpl<BlockCipher>::ProcessBlocks(uint8_t* dst,
  const uint8_t* src, int blockCount) {
  while (blockCount-- != 0) {
    m_BlockCipher->EncryptBlock(m_EncryptedCounter, BlockSize, m_Counter,
      IvSize);
    IncrementCounter();
    for (size_t i = 0; i < BlockSize; ++i) {
      dst[i] = m_EncryptedCounter[i] ^ src[i];
    }
    dst += BlockSize;
    src += BlockSize;
  }
}

template <typename BlockCipher>
void CtrModeImpl<BlockCipher>::IncrementCounter() {
  for (int i = IvSize - 1; i >= 0; --i) {
    if (++m_Counter[i] != 0) {
      break;
    }
  }
}

template <>
void CtrModeImpl<AesEncryptor<16>>::ProcessBlocks(uint8_t* dst,
  const uint8_t* src, int blockCount);

}
