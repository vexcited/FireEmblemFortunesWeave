#include "nn/fs/fs_file_storage.hpp"

#include <mutex>

#include "nn/fs/fs_file.hpp"

namespace nn::fs {

FileStorage::FileStorage()
  : m_pBaseFile(nullptr), m_SharedBaseFile(), m_Size(InvalidSize) {}

FileStorage::FileStorage(fsa::IFile* baseFile)
  : m_pBaseFile(baseFile), m_SharedBaseFile(), m_Size(InvalidSize) {}

FileStorage::FileStorage(std::shared_ptr<fsa::IFile> baseFile)
  : m_pBaseFile(baseFile.get()), m_SharedBaseFile(std::move(baseFile)),
    m_Size(InvalidSize) {}

Result FileStorage::Read(int64_t offset, void* buffer, size_t size) {
  if (size == 0) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(UpdateSize());
  NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
  size_t readSize = 0;
  return m_pBaseFile->Read(&readSize, offset, buffer, size, ReadOption());
}

Result FileStorage::UpdateSize() {
  if (m_Size != InvalidSize) {
    return ResultSuccess();
  }
  int64_t size = 0;
  NN_FS_RESULT_DO(m_pBaseFile->GetSize(&size));
  m_Size = size;
  return ResultSuccess();
}

Result FileStorage::Write(int64_t offset, const void* buffer, size_t size) {
  if (size == 0) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(UpdateSize());
  NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
  return m_pBaseFile->Write(offset, buffer, size, WriteOption());
}

Result FileStorage::SetSize(int64_t size) {
  m_Size = InvalidSize;
  return m_pBaseFile->SetSize(size);
}

Result FileStorage::GetSize(int64_t* outSize) {
  NN_FS_RESULT_DO(UpdateSize());
  *outSize = m_Size;
  return ResultSuccess();
}

Result FileStorage::Flush() {
  return m_pBaseFile->Flush();
}

Result FileStorage::OperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size,
  const void* inBuffer, size_t inBufferSize) {
  switch (operationId) {
    case OperationId_Invalidate:
      return m_pBaseFile->OperateRange(nullptr, 0, OperationId_Invalidate,
        offset, size, nullptr, 0);
    case OperationId_QueryRange:
      if (size == 0) {
        NN_FS_RESULT_THROW_UNLESS(outBuffer != nullptr,
          ResultNullptrArgument());
        NN_FS_RESULT_THROW_UNLESS(outBufferSize == sizeof(QueryRangeInfo),
          ResultInvalidSize());
        static_cast<QueryRangeInfo*>(outBuffer)->Clear();
        return ResultSuccess();
      }
      NN_FS_RESULT_DO(UpdateSize());
      NN_FS_RESULT_DO(CheckOffsetAndSize(offset, size));
      return m_pBaseFile->OperateRange(outBuffer, outBufferSize, operationId,
        offset, size, inBuffer, inBufferSize);
    default:
      return ResultUnsupportedOperateRangeForFileStorage();
  }
}

FileStorageBasedFileSystem::FileStorageBasedFileSystem()
  : FileStorage(), m_BaseFileSystem(), m_BaseFile() {}

Result FileStorageBasedFileSystem::Initialize(
  std::shared_ptr<fsa::IFileSystem> baseFileSystem, const Path& path,
  OpenMode mode) {
  std::unique_ptr<fsa::IFile> baseFile;
  NN_FS_RESULT_DO(baseFileSystem->OpenFile(&baseFile, path, mode));
  SetFile(baseFile.get());
  m_BaseFileSystem = std::move(baseFileSystem);
  m_BaseFile = std::move(baseFile);
  return ResultSuccess();
}

FileHandleStorage::FileHandleStorage(FileHandle handle)
  : FileHandleStorage(handle, false) {}

FileHandleStorage::FileHandleStorage(FileHandle handle, bool closeFile)
  : m_Handle(handle), m_CloseFile(closeFile), m_Size(InvalidSize),
    m_Mutex() {}

FileHandleStorage::~FileHandleStorage() {
  if (m_CloseFile) {
    CloseFile(m_Handle);
  }
}

Result FileHandleStorage::Read(int64_t offset, void* buffer, size_t size) {
  std::lock_guard<os::SdkMutex> lock(m_Mutex);
  if (size == 0) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(UpdateSize());
  NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
  return ReadFile(m_Handle, offset, buffer, size, ReadOption());
}

Result FileHandleStorage::UpdateSize() {
  if (m_Size != InvalidSize) {
    return ResultSuccess();
  }
  int64_t size = 0;
  NN_FS_RESULT_DO(GetFileSize(&size, m_Handle));
  m_Size = size;
  return ResultSuccess();
}

Result FileHandleStorage::Write(int64_t offset, const void* buffer,
  size_t size) {
  std::lock_guard<os::SdkMutex> lock(m_Mutex);
  if (size == 0) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_DO(UpdateSize());
  NN_FS_RESULT_DO(CheckAccessRange(offset, size, m_Size));
  return WriteFile(m_Handle, offset, buffer, size, WriteOption());
}

Result FileHandleStorage::GetSize(int64_t* outSize) {
  NN_FS_RESULT_DO(UpdateSize());
  *outSize = m_Size;
  return ResultSuccess();
}

Result FileHandleStorage::SetSize(int64_t size) {
  m_Size = InvalidSize;
  return SetFileSize(m_Handle, size);
}

Result FileHandleStorage::Flush() {
  return FlushFile(m_Handle);
}

Result FileHandleStorage::OperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size,
  const void* inBuffer, size_t inBufferSize) {
  static_cast<void>(inBuffer);
  static_cast<void>(inBufferSize);
  switch (operationId) {
    case OperationId_Invalidate:
      return Flush();
    case OperationId_QueryRange:
      NN_FS_RESULT_THROW_UNLESS(outBuffer != nullptr,
        ResultNullptrArgument());
      NN_FS_RESULT_THROW_UNLESS(outBufferSize == sizeof(QueryRangeInfo),
        ResultInvalidSize());
      return QueryRange(static_cast<QueryRangeInfo*>(outBuffer), m_Handle,
        offset, size);
    default:
      return ResultUnsupportedOperateRangeForFileHandleStorage();
  }
}

}
