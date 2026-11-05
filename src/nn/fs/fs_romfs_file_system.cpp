#include "nn/fs/fs_romfs_file_system.hpp"

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_directory.hpp"
#include "nn/fs/fs_memory_storage.hpp"
#include "nn/fs/fs_path.hpp"
#include "nn/fs/fsa/fs_file_system_attribute.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs {

namespace {

const int32_t RomFsEntryNameLengthMax = 768;

inline Result ConvertRomFsResult(Result result) {
  if (IsResultDbmNotFound(result) ||
    IsResultIncluded(result, ResultDbmInvalidOperation())) {
    return ResultPathNotFound();
  }
  return result;
}

inline Result ReadFileSystemInformation(
  RomFsFileSystem::RomFileSystemInformation* outInformation,
  IStorage* storage) {
  return storage->Read(0, outInformation, sizeof(*outInformation));
}

const size_t RomFsNameBufferSize = RomFsEntryNameLengthMax + 1;

class RomFsDirectory : public fsa::IDirectory, public detail::Newable {
public:
  typedef HierarchicalRomFileTable::FindPosition FindPosition;

  RomFsDirectory(RomFsFileSystem* parent, const FindPosition& position,
    OpenDirectoryMode mode)
    : m_pParent(parent), m_CurrentPosition(position),
      m_FirstPosition(position), m_Mode(mode) {}

  virtual ~RomFsDirectory() override {}

private:
  virtual Result DoRead(int64_t* outCount, DirectoryEntry* entries,
    int64_t count) override {
    return ReadInternal(outCount, &m_CurrentPosition, entries, count);
  }

  virtual Result DoGetEntryCount(int64_t* outCount) override {
    FindPosition position = m_FirstPosition;
    return ReadInternal(outCount, &position, nullptr, 0);
  }

  Result ReadInternal(int64_t* outCount, FindPosition* position,
    DirectoryEntry* entries, int64_t count) {
    auto name = detail::MakeUnique<char[]>(RomFsNameBufferSize);
    NN_FS_RESULT_THROW_UNLESS(name != nullptr,
      ResultAllocationMemoryFailedMakeUnique());

    int32_t index = 0;
    if ((m_Mode & OpenDirectoryMode_Directory) != 0) {
      while (entries == nullptr || index < count) {
        const Result result = m_pParent->GetRomFileTable()->FindNextDirectory(
          name.get(), position, RomFsNameBufferSize);
        if (IsResultDbmFindFinished(result)) {
          break;
        }
        NN_FS_RESULT_DO(result);
        if (entries != nullptr) {
          DirectoryEntry& entry = entries[index];
          const size_t length = util::Strlcpy(entry.name, name.get(),
            static_cast<int>(sizeof(entry.name)));
          NN_FS_RESULT_THROW_UNLESS(length < sizeof(entry.name),
            ResultTooLongPath());
          entry.type = DirectoryEntryType_Directory;
          entry.fileSize = 0;
        }
        ++index;
      }
    }

    if ((m_Mode & OpenDirectoryMode_File) != 0) {
      while (entries == nullptr || index < count) {
        const HierarchicalRomFileTable::RomFileId id = position->nextFile;
        const Result result = m_pParent->GetRomFileTable()->FindNextFile(
          name.get(), position, RomFsNameBufferSize);
        if (IsResultDbmFindFinished(result)) {
          break;
        }
        NN_FS_RESULT_DO(result);
        if (entries != nullptr) {
          DirectoryEntry& entry = entries[index];
          const size_t length = util::Strlcpy(entry.name, name.get(),
            static_cast<int>(sizeof(entry.name)));
          NN_FS_RESULT_THROW_UNLESS(length < sizeof(entry.name),
            ResultTooLongPath());
          RomFileInfo info = {};
          NN_FS_RESULT_DO(m_pParent->GetRomFileTable()->OpenFile(&info, id));
          entry.type = DirectoryEntryType_File;
          entry.fileSize = info.size.Get();
        }
        ++index;
      }
    }

    *outCount = index;
    return ResultSuccess();
  }

  RomFsFileSystem* m_pParent;
  FindPosition m_CurrentPosition;
  FindPosition m_FirstPosition;
  OpenDirectoryMode m_Mode;
};

}

RomFsFileSystem::RomFsFileSystem()
  : m_RomFileTable(), m_pBaseStorage(nullptr), m_UniqueBaseStorage(),
    m_DirectoryBucketStorage(), m_DirectoryEntryStorage(),
    m_FileBucketStorage(), m_FileEntryStorage() {}

RomFsFileSystem::~RomFsFileSystem() {}

HierarchicalRomFileTable* RomFsFileSystem::GetRomFileTable() {
  return &m_RomFileTable;
}

