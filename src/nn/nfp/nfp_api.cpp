#include "nn/fs/detail/fs_log.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/nfp/nfp_client.hpp"
#include "nn/os/system_event.hpp"

namespace nn::applet {

AppletResourceUserId GetAppletResourceUserId();

}

namespace nn::hid {

struct ControllerFirmwareUpdateArg {
  bool enableForceUpdate;
  uint8_t reserved[3];
};

Result ShowControllerFirmwareUpdate(const ControllerFirmwareUpdateArg& arg);

}

namespace nn::nfc::detail {

enum FunctionLevel : int32_t {
  FunctionLevel_None,
  FunctionLevel_Extended,
};

}

namespace nn::nfp {

enum State : int32_t {
  State_None,
};

enum DeviceState : int32_t {
  DeviceState_Unexpected = 5,
};

struct ExtendedApplicationAreaInfo {
  uint32_t size;
  uint8_t reserved[60];
};

namespace client {

extern const McuVersionData* RequiredMcuVersionData;
extern const int RequiredMcuVersionDataCount;

void CreateDebugInterface();
void CreateSystemInterface();
void CreateUserInterface();
void DestroyDebugInterface();
void DestroySystemInterface();
void DestroyUserInterface();

}

namespace detail {

nfc::detail::FunctionLevel GetFunctionLevel();
void SetFunctionLevel(nfc::detail::FunctionLevel level);
void ResetFunctionLevel();

}

namespace {

constexpr Result ResultNeedRestart = {0x8073};
constexpr uint32_t ResultInnerSessionClosed = 0xd201;
constexpr uint32_t ResultInnerNeedUpdate = 0xe47f;
constexpr uint32_t ResultInnerNeedControllerUpdate = 0xe473;
constexpr int McuVersionDataCountForInitialize = 2;

[[gnu::always_inline]] inline void AbortUnlessSuccess(Result result) {
  if (result.IsFailure()) {
    diag::detail::AbortImpl(&result);
  }
}

[[gnu::always_inline]] inline void AbortIfSessionClosed(Result result) {
  if (result.GetInnerValueForDebug() == ResultInnerSessionClosed) {
    diag::detail::AbortImpl();
  }
}

[[gnu::always_inline]] inline Result AttachEvent(os::SystemEventType* pEvent,
  sf::NativeHandle& handle, Result result) {
  AbortIfSessionClosed(result);
  result = detail::CheckError(result);
  if (result.IsFailure()) {
    return result;
  }
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), static_cast<os::EventClearMode>(1));
  handle.Detach();
  return result;
}

[[gnu::always_inline]] inline sf::InArray<McuVersionData> GetMcuVersions(
  int count) {
  return sf::InArray<McuVersionData>(client::RequiredMcuVersionData, count);
}

[[gnu::always_inline]] inline Result StartDetectionImpl(
  const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return client::GetDebugInterface()->StartDetection(handle);
  }
  if (client::IsCreatedSystemInterface()) {
    return client::GetSystemInterface()->StartDetection(handle);
  }
  return client::GetUserInterfaceForCommon()->StartDetection(handle);
}

}

Result AttachActivateEvent(os::SystemEventType* pEvent,
  const DeviceHandle& handle) {
  sf::NativeHandle eventHandle;
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->AttachActivateEvent(&eventHandle,
      handle);
  }
  else if (client::IsCreatedSystemInterface()) {
    result = client::GetSystemInterface()->AttachActivateEvent(&eventHandle,
      handle);
  }
  else {
    result = client::GetUserInterfaceForCommon()->AttachActivateEvent(
      &eventHandle, handle);
  }
  return AttachEvent(pEvent, eventHandle, result);
}

