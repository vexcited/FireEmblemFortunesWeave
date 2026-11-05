#include "nn/fs/save/fs_save_data_file_system_core.hpp"

namespace nn::fs::save {

Result SaveDataFileSystemCore::Format(SubStorage controlArea,
  SubStorage allocationTableMeta, SubStorage data, int64_t blockSize,
  IBufferManager* bufferManager) {
  return SaveDataFileSystemCoreImpl::Format(controlArea, allocationTableMeta,
    data, blockSize, bufferManager);
}

Result SaveDataFileSystemCore::ExpandControlArea(SubStorage controlArea,
  int64_t size) {
  return SaveDataFileSystemCoreImpl::ExpandControlArea(controlArea, size);
}

Result SaveDataFileSystemCore::ExpandMeta(SubStorage allocationTableMeta,
  int64_t blockSize, int64_t oldSize, int64_t newSize) {
  return SaveDataFileSystemCoreImpl::ExpandMeta(allocationTableMeta,
    blockSize, oldSize, newSize);
}

SaveDataFileSystemCore::SaveDataFileSystemCore()
  : m_ExclusiveFileSystem(), m_Impl() {}

SaveDataFileSystemCore::~SaveDataFileSystemCore() {}

Result SaveDataFileSystemCore::Initialize(SubStorage controlArea,
  SubStorage allocationTableMeta, SubStorage data,
  IBufferManager* bufferManager) {
  NN_FS_RESULT_DO(m_Impl.Initialize(controlArea, allocationTableMeta, data,
    bufferManager));
  return m_ExclusiveFileSystem.Initialize(&m_Impl);
}

void SaveDataFileSystemCore::Finalize() {
  m_Impl.Finalize();
}

Result SaveDataFileSystemCore::DoCreateFile(const Path& path, int64_t size,
  int option) {
  return m_ExclusiveFileSystem.CreateFile(path, size, option);
}

Result SaveDataFileSystemCore::DoCreateDirectory(const Path& path) {
  return m_ExclusiveFileSystem.CreateDirectory(path);
}

Result SaveDataFileSystemCore::DoOpenFile(
  std::unique_ptr<fsa::IFile>* outFile, const Path& path, OpenMode mode) {
  return m_ExclusiveFileSystem.OpenFile(outFile, path, mode);
}

Result SaveDataFileSystemCore::DoOpenDirectory(
  std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  return m_ExclusiveFileSystem.OpenDirectory(outDirectory, path, mode);
}

Result SaveDataFileSystemCore::DoDeleteFile(const Path& path) {
  return m_ExclusiveFileSystem.DeleteFile(path);
}

Result SaveDataFileSystemCore::DoDeleteDirectory(const Path& path) {
  return m_ExclusiveFileSystem.DeleteDirectory(path);
}

Result SaveDataFileSystemCore::DoDeleteDirectoryRecursively(
  const Path& path) {
  return m_ExclusiveFileSystem.DeleteDirectoryRecursively(path);
}

Result SaveDataFileSystemCore::DoCleanDirectoryRecursively(const Path& path) {
  return m_ExclusiveFileSystem.CleanDirectoryRecursively(path);
}

Result SaveDataFileSystemCore::DoRenameFile(const Path& currentPath,
  const Path& newPath) {
  return m_ExclusiveFileSystem.RenameFile(currentPath, newPath);
}

Result SaveDataFileSystemCore::DoRenameDirectory(const Path& currentPath,
  const Path& newPath) {
  return m_ExclusiveFileSystem.RenameDirectory(currentPath, newPath);
}

Result SaveDataFileSystemCore::DoGetEntryType(DirectoryEntryType* outType,
  const Path& path) {
  return m_ExclusiveFileSystem.GetEntryType(outType, path);
}

Result SaveDataFileSystemCore::DoCommit() {
  return m_ExclusiveFileSystem.Commit();
}

Result SaveDataFileSystemCore::DoGetFreeSpaceSize(int64_t* outSize,
  const Path& path) {
  return m_ExclusiveFileSystem.GetFreeSpaceSize(outSize, path);
}

Result SaveDataFileSystemCore::DoGetTotalSpaceSize(int64_t* outSize,
  const Path& path) {
  return m_ExclusiveFileSystem.GetTotalSpaceSize(outSize, path);
}

Result SaveDataFileSystemCore::DoGetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  return m_ExclusiveFileSystem.GetFileSystemAttribute(outAttribute);
}

bool SaveDataFileSystemCore::HasOpenedFiles(int mode) const {
  return m_ExclusiveFileSystem.HasOpenedFiles(mode);
}

bool SaveDataFileSystemCore::HasOpenedEntries(bool* outHasOpenedFile) const {
  return m_ExclusiveFileSystem.HasOpenedEntries(outHasOpenedFile);
}

Result SaveDataFileSystemCore::AcceptVisitor(
  IInternalStorageFileSystemVisitor* visitor) {
  return m_Impl.AcceptVisitor(visitor);
}

}
