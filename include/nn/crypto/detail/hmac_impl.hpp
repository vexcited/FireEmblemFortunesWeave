#pragma once

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/crypto/detail/clear_memory.hpp"

namespace nn::crypto::detail {

template <typename HashFunction> class HmacImpl {
public:
  static constexpr size_t MacSize = HashFunction::HashSize;
  static constexpr size_t BlockSize = HashFunction::BlockSize;

  ~HmacImpl() {
    ClearMemoryImpl(m_Key, sizeof(*this) - sizeof(m_HashFunction));
  }

  void Initialize(const void* key, size_t keySize);

  void Update(const void* data, size_t size) {
    m_HashFunction.Update(data, size);
  }

  void GetMac(void* mac, size_t macSize);

private:
  enum State {
    State_None,
    State_Initialized,
    State_Done,
  };

  static constexpr uint8_t InnerPad = 0x36;
  static constexpr uint8_t OuterPad = 0x5c;

  HashFunction m_HashFunction = {};
  uint8_t m_Key[BlockSize] = {};
  uint8_t m_Mac[MacSize] = {};
  State m_State = State_None;
};

template <typename HashFunction>
void HmacImpl<HashFunction>::Initialize(const void* key, size_t keySize) {
  memset(m_Key, 0, sizeof(m_Key));
  if (keySize <= sizeof(m_Key)) {
    memcpy(m_Key, key, keySize);
  }
  else {
    m_HashFunction.Initialize();
    m_HashFunction.Update(key, keySize);
    m_HashFunction.GetHash(m_Key, MacSize);
  }

  for (size_t i = 0; i < sizeof(m_Key); ++i) {
    m_Key[i] ^= InnerPad;
  }

  m_HashFunction.Initialize();
  m_HashFunction.Update(m_Key, sizeof(m_Key));
  m_State = State_Initialized;
}

template <typename HashFunction>
void HmacImpl<HashFunction>::GetMac(void* mac, size_t macSize) {
  (void)macSize;
  if (m_State == State_Initialized) {
    m_HashFunction.GetHash(m_Mac, sizeof(m_Mac));

    for (size_t i = 0; i < sizeof(m_Key); ++i) {
      m_Key[i] ^= InnerPad ^ OuterPad;
    }

    m_HashFunction.Initialize();
    m_HashFunction.Update(m_Key, sizeof(m_Key));
    m_HashFunction.Update(m_Mac, sizeof(m_Mac));
    m_HashFunction.GetHash(m_Mac, sizeof(m_Mac));
    m_State = State_Done;
  }
  memcpy(mac, m_Mac, MacSize);
}

}
