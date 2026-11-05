#include "nn/crypto/is_same_bytes.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fs_rights_id.hpp"

namespace nn::fs {

namespace {

const RightsId InvalidRightsId = {};

}

bool IsRightsIdValid(const RightsId& rightsId) {
  return !crypto::IsSameBytes(&rightsId, &InvalidRightsId, sizeof(RightsId));
}

bool IsRightsIdSecondaryKeyEnabled(const RightsId& rightsId) {
  return (rightsId.data[14] & 0x10) != 0;
}

Result GetRightsId(RightsId* outRightsId, ncm::ProgramId programId,
  ncm::StorageId storageId) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outRightsId != nullptr,
    ResultNullptrArgument());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->GetRightsId(
    nn::sf::Out<RightsId>(outRightsId), programId, storageId));
  return ResultSuccess();
}

Result GetRightsId(RightsId* outRightsId, const char* path,
  ContentAttributes attributes) {
  uint8_t keyGeneration = 0;
  return GetRightsId(outRightsId, &keyGeneration, path, attributes);
}

[[gnu::noinline]] Result GetRightsId(RightsId* outRightsId,
  uint8_t* outKeyGeneration, const char* path, ContentAttributes attributes) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outRightsId != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outKeyGeneration != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(path != nullptr,
    ResultNullptrArgument());
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ConvertToFspPath(&sfPath, path));
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->GetRightsIdAndKeyGenerationByPath(
      nn::sf::Out<RightsId>(outRightsId),
      nn::sf::Out<uint8_t>(outKeyGeneration), sfPath, attributes));
  return ResultSuccess();
}

}
