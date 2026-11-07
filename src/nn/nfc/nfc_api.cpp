#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event.hpp"
#include "nn/os/time.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::err {

void ShowError(Result result);

}

namespace nn::os {

void SleepThread(TimeSpan time);

}

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

bool IsErrorVisible();

namespace detail {

extern bool g_IsErrorVisible;

Result CheckError(const Result& result);

}

namespace {

constexpr Result ResultNfcNotAvailable = {0x807f};
constexpr uint32_t ResultInvalidDeviceState = 0xd201;
constexpr TimeSpan RetryWaitTime = {50000000};

[[gnu::always_inline]] inline void AbortUnlessSuccess(Result result) {
  if (result.IsFailure()) {
    diag::detail::AbortImpl(&result);
  }
}

bool IsCreatedInterface() {
  return client::IsCreatedSystemInterface() ||
    client::IsCreatedUserInterface();
}

// Call the method on the system interface when it exists, else on the user
// interface.
#define NN_NFC_CALL(method, ...) \
  (client::IsCreatedSystemInterface() ? \
    client::GetSystemInterface()->method(__VA_ARGS__) : \
    client::GetUserInterfaceForCommon()->method(__VA_ARGS__))

Result AttachEvent(os::SystemEventType* pEvent, sf::NativeHandle& handle,
  Result result) {
  NN_ABORT_UNLESS(result.GetInnerValueForDebug() != ResultInvalidDeviceState);
  NN_RESULT_DO(detail::CheckError(result));
  os::AttachReadableHandleToSystemEvent(pEvent, handle.GetOsHandle(),
    handle.IsManaged(), os::EventClearMode_AutoClear);
  handle.Detach();
  return Result();
}

}

Result detail::CheckError(const Result& result) {
  if (result.IsSuccess()) {
    return result;
  }

  const uint32_t module = result.value & 0x1ff;
  const uint32_t description = (result.value >> 9) & 0x1fff;
  if (module == 127 && description >= 112 && description <= 115) {
    if (IsErrorVisible()) {
      err::ShowError(result);
    }

    return ResultNfcNotAvailable;
  }

  // Busy controllers get a short pause before the caller retries.
  if (module == 127 && description >= 75 && description <= 79) {
    os::SleepThread(RetryWaitTime);
    return result;
  }

  return result;
}

State GetState() {
  if (!client::IsCreatedUserInterface() &&
    !client::IsCreatedSystemInterface()) {
    return State_None;
  }

  State state = State_None;
  AbortUnlessSuccess(NN_NFC_CALL(GetState, sf::Out<State>(&state)));
  return state;
}

DeviceState GetDeviceState(const DeviceHandle& handle) {
  if (!client::IsCreatedUserInterface() &&
    !client::IsCreatedSystemInterface()) {
    return DeviceState_Unexpected;
  }

  DeviceState state = {};
  AbortUnlessSuccess(NN_NFC_CALL(GetDeviceState,
    sf::Out<DeviceState>(&state), handle));
  return state;
}

bool IsNfcEnabled() {
  bool isEnabled = false;
  AbortUnlessSuccess(NN_NFC_CALL(IsNfcEnabled, sf::Out<bool>(&isEnabled)));
  return isEnabled;
}

void SetErrorVisible(bool isVisible) {
  NN_ABORT_UNLESS(IsCreatedInterface());
  detail::g_IsErrorVisible = isVisible;
}

bool IsErrorVisible() {
  NN_ABORT_UNLESS(IsCreatedInterface());
  return detail::g_IsErrorVisible;
}

Result AttachActivateEvent(os::SystemEventType* pEvent,
  const DeviceHandle& handle) {
  sf::NativeHandle eventHandle;
  const Result result = NN_NFC_CALL(AttachActivateEvent,
    sf::Out<sf::NativeHandle>(&eventHandle), handle);
  return AttachEvent(pEvent, eventHandle, result);
}

Result AttachDeactivateEvent(os::SystemEventType* pEvent,
  const DeviceHandle& handle) {
  sf::NativeHandle eventHandle;
  const Result result = NN_NFC_CALL(AttachDeactivateEvent,
    sf::Out<sf::NativeHandle>(&eventHandle), handle);
  return AttachEvent(pEvent, eventHandle, result);
}

void AttachAvailabilityChangeEvent(os::SystemEventType* pEvent) {
  sf::NativeHandle eventHandle;
  const Result result = NN_NFC_CALL(AttachAvailabilityChangeEvent,
    sf::Out<sf::NativeHandle>(&eventHandle));
  NN_ABORT_UNLESS(result.GetInnerValueForDebug() != ResultInvalidDeviceState);
  AbortUnlessSuccess(result);
  os::AttachReadableHandleToSystemEvent(pEvent, eventHandle.GetOsHandle(),
    eventHandle.IsManaged(), os::EventClearMode_AutoClear);
  eventHandle.Detach();
}

