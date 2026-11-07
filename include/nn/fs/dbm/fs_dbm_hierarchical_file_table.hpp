#pragma once

#include <stdint.h>
#include <string.h>

#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"
#include "nn/fs/dbm/fs_dbm_buffered_allocation_table_storage.hpp"
#include "nn/fs/dbm/fs_dbm_path_tool.hpp"
#include "nn/fs/fs_result.hpp"
#include "nn/fs/fs_types.hpp"

namespace nn::fs::dbm {

constexpr Result ResultDbmAlreadyExists() {
  return fs::detail::MakeResult(3003);
}

constexpr Result ResultInvalidKeyValueListNextIndex() {
  return fs::detail::MakeResult(4723);
}

constexpr Result ResultInvalidFileObjectBlockOffset() {
  return fs::detail::MakeResult(4726);
}

constexpr Result ResultKeyValueListIndexOutOfRange() {
  return fs::detail::MakeResult(4727);
}

constexpr Result ResultDbmDirectoryUndeletable() {
  return fs::detail::MakeResult(6031);
}

constexpr Result ResultDbmDirectoryUnrenamable() {
  return fs::detail::MakeResult(6032);
}

constexpr Result ResultDbmIncompatiblePath() {
  return fs::detail::MakeResult(6033);
}

constexpr Result ResultDbmFileSizeTooLarge() {
  return fs::detail::MakeResult(6073);
}

constexpr Result ResultDbmNotFound() {
  return fs::detail::MakeResult(6600);
}

constexpr Result ResultDbmFileNotFound() {
  return fs::detail::MakeResult(6602);
}

constexpr Result ResultDbmDirectoryNotFound() {
  return fs::detail::MakeResult(6603);
}

constexpr Result ResultDbmKeyNotFound() {
  return fs::detail::MakeResult(6604);
}

inline bool IsResultDbmNotFound(Result result) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= 6600 && description < 6700;
}

constexpr Result ResultDbmDirectoryNotEmpty() {
  return fs::detail::MakeResult(8);
}

namespace detail {

struct DirectoryInfo {
  char reserved[12];
};

struct FileInfo {
  uint32_t index;
  int64_t size;
  uint32_t reserved[2];
} __attribute__((packed, aligned(4)));

}

template<typename KeyType, typename ValueType>
class KeyValueListTemplate {
public:
  struct StorageElement {
    KeyType key;
    ValueType value;
    uint32_t next;
  };

  // Element 0 heads the free list and counts the used elements, element 1
  // heads the list of used elements.
  struct HeaderElement {
    uint32_t count;
    uint32_t maxCount;
    char reserved[sizeof(StorageElement) - sizeof(uint32_t) * 3];
    uint32_t freeHead;
  };

  static const uint32_t FreeListIndex = 0;
  static const uint32_t HeadIndex = 1;

  KeyValueListTemplate() : m_pStorage(nullptr), m_MaxCount(0) {}

  static Result Format(BufferedAllocationTableStorage* storage) {
    HeaderElement header = {};
    header.count = HeadIndex + 1;
    int64_t size = 0;
    NN_FS_RESULT_DO(storage->GetSize(&size));
    header.maxCount = static_cast<uint32_t>(size / sizeof(StorageElement));
    NN_FS_RESULT_DO(storage->Write(0, &header, sizeof(header)));
    StorageElement head = {};
    return storage->Write(sizeof(StorageElement), &head, sizeof(head));
  }

  Result Initialize(BufferedAllocationTableStorage* storage) {
    m_pStorage = storage;
    BufferedAllocationTableStorage::ScopedHoldingCacheSection section(
      m_pStorage);
    HeaderElement header = {};
    NN_FS_RESULT_DO(m_pStorage->Read(0, &header, sizeof(header)));
    m_MaxCount = header.maxCount;
    return ResultSuccess();
  }

  BufferedAllocationTableStorage* GetStorage() const {
    return m_pStorage;
  }

