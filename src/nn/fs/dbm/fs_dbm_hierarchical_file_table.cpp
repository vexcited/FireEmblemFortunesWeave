#include "nn/fs/dbm/fs_dbm_hierarchical_file_table.hpp"

namespace nn::fs::dbm {

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::Format(
  BufferedAllocationTableStorage* directoryStorage,
  BufferedAllocationTableStorage* fileStorage) {
  BufferedAllocationTableStorage::ScopedHoldingCacheSection directorySection(
    directoryStorage);
  BufferedAllocationTableStorage::ScopedHoldingCacheSection fileSection(
    fileStorage);

  NN_FS_RESULT_DO(DirectoryEntryList::Format(directoryStorage));
  NN_FS_RESULT_DO(FileEntryList::Format(fileStorage));

  DirectoryEntryList directoryList;
  NN_FS_RESULT_DO(directoryList.Initialize(directoryStorage));

  uint32_t index = 0;
  DirectoryKey rootKey = {};
  DirectoryEntry rootEntry = {};
  return directoryList.Add(&index, rootKey, rootEntry);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::Initialize(
  BufferedAllocationTableStorage* directoryStorage,
  BufferedAllocationTableStorage* fileStorage) {
  BufferedAllocationTableStorage::ScopedHoldingCacheSection directorySection(
    directoryStorage);
  BufferedAllocationTableStorage::ScopedHoldingCacheSection fileSection(
    fileStorage);

  NN_FS_RESULT_DO(m_DirectoryList.Initialize(directoryStorage));
  NN_FS_RESULT_DO(m_FileList.Initialize(fileStorage));
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::CreateDirectory(const char* path,
  const DirectoryInfoType& info) {
  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  DirectoryKey key = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindDirectoryRecursive(&parentKey, &parentEntry, &key,
    path));

  bool isFile = false;
  NN_FS_RESULT_DO(CheckSameEntryExists(&isFile, key.parent, key.name.name,
    PathTool::GetDirectoryNameLength(&key.name), ResultDbmAlreadyExists()));

  DirectoryEntry entry = {};
  entry.info = info;
  uint32_t index = 0;
  NN_FS_RESULT_DO(m_DirectoryList.Add(&index, key, entry));

  entry.next = parentEntry.directory;
  parentEntry.directory = index;
  if (entry.next != 0) {
    NN_FS_RESULT_DO(m_DirectoryList.SetByIndex(index, entry));
  }
  return m_DirectoryList.SetByIndex(key.parent, parentEntry);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::CreateFile(uint32_t* outIndex,
  const char* path, const FileInfoType& info) {
  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  FileKey key = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindFileRecursive(&parentKey, &parentEntry, &key, path));

  bool isFile = false;
  NN_FS_RESULT_DO(CheckSameEntryExists(&isFile, key.parent, key.name.name,
    PathTool::GetFileNameLength(&key.name), ResultDbmAlreadyExists()));

  FileEntry entry = {};
  entry.info = info;
  uint32_t index = 0;
  NN_FS_RESULT_DO(m_FileList.Add(&index, key, entry));

  entry.next = parentEntry.file;
  parentEntry.file = index;
  if (entry.next != 0) {
    NN_FS_RESULT_DO(m_FileList.SetByIndex(index, entry));
  }
  NN_FS_RESULT_DO(m_DirectoryList.SetByIndex(key.parent, parentEntry));
  *outIndex = index;
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::DeleteDirectory(const char* path) {
  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  DirectoryKey key = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindDirectoryRecursive(&parentKey, &parentEntry, &key,
    path));
  NN_FS_RESULT_THROW_UNLESS(key.parent != parentKey.parent,
    ResultDbmDirectoryUndeletable());

  uint32_t index = 0;
  DirectoryEntry entry = {};
  NN_FS_RESULT_DO(GetDirectoryEntry(&index, &entry, key));
  NN_FS_RESULT_THROW_UNLESS(entry.directory == 0 && entry.file == 0,
    ResultDbmDirectoryNotEmpty());

  NN_FS_RESULT_DO(RemoveDirectoryLink(&parentEntry, key.parent, &entry,
    index));
  return m_DirectoryList.Remove(key);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::DeleteFile(const char* path) {
  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  FileKey key = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindFileRecursive(&parentKey, &parentEntry, &key, path));

  uint32_t index = 0;
  FileEntry entry = {};
  NN_FS_RESULT_DO(GetFileEntry(&index, &entry, key));
  NN_FS_RESULT_DO(RemoveFileLink(&parentEntry, key.parent, &entry, index));
  return m_FileList.Remove(key);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::RenameFile(bool* outIsFile,
  bool* outIsSameEntry, const char* newPath, const char* currentPath) {
  *outIsFile = false;
  *outIsSameEntry = false;

  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  FileKey key = {};
  uint32_t index = 0;
  FileEntry entry = {};
  DirectoryKey newParentKey = {};
  DirectoryEntry newParentEntry = {};
  FileKey newKey = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindFileRecursive(&parentKey, &parentEntry, &key,
    currentPath));
  NN_FS_RESULT_DO(GetFileEntry(&index, &entry, key));
  NN_FS_RESULT_DO(FindFileRecursive(&newParentKey, &newParentEntry, &newKey,
    newPath));

  if (key == newKey) {
    *outIsFile = true;
    *outIsSameEntry = true;
    return ResultDbmAlreadyExists();
  }

  NN_FS_RESULT_DO(CheckSameEntryExists(outIsFile, newKey.parent,
    newKey.name.name, PathTool::GetFileNameLength(&newKey.name),
    ResultDbmAlreadyExists()));

  if (key.parent != newKey.parent) {
    NN_FS_RESULT_DO(RemoveFileLink(&parentEntry, key.parent, &entry, index));
    entry.next = newParentEntry.file;
    newParentEntry.file = index;
    NN_FS_RESULT_DO(m_DirectoryList.SetByIndex(newKey.parent,
      newParentEntry));
    NN_FS_RESULT_DO(m_FileList.SetByIndex(index, entry));
  }
  return m_FileList.ModifyKey(newKey, key);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::RenameDirectory(bool* outIsFile,
  bool* outIsSameEntry, bool* outIsParentEntry, const char* newPath,
  const char* currentPath) {
  *outIsFile = false;
  *outIsSameEntry = false;
  *outIsParentEntry = false;

  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  DirectoryKey key = {};
  uint32_t index = 0;
  DirectoryEntry entry = {};
  DirectoryKey newParentKey = {};
  DirectoryEntry newParentEntry = {};
  DirectoryKey newKey = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindDirectoryRecursive(&parentKey, &parentEntry, &key,
    currentPath));
  NN_FS_RESULT_DO(GetDirectoryEntry(&index, &entry, key));

  const Result result = FindDirectoryRecursive(&newParentKey,
    &newParentEntry, &newKey, newPath);
  if (IsFailure(result)) {
    if (key.parent == parentKey.parent) {
      return ResultDbmDirectoryUnrenamable();
    }
    return result;
  }

  if (key == newKey) {
    *outIsSameEntry = true;
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(key.parent != parentKey.parent,
    ResultDbmDirectoryUnrenamable());
  if (newKey.parent == newParentKey.parent) {
    *outIsParentEntry = true;
    return ResultDbmDirectoryUnrenamable();
  }

  {
    // The original inlines this check but calls the next one.
    Result subResult;
    [[clang::always_inline]] subResult = CheckSubDirectory(key, newParentKey,
      ResultDbmDirectoryUnrenamable());
    NN_FS_RESULT_DO(subResult);
  }
  {
    const Result subResult = CheckSubDirectory(newKey, parentKey,
      ResultDbmDirectoryUnrenamable());
    if (IsFailure(subResult)) {
      *outIsParentEntry = true;
      return subResult;
    }
  }

  NN_FS_RESULT_DO(CheckSameEntryExists(outIsFile, newKey.parent,
    newKey.name.name, PathTool::GetDirectoryNameLength(&newKey.name),
    ResultDbmAlreadyExists()));

  if (key.parent != newKey.parent) {
    // A directory moved into its previous sibling is unlinked from the copy
    // of that sibling, which would otherwise overwrite the unlink.
    if (newParentEntry.next == index) {
      newParentEntry.next = entry.next;
    }
    else {
      NN_FS_RESULT_DO(RemoveDirectoryLink(&parentEntry, key.parent, &entry,
        index));
    }
    entry.next = newParentEntry.directory;
    newParentEntry.directory = index;
    NN_FS_RESULT_DO(m_DirectoryList.SetByIndex(newKey.parent,
      newParentEntry));
    NN_FS_RESULT_DO(m_DirectoryList.SetByIndex(index, entry));
  }
  return m_DirectoryList.ModifyKey(newKey, key);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::OpenFile(uint32_t* outIndex,
  FileInfoType* outInfo, const char* path) const {
  DirectoryKey parentKey = {};
  DirectoryEntry parentEntry = {};
  FileKey key = {};
  ScopedHoldingCacheSection section(this);

  NN_FS_RESULT_DO(FindFileRecursive(&parentKey, &parentEntry, &key, path));
  return OpenFile(outIndex, outInfo, key);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::UpdateFileInformationFromKey(
  const FileKey& key, const FileInfoType& info) {
  ScopedHoldingCacheSection section(this);
  uint32_t index = 0;
  FileEntry entry = {};
  NN_FS_RESULT_DO(GetFileEntry(&index, &entry, key));
  entry.info = info;
  return m_FileList.SetByIndex(index, entry);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::CheckSubEntry(bool* outIsSubEntry,
  uint32_t id, uint32_t childId, bool isFile) const {
  ScopedHoldingCacheSection section(this);
  *outIsSubEntry = false;

  if (isFile) {
    FileKey fileKey;
    FileEntry fileEntry;
    NN_FS_RESULT_DO(m_FileList.GetByIndex(&fileKey, &fileEntry, childId));
    childId = fileKey.parent;
  }

  DirectoryKey key;
  DirectoryEntry entry;
  NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&key, &entry, id));

  DirectoryKey current;
  NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&current, &entry, childId));
  while (current.parent != 0) {
    if (key == current) {
      *outIsSubEntry = true;
      break;
    }
    NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&current, &entry,
      current.parent));
  }
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::GetDirectoryEntry(uint32_t* outIndex,
  DirectoryEntry* outEntry, const DirectoryKey& key) const {
  const Result result = m_DirectoryList.Get(outIndex, outEntry, key);
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  // A file of the same name makes the path incompatible instead.
  FileKey fileKey;
  fileKey.parent = key.parent;
  NN_FS_RESULT_THROW_UNLESS(
    PathTool::ConvertDirectoryNameToFileName(&fileKey.name, &key.name),
    ResultDbmDirectoryNotFound());

  uint32_t index;
  FileEntry entry;
  const Result fileResult = m_FileList.Get(&index, &entry, fileKey);
  if (IsSuccess(fileResult)) {
    return ResultDbmIncompatiblePath();
  }
  if (IsResultIncluded(fileResult, ResultDbmKeyNotFound())) {
    return ResultDbmDirectoryNotFound();
  }
  return fileResult;
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::GetFileEntry(uint32_t* outIndex,
  FileEntry* outEntry, const FileKey& key) const {
  const Result result = m_FileList.Get(outIndex, outEntry, key);
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }

  DirectoryKey directoryKey;
  directoryKey.parent = key.parent;
  NN_FS_RESULT_THROW_UNLESS(
    PathTool::ConvertFileNameToDirectoryName(&directoryKey.name, &key.name),
    ResultDbmFileNotFound());

  uint32_t index;
  DirectoryEntry entry;
  const Result directoryResult = m_DirectoryList.Get(&index, &entry,
    directoryKey);
  if (IsSuccess(directoryResult)) {
    return ResultDbmIncompatiblePath();
  }
  if (IsResultIncluded(directoryResult, ResultDbmKeyNotFound())) {
    return ResultDbmFileNotFound();
  }
  return directoryResult;
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::FindParentDirectoryRecursive(
  uint32_t* outIndex, DirectoryKey* outKey, DirectoryEntry* outEntry,
  PathTool::PathParser& parser) const {
  uint32_t index = 0;
  size_t length = 0;
  DirectoryEntry entry = {};
  DirectoryKey key = {};
  NN_FS_RESULT_DO(parser.GetNextDirectoryName(&key.name, &length));
  NN_FS_RESULT_DO(GetDirectoryEntry(&index, &entry, key));

  uint32_t parentIndex = index;
  while (!parser.IsParseFinished()) {
    const DirectoryKey previousKey = key;
    NN_FS_RESULT_DO(parser.GetNextDirectoryName(&key.name, &length));
    if (length == 2 && key.name.name[0] == '.' && key.name.name[1] == '.') {
      parentIndex = key.parent;
      NN_FS_RESULT_THROW_UNLESS(parentIndex != 0,
        ResultDirectoryUnobtainable());
      NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&key, &entry,
        parentIndex));
    }
    else if (length == 1 && key.name.name[0] == '.') {
      key = previousKey;
    }
    else {
      key.parent = parentIndex;
      NN_FS_RESULT_DO(GetDirectoryEntry(&index, &entry, key));
      parentIndex = index;
    }
  }

