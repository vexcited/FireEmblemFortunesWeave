#pragma once

#include <stddef.h>
#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fsa/fs_idirectory.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/fs/fsa/fs_imulti_commit_target.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system.hpp"

namespace nn::fs::detail {

class FileServiceObjectAdapter : public Newable, public fsa::IFile {
public:
  explicit FileServiceObjectAdapter(
    nn::sf::SharedPointer<fssrv::sf::IFile>&& file);
  virtual ~FileServiceObjectAdapter();

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

  nn::sf::SharedPointer<fssrv::sf::IFile> m_File;
};

class DirectoryServiceObjectAdapter : public Newable, public fsa::IDirectory {
public:
  explicit DirectoryServiceObjectAdapter(
    nn::sf::SharedPointer<fssrv::sf::IDirectory>&& directory);
  virtual ~DirectoryServiceObjectAdapter();

private:
  virtual Result DoRead(int64_t* outCount, DirectoryEntry* entries,
    int64_t count) override;
  virtual Result DoGetEntryCount(int64_t* outCount) override;

  nn::sf::SharedPointer<fssrv::sf::IDirectory> m_Directory;
};

class FileSystemServiceObjectAdapter : public Newable,
  public fsa::IFileSystem, public fsa::IMultiCommitTarget {
public:
  explicit FileSystemServiceObjectAdapter(
    nn::sf::SharedPointer<fssrv::sf::IFileSystem>&& fileSystem);
  virtual ~FileSystemServiceObjectAdapter();

  virtual nn::sf::SharedPointer<fssrv::sf::IFileSystem>
    GetMultiCommitTarget() override {
    return m_FileSystem;
  }

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
  virtual Result DoGetFileTimeStampRaw(FileTimeStampRaw* outTimeStamp,
    const Path& path) override;
  virtual Result DoQueryEntry(char* outBuffer, size_t outBufferSize,
    const char* inBuffer, size_t inBufferSize, fsa::QueryId queryId,
    const Path& path) override;
  virtual Result DoGetFileSystemAttribute(
    fsa::FileSystemAttribute* outAttribute) override;

  nn::sf::SharedPointer<fssrv::sf::IFileSystem> m_FileSystem;
};

}
