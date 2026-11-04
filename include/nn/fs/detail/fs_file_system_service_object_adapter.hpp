#pragma once

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"

namespace nn::fs::detail {

class FileSystemServiceObjectAdapter : public fsa::IFileSystem {
public:
  explicit FileSystemServiceObjectAdapter(
    nn::sf::SharedPointer<fssrv::sf::IFileSystem>&& fileSystem);

  static void* operator new(size_t size) noexcept {
    return Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> m_FileSystem;
  void* m_Reserved;
};

}
