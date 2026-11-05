#include "nn/hid/detail/hid_abort.hpp"
#include "nn/nfp/nfp_client.hpp"

namespace nn::nfp {

namespace {

constexpr Result ResultBackupError = {0x6073};

bool g_IsErrorVisible = true;

bool IsAnyInterfaceCreated() {
  return client::IsCreatedDebugInterface() ||
    client::IsCreatedSystemInterface() || client::IsCreatedUserInterface();
}

}

Result GetAll(NfpData* pOutData, const DeviceHandle& handle) {
  return detail::CheckError(
    client::GetDebugInterface()->GetAll(pOutData, handle));
}

Result SetAll(const DeviceHandle& handle, const NfpData& data) {
  return detail::CheckError(
    client::GetDebugInterface()->SetAll(handle, data));
}

Result FlushDebug(const DeviceHandle& handle) {
  return detail::CheckError(client::GetDebugInterface()->FlushDebug(handle));
}

Result BreakTag(const DeviceHandle& handle, BreakType breakType) {
  return detail::CheckError(
    client::GetDebugInterface()->BreakTag(handle, breakType));
}

Result ReadBackupData(void* pBuffer, unsigned long* pOutSize,
  unsigned long bufferSize) {
  int32_t size = 0;
  const Result result = detail::CheckError(
    client::GetDebugInterface()->ReadBackupData(
      sf::OutBuffer(pBuffer, bufferSize), &size));
  if (result.IsFailure()) {
    return ResultBackupError;
  }
  *pOutSize = static_cast<uint32_t>(size);
  return Result{};
}

Result WriteBackupData(const void* pData, unsigned long size) {
  const Result result = detail::CheckError(
    client::GetDebugInterface()->WriteBackupData(sf::InBuffer(pData, size)));
  if (result.IsFailure()) {
    return ResultBackupError;
  }
  return Result{};
}

Result WriteNtf(const DeviceHandle& handle, const void* pData,
  unsigned long size, NtfWriteType writeType) {
  return detail::CheckError(client::GetDebugInterface()->WriteNtf(handle,
    sf::InBuffer(pData, size), writeType));
}

Result BreakExtendedApplicationArea(const DeviceHandle& handle,
  BreakType breakType) {
  return detail::CheckError(
    client::GetDebugInterface()->BreakExtendedApplicationArea(handle,
      breakType));
}

void SetErrorVisible(bool isVisible) {
  NN_ABORT_UNLESS(IsAnyInterfaceCreated());
  g_IsErrorVisible = isVisible;
}

bool IsErrorVisible() {
  NN_ABORT_UNLESS(IsAnyInterfaceCreated());
  return g_IsErrorVisible;
}

}
