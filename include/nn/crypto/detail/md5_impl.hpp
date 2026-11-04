#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

class Md5Impl {
public:
  static constexpr size_t HashSize = 16;
  static constexpr size_t BlockSize = 64;

  Md5Impl() = default;
  ~Md5Impl();

  void Initialize();
  void Update(const void* data, size_t size);
  void GetHash(void* hash, size_t hashSize);

private:
  enum State {
    State_None,
    State_Initialized,
    State_Done,
  };

  void ProcessBlock();
  void ProcessLastBlock();

  uint32_t m_State[4] = {};
  uint8_t m_Buffer[BlockSize] = {};
  uint64_t m_Size = 0;
  State m_ImplState = State_None;
};

static_assert(sizeof(Md5Impl) == 96);

}
