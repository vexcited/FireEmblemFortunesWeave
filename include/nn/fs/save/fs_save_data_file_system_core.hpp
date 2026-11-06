#pragma once

#include <stdint.h>

#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"
#include "nn/fs/dbm/fs_dbm_allocation_table_storage.hpp"
#include "nn/fs/dbm/fs_dbm_buffered_allocation_table_storage.hpp"
#include "nn/fs/dbm/fs_dbm_file_system_control_area.hpp"
#include "nn/fs/dbm/fs_dbm_hierarchical_file_table.hpp"
#include "nn/fs/dbm/fs_dbm_path_tool.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_ibuffer_manager.hpp"
#include "nn/fs/save/fs_save_exclusive_file_system.hpp"

namespace nn::fs {

class RamDiskFileSystem;

}

namespace nn::fs::save {

class IInternalStorageFileSystemVisitor {
public:
  virtual ~IInternalStorageFileSystemVisitor() {}

  virtual Result Visit(const char* name, IStorage* storage) = 0;
};

class SaveDataFileSystemCoreImpl : public IExclusiveFileSystemBase {
public:
  SaveDataFileSystemCoreImpl();
  ~SaveDataFileSystemCoreImpl() override;

  static Result Format(SubStorage controlArea, SubStorage allocationTableMeta,
    SubStorage data, int64_t blockSize, IBufferManager* bufferManager);
  static Result ExpandControlArea(SubStorage controlArea, int64_t size);
  static Result ExpandMeta(SubStorage allocationTableMeta, int64_t blockSize,
    int64_t oldSize, int64_t newSize);

  Result Initialize(SubStorage controlArea, SubStorage allocationTableMeta,
    SubStorage data, IBufferManager* bufferManager);
  void Finalize();

  Result AcceptVisitor(IInternalStorageFileSystemVisitor* visitor);

  Result OpenBaseFile(std::unique_ptr<IExclusiveFileBase>* outFile,
    const Path& path, OpenMode mode) override;
  Result OpenBaseDirectory(
    std::unique_ptr<IExclusiveDirectoryBase>* outDirectory, const Path& path,
    OpenDirectoryMode mode) override;
  Result GetFileIdFromPath(int64_t* outId, const Path& path,
    bool isFile) override;
  Result CheckSubEntry(bool* outIsSubEntry, int64_t id, int64_t childId,
    bool isFile) const override;

private:
  typedef dbm::FileSystemObjectTemplate<dbm::DirectoryName, dbm::FileName>
    FileSystemObject;

  Result DoCreateFile(const Path& path, int64_t size, int option) override;
  Result DoDeleteFile(const Path& path) override;
  Result DoCreateDirectory(const Path& path) override;
  Result DoDeleteDirectory(const Path& path) override;
  Result DoDeleteDirectoryRecursively(const Path& path) override;
  Result DoCleanDirectoryRecursively(const Path& path) override;
  Result DoRenameFile(const Path& currentPath, const Path& newPath) override;
  Result DoRenameDirectory(const Path& currentPath,
    const Path& newPath) override;
  Result DoGetEntryType(DirectoryEntryType* outType,
    const Path& path) override;
  Result DoGetFreeSpaceSize(int64_t* outSize, const Path& path) override;
  Result DoGetTotalSpaceSize(int64_t* outSize, const Path& path) override;
  Result DoOpenFile(std::unique_ptr<fsa::IFile>* outFile, const Path& path,
    OpenMode mode) override;
  Result DoOpenDirectory(std::unique_ptr<fsa::IDirectory>* outDirectory,
    const Path& path, OpenDirectoryMode mode) override;
  Result DoCommit() override;
  Result DoGetFileSystemAttribute(
    fsa::FileSystemAttribute* outAttribute) override;

  Result CheckPathFormat(const Path& path);

