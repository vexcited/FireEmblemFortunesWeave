#pragma once

#include <memory>

#include "nn/fs/fs_types.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/result.hpp"

namespace nn::fs {

namespace detail {

Result OpenHostFileSystem(std::unique_ptr<fsa::IFileSystem>* outFileSystem,
  const char* name, const char* rootPath, MountHostOption option);

}

Result MountHost(const char* name, const char* rootPath);
Result MountHost(const char* name, const char* rootPath,
  const MountHostOption& option);
Result MountHostForSystem(const char* name, const char* rootPath);
Result MountHostRoot();
Result MountHostRoot(const MountHostOption& option);
void UnmountHostRoot();
bool IsHostRootMounted();

}
