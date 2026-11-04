#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

class XtsModeImpl {
public:
  using CipherFunction = void (*)(void* dst, const void* src,
    const void* context);

  ~XtsModeImpl();

private:
  uint8_t m_Buffer[16];
  uint8_t m_Tweak[16];
  uint8_t m_LastBlock[16];
  size_t m_BufferedBytes;
  const void* m_CipherContext;
  CipherFunction m_CipherFunction;
  int m_State;
};

static_assert(sizeof(XtsModeImpl) == 80);

}
