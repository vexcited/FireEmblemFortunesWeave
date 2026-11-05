#include "nn/fs/save/fs_save_exclusive_file_system.hpp"

#include "nn/fs/fs_directory.hpp"

namespace nn::fs::save {

namespace {

constexpr Result ResultTargetLocked() {
  return fs::detail::MakeResult(7);
}

}

Result ExclusiveFile::DoRead(size_t* outSize, int64_t offset, void* buffer,
  size_t size, const ReadOption& option) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseFile->Read(outSize, offset, buffer, size, option);
}

Result ExclusiveFile::DoWrite(int64_t offset, const void* buffer, size_t size,
  const WriteOption& option) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseFile->Write(offset, buffer, size, option);
}

Result ExclusiveFile::DoGetSize(int64_t* outSize) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseFile->GetSize(outSize);
}

Result ExclusiveFile::DoSetSize(int64_t size) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseFile->SetSize(size);
}

Result ExclusiveFile::DoFlush() {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseFile->Flush();
}

Result ExclusiveFile::DoOperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size, const void* inBuffer,
  size_t inBufferSize) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseFile->OperateRange(outBuffer, outBufferSize, operationId,
    offset, size, inBuffer, inBufferSize);
}

Result ExclusiveDirectory::DoRead(int64_t* outCount, DirectoryEntry* entries,
  int64_t count) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseDirectory->Read(outCount, entries, count);
}

Result ExclusiveDirectory::DoGetEntryCount(int64_t* outCount) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_BaseDirectory->GetEntryCount(outCount);
}

Result ExclusiveDirectory::NotifyDelete(int64_t id, bool isFile) {
  return m_BaseDirectory->NotifyDelete(id, isFile);
}

ExclusiveFileSystem::ExclusiveFileSystem()
  : m_Mutex(), m_pObjectList(nullptr), m_pBaseFileSystem(nullptr) {}

ExclusiveFileSystem::~ExclusiveFileSystem() {
  if (m_Mutex != nullptr) {
    ScopedSdkMutexLock lock(*m_Mutex);
    while (m_pObjectList != nullptr) {
      m_pObjectList->NotifyFileSystemFinalized();
      m_pObjectList = m_pObjectList->m_pNext;
    }
  }
}

Result ExclusiveFileSystem::DoCreateFile(const Path& path, int64_t size,
  int option) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->CreateFile(path, size, option);
}

Result ExclusiveFileSystem::DoCreateDirectory(const Path& path) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->CreateDirectory(path);
}

Result ExclusiveFileSystem::DoOpenFile(std::unique_ptr<fsa::IFile>* outFile,
  const Path& path, OpenMode mode) {
  NN_FS_RESULT_THROW_UNLESS(outFile != nullptr, ResultNullptrArgument());
  ScopedSdkMutexLock lock(*m_Mutex);

  int64_t id = 0;
  const Result result = m_pBaseFileSystem->GetFileIdFromPath(&id, path, true);
  if (IsFailure(result)) {
    if (!IsResultIncluded(result, ResultIncompatiblePath())) {
      return result;
    }
    id = -1;
  }
  else {
    for (IExclusiveObject* object = m_pObjectList; object != nullptr;
      object = object->m_pNext) {
      if (object->IsFile() && object->m_Id == id &&
        ((object->GetOpenMode() | mode) & OpenMode_Write) != 0) {
        return ResultTargetLocked();
      }
    }
  }

  std::unique_ptr<IExclusiveFileBase> baseFile;
  NN_FS_RESULT_DO(m_pBaseFileSystem->OpenBaseFile(&baseFile, path, mode));

  std::unique_ptr<ExclusiveFile> file(
    new ExclusiveFile(this, id, std::move(baseFile), m_Mutex));
  NN_FS_RESULT_THROW_UNLESS(file != nullptr,
    ResultAllocationMemoryFailedNew());
  *outFile = std::move(file);
  return ResultSuccess();
}

Result ExclusiveFileSystem::DoOpenDirectory(
  std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  NN_FS_RESULT_THROW_UNLESS(outDirectory != nullptr, ResultNullptrArgument());
  ScopedSdkMutexLock lock(*m_Mutex);

  std::unique_ptr<IExclusiveDirectoryBase> baseDirectory;
  NN_FS_RESULT_DO(m_pBaseFileSystem->OpenBaseDirectory(&baseDirectory, path,
    mode));

  int64_t id = 0;
  NN_FS_RESULT_DO(m_pBaseFileSystem->GetFileIdFromPath(&id, path, false));

  std::unique_ptr<ExclusiveDirectory> directory(
    new ExclusiveDirectory(this, id, std::move(baseDirectory), m_Mutex));
  NN_FS_RESULT_THROW_UNLESS(directory != nullptr,
    ResultAllocationMemoryFailedNew());
  *outDirectory = std::move(directory);
  return ResultSuccess();
}

Result ExclusiveFileSystem::DoDeleteFile(const Path& path) {
  ScopedSdkMutexLock lock(*m_Mutex);

  int64_t id = 0;
  const Result result = m_pBaseFileSystem->GetFileIdFromPath(&id, path, true);
  if (IsFailure(result)) {
    if (!IsResultIncluded(result, ResultIncompatiblePath())) {
      return result;
    }
  }
  else {
    for (IExclusiveObject* object = m_pObjectList; object != nullptr;
      object = object->m_pNext) {
      if (object->IsFile()) {
        if (object->m_Id == id) {
          // The open mode is queried but not used for the decision.
          object->GetOpenMode();
          return ResultTargetLocked();
        }
      }
      else {
        NN_FS_RESULT_DO(object->NotifyDelete(id, true));
      }
    }
  }
  return m_pBaseFileSystem->DeleteFile(path);
}

