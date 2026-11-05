#include "nn/nfp/nfp_client.hpp"

namespace nn::nfp {

Result Format(const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(client::GetDebugInterface()->Format(handle));
  }
  return detail::CheckError(client::GetSystemInterface()->Format(handle));
}

Result GetAdminInfo(AdminInfo* pOutInfo, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetAdminInfo(pOutInfo, handle));
  }
  return detail::CheckError(
    client::GetSystemInterface()->GetAdminInfo(pOutInfo, handle));
}

Result GetRegisterInfo(RegisterInfoPrivate* pOutInfo,
  const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->GetRegisterInfoPrivate(pOutInfo, handle));
  }
  return detail::CheckError(
    client::GetSystemInterface()->GetRegisterInfoPrivate(pOutInfo, handle));
}

Result SetRegisterInfo(const DeviceHandle& handle,
  const RegisterInfoPrivate& info) {
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->SetRegisterInfoPrivate(handle, info);
  }
  else {
    result = client::GetSystemInterface()->SetRegisterInfoPrivate(handle,
      info);
  }
  return detail::CheckError(result);
}

Result DeleteRegisterInfo(const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->DeleteRegisterInfo(handle));
  }
  return detail::CheckError(
    client::GetSystemInterface()->DeleteRegisterInfo(handle));
}

Result DeleteApplicationArea(const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->DeleteApplicationArea(handle));
  }
  return detail::CheckError(
    client::GetSystemInterface()->DeleteApplicationArea(handle));
}

Result ExistsApplicationArea(bool* pOutValue, const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->ExistsApplicationArea(pOutValue, handle));
  }
  return detail::CheckError(
    client::GetSystemInterface()->ExistsApplicationArea(pOutValue, handle));
}

Result OpenApplicationArea(const DeviceHandle& handle, unsigned int id) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->OpenApplicationArea(handle, id));
  }
  return detail::CheckError(
    client::GetUserInterface()->OpenApplicationArea(handle, id));
}

Result SetApplicationArea(const DeviceHandle& handle, const void* pData,
  unsigned long size) {
  const sf::InBuffer buffer(pData, size);
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->SetApplicationArea(handle, buffer);
  }
  else {
    result = client::GetUserInterface()->SetApplicationArea(handle, buffer);
  }
  return detail::CheckError(result);
}

Result RecreateApplicationArea(const DeviceHandle& handle,
  const ApplicationAreaCreateInfo& info) {
  const sf::InBuffer buffer(info.pInitialData, info.initialDataSize);
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->RecreateApplicationArea(handle,
      info.accessId, buffer);
  }
  else {
    result = client::GetUserInterface()->RecreateApplicationArea(handle,
      info.accessId, buffer);
  }
  return detail::CheckError(result);
}

}
