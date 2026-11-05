#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_hierarchical_rom_file_table.hpp"
#include "nn/fs/fs_istorage.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"

namespace nn::fs {

constexpr Result ResultPathNotFound() {
  return detail::MakeResult(1);
}

constexpr Result ResultAllocationMemoryFailedInRomFsFileSystemA() {
  return detail::MakeResult(3247);
}

constexpr Result ResultInvalidRomFsHeader() {
  return detail::MakeResult(4281);
}

constexpr Result ResultDbmInvalidOperation() {
  return detail::MakeResult(7914);
}

constexpr Result ResultPreconditionViolation() {
  return detail::MakeResult(6000);
}

constexpr Result ResultInvalidOpenMode() {
  return detail::MakeResult(6072);
}

constexpr Result ResultWriteNotPermitted() {
  return detail::MakeResult(6203);
}

constexpr Result ResultUnsupportedWriteForRomFsFileSystem() {
  return detail::MakeResult(6364);
}

constexpr Result ResultUnsupportedCommitProvisionallyForRomFsFileSystem() {
  return detail::MakeResult(6365);
}

constexpr Result ResultUnsupportedGetTotalSpaceSizeForRomFsFileSystem() {
  return detail::MakeResult(6366);
}

constexpr Result ResultUnsupportedOperateRangeForRomFsFile() {
  return detail::MakeResult(6368);
}

inline bool IsResultDbmFindFinished(Result result) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= 7910 && description <= 7912;
}

inline bool IsResultDbmNotFound(Result result) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= 7901 && description <= 7904;
}

class RomFsFileSystem : public fsa::IFileSystem, public detail::Newable {
public:
  struct RomFileSystemInformation {
    int64_t headerSize;
    int64_t directoryBucketOffset;
    int64_t directoryBucketSize;
    int64_t directoryEntryOffset;
    int64_t directoryEntrySize;
    int64_t fileBucketOffset;
    int64_t fileBucketSize;
    int64_t fileEntryOffset;
    int64_t fileEntrySize;
    int64_t bodyOffset;
  };

  RomFsFileSystem();
  virtual ~RomFsFileSystem();

  static Result GetRequiredWorkingMemorySize(size_t* outSize,
    IStorage* storage);

  Result Initialize(IStorage* baseStorage, void* workingBuffer,
    size_t workingBufferSize, bool useCache);
  Result Initialize(std::unique_ptr<IStorage>&& baseStorage,
    void* workingBuffer, size_t workingBufferSize, bool useCache);

  Result GetFileInfo(RomFileInfo* outInfo, const char* path);
  Result GetFileBaseOffset(int64_t* outOffset, const char* path);
  IStorage* GetBaseStorage();
  HierarchicalRomFileTable* GetRomFileTable();

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

  HierarchicalRomFileTable m_RomFileTable;
  IStorage* m_pBaseStorage;
  std::unique_ptr<IStorage> m_UniqueBaseStorage;
  std::unique_ptr<IStorage> m_DirectoryBucketStorage;
  std::unique_ptr<IStorage> m_DirectoryEntryStorage;
  std::unique_ptr<IStorage> m_FileBucketStorage;
  std::unique_ptr<IStorage> m_FileEntryStorage;
  int64_t m_EntrySize;
};

namespace detail {

class RomFsFile : public fsa::IFile, public Newable {
public:
  RomFsFile(RomFsFileSystem* parent, int64_t start, int64_t end);
  virtual ~RomFsFile();

  int64_t GetSize() const;
  int64_t GetOffset() const;
  IStorage* GetStorage();

private:
  virtual Result DoRead(size_t* outSize, int64_t offset, void* buffer,
    size_t size, const ReadOption& option) override;
  virtual Result DoWrite(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option) override;
  virtual Result DoFlush() override;
  virtual Result DoSetSize(int64_t size) override;
  virtual Result DoGetSize(int64_t* outSize) override;
  virtual Result DoOperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  RomFsFileSystem* m_pParent;
  int64_t m_Start;
  int64_t m_End;
};

}

}
