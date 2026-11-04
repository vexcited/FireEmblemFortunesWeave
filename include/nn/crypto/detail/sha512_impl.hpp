#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/crypto/sha512_context.hpp"

namespace nn::crypto::detail {

class Sha512Impl {
public:
  static constexpr size_t HashSize = 64;
  static constexpr size_t BlockSize = 128;

  Sha512Impl() = default;
  ~Sha512Impl();

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);
  void InitializeWithContext(const Sha512Context* context);
  size_t GetContext(Sha512Context* context) const;

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

  void ProcessBlock(const void* data);
  void ProcessLastBlock();

  uint64_t m_IntermediateHash[8] = {};
  uint8_t m_Buffer[BlockSize] = {};
  size_t m_BufferedBytes = 0;
  uint64_t m_BitsConsumed[2] = {};
  State m_State = State_None;
};

static_assert(sizeof(Sha512Impl) == 224);

}
