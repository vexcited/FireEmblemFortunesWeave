#include "nn/fs/fs_ram_disk_file_system.hpp"

#include <string.h>

#include "nn/fs/dbm/fs_dbm_allocation_table.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_path.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fs_substorage.hpp"

namespace nn::fs {

namespace {

const int64_t RamDiskBlockSize = 0x1000;
const int64_t RamDiskControlAreaSize = 0x48;

constexpr Result ResultUnsupportedOperationForRamDisk() {
  return detail::MakeResult(6300);
}

constexpr Result ResultUnsupportedCommitProvisionallyForRamDisk() {
  return detail::MakeResult(6301);
}

constexpr Result ResultDirectoryUndeletable() {
  return detail::MakeResult(6031);
}

constexpr Result ResultDirectoryUnrenamable() {
  return detail::MakeResult(6032);
}

inline bool IsResultInRange(Result result, uint32_t begin, uint32_t end) {
  const uint32_t module = result.value & 0x1FF;
  const uint32_t description = (result.value >> 9) & 0x1FFF;
  return module == 2 && description >= begin && description < end;
}

Result ConvertResult(Result result) {
  if (IsSuccess(result)) {
    return result;
  }
  if (IsResultIncluded(result, detail::MakeResult(3002))) {
    return detail::MakeResult(4302);
  }
  if (IsResultDataCorrupted(result)) {
    if (IsResultInRange(result, 4411, 4420)) {
      if (IsResultIncluded(result, detail::MakeResult(4412))) {
        return detail::MakeResult(7112);
      }
      if (IsResultIncluded(result, detail::MakeResult(4413))) {
        return detail::MakeResult(7113);
      }
      if (IsResultIncluded(result, detail::MakeResult(4414))) {
        return detail::MakeResult(7114);
      }
      return result;
    }
    if (IsResultInRange(result, 4721, 4740)) {
      switch (result.value & 0x3FFFFF) {
        case 2 | 4722 << 9:
          return detail::MakeResult(7122);
        case 2 | 4723 << 9:
          return detail::MakeResult(7123);
        case 2 | 4724 << 9:
          return detail::MakeResult(7124);
        case 2 | 4725 << 9:
          return detail::MakeResult(7125);
        case 2 | 4726 << 9:
          return detail::MakeResult(7126);
        case 2 | 4727 << 9:
          return detail::MakeResult(7127);
        default:
          return result;
      }
    }
    return detail::MakeResult(5321);
  }
  if (IsResultInRange(result, 6600, 6700)) {
    return detail::MakeResult(1);
  }
  if (IsResultIncluded(result, detail::MakeResult(6602))) {
    return detail::MakeResult(1);
  }
  if (IsResultIncluded(result, detail::MakeResult(6707))) {
    return detail::MakeResult(30);
  }
  if (IsResultIncluded(result, detail::MakeResult(3003))) {
    return detail::MakeResult(2);
  }
  if (IsResultIncluded(result, detail::MakeResult(6033))) {
    return detail::MakeResult(1);
  }
  return result;
}

class RamDiskFile : public fsa::IFile, public detail::Newable {
public:
  explicit RamDiskFile(std::unique_ptr<fsa::IFile>&& baseFile)
    : m_BaseFile(std::move(baseFile)) {}

  virtual ~RamDiskFile() override {}

private:
  virtual Result DoRead(size_t* outSize, int64_t offset, void* buffer,
    size_t size, const ReadOption& option) override {
    const Result result = m_BaseFile->Read(outSize, offset, buffer, size,
      option);
    if (IsResultIncluded(result, detail::MakeResult(4413))) {
      return ResultOutOfRange();
    }
    return ConvertResult(result);
  }

  virtual Result DoWrite(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option) override {
    return ConvertResult(m_BaseFile->Write(offset, buffer, size, option));
  }

  virtual Result DoFlush() override {
    return ConvertResult(m_BaseFile->Flush());
  }

  virtual Result DoSetSize(int64_t size) override {
    return ConvertResult(m_BaseFile->SetSize(size));
  }

  virtual Result DoGetSize(int64_t* outSize) override {
    return ConvertResult(m_BaseFile->GetSize(outSize));
  }

  virtual Result DoOperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override {
    return ConvertResult(m_BaseFile->OperateRange(outBuffer, outBufferSize,
      operationId, offset, size, inBuffer, inBufferSize));
  }

