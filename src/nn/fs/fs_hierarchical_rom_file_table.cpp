#include "nn/fs/fs_hierarchical_rom_file_table.hpp"

#include <string.h>

#include "nn/fs/detail/fs_memory.hpp"

namespace nn::fs {

namespace {

const uint32_t InvalidPosition = 0xFFFFFFFF;

constexpr Result ResultDbmKeyNotFound() {
  return detail::MakeResult(7902);
}

constexpr Result ResultDbmFileNotFound() {
  return detail::MakeResult(7903);
}

constexpr Result ResultDbmDirectoryNotFound() {
  return detail::MakeResult(7904);
}

constexpr Result ResultDbmAlreadyExists() {
  return detail::MakeResult(7906);
}

constexpr Result ResultDbmKeyFull() {
  return detail::MakeResult(7907);
}

constexpr Result ResultDbmNotFound() {
  return detail::MakeResult(7901);
}

inline bool IsCurrentDirectory(const RomPathTool::RomEntryName& name) {
  return name.length == 1 && name.path[0] == '.';
}

inline bool IsParentDirectory(const RomPathTool::RomEntryName& name) {
  return name.length == 2 && name.path[0] == '.' && name.path[1] == '.';
}

constexpr Result ResultDbmFindFinished() {
  return detail::MakeResult(7910);
}

constexpr Result ResultDbmInvalidOperation() {
  return detail::MakeResult(7914);
}

}

template<typename Key, typename Value>
Result KeyValueRomStorage<Key, Value>::ReadKeyValue(Element* outElement,
  char* outName, size_t* outNameLength, Position position) {
  NN_FS_RESULT_DO(m_KeyValueStorage.Read(position, outElement,
    sizeof(Element)));

  *outNameLength = outElement->size;
  if (outElement->size == 0) {
    return ResultSuccess();
  }
  return m_KeyValueStorage.Read(position + sizeof(Element), outName,
    outElement->size);
}

template<typename Key, typename Value>
Result KeyValueRomStorage<Key, Value>::FindImpl(Position* outPosition,
  Position* outPrevious, Element* outElement, const Key& key, uint32_t hash,
  const char* name, size_t nameLength) {
  *outPosition = 0;
  *outPrevious = 0;

  const int64_t index = hash % m_BucketCount;
  Position current = 0;
  NN_FS_RESULT_DO(ReadBucket(&current, index));
  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_KeyValueStorage.GetSize(&storageSize));
  NN_FS_RESULT_THROW_UNLESS(current != InvalidPosition,
    ResultDbmKeyNotFound());

  auto buffer = detail::MakeUnique<char[]>(RomPathTool::MaxPathLength);
  NN_FS_RESULT_THROW_UNLESS(buffer != nullptr,
    ResultAllocationMemoryFailedMakeUnique());

  while (true) {
    size_t currentLength = 0;
    NN_FS_RESULT_DO(ReadKeyValue(outElement, buffer.get(), &currentLength,
      current));
    if (nameLength == currentLength &&
      key.parent == outElement->key.parent &&
      strncmp(name, buffer.get(), nameLength) == 0) {
      *outPosition = current;
      return ResultSuccess();
    }

    *outPrevious = current;
    current = outElement->next;
    NN_FS_RESULT_THROW_UNLESS(current != InvalidPosition,
      ResultDbmKeyNotFound());
  }
}

template<typename Key, typename Value>
Result KeyValueRomStorage<Key, Value>::LinkEntry(Position* outNext,
  Position position, uint32_t hash) {
  const int64_t index = hash % m_BucketCount;
  Position next = 0;
  NN_FS_RESULT_DO(ReadBucket(&next, index));
  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_KeyValueStorage.GetSize(&storageSize));
  NN_FS_RESULT_DO(WriteBucket(position, index));
  *outNext = next;
  return ResultSuccess();
}

