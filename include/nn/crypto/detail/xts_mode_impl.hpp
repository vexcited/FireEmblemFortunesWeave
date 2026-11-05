#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

class XtsModeImpl {
public:
  static constexpr size_t BlockSize = 16;

  using CipherFunction = void (*)(void* dst, const void* src,
    const void* context);

  ~XtsModeImpl();

  size_t UpdateGeneric(void* dst, size_t dstSize, const void* src,
    size_t srcSize);
  template <typename BlockCipher>
  size_t Update(void* dst, size_t dstSize, const void* src, size_t srcSize);
  size_t FinalizeEncryption(void* dst, size_t dstSize);
  size_t FinalizeDecryption(void* dst, size_t dstSize);

  size_t GetBufferedDataSize() const {
    return m_BufferedBytes;
  }

  size_t ProcessPartialData(uint8_t* dst, const uint8_t* src, size_t size);
  size_t ProcessBlocksGeneric(uint8_t* dst, const uint8_t* src,
    int blockCount);
  template <typename BlockCipher>
  size_t ProcessBlocks(uint8_t* dst, const uint8_t* src, int blockCount);
  size_t ProcessRemainingData(uint8_t* dst, const uint8_t* src, size_t size);

private:
  enum State {
    State_None,
    State_Initialized,
    State_Processing,
    State_Done,
  };

  void ProcessBlock(uint8_t* dst, const uint8_t* src);

  uint8_t m_Buffer[16];
  uint8_t m_Tweak[16];
  uint8_t m_LastBlock[16];
  size_t m_BufferedBytes;
  const void* m_CipherContext;
  CipherFunction m_CipherFunction;
  State m_State;
};

static_assert(sizeof(XtsModeImpl) == 80);

}