void Initialize() {
  NN_ABORT_UNLESS(!client::IsCreatedSystemInterface());
  NN_ABORT_UNLESS(!client::IsCreatedUserInterface());
  client::CreateUserInterface();
  const sf::InArray<McuVersionData> versions(client::RequiredMcuVersionData,
    2);
  const applet::AppletResourceUserId aruid =
    applet::GetAppletResourceUserId();
  AbortUnlessSuccess(
    client::GetUserInterface()->Initialize(aruid, 0, versions));
  SetErrorVisible(true);
}

void Finalize() {
  AbortUnlessSuccess(client::GetUserInterface()->Finalize());
  client::DestroyUserInterface();
}

Result ReadMifare(MifareReadBlockData* pOutData, const DeviceHandle& handle,
  const MifareReadBlockParameter* pParameters, size_t count) {
  const sf::OutArray<MifareReadBlockData> outData(pOutData, count);
  const sf::InArray<MifareReadBlockParameter> parameters(pParameters, count);
  return detail::CheckError(NN_NFC_CALL(ReadMifare, outData, handle,
    parameters));
}

Result WriteMifare(const DeviceHandle& handle,
  const MifareWriteBlockParameter* pParameters, size_t count) {
  return detail::CheckError(NN_NFC_CALL(WriteMifare, handle,
    sf::InArray<MifareWriteBlockParameter>(pParameters, count)));
}

Result GetNpadId(uint32_t* pOutNpadId, const DeviceHandle& handle) {
  return detail::CheckError(NN_NFC_CALL(GetNpadId,
    sf::Out<uint32_t>(pOutNpadId), handle));
}

Result SendCommandByPassThrough(void* pOutResponse, size_t* pOutSize,
  const DeviceHandle& handle, const void* pCommand, size_t commandSize,
  size_t responseBufferSize, TimeSpan timeout) {
  uint32_t size = 0;
  NN_RESULT_DO(detail::CheckError(NN_NFC_CALL(SendCommandByPassThrough,
    sf::OutBuffer(pOutResponse, responseBufferSize), sf::Out<uint32_t>(&size),
    handle, sf::InBuffer(pCommand, commandSize), timeout)));
  *pOutSize = size;
  return Result();
}

Result KeepPassThroughSession(const DeviceHandle& handle) {
  return detail::CheckError(NN_NFC_CALL(KeepPassThroughSession, handle));
}

Result ReleasePassThroughSession(const DeviceHandle& handle) {
  return detail::CheckError(NN_NFC_CALL(ReleasePassThroughSession, handle));
}

void InitializeSystem() {
  NN_ABORT_UNLESS(!client::IsCreatedUserInterface());
  NN_ABORT_UNLESS(!client::IsCreatedSystemInterface());
  client::CreateSystemInterface();
  const sf::InArray<McuVersionData> versions(client::RequiredMcuVersionData,
    client::RequiredMcuVersionDataCount);
  const applet::AppletResourceUserId aruid =
    applet::GetAppletResourceUserId();
  AbortUnlessSuccess(
    client::GetSystemInterface()->Initialize(aruid, 0, versions));
  SetErrorVisible(true);
}

void FinalizeSystem() {
  AbortUnlessSuccess(client::GetSystemInterface()->Finalize());
  client::DestroySystemInterface();
}

void SetNfcEnabled(bool isEnabled) {
  AbortUnlessSuccess(client::GetSystemInterface()->SetNfcEnabled(isEnabled));
}

void OutputTestWave(bool isEnabled, TestWaveType type) {
  AbortUnlessSuccess(
    client::GetSystemInterface()->OutputTestWave(isEnabled, type));
}

Result ListDevices(DeviceHandle* pOutHandles, int* pOutCount, int count) {
  int outCount = 0;
  NN_RESULT_DO(NN_NFC_CALL(ListDevices,
    sf::OutArray<DeviceHandle>(pOutHandles, count), sf::Out<int>(&outCount)));
  *pOutCount = outCount;
  return Result();
}

Result StartDetection(const DeviceHandle& handle, NfcProtocol protocol) {
  return detail::CheckError(NN_NFC_CALL(StartDetection, handle, protocol));
}

Result StartDetection(const DeviceHandle& handle) {
  return StartDetection(handle, NfcProtocol_All);
}

Result StopDetection(const DeviceHandle& handle) {
  return detail::CheckError(NN_NFC_CALL(StopDetection, handle));
}

Result GetTagInfo(TagInfo* pOutInfo, const DeviceHandle& handle) {
  return detail::CheckError(NN_NFC_CALL(GetTagInfo,
    sf::Out<TagInfo>(pOutInfo), handle));
}

#undef NN_NFC_CALL

}