  uint32_t GetMaxCount() const {
    return m_MaxCount;
  }

  Result Get(uint32_t* outIndex, ValueType* outValue,
    const KeyType& key) const {
    uint32_t index = 0;
    StorageElement element = {};
    NN_FS_RESULT_DO(FindElement(&index, &element, key));
    *outIndex = index;
    *outValue = element.value;
    return ResultSuccess();
  }

  Result GetByIndex(KeyType* outKey, ValueType* outValue,
    uint32_t index) const {
    StorageElement element = {};
    NN_FS_RESULT_DO(ReadElement(&element, index));
    *outKey = element.key;
    *outValue = element.value;
    return ResultSuccess();
  }

  Result SetByIndex(uint32_t index, const ValueType& value) {
    StorageElement element = {};
    NN_FS_RESULT_DO(ReadElement(&element, index));
    element.value = value;
    return WriteStorage(element, index);
  }

  Result Add(uint32_t* outIndex, const KeyType& key, const ValueType& value) {
    uint32_t index = 0;
    StorageElement element = {};
    const Result result = FindElement(&index, &element, key);
    if (IsFailure(result)) {
      NN_FS_RESULT_THROW_UNLESS(
        IsResultIncluded(result, ResultDbmKeyNotFound()), result);
      NN_FS_RESULT_DO(AllocateEntry(&index));

      StorageElement head = {};
      NN_FS_RESULT_DO(ReadStorage(&head, HeadIndex));
      const uint32_t next = head.next;
      head.next = index;
      NN_FS_RESULT_DO(WriteStorage(head, HeadIndex));

      element.key = key;
      element.next = next;
    }
    *outIndex = index;
    element.value = value;
    return WriteStorage(element, index);
  }

  Result Remove(const KeyType& key) {
    StorageElement head = {};
    NN_FS_RESULT_DO(ReadStorage(&head, HeadIndex));
    NN_FS_RESULT_THROW_UNLESS(head.next < m_MaxCount,
      ResultInvalidKeyValueListNextIndex());

    uint32_t previousIndex = HeadIndex;
    StorageElement element = {};
    for (uint32_t index = head.next; index != 0; index = element.next) {
      NN_FS_RESULT_DO(ReadStorage(&element, index));
      if (memcmp(&key, &element.key, sizeof(KeyType)) == 0) {
        StorageElement previous = {};
        NN_FS_RESULT_DO(ReadStorage(&previous, previousIndex));
        previous.next = element.next;
        NN_FS_RESULT_DO(WriteStorage(previous, previousIndex));
        return FreeEntry(index);
      }
      previousIndex = index;
    }
    return ResultDbmKeyNotFound();
  }

  Result ModifyKey(const KeyType& newKey, const KeyType& key) {
    uint32_t index = 0;
    StorageElement element = {};
    NN_FS_RESULT_DO(FindElement(&index, &element, key));
    element.key = newKey;
    return WriteStorage(element, index);
  }

private:
  template<typename ElementType>
  Result ReadStorage(ElementType* outElement, uint32_t index) const {
    NN_FS_RESULT_THROW_UNLESS(index < m_MaxCount || m_MaxCount == 1,
      ResultKeyValueListIndexOutOfRange());
    return m_pStorage->Read(
      static_cast<int64_t>(sizeof(StorageElement) * index), outElement,
      sizeof(ElementType));
  }

  template<typename ElementType>
  Result WriteStorage(const ElementType& element, uint32_t index) {
    NN_FS_RESULT_THROW_UNLESS(index < m_MaxCount,
      ResultKeyValueListIndexOutOfRange());
    return m_pStorage->Write(
      static_cast<int64_t>(sizeof(StorageElement) * index), &element,
      sizeof(ElementType));
  }

  Result ReadElement(StorageElement* outElement, uint32_t index) const {
    const uint32_t maxCount = m_MaxCount;
    NN_FS_RESULT_DO(ReadStorage(outElement, index));
    NN_FS_RESULT_THROW_UNLESS(outElement->next < maxCount,
      ResultInvalidKeyValueListNextIndex());
    return ResultSuccess();
  }

