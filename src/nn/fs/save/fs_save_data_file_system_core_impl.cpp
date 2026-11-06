#include <string.h>

#include "nn/fs/fs_directory.hpp"
#include "nn/fs/fsa/fs_file_system_attribute.hpp"
#include "nn/fs/save/fs_save_data_file_system_core.hpp"

namespace nn::fs::save {

SaveDataFileSystemCoreImpl::SaveDataFileSystemCoreImpl()
  : m_ControlAreaStorage(), m_AllocationTableMetaStorage(), m_ControlArea(),
    m_FileSystem(), m_AllocationTable(), m_DirectoryEntryStorage(),
    m_FileEntryStorage(), m_DataStorage(), m_DataOffset(0),
    m_BlockCount(0), m_BlockSize(0) {}

SaveDataFileSystemCoreImpl::~SaveDataFileSystemCoreImpl() {}

Result SaveDataFileSystemCoreImpl::ExpandMeta(SubStorage allocationTableMeta,
  int64_t blockSize, int64_t oldSize, int64_t newSize) {
  const uint32_t oldBlockCount = static_cast<uint32_t>(oldSize / blockSize);
  const uint32_t newBlockCount = static_cast<uint32_t>(newSize / blockSize);
  if (oldBlockCount >= newBlockCount) {
    return ResultSuccess();
  }
  NN_FS_RESULT_DO(dbm::AllocationTable::Expand(allocationTableMeta,
    oldBlockCount, newBlockCount));
  return ResultSuccess();
}

void SaveDataFileSystemCoreImpl::Finalize() {
  if (m_BlockCount != 0) {
    m_FileSystem.Finalize();
    m_FileEntryStorage.Finalize();
    m_DirectoryEntryStorage.Finalize();
    m_AllocationTable.Finalize();
    m_DataOffset = 0;
    m_BlockCount = 0;
    m_BlockSize = 0;
  }
}

Result SaveDataFileSystemCoreImpl::CheckPathFormat(const Path& path) {
  PathFlags flags;
  return PathFormatter::CheckPathFormat(path.GetString(), flags);
}

Result SaveDataFileSystemCoreImpl::DoOpenFile(
  std::unique_ptr<fsa::IFile>* outFile, const Path& path, OpenMode mode) {
  std::unique_ptr<IExclusiveFileBase> file;
  NN_FS_RESULT_DO(OpenBaseFile(&file, path, mode));
  *outFile = std::move(file);
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoOpenDirectory(
  std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  std::unique_ptr<IExclusiveDirectoryBase> directory;
  NN_FS_RESULT_DO(OpenBaseDirectory(&directory, path, mode));
  *outDirectory = std::move(directory);
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoGetEntryType(DirectoryEntryType* outType,
  const Path& path) {
  NN_FS_RESULT_DO(CheckPathFormat(path));
  NN_FS_RESULT_DO(m_FileSystem.GetEntryType(outType, path.GetString()));
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoDeleteFile(const Path& path) {
  NN_FS_RESULT_DO(CheckPathFormat(path));
  NN_FS_RESULT_DO(m_FileSystem.DeleteFile(path.GetString()));
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoDeleteDirectory(const Path& path) {
  NN_FS_RESULT_DO(CheckPathFormat(path));
  NN_FS_RESULT_DO(
    m_FileSystem.GetFileTable()->DeleteDirectory(path.GetString()));
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoCreateDirectory(const Path& path) {
  NN_FS_RESULT_DO(CheckPathFormat(path));
  dbm::detail::DirectoryInfo info = {};
  NN_FS_RESULT_DO(
    m_FileSystem.GetFileTable()->CreateDirectory(path.GetString(), info));
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoRenameFile(const Path& currentPath,
  const Path& newPath) {
  NN_FS_RESULT_DO(CheckPathFormat(currentPath));
  NN_FS_RESULT_DO(CheckPathFormat(newPath));
  bool isFile = false;
  bool isSameEntry = false;
  return m_FileSystem.GetFileTable()->RenameFile(&isFile, &isSameEntry,
    newPath.GetString(), currentPath.GetString());
}

Result SaveDataFileSystemCoreImpl::DoRenameDirectory(const Path& currentPath,
  const Path& newPath) {
  NN_FS_RESULT_DO(CheckPathFormat(currentPath));
  NN_FS_RESULT_DO(CheckPathFormat(newPath));
  bool isFile = false;
  bool isSameEntry = false;
  bool isParentEntry = false;
  return m_FileSystem.GetFileTable()->RenameDirectory(&isFile, &isSameEntry,
    &isParentEntry, newPath.GetString(), currentPath.GetString());
}

Result SaveDataFileSystemCoreImpl::CheckSubEntry(bool* outIsSubEntry,
  int64_t id, int64_t childId, bool isFile) const {
  return m_FileSystem.GetFileTable()->CheckSubEntry(outIsSubEntry,
    static_cast<uint32_t>(id), static_cast<uint32_t>(childId), isFile);
}

Result SaveDataFileSystemCoreImpl::AcceptVisitor(
  IInternalStorageFileSystemVisitor* visitor) {
  NN_FS_RESULT_DO(visitor->Visit("SaveDataControlArea",
    &m_ControlAreaStorage));
  NN_FS_RESULT_DO(visitor->Visit("AllocationTableMeta",
    &m_AllocationTableMetaStorage));
  NN_FS_RESULT_DO(visitor->Visit("RawSaveData", &m_DataStorage));
  return ResultSuccess();
}

}

namespace nn::fs::save {

namespace {

constexpr Result ResultInvalidSaveDataFileReadOffset() {
  return fs::detail::MakeResult(4413);
}

constexpr Result ResultFileExtensionWithoutOpenModeAllowAppend() {
  return fs::detail::MakeResult(6201);
}

constexpr Result ResultReadNotPermitted() {
  return fs::detail::MakeResult(6202);
}

constexpr Result ResultWriteNotPermitted() {
  return fs::detail::MakeResult(6203);
}

}

Result SaveDataFileImpl::Initialize(OpenMode mode,
  dbm::AllocationTable* allocationTable, int64_t blockSize,
  SubStorage dataStorage, int64_t dataOffset, int64_t dataSize) {
  m_OpenMode = mode;
  m_pAllocationTable = allocationTable;
  m_BlockSize = blockSize;
  m_DataStorage = dataStorage;
  m_DataOffset = dataOffset;
  m_DataSize = dataSize;
  if (m_FileObject.GetSize() > 0) {
    NN_FS_RESULT_DO(InitializeTable());
  }
  return ResultSuccess();
}

SaveDataFileImpl::SaveDataFileImpl()
  : m_FileObject(), m_Storage(),
    m_pAllocationTable(nullptr), m_DataStorage(), m_BlockSize(0),
    m_DataOffset(0), m_DataSize(0) {}

SaveDataFileImpl::~SaveDataFileImpl() {}

Result SaveDataFileImpl::DoRead(size_t* outSize, int64_t offset, void* buffer,
  size_t size, const ReadOption& option) {
  static_cast<void>(option);
  NN_FS_RESULT_THROW_UNLESS(offset <= m_FileObject.GetSize(),
    ResultInvalidSaveDataFileReadOffset());
  NN_FS_RESULT_THROW_UNLESS((m_OpenMode & OpenMode_Read) != 0,
    ResultReadNotPermitted());

  int64_t fileSize = 0;
  NN_FS_RESULT_DO(GetSize(&fileSize));
  NN_FS_RESULT_THROW_UNLESS(offset <= fileSize, ResultOutOfRange());

  const size_t restSize = static_cast<size_t>(fileSize - offset);
  const size_t readSize = size < restSize ? size : restSize;
  if (readSize != 0) {
    NN_FS_RESULT_DO(m_Storage.Read(offset, buffer, readSize));
  }
  *outSize = readSize;
  return ResultSuccess();
}

Result SaveDataFileImpl::DoWrite(int64_t offset, const void* buffer,
  size_t size, const WriteOption& option) {
  if (size == 0) {
    return ResultSuccess();
  }
  const int openMode = m_OpenMode;
  NN_FS_RESULT_THROW_UNLESS((openMode & OpenMode_Write) != 0,
    ResultWriteNotPermitted());

  int64_t fileSize = 0;
  NN_FS_RESULT_DO(GetSize(&fileSize));
  const int64_t endOffset = offset + static_cast<int64_t>(size);
  if (fileSize < endOffset) {
    NN_FS_RESULT_THROW_UNLESS((openMode & OpenMode_AllowAppend) != 0,
      ResultFileExtensionWithoutOpenModeAllowAppend());
    NN_FS_RESULT_DO(SetSize(endOffset));
  }
  NN_FS_RESULT_DO(m_Storage.Write(offset, buffer, size));
  if (option.HasFlushFlag()) {
    return Flush();
  }
  return ResultSuccess();
}

Result SaveDataFileImpl::DoFlush() {
  if ((m_OpenMode & OpenMode_Write) != 0 && m_FileObject.GetSize() > 0) {
    return m_Storage.Flush();
  }
  return ResultSuccess();
}

Result SaveDataFileImpl::DoSetSize(int64_t size) {
  NN_FS_RESULT_THROW_UNLESS((m_OpenMode & OpenMode_Write) != 0,
    ResultWriteNotPermitted());
  const int64_t currentSize = m_FileObject.GetSize();
  NN_FS_RESULT_DO(m_FileObject.m_pFileSystem->ResizeFile(
    &m_FileObject.m_FileInfo, m_FileObject.m_Key, size));
  if (size > 0) {
    NN_FS_RESULT_DO(InitializeTable());
  }
  else {
    m_Storage.Finalize();
  }
  if (size > currentSize) {
    return m_Storage.OperateRange(OperationId_FillZero, currentSize,
      size - currentSize);
  }
  return ResultSuccess();
}

Result SaveDataFileImpl::DoGetSize(int64_t* outSize) {
  *outSize = m_FileObject.GetSize();
  return ResultSuccess();
}

Result SaveDataFileImpl::DoOperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size, const void* inBuffer,
  size_t inBufferSize) {
  if (operationId == OperationId_Invalidate) {
    NN_FS_RESULT_DO(m_pAllocationTable->Invalidate());
  }
  NN_FS_RESULT_DO(m_Storage.OperateRange(outBuffer, outBufferSize,
    operationId, offset, size, inBuffer, inBufferSize));
  return ResultSuccess();
}

SaveDataDirectoryImpl::SaveDataDirectoryImpl(OpenDirectoryMode mode)
  : m_DirectoryObject(), m_Mode(mode) {}

SaveDataDirectoryImpl::~SaveDataDirectoryImpl() {}

Result SaveDataDirectoryImpl::Initialize() {
  DirectoryObject::FileTable* fileTable = m_DirectoryObject.m_pFileTable;
  DirectoryObject::FileTable::ScopedHoldingCacheSection section(fileTable);
  m_DirectoryObject.m_NextDirectory = 0;
  m_DirectoryObject.m_NextFile = 0;

  uint32_t id = 0;
  DirectoryObject::FileTable::DirectoryEntry entry = {};
  const Result result = fileTable->GetDirectoryEntry(&id, &entry,
    m_DirectoryObject.m_Key);
  if (IsSuccess(result)) {
    m_DirectoryObject.m_NextDirectory = entry.directory;
    m_DirectoryObject.m_NextFile = entry.file;
  }
  return result;
}

Result SaveDataDirectoryImpl::DoGetEntryCount(int64_t* outCount) {
  uint32_t count = 0;
  if ((m_Mode & OpenDirectoryMode_Directory) != 0) {
    uint32_t directoryCount = 0;
    NN_FS_RESULT_DO(m_DirectoryObject.CountDirectory(&directoryCount));
    count = directoryCount;
  }
  if ((m_Mode & OpenDirectoryMode_File) != 0) {
    uint32_t fileCount = 0;
    NN_FS_RESULT_DO(m_DirectoryObject.CountFile(&fileCount));
    count += fileCount;
  }
  *outCount = count;
  return ResultSuccess();
}

}

namespace nn::fs::save {

namespace {

constexpr Result ResultAllocationMemoryFailedInSaveDataFileSystemCoreA() {
  return fs::detail::MakeResult(3310);
}

constexpr Result ResultAllocationMemoryFailedInSaveDataFileSystemCoreB() {
  return fs::detail::MakeResult(3311);
}

}

Result SaveDataFileSystemCoreImpl::OpenBaseFile(
  std::unique_ptr<IExclusiveFileBase>* outFile, const Path& path,
  OpenMode mode) {
  NN_FS_RESULT_DO(CheckPathFormat(path));
  NN_FS_RESULT_THROW_UNLESS((mode & (OpenMode_Read | OpenMode_Write)) != 0,
    fsa::ResultInvalidOpenMode());

  std::unique_ptr<SaveDataFileImpl> file(new SaveDataFileImpl());
  NN_FS_RESULT_THROW_UNLESS(file != nullptr,
    ResultAllocationMemoryFailedInSaveDataFileSystemCoreA());

  uint32_t id = 0;
  NN_FS_RESULT_DO(m_FileSystem.OpenFile(&id, &file->m_FileObject,
    path.GetString()));
  NN_FS_RESULT_DO(file->Initialize(mode, &m_AllocationTable, m_BlockSize,
    m_DataStorage, m_DataOffset, m_BlockSize * m_BlockCount));
  *outFile = std::move(file);
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::OpenBaseDirectory(
  std::unique_ptr<IExclusiveDirectoryBase>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  NN_FS_RESULT_DO(CheckPathFormat(path));

  std::unique_ptr<SaveDataDirectoryImpl> directory(
    new SaveDataDirectoryImpl(mode));
  NN_FS_RESULT_THROW_UNLESS(directory != nullptr,
    ResultAllocationMemoryFailedInSaveDataFileSystemCoreB());

  uint32_t id = 0;
  NN_FS_RESULT_DO(m_FileSystem.OpenDirectory(&id,
    &directory->m_DirectoryObject, path.GetString()));
  NN_FS_RESULT_DO(directory->Initialize());
  *outDirectory = std::move(directory);
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::GetFileIdFromPath(int64_t* outId,
  const Path& path, bool isFile) {
  NN_FS_RESULT_DO(CheckPathFormat(path));

  const char* pathString = path.GetString();
  uint32_t id = 0;
  if (isFile) {
    FileSystemObject::FileObject file;
    NN_FS_RESULT_DO(m_FileSystem.OpenFile(&id, &file, pathString));
  }
  else {
    FileSystemObject::DirectoryObject directory;
    NN_FS_RESULT_DO(m_FileSystem.OpenDirectory(&id, &directory, pathString));
  }
  *outId = id;
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoGetFreeSpaceSize(int64_t* outSize,
  const Path& path) {
  static_cast<void>(path);
  uint32_t freeBlockCount = 0;
  NN_FS_RESULT_DO(m_AllocationTable.CalcFreeListLength(&freeBlockCount));
  *outSize = m_BlockSize * freeBlockCount;
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoGetTotalSpaceSize(int64_t* outSize,
  const Path& path) {
  static_cast<void>(path);
  *outSize = m_BlockSize * m_BlockCount;
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoGetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  *outAttribute = {};
  outAttribute->directoryEntryNameLengthMaxDefined = true;
  outAttribute->fileEntryNameLengthMaxDefined = true;
  outAttribute->directoryEntryNameLengthMax = dbm::MaxDirectoryNameLength;
  outAttribute->fileEntryNameLengthMax = dbm::MaxFileNameLength;
  outAttribute->blockSizeDefined = true;
  outAttribute->blockSize = static_cast<int32_t>(m_BlockSize);
  return ResultSuccess();
}

Result SaveDataDirectoryImpl::DoRead(int64_t* outCount,
  DirectoryEntry* entries, int64_t count) {
  int64_t readCount = 0;
  if ((m_Mode & OpenDirectoryMode_Directory) != 0) {
    while (m_DirectoryObject.m_NextDirectory != 0) {
      dbm::DirectoryName name;
      NN_FS_RESULT_DO(m_DirectoryObject.FindNextDirectory(&name));

      DirectoryEntry* entry = &entries[readCount];
      *entry = {};
      memcpy(entry->name, &name, sizeof(name));
      entry->type = DirectoryEntryType_Directory;
      entry->fileSize = 0;
      if (++readCount >= count) {
        *outCount = count;
        return ResultSuccess();
      }
    }
  }
  if ((m_Mode & OpenDirectoryMode_File) != 0) {
    while (m_DirectoryObject.m_NextFile != 0) {
      int64_t size = 0;
      dbm::FileName name;
      NN_FS_RESULT_DO(m_DirectoryObject.FindNextFile(&size, &name));

      DirectoryEntry* entry = &entries[readCount];
      *entry = {};
      memcpy(entry->name, &name, sizeof(name));
      entry->type = DirectoryEntryType_File;
      entry->fileSize = size;
      if (++readCount >= count) {
        *outCount = count;
        return ResultSuccess();
      }
    }
  }
  *outCount = readCount;
  return ResultSuccess();
}

Result SaveDataDirectoryImpl::NotifyDelete(int64_t id, bool isFile) {
  if (isFile) {
    if (m_DirectoryObject.m_NextFile != 0 &&
      id == m_DirectoryObject.m_NextFile) {
      int64_t size;
      dbm::FileName name;
      return m_DirectoryObject.FindNextFile(&size, &name);
    }
  }
  else {
    if (m_DirectoryObject.m_NextDirectory != 0 &&
      id == m_DirectoryObject.m_NextDirectory) {
      dbm::DirectoryName name;
      return m_DirectoryObject.FindNextDirectory(&name);
    }
  }
  return ResultSuccess();
}

}
