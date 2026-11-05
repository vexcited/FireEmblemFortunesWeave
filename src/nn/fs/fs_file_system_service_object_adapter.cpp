#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/fs_directory.hpp"
#include "nn/fs/fs_path.hpp"
#include "nn/util/string_util.hpp"

namespace nn::fs::detail {

namespace {

inline Result GetFspPath(fssrv::sf::FspPath* outPath, const Path& path) {
  const size_t length = util::Strlcpy(outPath->str, path.GetString(),
    static_cast<int>(sizeof(outPath->str)));
  if (length >= sizeof(outPath->str)) {
    return ResultTooLongPath();
  }
  return ResultSuccess();
}

}

FileSystemServiceObjectAdapter::FileSystemServiceObjectAdapter(
  nn::sf::SharedPointer<fssrv::sf::IFileSystem>&& fileSystem)
  : m_FileSystem(fileSystem) {}

FileSystemServiceObjectAdapter::~FileSystemServiceObjectAdapter() {}

Result FileSystemServiceObjectAdapter::DoCreateFile(const Path& path,
  int64_t size, int option) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->CreateFile(sfPath, size, option);
}

Result FileSystemServiceObjectAdapter::DoDeleteFile(const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->DeleteFile(sfPath);
}

Result FileSystemServiceObjectAdapter::DoCreateDirectory(const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->CreateDirectory(sfPath);
}

Result FileSystemServiceObjectAdapter::DoDeleteDirectory(const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->DeleteDirectory(sfPath);
}

Result FileSystemServiceObjectAdapter::DoDeleteDirectoryRecursively(
  const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->DeleteDirectoryRecursively(sfPath);
}

Result FileSystemServiceObjectAdapter::DoCleanDirectoryRecursively(
  const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->CleanDirectoryRecursively(sfPath);
}

Result FileSystemServiceObjectAdapter::DoRenameFile(const Path& currentPath,
  const Path& newPath) {
  fssrv::sf::FspPath currentSfPath = {};
  fssrv::sf::FspPath newSfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&currentSfPath, currentPath));
  NN_FS_RESULT_DO(GetFspPath(&newSfPath, newPath));
  return m_FileSystem->RenameFile(currentSfPath, newSfPath);
}

Result FileSystemServiceObjectAdapter::DoRenameDirectory(
  const Path& currentPath, const Path& newPath) {
  fssrv::sf::FspPath currentSfPath = {};
  fssrv::sf::FspPath newSfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&currentSfPath, currentPath));
  NN_FS_RESULT_DO(GetFspPath(&newSfPath, newPath));
  return m_FileSystem->RenameDirectory(currentSfPath, newSfPath);
}

Result FileSystemServiceObjectAdapter::DoGetEntryType(
  DirectoryEntryType* outType, const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->GetEntryType(
    nn::sf::Out<uint32_t>(reinterpret_cast<uint32_t*>(outType)), sfPath);
}

Result FileSystemServiceObjectAdapter::DoGetFreeSpaceSize(int64_t* outSize,
  const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->GetFreeSpaceSize(nn::sf::Out<int64_t>(outSize),
    sfPath);
}

Result FileSystemServiceObjectAdapter::DoGetTotalSpaceSize(int64_t* outSize,
  const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->GetTotalSpaceSize(nn::sf::Out<int64_t>(outSize),
    sfPath);
}

Result FileSystemServiceObjectAdapter::DoOpenFile(
  std::unique_ptr<fsa::IFile>* outFile, const Path& path, OpenMode mode) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  nn::sf::SharedPointer<fssrv::sf::IFile> file;
  NN_FS_RESULT_DO(m_FileSystem->OpenFile(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFile>>(&file), sfPath,
    static_cast<uint32_t>(mode)));
  outFile->reset(new FileServiceObjectAdapter(std::move(file)));
  NN_FS_RESULT_THROW_UNLESS(*outFile != nullptr,
    ResultAllocationMemoryFailedNew());
  return ResultSuccess();
}

Result FileSystemServiceObjectAdapter::DoOpenDirectory(
  std::unique_ptr<fsa::IDirectory>* outDirectory, const Path& path,
  OpenDirectoryMode mode) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  nn::sf::SharedPointer<fssrv::sf::IDirectory> directory;
  NN_FS_RESULT_DO(m_FileSystem->OpenDirectory(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IDirectory>>(&directory),
    sfPath, static_cast<uint32_t>(mode)));
  outDirectory->reset(new DirectoryServiceObjectAdapter(std::move(directory)));
  NN_FS_RESULT_THROW_UNLESS(*outDirectory != nullptr,
    ResultAllocationMemoryFailedNew());
  return ResultSuccess();
}

Result FileSystemServiceObjectAdapter::DoCommit() {
  return m_FileSystem->Commit();
}

Result FileSystemServiceObjectAdapter::DoGetFileTimeStampRaw(
  FileTimeStampRaw* outTimeStamp, const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->GetFileTimeStampRaw(
    nn::sf::Out<FileTimeStampRaw>(outTimeStamp), sfPath);
}

Result FileSystemServiceObjectAdapter::DoQueryEntry(char* outBuffer,
  size_t outBufferSize, const char* inBuffer, size_t inBufferSize,
  fsa::QueryId queryId, const Path& path) {
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(GetFspPath(&sfPath, path));
  return m_FileSystem->QueryEntry(nn::sf::OutBuffer(outBuffer, outBufferSize),
    nn::sf::InBuffer(inBuffer, inBufferSize), static_cast<int32_t>(queryId),
    sfPath);
}

Result FileSystemServiceObjectAdapter::DoGetFileSystemAttribute(
  fsa::FileSystemAttribute* outAttribute) {
  return m_FileSystem->GetFileSystemAttribute(
    nn::sf::Out<fsa::FileSystemAttribute>(outAttribute));
}

}
