#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/hid/hid_types.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/streamplay/streamplay_hid.hpp"
#include "nn/streamplay/streamplay_types.hpp"

namespace nn::streamplay {

enum StreamPlayType : uint8_t {};
enum StreamingMode : uint8_t {};
enum ConnectionState {};
enum ScreenShareTargetSetting {};

struct StreamPlayConfig {
  StreamPlayType type;
  StreamingMode mode;
};

class IUserService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetRequiredMemorySize(sf::Out<int> pOutSize,
    StreamPlayType type, StreamingMode mode, int guestCount) = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual Result CloseSession() = 0;
  virtual Result GetGuestNsaId(sf::Out<account::NetworkServiceAccountId> pOutId,
    GuestId id) = 0;
  virtual void Reserved10() = 0;
  virtual Result GetConnectionState(sf::Out<ConnectionState> pOutState) = 0;
  virtual Result GetRequiredWorkBufferSize(sf::Out<uint64_t> pOutGlobalSize,
    sf::Out<uint64_t> pOutFirstSize, sf::Out<uint64_t> pOutSecondSize,
    sf::Out<uint64_t> pOutThirdSize, StreamPlayConfig config) = 0;
  virtual Result SetSupportedGuestNpadStyleSet(hid::NpadStyleSet style) = 0;
  virtual Result GetSupportedGuestNpadStyleSet(
    sf::Out<hid::NpadStyleSet> pOutStyle) = 0;
  virtual Result SetGuestNpadJoyHoldType(hid::NpadJoyHoldType type) = 0;
  virtual Result GetGuestNpadJoyHoldType(
    sf::Out<hid::NpadJoyHoldType> pOutType) = 0;
  virtual void Reserved17() = 0;
  virtual Result GetGuestAudioStreamCapacityFrameCount(
    sf::Out<int> pOutCount) = 0;
  virtual Result GetGuestAudioStreamFreeFrameCount(sf::Out<int> pOutCount,
    GuestId id) = 0;
  virtual Result GetGuestAudioStreamFilledFrameCount(sf::Out<int> pOutCount,
    GuestId id) = 0;
  virtual Result DisconnectGuest(GuestId id) = 0;
  virtual Result SetGuestTouchScreenOutputRange(int width, int height) = 0;
  virtual Result SendGuestVibrationValue(GuestVibrationDeviceHandle handle,
    const hid::VibrationValue& value) = 0;
  virtual Result SetGuestVibrationNxCompatibleMode(bool isEnabled) = 0;
  virtual Result SetGuestMergedNmouseSourceTypes(
    GuestNmouseTypeSet types) = 0;
  virtual Result SetGuestNmousePointerRanges(int width, int height) = 0;
  virtual Result GetGuestNmousePointerRanges(sf::Out<int> pOutWidth,
    sf::Out<int> pOutHeight) = 0;
  virtual Result SetGuestNmouseButtonConfigJoyLeftJcms(
    hid::NmouseButtonConfigJoyLeftJcms config) = 0;
  virtual Result SetGuestNmouseButtonConfigJoyRightJcms(
    hid::NmouseButtonConfigJoyRightJcms config) = 0;
  virtual Result EnableGuestNmousePointer(GuestNmouseHandle handle,
    bool isEnabled) = 0;
  virtual Result SetGuestNmousePointerPosition(GuestNmouseHandle handle,
    int x, int y) = 0;
  virtual Result SetGuestNmousePointerMovementArea(int left, int top,
    int right, int bottom) = 0;
  virtual Result SetSupportedHidFeatureSet(HidFeatureSet features) = 0;
  virtual Result GetSupportedHidFeatureSet(
    sf::Out<HidFeatureSet> pOutFeatures) = 0;
  virtual Result EnableGuestNxTouchScreenEmulationForTouchEnter() = 0;
  virtual Result DisableGuestNxTouchScreenEmulationForTouchEnter() = 0;
  virtual Result GetGuestNickname(sf::Out<account::Nickname> pOutNickname,
    GuestId id) = 0;
  virtual Result GetGuestProfileImage(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& buffer, GuestId id) = 0;
  virtual void Reserved39() = 0;
  virtual void Reserved40() = 0;
  virtual void Reserved41() = 0;
  virtual void Reserved42() = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual void Reserved46() = 0;
  virtual void Reserved47() = 0;
  virtual Result UpdateScreenShareTargetSetting(
    ScreenShareTargetSetting setting) = 0;
};

}

namespace nn::streamplay::detail {

extern os::SdkMutex g_StreamplayStateMutex;
extern bool g_IsInitialized;
extern bool g_IsFreeCommunicationEnabled;
extern bool g_IsStreamingStarted;
extern uint64_t g_UserMemoryUsedOffset;
extern sf::SharedPointer<IUserService> g_UserService;

struct TransferMemorySet {
  uint32_t handle;
  size_t size;
};

struct WorkBufferPerGuest {
  TransferMemorySet third;
  TransferMemorySet second;
  TransferMemorySet first;
};

sf::SharedPointer<IUserService> GetUserService();
bool IsAbortNeeded(Result result);
void CalculateRequiredWorkBufferSizePerInterfaceAndGlobal(
  uint64_t* pOutPerInterfaceSize, uint64_t* pOutGlobalSize,
  StreamPlayType type, StreamingMode mode);
uint64_t CalculateRequiredWorkBufferSizePerInterface(StreamPlayType type,
  StreamingMode mode);
int CalculateGuestCountFromMemorySize(int memorySize, StreamPlayType type,
  StreamingMode mode);
void CreateTransferMemory(TransferMemorySet* pOutSet, void* address,
  size_t size);
TransferMemorySet CreateWorkBufferInProcessGlobal(StreamPlayType type,
  StreamingMode mode, void* buffer, size_t size);
WorkBufferPerGuest CreateWorkBufferPerGuest(StreamPlayType type,
  StreamingMode mode, void* buffer, size_t size);

}