  Result FindElement(uint32_t* outIndex, StorageElement* outElement,
    const KeyType& key) const {
    StorageElement head = {};
    NN_FS_RESULT_DO(ReadStorage(&head, HeadIndex));
    NN_FS_RESULT_THROW_UNLESS(head.next < m_MaxCount,
      ResultInvalidKeyValueListNextIndex());
    for (uint32_t index = head.next; index != 0; index = outElement->next) {
      NN_FS_RESULT_DO(ReadStorage(outElement, index));
      if (memcmp(&key, &outElement->key, sizeof(KeyType)) == 0) {
        *outIndex = index;
        return ResultSuccess();
      }
    }
    return ResultDbmKeyNotFound();
  }

  Result AllocateEntry(uint32_t* outIndex) {
    HeaderElement header = {};
    NN_FS_RESULT_DO(ReadStorage(&header, FreeListIndex));
    if (header.freeHead != 0) {
      const uint32_t index = header.freeHead;
      StorageElement element = {};
      NN_FS_RESULT_DO(ReadStorage(&element, index));
      header.freeHead = element.next;
      NN_FS_RESULT_DO(WriteStorage(header, FreeListIndex));
      *outIndex = index;
      return ResultSuccess();
    }

    if (header.maxCount == 0 || header.maxCount <= header.count) {
      NN_FS_RESULT_DO(m_pStorage->AllocateBlock(1));
      int64_t size = 0;
      NN_FS_RESULT_DO(m_pStorage->GetSize(&size));
      header.maxCount = static_cast<uint32_t>(size / sizeof(StorageElement));
      m_MaxCount = header.maxCount;
    }
    const uint32_t index = header.count;
    header.count = index + 1;
    NN_FS_RESULT_DO(m_pStorage->Write(0, &header, sizeof(header)));
    *outIndex = index;
    return ResultSuccess();
  }

  Result FreeEntry(uint32_t index) {
    HeaderElement header = {};
    NN_FS_RESULT_DO(ReadStorage(&header, FreeListIndex));
    StorageElement element = {};
    NN_FS_RESULT_DO(ReadStorage(&element, index));
    element.next = header.freeHead;
    NN_FS_RESULT_DO(WriteStorage(element, index));
    header.freeHead = index;
    return WriteStorage(header, FreeListIndex);
  }

  BufferedAllocationTableStorage* m_pStorage;
  uint32_t m_MaxCount;
};

template<typename DirectoryNameType, typename FileNameType>
class DirectoryObjectTemplate;

template<typename DirectoryNameType, typename FileNameType>
class FileSystemObjectTemplate;

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
class HierarchicalFileTableTemplate {
  template<typename, typename> friend class DirectoryObjectTemplate;
  template<typename, typename> friend class FileSystemObjectTemplate;

public:
  struct DirectoryKey {
    uint32_t parent;
    DirectoryNameType name;

    bool operator==(const DirectoryKey& other) const {
      return parent == other.parent &&
        memcmp(&name, &other.name, sizeof(name)) == 0;
    }
  };

  struct FileKey {
    uint32_t parent;
    FileNameType name;

    bool operator==(const FileKey& other) const {
      return parent == other.parent &&
        memcmp(&name, &other.name, sizeof(name)) == 0;
    }
  };

  struct DirectoryEntry {
    uint32_t next;
    uint32_t directory;
    uint32_t file;
    DirectoryInfoType info;
  };

  struct FileEntry {
    uint32_t next;
    FileInfoType info;
  };

  typedef KeyValueListTemplate<DirectoryKey, DirectoryEntry>
    DirectoryEntryList;
  typedef KeyValueListTemplate<FileKey, FileEntry> FileEntryList;

