#pragma once

#include <stddef.h>

#include "nn/crypto/detail/hmac_impl.hpp"

namespace nn::crypto {

template <typename HashFunction> class HmacGenerator {
public:
  static constexpr size_t MacSize = HashFunction::HashSize;

  void Initialize(const void* key, size_t keySize) {
    m_Impl.Initialize(key, keySize);
  }

  void Update(const void* data, size_t size) {
    m_Impl.Update(data, size);
  }

  void GetMac(void* mac, size_t macSize) {
    m_Impl.GetMac(mac, macSize);
  }

private:
  detail::HmacImpl<HashFunction> m_Impl;
};

void GenerateHmacSha1(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize);
void GenerateHmacSha1Mac(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize);
void GenerateHmacSha256(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize);
void GenerateHmacSha256Mac(void* mac, size_t macSize, const void* data,
  size_t size, const void* key, size_t keySize);

}
