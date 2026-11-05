#pragma once

#include <stdint.h>

#include "nn/fs/fs_result.hpp"

namespace nn::fs {

struct DirectoryEntry;

}

namespace nn::fs::fsa {

class IDirectory {
public:
  virtual ~IDirectory() {}

  Result Read(int64_t* outCount, DirectoryEntry* entries, int64_t count) {
    NN_FS_RESULT_THROW_UNLESS(outCount != nullptr, ResultNullptrArgument());
    if (count == 0) {
      *outCount = 0;
      return ResultSuccess();
    }
    NN_FS_RESULT_THROW_UNLESS(entries != nullptr, ResultNullptrArgument());
    NN_FS_RESULT_THROW_UNLESS(count > 0, ResultInvalidArgument());
    return DoRead(outCount, entries, count);
  }

  Result GetEntryCount(int64_t* outCount) {
    NN_FS_RESULT_THROW_UNLESS(outCount != nullptr, ResultNullptrArgument());
    return DoGetEntryCount(outCount);
  }

private:
  virtual Result DoRead(int64_t* outCount, DirectoryEntry* entries,
    int64_t count) = 0;
  virtual Result DoGetEntryCount(int64_t* outCount) = 0;
};

}
