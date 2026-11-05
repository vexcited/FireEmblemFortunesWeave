#include <cmath>
#include <mutex>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/streamplay/detail/streamplay_hid_util.hpp"
#include "nn/streamplay/detail/streamplay_user_service.hpp"

// Every failed requirement keeps its own abort call in the original.
#define NN_STREAMPLAY_REQUIRES(condition) \
  do { \
    if (!(condition)) { \
      [[clang::nomerge]] ::nn::diag::detail::AbortImpl(); \
    } \
  } while (false)

#define NN_STREAMPLAY_REQUIRES_NOT_NULL(pointer) \
  NN_STREAMPLAY_REQUIRES(::nn::diag::detail::NotNullImpl( \
    reinterpret_cast<uintptr_t>(pointer)))

namespace nn::pctl {

void EndFreeCommunicationForStreamPlay();

}

namespace nn::nv {

void InitCheck();

}

namespace nn::vi2 {

void Initialize();
void Finalize();

}

namespace nn::streamplay::detail {

extern os::SystemEventType g_ConnectionStateChangedEvent;

void InitializeGuestDeviceResourceManager(int count);
void FinalizeGuestDeviceResourceManager();
bool IsGuestDeviceResourceManagerInitialized();
void* GetNativeWindowHandle(GuestId id);
void SetLayerUserData(GuestId id, uint64_t userData);
void SetLayerNextHdrStandardContentLuminanceRangeMetadata(GuestId id,
  uint16_t minimum, uint16_t maximum);
void SetLayerNextHdrExtendedContentLuminanceRangeMetadata(GuestId id,
  uint16_t minimum, uint16_t maximum);

}

namespace nn::streamplay {

struct SessionInfo;
struct MatchmakeConfig;
enum StreamingFrameRate {};

Result OpenSessionWithMatchmakeSupport(SessionInfo* pOutInfo,
  const MatchmakeConfig& config, StreamingFrameRate frameRate);

namespace {

using StateLock = std::lock_guard<os::SdkMutex>;

inline bool IsNmouseHandleNotFound(Result result) {
  return result.GetInnerValueForDebug() == 0x27171f;
}

}

int GetRequiredMemorySize(StreamPlayType type, StreamingMode mode,
  int guestCount) {
  int size = 0;
  const Result result = detail::GetUserService()->GetRequiredMemorySize(
    sf::Out<int>(&size), type, mode, guestCount);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return size;
}

void CloseSession() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::g_UserService->CloseSession());
  detail::g_UserMemoryUsedOffset = 0;
  detail::g_IsStreamingStarted = false;
  if (detail::g_IsFreeCommunicationEnabled) {
    pctl::EndFreeCommunicationForStreamPlay();
    detail::g_IsFreeCommunicationEnabled = false;
  }
}

Result GetGuestNsaId(account::NetworkServiceAccountId* pOutId, GuestId id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutId);
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::g_UserService->GetGuestNsaId(
    sf::Out<account::NetworkServiceAccountId>(pOutId), id);
  if (detail::IsAbortNeeded(result)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  NN_RESULT_DO(result);
  return Result{};
}

os::SystemEventType* GetConnectionStateChangedEvent() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  return &detail::g_ConnectionStateChangedEvent;
}

void GetConnectionState(ConnectionState* pOutState) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutState);
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::g_UserService->GetConnectionState(
    sf::Out<ConnectionState>(pOutState)));
}

void UpdateScreenShareTargetSetting(ScreenShareTargetSetting setting) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_UserService->UpdateScreenShareTargetSetting(setting));
}

void SetSupportedGuestNpadStyleSet(hid::NpadStyleSet style) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_UserService->SetSupportedGuestNpadStyleSet(style));
}

hid::NpadStyleSet GetSupportedGuestNpadStyleSet() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  hid::NpadStyleSet style = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_UserService->GetSupportedGuestNpadStyleSet(
      sf::Out<hid::NpadStyleSet>(&style)));
  return style;
}

void SetGuestNpadJoyHoldType(hid::NpadJoyHoldType type) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_UserService->SetGuestNpadJoyHoldType(type));
}

