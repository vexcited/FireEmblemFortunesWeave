#include "nn/fs/fsa/fs_registrar.hpp"

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_path.hpp"

namespace nn::fs::fsa {

namespace {

constexpr Result ResultAllocationMemoryFailedInRegisterA() {
  return fs::detail::MakeResult(3365);
}

constexpr Result ResultAllocationMemoryFailedInRegisterB() {
  return fs::detail::MakeResult(3366);
}

class UnmountHookFileSystem : public IFileSystem, public fs::detail::Newable {
public:
  UnmountHookFileSystem(std::unique_ptr<IFileSystem>&& fileSystem,
    std::unique_ptr<IUnmountHookInvoker>&& unmountHookInvoker)
    : m_FileSystem(std::move(fileSystem)),
      m_UnmountHookInvoker(std::move(unmountHookInvoker)) {}

  ~UnmountHookFileSystem() override {
    if (m_UnmountHookInvoker != nullptr) {
      m_UnmountHookInvoker->Invoke();
      m_UnmountHookInvoker.reset();
    }
  }

private:
  Result DoCreateFile(const Path& path, int64_t size, int option) override {
    return m_FileSystem->CreateFile(path, size, option);
  }

  Result DoDeleteFile(const Path& path) override {
    return m_FileSystem->DeleteFile(path);
  }

  Result DoCreateDirectory(const Path& path) override {
    return m_FileSystem->CreateDirectory(path);
  }

  Result DoDeleteDirectory(const Path& path) override {
    return m_FileSystem->DeleteDirectory(path);
  }

  Result DoDeleteDirectoryRecursively(const Path& path) override {
    return m_FileSystem->DeleteDirectoryRecursively(path);
  }

  Result DoCleanDirectoryRecursively(const Path& path) override {
    return m_FileSystem->CleanDirectoryRecursively(path);
  }

  Result DoRenameFile(const Path& currentPath, const Path& newPath) override {
    return m_FileSystem->RenameFile(currentPath, newPath);
  }

  Result DoRenameDirectory(const Path& currentPath,
    const Path& newPath) override {
    return m_FileSystem->RenameDirectory(currentPath, newPath);
  }

  Result DoGetEntryType(DirectoryEntryType* outType,
    const Path& path) override {
    return m_FileSystem->GetEntryType(outType, path);
  }

  Result DoGetFreeSpaceSize(int64_t* outSize, const Path& path) override {
    return m_FileSystem->GetFreeSpaceSize(outSize, path);
  }

  Result DoGetTotalSpaceSize(int64_t* outSize, const Path& path) override {
    return m_FileSystem->GetTotalSpaceSize(outSize, path);
  }

  Result DoOpenFile(std::unique_ptr<IFile>* outFile, const Path& path,
    OpenMode mode) override {
    return m_FileSystem->OpenFile(outFile, path, mode);
  }

  Result DoOpenDirectory(std::unique_ptr<IDirectory>* outDirectory,
    const Path& path, OpenDirectoryMode mode) override {
    return m_FileSystem->OpenDirectory(outDirectory, path, mode);
  }

  Result DoCommit() override {
    return m_FileSystem->Commit();
  }

  Result DoCommitProvisionally(int64_t counter) override {
    return m_FileSystem->CommitProvisionally(counter);
  }

  Result DoRollback() override {
    return m_FileSystem->Rollback();
  }

  Result DoFlush() override {
    return m_FileSystem->Flush();
  }

  Result DoGetFileTimeStampRaw(FileTimeStampRaw* outTimeStamp,
    const Path& path) override {
    return m_FileSystem->GetFileTimeStampRaw(outTimeStamp, path);
  }

  Result DoQueryEntry(char* outBuffer, size_t outBufferSize,
    const char* inBuffer, size_t inBufferSize, QueryId queryId,
    const Path& path) override {
    return m_FileSystem->QueryEntry(outBuffer, outBufferSize, inBuffer,
      inBufferSize, queryId, path);
  }