  std::unique_ptr<fsa::IFile> m_BaseFile;
};

inline bool IsRootPath(const Path& path) {
  const char* string = path.GetString();
  return string[0] == '/' && string[1] == '\0';
}

}

Result RamDiskFileSystem::GetBufferSize(size_t* outSize, size_t spaceSize) {
  NN_FS_RESULT_THROW_UNLESS(
    spaceSize <= static_cast<size_t>(-RamDiskBlockSize * 3),
    ResultInvalidSize());
  const size_t blockCount =
    (spaceSize + RamDiskBlockSize - 1) / RamDiskBlockSize + 2;
  const size_t metaSize = RamDiskControlAreaSize +
    ((dbm::AllocationTable::QuerySize(static_cast<uint32_t>(blockCount)) +
      RamDiskBlockSize - 1) & ~(RamDiskBlockSize - 1));
  const size_t dataSize = blockCount * RamDiskBlockSize;
  NN_FS_RESULT_THROW_UNLESS(metaSize + dataSize >= metaSize,
    ResultInvalidSize());
  *outSize = metaSize + dataSize;
  return ResultSuccess();
}

RamDiskFileSystem::RamDiskFileSystem(std::unique_ptr<IStorage>&& storage)
  : m_Storage(std::move(storage)), m_Core() {}

Result RamDiskFileSystem::FormatAndMount() {
  int64_t storageSize = 0;
  NN_FS_RESULT_DO(m_Storage->GetSize(&storageSize));

  int64_t allocationTableSize = dbm::AllocationTable::QuerySize(0);
  uint64_t blockCount =
    (storageSize - RamDiskControlAreaSize) / RamDiskBlockSize;
  for (; ; --blockCount) {
    NN_FS_RESULT_THROW_UNLESS(blockCount >= 2, ResultInvalidSize());
    allocationTableSize = (dbm::AllocationTable::QuerySize(
      static_cast<uint32_t>(blockCount)) + RamDiskBlockSize - 1) &
      ~(RamDiskBlockSize - 1);
    if (static_cast<int64_t>(blockCount * RamDiskBlockSize) +
      allocationTableSize + RamDiskControlAreaSize <= storageSize) {
      break;
    }
  }

  const int64_t dataOffset = RamDiskControlAreaSize + allocationTableSize;
  const int64_t dataSize = blockCount * RamDiskBlockSize;
  NN_FS_RESULT_DO(ConvertResult(save::SaveDataFileSystemCore::Format(
    SubStorage(m_Storage.get(), 0, RamDiskControlAreaSize),
    SubStorage(m_Storage.get(), RamDiskControlAreaSize, allocationTableSize),
    SubStorage(m_Storage.get(), dataOffset, dataSize), RamDiskBlockSize,
    nullptr)));
  return ConvertResult(m_Core.Initialize(
    SubStorage(m_Storage.get(), 0, RamDiskControlAreaSize),
    SubStorage(m_Storage.get(), RamDiskControlAreaSize, allocationTableSize),
    SubStorage(m_Storage.get(), dataOffset, dataSize), nullptr));
}

Result RamDiskFileSystem::DoCreateFile(const Path& path, int64_t size,
  int option) {
  // The original folds ConvertResult for the size check of CreateFile.
  NN_FS_RESULT_THROW_UNLESS(size >= 0, ResultInvalidSize());
  return ConvertResult(m_Core.CreateFile(path, size, option));
}

Result RamDiskFileSystem::DoDeleteFile(const Path& path) {
  return ConvertResult(m_Core.DeleteFile(path));
}

Result RamDiskFileSystem::DoCreateDirectory(const Path& path) {
  NN_FS_RESULT_THROW_UNLESS(!IsRootPath(path), ResultPathAlreadyExists());
  return ConvertResult(m_Core.CreateDirectory(path));
}

Result RamDiskFileSystem::DoDeleteDirectory(const Path& path) {
  NN_FS_RESULT_THROW_UNLESS(!IsRootPath(path), ResultDirectoryUndeletable());
  return ConvertResult(m_Core.DeleteDirectory(path));
}

Result RamDiskFileSystem::DoDeleteDirectoryRecursively(const Path& path) {
  NN_FS_RESULT_THROW_UNLESS(!IsRootPath(path), ResultDirectoryUndeletable());
  return ConvertResult(m_Core.DeleteDirectoryRecursively(path));
}

Result RamDiskFileSystem::DoCleanDirectoryRecursively(const Path& path) {
  return ConvertResult(m_Core.CleanDirectoryRecursively(path));
}

Result RamDiskFileSystem::DoRenameFile(const Path& currentPath,
  const Path& newPath) {
  return ConvertResult(m_Core.RenameFile(currentPath, newPath));
}

Result RamDiskFileSystem::DoRenameDirectory(const Path& currentPath,
  const Path& newPath) {
  PathFlags flags;
  NN_FS_RESULT_DO(PathFormatter::CheckPathFormat(currentPath.GetString(),
    flags));
  NN_FS_RESULT_DO(PathFormatter::CheckPathFormat(newPath.GetString(),
    flags));
  NN_FS_RESULT_THROW_UNLESS(
    !IsSubPath(currentPath.GetString(), newPath.GetString()),
    ResultDirectoryUnrenamable());
  return ConvertResult(m_Core.RenameDirectory(currentPath, newPath));
}

Result RamDiskFileSystem::DoGetEntryType(DirectoryEntryType* outType,
  const Path& path) {
  return ConvertResult(m_Core.GetEntryType(outType, path));
}

Result RamDiskFileSystem::DoOpenFile(std::unique_ptr<fsa::IFile>* outFile,
  const Path& path, OpenMode mode) {
  std::unique_ptr<fsa::IFile> baseFile;
  NN_FS_RESULT_DO(ConvertResult(m_Core.OpenFile(&baseFile, path, mode)));
  std::unique_ptr<fsa::IFile> file(new RamDiskFile(std::move(baseFile)));
  NN_FS_RESULT_THROW_UNLESS(file != nullptr,
    ResultAllocationMemoryFailedNew());
  *outFile = std::move(file);
  return ResultSuccess();
}

Result RamDiskFileSystem::DoOpenDirectory(
  std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  return ConvertResult(m_Core.OpenDirectory(outDirectory, path, mode));
}

Result RamDiskFileSystem::DoGetFreeSpaceSize(int64_t* outSize,
  const Path& path) {
  return ConvertResult(m_Core.GetFreeSpaceSize(outSize, path));
}

Result RamDiskFileSystem::DoGetTotalSpaceSize(int64_t* outSize,
  const Path& path) {
  return ConvertResult(m_Core.GetTotalSpaceSize(outSize, path));
}

Result RamDiskFileSystem::DoCommit() {
  return ResultSuccess();
}

Result RamDiskFileSystem::DoCommitProvisionally(int64_t counter) {
  static_cast<void>(counter);
  return ResultUnsupportedCommitProvisionallyForRamDisk();
}

Result RamDiskFileSystem::DoRollback() {
  return ResultSuccess();
}

Result RamDiskFileSystem::DoGetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  return m_Core.DoGetFileSystemAttribute(outAttribute);
}

}
