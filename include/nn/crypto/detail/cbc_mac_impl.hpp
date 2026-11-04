#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

class CbcMacImpl {
public:
  using EncryptFunction = void (*)(void* dst, const void* src,
    const void* context);

  ~CbcMacImpl();

private:
  uint8_t m_Mac[16];
  uint8_t m_Buffer[16];
  size_t m_BufferedBytes;
  const void* m_CipherContext;
  EncryptFunction m_EncryptFunction;
  int m_State;
};

static_assert(sizeof(CbcMacImpl) == 64);

}