template<typename Key, typename Value>
Result KeyValueRomStorage<Key, Value>::Add(Position* outPosition,
  const Key& key, uint32_t hash, const char* name, size_t nameLength,
  const Value& value) {
  Position position = 0;
  Position previous = 0;
  Element element = {};
  const Result result = FindImpl(&position, &previous, &element, key, hash,
    name, nameLength);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(result), ResultDbmAlreadyExists());
  NN_FS_RESULT_THROW_UNLESS(IsResultIncluded(result, ResultDbmKeyNotFound()),
    result);

  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_KeyValueStorage.GetSize(&storageSize));
  position = static_cast<Position>(m_TotalEntrySize);
  NN_FS_RESULT_THROW_UNLESS(
    position + sizeof(Element) + nameLength <=
      static_cast<uint64_t>(storageSize),
    ResultDbmKeyFull());
  m_TotalEntrySize = (position + sizeof(Element) + nameLength + 3) &
    ~static_cast<uint64_t>(3);

  element.next = 0;
  NN_FS_RESULT_DO(LinkEntry(&element.next, position, hash));
  element.key = key;
  element.value = value;
  element.size = static_cast<uint32_t>(nameLength);

  NN_FS_RESULT_DO(m_KeyValueStorage.Write(position, &element,
    sizeof(Element)));
  if (name != nullptr && nameLength != 0) {
    NN_FS_RESULT_DO(m_KeyValueStorage.Write(position + sizeof(Element), name,
      nameLength));
  }
  *outPosition = position;
  ++m_EntryCount;
  return ResultSuccess();
}

HierarchicalRomFileTable::HierarchicalRomFileTable()
  : m_DirectoryTable(), m_FileTable() {}

void HierarchicalRomFileTable::Finalize() {
  m_DirectoryTable.Finalize();
  m_FileTable.Finalize();
}

Result HierarchicalRomFileTable::CreateRootDirectory() {
  RomDirectoryId id = 0;
  EntryKey key = {};
  const DirectoryRomEntry entry = {InvalidPosition, InvalidPosition,
    InvalidPosition};
  return m_DirectoryTable.Add(&id, key.key, key.Hash(), key.name.path,
    key.name.length, entry);
}

Result HierarchicalRomFileTable::FindDirectoryRecursive(EntryKey* outKey,
  DirectoryRomEntry* outParent, const char* path) {
  return FindPathRecursive(outKey, outParent, true, path);
}

Result HierarchicalRomFileTable::FindFileRecursive(EntryKey* outKey,
  DirectoryRomEntry* outParent, const char* path) {
  return FindPathRecursive(outKey, outParent, false, path);
}

Result HierarchicalRomFileTable::CreateFile(RomFileId* outId,
  const char* path, const RomFileInfo& info) {
  return CreateFile(outId, path, info, nullptr);
}

Result HierarchicalRomFileTable::CheckSameEntryExists(const EntryKey& key,
  Result ifExists) {
  {
    RomDirectoryId id = 0;
    DirectoryRomEntry entry = {};
    const Result result = m_DirectoryTable.Get(&id, &entry, key.key,
      key.Hash(), key.name.path, key.name.length);
    if (IsSuccess(result)) {
      return ifExists;
    }
    if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
      return result;
    }
  }
  {
    RomFileId id = 0;
    FileRomEntry entry = {};
    const Result result = m_FileTable.Get(&id, &entry, key.key, key.Hash(),
      key.name.path, key.name.length);
    if (IsSuccess(result)) {
      return ifExists;
    }
    if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
      return result;
    }
  }
  return ResultSuccess();
}

