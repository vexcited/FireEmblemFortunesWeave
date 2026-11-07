#include <mutex>
#include <utility>

#include "nn/chat/chat_service.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::vi {

Result SetSharingLayerEnabled(bool isEnabled);
Result CreateSharingLayer(Layer** pOutLayer, Display* pDisplay,
  const LayerCreationSettings* pSettings);

}

namespace nn::vi2 {

struct LayerType;
enum BufferContentBits : int32_t {};
enum BufferPermissionBits : int32_t {};

Result SetLayerNextContent(LayerType* pLayer, BufferContentBits bits,
  bool isEnabled);

namespace sdk {

void ChangeBufferPermission(vi2::BufferPermissionBits bits, bool isEnabled);

}

}

namespace nn::applet {

void SetRtcScreenSharingAudioEnabled(bool isEnabled);

}

namespace nn::chat {

namespace {

using Lock = std::lock_guard<os::SdkRecursiveMutex>;

constexpr Result ResultNotAvailable = {0x4e2};
constexpr uint32_t ResultNotInRoom = 0x6e2;
constexpr uint32_t ResultInvalidState = 0x8e2;
constexpr uint32_t ResultNotChatting = 0xee2;
constexpr uint32_t ResultUserNotFound = 0x14e2;
constexpr uint32_t ResultAlreadyRecording = 0x2ae2;

constexpr vi2::BufferPermissionBits BufferPermission_ScreenSharing =
  static_cast<vi2::BufferPermissionBits>(4);
constexpr vi2::BufferContentBits BufferContent_PhotographedContents =
  static_cast<vi2::BufferContentBits>(1);

bool Includes(Result result, uint32_t value) {
  return result.GetInnerValueForDebug() == value;
}

void AbortUnlessInitialized() {
  NN_ABORT_UNLESS(g_InitializeCount > 0);
}

Result AttachReadableEvent(os::SystemEvent* pEvent, sf::NativeHandle& handle,
  Result result) {
  if (result.IsSuccess()) {
    pEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_ManualClear);
    handle.Detach();
  }

  return result;
}

}

void Initialize() {
  detail::InitializeUserService();
  detail::InitializeVirtualCameraService(g_UserService);
}

void Finalize() {
  detail::FinalizeVirtualCameraService();
  detail::FinalizeUserService();
}

void InitializeWithoutVirtualCamera() {
  detail::InitializeUserService();
}

void FinalizeWithoutVirtualCamera() {
  detail::FinalizeUserService();
}

bool IsChatting() {
  Lock lock(g_Mutex);
  return g_ChattingEvent.TryWait();
}

Result AttachToChattingStateChangedEvent(os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject->GetChattingStateChangedEvent(
      sf::Out<sf::NativeHandle>(&handle)));
}

account::Uid GetChattingUid() {
  Lock lock(g_Mutex);
  RoomInfo info = {};
  if (g_UserService->GetRoomInfo(sf::Out<RoomInfo>(&info)).IsFailure()) {
    return account::Uid();
  }

  return info.chattingUid;
}

void SetScreenSharingMode(ScreenSharingMode mode) {
  Lock lock(g_Mutex);
  vi2::sdk::ChangeBufferPermission(BufferPermission_ScreenSharing,
    mode != ScreenSharingMode_Disabled);
  applet::SetRtcScreenSharingAudioEnabled(mode == ScreenSharingMode_Enabled);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserService->SetScreenSharingMode(mode));
}

Result GetRoomInfo(RoomInfo* pOutInfo) {
  Lock lock(g_Mutex);
  return g_UserService->GetRoomInfo(sf::Out<RoomInfo>(pOutInfo));
}

Result GetRoomInfoForTest(RoomInfo* pOutInfo) {
  Lock lock(g_Mutex);
  return g_UserService->GetRoomInfoForTest(sf::Out<RoomInfo>(pOutInfo));
}

Result AttachToRoomInfoChangedEvent(os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject->GetRoomInfoChangedEvent(
      sf::Out<sf::NativeHandle>(&handle)));
}

Result AttachToRoomInfoChangedEventForTest(os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject->GetRoomInfoChangedEventForTest(
      sf::Out<sf::NativeHandle>(&handle)));
}

