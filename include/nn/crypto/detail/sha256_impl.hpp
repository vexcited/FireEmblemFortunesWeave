#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/sha256_context.hpp"

namespace nn::crypto::detail {

class Sha256Impl {
public:
  static constexpr size_t HashSize = 32;
  static constexpr size_t BlockSize = 64;

  Sha256Impl() = default;
  ~Sha256Impl();

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha256Context* context);
  size_t GetContext(Sha256Context* context) const;

  size_t GetBufferedDataSize() const {
    return m_BufferedBytes;
  }

  const uint8_t* GetBufferedData() const {
    return m_Buffer;
  }

private:
  enum State {
    State_None,
    State_Initialized,
    State_Done,
  };

  void ProcessBlocks(const uint8_t* data, size_t blockCount);
  void ProcessLastBlock();

  uint32_t m_IntermediateHash[8] = {};
  uint8_t m_Buffer[BlockSize] = {};
  size_t m_BufferedBytes = 0;
  uint64_t m_BitsConsumed = 0;
  State m_State = State_None;
};

static_assert(sizeof(Sha256Impl) == 120);

}
