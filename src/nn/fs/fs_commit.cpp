#include "nn/fs/fs_commit.hpp"

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/fs/fs_save_data_types.hpp"

namespace nn::fs {

namespace detail {

Result WriteSaveDataFileSystemExtraData(SaveDataSpaceId spaceId,
  SaveDataAttribute attribute, const SaveDataExtraData& extraData,
  const SaveDataExtraData& mask);

}

namespace {

constexpr Result ResultInvalidCommitOption() {
  return detail::MakeResult(6075);
}

const uint64_t AutoResolveCallerProgramId = 0xFFFFFFFFFFFFFFFE;
const uint32_t SaveDataFlags_Restore = 1 << 4;

#define NN_FS_COMMIT_FORMAT ", name: \"%s\", commit_option: 0x%X"

}

Result Commit(const char* name, const CommitOption& option) {
  detail::FileSystemAccessor* fileSystem = nullptr;
  Result result;
  NN_FS_ACCESS_LOG_UNLESS_SUCCESS(result, detail::Find(&fileSystem, name),
    NN_FS_COMMIT_FORMAT, name, option.flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);

  auto commitImpl = [=]() -> Result {
    const uint32_t flags = option.flags;
    if ((flags & (CommitOptionFlag_ClearRestoreFlag |
      CommitOptionFlag_SetRestoreFlag)) == 0) {
      return fileSystem->Commit();
    }
    NN_FS_RESULT_THROW_UNLESS(flags == CommitOptionFlag_ClearRestoreFlag ||
      flags == CommitOptionFlag_SetRestoreFlag, ResultInvalidCommitOption());

    SaveDataAttribute attribute = {};
    NN_FS_RESULT_DO(fileSystem->GetSaveDataAttribute(&attribute));
    if (attribute.programId.value == 0) {
      attribute.programId.value = AutoResolveCallerProgramId;
    }

    SaveDataExtraData extraDataMask = {};
    extraDataMask.flags = SaveDataFlags_Restore;
    SaveDataExtraData extraData = {};
    extraData.flags = flags == CommitOptionFlag_SetRestoreFlag ?
      SaveDataFlags_Restore : 0;
    return detail::WriteSaveDataFileSystemExtraData(SaveDataSpaceId::User,
      attribute, extraData, extraDataMask);
  };

  NN_FS_ACCESS_LOG_FILE_SYSTEM(result, fileSystem, nullptr, commitImpl(),
    NN_FS_COMMIT_FORMAT, name, option.flags);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