  *outIndex = parentIndex;
  *outKey = key;
  *outEntry = entry;
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::FindDirectoryRecursive(
  DirectoryKey* outParentKey, DirectoryEntry* outParentEntry,
  DirectoryKey* outKey, const char* path) const {
  ScopedHoldingCacheSection section(this);
  PathTool::PathParser parser;
  NN_FS_RESULT_DO(parser.Initialize(path));

  uint32_t parentIndex = 0;
  NN_FS_RESULT_DO(FindParentDirectoryRecursive(&parentIndex, outParentKey,
    outParentEntry, parser));

  size_t length = 0;
  NN_FS_RESULT_DO(parser.GetAsDirectoryName(&outKey->name, &length));
  if (length == 2 && outKey->name.name[0] == '.' &&
    outKey->name.name[1] == '.') {
    NN_FS_RESULT_THROW_UNLESS(outParentKey->parent != 0,
      ResultDirectoryUnobtainable());
    DirectoryEntry entry = {};
    NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(outKey, &entry,
      outParentKey->parent));
    if (outKey->parent != 0) {
      NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(outParentKey,
        outParentEntry, outKey->parent));
    }
    else {
      outParentKey->parent = 0;
    }
  }
  else if (length == 1 && outKey->name.name[0] == '.') {
    *outKey = *outParentKey;
    if (outKey->parent != 0) {
      NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(outParentKey,
        outParentEntry, outKey->parent));
    }
  }
  else {
    outKey->parent = length != 0 ? parentIndex : 0;
  }
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::FindFileRecursive(
  DirectoryKey* outParentKey, DirectoryEntry* outParentEntry,
  FileKey* outKey, const char* path) const {
  PathTool::PathParser parser;
  NN_FS_RESULT_DO(parser.Initialize(path));

  ScopedHoldingCacheSection section(this);
  uint32_t parentIndex = 0;
  NN_FS_RESULT_DO(FindParentDirectoryRecursive(&parentIndex, outParentKey,
    outParentEntry, parser));
  NN_FS_RESULT_THROW_UNLESS(!parser.IsDirectoryPath(),
    ResultDbmIncompatiblePath());

  size_t length = 0;
  outKey->parent = parentIndex;
  return parser.GetAsFileName(&outKey->name, &length);
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::CheckSameEntryExists(bool* outIsFile,
  uint32_t parent, const char* name, size_t length,
  Result resultIfExists) const {
  {
    DirectoryKey key;
    key.parent = parent;
    if (PathTool::GetDirectoryName(&key.name, name, length)) {
      uint32_t index;
      DirectoryEntry entry;
      const Result result = m_DirectoryList.Get(&index, &entry, key);
      if (IsSuccess(result)) {
        *outIsFile = false;
        return resultIfExists;
      }
      if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
        return result;
      }
    }
  }

  FileKey key;
  key.parent = parent;
  if (!PathTool::GetFileName(&key.name, name, length)) {
    return ResultSuccess();
  }
  uint32_t index;
  FileEntry entry;
  const Result result = m_FileList.Get(&index, &entry, key);
  if (IsSuccess(result)) {
    *outIsFile = true;
    return resultIfExists;
  }
  if (!IsResultIncluded(result, ResultDbmKeyNotFound())) {
    return result;
  }
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::CheckSubDirectory(
  const DirectoryKey& key, DirectoryKey current,
  Result resultIfSubDirectory) {
  while (current.parent != 0) {
    if (key == current) {
      return resultIfSubDirectory;
    }
    DirectoryEntry entry;
    NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&current, &entry,
      current.parent));
  }
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::RemoveDirectoryLink(
  DirectoryEntry* parentEntry, uint32_t parentIndex, DirectoryEntry* entry,
  uint32_t index) {
  if (parentEntry->directory == index) {
    parentEntry->directory = entry->next;
    entry->next = 0;
    return m_DirectoryList.SetByIndex(parentIndex, *parentEntry);
  }

  uint32_t previousIndex = parentEntry->directory;
  DirectoryKey key;
  DirectoryEntry previousEntry;
  NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&key, &previousEntry,
    previousIndex));
  while (previousEntry.next != 0) {
    const uint32_t currentIndex = previousEntry.next;
    DirectoryEntry currentEntry;
    NN_FS_RESULT_DO(m_DirectoryList.GetByIndex(&key, &currentEntry,
      currentIndex));
    if (currentIndex == index) {
      previousEntry.next = currentEntry.next;
      NN_FS_RESULT_DO(m_DirectoryList.SetByIndex(previousIndex,
        previousEntry));
      entry->next = 0;
      return ResultSuccess();
    }
    previousIndex = currentIndex;
    previousEntry = currentEntry;
  }
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType,
  typename DirectoryInfoType, typename FileInfoType>
