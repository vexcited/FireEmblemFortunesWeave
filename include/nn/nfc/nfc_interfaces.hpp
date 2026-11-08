#pragma once

#include "nn/applet/applet_types.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::nfc {

struct DeviceHandle {
  uint64_t value;
};

enum State : int32_t {
  State_None = 0,
};

enum DeviceState : int32_t {
  DeviceState_Unexpected = 5,
};

enum NfcProtocol : int32_t {
  NfcProtocol_All = -1,
};

enum TestWaveType : int32_t {};

struct TagInfo;
struct MifareReadBlockData;
struct MifareReadBlockParameter;
struct MifareWriteBlockParameter;
struct McuVersionData;

#define NN_NFC_INTERFACE_METHODS \
  virtual Result Initialize(applet::AppletResourceUserId aruid, \
    uint64_t processIdPlaceholder, \
    const sf::InArray<McuVersionData>& versions) = 0; \
  virtual Result Finalize() = 0; \
  virtual Result GetState(sf::Out<State> pOutState) = 0; \
  virtual Result IsNfcEnabled(sf::Out<bool> pOutIsEnabled) = 0; \
  virtual Result ListDevices(const sf::OutArray<DeviceHandle>& outHandles, \
    sf::Out<int> pOutCount) = 0; \
  virtual Result GetDeviceState(sf::Out<DeviceState> pOutState, \
    DeviceHandle handle) = 0; \
  virtual Result GetNpadId(sf::Out<uint32_t> pOutNpadId, \
    DeviceHandle handle) = 0; \
  virtual Result AttachAvailabilityChangeEvent( \
    sf::Out<sf::NativeHandle> pOutHandle) = 0; \
  virtual Result StartDetection(DeviceHandle handle, \
    NfcProtocol protocol) = 0; \
  virtual Result StopDetection(DeviceHandle handle) = 0; \
  virtual Result GetTagInfo(sf::Out<TagInfo> pOutInfo, \
    DeviceHandle handle) = 0; \
  virtual Result AttachActivateEvent(sf::Out<sf::NativeHandle> pOutHandle, \
    DeviceHandle handle) = 0; \
  virtual Result AttachDeactivateEvent( \
    sf::Out<sf::NativeHandle> pOutHandle, DeviceHandle handle) = 0

#define NN_NFC_PASS_THROUGH_METHODS \
  virtual Result ReadMifare(const sf::OutArray<MifareReadBlockData>& outData, \
    DeviceHandle handle, \
    const sf::InArray<MifareReadBlockParameter>& parameters) = 0; \
  virtual Result WriteMifare(DeviceHandle handle, \
    const sf::InArray<MifareWriteBlockParameter>& parameters) = 0; \
  virtual Result SendCommandByPassThrough(const sf::OutBuffer& outResponse, \
    sf::Out<uint32_t> pOutSize, DeviceHandle handle, \
    const sf::InBuffer& command, TimeSpan timeout) = 0; \
  virtual Result KeepPassThroughSession(DeviceHandle handle) = 0; \
  virtual Result ReleasePassThroughSession(DeviceHandle handle) = 0

class IUser : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  NN_NFC_INTERFACE_METHODS;
  NN_NFC_PASS_THROUGH_METHODS;
};

class ISystem : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual void Reserved7() = 0;
  virtual void Reserved8() = 0;
  NN_NFC_INTERFACE_METHODS;
  virtual Result SetNfcEnabled(bool isEnabled) = 0;
  virtual Result OutputTestWave(bool isEnabled, TestWaveType type) = 0;
  NN_NFC_PASS_THROUGH_METHODS;
};

#undef NN_NFC_INTERFACE_METHODS
#undef NN_NFC_PASS_THROUGH_METHODS

namespace client {

extern const McuVersionData RequiredMcuVersionData[];
extern const int RequiredMcuVersionDataCount;

void CreateUserInterface();
void DestroyUserInterface();
bool IsCreatedUserInterface();
sf::SharedPointer<IUser> GetUserInterface();
sf::SharedPointer<IUser> GetUserInterfaceForCommon();
void CreateSystemInterface();
void DestroySystemInterface();
bool IsCreatedSystemInterface();
sf::SharedPointer<ISystem> GetSystemInterface();

}

}
