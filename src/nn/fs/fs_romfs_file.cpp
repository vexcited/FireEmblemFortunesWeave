#include "nn/fs/fs_romfs_file_system.hpp"

#include "nn/fs/fs_file.hpp"

namespace nn::fs {

namespace detail {

RomFsFile::RomFsFile(RomFsFileSystem* parent, int64_t start, int64_t end)
  : m_pParent(parent), m_Start(start), m_End(end) {}

RomFsFile::~RomFsFile() {}

Result RomFsFile::DoRead(size_t* outSize, int64_t offset, void* buffer,
  size_t size, const ReadOption& option) {
  static_cast<void>(option);
  int64_t fileSize = 0;
  NN_FS_RESULT_DO(DoGetSize(&fileSize));
  NN_FS_RESULT_THROW_UNLESS(offset <= fileSize, ResultOutOfRange());
  const size_t readSize = size < static_cast<size_t>(fileSize - offset)
    ? size : static_cast<size_t>(fileSize - offset);
  if (readSize == 0) {
    *outSize = 0;
    return ResultSuccess();
  }
  NN_FS_RESULT_DO(GetStorage()->Read(m_Start + offset, buffer, readSize));
  *outSize = readSize;
  return ResultSuccess();
}

}

IStorage* RomFsFileSystem::GetBaseStorage() {
  return m_pBaseStorage;
}

namespace detail {

Result RomFsFile::DoGetSize(int64_t* outSize) {
  *outSize = GetSize();
  return ResultSuccess();
}

int64_t RomFsFile::GetSize() const {
  return m_End - m_Start;
}

Result RomFsFile::DoOperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size,
  const void* inBuffer, size_t inBufferSize) {
  switch (operationId) {
    case OperationId_Invalidate:
      return GetStorage()->OperateRange(nullptr, 0, OperationId_Invalidate, 0,
        INT64_MAX, nullptr, 0);
    case OperationId_QueryRange: {
      NN_FS_RESULT_THROW_UNLESS(offset >= 0, ResultInvalidOffset());
      NN_FS_RESULT_THROW_UNLESS(GetSize() >= offset, ResultOutOfRange());
      const int64_t operateSize = size < 0 || offset + size > GetSize()
        ? GetSize() - offset : size;
      return GetStorage()->OperateRange(outBuffer, outBufferSize,
        OperationId_QueryRange, m_Start + offset, operateSize, inBuffer,
        inBufferSize);
    }
    default:
      return ResultUnsupportedOperateRangeForRomFsFile();
  }
}

Result RomFsFile::DoWrite(int64_t offset, const void* buffer, size_t size,
  const WriteOption& option) {
  static_cast<void>(offset);
  static_cast<void>(buffer);
  static_cast<void>(size);
  static_cast<void>(option);
  return ResultWriteNotPermitted();
}

Result RomFsFile::DoFlush() {
  return ResultSuccess();
}

Result RomFsFile::DoSetSize(int64_t size) {
  static_cast<void>(size);
  return ResultWriteNotPermitted();
}

int64_t RomFsFile::GetOffset() const {
  return m_Start;
}

IStorage* RomFsFile::GetStorage() {
  return m_pParent->GetBaseStorage();
}

}

}
