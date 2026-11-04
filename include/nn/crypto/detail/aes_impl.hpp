#pragma once

#include <stddef.h>
#include <stdint.h>

namespace nn::crypto::detail {

template <size_t KeySizeValue> class AesImpl {
public:
  static constexpr size_t KeySize = KeySizeValue;
  static constexpr size_t BlockSize = 16;
  static constexpr int RoundCount = KeySize / 4 + 6;
  static constexpr size_t RoundKeySize = BlockSize * (RoundCount + 1);

  AesImpl() = default;
  ~AesImpl();

  void Initialize(const void* key, size_t keySize, bool isEncryptionKey);
  void EncryptBlock(void* dst, size_t dstSize, const void* src,
    size_t srcSize) const;
  void DecryptBlock(void* dst, size_t dstSize, const void* src,
    size_t srcSize) const;

  const uint8_t* GetRoundKey() const {
    return reinterpret_cast<const uint8_t*>(m_RoundKey);
  }

private:
  uint32_t m_RoundKey[RoundKeySize / sizeof(uint32_t)] = {};
};

}

namespace nn::crypto {

template <size_t KeySizeValue> class AesEncryptor {
public:
  static constexpr size_t KeySize = KeySizeValue;
  static constexpr size_t BlockSize = 16;

  void Initialize(const void* key, size_t keySize) {
    m_Impl.Initialize(key, keySize, true);
  }

  void EncryptBlock(void* dst, size_t dstSize, const void* src,
    size_t srcSize) const {
    m_Impl.EncryptBlock(dst, dstSize, src, srcSize);
  }

  const uint8_t* GetRoundKey() const {
    return m_Impl.GetRoundKey();
  }

private:
  detail::AesImpl<KeySize> m_Impl;
};

template <size_t KeySizeValue> class AesDecryptor {
public:
  static constexpr size_t KeySize = KeySizeValue;
  static constexpr size_t BlockSize = 16;

  void Initialize(const void* key, size_t keySize) {
    m_Impl.Initialize(key, keySize, false);
  }

  void DecryptBlock(void* dst, size_t dstSize, const void* src,
    size_t srcSize) const {
    m_Impl.DecryptBlock(dst, dstSize, src, srcSize);
  }

  const uint8_t* GetRoundKey() const {
    return m_Impl.GetRoundKey();
  }

private:
  detail::AesImpl<KeySize> m_Impl;
};

using AesEncryptor128 = AesEncryptor<16>;
using AesEncryptor192 = AesEncryptor<24>;
using AesEncryptor256 = AesEncryptor<32>;
using AesDecryptor128 = AesDecryptor<16>;
using AesDecryptor192 = AesDecryptor<24>;
using AesDecryptor256 = AesDecryptor<32>;

}
