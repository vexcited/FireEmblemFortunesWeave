#include "nn/fs/detail/fs_file_system_accessor.hpp"

#include "nn/fs/fsa/fs_idirectory.hpp"

namespace nn::fs::detail {

DirectoryAccessor::DirectoryAccessor(
  std::unique_ptr<fsa::IDirectory>&& directory, FileSystemAccessor& parent)
  : m_Impl(std::move(directory)), m_Parent(parent) {}

DirectoryAccessor::~DirectoryAccessor() {
  m_Impl.reset();
  m_Parent.NotifyCloseDirectory(this);
}

Result DirectoryAccessor::Read(int64_t* outCount, DirectoryEntry* entries,
  int64_t count) {
  return m_Impl->Read(outCount, entries, count);
}

Result DirectoryAccessor::GetEntryCount(int64_t* outCount) {
  return m_Impl->GetEntryCount(outCount);
}

}