Result AttachDeactivateEvent(os::SystemEventType* pEvent,
  const DeviceHandle& handle) {
  sf::NativeHandle eventHandle;
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->AttachDeactivateEvent(&eventHandle,
      handle);
  }
  else if (client::IsCreatedSystemInterface()) {
    result = client::GetSystemInterface()->AttachDeactivateEvent(
      &eventHandle, handle);
  }
  else {
    result = client::GetUserInterfaceForCommon()->AttachDeactivateEvent(
      &eventHandle, handle);
  }
  return AttachEvent(pEvent, eventHandle, result);
}

void AttachAvailabilityChangeEvent(os::SystemEventType* pEvent) {
  sf::NativeHandle eventHandle;
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->AttachAvailabilityChangeEvent(
      &eventHandle);
  }
  else if (client::IsCreatedSystemInterface()) {
    result = client::GetSystemInterface()->AttachAvailabilityChangeEvent(
      &eventHandle);
  }
  else {
    result = client::GetUserInterfaceForCommon()->
      AttachAvailabilityChangeEvent(&eventHandle);
  }
  AbortIfSessionClosed(result);
  AbortUnlessSuccess(result);
  os::AttachReadableHandleToSystemEvent(pEvent, eventHandle.GetOsHandle(),
    eventHandle.IsManaged(), static_cast<os::EventClearMode>(1));
  eventHandle.Detach();
}

void Initialize() {
  NN_ABORT_UNLESS(!client::IsCreatedDebugInterface());
  NN_ABORT_UNLESS(!client::IsCreatedSystemInterface());
  NN_ABORT_UNLESS(!client::IsCreatedUserInterface());
  client::CreateUserInterface();
  const sf::InArray<McuVersionData> versions =
    GetMcuVersions(McuVersionDataCountForInitialize);
  AbortUnlessSuccess(client::GetUserInterface()->Initialize(
    applet::GetAppletResourceUserId(), 0, versions));
  detail::ResetFunctionLevel();
  SetErrorVisible(true);
}

void Finalize() {
  AbortUnlessSuccess(client::GetUserInterface()->Finalize());
  client::DestroyUserInterface();
  detail::ResetFunctionLevel();
}

State GetState() {
  if (!client::IsCreatedUserInterface() &&
    !client::IsCreatedSystemInterface() &&
    !client::IsCreatedDebugInterface()) {
    return State_None;
  }
  int32_t state = 0;
  if (client::IsCreatedDebugInterface()) {
    AbortUnlessSuccess(client::GetDebugInterface()->GetState(&state));
  }
  else if (client::IsCreatedSystemInterface()) {
    AbortUnlessSuccess(client::GetSystemInterface()->GetState(&state));
  }
  else {
    AbortUnlessSuccess(client::GetUserInterfaceForCommon()->GetState(&state));
  }
  return static_cast<State>(state);
}

DeviceState GetDeviceState(const DeviceHandle& handle) {
  if (!client::IsCreatedUserInterface() &&
    !client::IsCreatedSystemInterface() &&
    !client::IsCreatedDebugInterface()) {
    return DeviceState_Unexpected;
  }
  int32_t state = 0;
  if (client::IsCreatedDebugInterface()) {
    AbortUnlessSuccess(client::GetDebugInterface()->GetDeviceState(&state,
      handle));
  }
  else if (client::IsCreatedSystemInterface()) {
    AbortUnlessSuccess(client::GetSystemInterface()->GetDeviceState(&state,
      handle));
  }
  else {
    AbortUnlessSuccess(client::GetUserInterfaceForCommon()->GetDeviceState(
      &state, handle));
  }
  return static_cast<DeviceState>(state);
}

void InitializeSystem() {
  NN_ABORT_UNLESS(!client::IsCreatedDebugInterface());
  NN_ABORT_UNLESS(!client::IsCreatedUserInterface());
  NN_ABORT_UNLESS(!client::IsCreatedSystemInterface());
  client::CreateSystemInterface();
  const sf::InArray<McuVersionData> versions =
    GetMcuVersions(client::RequiredMcuVersionDataCount);
  AbortUnlessSuccess(client::GetSystemInterface()->Initialize(
    applet::GetAppletResourceUserId(), 0, versions));
  detail::ResetFunctionLevel();
  SetErrorVisible(true);
}