  Result DoGetFileSystemAttribute(FileSystemAttribute* outAttribute) override {
    return m_FileSystem->GetFileSystemAttribute(outAttribute);
  }

  std::unique_ptr<IFileSystem> m_FileSystem;
  std::unique_ptr<IUnmountHookInvoker> m_UnmountHookInvoker;
};

}

Result Register(const char* name, std::unique_ptr<IFileSystem>&& fileSystem) {
  std::unique_ptr<fs::detail::FileSystemAccessor> accessor(
    new fs::detail::FileSystemAccessor(name, nullptr, std::move(fileSystem),
      std::unique_ptr<ICommonMountNameGenerator>(),
      std::unique_ptr<ISaveDataAttributeGetter>()));
  NN_FS_RESULT_THROW_UNLESS(accessor != nullptr,
    ResultAllocationMemoryFailedInRegisterA());
  return fs::detail::Register(std::move(accessor));
}

Result Register(const char* name, std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator) {
  std::unique_ptr<fs::detail::FileSystemAccessor> accessor(
    new fs::detail::FileSystemAccessor(name, nullptr, std::move(fileSystem),
      std::move(generator), std::unique_ptr<ISaveDataAttributeGetter>()));
  NN_FS_RESULT_THROW_UNLESS(accessor != nullptr,
    ResultAllocationMemoryFailedInRegisterB());
  return fs::detail::Register(std::move(accessor));
}

Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache) {
  return Register(name, multiCommitTarget, std::move(fileSystem),
    std::move(generator), std::unique_ptr<ISaveDataAttributeGetter>(),
    useDataCache, storageForPurgeFileDataCache, usePathCache,
    std::unique_ptr<IUnmountHookInvoker>());
}

// The SDK does not inline this into the other overloads.
__attribute__((noinline)) Result Register(const char* name,
  IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  std::unique_ptr<ISaveDataAttributeGetter>&& attributeGetter,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache,
  std::unique_ptr<IUnmountHookInvoker>&& unmountHookInvoker) {
  if (unmountHookInvoker != nullptr) {
    fileSystem.reset(new UnmountHookFileSystem(
      std::unique_ptr<IFileSystem>(std::move(fileSystem)),
      std::move(unmountHookInvoker)));
    NN_FS_RESULT_THROW_UNLESS(fileSystem != nullptr,
      ResultAllocationMemoryFailedInRegisterB());
  }

  std::unique_ptr<fs::detail::FileSystemAccessor> accessor(
    new fs::detail::FileSystemAccessor(name, multiCommitTarget,
      std::move(fileSystem), std::move(generator),
      std::move(attributeGetter)));
  NN_FS_RESULT_THROW_UNLESS(accessor != nullptr,
    ResultAllocationMemoryFailedInRegisterB());
  accessor->SetFileDataCacheAttachable(useDataCache,
    storageForPurgeFileDataCache);
  accessor->SetPathBasedFileDataCacheAttachable(usePathCache);
  return fs::detail::Register(std::move(accessor));
}

Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache,
  std::unique_ptr<IUnmountHookInvoker>&& unmountHookInvoker) {
  return Register(name, multiCommitTarget, std::move(fileSystem),
    std::move(generator), std::unique_ptr<ISaveDataAttributeGetter>(),
    useDataCache, storageForPurgeFileDataCache, usePathCache,
    std::move(unmountHookInvoker));
}

Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  std::unique_ptr<ISaveDataAttributeGetter>&& attributeGetter,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache) {
  return Register(name, multiCommitTarget, std::move(fileSystem),
    std::move(generator), std::move(attributeGetter), useDataCache,
    storageForPurgeFileDataCache, usePathCache,
    std::unique_ptr<IUnmountHookInvoker>());
}

void Unregister(const char* name) {
  fs::detail::Unregister(name);
}

}
