#include <string.h>

#include "nn/fs/fs_directory.hpp"
#include "nn/fs/fsa/fs_file_system_attribute.hpp"
#include "nn/fs/save/fs_save_data_file_system_core.hpp"
#include "nn/util/util_scope_exit.hpp"

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

namespace nn::fs::save {

namespace {

constexpr uint32_t SaveDataFileSystemSignature = 0x45564153;
constexpr uint32_t SaveDataFileSystemVersion = 0x60000;
constexpr uint32_t SaveDataFileSystemVersionMask = 0xFFFF0000;
constexpr int64_t DirectoryEntryStorageInitialSize = 288;
constexpr int64_t FileEntryStorageInitialSize = 192;

struct SaveDataFileSystemHeader {
  uint32_t signature;
  uint32_t version;
  int64_t blockCount;
  int64_t blockSize;
};

struct SaveDataFileSystemControlArea {
  SaveDataFileSystemHeader header;
  uint8_t fileSystemControlArea[48];
};

constexpr Result ResultIncorrectSaveDataFileSystemMagic() {
  return fs::detail::MakeResult(4412);
}

constexpr Result ResultUnsupportedSaveDataFileSystemVersion() {
  return fs::detail::MakeResult(3002);
}

constexpr Result ResultInvalidSaveDataFileSystemDataSize() {
  return fs::detail::MakeResult(4414);
}

constexpr Result ResultInvalidSaveDataFileSystemBlockCount() {
  return fs::detail::MakeResult(6700);
}

constexpr Result ResultInvalidSaveDataFileSystemMetaSize() {
  return fs::detail::MakeResult(5333);
}

Result CheckHeader(const SaveDataFileSystemHeader& header) {
  NN_FS_RESULT_THROW_UNLESS(header.signature == SaveDataFileSystemSignature,
    ResultIncorrectSaveDataFileSystemMagic());
  NN_FS_RESULT_THROW_UNLESS(
    (header.version & SaveDataFileSystemVersionMask) ==
      SaveDataFileSystemVersion,
    ResultUnsupportedSaveDataFileSystemVersion());
  return ResultSuccess();
}

}

Result SaveDataFileImpl::InitializeTable() {
  uint32_t index = 0;
  NN_FS_RESULT_DO(m_FileObject.SeekTo(&index, 0));
  return m_Storage.Initialize(m_pAllocationTable, index, m_BlockSize,
    SubStorage(m_DataStorage, m_DataOffset, m_DataSize));
}

Result SaveDataFileSystemCoreImpl::Format(SubStorage controlArea,
  SubStorage allocationTableMeta, SubStorage data, int64_t blockSize,
  IBufferManager* bufferManager) {
  int64_t controlAreaSize = 0;
  NN_FS_RESULT_DO(controlArea.GetSize(&controlAreaSize));
  int64_t allocationTableMetaSize = 0;
  NN_FS_RESULT_DO(allocationTableMeta.GetSize(&allocationTableMetaSize));
  int64_t dataSize = 0;
  NN_FS_RESULT_DO(data.GetSize(&dataSize));

  SaveDataFileSystemControlArea area = {};
  area.header.signature = SaveDataFileSystemSignature;
  area.header.version = SaveDataFileSystemVersion;
  area.header.blockCount = dataSize / blockSize;
  area.header.blockSize = blockSize;
  NN_FS_RESULT_THROW_UNLESS(area.header.blockCount >= 2,
    ResultInvalidSaveDataFileSystemBlockCount());
  const uint32_t blockCount = static_cast<uint32_t>(area.header.blockCount);
  NN_FS_RESULT_THROW_UNLESS(
    dbm::AllocationTable::QuerySize(blockCount) <= allocationTableMetaSize,
    ResultInvalidSaveDataFileSystemMetaSize());

  const uint32_t invalidSignature = 0;
  NN_FS_RESULT_DO(controlArea.Write(0, &invalidSignature,
    sizeof(invalidSignature)));
  NN_FS_RESULT_DO(controlArea.Flush());

  NN_FS_RESULT_DO(FormatDbmLayer(
    SubStorage(controlArea, sizeof(SaveDataFileSystemHeader),
      controlAreaSize - sizeof(SaveDataFileSystemHeader)),
    allocationTableMeta, data, blockSize, blockCount, bufferManager));

  NN_FS_RESULT_DO(controlArea.Write(0, &area.header, sizeof(area.header)));
  return controlArea.Flush();
}

Result SaveDataFileSystemCoreImpl::FormatDbmLayer(SubStorage controlArea,
  SubStorage allocationTableMeta, SubStorage data, int64_t blockSize,
  uint32_t blockCount, IBufferManager* bufferManager) {
  dbm::FileSystemControlArea fileSystemControlArea;
  fileSystemControlArea.Initialize(controlArea);
  NN_UTIL_SCOPE_EXIT {
    fileSystemControlArea.Finalize();
  };

  NN_FS_RESULT_DO(fileSystemControlArea.WriteBlockSize(blockSize));
  NN_FS_RESULT_DO(fileSystemControlArea.WriteStorageInfo(0, blockCount,
    dbm::FileSystemControlArea::AllocationTableInfoPosition));
  NN_FS_RESULT_DO(fileSystemControlArea.WriteStorageInfo(0, blockCount,
    dbm::FileSystemControlArea::DataInfoPosition));

  NN_FS_RESULT_DO(dbm::AllocationTable::Format(allocationTableMeta,
    blockCount));

  dbm::AllocationTable allocationTable;
  allocationTable.Initialize(allocationTableMeta, blockCount);

  uint32_t directoryEntryIndex = dbm::AllocationTableStorage::InvalidIndex;
  NN_FS_RESULT_DO(allocationTable.Allocate(&directoryEntryIndex,
    (DirectoryEntryStorageInitialSize + blockSize - 1) / blockSize));
  NN_FS_RESULT_DO(fileSystemControlArea.WriteAllocationInfo(
    directoryEntryIndex,
    dbm::FileSystemControlArea::DirectoryEntryInfoPosition));

  uint32_t fileEntryIndex = dbm::AllocationTableStorage::InvalidIndex;
  NN_FS_RESULT_DO(allocationTable.Allocate(&fileEntryIndex,
    (FileEntryStorageInitialSize + blockSize - 1) / blockSize));
  NN_FS_RESULT_DO(fileSystemControlArea.WriteAllocationInfo(fileEntryIndex,
    dbm::FileSystemControlArea::FileEntryInfoPosition));

  dbm::BufferedAllocationTableStorage directoryEntryStorage;
  NN_UTIL_SCOPE_EXIT {
    directoryEntryStorage.Finalize();
  };
  dbm::BufferedAllocationTableStorage fileEntryStorage;
  NN_UTIL_SCOPE_EXIT {
    fileEntryStorage.Finalize();
  };

  const int64_t dataSize = blockSize * blockCount;
  if (bufferManager != nullptr) {
    NN_FS_RESULT_DO(directoryEntryStorage.InitializeBuffered(
      &allocationTable, directoryEntryIndex, blockSize,
      SubStorage(data, 0, dataSize), bufferManager));
    NN_FS_RESULT_DO(fileEntryStorage.InitializeBuffered(&allocationTable,
      fileEntryIndex, blockSize, SubStorage(data, 0, dataSize),
      bufferManager));
  }
  else {
    NN_FS_RESULT_DO(directoryEntryStorage.Initialize(&allocationTable,
      directoryEntryIndex, blockSize, SubStorage(data, 0, dataSize)));
    NN_FS_RESULT_DO(fileEntryStorage.Initialize(&allocationTable,
      fileEntryIndex, blockSize, SubStorage(data, 0, dataSize)));
  }

  return FileSystemObject::FileTable::Format(&directoryEntryStorage,
    &fileEntryStorage);
}

Result SaveDataFileSystemCoreImpl::ExpandControlArea(SubStorage controlArea,
  int64_t size) {
  SaveDataFileSystemControlArea area;
  NN_FS_RESULT_DO(controlArea.Read(0, &area, sizeof(area)));
  NN_FS_RESULT_DO(CheckHeader(area.header));

  const int64_t blockCount = size / area.header.blockSize;
  NN_FS_RESULT_THROW_UNLESS(blockCount <= UINT32_MAX, ResultInvalidSize());
  if (area.header.blockCount == blockCount) {
    return ResultSuccess();
  }
  NN_FS_RESULT_THROW_UNLESS(blockCount >= area.header.blockCount,
    ResultInvalidSize());

  int64_t controlAreaSize = 0;
  NN_FS_RESULT_DO(controlArea.GetSize(&controlAreaSize));

  dbm::FileSystemControlArea fileSystemControlArea;
  fileSystemControlArea.Initialize(SubStorage(controlArea,
    sizeof(SaveDataFileSystemHeader),
    controlAreaSize - sizeof(SaveDataFileSystemHeader)));
  NN_UTIL_SCOPE_EXIT {
    fileSystemControlArea.Finalize();
  };
  NN_FS_RESULT_DO(fileSystemControlArea.ExpandAllocationTableInfo(
    static_cast<uint32_t>(blockCount)));
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::Initialize(SubStorage controlArea,
  SubStorage allocationTableMeta, SubStorage data,
  IBufferManager* bufferManager) {
  int64_t controlAreaSize = 0;
  NN_FS_RESULT_DO(controlArea.GetSize(&controlAreaSize));
  NN_FS_RESULT_THROW_UNLESS(
    controlAreaSize >= static_cast<int64_t>(
      sizeof(SaveDataFileSystemControlArea)),
    ResultInvalidSize());

  m_ControlAreaStorage = controlArea;
  m_AllocationTableMetaStorage = allocationTableMeta;

  SaveDataFileSystemControlArea area;
  NN_FS_RESULT_DO(m_ControlAreaStorage.Read(0, &area, sizeof(area)));
  NN_FS_RESULT_DO(CheckHeader(area.header));

  m_DataStorage = data;

  m_ControlArea.Initialize(SubStorage(m_ControlAreaStorage,
    sizeof(SaveDataFileSystemHeader), sizeof(area.fileSystemControlArea)));
  NN_UTIL_SCOPE_EXIT {
    m_ControlArea.Finalize();
  };

  int64_t blockSize = 0;
  NN_FS_RESULT_DO(m_ControlArea.ReadBlockSize(&blockSize));

  int64_t allocationTableOffset = 0;
  uint32_t allocationTableBlockCount = 0;
  NN_FS_RESULT_DO(m_ControlArea.ReadStorageInfo(&allocationTableOffset,
    &allocationTableBlockCount,
    dbm::FileSystemControlArea::AllocationTableInfoPosition));

  int64_t dataOffset = 0;
  uint32_t blockCount = 0;
  NN_FS_RESULT_DO(m_ControlArea.ReadStorageInfo(&dataOffset, &blockCount,
    dbm::FileSystemControlArea::DataInfoPosition));

  uint32_t directoryEntryIndex = 0;
  NN_FS_RESULT_DO(m_ControlArea.ReadAllocationInfo(&directoryEntryIndex,
    dbm::FileSystemControlArea::DirectoryEntryInfoPosition));

  uint32_t fileEntryIndex = 0;
  NN_FS_RESULT_DO(m_ControlArea.ReadAllocationInfo(&fileEntryIndex,
    dbm::FileSystemControlArea::FileEntryInfoPosition));

  bool isSuccess = false;
  m_AllocationTable.Initialize(m_AllocationTableMetaStorage,
    allocationTableBlockCount);
  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      m_AllocationTable.Finalize();
    }
  };

