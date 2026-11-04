#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"

namespace nn::fs {

Result InvalidateBisCache() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->InvalidateBisCache());
  return ResultSuccess();
}

Result FormatBaseFileSystem(BaseFileSystemId id) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->FormatBaseFileSystem(id));
  return ResultSuccess();
}

Result CreatePaddingFile(int64_t size) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->CreatePaddingFile(size));
  return ResultSuccess();
}

Result DeleteAllPaddingFiles() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->DeleteAllPaddingFiles());
  return ResultSuccess();
}

Result SetDebugOption(DebugOptionKey key, int64_t value) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->SetDebugOption(key,
    value));
  return ResultSuccess();
}

Result UnsetDebugOption(DebugOptionKey key) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->UnsetDebugOption(key));
  return ResultSuccess();
}

Result RegisterUpdatePartition() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->RegisterUpdatePartition());
  return ResultSuccess();
}

Result NotifySystemDataUpdateEvent() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->NotifySystemDataUpdateEvent());
  return ResultSuccess();
}

bool IsInitializationMode() {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  bool isInitializationMode = false;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(
    fileSystemProxy->IsInitializationMode(
      nn::sf::Out<bool>(&isInitializationMode)));
  return isInitializationMode;
}

Result GetGlobalAccessLogMode(uint32_t* outMode) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->GetGlobalAccessLogMode(
    nn::sf::Out<uint32_t>(outMode)));
  return ResultSuccess();
}

Result SetGlobalAccessLogMode(uint32_t mode) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->SetGlobalAccessLogMode(
    mode));
  return ResultSuccess();
}

Result SetCurrentPosixTime(time::PosixTime posixTime, int32_t difference) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->SetCurrentPosixTimeWithTimeDifference(
      posixTime.value, difference));
  return ResultSuccess();
}

Result NotifyErrorContextServiceReady(bool isReady) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    fileSystemProxy->NotifyErrorContextServiceReady(isReady));
  return ResultSuccess();
}

uint32_t GetFsStackUsage(FsStackUsageThreadType threadType) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  uint32_t usage = 0;
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS(fileSystemProxy->GetFsStackUsage(
    nn::sf::Out<uint32_t>(&usage), static_cast<uint32_t>(threadType)));
  return usage;
}

void OutputApplicationInfoAccessLog(const ApplicationInfo& info) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  fileSystemProxy->OutputApplicationInfoAccessLog(info);
}

}