Result HierarchicalRomFileTable::GetDirectoryEntry(RomDirectoryId* outId,
  DirectoryRomEntry* outEntry, const EntryKey& key) {
  const Result result = m_DirectoryTable.Get(outId, outEntry, key.key,
    key.Hash(), key.name.path, key.name.length);
  if (IsSuccess(result)) {
    return result;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  RomFileId id = 0;
  FileRomEntry entry = {};
  const Result fileResult = m_FileTable.Get(&id, &entry, key.key, key.Hash(),
    key.name.path, key.name.length);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(fileResult),
    ResultDbmInvalidOperation());
  NN_FS_RESULT_THROW_UNLESS(
    !IsResultIncluded(fileResult, ResultDbmKeyNotFound()),
    ResultDbmDirectoryNotFound());
  return fileResult;
}

Result HierarchicalRomFileTable::GetFileEntry(RomFileId* outId,
  FileRomEntry* outEntry, const EntryKey& key) {
  const Result result = m_FileTable.Get(outId, outEntry, key.key, key.Hash(),
    key.name.path, key.name.length);
  if (IsSuccess(result)) {
    return result;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  RomDirectoryId id = 0;
  DirectoryRomEntry entry = {};
  const Result directoryResult = m_DirectoryTable.Get(&id, &entry, key.key,
    key.Hash(), key.name.path, key.name.length);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(directoryResult),
    ResultDbmInvalidOperation());
  NN_FS_RESULT_THROW_UNLESS(
    !IsResultIncluded(directoryResult, ResultDbmKeyNotFound()),
    ResultDbmFileNotFound());
  return directoryResult;
}

Result HierarchicalRomFileTable::GetParent(RomDirectoryId* outId,
  EntryKey* outKey, DirectoryRomEntry* outEntry, RomDirectoryId id,
  RomPathTool::RomEntryName name, const char* path) {
  RomEntryKey parentKey = {};
  DirectoryRomEntry parentEntry = {};
  NN_FS_RESULT_DO(m_DirectoryTable.GetByPosition(&parentKey, &parentEntry,
    id));
  outKey->key.parent = parentKey.parent;
  NN_FS_RESULT_DO(RomPathTool::GetParentDirectoryName(&outKey->name, name,
    path));
  NN_FS_RESULT_DO(GetDirectoryEntry(outId, outEntry, *outKey));
  return ResultSuccess();
}

Result HierarchicalRomFileTable::GetDirectoryEntry(
  DirectoryRomEntry* outEntry, RomDirectoryId id) {
  DirectoryEntryMapTable::Element element = {};
  const Result result = m_DirectoryTable.ReadElement(&element, id);
  if (IsSuccess(result)) {
    *outEntry = element.value;
    return result;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  FileEntryMapTable::Element fileElement = {};
  const Result fileResult = m_FileTable.ReadElement(&fileElement, id);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(fileResult),
    ResultDbmInvalidOperation());
  NN_FS_RESULT_THROW_UNLESS(
    !IsResultIncluded(fileResult, ResultDbmKeyNotFound()),
    ResultDbmDirectoryNotFound());
  return fileResult;
}

