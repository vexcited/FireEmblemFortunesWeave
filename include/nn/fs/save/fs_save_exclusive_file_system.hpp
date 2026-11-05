#pragma once

#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_path.hpp"
#include "nn/fs/fsa/fs_idirectory.hpp"
#include "nn/fs/fsa/fs_ifile.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::fs::save {

constexpr Result ResultIncompatiblePath() {
  return fs::detail::MakeResult(6033);
}

constexpr Result ResultDirectoryNotEmpty() {
  return fs::detail::MakeResult(8);
}

class ScopedSdkMutexLock {
public:
  explicit ScopedSdkMutexLock(os::SdkMutexType& mutex) : m_Mutex(mutex) {
    m_Mutex.Lock();
  }

  ~ScopedSdkMutexLock() {
    m_Mutex.Unlock();
  }

private:
  os::SdkMutexType& m_Mutex;
};

class ExclusiveFileSystem;

class IExclusiveObject {
public:
  explicit IExclusiveObject(ExclusiveFileSystem* fileSystem)
    : m_pNext(nullptr), m_Id(0), m_pFileSystem(fileSystem) {}

  virtual ~IExclusiveObject() {}

  virtual int GetOpenMode() const = 0;
  virtual bool IsFile() const = 0;
  virtual Result NotifyDelete(int64_t id, bool isFile) = 0;

  virtual void NotifyFileSystemFinalized() {
    m_pFileSystem = nullptr;
  }

  IExclusiveObject* m_pNext;
  int64_t m_Id;
  ExclusiveFileSystem* m_pFileSystem;
};

class IExclusiveFileBase : public fsa::IFile {
public:
  virtual int GetOpenMode() const = 0;
};

class IExclusiveDirectoryBase : public fsa::IDirectory {
public:
  virtual Result NotifyDelete(int64_t id, bool isFile) = 0;
};

class IExclusiveFileSystemBase : public fsa::IFileSystem {
public:
  virtual Result OpenBaseFile(std::unique_ptr<IExclusiveFileBase>* outFile,
    const Path& path, OpenMode mode) = 0;
  virtual Result OpenBaseDirectory(
    std::unique_ptr<IExclusiveDirectoryBase>* outDirectory, const Path& path,
    OpenDirectoryMode mode) = 0;
  virtual Result GetFileIdFromPath(int64_t* outId, const Path& path,
    bool isFile) = 0;
  virtual Result CheckSubEntry(bool* outIsSubEntry, int64_t id,
    int64_t childId, bool isFile) const = 0;
};

class ExclusiveFileSystem : public fsa::IFileSystem {
public:
  ExclusiveFileSystem();
  ~ExclusiveFileSystem() override;

  Result Initialize(IExclusiveFileSystemBase* baseFileSystem);

  bool HasOpenedFiles(int mode) const;
  bool HasOpenedEntries(bool* outHasOpenedFile) const;

  void LinkObject(IExclusiveObject* object);
  void UnlinkObject(IExclusiveObject* object);

private:
  Result DoCreateFile(const Path& path, int64_t size, int option) override;
  Result DoDeleteFile(const Path& path) override;
  Result DoCreateDirectory(const Path& path) override;
  Result DoDeleteDirectory(const Path& path) override;

  Result DoDeleteDirectoryRecursively(const Path& path) override {
    return DeleteDirectoryRecursivelyInternal(path, true);
  }

  Result DoCleanDirectoryRecursively(const Path& path) override {
    return DeleteDirectoryRecursivelyInternal(path, false);
  }

  Result DoRenameFile(const Path& currentPath, const Path& newPath) override;
  Result DoRenameDirectory(const Path& currentPath,
    const Path& newPath) override;
  Result DoGetEntryType(DirectoryEntryType* outType,
    const Path& path) override;
  Result DoGetFreeSpaceSize(int64_t* outSize, const Path& path) override;
  Result DoGetTotalSpaceSize(int64_t* outSize, const Path& path) override;
  Result DoOpenFile(std::unique_ptr<fsa::IFile>* outFile, const Path& path,
    OpenMode mode) override;
  Result DoOpenDirectory(std::unique_ptr<fsa::IDirectory>* outDirectory,
    const Path& path, OpenDirectoryMode mode) override;
  Result DoCommit() override;
  Result DoGetFileSystemAttribute(
    fsa::FileSystemAttribute* outAttribute) override;

