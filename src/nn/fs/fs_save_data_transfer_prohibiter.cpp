#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"

namespace nn::fs {

inline SaveDataTransferProhibiterForCloudBackUp::
  SaveDataTransferProhibiterForCloudBackUp(
  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferProhibiter>&&
    prohibiter) {
  m_Interface.Swap(prohibiter);
}

namespace detail {

Result OpenSaveDataTransferProhibiterForCloudBackUp(
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp>* outValue,
  ncm::ApplicationId applicationId) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferProhibiter> prohibiter;
  NN_FS_RESULT_DO(fileSystemProxy->OpenSaveDataTransferProhibiter(
    nn::sf::Out<
      nn::sf::SharedPointer<fssrv::sf::ISaveDataTransferProhibiter>>(
        &prohibiter), applicationId));
  std::unique_ptr<SaveDataTransferProhibiterForCloudBackUp> object(
    new SaveDataTransferProhibiterForCloudBackUp(std::move(prohibiter)));
  NN_FS_RESULT_THROW_UNLESS(object != nullptr,
    ResultAllocationMemoryFailedNew());
  *outValue = std::move(object);
  return ResultSuccess();
}

}

}
