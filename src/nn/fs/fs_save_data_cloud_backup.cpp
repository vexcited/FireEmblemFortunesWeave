#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_iterator.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"

namespace nn::fs {

Result OpenSaveDataTransferProhibiterForCloudBackUp(
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp>* outValue,
  ncm::ApplicationId applicationId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    detail::OpenSaveDataTransferProhibiterForCloudBackUp(outValue,
      applicationId));
  return ResultSuccess();
}

Result OpenSaveDataTransferProhibiterForCloudBackUp(
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp>* outValues,
  ncm::ApplicationId* applicationIds, int count) {
  for (int i = 0; i < count; ++i) {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(
      detail::OpenSaveDataTransferProhibiterForCloudBackUp(&outValues[i],
        applicationIds[i]));
  }
  return ResultSuccess();
}

Result GetCountOfApplicationAccessibleSaveDataOwnerId(int* outCount,
  ncm::ApplicationId applicationId, int programIndex) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  ncm::ApplicationId ownerId = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->ListAccessibleSaveDataOwnerId(
      nn::sf::Out<int32_t>(outCount),
      nn::sf::OutBuffer(&ownerId, sizeof(ownerId)),
      ncm::ProgramId{applicationId.value + programIndex}, 0, 0));
  return ResultSuccess();
}

Result GetOccupiedWorkSpaceSizeForCloudBackUp(int64_t* outSize) {
  SaveDataFilter filter = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(SaveDataFilter::Make(&filter,
    util::optional<uint64_t>(), util::optional<SaveDataType>(),
    util::optional<UserId>(), util::optional<uint64_t>(),
    util::optional<uint16_t>(),
    static_cast<uint8_t>(SaveDataRank::Secondary)));
  std::unique_ptr<SaveDataIterator> iterator;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::OpenSaveDataIterator(&iterator,
    SaveDataSpaceId::User, filter));
  int64_t totalSize = 0;
  while (true) {
    int64_t count = 0;
    SaveDataInfo info = {};
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::ReadSaveDataIteratorSaveDataInfo(
      &count, &info, iterator.get(), 1));
    if (count == 0) {
      break;
    }
    totalSize += info.rank == SaveDataRank::Secondary ? info.size : 0;
  }
  *outSize = totalSize;
  return ResultSuccess();
}

}
