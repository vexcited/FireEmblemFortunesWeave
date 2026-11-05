#include "nn/nfp/nfp_client.hpp"

namespace nn::nfp {

Result ListDevices(DeviceHandle* pOutHandles, int* pOutCount, int count) {
  int32_t outCount = 0;
  const sf::OutArray<DeviceHandle> handles(pOutHandles, count);
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->ListDevices(handles, &outCount);
  }
  else if (client::IsCreatedSystemInterface()) {
    result = client::GetSystemInterface()->ListDevices(handles, &outCount);
  }
  else {
    result = client::GetUserInterfaceForCommon()->ListDevices(handles,
      &outCount);
  }
  if (result.IsFailure()) {
    return result;
  }
  *pOutCount = outCount;
  return Result{};
}

Result StopDetection(const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->StopDetection(handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(
      client::GetSystemInterface()->StopDetection(handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->StopDetection(handle));
}

Result Unmount(const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(client::GetDebugInterface()->Unmount(handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(client::GetSystemInterface()->Unmount(handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->Unmount(handle));
}

Result GetTagInfo(TagInfo* pOutInfo, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetTagInfo(pOutInfo, handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(
      client::GetSystemInterface()->GetTagInfo(pOutInfo, handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->GetTagInfo(pOutInfo, handle));
}

Result GetRegisterInfo(RegisterInfo* pOutInfo, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetRegisterInfo(pOutInfo, handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(
      client::GetSystemInterface()->GetRegisterInfo(pOutInfo, handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->GetRegisterInfo(pOutInfo, handle));
}

Result GetCommonInfo(CommonInfo* pOutInfo, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetCommonInfo(pOutInfo, handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(
      client::GetSystemInterface()->GetCommonInfo(pOutInfo, handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->GetCommonInfo(pOutInfo, handle));
}

Result GetModelInfo(ModelInfo* pOutInfo, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetModelInfo(pOutInfo, handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(
      client::GetSystemInterface()->GetModelInfo(pOutInfo, handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->GetModelInfo(pOutInfo, handle));
}

Result GetNpadId(uint32_t* pOutId, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetNpadId(pOutId, handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(
      client::GetSystemInterface()->GetNpadId(pOutId, handle));
  }
  return detail::CheckError(
    client::GetUserInterfaceForCommon()->GetNpadId(pOutId, handle));
}

}
