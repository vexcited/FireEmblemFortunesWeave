#include <algorithm>
#include <mutex>

#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/hid_key_code_composer.hpp"
#include "nn/hid/hid_sensor.hpp"
#include "nn/hid/hid_types.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::applet {

void GetAppletResourceUserIdOfCallerApplet(AppletResourceUserId* pOutAruid);

}

namespace nn::hid {

struct SensorFusionHandle;

struct StrapGuideArg {
  void SetDefault();

  uint8_t reserved[0x20];
};

namespace utility {

void GetConsoleSixAxisSensorHandle(ConsoleSixAxisSensorHandle* pOutHandle);
Result GetSixAxisSensorHandle(SixAxisSensorHandle* pOutHandles,
  int* pOutCount, int count, NpadIdType id, NpadStyleSet style);

}

namespace detail {

Result GetGyroBias(util::Float3* pOutBias);
Result InitializeGesture(int width, int height);
Result InitializeTouchScreen(int width, int height);
Result SetSupportedNpadStyleSet(NpadStyleSet style);
Result SetNpadAnalogStickUseCenterClamp(bool isEnabled);
Result SetNpadGcAnalogStick8bitRawValue(bool isEnabled);
Result GetControlPadRestrictionType(NpadStyleSet style,
  ControlPadRestrictionType* pOutType);
Result GetPalmaConnectionHandle(PalmaConnectionHandle* pOutHandle,
  const NpadIdType& id);
Result BindPalmaOperationCompleteEvent(const PalmaConnectionHandle& handle,
  os::SystemEventType* pEvent, os::EventClearMode clearMode);
Result GetPalmaOperationInfo(PalmaOperationInfo* pOutInfo,
  const PalmaConnectionHandle& handle);
Result ReadPalmaApplicationSection(const PalmaConnectionHandle& handle,
  int offset, size_t size);
Result WritePalmaActivityEntry(const PalmaConnectionHandle& handle,
  const uint16_t& index, const PalmaActivityEntry* pEntry);
Result WritePalmaRgbLedPatternEntry(const PalmaConnectionHandle& handle,
  const uint16_t& index, const void* pBuffer, size_t size);
Result WritePalmaWaveEntry(const PalmaConnectionHandle& handle,
  const PalmaWaveSet& waveSet, const uint16_t& index, const void* pBuffer,
  size_t bufferSize, size_t size);
Result GetPalmaBluetoothAddress(bluetooth::Address* pOutAddress,
  const PalmaConnectionHandle& handle);
Result IsSixAxisSensorDeviceNewlyAssigned(bool* pOutIsAssigned,
  const SixAxisSensorHandle& handle);
Result EnableNxTouchScreenEmulationForTouchEnter(bool isEnabled);
Result GetVibrationDeviceInfo(VibrationDeviceInfo* pOutInfo,
  const VibrationDeviceHandle& handle);
Result GetActualVibrationValue(VibrationValue* pOutValue,
  const VibrationDeviceHandle& handle);
Result SetVibrationNxCompatibleMode(bool isEnabled);
Result GetActualVibrationGcErmCommand(VibrationGcErmCommand* pOutCommand,
  const VibrationDeviceHandle& handle);
Result InitializeNmouse(void* pBuffer, size_t size, int width, int height,
  NmousePointerType type);

struct NpadImuState {
  os::SdkMutex mutex;
  void* pBuffer;
};

extern NpadImuState g_NpadImuState;

}

namespace {

constexpr int ScreenWidth = 1920;
constexpr int ScreenHeight = 1080;
constexpr size_t PalmaApplicationSectionSizeMax = 0x100;
constexpr size_t SensorFusionImuBufferSizeMax = 0x4000;

}

bool IsNpadImuEnabled();
Result EnableNpadImu(void* pBuffer, size_t size);
int GetNpadImuHandles(NpadImuHandle* pOutHandles, int count,
  const NpadIdType& id, NpadStyleSet style);

void GetSixAxisSensorHandle(ConsoleSixAxisSensorHandle* pOutHandle) {
  utility::GetConsoleSixAxisSensorHandle(pOutHandle);
}

namespace debug {

util::Float3 GetGyroBias() {
  util::Float3 bias = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetGyroBias(&bias));
  return bias;
}

}

void InitializeGesture() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::InitializeGesture(ScreenWidth, ScreenHeight));
}

void SetSupportedNpadStyleSet(NpadStyleSet style) {
  NN_ABORT_UNLESS(style._storage[0] != UINT32_MAX);
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSupportedNpadStyleSet(style));
}

void EnableNpadAnalogStickCenterClamp() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetNpadAnalogStickUseCenterClamp(true));
}

void DisableNpadAnalogStickCenterClamp() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetNpadAnalogStickUseCenterClamp(false));
}

void EnableNpadGcAnalogStick8bitRawValue() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetNpadGcAnalogStick8bitRawValue(true));
}

void DisableNpadGcAnalogStick8bitRawValue() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetNpadGcAnalogStick8bitRawValue(false));
}

// Npad IMU handles share the layout of six axis sensor handles.
int GetNpadImuHandles(NpadImuHandle* pOutHandles, int count,
  const NpadIdType& id, NpadStyleSet style) {
  int outCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::GetSixAxisSensorHandle(
    reinterpret_cast<SixAxisSensorHandle*>(pOutHandles), &outCount, count,
    id, style));
  return outCount;
}

bool IsNpadImuEnabled() {
  std::lock_guard<os::SdkMutex> lock(detail::g_NpadImuState.mutex);
  return detail::g_NpadImuState.pBuffer != nullptr;
}

