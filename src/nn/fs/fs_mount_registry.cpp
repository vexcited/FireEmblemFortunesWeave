#include "nn/fs/detail/fs_file_system_accessor.hpp"

#include <utility>

namespace nn::fs::detail {

namespace {

MountTable g_MountTable;

}

Result Register(std::unique_ptr<FileSystemAccessor>&& accessor) {
  return g_MountTable.Mount(std::move(accessor));
}

Result Find(FileSystemAccessor** out, const char* name) {
  return g_MountTable.Find(out, name);
}

void Unregister(const char* name) {
  g_MountTable.Unmount(name);
}

}
