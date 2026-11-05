#pragma once

#include <string.h>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_istorage.hpp"

namespace nn::fs {

constexpr Result ResultUnsupportedSetSizeForMemoryStorage() {
  return detail::MakeResult(6304);
}

constexpr Result ResultUnsupportedOperateRangeForMemoryStorage() {
  return detail::MakeResult(6305);
}

template<typename BufferType, typename VoidType>
class MemoryStorageImpl : public IStorage, public detail::Newable {
public:
  MemoryStorageImpl(VoidType buffer, int64_t size)
    : m_Buffer(static_cast<BufferType>(buffer)), m_Size(size) {}

  Result Read(int64_t offset, void* buffer, size_t size) override {
    if (size == 0) {
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
    memcpy(buffer, m_Buffer + offset, size);
    return ResultSuccess();
  }

  Result Write(int64_t offset, const void* buffer, size_t size) override {
    if (size == 0) {
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
    memcpy(m_Buffer + offset, buffer, size);
    return ResultSuccess();
  }

  Result Flush() override {
    return ResultSuccess();
  }

  Result GetSize(int64_t* outSize) override {
    *outSize = m_Size;
    return ResultSuccess();
  }

  Result SetSize(int64_t size) override {
    (void)size;
    return ResultUnsupportedSetSizeForMemoryStorage();
  }

  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override {
    (void)offset;
    (void)size;
    (void)inBuffer;
    (void)inBufferSize;
    switch (operationId) {
      case OperationId_Invalidate:
        return ResultSuccess();
      case OperationId_QueryRange:
        NN_FS_RESULT_THROW_UNLESS(outBuffer != nullptr,
          ResultNullptrArgument());
        NN_FS_RESULT_THROW_UNLESS(outBufferSize == sizeof(QueryRangeInfo),
          ResultInvalidSize());
        static_cast<QueryRangeInfo*>(outBuffer)->Clear();
        return ResultSuccess();
      default:
        return ResultUnsupportedOperateRangeForMemoryStorage();
    }
  }

private:
  BufferType m_Buffer;
  int64_t m_Size;
};

typedef MemoryStorageImpl<char*, void*> MemoryStorage;

}
