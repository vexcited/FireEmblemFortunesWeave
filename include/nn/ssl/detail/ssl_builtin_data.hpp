#pragma once

#include <stdint.h>

#include "nn/result.hpp"

namespace nn::ssl::detail {

struct Sha256Digest {
  uint8_t value[32];

  Sha256Digest();

  bool operator==(const Sha256Digest& other) const;
};

class BuiltinDataLoader {
 public:
  virtual ~BuiltinDataLoader() = default;
  virtual uint32_t GetDataSize() = 0;
  virtual Result GetData(uint8_t* pOutBuffer, uint32_t bufferSize,
    uint32_t* pOutSize) = 0;
};

class BuiltinDataInfo {
 public:
  enum class BuiltinDataStatus : uint32_t {};

  BuiltinDataInfo(uint32_t id, BuiltinDataStatus status, const char* name,
    BuiltinDataLoader* pLoader, const Sha256Digest& digest);
  ~BuiltinDataInfo();

  uint32_t GetId() const;
  BuiltinDataStatus GetStatus() const;
  const char* GetName() const;
  Result GetData(uint8_t* pOutBuffer, uint32_t bufferSize,
    uint32_t* pOutSize);
  uint32_t GetDataSize() const;
  const Sha256Digest& GetDigest() const;

 private:
  uint32_t m_Id;
  BuiltinDataStatus m_Status;
  const char* m_pName;
  BuiltinDataLoader* m_pLoader;
  Sha256Digest m_Digest;
};

}
