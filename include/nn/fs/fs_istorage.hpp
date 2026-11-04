#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_result.hpp"

namespace nn::fs {

enum OperationId {
  OperationId_FillZero,
  OperationId_DestroySignature,
  OperationId_Invalidate,
  OperationId_QueryRange,
};

struct QueryRangeInfo {
  int32_t aesCtrKeyTypeFlag;
  int32_t speedEmulationTypeFlag;
  char reserved[56];

  void Clear() {
    aesCtrKeyTypeFlag = 0;
    speedEmulationTypeFlag = 0;
    for (char& c : reserved) {
      c = 0;
    }
  }
};

constexpr Result ResultOutOfRange() {
  return detail::MakeResult(3005);
}

constexpr Result ResultInvalidOffset() {
  return detail::MakeResult(6061);
}

constexpr Result ResultInvalidSize() {
  return detail::MakeResult(6062);
}

class IStorage {
public:
  virtual ~IStorage() {}

  virtual Result Read(int64_t offset, void* buffer, size_t size) = 0;
  virtual Result Write(int64_t offset, const void* buffer, size_t size) = 0;
  virtual Result Flush() = 0;
  virtual Result SetSize(int64_t size) = 0;
  virtual Result GetSize(int64_t* outSize) = 0;
  virtual Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) = 0;

  static Result CheckAccessRange(int64_t offset, int64_t size,
    int64_t totalSize);
  static Result CheckOffsetAndSize(int64_t offset, int64_t size);
};

}