void SetScreenSharingDisallowList(const account::NetworkServiceAccountId* pIds,
  int count) {
  Lock lock(g_Mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserService->SetScreenSharingDisallowList(
    sf::InArray<account::NetworkServiceAccountId>(pIds, count)));
}

void ClearScreenSharingDisallowList() {
  Lock lock(g_Mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserService->ClearScreenSharingDisallowList());
}

size_t CalculateRequiredAudioStreamWorkBufferSize(int count) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  uint64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserService->CalculateRequiredAudioStreamWorkBufferSize(
      sf::Out<uint64_t>(&size), count));
  return size;
}

void CreateAudioStreamWorkBuffer(void* pBuffer, size_t bufferSize,
  int count) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(!g_IsAudioStreamWorkBufferCreated);
  NN_ABORT_UNLESS_NOT_NULL(pBuffer);
  NN_ABORT_UNLESS(reinterpret_cast<uintptr_t>(pBuffer) % 0x1000 == 0);
  NN_ABORT_UNLESS(bufferSize % 0x1000 == 0);
  NN_ABORT_UNLESS(count >= 0);

  os::TransferMemoryType transferMemory = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(&transferMemory,
    pBuffer, bufferSize, os::MemoryPermission_None));
  sf::NativeHandle handle(os::DetachTransferMemory(&transferMemory), true);
  os::DestroyTransferMemory(&transferMemory);

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserShimScopedObject->CreateAudioStreamWorkBuffer(std::move(handle),
      count));
  g_IsAudioStreamWorkBufferCreated = true;
}

void DestroyAudioStreamWorkBuffer() {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserShimScopedObject->DestroyAudioStreamWorkBuffer());
  g_IsAudioStreamWorkBufferCreated = false;
}

int GetAudioStreamCapacityFrameCount() {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(g_IsAudioStreamWorkBufferCreated);
  int count = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserShimScopedObject->GetAudioStreamCapacityFrameCount(
      sf::Out<int>(&count)));
  return count;
}

Result StartAudioStreamRecording(const account::NetworkServiceAccountId& id) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(g_IsAudioStreamWorkBufferCreated);
  const Result result =
    g_UserShimScopedObject->StartAudioStreamRecording(id);
  if (result.IsFailure()) {
    if (Includes(result, ResultNotInRoom) ||
      Includes(result, ResultNotChatting) ||
      Includes(result, ResultUserNotFound)) {
      return ResultNotAvailable;
    }

    NN_ABORT_UNLESS(!Includes(result, ResultInvalidState) &&
      !Includes(result, ResultAlreadyRecording));
    diag::detail::AbortImpl(&result);
  }

  return Result();
}

void StopAudioStreamRecording(const account::NetworkServiceAccountId& id) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(g_IsAudioStreamWorkBufferCreated);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserShimScopedObject->StopAudioStreamRecording(id));
}

int GetAudioStreamFreeFrameCount(const account::NetworkServiceAccountId& id) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(g_IsAudioStreamWorkBufferCreated);
  int count = 0;
  if (g_UserShimScopedObject->GetAudioStreamFreeFrameCount(
    sf::Out<int>(&count), id).IsFailure()) {
    return 0;
  }

  return count;
}

int GetAudioStreamFilledFrameCount(
  const account::NetworkServiceAccountId& id) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(g_IsAudioStreamWorkBufferCreated);
  int count = 0;
  if (g_UserShimScopedObject->GetAudioStreamFilledFrameCount(
    sf::Out<int>(&count), id).IsFailure()) {
    return 0;
  }

  return count;
}

Result ReadAudioStream(size_t* pOutSize, void* pBuffer, size_t bufferSize,
  const account::NetworkServiceAccountId& id) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS(g_IsAudioStreamWorkBufferCreated);
  NN_ABORT_UNLESS_NOT_NULL(pOutSize);
  NN_ABORT_UNLESS_NOT_NULL(pBuffer);
  uint64_t size = 0;
  const Result result = g_UserShimScopedObject->ReadAudioStream(
    sf::Out<uint64_t>(&size), sf::OutBuffer(pBuffer, bufferSize), id);
  if (result.IsFailure()) {
    if (Includes(result, ResultNotInRoom) ||
      Includes(result, ResultUserNotFound)) {
      return ResultNotAvailable;
    }

    diag::detail::AbortImpl(&result);
  }

  *pOutSize = size;
  return Result();
}