  Result CheckAccessPolicy(int64_t* outId, bool* outIsDirectoryLocked,
    const Path& path, int mode, bool isFile, bool isDeletion);
  bool CheckEntryExistence(const Path& path);
  Result DeleteDirectoryRecursivelyInternal(const Path& path,
    bool deleteSelf);

  std::shared_ptr<os::SdkMutexType> m_Mutex;
  IExclusiveObject* m_pObjectList;
  IExclusiveFileSystemBase* m_pBaseFileSystem;
};

class ExclusiveFile : public fs::detail::Newable, public fsa::IFile,
  public IExclusiveObject {
public:
  ExclusiveFile(ExclusiveFileSystem* fileSystem, int64_t id,
    std::unique_ptr<IExclusiveFileBase>&& baseFile,
    std::shared_ptr<os::SdkMutexType> mutex)
    : IExclusiveObject(fileSystem), m_BaseFile(std::move(baseFile)),
      m_Mutex(mutex) {
    m_Id = id;
    m_pFileSystem->LinkObject(this);
  }

  ~ExclusiveFile() override {
    {
      ScopedSdkMutexLock lock(*m_Mutex);
      if (m_pFileSystem != nullptr) {
        m_pFileSystem->UnlinkObject(this);
      }
    }
  }

  int GetOpenMode() const override {
    return m_BaseFile->GetOpenMode();
  }

  bool IsFile() const override {
    return true;
  }

  Result NotifyDelete(int64_t id, bool isFile) override {
    static_cast<void>(id);
    static_cast<void>(isFile);
    return ResultSuccess();
  }

  void NotifyFileSystemFinalized() override {
    m_pFileSystem = nullptr;
  }

private:
  Result DoRead(size_t* outSize, int64_t offset, void* buffer, size_t size,
    const ReadOption& option) override;
  Result DoWrite(int64_t offset, const void* buffer, size_t size,
    const WriteOption& option) override;
  Result DoFlush() override;
  Result DoSetSize(int64_t size) override;
  Result DoGetSize(int64_t* outSize) override;
  Result DoOperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override;

  std::unique_ptr<IExclusiveFileBase> m_BaseFile;
  std::shared_ptr<os::SdkMutexType> m_Mutex;
};

class ExclusiveDirectory : public fs::detail::Newable, public fsa::IDirectory,
  public IExclusiveObject {
public:
  ExclusiveDirectory(ExclusiveFileSystem* fileSystem, int64_t id,
    std::unique_ptr<IExclusiveDirectoryBase>&& baseDirectory,
    std::shared_ptr<os::SdkMutexType> mutex)
    : IExclusiveObject(fileSystem), m_BaseDirectory(std::move(baseDirectory)),
      m_Mutex(mutex) {
    m_Id = id;
    m_pFileSystem->LinkObject(this);
  }

  ~ExclusiveDirectory() override {
    {
      ScopedSdkMutexLock lock(*m_Mutex);
      if (m_pFileSystem != nullptr) {
        m_pFileSystem->UnlinkObject(this);
      }
    }
  }

  int GetOpenMode() const override {
    return 0;
  }

  bool IsFile() const override {
    return false;
  }

  Result NotifyDelete(int64_t id, bool isFile) override;

  void NotifyFileSystemFinalized() override {
    m_pFileSystem = nullptr;
  }

private:
  Result DoRead(int64_t* outCount, DirectoryEntry* entries,
    int64_t count) override;
  Result DoGetEntryCount(int64_t* outCount) override;

  std::unique_ptr<IExclusiveDirectoryBase> m_BaseDirectory;
  std::shared_ptr<os::SdkMutexType> m_Mutex;
};

}
