#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/crypto/detail/aes_impl.hpp"
#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::crypto::detail {

template <typename BlockCipher> class CbcModeImpl {
public:
  static constexpr size_t BlockSize = BlockCipher::BlockSize;
  static constexpr size_t IvSize = BlockSize;

  CbcModeImpl() = default;

  ~CbcModeImpl() {
    ClearMemoryImpl(this, sizeof(*this));
  }

  void Initialize(const BlockCipher* blockCipher, const void* iv,
    size_t ivSize) {
    m_BlockCipher = blockCipher;
    memcpy(m_Iv, iv, ivSize);
    m_BufferedBytes = 0;
    m_State = State_Initialized;
  }

  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize) {
    uint8_t* output = static_cast<uint8_t*>(dst);
    const uint8_t* input = static_cast<const uint8_t*>(src);
    if (dstSize < ((m_BufferedBytes + srcSize) & ~(BlockSize - 1))) {
      nn::diag::detail::AbortImpl();
    }

    size_t processed = 0;
    if (m_BufferedBytes > 0) {
      size_t copySize = BlockSize - m_BufferedBytes;
      if (srcSize < copySize) {
        copySize = srcSize;
      }
      memcpy(m_Buffer + m_BufferedBytes, input, copySize);
      input += copySize;
      srcSize -= copySize;
      m_BufferedBytes += copySize;
      if (m_BufferedBytes == BlockSize) {
        ProcessBlocks(output, m_Buffer, 1);
        output += BlockSize;
        processed += BlockSize;
        m_BufferedBytes = 0;
      }
    }

    if (srcSize >= BlockSize) {
      int blockCount = static_cast<int>(srcSize / BlockSize);
      ProcessBlocks(output, input, blockCount);
      const int processSize = blockCount * static_cast<int>(BlockSize);
      input += processSize;
      srcSize -= processSize;
      processed += processSize;
    }

    if (srcSize > 0) {
      m_BufferedBytes = srcSize;
      memcpy(m_Buffer, input, srcSize);
    }
    return processed;
  }

  static void EncryptBlocks(uint8_t* dst, uint8_t* iv, const uint8_t* src,
    int blockCount, const BlockCipher* blockCipher);
  static void DecryptBlocks(uint8_t* dst, uint8_t* iv, const uint8_t* src,
    int blockCount, const BlockCipher* blockCipher);

private:
  enum State {
    State_None,
    State_Initialized,
  };

  void ProcessBlocks(uint8_t* dst, const uint8_t* src, int blockCount);

  const BlockCipher* m_BlockCipher = nullptr;
  uint8_t m_Iv[IvSize] = {};
  uint8_t m_Buffer[BlockSize] = {};
  size_t m_BufferedBytes = 0;
  State m_State = State_None;
};

template <>
void CbcModeImpl<AesEncryptor<16>>::EncryptBlocks(uint8_t* dst, uint8_t* iv,
  const uint8_t* src, int blockCount, const AesEncryptor<16>* blockCipher);

template <>
void CbcModeImpl<AesDecryptor<16>>::DecryptBlocks(uint8_t* dst, uint8_t* iv,
  const uint8_t* src, int blockCount, const AesDecryptor<16>* blockCipher);

template <>
inline void CbcModeImpl<AesEncryptor<16>>::ProcessBlocks(uint8_t* dst,
  const uint8_t* src, int blockCount) {
  EncryptBlocks(dst, m_Iv, src, blockCount, m_BlockCipher);
}

template <>
inline void CbcModeImpl<AesDecryptor<16>>::ProcessBlocks(uint8_t* dst,
  const uint8_t* src, int blockCount) {
  DecryptBlocks(dst, m_Iv, src, blockCount, m_BlockCipher);
}

}

namespace nn::crypto {

template <typename BlockCipher> class CbcCipher {
public:
  void Initialize(const void* key, size_t keySize, const void* iv,
    size_t ivSize) {
    m_BlockCipher.Initialize(key, keySize);
    m_Impl.Initialize(&m_BlockCipher, iv, ivSize);
  }

  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize) {
    return m_Impl.Update(dst, dstSize, src, srcSize);
  }

private:
  BlockCipher m_BlockCipher = {};
  detail::CbcModeImpl<BlockCipher> m_Impl;
};

using Aes128CbcEncryptor = CbcCipher<AesEncryptor128>;
using Aes128CbcDecryptor = CbcCipher<AesDecryptor128>;

size_t EncryptAes128Cbc(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize);
size_t DecryptAes128Cbc(void* dst, size_t dstSize, const void* key,
  size_t keySize, const void* iv, size_t ivSize, const void* src,
  size_t srcSize);

}