Result GetLocalCameraImageProcessingMode(CameraImageProcessingMode* pOutMode) {
  Lock lock(g_Mutex);
  if (g_UserService->GetLocalCameraImageProcessingMode(
    sf::Out<CameraImageProcessingMode>(pOutMode)).IsFailure()) {
    return ResultNotAvailable;
  }

  return Result();
}

Result GetLocalCameraImageProcessingMode_Deprecated_OAAA51548(
  CameraImageProcessingMode* pOutMode) {
  Lock lock(g_Mutex);
  if (g_UserService->GetLocalCameraImageProcessingModeDeprecated(
    sf::Out<CameraImageProcessingMode>(pOutMode)).IsFailure()) {
    return ResultNotAvailable;
  }

  return Result();
}

Result AttachToLocalCameraImageProcessingModeChangedEvent(
  os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject->GetLocalCameraImageProcessingModeChangedEvent(
      sf::Out<sf::NativeHandle>(&handle)));
}

Result AttachToLocalCameraImageProcessingModeChangedEvent_Deprecated_OAAA51548(
  os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject
      ->GetLocalCameraImageProcessingModeChangedEventDeprecated(
        sf::Out<sf::NativeHandle>(&handle)));
}

Result SetLocalCameraZoomMagnification(float magnification) {
  Lock lock(g_Mutex);
  return g_UserService->SetLocalCameraZoomMagnification(magnification);
}

float GetLocalCameraZoomMagnification() {
  Lock lock(g_Mutex);
  float magnification = 0.0f;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserService->GetLocalCameraZoomMagnification(
      sf::Out<float>(&magnification)));
  return magnification;
}

Result AttachToLocalCameraZoomMagnificationChangedEvent(
  os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject->GetLocalCameraZoomMagnificationChangedEvent(
      sf::Out<sf::NativeHandle>(&handle)));
}

void SetSharingKey(const SharingKey& key) {
  Lock lock(g_Mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserService->SetSharingKey(key));
}

void ClearSharingKey() {
  Lock lock(g_Mutex);
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserService->ClearSharingKey());
}

Result ShowChatStart(const account::Uid& uid) {
  bool isRequired = false;
  {
    Lock lock(g_Mutex);
    NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserService->IsChatStartAppletRequired(
      sf::Out<bool>(&isRequired), uid));
  }

  if (isRequired) {
    const ChatStartArgument argument = {uid};
    return detail::ShowAppletForChatStart(argument);
  }

  return Result();
}

void ShowCameraSharingGuide() {
  bool isRequired = false;
  {
    Lock lock(g_Mutex);
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      g_UserService->IsCameraSharingGuideAppletRequired(
        sf::Out<bool>(&isRequired)));
  }

  if (isRequired) {
    detail::ShowAppletForCameraSharingGuide();
  }
}

void StartLocalCameraStreaming() {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserShimScopedObject->StartLocalCameraStreaming());
}

void EndFullScreenWithLocalCameraAvailableSection() {
  Lock lock(g_Mutex);
  NN_ABORT_UNLESS(g_UserService != nullptr);
  detail::InitializeUserLayoutCustomizationShimScopedObject();
  NN_ABORT_UNLESS_RESULT_SUCCESS(g_UserLayoutCustomizationShimScopedObject
    ->EndFullScreenWithLocalCameraAvailableSection());
}

uint32_t GetLocalCameraImageHandle(const LocalCameraVideoType* pVideo,
  int index) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS_NOT_NULL(pVideo);
  NN_ABORT_UNLESS(index >= 0);
  return gsv::GetImagePoolImageHandle(
    reinterpret_cast<const gsv::ImagePoolType*>(pVideo), index);
}

uint32_t GetRemoteCameraImageHandle(const RemoteCameraVideoType* pVideo,
  int index) {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  return gsv::GetImagePoolImageHandle(
    reinterpret_cast<const gsv::ImagePoolType*>(pVideo), index);
}

