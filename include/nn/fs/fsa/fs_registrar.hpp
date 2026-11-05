#pragma once

#include <memory>

#include "nn/fs/fsa/fs_icommon_mount_name_generator.hpp"
#include "nn/fs/fsa/fs_ifile_system.hpp"
#include "nn/fs/fsa/fs_imulti_commit_target.hpp"
#include "nn/fs/fsa/fs_isave_data_attribute_getter.hpp"
#include "nn/fs/fsa/fs_iunmount_hook_invoker.hpp"
#include "nn/result.hpp"

namespace nn::fs {

class IStorage;

}

namespace nn::fs::fsa {

Result Register(const char* name, std::unique_ptr<IFileSystem>&& fileSystem);
Result Register(const char* name, std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator);
Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache);
Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  std::unique_ptr<ISaveDataAttributeGetter>&& attributeGetter,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache);
Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache,
  std::unique_ptr<IUnmountHookInvoker>&& unmountHookInvoker);
Result Register(const char* name, IMultiCommitTarget* multiCommitTarget,
  std::unique_ptr<IFileSystem>&& fileSystem,
  std::unique_ptr<ICommonMountNameGenerator>&& generator,
  std::unique_ptr<ISaveDataAttributeGetter>&& attributeGetter,
  bool useDataCache, IStorage* storageForPurgeFileDataCache,
  bool usePathCache,
  std::unique_ptr<IUnmountHookInvoker>&& unmountHookInvoker);
void Unregister(const char* name);

}