  class ScopedHoldingCacheSection {
  public:
    explicit ScopedHoldingCacheSection(
      const HierarchicalFileTableTemplate* fileTable)
      : m_pFileTable(fileTable) {
      m_pFileTable->m_FileList.GetStorage()->EnterHoldingCacheSection();
      m_pFileTable->m_DirectoryList.GetStorage()->EnterHoldingCacheSection();
    }

    ~ScopedHoldingCacheSection() {
      m_pFileTable->m_FileList.GetStorage()->LeaveHoldingCacheSection();
      m_pFileTable->m_DirectoryList.GetStorage()->LeaveHoldingCacheSection();
    }

  private:
    const HierarchicalFileTableTemplate* m_pFileTable;
  };

  HierarchicalFileTableTemplate() : m_DirectoryList(), m_FileList() {}

  static Result Format(BufferedAllocationTableStorage* directoryStorage,
    BufferedAllocationTableStorage* fileStorage);

  Result Initialize(BufferedAllocationTableStorage* directoryStorage,
    BufferedAllocationTableStorage* fileStorage);

  Result CreateDirectory(const char* path, const DirectoryInfoType& info);
  Result CreateFile(uint32_t* outIndex, const char* path,
    const FileInfoType& info);
  Result DeleteDirectory(const char* path);
  Result DeleteFile(const char* path);
  Result RenameFile(bool* outIsFile, bool* outIsSameEntry,
    const char* newPath, const char* currentPath);
  Result RenameDirectory(bool* outIsFile, bool* outIsSameEntry,
    bool* outIsParentEntry, const char* newPath, const char* currentPath);
  Result OpenFile(uint32_t* outIndex, FileInfoType* outInfo,
    const char* path) const;
  Result UpdateFileInformationFromKey(const FileKey& key,
    const FileInfoType& info);
  Result CheckSubEntry(bool* outIsSubEntry, uint32_t id, uint32_t childId,
    bool isFile) const;
  Result GetDirectoryEntry(uint32_t* outIndex, DirectoryEntry* outEntry,
    const DirectoryKey& key) const;
  Result GetFileEntry(uint32_t* outIndex, FileEntry* outEntry,
    const FileKey& key) const;
  Result FindDirectoryRecursive(DirectoryKey* outParentKey,
    DirectoryEntry* outParentEntry, DirectoryKey* outKey,
    const char* path) const;
  Result FindFileRecursive(DirectoryKey* outParentKey,
    DirectoryEntry* outParentEntry, FileKey* outKey, const char* path) const;

private:
  Result OpenFile(uint32_t* outIndex, FileInfoType* outInfo,
    const FileKey& key) const {
    ScopedHoldingCacheSection section(this);
    uint32_t index = 0;
    FileEntry entry = {};
    NN_FS_RESULT_DO(GetFileEntry(&index, &entry, key));
    *outInfo = entry.info;
    *outIndex = index;
    return ResultSuccess();
  }

  Result FindParentDirectoryRecursive(uint32_t* outIndex,
    DirectoryKey* outKey, DirectoryEntry* outEntry,
    PathTool::PathParser& parser) const;
  Result CheckSameEntryExists(bool* outIsFile, uint32_t parent,
    const char* name, size_t length, Result resultIfExists) const;
  Result CheckSubDirectory(const DirectoryKey& key, DirectoryKey current,
    Result resultIfSubDirectory);
  Result RemoveDirectoryLink(DirectoryEntry* parentEntry,
    uint32_t parentIndex, DirectoryEntry* entry, uint32_t index);
  Result RemoveFileLink(DirectoryEntry* parentEntry, uint32_t parentIndex,
    FileEntry* entry, uint32_t index);

  DirectoryEntryList m_DirectoryList;
  FileEntryList m_FileList;
};

template<typename DirectoryNameType, typename FileNameType>
class FileObjectTemplate;

template<typename DirectoryNameType, typename FileNameType>
class FileSystemObjectTemplate {
public:
  typedef HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
    detail::DirectoryInfo, detail::FileInfo> FileTable;
  typedef FileObjectTemplate<DirectoryNameType, FileNameType> FileObject;
  typedef DirectoryObjectTemplate<DirectoryNameType, FileNameType>
    DirectoryObject;