hid::NpadJoyHoldType GetGuestNpadJoyHoldType() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  hid::NpadJoyHoldType type = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::g_UserService->GetGuestNpadJoyHoldType(
      sf::Out<hid::NpadJoyHoldType>(&type)));
  return type;
}

void SetGuestTouchScreenOutputRange(int width, int height) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->
    SetGuestTouchScreenOutputRange(width, height);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void SendGuestVibrationValue(const GuestVibrationDeviceHandle& handle,
  const hid::VibrationValue& value) {
  NN_STREAMPLAY_REQUIRES(detail::IsVibrationDeviceHandleValid(handle));
  NN_STREAMPLAY_REQUIRES(std::isfinite(value.amplitudeLow));
  NN_STREAMPLAY_REQUIRES(std::isfinite(value.frequencyLow));
  NN_STREAMPLAY_REQUIRES(std::isfinite(value.amplitudeHigh));
  NN_STREAMPLAY_REQUIRES(std::isfinite(value.frequencyHigh));
  NN_STREAMPLAY_REQUIRES(value.amplitudeLow >= 0.0f);
  NN_STREAMPLAY_REQUIRES(value.frequencyLow >= 0.0f);
  NN_STREAMPLAY_REQUIRES(value.amplitudeHigh >= 0.0f);
  NN_STREAMPLAY_REQUIRES(value.frequencyHigh >= 0.0f);
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->SendGuestVibrationValue(handle, value));
}

void EnableGuestVibrationNxCompatibleMode() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->
    SetGuestVibrationNxCompatibleMode(true);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void DisableGuestVibrationNxCompatibleMode() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->
    SetGuestVibrationNxCompatibleMode(false);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void SetGuestMergedNmouseSourceTypes(GuestNmouseTypeSet types) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->SetGuestMergedNmouseSourceTypes(
    detail::FilterGuestNmouseTypeSet(types)));
}

void SetGuestNmousePointerRanges(int width, int height) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_STREAMPLAY_REQUIRES(width > 0);
  NN_STREAMPLAY_REQUIRES(height > 0);
  NN_STREAMPLAY_REQUIRES(width < 0x10000);
  NN_STREAMPLAY_REQUIRES(height < 0x10000);
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->SetGuestNmousePointerRanges(width, height));
}

void GetGuestNmousePointerRanges(int* pOutWidth, int* pOutHeight) {
  const Result result = detail::GetUserService()->GetGuestNmousePointerRanges(
    sf::Out<int>(pOutWidth), sf::Out<int>(pOutHeight));
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void SetGuestNmousePointerMovementArea(int left, int top, int right,
  int bottom) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  NN_STREAMPLAY_REQUIRES(left < right);
  NN_STREAMPLAY_REQUIRES(top < bottom);
  NN_STREAMPLAY_REQUIRES(left >= 0);
  NN_STREAMPLAY_REQUIRES(top >= 0);
  const Result result = detail::GetUserService()->
    SetGuestNmousePointerMovementArea(left, top, right, bottom);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

namespace {

template <typename T>
inline void RequireValidButtonAssignments(const T& config) {
  const auto* pAssignments =
    reinterpret_cast<const hid::NmouseButtonAssignment*>(&config);
  for (size_t i = 0; i < sizeof(config); ++i) {
    NN_STREAMPLAY_REQUIRES(
      detail::IsNmouseButtonAssignmentValid(pAssignments[i]));
  }
}

}

void SetGuestNmouseButtonConfigJoyLeftJcms(
  const hid::NmouseButtonConfigJoyLeftJcms& config) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  RequireValidButtonAssignments(config);
  const Result result = detail::GetUserService()->
    SetGuestNmouseButtonConfigJoyLeftJcms(config);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void SetGuestNmouseButtonConfigJoyRightJcms(
  const hid::NmouseButtonConfigJoyRightJcms& config) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  RequireValidButtonAssignments(config);
  const Result result = detail::GetUserService()->
    SetGuestNmouseButtonConfigJoyRightJcms(config);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

bool EnableGuestNmousePointer(const GuestNmouseHandle& handle,
  bool isEnabled) {
  const Result result = detail::GetUserService()->EnableGuestNmousePointer(
    handle, isEnabled);
  if (IsNmouseHandleNotFound(result)) {
    return false;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return true;
}

bool SetGuestNmousePointerPosition(const GuestNmouseHandle& handle, int x,
  int y) {
  const Result result = detail::GetUserService()->
    SetGuestNmousePointerPosition(handle, x, y);
  if (IsNmouseHandleNotFound(result)) {
    return false;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return true;
}

void SetSupportedHidFeatureSet(HidFeatureSet features) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->SetSupportedHidFeatureSet(
    features);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

HidFeatureSet GetSupportedHidFeatureSet() {
  HidFeatureSet features = {};
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetSupportedHidFeatureSet(
    sf::Out<HidFeatureSet>(&features)));
  return features;
}

void EnableGuestNxTouchScreenEmulationForTouchEnter() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->
    EnableGuestNxTouchScreenEmulationForTouchEnter();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void DisableGuestNxTouchScreenEmulationForTouchEnter() {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->
    DisableGuestNxTouchScreenEmulationForTouchEnter();
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void CreateIndividualDisplays(int count) {
  nv::InitCheck();
  vi2::Initialize();
  detail::InitializeGuestDeviceResourceManager(count);
}

void DestroyIndividualDisplays() {
  if (detail::IsGuestDeviceResourceManagerInitialized()) {
    detail::FinalizeGuestDeviceResourceManager();
  }
  vi2::Finalize();
}

void* GetNativeWindowHandle(GuestId id) {
  return detail::GetNativeWindowHandle(id);
}

int GetGuestAudioStreamCapacityFrameCount() {
  int count = 0;
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetGuestAudioStreamCapacityFrameCount(sf::Out<int>(&count)));
  return count;
}

int GetGuestAudioStreamFreeFrameCount(GuestId id) {
  int count = 0;
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetGuestAudioStreamFreeFrameCount(sf::Out<int>(&count), id));
  return count;
}

int GetGuestAudioStreamFilledFrameCount(GuestId id) {
  int count = 0;
  sf::SharedPointer<IUserService> service = detail::GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    service->GetGuestAudioStreamFilledFrameCount(sf::Out<int>(&count), id));
  return count;
}

