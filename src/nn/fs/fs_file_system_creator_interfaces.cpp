#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_bis.hpp"
#include "nn/fs/fs_program.hpp"

namespace nn::fs {

namespace detail {

void InitializeFileSystemCreatorInterfaces() {}

}

void SetPseudoSaveData(bool isEnabled) {
  static_cast<void>(isEnabled);
}

void SetBisRootForHost(BisPartitionId id, const char* rootPath) {
  static_cast<void>(id);
  static_cast<void>(rootPath);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(ResultNotImplemented());
}

void SetDefaultSaveDataVersionAsNx() {}

void ResetDefaultSaveDataVersion() {}

}