  SubStorage m_ControlAreaStorage;
  SubStorage m_AllocationTableMetaStorage;
  dbm::FileSystemControlArea m_ControlArea;
  FileSystemObject m_FileSystem;
  dbm::AllocationTable m_AllocationTable;
  dbm::BufferedAllocationTableStorage m_DirectoryEntryStorage;
  dbm::BufferedAllocationTableStorage m_FileEntryStorage;
  SubStorage m_DataStorage;
  int64_t m_DataOffset;
  uint32_t m_BlockCount;
  int64_t m_BlockSize;
};

class SaveDataFileImpl : public IExclusiveFileBase,
  public fs::detail::Newable {
  friend class SaveDataFileSystemCoreImpl;

public:
  SaveDataFileImpl();
  ~SaveDataFileImpl() override;

  Result Initialize(OpenMode mode, dbm::AllocationTable* allocationTable,
    int64_t blockSize, SubStorage dataStorage, int64_t dataOffset,
    int64_t dataSize);

  int GetOpenMode() const override {
    return m_OpenMode;
  }

private:
  typedef dbm::FileObjectTemplate<dbm::DirectoryName, dbm::FileName>
    FileObject;

  Result InitializeTable();

  Result DoRead(size_t* outSize, int64_t offset, void* buffer, size_t size,
    const ReadOption& option) override;
  Result DoWrite(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option) override;
  Result DoFlush() override;
  Result DoSetSize(int64_t size) override;
  Result DoGetSize(int64_t* outSize) override;
  Result DoOperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  FileObject m_FileObject;
  OpenMode m_OpenMode;
  dbm::AllocationTableStorage m_Storage;
  dbm::AllocationTable* m_pAllocationTable;
  SubStorage m_DataStorage;
  int64_t m_BlockSize;
  int64_t m_DataOffset;
  int64_t m_DataSize;
};

class SaveDataDirectoryImpl : public IExclusiveDirectoryBase,
  public fs::detail::Newable {
  friend class SaveDataFileSystemCoreImpl;

public:
  explicit SaveDataDirectoryImpl(OpenDirectoryMode mode);
  ~SaveDataDirectoryImpl() override;

  Result Initialize();
  Result NotifyDelete(int64_t id, bool isFile) override;

private:
  typedef dbm::DirectoryObjectTemplate<dbm::DirectoryName, dbm::FileName>
    DirectoryObject;

  Result DoRead(int64_t* outCount, DirectoryEntry* entries,
    int64_t count) override;
  Result DoGetEntryCount(int64_t* outCount) override;

  DirectoryObject m_DirectoryObject;
  OpenDirectoryMode m_Mode;
};

class SaveDataFileSystemCore : public fsa::IFileSystem {
  friend class ::nn::fs::RamDiskFileSystem;

public:
  SaveDataFileSystemCore();
  ~SaveDataFileSystemCore() override;

  static Result Format(SubStorage controlArea, SubStorage allocationTableMeta,
    SubStorage data, int64_t blockSize, IBufferManager* bufferManager);
  static Result ExpandControlArea(SubStorage controlArea, int64_t size);
  static Result ExpandMeta(SubStorage allocationTableMeta, int64_t blockSize,
    int64_t oldSize, int64_t newSize);

  Result Initialize(SubStorage controlArea, SubStorage allocationTableMeta,
    SubStorage data, IBufferManager* bufferManager);
  void Finalize();

  bool HasOpenedFiles(int mode) const;
  bool HasOpenedEntries(bool* outHasOpenedFile) const;
  Result AcceptVisitor(IInternalStorageFileSystemVisitor* visitor);

private:
  Result DoCreateFile(const Path& path, int64_t size, int option) override;
  Result DoDeleteFile(const Path& path) override;
  Result DoCreateDirectory(const Path& path) override;
  Result DoDeleteDirectory(const Path& path) override;
  Result DoDeleteDirectoryRecursively(const Path& path) override;
  Result DoCleanDirectoryRecursively(const Path& path) override;
  Result DoRenameFile(const Path& currentPath, const Path& newPath) override;
  Result DoRenameDirectory(const Path& currentPath,
    const Path& newPath) override;
  Result DoGetEntryType(DirectoryEntryType* outType,
    const Path& path) override;
  Result DoGetFreeSpaceSize(int64_t* outSize, const Path& path) override;
  Result DoGetTotalSpaceSize(int64_t* outSize, const Path& path) override;
  Result DoOpenFile(std::unique_ptr<fsa::IFile>* outFile, const Path& path,
    OpenMode mode) override;
  Result DoOpenDirectory(std::unique_ptr<fsa::IDirectory>* outDirectory,
    const Path& path, OpenDirectoryMode mode) override;
  Result DoCommit() override;
  Result DoGetFileSystemAttribute(
    fsa::FileSystemAttribute* outAttribute) override;

  ExclusiveFileSystem m_ExclusiveFileSystem;
  SaveDataFileSystemCoreImpl m_Impl;
};

}