  FileSystemObjectTemplate()
    : m_FileTable(), m_pAllocationTable(nullptr), m_BlockSize(0),
      m_BlockSizeShift(0) {}

  void Finalize() {
    m_pAllocationTable = nullptr;
    m_BlockSize = 0;
    m_BlockSizeShift = 0;
  }

  Result GetEntryType(DirectoryEntryType* outType, const char* path);
  Result OpenFile(uint32_t* outIndex, FileObject* outFile, const char* path);
  Result OpenDirectory(uint32_t* outIndex, DirectoryObject* outDirectory,
    const char* path);
  Result DeleteFile(const char* path);
  Result ResizeFile(detail::FileInfo* fileInfo,
    const typename FileTable::FileKey& key, int64_t size);

  Result Initialize(AllocationTable* allocationTable, int64_t blockSize,
    BufferedAllocationTableStorage* directoryStorage,
    BufferedAllocationTableStorage* fileStorage) {
    m_pAllocationTable = allocationTable;
    m_BlockSize = blockSize;
    m_BlockSizeShift = __builtin_ctz(static_cast<uint32_t>(blockSize));
    const Result result = m_FileTable.Initialize(directoryStorage,
      fileStorage);
    if (IsFailure(result)) {
      Finalize();
      return result;
    }
    return ResultSuccess();
  }

  AllocationTable* GetAllocationTable() const {
    return m_pAllocationTable;
  }

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

  Result SeekTo(uint32_t* outIndex, uint32_t blockOffset) {
    m_Index = m_FileInfo.index;
    if (m_Index == AllocationTable::IndexEnd) {
      *outIndex = 0;
      return ResultSuccess();
    }
    NN_FS_RESULT_DO(m_pFileSystem->GetAllocationTable()->ReadNext(
      &m_NextIndex, &m_BlockCount, m_Index));
    while (blockOffset >= m_BlockCount) {
      NN_FS_RESULT_THROW_UNLESS(m_Index != AllocationTable::IndexEnd,
        ResultInvalidFileObjectBlockOffset());
      m_Index = m_NextIndex;
      uint32_t nextIndex = 0;
      uint32_t blockCount = 0;
      NN_FS_RESULT_DO(m_pFileSystem->GetAllocationTable()->ReadNext(
        &nextIndex, &blockCount, m_Index));
      m_NextIndex = nextIndex;
      blockOffset -= m_BlockCount;
      m_BlockCount = blockCount;
    }
    *outIndex = m_Index + blockOffset;
    return ResultSuccess();
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
    : m_pFileTable(nullptr), m_Info(), m_Key(), m_NextDirectory(0),
      m_NextFile(0) {}

  Result CountDirectory(uint32_t* outCount) const;
  Result CountFile(uint32_t* outCount) const;

  Result FindNextDirectory(DirectoryNameType* outName) {
    typename FileTable::DirectoryKey key;
    typename FileTable::DirectoryEntry entry;
    NN_FS_RESULT_DO(m_pFileTable->m_DirectoryList.GetByIndex(&key, &entry,
      m_NextDirectory));
    m_NextDirectory = entry.next;
    *outName = key.name;
    return ResultSuccess();
  }

  Result FindNextFile(int64_t* outSize, FileNameType* outName) {
    typename FileTable::FileKey key;
    typename FileTable::FileEntry entry;
    NN_FS_RESULT_DO(m_pFileTable->m_FileList.GetByIndex(&key, &entry,
      m_NextFile));
    m_NextFile = entry.next;
    *outSize = entry.info.size;
    *outName = key.name;
    return ResultSuccess();
  }

  FileTable* m_pFileTable;
  detail::DirectoryInfo m_Info;
  typename FileTable::DirectoryKey m_Key;
  uint32_t m_NextDirectory;
  uint32_t m_NextFile;
};

}