Result HierarchicalRomFileTable::GetFileEntry(FileRomEntry* outEntry,
  RomFileId id) {
  FileEntryMapTable::Element element = {};
  const Result result = m_FileTable.ReadElement(&element, id);
  if (IsSuccess(result)) {
    *outEntry = element.value;
    return result;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  DirectoryEntryMapTable::Element directoryElement = {};
  const Result directoryResult = m_DirectoryTable.ReadElement(
    &directoryElement, id);
  NN_FS_RESULT_THROW_UNLESS(IsFailure(directoryResult),
    ResultDbmInvalidOperation());
  NN_FS_RESULT_THROW_UNLESS(
    !IsResultIncluded(directoryResult, ResultDbmKeyNotFound()),
    ResultDbmFileNotFound());
  return directoryResult;
}

Result HierarchicalRomFileTable::OpenFile(RomFileInfo* outInfo,
  RomFileId id) {
  FileRomEntry entry = {};
  NN_FS_RESULT_DO(GetFileEntry(&entry, id));
  *outInfo = entry.info;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindOpen(FindPosition* outPosition,
  RomDirectoryId id) {
  outPosition->nextDirectory = InvalidPosition;
  outPosition->nextFile = InvalidPosition;

  DirectoryRomEntry entry = {};
  NN_FS_RESULT_DO(GetDirectoryEntry(&entry, id));

  outPosition->nextDirectory = entry.directory;
  outPosition->nextFile = entry.file;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::ConvertPathToDirectoryId(
  RomDirectoryId* outId, const char* path) {
  EntryKey key = {};
  DirectoryRomEntry parent;
  NN_FS_RESULT_DO(FindPathRecursive(&key, &parent, true, path));

  RomDirectoryId id = 0;
  DirectoryRomEntry entry;
  NN_FS_RESULT_DO(GetDirectoryEntry(&id, &entry, key));
  *outId = id;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::ConvertPathToFileId(RomFileId* outId,
  const char* path) {
  EntryKey key = {};
  DirectoryRomEntry parent;
  NN_FS_RESULT_DO(FindPathRecursive(&key, &parent, true, path));

  RomFileId id = 0;
  FileRomEntry entry;
  NN_FS_RESULT_DO(GetFileEntry(&id, &entry, key));
  *outId = id;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::OpenFile(RomFileInfo* outInfo,
  const char* path) {
  EntryKey key = {};
  DirectoryRomEntry parent;
  NN_FS_RESULT_DO(FindPathRecursive(&key, &parent, false, path));
  return OpenFile(outInfo, key);
}

Result HierarchicalRomFileTable::OpenFile(RomFileInfo* outInfo,
  const EntryKey& key) {
  RomFileId id;
  FileRomEntry entry = {};
  NN_FS_RESULT_DO(GetFileEntry(&id, &entry, key));
  *outInfo = entry.info;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindOpen(FindPosition* outPosition,
  const char* path) {
  EntryKey key = {};
  DirectoryRomEntry parent;
  NN_FS_RESULT_DO(FindPathRecursive(&key, &parent, true, path));
  return FindOpen(outPosition, key);
}

Result HierarchicalRomFileTable::FindOpen(FindPosition* outPosition,
  const EntryKey& key) {
  outPosition->nextDirectory = InvalidPosition;
  outPosition->nextFile = InvalidPosition;

  RomDirectoryId id;
  DirectoryRomEntry entry = {};
  NN_FS_RESULT_DO(GetDirectoryEntry(&id, &entry, key));
  outPosition->nextDirectory = entry.directory;
  outPosition->nextFile = entry.file;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindNextDirectory(char* outName,
  FindPosition* position, size_t length) {
  (void)length;
  NN_FS_RESULT_THROW_UNLESS(position->nextDirectory != InvalidPosition,
    ResultDbmFindFinished());

  DirectoryEntryMapTable::Element element = {};
  size_t nameLength = 0;
  NN_FS_RESULT_DO(m_DirectoryTable.ReadKeyValue(&element, outName,
    &nameLength, position->nextDirectory));

  outName[nameLength] = '\0';
  position->nextDirectory = element.value.next;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindNextFile(char* outName,
  FindPosition* position, size_t length) {
  (void)length;
  NN_FS_RESULT_THROW_UNLESS(position->nextFile != InvalidPosition,
    ResultDbmFindFinished());

  FileEntryMapTable::Element element = {};
  size_t nameLength = 0;
  NN_FS_RESULT_DO(m_FileTable.ReadKeyValue(&element, outName, &nameLength,
    position->nextFile));

  outName[nameLength] = '\0';
  position->nextFile = element.value.next;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::QueryRomFileSystemSize(
  int64_t* outDirectoryEntrySize, int64_t* outFileEntrySize) {
  *outDirectoryEntrySize = m_DirectoryTable.GetTotalEntrySize();
  *outFileEntrySize = m_FileTable.GetTotalEntrySize();
  return ResultSuccess();
}

Result HierarchicalRomFileTable::DumpTree() {
  return DumpDirectory(0, 0);
}

Result HierarchicalRomFileTable::FindParentDirectoryRecursive(
  RomDirectoryId* outId, EntryKey* outKey, DirectoryRomEntry* outEntry,
  RomPathTool::PathParser* parser, const char* path) {
  RomDirectoryId id = 0;
  EntryKey key = {};
  DirectoryRomEntry entry = {};
  key.key.parent = 0;
  NN_FS_RESULT_DO(parser->GetNextDirectoryName(&key.name));
  NN_FS_RESULT_DO(GetDirectoryEntry(&id, &entry, key));

  RomDirectoryId parentId = id;
  while (!parser->IsParseFinished()) {
    const EntryKey previousKey = key;
    NN_FS_RESULT_DO(parser->GetNextDirectoryName(&key.name));
    if (IsCurrentDirectory(key.name)) {
      key = previousKey;
      continue;
    }
    if (IsParentDirectory(key.name)) {
      NN_FS_RESULT_THROW_UNLESS(parentId != 0, ResultDirectoryUnobtainable());
      NN_FS_RESULT_DO(GetParent(&parentId, &key, &entry, key.key.parent,
        key.name, path));
    }
    else {
      key.key.parent = parentId;
      const Result result = GetDirectoryEntry(&id, &entry, key);
      if (IsFailure(result)) {
        if (IsResultIncluded(result, ResultDbmInvalidOperation())) {
          return ResultDbmNotFound();
        }
        return result;
      }
      parentId = id;
    }
  }
  *outId = parentId;
  *outKey = key;
  *outEntry = entry;
  return ResultSuccess();
}

Result HierarchicalRomFileTable::FindPathRecursive(EntryKey* outKey,
  DirectoryRomEntry* outParent, bool isDirectory, const char* path) {
  RomPathTool::PathParser parser;
  NN_FS_RESULT_DO(parser.Initialize(path));

  EntryKey parentKey = {};
  RomDirectoryId parentId = 0;
  NN_FS_RESULT_DO(FindParentDirectoryRecursive(&parentId, &parentKey,
    outParent, &parser, path));

  if (isDirectory) {
    RomPathTool::RomEntryName name = {};
    NN_FS_RESULT_DO(parser.GetAsDirectoryName(&name));
    if (IsCurrentDirectory(name)) {
      *outKey = parentKey;
      if (outKey->key.parent != 0) {
        RomDirectoryId id = 0;
        NN_FS_RESULT_DO(GetParent(&id, &parentKey, outParent,
          outKey->key.parent, outKey->name, path));
      }
    }
    else if (IsParentDirectory(name)) {
      NN_FS_RESULT_THROW_UNLESS(parentId != 0, ResultDirectoryUnobtainable());
      DirectoryRomEntry entry = {};
      RomDirectoryId id = 0;
      NN_FS_RESULT_DO(GetParent(&id, outKey, &entry, parentKey.key.parent,
        parentKey.name, path));
      if (outKey->key.parent != 0) {
        NN_FS_RESULT_DO(GetParent(&id, &parentKey, outParent,
          outKey->key.parent, outKey->name, path));
      }
    }
    else {
      outKey->name = name;
      outKey->key.parent = name.length > 0 ? parentId : 0;
    }
    return ResultSuccess();
  }

  {
    RomPathTool::RomEntryName name = {};
    NN_FS_RESULT_DO(parser.GetAsDirectoryName(&name));
    NN_FS_RESULT_THROW_UNLESS(!IsParentDirectory(name) || parentId != 0,
      ResultDirectoryUnobtainable());
  }
  NN_FS_RESULT_THROW_UNLESS(!parser.IsDirectoryPath(),
    ResultDbmInvalidOperation());
  outKey->key.parent = parentId;
  return parser.GetAsFileName(&outKey->name);
}

}