void FinalizeSystem() {
  AbortUnlessSuccess(client::GetSystemInterface()->Finalize());
  client::DestroySystemInterface();
  detail::ResetFunctionLevel();
}

void InitializeDebug() {
  NN_ABORT_UNLESS(!client::IsCreatedSystemInterface());
  NN_ABORT_UNLESS(!client::IsCreatedUserInterface());
  NN_ABORT_UNLESS(!client::IsCreatedDebugInterface());
  client::CreateDebugInterface();
  const sf::InArray<McuVersionData> versions =
    GetMcuVersions(client::RequiredMcuVersionDataCount);
  AbortUnlessSuccess(client::GetDebugInterface()->InitializeWithOption(
    applet::GetAppletResourceUserId(), 0, versions, 1));
  detail::SetFunctionLevel(nfc::detail::FunctionLevel_Extended);
  SetErrorVisible(true);
}

void FinalizeDebug() {
  AbortUnlessSuccess(client::GetDebugInterface()->Finalize());
  client::DestroyDebugInterface();
  detail::ResetFunctionLevel();
}

void InitializeWithExtendedApplicationArea() {
  NN_ABORT_UNLESS(!client::IsCreatedDebugInterface());
  NN_ABORT_UNLESS(!client::IsCreatedSystemInterface());
  NN_ABORT_UNLESS(!client::IsCreatedUserInterface());
  client::CreateUserInterface();
  const sf::InArray<McuVersionData> versions =
    GetMcuVersions(client::RequiredMcuVersionDataCount);
  AbortUnlessSuccess(client::GetUserInterface()->InitializeWithOption(
    applet::GetAppletResourceUserId(), 0, versions, 1));
  detail::SetFunctionLevel(nfc::detail::FunctionLevel_Extended);
  SetErrorVisible(true);
}

Result StartDetection(const DeviceHandle& handle) {
  const Result result = StartDetectionImpl(handle);
  const uint32_t innerValue = result.GetInnerValueForDebug();
  if ((innerValue != ResultInnerNeedUpdate &&
    innerValue != ResultInnerNeedControllerUpdate) ||
    detail::GetFunctionLevel() == nfc::detail::FunctionLevel_None) {
    return detail::CheckError(result);
  }
  const hid::ControllerFirmwareUpdateArg arg = {true, {}};
  if (hid::ShowControllerFirmwareUpdate(arg).IsFailure()) {
    return ResultNeedRestart;
  }
  return detail::CheckError(StartDetectionImpl(handle));
}

Result Mount(const DeviceHandle& handle, ModelType modelType,
  MountTarget mountTarget) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    (client::IsCreatedDebugInterface() ?
      client::GetDebugInterface()->Mount(handle, modelType, mountTarget) :
      client::IsCreatedSystemInterface() ?
        client::GetSystemInterface()->Mount(handle, modelType, mountTarget) :
        client::GetUserInterfaceForCommon()->Mount(handle, modelType,
          mountTarget)),
    ", name_space: nfp, model_type: %d, nfp_mount_target: %d", modelType,
    mountTarget);
  return detail::CheckError(result);
}

Result Mount(const DeviceHandle& handle, ModelType modelType) {
  return Mount(handle, modelType, MountTarget_All);
}

Result GetApplicationArea(void* pBuffer, size_t* pOutSize,
  const DeviceHandle& handle, size_t bufferSize) {
  uint32_t areaSize = 0;
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = detail::CheckError(
      client::GetDebugInterface()->GetApplicationAreaSize(&areaSize, handle));
  }
  else {
    result = detail::CheckError(
      client::GetUserInterface()->GetApplicationAreaSize(&areaSize, handle));
  }
  if (result.IsFailure()) {
    return result;
  }
  uint32_t outSize = 0;
  const sf::OutBuffer buffer(pBuffer,
    bufferSize < areaSize ? bufferSize : areaSize);
  if (client::IsCreatedDebugInterface()) {
    result = detail::CheckError(client::GetDebugInterface()->
      GetApplicationArea(buffer, &outSize, handle));
  }
  else {
    result = detail::CheckError(client::GetUserInterface()->
      GetApplicationArea(buffer, &outSize, handle));
  }
  if (result.IsSuccess()) {
    *pOutSize = outSize;
  }
  return result;
}