Result OpenSessionWithMatchmakeSupport(SessionInfo* pOutInfo,
  const MatchmakeConfig& config) {
  return OpenSessionWithMatchmakeSupport(pOutInfo, config,
    StreamingFrameRate{});
}

void SetLayerNextHdrStandardContentLuminanceRangeMetadata(GuestId id,
  uint16_t minimum, uint16_t maximum) {
  NN_STREAMPLAY_REQUIRES(minimum <= maximum);
  detail::SetLayerNextHdrStandardContentLuminanceRangeMetadata(id, minimum,
    maximum);
}

void SetLayerNextHdrExtendedContentLuminanceRangeMetadata(GuestId id,
  uint16_t minimum, uint16_t maximum) {
  NN_STREAMPLAY_REQUIRES(minimum <= maximum);
  detail::SetLayerNextHdrExtendedContentLuminanceRangeMetadata(id, minimum,
    maximum);
}

Result GetGuestNickname(account::Nickname* pOutNickname, GuestId id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutNickname);
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->GetGuestNickname(
    sf::Out<account::Nickname>(pOutNickname), id);
  if (detail::IsAbortNeeded(result)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  NN_RESULT_DO(result);
  return Result{};
}

Result GetGuestProfileImage(uint64_t* pOutSize, void* pBuffer,
  uint64_t bufferSize, GuestId id) {
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pOutSize);
  NN_STREAMPLAY_REQUIRES_NOT_NULL(pBuffer);
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  uint64_t size = 0;
  const Result result = detail::GetUserService()->GetGuestProfileImage(
    sf::Out<uint64_t>(&size), sf::OutBuffer(pBuffer, bufferSize), id);
  if (detail::IsAbortNeeded(result)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  NN_RESULT_DO(result);
  *pOutSize = size;
  return Result{};
}

void DisconnectGuest(GuestId id) {
  StateLock lock(detail::g_StreamplayStateMutex);
  NN_STREAMPLAY_REQUIRES(detail::g_IsInitialized);
  const Result result = detail::GetUserService()->DisconnectGuest(id);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

void SetLayerUserData(GuestId id, uint64_t userData) {
  detail::SetLayerUserData(id, userData);
}

}