Result HierarchicalFileTableTemplate<DirectoryNameType, FileNameType,
  DirectoryInfoType, FileInfoType>::RemoveFileLink(
  DirectoryEntry* parentEntry, uint32_t parentIndex, FileEntry* entry,
  uint32_t index) {
  if (parentEntry->file == index) {
    parentEntry->file = entry->next;
    entry->next = 0;
    return m_DirectoryList.SetByIndex(parentIndex, *parentEntry);
  }

  uint32_t previousIndex = parentEntry->file;
  FileKey key;
  FileEntry previousEntry;
  NN_FS_RESULT_DO(m_FileList.GetByIndex(&key, &previousEntry,
    previousIndex));
  while (previousEntry.next != 0) {
    const uint32_t currentIndex = previousEntry.next;
    FileEntry currentEntry;
    NN_FS_RESULT_DO(m_FileList.GetByIndex(&key, &currentEntry,
      currentIndex));
    if (currentIndex == index) {
      previousEntry.next = currentEntry.next;
      NN_FS_RESULT_DO(m_FileList.SetByIndex(previousIndex, previousEntry));
      entry->next = 0;
      return ResultSuccess();
    }
    previousIndex = currentIndex;
    previousEntry = currentEntry;
  }
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType>
Result FileSystemObjectTemplate<DirectoryNameType, FileNameType>::
  GetEntryType(DirectoryEntryType* outType, const char* path) {
  typename FileTable::ScopedHoldingCacheSection section(&m_FileTable);

  uint32_t index = 0;
  FileObject file;
  Result result = OpenFile(&index, &file, path);
  if (IsSuccess(result)) {
    *outType = DirectoryEntryType_File;
    return result;
  }
  if (IsResultIncluded(result, ResultDbmIncompatiblePath()) ||
    IsResultDbmNotFound(result)) {
    index = 0;
    DirectoryObject directory;
    result = OpenDirectory(&index, &directory, path);
    if (IsSuccess(result)) {
      *outType = DirectoryEntryType_Directory;
    }
    else if (IsResultIncluded(result, ResultDbmIncompatiblePath()) ||
      IsResultDbmNotFound(result)) {
      result = ResultDbmNotFound();
    }
  }
  return result;
}

template<typename DirectoryNameType, typename FileNameType>
Result FileSystemObjectTemplate<DirectoryNameType, FileNameType>::OpenFile(
  uint32_t* outIndex, FileObject* outFile, const char* path) {
  typename FileTable::ScopedHoldingCacheSection section(&m_FileTable);

  typename FileTable::DirectoryKey parentKey = {};
  typename FileTable::DirectoryEntry parentEntry = {};
  typename FileTable::FileKey key = {};
  NN_FS_RESULT_DO(m_FileTable.FindFileRecursive(&parentKey, &parentEntry,
    &key, path));
  NN_FS_RESULT_DO(m_FileTable.OpenFile(outIndex, &outFile->m_FileInfo,
    key));
  outFile->m_pFileSystem = this;
  outFile->m_Key = key;
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType>
Result FileSystemObjectTemplate<DirectoryNameType, FileNameType>::
  OpenDirectory(uint32_t* outIndex, DirectoryObject* outDirectory,
  const char* path) {
  typename FileTable::ScopedHoldingCacheSection section(&m_FileTable);

  typename FileTable::DirectoryKey parentKey = {};
  typename FileTable::DirectoryEntry parentEntry = {};
  typename FileTable::DirectoryKey key = {};
  NN_FS_RESULT_DO(m_FileTable.FindDirectoryRecursive(&parentKey,
    &parentEntry, &key, path));

  uint32_t index = 0;
  typename FileTable::DirectoryEntry entry = {};
  NN_FS_RESULT_DO(m_FileTable.GetDirectoryEntry(&index, &entry, key));
  *outIndex = index;
  outDirectory->m_Info = entry.info;
  outDirectory->m_Key = key;
  outDirectory->m_pFileTable = &m_FileTable;
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType>
Result FileSystemObjectTemplate<DirectoryNameType, FileNameType>::DeleteFile(
  const char* path) {
  typename FileTable::ScopedHoldingCacheSection section(&m_FileTable);

  uint32_t index = 0;
  detail::FileInfo info = {};
  NN_FS_RESULT_DO(m_FileTable.OpenFile(&index, &info, path));
  if (info.index != AllocationTable::IndexEnd) {
    NN_FS_RESULT_DO(m_pAllocationTable->Free(info.index));
    info.index = AllocationTable::IndexEnd;
  }
  return m_FileTable.DeleteFile(path);
}

template<typename DirectoryNameType, typename FileNameType>
Result FileSystemObjectTemplate<DirectoryNameType, FileNameType>::ResizeFile(
  detail::FileInfo* fileInfo, const typename FileTable::FileKey& key,
  int64_t size) {
  NN_FS_RESULT_THROW_UNLESS(size < (int64_t{1} << 32) << m_BlockSizeShift,
    ResultDbmFileSizeTooLarge());
  typename FileTable::ScopedHoldingCacheSection section(&m_FileTable);

  const uint32_t newBlockCount =
    static_cast<uint32_t>((size + m_BlockSize - 1) >> m_BlockSizeShift);
  const uint32_t oldBlockCount = static_cast<uint32_t>(
    (fileInfo->size + m_BlockSize - 1) >> m_BlockSizeShift);
  if (newBlockCount == 0) {
    if (oldBlockCount != 0) {
      NN_FS_RESULT_DO(m_pAllocationTable->Free(fileInfo->index));
    }
    fileInfo->index = AllocationTable::IndexEnd;
  }
  else if (oldBlockCount == 0) {
    NN_FS_RESULT_DO(m_pAllocationTable->Allocate(&fileInfo->index,
      newBlockCount));
  }
  else if (newBlockCount < oldBlockCount) {
    uint32_t tailIndex = 0;
    NN_FS_RESULT_DO(m_pAllocationTable->Split(&tailIndex, fileInfo->index,
      newBlockCount));
    NN_FS_RESULT_DO(m_pAllocationTable->Free(tailIndex));
  }
  else if (newBlockCount > oldBlockCount) {
    uint32_t index = 0;
    NN_FS_RESULT_DO(m_pAllocationTable->Allocate(&index,
      newBlockCount - oldBlockCount));
    NN_FS_RESULT_DO(m_pAllocationTable->Concat(fileInfo->index, index));
  }
  fileInfo->size = size;
  return m_FileTable.UpdateFileInformationFromKey(key, *fileInfo);
}

template<typename DirectoryNameType, typename FileNameType>
Result DirectoryObjectTemplate<DirectoryNameType, FileNameType>::
  CountDirectory(uint32_t* outCount) const {
  uint32_t index = 0;
  typename FileTable::DirectoryEntry entry = {};
  {
    typename FileTable::ScopedHoldingCacheSection section(m_pFileTable);
    NN_FS_RESULT_DO(m_pFileTable->GetDirectoryEntry(&index, &entry, m_Key));
  }

  uint32_t count = 0;
  for (uint32_t next = entry.directory; next != 0; next = entry.next) {
    typename FileTable::DirectoryKey key;
    NN_FS_RESULT_DO(m_pFileTable->m_DirectoryList.GetByIndex(&key, &entry,
      next));
    ++count;
  }
  *outCount = count;
  return ResultSuccess();
}

template<typename DirectoryNameType, typename FileNameType>
Result DirectoryObjectTemplate<DirectoryNameType, FileNameType>::CountFile(
  uint32_t* outCount) const {
  uint32_t index = 0;
  typename FileTable::DirectoryEntry entry = {};
  {
    typename FileTable::ScopedHoldingCacheSection section(m_pFileTable);
    NN_FS_RESULT_DO(m_pFileTable->GetDirectoryEntry(&index, &entry, m_Key));
  }

  uint32_t count = 0;
  typename FileTable::FileEntry fileEntry;
  for (uint32_t next = entry.file; next != 0; next = fileEntry.next) {
    typename FileTable::FileKey key;
    NN_FS_RESULT_DO(m_pFileTable->m_FileList.GetByIndex(&key, &fileEntry,
      next));
    ++count;
  }
  *outCount = count;
  return ResultSuccess();
}

typedef HierarchicalFileTableTemplate<DirectoryName, FileName,
  detail::DirectoryInfo, detail::FileInfo> FileTable;
typedef FileSystemObjectTemplate<DirectoryName, FileName> FileSystemObject;
typedef DirectoryObjectTemplate<DirectoryName, FileName> DirectoryObject;

// The members are instantiated one by one, instantiating the classes would
// also emit their inline constructors, which are then called through aliases.
template Result FileTable::Format(BufferedAllocationTableStorage*,
  BufferedAllocationTableStorage*);
template Result FileTable::Initialize(BufferedAllocationTableStorage*,
  BufferedAllocationTableStorage*);
template Result FileTable::CreateDirectory(const char*,
  const detail::DirectoryInfo&);
template Result FileTable::CreateFile(uint32_t*, const char*,
  const detail::FileInfo&);
template Result FileTable::DeleteDirectory(const char*);
template Result FileTable::DeleteFile(const char*);
template Result FileTable::RenameFile(bool*, bool*, const char*,
  const char*);
template Result FileTable::RenameDirectory(bool*, bool*, bool*, const char*,
  const char*);
template Result FileTable::OpenFile(uint32_t*, detail::FileInfo*,
  const char*) const;
template Result FileTable::UpdateFileInformationFromKey(const FileKey&,
  const detail::FileInfo&);
template Result FileTable::CheckSubEntry(bool*, uint32_t, uint32_t,
  bool) const;
template Result FileTable::GetDirectoryEntry(uint32_t*, DirectoryEntry*,
  const DirectoryKey&) const;
template Result FileTable::GetFileEntry(uint32_t*, FileEntry*,
  const FileKey&) const;
template Result FileTable::FindParentDirectoryRecursive(uint32_t*,
  DirectoryKey*, DirectoryEntry*, PathTool::PathParser&) const;
template Result FileTable::FindDirectoryRecursive(DirectoryKey*,
  DirectoryEntry*, DirectoryKey*, const char*) const;
template Result FileTable::FindFileRecursive(DirectoryKey*, DirectoryEntry*,
  FileKey*, const char*) const;
template Result FileTable::CheckSameEntryExists(bool*, uint32_t, const char*,
  size_t, Result) const;
template Result FileTable::CheckSubDirectory(const DirectoryKey&,
  DirectoryKey, Result);
template Result FileTable::RemoveDirectoryLink(DirectoryEntry*, uint32_t,
  DirectoryEntry*, uint32_t);
template Result FileTable::RemoveFileLink(DirectoryEntry*, uint32_t,
  FileEntry*, uint32_t);

template Result FileSystemObject::GetEntryType(DirectoryEntryType*,
  const char*);
template Result FileSystemObject::OpenFile(uint32_t*, FileObject*,
  const char*);
template Result FileSystemObject::OpenDirectory(uint32_t*, DirectoryObject*,
  const char*);
template Result FileSystemObject::DeleteFile(const char*);
template Result FileSystemObject::ResizeFile(detail::FileInfo*,
  const FileTable::FileKey&, int64_t);

template Result DirectoryObject::CountDirectory(uint32_t*) const;
template Result DirectoryObject::CountFile(uint32_t*) const;

}
