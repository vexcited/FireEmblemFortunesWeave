#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/os/sdk_mutex.hpp"

namespace nn::fs {

constexpr Result ResultUnsupportedOperateRangeForFileStorage() {
  return detail::MakeResult(6306);
}

constexpr Result ResultUnsupportedOperateRangeForFileHandleStorage() {
  return detail::MakeResult(6307);
}

class FileStorage : public IStorage, public detail::Newable {
public:
  FileStorage();
  explicit FileStorage(fsa::IFile* baseFile);
  explicit FileStorage(std::shared_ptr<fsa::IFile> baseFile);
  virtual ~FileStorage() override {}

  virtual Result Read(int64_t offset, void* buffer, size_t size) override;
  virtual Result Write(int64_t offset, const void* buffer,
    size_t size) override;
  virtual Result Flush() override;
  virtual Result SetSize(int64_t size) override;
  virtual Result GetSize(int64_t* outSize) override;
  virtual Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

protected:
  void SetFile(fsa::IFile* file) {
    m_pBaseFile = file;
  }

private:
  static const int64_t InvalidSize = -1;

  Result UpdateSize();

  fsa::IFile* m_pBaseFile;
  std::shared_ptr<fsa::IFile> m_SharedBaseFile;
  int64_t m_Size;
};

class FileStorageBasedFileSystem : public FileStorage {
public:
  FileStorageBasedFileSystem();

  Result Initialize(std::shared_ptr<fsa::IFileSystem> baseFileSystem,
    const Path& path, OpenMode mode);

private:
  std::shared_ptr<fsa::IFileSystem> m_BaseFileSystem;
  std::unique_ptr<fsa::IFile> m_BaseFile;
};

class FileHandleStorage : public IStorage, public detail::Newable {
public:
  explicit FileHandleStorage(FileHandle handle);
  FileHandleStorage(FileHandle handle, bool closeFile);
  virtual ~FileHandleStorage() override;

  virtual Result Read(int64_t offset, void* buffer, size_t size) override;
  virtual Result Write(int64_t offset, const void* buffer,
    size_t size) override;
  virtual Result Flush() override;
  virtual Result SetSize(int64_t size) override;
  virtual Result GetSize(int64_t* outSize) override;
  virtual Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

private:
  static const int64_t InvalidSize = -1;

  Result UpdateSize();

  FileHandle m_Handle;
  bool m_CloseFile;
  int64_t m_Size;
  os::SdkMutex m_Mutex;
};

}
