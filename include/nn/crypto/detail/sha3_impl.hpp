#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/sha3_context.hpp"

namespace nn::crypto::detail {

template <size_t HashSizeValue> class Sha3Impl {
public:
  static constexpr size_t HashSize = HashSizeValue;
  static constexpr size_t BlockSize = 200 - 2 * HashSize;

  Sha3Impl();
  ~Sha3Impl();

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha3Context* context);
  void GetContext(Sha3Context* context) const;

private:
  enum State {
    State_None,
    State_Initialized,
    State_Done,
  };

  void ProcessBlock();
  void ProcessBlocks(const uint8_t* data, int blockCount);
  void ProcessLastBlock();

  uint64_t m_InternalState[25];
  size_t m_BufferedBytes;
  State m_State;
};

}