  const int64_t dataSize = blockSize * blockCount;
  int64_t dataStorageSize = 0;
  NN_FS_RESULT_DO(m_DataStorage.GetSize(&dataStorageSize));
  NN_FS_RESULT_THROW_UNLESS(dataOffset + dataSize <= dataStorageSize,
    ResultInvalidSaveDataFileSystemDataSize());

  NN_UTIL_SCOPE_EXIT {
    if (!isSuccess) {
      m_FileEntryStorage.Finalize();
      m_DirectoryEntryStorage.Finalize();
    }
  };

  if (bufferManager != nullptr) {
    NN_FS_RESULT_DO(m_DirectoryEntryStorage.InitializeBuffered(
      &m_AllocationTable, directoryEntryIndex, blockSize,
      SubStorage(m_DataStorage, dataOffset, dataSize), bufferManager));
    NN_FS_RESULT_DO(m_FileEntryStorage.InitializeBuffered(&m_AllocationTable,
      fileEntryIndex, blockSize,
      SubStorage(m_DataStorage, dataOffset, dataSize), bufferManager));
  }
  else {
    NN_FS_RESULT_DO(m_DirectoryEntryStorage.Initialize(&m_AllocationTable,
      directoryEntryIndex, blockSize,
      SubStorage(m_DataStorage, dataOffset, dataSize)));
    NN_FS_RESULT_DO(m_FileEntryStorage.Initialize(&m_AllocationTable,
      fileEntryIndex, blockSize,
      SubStorage(m_DataStorage, dataOffset, dataSize)));
  }