void StopLocalCameraStreaming() {
  Lock lock(g_Mutex);
  AbortUnlessInitialized();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserShimScopedObject->StopLocalCameraStreaming());
}

void SetAlternativeScreenSharingLayerEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi::SetSharingLayerEnabled(isEnabled));
}

void CreateAlternativeScreenSharingLayer(vi::Layer** pOutLayer,
  vi::Display* pDisplay, const vi::LayerCreationSettings* pSettings) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    vi::CreateSharingLayer(pOutLayer, pDisplay, pSettings));
}

void* GetVirtualCameraNativeWindowHandle(const VirtualCameraType* pCamera) {
  return pCamera->nativeWindowHandle;
}

void EnableVirtualCamera(VirtualCameraType*) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_VirtualCameraShimScopedObject->EnableVirtualCamera());
}

void DisableVirtualCamera(VirtualCameraType*) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_VirtualCameraShimScopedObject->DisableVirtualCamera());
}

Result SetVirtualCameraContainPhotographedContents(VirtualCameraType* pCamera,
  bool isContained) {
  return vi2::SetLayerNextContent(
    reinterpret_cast<vi2::LayerType*>(pCamera->layerStorage),
    BufferContent_PhotographedContents, isContained);
}

CameraImageProcessingMode GetCameraImageProcessingModeForVirtualCamera() {
  CameraImageProcessingMode mode = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    g_UserService->GetCameraImageProcessingModeForVirtualCamera(
      sf::Out<CameraImageProcessingMode>(&mode)));
  return mode;
}

Result AttachToCameraImageProcessingModeForVirtualCameraChangedEvent(
  os::SystemEvent* pEvent) {
  Lock lock(g_Mutex);
  sf::NativeHandle handle;
  return AttachReadableEvent(pEvent, handle,
    g_UserShimScopedObject
      ->GetCameraImageProcessingModeForVirtualCameraChangedEvent(
        sf::Out<sf::NativeHandle>(&handle)));
}

}

namespace nn::chat0 {

void CreateSelectiveTalkSession(Span<SelectiveTalkEntry> entries) {
  chat::detail::InitializeUserSelectiveTalkShimScopedObject();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    chat::g_UserSelectiveTalkShimScopedObject->CreateSelectiveTalkSession(
      sf::InArray<SelectiveTalkEntry>(entries.data, entries.size)));
}

Result EnterSelectiveTalk() {
  chat::detail::InitializeUserSelectiveTalkShimScopedObject();
  return chat::g_UserSelectiveTalkShimScopedObject->EnterSelectiveTalk();
}

void LeaveSelectiveTalk() {
  chat::detail::InitializeUserSelectiveTalkShimScopedObject();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    chat::g_UserSelectiveTalkShimScopedObject->LeaveSelectiveTalk());
}

void DestroySelectiveTalkSession() {
  chat::detail::InitializeUserSelectiveTalkShimScopedObject();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    chat::g_UserSelectiveTalkShimScopedObject->DestroySelectiveTalkSession());
}

Result GetSelectiveTalkEntryList(bool* pOutIsUpdated, int* pOutCount,
  SelectiveTalkEntry* pOutEntries, int count,
  const account::NetworkServiceAccountId& id) {
  chat::detail::InitializeUserSelectiveTalkShimScopedObject();
  return chat::g_UserSelectiveTalkShimScopedObject->GetSelectiveTalkEntryList(
    sf::Out<int>(pOutCount),
    sf::OutArray<SelectiveTalkEntry>(pOutEntries, count),
    sf::Out<bool>(pOutIsUpdated), id);
}

Result AttachToSelectiveTalkEntryListChangeEvent(os::SystemEvent* pEvent) {
  chat::detail::InitializeUserSelectiveTalkShimScopedObject();
  sf::NativeHandle handle;
  const Result result = chat::g_UserSelectiveTalkShimScopedObject
    ->GetSelectiveTalkEntryListChangeEvent(
      sf::Out<sf::NativeHandle>(&handle));
  if (result.IsSuccess()) {
    pEvent->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
      os::EventClearMode_ManualClear);
    handle.Detach();
  }

  return result;
}

}
