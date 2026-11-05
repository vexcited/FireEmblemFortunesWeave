#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event_class.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/span.hpp"

namespace nn::vi {

struct Layer;
struct Display;
struct LayerCreationSettings;

}

namespace nn::chat {

enum ScreenSharingMode : int32_t {
  ScreenSharingMode_Enabled = 0,
  ScreenSharingMode_Disabled = 1,
};

enum CameraImageProcessingMode : uint8_t {};

struct RoomInfo {
  uint8_t reserved[0x18];
  account::Uid chattingUid;
  uint8_t reserved2[0xc8];
};

static_assert(sizeof(RoomInfo) == 0xf0);

struct SharingKey;

struct ChatStartArgument {
  account::Uid uid;
};

// The layer and native window live at fixed offsets of the camera storage.
struct VirtualCameraType {
  uint8_t reserved[0x180];
  uint8_t layerStorage[0x400];
  void* nativeWindowHandle;
};

class IUserShimScopedObject : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetChattingEvent(sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetRoomInfoChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetLocalCameraImageProcessingModeChangedEventDeprecated(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetLocalCameraZoomMagnificationChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetRoomInfoChangedEventForTest(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetChattingStateChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetLocalCameraImageProcessingModeChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result GetCameraImageProcessingModeForVirtualCameraChangedEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
  virtual Result StartLocalCameraStreaming() = 0;
  virtual Result StopLocalCameraStreaming() = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual void Reserved16() = 0;
  virtual void Reserved17() = 0;
  virtual Result CreateAudioStreamWorkBuffer(
    sf::NativeHandle&& transferMemoryHandle, int count) = 0;
  virtual Result DestroyAudioStreamWorkBuffer() = 0;
  virtual Result GetAudioStreamCapacityFrameCount(sf::Out<int> pOutCount) = 0;
  virtual Result StartAudioStreamRecording(
    account::NetworkServiceAccountId id) = 0;
  virtual Result StopAudioStreamRecording(
    account::NetworkServiceAccountId id) = 0;
  virtual Result GetAudioStreamFreeFrameCount(sf::Out<int> pOutCount,
    account::NetworkServiceAccountId id) = 0;
  virtual Result GetAudioStreamFilledFrameCount(sf::Out<int> pOutCount,
    account::NetworkServiceAccountId id) = 0;
  virtual Result ReadAudioStream(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& outBuffer, account::NetworkServiceAccountId id) = 0;
};

class IUserService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual void Reserved8() = 0;
  virtual Result GetRoomInfo(sf::Out<RoomInfo> pOutInfo) = 0;
  virtual Result GetRoomInfoForTest(sf::Out<RoomInfo> pOutInfo) = 0;
  virtual Result GetLocalCameraImageProcessingMode(
    sf::Out<CameraImageProcessingMode> pOutMode) = 0;
  virtual Result GetLocalCameraImageProcessingModeDeprecated(
    sf::Out<CameraImageProcessingMode> pOutMode) = 0;
  virtual Result SetLocalCameraZoomMagnification(float magnification) = 0;
  virtual Result GetLocalCameraZoomMagnification(
    sf::Out<float> pOutMagnification) = 0;
  virtual Result GetCameraImageProcessingModeForVirtualCamera(
    sf::Out<CameraImageProcessingMode> pOutMode) = 0;
  virtual void Reserved16() = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual Result SetScreenSharingMode(ScreenSharingMode mode) = 0;
  virtual Result SetScreenSharingDisallowList(
    const sf::InArray<account::NetworkServiceAccountId>& ids) = 0;
  virtual Result ClearScreenSharingDisallowList() = 0;
  virtual void Reserved22() = 0;
  virtual Result CalculateRequiredAudioStreamWorkBufferSize(
    sf::Out<uint64_t> pOutSize, int count) = 0;
  virtual Result SetSharingKey(const SharingKey& key) = 0;
  virtual Result ClearSharingKey() = 0;
  virtual Result IsChatStartAppletRequired(sf::Out<bool> pOutIsRequired,
    const account::Uid& uid) = 0;
  virtual Result IsCameraSharingGuideAppletRequired(
    sf::Out<bool> pOutIsRequired) = 0;
};

extern sf::SharedPointer<IUserService> g_UserService;
extern os::SdkRecursiveMutex g_Mutex;
extern os::SystemEvent g_ChattingEvent;
extern sf::SharedPointer<IUserShimScopedObject> g_UserShimScopedObject;
extern int g_InitializeCount;
extern bool g_IsAudioStreamWorkBufferCreated;

namespace detail {

class IVirtualCameraShimScopedObject : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result EnableVirtualCamera() = 0;
  virtual Result DisableVirtualCamera() = 0;
};

extern sf::SharedPointer<IVirtualCameraShimScopedObject>
  g_VirtualCameraShimScopedObject;

void InitializeUserService();
void FinalizeUserService();
void InitializeUserSelectiveTalkShimScopedObject();
void InitializeVirtualCameraService(sf::SharedPointer<IUserService> service);
void FinalizeVirtualCameraService();
Result ShowAppletForChatStart(const ChatStartArgument& argument);
void ShowAppletForCameraSharingGuide();

}

}

namespace nn::chat0 {

struct SelectiveTalkEntry;

class IUserSelectiveTalkShimScopedObject : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateSelectiveTalkSession(
    const sf::InArray<SelectiveTalkEntry>& entries) = 0;
  virtual Result EnterSelectiveTalk() = 0;
  virtual Result LeaveSelectiveTalk() = 0;
  virtual Result DestroySelectiveTalkSession() = 0;
  virtual Result GetSelectiveTalkEntryList(sf::Out<int> pOutCount,
    const sf::OutArray<SelectiveTalkEntry>& outEntries,
    sf::Out<bool> pOutIsUpdated, account::NetworkServiceAccountId id) = 0;
  virtual Result GetSelectiveTalkEntryListChangeEvent(
    sf::Out<sf::NativeHandle> pOutHandle) = 0;
};

}

namespace nn::chat {

extern sf::SharedPointer<chat0::IUserSelectiveTalkShimScopedObject>
  g_UserSelectiveTalkShimScopedObject;

}