Result RomFsFileSystem::GetRequiredWorkingMemorySize(size_t* outSize,
  IStorage* storage) {
  RomFileSystemInformation information = {};
  NN_FS_RESULT_DO(ReadFileSystemInformation(&information, storage));
  *outSize = (information.directoryBucketSize +
    information.directoryEntrySize + information.fileBucketSize +
    information.fileEntrySize + 7) & ~static_cast<size_t>(7);
  return ResultSuccess();
}

Result RomFsFileSystem::Initialize(std::unique_ptr<IStorage>&& baseStorage,
  void* workingBuffer, size_t workingBufferSize, bool useCache) {
  m_UniqueBaseStorage = std::move(baseStorage);
  return Initialize(m_UniqueBaseStorage.get(), workingBuffer,
    workingBufferSize, useCache);
}

Result RomFsFileSystem::DoCreateFile(const Path& path, int64_t size,
  int option) {
  static_cast<void>(path);
  static_cast<void>(size);
  static_cast<void>(option);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoDeleteFile(const Path& path) {
  static_cast<void>(path);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoCreateDirectory(const Path& path) {
  static_cast<void>(path);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoDeleteDirectory(const Path& path) {
  static_cast<void>(path);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoDeleteDirectoryRecursively(const Path& path) {
  static_cast<void>(path);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoCleanDirectoryRecursively(const Path& path) {
  static_cast<void>(path);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoRenameFile(const Path& currentPath,
  const Path& newPath) {
  static_cast<void>(currentPath);
  static_cast<void>(newPath);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoRenameDirectory(const Path& currentPath,
  const Path& newPath) {
  static_cast<void>(currentPath);
  static_cast<void>(newPath);
  return ResultUnsupportedWriteForRomFsFileSystem();
}

Result RomFsFileSystem::DoCommit() {
  return ResultSuccess();
}

Result RomFsFileSystem::DoCommitProvisionally(int64_t counter) {
  static_cast<void>(counter);
  return ResultUnsupportedCommitProvisionallyForRomFsFileSystem();
}

Result RomFsFileSystem::DoRollback() {
  return ResultSuccess();
}

Result RomFsFileSystem::DoGetFreeSpaceSize(int64_t* outSize,
  const Path& path) {
  static_cast<void>(path);
  *outSize = 0;
  return ResultSuccess();
}

Result RomFsFileSystem::DoGetTotalSpaceSize(int64_t* outSize,
  const Path& path) {
  static_cast<void>(outSize);
  static_cast<void>(path);
  return ResultUnsupportedGetTotalSpaceSizeForRomFsFileSystem();
}

Result RomFsFileSystem::DoGetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  *outAttribute = {};
  outAttribute->directoryEntryNameLengthMaxDefined = true;
  outAttribute->fileEntryNameLengthMaxDefined = true;
  outAttribute->directoryEntryNameLengthMax = RomFsEntryNameLengthMax;
  outAttribute->fileEntryNameLengthMax = RomFsEntryNameLengthMax;
  return ResultSuccess();
}

Result RomFsFileSystem::GetFileBaseOffset(int64_t* outOffset,
  const char* path) {
  RomFileInfo info = {};
  NN_FS_RESULT_DO(ConvertRomFsResult(m_RomFileTable.OpenFile(&info, path)));
  *outOffset = info.offset.Get() + m_EntrySize;
  return ResultSuccess();
}

Result RomFsFileSystem::GetFileInfo(RomFileInfo* outInfo, const char* path) {
  NN_FS_RESULT_DO(ConvertRomFsResult(m_RomFileTable.OpenFile(outInfo, path)));
  return ResultSuccess();
}

Result RomFsFileSystem::DoGetEntryType(DirectoryEntryType* outType,
  const Path& path) {
  HierarchicalRomFileTable::FindPosition position = {};
  const Result result = m_RomFileTable.FindOpen(&position, path.GetString());
  if (IsResultDbmNotFound(result)) {
    return ResultPathNotFound();
  }
  if (IsResultIncluded(result, ResultDbmInvalidOperation())) {
    *outType = DirectoryEntryType_File;
    return ResultSuccess();
  }
  NN_FS_RESULT_DO(result);
  *outType = DirectoryEntryType_Directory;
  return ResultSuccess();
}

Result RomFsFileSystem::Initialize(IStorage* baseStorage, void* workingBuffer,
  size_t workingBufferSize, bool useCache) {
  RomFileSystemInformation information = {};
  NN_FS_RESULT_DO(ReadFileSystemInformation(&information, baseStorage));

  if (useCache) {
    const size_t requiredSize = (information.directoryBucketSize +
      information.directoryEntrySize + information.fileBucketSize +
      information.fileEntrySize + 7) & ~static_cast<size_t>(7);
    NN_FS_RESULT_THROW_UNLESS(requiredSize <= workingBufferSize,
      ResultPreconditionViolation());
  }

  int64_t storageSize = 0;
  NN_FS_RESULT_DO(baseStorage->GetSize(&storageSize));
  NN_FS_RESULT_THROW_UNLESS(
    information.directoryBucketOffset + information.directoryBucketSize <=
      storageSize &&
    information.directoryEntryOffset + information.directoryEntrySize <=
      storageSize &&
    information.fileBucketOffset + information.fileBucketSize <=
      storageSize &&
    information.fileEntryOffset + information.fileEntrySize <= storageSize,
    ResultInvalidRomFsHeader());

  if (useCache) {
    char* directoryBucketBuffer = static_cast<char*>(workingBuffer);
    char* directoryEntryBuffer =
      directoryBucketBuffer + information.directoryBucketSize;
    char* fileBucketBuffer =
      directoryEntryBuffer + information.directoryEntrySize;
    char* fileEntryBuffer = fileBucketBuffer + information.fileBucketSize;
    NN_FS_RESULT_DO(baseStorage->Read(information.directoryBucketOffset,
      directoryBucketBuffer, information.directoryBucketSize));
    NN_FS_RESULT_DO(baseStorage->Read(information.directoryEntryOffset,
      directoryEntryBuffer, information.directoryEntrySize));
    NN_FS_RESULT_DO(baseStorage->Read(information.fileBucketOffset,
      fileBucketBuffer, information.fileBucketSize));
    NN_FS_RESULT_DO(baseStorage->Read(information.fileEntryOffset,
      fileEntryBuffer, information.fileEntrySize));
    m_DirectoryBucketStorage.reset(new MemoryStorage(directoryBucketBuffer,
      information.directoryBucketSize));
    m_DirectoryEntryStorage.reset(new MemoryStorage(directoryEntryBuffer,
      information.directoryEntrySize));
    m_FileBucketStorage.reset(new MemoryStorage(fileBucketBuffer,
      information.fileBucketSize));
    m_FileEntryStorage.reset(new MemoryStorage(fileEntryBuffer,
      information.fileEntrySize));
  }
  else {
    m_DirectoryBucketStorage.reset(new SubStorage(baseStorage,
      information.directoryBucketOffset, information.directoryBucketSize));
    m_DirectoryEntryStorage.reset(new SubStorage(baseStorage,
      information.directoryEntryOffset, information.directoryEntrySize));
    m_FileBucketStorage.reset(new SubStorage(baseStorage,
      information.fileBucketOffset, information.fileBucketSize));
    m_FileEntryStorage.reset(new SubStorage(baseStorage,
      information.fileEntryOffset, information.fileEntrySize));
  }

  NN_FS_RESULT_THROW_UNLESS(m_DirectoryBucketStorage != nullptr &&
    m_DirectoryEntryStorage != nullptr && m_FileBucketStorage != nullptr &&
    m_FileEntryStorage != nullptr,
    ResultAllocationMemoryFailedInRomFsFileSystemA());

  SubStorage directoryBucketStorage(m_DirectoryBucketStorage.get(), 0,
    information.directoryBucketSize);
  SubStorage directoryEntryStorage(m_DirectoryEntryStorage.get(), 0,
    information.directoryEntrySize);
  SubStorage fileBucketStorage(m_FileBucketStorage.get(), 0,
    information.fileBucketSize);
  SubStorage fileEntryStorage(m_FileEntryStorage.get(), 0,
    information.fileEntrySize);
  NN_FS_RESULT_DO(m_RomFileTable.Initialize(directoryBucketStorage,
    directoryEntryStorage, fileBucketStorage, fileEntryStorage));

  m_pBaseStorage = baseStorage;
  m_EntrySize = information.bodyOffset;
  return ResultSuccess();
}

Result RomFsFileSystem::DoOpenFile(std::unique_ptr<fsa::IFile>* outFile,
  const Path& path, OpenMode mode) {
  NN_FS_RESULT_THROW_UNLESS(
    (mode & (OpenMode_Read | OpenMode_Write | OpenMode_AllowAppend)) ==
      OpenMode_Read,
    ResultInvalidOpenMode());
  RomFileInfo info = {};
  NN_FS_RESULT_DO(GetFileInfo(&info, path.GetString()));
  const int64_t start = m_EntrySize + info.offset.Get();
  std::unique_ptr<detail::RomFsFile> file(
    new detail::RomFsFile(this, start, start + info.size.Get()));
  NN_FS_RESULT_THROW_UNLESS(file != nullptr,
    ResultAllocationMemoryFailedNew());
  *outFile = std::move(file);
  return ResultSuccess();
}

Result RomFsFileSystem::DoOpenDirectory(
  std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  HierarchicalRomFileTable::FindPosition position = {};
  NN_FS_RESULT_DO(ConvertRomFsResult(
    m_RomFileTable.FindOpen(&position, path.GetString())));
  std::unique_ptr<RomFsDirectory> directory(
    new RomFsDirectory(this, position, mode));
  NN_FS_RESULT_THROW_UNLESS(directory != nullptr,
    ResultAllocationMemoryFailedNew());
  *outDirectory = std::move(directory);
  return ResultSuccess();
}

}
