#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

class GhashImpl {
public:
  struct Block {
    uint64_t data[2];
  };

  ~GhashImpl();

  void InitializeHashKey(Block* hashKey);
  void Reset();
  void Update(const void* data, size_t size);
  void ProcessPadding();
  void SwitchMessageSizeDigit();
  void GetGhash(void* ghash, size_t ghashSize);

private:
  enum State {
    State_None,
    State_Initialized,
    State_ProcessingData,
  };

  void GfMultH(Block* block);

  Block m_Ghash;
  Block m_HashKeyTable[17];
  uint64_t m_MessageSize[2];
  size_t m_BufferedBytes;
  State m_State;
};

static_assert(sizeof(GhashImpl) == 320);

}
