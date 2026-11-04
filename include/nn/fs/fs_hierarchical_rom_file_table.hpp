#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_rom_path_tool.hpp"
#include "nn/fs/fs_substorage.hpp"

namespace nn::fs {

struct Int64 {
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
  };

  HierarchicalRomFileTable();

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
  Result GetDirectoryEntry(RomDirectoryId* outId, DirectoryRomEntry* outEntry,
    const EntryKey& key);
  Result GetFileEntry(RomFileId* outId, FileRomEntry* outEntry,
    const EntryKey& key);
  Result FindPathRecursive(EntryKey* outKey, DirectoryRomEntry* outParent,
    bool isDirectory, const char* path);
  __attribute__((noinline)) Result GetFileEntry(FileRomEntry* outEntry,
    RomFileId id);

  DirectoryEntryMapTable m_DirectoryTable;
  FileEntryMapTable m_FileTable;
};

}
