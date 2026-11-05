#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"

#include "nn/fs/fs_directory.hpp"

namespace nn::fs::detail {

DirectoryServiceObjectAdapter::DirectoryServiceObjectAdapter(
  nn::sf::SharedPointer<fssrv::sf::IDirectory>&& directory)
  : m_Directory(directory) {}

DirectoryServiceObjectAdapter::~DirectoryServiceObjectAdapter() {}

Result DirectoryServiceObjectAdapter::DoRead(int64_t* outCount,
  DirectoryEntry* entries, int64_t count) {
  return m_Directory->Read(nn::sf::Out<int64_t>(outCount),
    nn::sf::OutBuffer(entries, sizeof(DirectoryEntry) * count));
}

Result DirectoryServiceObjectAdapter::DoGetEntryCount(int64_t* outCount) {
  return m_Directory->GetEntryCount(nn::sf::Out<int64_t>(outCount));
}

}