Result ExclusiveFileSystem::DoDeleteDirectory(const Path& path) {
  ScopedSdkMutexLock lock(*m_Mutex);

  int64_t id;
  bool isDirectoryLocked = false;
  const Result result = CheckAccessPolicy(&id, &isDirectoryLocked, path,
    OpenMode_Write, false, true);
  if (IsFailure(result)) {
    if (IsResultIncluded(result, ResultTargetLocked()) && !isDirectoryLocked) {
      return ResultDirectoryNotEmpty();
    }
    return result;
  }
  return m_pBaseFileSystem->DeleteDirectory(path);
}

Result ExclusiveFileSystem::CheckAccessPolicy(int64_t* outId,
  bool* outIsDirectoryLocked, const Path& path, int mode, bool isFile,
  bool isDeletion) {
  int64_t id = 0;
  const Result result =
    m_pBaseFileSystem->GetFileIdFromPath(&id, path, isFile);
  if (IsFailure(result)) {
    if (IsResultIncluded(result, ResultIncompatiblePath())) {
      *outId = -1;
      return ResultSuccess();
    }
    return result;
  }
  *outId = id;
  *outIsDirectoryLocked = false;

  if (isFile) {
    for (IExclusiveObject* object = m_pObjectList; object != nullptr;
      object = object->m_pNext) {
      if (object->IsFile()) {
        if (object->m_Id == id &&
          ((object->GetOpenMode() | mode) & OpenMode_Write) != 0) {
          return ResultTargetLocked();
        }
      }
      else if (isDeletion) {
        NN_FS_RESULT_DO(object->NotifyDelete(id, true));
      }
    }
    return ResultSuccess();
  }

  if (isDeletion) {
    Result checkResult = ResultSuccess();
    for (IExclusiveObject* object = m_pObjectList; object != nullptr;
      object = object->m_pNext) {
      if ((mode & OpenMode_Write) != 0 && !object->IsFile() &&
        object->m_Id == id) {
        *outIsDirectoryLocked = true;
        return ResultTargetLocked();
      }

      bool isSubEntry = false;
      NN_FS_RESULT_DO(m_pBaseFileSystem->CheckSubEntry(&isSubEntry, id,
        object->m_Id, object->IsFile()));
      if (isSubEntry) {
        checkResult = ResultTargetLocked();
      }
      else if (IsSuccess(checkResult) && !object->IsFile()) {
        NN_FS_RESULT_DO(object->NotifyDelete(id, false));
      }
    }
    return checkResult;
  }

  if ((mode & OpenMode_Write) != 0) {
    for (IExclusiveObject* object = m_pObjectList; object != nullptr;
      object = object->m_pNext) {
      if (!object->IsFile() && object->m_Id == id) {
        *outIsDirectoryLocked = true;
        return ResultTargetLocked();
      }
    }
  }
  return ResultSuccess();
}

bool ExclusiveFileSystem::CheckEntryExistence(const Path& path) {
  DirectoryEntryType type = DirectoryEntryType_Directory;
  return IsSuccess(m_pBaseFileSystem->GetEntryType(&type, path));
}

Result ExclusiveFileSystem::DoGetEntryType(DirectoryEntryType* outType,
  const Path& path) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->GetEntryType(outType, path);
}

Result ExclusiveFileSystem::DoCommit() {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->Commit();
}

Result ExclusiveFileSystem::DoGetFreeSpaceSize(int64_t* outSize,
  const Path& path) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->GetFreeSpaceSize(outSize, path);
}

Result ExclusiveFileSystem::DoGetTotalSpaceSize(int64_t* outSize,
  const Path& path) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->GetTotalSpaceSize(outSize, path);
}

Result ExclusiveFileSystem::DoGetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  ScopedSdkMutexLock lock(*m_Mutex);
  return m_pBaseFileSystem->GetFileSystemAttribute(outAttribute);
}

bool ExclusiveFileSystem::HasOpenedFiles(int mode) const {
  ScopedSdkMutexLock lock(*m_Mutex);
  for (IExclusiveObject* object = m_pObjectList; object != nullptr;
    object = object->m_pNext) {
    if (object->IsFile() && (object->GetOpenMode() & mode) != 0) {
      return true;
    }
  }
  return false;
}

bool ExclusiveFileSystem::HasOpenedEntries(bool* outHasOpenedFile) const {
  ScopedSdkMutexLock lock(*m_Mutex);
  if (m_pObjectList != nullptr) {
    *outHasOpenedFile = m_pObjectList->IsFile();
  }
  return m_pObjectList != nullptr;
}

void ExclusiveFileSystem::LinkObject(IExclusiveObject* object) {
  object->m_pNext = m_pObjectList;
  m_pObjectList = object;
}

void ExclusiveFileSystem::UnlinkObject(IExclusiveObject* object) {
  if (m_pObjectList == nullptr) {
    return;
  }
  if (m_pObjectList == object) {
    m_pObjectList = object->m_pNext;
    return;
  }
  for (IExclusiveObject* previous = m_pObjectList;
    previous->m_pNext != nullptr; previous = previous->m_pNext) {
    if (previous->m_pNext == object) {
      previous->m_pNext = object->m_pNext;
      return;
    }
  }
}

}
