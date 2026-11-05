#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/result.hpp"

namespace nn::fs {

namespace fsa {

class IFile;

}

struct ReadOption {
  int32_t value;
};

struct WriteOption {
  int32_t flags;

  bool HasFlushFlag() const {
    return (flags & 1) != 0;
  }
};

struct FileHandle;
struct QueryRangeInfo;

Result ReadFile(FileHandle handle, int64_t offset, void* buffer, size_t size,
  const ReadOption& option);
Result ReadFile(FileHandle handle, int64_t offset, void* buffer, size_t size);
Result ReadFile(size_t* outValue, FileHandle handle, int64_t offset,
  void* buffer, size_t size);
Result WriteFile(FileHandle handle, int64_t offset, const void* buffer,
  size_t size, const WriteOption& option);
Result FlushFile(FileHandle handle);
Result SetFileSize(FileHandle handle, int64_t size);
Result GetFileSize(int64_t* outSize, FileHandle handle);
Result QueryRange(QueryRangeInfo* outInfo, FileHandle handle, int64_t offset,
  int64_t size);
void CloseFile(FileHandle handle);
Result OpenFile(FileHandle* outHandle, const char* path, int mode);
Result OpenFile(FileHandle* outHandle, std::unique_ptr<fsa::IFile>&& file,
  int mode);

}