  NN_FS_RESULT_DO(m_FileSystem.Initialize(&m_AllocationTable, blockSize,
    &m_DirectoryEntryStorage, &m_FileEntryStorage));

  m_DataOffset = dataOffset;
  m_BlockCount = blockCount;
  m_BlockSize = blockSize;
  isSuccess = true;
  return ResultSuccess();
}

Result SaveDataFileSystemCoreImpl::DoCreateFile(const Path& path,
  int64_t size, int option) {
  static_cast<void>(option);
  NN_FS_RESULT_DO(CheckPathFormat(path));

  uint32_t id = 0;
  dbm::detail::FileInfo info = {};
  info.index = dbm::AllocationTable::IndexEnd;
  NN_FS_RESULT_DO(m_FileSystem.GetFileTable()->CreateFile(&id,
    path.GetString(), info));

  FileSystemObject::FileObject file;
  uint32_t fileId = 0;
  Result result = m_FileSystem.OpenFile(&fileId, &file, path.GetString());
  if (IsSuccess(result)) {
    result = file.m_pFileSystem->ResizeFile(&file.m_FileInfo, file.m_Key,
      size);
  }
  if (IsFailure(result)) {
    m_FileSystem.DeleteFile(path.GetString());
    return result;
  }
  if (size <= 0) {
    return ResultSuccess();
  }

  dbm::AllocationTableStorage storage;
  uint32_t index = 0;
  NN_FS_RESULT_DO(file.SeekTo(&index, 0));
  NN_FS_RESULT_DO(storage.Initialize(&m_AllocationTable, index, m_BlockSize,
    SubStorage(m_DataStorage, m_DataOffset, m_BlockSize * m_BlockCount)));
  const Result fillResult = storage.OperateRange(OperationId_FillZero, 0,
    size);
  storage.Finalize();
  NN_FS_RESULT_DO(fillResult);
  return ResultSuccess();
}

}
