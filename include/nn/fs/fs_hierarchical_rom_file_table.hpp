#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_rom_path_tool.hpp"
#include "nn/fs/fs_substorage.hpp"

namespace nn::fs {

struct Int64 {
  int64_t Get() const {
    return static_cast<int64_t>(static_cast<uint64_t>(high) << 32 | low);
  }

  uint32_t low;
  uint32_t high;
};

struct RomFileInfo {
  Int64 offset;
  Int64 size;
};

template<typename Key, typename Value>
class KeyValueRomStorage {
public:
  typedef uint32_t Position;

  struct Element {
    Key key;
    Value value;
    Position next;
    uint32_t size;
  };

  KeyValueRomStorage()
    : m_BucketCount(0), m_BucketStorage(), m_KeyValueStorage(),
      m_TotalEntrySize(0), m_EntryCount(0) {}

  __attribute__((noinline)) Result ReadKeyValue(Element* outElement,
    char* outName, size_t* outNameLength, Position position);

  int64_t GetTotalEntrySize() const {
    return m_TotalEntrySize;
  }

  Result ReadElement(Element* outElement, Position position) {
    return m_KeyValueStorage.Read(position, outElement, sizeof(Element));
  }

  void Finalize() {
    m_BucketStorage = SubStorage();
    m_KeyValueStorage = SubStorage();
    m_BucketCount = 0;
  }

  Result Add(Position* outPosition, const Key& key, uint32_t hash,
    const char* name, size_t nameLength, const Value& value);

  Result Get(Position* outPosition, Value* outValue, const Key& key,
    uint32_t hash, const char* name, size_t nameLength) {
    Position position = 0;
    Position previous = 0;
    Element element = {};
    NN_FS_RESULT_DO(FindImpl(&position, &previous, &element, key, hash,
      name, nameLength));
    *outPosition = position;
    *outValue = element.value;
    return ResultSuccess();
  }

  Result GetByPosition(Key* outKey, Value* outValue, Position position) {
    Element element = {};
    NN_FS_RESULT_DO(ReadElement(&element, position));
    *outKey = element.key;
    *outValue = element.value;
    return ResultSuccess();
  }

  __attribute__((noinline)) Result FindImpl(Position* outPosition,
    Position* outPrevious, Element* outElement, const Key& key,
    uint32_t hash, const char* name, size_t nameLength);
  __attribute__((noinline)) Result LinkEntry(Position* outNext,
    Position position, uint32_t hash);

  Result ReadBucket(Position* outPosition, int64_t index) {
    return m_BucketStorage.Read(index * sizeof(Position), outPosition,
      sizeof(Position));
  }

  Result WriteBucket(Position position, int64_t index) {
    return m_BucketStorage.Write(index * sizeof(Position), &position,
      sizeof(Position));
  }

private:
  int64_t m_BucketCount;
  SubStorage m_BucketStorage;
  SubStorage m_KeyValueStorage;
  int64_t m_TotalEntrySize;
  uint32_t m_EntryCount;
};

class HierarchicalRomFileTable {
public:
  typedef uint32_t RomDirectoryId;
  typedef uint32_t RomFileId;

  struct RomEntryKey {
    uint32_t parent;
  };

  struct DirectoryRomEntry {
    RomDirectoryId next;
    RomDirectoryId directory;
    RomFileId file;
  };

  struct FileRomEntry {
    RomFileId next;
    RomFileInfo info;
  };

  struct FindPosition {
    RomDirectoryId nextDirectory;
    RomFileId nextFile;
  };

  struct EntryKey {
    RomEntryKey key;
    RomPathTool::RomEntryName name;

    uint32_t Hash() const {
      uint32_t hash = key.parent ^ 123456789;
      for (size_t i = 0; i < name.length; ++i) {
        const uint32_t c = static_cast<unsigned char>(name.path[i]);
        hash = ((hash >> 5) | (hash << 27)) ^ c;
      }
      return hash;
    }
  };

  HierarchicalRomFileTable();

  void Finalize();
  Result CreateRootDirectory();
  Result CreateFile(RomFileId* outId, const char* path,
    const RomFileInfo& info);

  Result Initialize(SubStorage directoryBucketStorage,
    SubStorage directoryEntryStorage, SubStorage fileBucketStorage,
    SubStorage fileEntryStorage);

  Result ConvertPathToDirectoryId(RomDirectoryId* outId, const char* path);
  Result ConvertPathToFileId(RomFileId* outId, const char* path);
  Result OpenFile(RomFileInfo* outInfo, const char* path);
  Result OpenFile(RomFileInfo* outInfo, const EntryKey& key);
  Result FindOpen(FindPosition* outPosition, const char* path);
  Result FindOpen(FindPosition* outPosition, const EntryKey& key);

  Result OpenFile(RomFileInfo* outInfo, RomFileId id);
  Result FindOpen(FindPosition* outPosition, RomDirectoryId id);
  Result FindNextDirectory(char* outName, FindPosition* position,
    size_t length);
  Result FindNextFile(char* outName, FindPosition* position, size_t length);
  Result QueryRomFileSystemSize(int64_t* outDirectoryEntrySize,
    int64_t* outFileEntrySize);
  Result DumpTree();
  Result DumpDirectory(RomDirectoryId id, int depth);

private:
  typedef KeyValueRomStorage<RomEntryKey, DirectoryRomEntry>
    DirectoryEntryMapTable;
  typedef KeyValueRomStorage<RomEntryKey, FileRomEntry> FileEntryMapTable;

  __attribute__((noinline)) Result GetDirectoryEntry(
    DirectoryRomEntry* outEntry, RomDirectoryId id);
  struct CacheContext;

  __attribute__((noinline)) Result GetDirectoryEntry(RomDirectoryId* outId,
    DirectoryRomEntry* outEntry, const EntryKey& key);
  __attribute__((noinline)) Result GetFileEntry(RomFileId* outId,
    FileRomEntry* outEntry, const EntryKey& key);
  Result FindPathRecursive(EntryKey* outKey, DirectoryRomEntry* outParent,
    bool isDirectory, const char* path);
  Result FindDirectoryRecursive(EntryKey* outKey,
    DirectoryRomEntry* outParent, const char* path);
  Result FindFileRecursive(EntryKey* outKey, DirectoryRomEntry* outParent,
    const char* path);
  Result FindParentDirectoryRecursive(RomDirectoryId* outId,
    EntryKey* outKey, DirectoryRomEntry* outEntry,
    RomPathTool::PathParser* parser, const char* path);
  Result CheckSameEntryExists(const EntryKey& key, Result ifExists);
  Result GetParent(RomDirectoryId* outId, EntryKey* outKey,
    DirectoryRomEntry* outEntry, RomDirectoryId id,
    RomPathTool::RomEntryName name, const char* path);
  Result CreateFile(RomFileId* outId, const char* path,
    const RomFileInfo& info, CacheContext* context);
  __attribute__((noinline)) Result GetFileEntry(FileRomEntry* outEntry,
    RomFileId id);

  DirectoryEntryMapTable m_DirectoryTable;
  FileEntryMapTable m_FileTable;
};

}
