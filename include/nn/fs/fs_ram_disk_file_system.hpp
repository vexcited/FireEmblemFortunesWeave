#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/fs/save/fs_save_data_file_system_core.hpp"

namespace nn::fs {

size_t GetRamDiskBufferSize(size_t spaceSize);
Result MountRamDisk(const char* name, void* buffer, size_t bufferSize);

class RamDiskFileSystem : public fsa::IFileSystem, public detail::Newable {
public:
  explicit RamDiskFileSystem(std::unique_ptr<IStorage>&& storage);
  virtual ~RamDiskFileSystem() override {}

  static Result GetBufferSize(size_t* outSize, size_t spaceSize);

  Result FormatAndMount();

private:
  virtual Result DoCreateFile(const Path& path, int64_t size,
    int option) override;
  virtual Result DoDeleteFile(const Path& path) override;
  virtual Result DoCreateDirectory(const Path& path) override;
  virtual Result DoDeleteDirectory(const Path& path) override;
  virtual Result DoDeleteDirectoryRecursively(const Path& path) override;
  virtual Result DoCleanDirectoryRecursively(const Path& path) override;
  virtual Result DoRenameFile(const Path& currentPath,
    const Path& newPath) override;
  virtual Result DoRenameDirectory(const Path& currentPath,
    const Path& newPath) override;
  virtual Result DoGetEntryType(DirectoryEntryType* outType,
    const Path& path) override;
  virtual Result DoGetFreeSpaceSize(int64_t* outSize,
    const Path& path) override;
  virtual Result DoGetTotalSpaceSize(int64_t* outSize,
    const Path& path) override;
  virtual Result DoOpenFile(std::unique_ptr<fsa::IFile>* outFile,
    const Path& path, OpenMode mode) override;
  virtual Result DoOpenDirectory(
    std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
    OpenDirectoryMode mode) override;
  virtual Result DoCommit() override;
  virtual Result DoCommitProvisionally(int64_t counter) override;
  virtual Result DoRollback() override;
  virtual Result DoGetFileSystemAttribute(
    fsa::FileSystemAttribute* outAttribute) override;

  std::unique_ptr<IStorage> m_Storage;
  save::SaveDataFileSystemCore m_Core;
};

}