ControlPadRestrictionType GetControlPadRestrictionType(NpadStyleSet style) {
  ControlPadRestrictionType type = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetControlPadRestrictionType(style, &type));
  return type;
}

Result GetPalmaConnectionHandle(PalmaConnectionHandle* pOutHandle,
  const NpadIdType& id) {
  NN_ABORT_UNLESS_NOT_NULL(pOutHandle);
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::VerifyValidNpadId(id));
  return detail::GetPalmaConnectionHandle(pOutHandle, id);
}

Result BindPalmaOperationCompleteEvent(const PalmaConnectionHandle& handle,
  os::SystemEventType* pEvent, os::EventClearMode clearMode) {
  NN_ABORT_UNLESS_NOT_NULL(pEvent);
  return detail::BindPalmaOperationCompleteEvent(handle, pEvent, clearMode);
}

Result GetPalmaOperationInfo(PalmaOperationInfo* pOutInfo,
  const PalmaConnectionHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutInfo);
  return detail::GetPalmaOperationInfo(pOutInfo, handle);
}

Result ReadPalmaApplicationSection(const PalmaConnectionHandle& handle,
  int offset, size_t size) {
  NN_ABORT_UNLESS(size <= PalmaApplicationSectionSizeMax);
  return detail::ReadPalmaApplicationSection(handle, offset, size);
}

Result WritePalmaActivityEntry(const PalmaConnectionHandle& handle,
  const uint16_t& index, const PalmaActivityEntry* pEntry) {
  NN_ABORT_UNLESS_NOT_NULL(pEntry);
  return detail::WritePalmaActivityEntry(handle, index, pEntry);
}

Result WritePalmaRgbLedPatternEntry(const PalmaConnectionHandle& handle,
  const uint16_t& index, const void* pBuffer, size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(pBuffer);
  return detail::WritePalmaRgbLedPatternEntry(handle, index, pBuffer, size);
}

Result WritePalmaWaveEntry(const PalmaConnectionHandle& handle,
  const PalmaWaveSet& waveSet, const uint16_t& index, const void* pBuffer,
  size_t bufferSize, size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(pBuffer);
  return detail::WritePalmaWaveEntry(handle, waveSet, index, pBuffer,
    bufferSize, size);
}

Result GetPalmaBluetoothAddress(bluetooth::Address* pOutAddress,
  const PalmaConnectionHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutAddress);
  return detail::GetPalmaBluetoothAddress(pOutAddress, handle);
}

int GetSixAxisSensorHandles(SixAxisSensorHandle* pOutHandles, int count,
  const NpadIdType& id, NpadStyleSet style) {
  int outCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(utility::GetSixAxisSensorHandle(pOutHandles,
    &outCount, count, id, style));
  return outCount;
}

bool IsSixAxisSensorDeviceNewlyAssigned(const SixAxisSensorHandle& handle) {
  bool isAssigned = false;
  const Result result =
    detail::IsSixAxisSensorDeviceNewlyAssigned(&isAssigned, handle);
  return result.IsSuccess() && isAssigned;
}

void InitializeTouchScreen() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::InitializeTouchScreen(ScreenWidth, ScreenHeight));
}

void EnableNxTouchScreenEmulationForTouchEnter() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::EnableNxTouchScreenEmulationForTouchEnter(true));
}

void DisableNxTouchScreenEmulationForTouchEnter() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::EnableNxTouchScreenEmulationForTouchEnter(false));
}

void GetVibrationDeviceInfo(VibrationDeviceInfo* pOutInfo,
  const VibrationDeviceHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutInfo);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetVibrationDeviceInfo(pOutInfo, handle));
}

void GetActualVibrationValue(VibrationValue* pOutValue,
  const VibrationDeviceHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetActualVibrationValue(pOutValue, handle));
}

void EnableVibrationNxCompatibleMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetVibrationNxCompatibleMode(true));
}

void DisableVibrationNxCompatibleMode() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetVibrationNxCompatibleMode(false));
}

void GetActualVibrationGcErmCommand(VibrationGcErmCommand* pOutCommand,
  const VibrationDeviceHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutCommand);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetActualVibrationGcErmCommand(pOutCommand, handle));
}

KeyCodeComposer::KeyCodeComposer() : m_Storage() {
  kpr::detail::InitializeKeyCodeComposer(&m_Storage);
}

void InitializeNmouse(void* pBuffer, size_t size, int width, int height) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::InitializeNmouse(pBuffer, size,
    width, height, NmousePointerType()));
}

size_t GetSensorFusionMemorySize() {
  return 0x8000;
}

size_t GetSensorFusionWorkBufferSize() {
  return 0x8400;
}

void InitializeSensorFusion(void* pBuffer, size_t size) {
  if (!IsNpadImuEnabled()) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(EnableNpadImu(pBuffer,
      std::min(size, SensorFusionImuBufferSizeMax)));
  }
}

int GetSensorFusionHandles(SensorFusionHandle* pOutHandles, int count,
  const NpadIdType& id, NpadStyleSet style) {
  return GetNpadImuHandles(reinterpret_cast<NpadImuHandle*>(pOutHandles),
    count, id, style);
}

void StrapGuideArg::SetDefault() {
  *this = {};
}

namespace utility {

applet::AppletResourceUserId GetAppletResourceUserId() {
  return applet::GetAppletResourceUserId();
}

void GetAppletResourceUserIdOfCallerApplet(
  applet::AppletResourceUserId* pOutAruid) {
  applet::GetAppletResourceUserIdOfCallerApplet(pOutAruid);
}

}

}