Result Flush(const DeviceHandle& handle) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    (client::IsCreatedDebugInterface() ?
      client::GetDebugInterface()->Flush(handle) :
      client::IsCreatedSystemInterface() ?
        client::GetSystemInterface()->Flush(handle) :
        client::GetUserInterfaceForCommon()->Flush(handle)),
    ", name_space: nfp");
  return detail::CheckError(result);
}

Result Restore(const DeviceHandle& handle) {
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    (client::IsCreatedDebugInterface() ?
      client::GetDebugInterface()->Restore(handle) :
      client::IsCreatedSystemInterface() ?
        client::GetSystemInterface()->Restore(handle) :
        client::GetUserInterfaceForCommon()->Restore(handle)),
    ", name_space: nfp");
  return detail::CheckError(result);
}

Result CreateApplicationArea(const DeviceHandle& handle,
  const ApplicationAreaCreateInfo& info) {
  const sf::InBuffer data(info.pInitialData, info.initialDataSize);
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result,
    (client::IsCreatedDebugInterface() ?
      client::GetDebugInterface()->CreateApplicationArea(handle,
        info.accessId, data) :
      client::GetUserInterface()->CreateApplicationArea(handle,
        info.accessId, data)),
    ", name_space: nfp, access_id: 0x%08X, data_size: %d", info.accessId,
    info.initialDataSize);
  return detail::CheckError(result);
}

Result GetExtendedApplicationAreaInfo(ExtendedApplicationAreaInfo* pOutInfo,
  const DeviceHandle& handle) {
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(client::GetDebugInterface()->
      GetExtendedApplicationAreaInfo(pOutInfo, handle));
  }
  if (client::IsCreatedSystemInterface()) {
    return detail::CheckError(client::GetSystemInterface()->
      GetExtendedApplicationAreaInfo(pOutInfo, handle));
  }
  return detail::CheckError(client::GetUserInterfaceForCommon()->
    GetExtendedApplicationAreaInfo(pOutInfo, handle));
}

Result GetExtendedApplicationArea(void* pBuffer, size_t* pOutSize,
  const DeviceHandle& handle, size_t bufferSize) {
  ExtendedApplicationAreaInfo info = {};
  Result result;
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->GetExtendedApplicationAreaInfo(
      &info, handle);
  }
  else {
    result = client::GetUserInterface()->GetExtendedApplicationAreaInfo(
      &info, handle);
  }
  result = detail::CheckError(result);
  if (result.IsFailure()) {
    return result;
  }
  uint32_t outSize = 0;
  const sf::OutBuffer buffer(pBuffer,
    bufferSize < info.size ? bufferSize : info.size);
  if (client::IsCreatedDebugInterface()) {
    result = client::GetDebugInterface()->GetExtendedApplicationArea(buffer,
      &outSize, handle);
  }
  else {
    result = client::GetUserInterface()->GetExtendedApplicationArea(buffer,
      &outSize, handle);
  }
  result = detail::CheckError(result);
  if (result.IsSuccess()) {
    *pOutSize = outSize;
  }
  return result;
}

Result SetExtendedApplicationArea(const DeviceHandle& handle,
  const void* pData, size_t size) {
  const sf::InBuffer data(pData, size);
  if (client::IsCreatedDebugInterface()) {
    return detail::CheckError(
      client::GetDebugInterface()->SetExtendedApplicationArea(handle, data));
  }
  return detail::CheckError(
    client::GetUserInterface()->SetExtendedApplicationArea(handle, data));
}

}
