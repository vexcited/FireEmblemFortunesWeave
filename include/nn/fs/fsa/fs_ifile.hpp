#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_file.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fs_result.hpp"


namespace nn::fs::fsa {

class IFile {
public:
  virtual ~IFile() {}

  Result Read(size_t* outSize, int64_t offset, void* buffer, size_t size,
    const ReadOption& option) {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
    if (size == 0) {
      *outSize = 0;
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
    NN_FS_RESULT_THROW_UNLESS(static_cast<int64_t>(size) >= 0,
      ResultInvalidSize());
    NN_FS_RESULT_THROW_UNLESS(
      static_cast<int64_t>(size) <= INT64_MAX - offset, ResultOutOfRange());
    return DoRead(outSize, offset, buffer, size, option);
  }

  Result Write(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option) {
    if (size == 0) {
      if (option.HasFlushFlag()) {
        NN_FS_RESULT_DO(Flush());
      }
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
    NN_FS_RESULT_THROW_UNLESS(static_cast<int64_t>(size) >= 0,
      ResultInvalidSize());
    NN_FS_RESULT_THROW_UNLESS(
      static_cast<int64_t>(size) <= INT64_MAX - offset, ResultOutOfRange());
    return DoWrite(offset, buffer, size, option);
  }

  Result Flush() {
    return DoFlush();
  }

  Result SetSize(int64_t size) {
    NN_FS_RESULT_THROW_UNLESS(size >= 0, ResultInvalidSize());
    return DoSetSize(size);
  }

  Result GetSize(int64_t* outSize) {
    NN_FS_RESULT_THROW_UNLESS(outSize != nullptr, ResultNullptrArgument());
    return DoGetSize(outSize);
  }

  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) {
    return DoOperateRange(outBuffer, outBufferSize, operationId, offset,
      size, inBuffer, inBufferSize);
  }

private:
  virtual Result DoRead(size_t* outSize, int64_t offset, void* buffer,
    size_t size, const ReadOption& option) = 0;
  virtual Result DoWrite(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option) = 0;
  virtual Result DoFlush() = 0;
  virtual Result DoSetSize(int64_t size) = 0;
  virtual Result DoGetSize(int64_t* outSize) = 0;
  virtual Result DoOperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) = 0;
};

}
