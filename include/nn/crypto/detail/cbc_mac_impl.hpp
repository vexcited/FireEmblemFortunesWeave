#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

class CbcMacImpl {
public:
  static constexpr size_t BlockSize = 16;

  using EncryptFunction = void (*)(void* dst, const void* src,
    const void* context);

  ~CbcMacImpl();

  void Initialize(const void* context, EncryptFunction function) {
    for (size_t i = 0; i < sizeof(m_Mac); ++i) {
      m_Mac[i] = 0;
    }
    m_BufferedBytes = 0;
    m_CipherContext = context;
    m_EncryptFunction = function;
    m_State = State_Initialized;
  }

  void UpdateGeneric(const void* data, size_t size);
  template <typename BlockCipher> void Update(const void* data, size_t size);
  void GetMac(void* mac, size_t macSize);
  void MaskBufferedData(const void* data, size_t size);

  size_t GetBufferedDataSize() const {
    return m_BufferedBytes;
  }

  void ProcessPartialData(const void* data, size_t size);
  void ProcessBlocksGeneric(const void* data, int blockCount);
  template <typename BlockCipher>
  void ProcessBlocks(const void* data, int blockCount);
  void ProcessRemainingData(const void* data, size_t size);

private:
  enum State {
    State_None,
    State_Initialized,
    State_Done,
  };

  void ProcessBlock(const void* data);

  uint8_t m_Mac[16];
  uint8_t m_Buffer[16];
  size_t m_BufferedBytes;
  const void* m_CipherContext;
  EncryptFunction m_EncryptFunction;
  State m_State;
};

static_assert(sizeof(CbcMacImpl) == 64);

}
