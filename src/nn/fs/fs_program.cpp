#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_program_registry_service_object.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fs_program.hpp"

namespace nn::fs {

Result GetProcessEnvironmentSource(ProcessEnvironmentSource* outSource,
  const char* path, ContentAttributes attributes) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outSource != nullptr,
    ResultNullptrArgument());
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ConvertToFspPath(&sfPath, path));
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->GetProcessEnvironmentSource(
      nn::sf::Out<ProcessEnvironmentSource>(outSource), sfPath, attributes));
  return ResultSuccess();
}

Result GetProgramId(ncm::ProgramId* outProgramId, const char* path,
  ContentAttributes attributes) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(outProgramId != nullptr,
    ResultNullptrArgument());
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ConvertToFspPath(&sfPath, path));
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->GetProgramId(
    nn::sf::Out<ncm::ProgramId>(outProgramId), sfPath, attributes));
  return ResultSuccess();
}

Result RegisterProgramIndexMapInfo(const ProgramIndexMapInfo* infos,
  int count) {
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(infos != nullptr,
    ResultNullptrArgument());
  if (count == 0) {
    return ResultSuccess();
  }
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->RegisterProgramIndexMapInfo(
      nn::sf::InBuffer(infos, sizeof(ProgramIndexMapInfo) * count), count));
  return ResultSuccess();
}

Result RegisterProgram(uint64_t processId, uint64_t programId,
  uint8_t storageId, const void* data, size_t dataSize,
  const void* descriptor, size_t descriptorSize,
  FsAccessControlRestrictionMode mode) {
  auto programRegistry = detail::GetProgramRegistryServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(programRegistry->SetCurrentProcess(0));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(programRegistry->RegisterProgram(
    processId, programId, storageId, nn::sf::InBuffer(data, dataSize),
    dataSize, nn::sf::InBuffer(descriptor, descriptorSize), descriptorSize,
    mode));
  return ResultSuccess();
}

void UnregisterProgram(uint64_t processId) {
  auto programRegistry = detail::GetProgramRegistryServiceObject();
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(programRegistry->SetCurrentProcess(0));
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(
    programRegistry->UnregisterProgram(processId));
}

}
