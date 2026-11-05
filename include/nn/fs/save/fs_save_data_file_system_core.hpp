#pragma once

#include <stdint.h>

#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"
#include "nn/fs/dbm/fs_dbm_allocation_table_storage.hpp"
#include "nn/fs/dbm/fs_dbm_file_system_control_area.hpp"
#include "nn/fs/dbm/fs_dbm_path_tool.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_ibuffer_manager.hpp"
#include "nn/fs/save/fs_save_exclusive_file_system.hpp"
#include "nn/util/intrusive_list.hpp"

namespace nn::fs::dbm {

namespace detail {

struct DirectoryInfo {
  char reserved[16];
};

struct FileInfo {
  uint32_t index;
  int64_t size;
  uint32_t reserved[2];
} __attribute__((packed, aligned(4)));

}

class BufferedAllocationTableStorage : public AllocationTableStorage {
public:
  struct CacheEntry {
    uintptr_t address;
    size_t size;
    int64_t offset;
    IBufferManager::CacheHandle handle;
  };

  static const int CacheEntryCountPerNode = 16;
  static const int CacheEntriesNodeCountMax = 8;

  struct CacheEntriesNode : public fs::detail::Newable,
    public util::IntrusiveListBaseNode<CacheEntriesNode> {
    CacheEntriesNode() {
      for (CacheEntry& entry : entries) {
        entry.address = 0;
        entry.size = 0;
        entry.offset = -1;
        entry.handle = 0;
      }
    }

    CacheEntry entries[CacheEntryCountPerNode];
  };

  typedef util::IntrusiveList<CacheEntriesNode,
    util::IntrusiveListBaseNodeTraits<CacheEntriesNode, CacheEntriesNode>>
    CacheEntriesList;

  BufferedAllocationTableStorage();
  ~BufferedAllocationTableStorage() override;

  Result Read(int64_t offset, void* buffer, size_t size) override;
  Result Write(int64_t offset, const void* buffer, size_t size) override;
  Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  Result InitializeBuffered(AllocationTable* allocationTable,
    uint32_t startIndex, int64_t blockSize, SubStorage dataStorage,
    IBufferManager* bufferManager);
  void Finalize() override;

  void EnterHoldingCacheSection();
  void LeaveHoldingCacheSection();

private:
  CacheEntriesList::iterator AllocateCacheEntries();
  void DeallocateCache(CacheEntry* entry);
  void AcquireCacheBuffer(CacheEntry* entry);
  void ExtendCacheLife(const CacheEntriesList::iterator& iterator, int index);

  CacheEntriesList m_CacheEntriesList;
  int m_HoldingCacheSectionCount;
  IBufferManager* m_pBufferManager;
};

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
class HierarchicalFileTableTemplate {
public:
  struct DirectoryKey {
    uint32_t parent;
    DirectoryNameType name;
  };

  struct FileKey {
    uint32_t parent;
    FileNameType name;
  };

  struct DirectoryEntry {
    uint32_t next;
    uint32_t directory;
    uint32_t file;
    uint32_t reserved;
  };

  class ScopedHoldingCacheSection {
  public:
    explicit ScopedHoldingCacheSection(
      const HierarchicalFileTableTemplate* fileTable)
      : m_pFileTable(fileTable) {
      m_pFileTable->m_pFileEntryStorage->EnterHoldingCacheSection();
      m_pFileTable->m_pDirectoryEntryStorage->EnterHoldingCacheSection();
    }

    ~ScopedHoldingCacheSection() {
      m_pFileTable->m_pFileEntryStorage->LeaveHoldingCacheSection();
      m_pFileTable->m_pDirectoryEntryStorage->LeaveHoldingCacheSection();
    }

  private:
    const HierarchicalFileTableTemplate* m_pFileTable;
  };

  HierarchicalFileTableTemplate()
    : m_pDirectoryEntryStorage(nullptr), m_DirectoryEntryCount(0),
      m_pFileEntryStorage(nullptr), m_FileEntryCount(0) {}

  Result CreateDirectory(const char* path, const DirectoryInfoType& info);
  Result DeleteDirectory(const char* path);
  Result RenameFile(bool* outIsFile, bool* outIsSameEntry,
    const char* newPath, const char* currentPath);
  Result RenameDirectory(bool* outIsFile, bool* outIsSameEntry,
    bool* outIsParentEntry, const char* newPath, const char* currentPath);
  Result CheckSubEntry(bool* outIsSubEntry, uint32_t id, uint32_t childId,
    bool isFile) const;
  Result GetDirectoryEntry(uint32_t* outId, DirectoryEntry* outEntry,
    const DirectoryKey& key) const;

private:
  BufferedAllocationTableStorage* m_pDirectoryEntryStorage;
  uint32_t m_DirectoryEntryCount;
  BufferedAllocationTableStorage* m_pFileEntryStorage;
  uint32_t m_FileEntryCount;
};

template<typename DirectoryNameType, typename FileNameType>
class FileSystemObjectTemplate {
public:
  typedef HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
    detail::DirectoryInfo, detail::FileInfo> FileTable;

  FileSystemObjectTemplate()
    : m_FileTable(), m_pAllocationTable(nullptr), m_BlockSize(0),
      m_BlockSizeShift(0) {}

  void Finalize() {
    m_pAllocationTable = nullptr;
    m_BlockSize = 0;
    m_BlockSizeShift = 0;
  }

  Result GetEntryType(DirectoryEntryType* outType, const char* path);
  Result DeleteFile(const char* path);
  Result ResizeFile(detail::FileInfo* fileInfo,
    const typename FileTable::FileKey& key, int64_t size);

  FileTable* GetFileTable() {
    return &m_FileTable;
  }

  const FileTable* GetFileTable() const {
    return &m_FileTable;
  }

private:
  FileTable m_FileTable;
  AllocationTable* m_pAllocationTable;
  int64_t m_BlockSize;
  uint32_t m_BlockSizeShift;
};

template<typename DirectoryNameType, typename FileNameType>
class FileObjectTemplate {
public:
  FileObjectTemplate()
    : m_pFileSystem(nullptr), m_BlockCount(0), m_FileInfo(), m_Key(),
      m_Index(AllocationTable::IndexEnd),
      m_NextIndex(AllocationTable::IndexEnd) {}

  int64_t GetSize() const {
    return m_FileInfo.size;
  }

  typedef FileSystemObjectTemplate<DirectoryNameType, FileNameType>
    FileSystemObject;

  FileSystemObject* m_pFileSystem;
  uint32_t m_BlockCount;
  detail::FileInfo m_FileInfo;
  typename FileSystemObject::FileTable::FileKey m_Key;
  uint32_t m_Index;
  uint32_t m_NextIndex;
};

template<typename DirectoryNameType, typename FileNameType>
class DirectoryObjectTemplate {
public:
  typedef HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
    detail::DirectoryInfo, detail::FileInfo> FileTable;

  DirectoryObjectTemplate()
    : m_pFileTable(nullptr), m_Reserved(), m_Key(), m_NextDirectory(0),
      m_NextFile(0) {}

  Result CountDirectory(uint32_t* outCount) const;
  Result CountFile(uint32_t* outCount) const;

  FileTable* m_pFileTable;
  uint32_t m_Reserved[3];
  typename FileTable::DirectoryKey m_Key;
  uint32_t m_NextDirectory;
  uint32_t m_NextFile;
};

}

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
  uint32_t m_IsInitialized;
  int64_t m_BlockSize;
};

class SaveDataFileImpl : public IExclusiveFileBase {
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

class SaveDataDirectoryImpl : public IExclusiveDirectoryBase {
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
