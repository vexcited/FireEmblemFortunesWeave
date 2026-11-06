#include <stdint.h>

#include "nn/hid/detail/hid_server.hpp"
#include "nn/sf/cmif/client/cmif_proxy.hpp"

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<hid::IHidServer, Kind, AllocationPolicy, hid::IHidServer,
  Modifier> : public CmifProxyImplBase<hid::IHidServer, Kind> {
public:
  Result ActivateDebugPad(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1, p0);
  }

  Result ActivateTouchScreen(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 11, p0);
  }

  Result ActivateMouse(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 21, p0);
  }

  Result ActivateDebugMouse(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 26, p0);
  }

  Result ActivateKeyboard(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 31, p0);
  }

  Result SendKeyboardLockKeyEvent(
    applet::AppletResourceUserId p0,
    util::BitFlagSet<32, hid::KeyboardLockKeyEvent> p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      util::BitFlagSet<32, hid::KeyboardLockKeyEvent>)>::Invoke(&this->m_State,
      32, p0, p1);
  }

  Result InitializeXpad(
    applet::AppletResourceUserId p0, hid::BasicXpadId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::BasicXpadId)>::Invoke(
      &this->m_State, 51, p0, p1);
  }

  Result GetXpadIds(
    int64_t* p0, const sf::OutArray<hid::BasicXpadId>& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*, const sf::OutArray<hid::BasicXpadId>&)>::Invoke(
      &this->m_State, 55, p0, p1);
  }

  Result StartSixAxisSensor(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 66, p0, p1);
  }

  Result StopSixAxisSensor(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 67, p0, p1);
  }

  Result IsSixAxisSensorFusionEnabled(
    bool* p0, applet::AppletResourceUserId p1,
    hid::SixAxisSensorHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 68, p0, p1, p2);
  }

  Result EnableSixAxisSensorFusion(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1,
    bool p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle,
      bool)>::Invoke(&this->m_State, 69, p0, p1, p2);
  }

  Result SetSixAxisSensorFusionParameters(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1, float p2,
    float p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle, float,
      float)>::Invoke(&this->m_State, 70, p0, p1, p2, p3);
  }

  Result GetSixAxisSensorFusionParameters(
    float* p0, float* p1, applet::AppletResourceUserId p2,
    hid::SixAxisSensorHandle p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(float*, float*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 71, p0, p1, p2, p3);
  }

  Result ResetSixAxisSensorFusionParameters(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 72, p0, p1);
  }

  Result SetAccelerometerParameters(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1, float p2,
    float p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle, float,
      float)>::Invoke(&this->m_State, 73, p0, p1, p2, p3);
  }

  Result GetAccelerometerParameters(
    float* p0, float* p1, applet::AppletResourceUserId p2,
    hid::SixAxisSensorHandle p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(float*, float*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 74, p0, p1, p2, p3);
  }

  Result ResetAccelerometerParameters(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 75, p0, p1);
  }

  Result SetAccelerometerPlayMode(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1,
    hid::debug::AccelerometerPlayMode p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle,
      hid::debug::AccelerometerPlayMode)>::Invoke(&this->m_State, 76, p0, p1,
      p2);
  }

  Result GetAccelerometerPlayMode(
    hid::debug::AccelerometerPlayMode* p0, applet::AppletResourceUserId p1,
    hid::SixAxisSensorHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::debug::AccelerometerPlayMode*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 77, p0, p1, p2);
  }

  Result ResetAccelerometerPlayMode(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 78, p0, p1);
  }

  Result SetGyroscopeZeroDriftMode(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1,
    hid::GyroscopeZeroDriftMode p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle,
      hid::GyroscopeZeroDriftMode)>::Invoke(&this->m_State, 79, p0, p1, p2);
  }

  Result GetGyroscopeZeroDriftMode(
    hid::GyroscopeZeroDriftMode* p0, applet::AppletResourceUserId p1,
    hid::SixAxisSensorHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::GyroscopeZeroDriftMode*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 80, p0, p1, p2);
  }

  Result ResetGyroscopeZeroDriftMode(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 81, p0, p1);
  }

  Result IsSixAxisSensorAtRest(
    bool* p0, applet::AppletResourceUserId p1,
    hid::SixAxisSensorHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 82, p0, p1, p2);
  }

  Result EnableSixAxisSensorPassthrough(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1,
    bool p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle,
      bool)>::Invoke(&this->m_State, 84, p0, p1, p2);
  }

  Result IsSixAxisSensorPassthroughEnabled(
    bool* p0, applet::AppletResourceUserId p1,
    hid::SixAxisSensorHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 85, p0, p1, p2);
  }

  Result StoreSixAxisSensorCalibrationParameter(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1,
    const hid::SixAxisSensorCalibrationParameter& p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle,
      const hid::SixAxisSensorCalibrationParameter&)>::Invoke(&this->m_State,
      86, p0, p1, p2);
  }

  Result LoadSixAxisSensorCalibrationParameter(
    applet::AppletResourceUserId p0, hid::SixAxisSensorCalibrationParameter* p1,
    hid::SixAxisSensorHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::SixAxisSensorCalibrationParameter*,
      hid::SixAxisSensorHandle)>::Invoke(&this->m_State, 87, p0, p1, p2);
  }

  Result ResetIsSixAxisSensorDeviceNewlyAssigned(
    applet::AppletResourceUserId p0, hid::SixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::SixAxisSensorHandle)>::Invoke(
      &this->m_State, 89, p0, p1);
  }

  Result ActivateGesture(applet::AppletResourceUserId p0, int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int)>::Invoke(&this->m_State, 91, p0,
      p1);
  }

  Result SetGestureOutputRanges(
    applet::AppletResourceUserId p0, int p1, int p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int, int)>::Invoke(&this->m_State, 92,
      p0, p1, p2);
  }

  Result SetSupportedNpadStyleSet(
    applet::AppletResourceUserId p0,
    util::BitFlagSet<32, hid::NpadStyleTag> p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      util::BitFlagSet<32, hid::NpadStyleTag>)>::Invoke(&this->m_State, 100, p0,
      p1);
  }

  Result GetSupportedNpadStyleSet(
    applet::AppletResourceUserId p0,
    util::BitFlagSet<32, hid::NpadStyleTag>* p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      util::BitFlagSet<32, hid::NpadStyleTag>*)>::Invoke(&this->m_State, 101,
      p0, p1);
  }

  Result SetSupportedNpadIdType(
    applet::AppletResourceUserId p0,
    const sf::InArray<hid::NpadIdType>& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId,
      const sf::InArray<hid::NpadIdType>&)>::Invoke(&this->m_State, 102, p0,
      p1);
  }

  Result AcquireNpadStyleSetUpdateEventHandle(
    applet::AppletResourceUserId p0, sf::NativeHandle* p1, hid::NpadIdType p2,
    uint64_t p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, sf::NativeHandle*, hid::NpadIdType,
      uint64_t)>::Invoke(&this->m_State, 106, p0, p1, p2, p3);
  }

  Result DisconnectNpad(
    applet::AppletResourceUserId p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int)>::Invoke(&this->m_State,
      107, p0, p1);
  }

  Result GetPlayerLedPattern(unsigned char* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(unsigned char*, unsigned int)>::Invoke(&this->m_State, 108, p0, p1);
  }

  Result ActivateNpadWithRevision(
    applet::AppletResourceUserId p0, int32_t p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int32_t)>::Invoke(&this->m_State, 109,
      p0, p1);
  }

  Result SetNpadJoyHoldType(
    applet::AppletResourceUserId p0, hid::NpadJoyHoldType p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::NpadJoyHoldType)>::Invoke(
      &this->m_State, 120, p0, p1);
  }

  Result SetNpadJoyAssignmentModeSingle(
    applet::AppletResourceUserId p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int)>::Invoke(&this->m_State,
      122, p0, p1);
  }

  Result SetNpadJoyAssignmentModeSingle(
    applet::AppletResourceUserId p0, unsigned int p1,
    hid::NpadJoyDeviceType p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int,
      hid::NpadJoyDeviceType)>::Invoke(&this->m_State, 123, p0, p1, p2);
  }

  Result SetNpadJoyAssignmentModeDual(
    applet::AppletResourceUserId p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int)>::Invoke(&this->m_State,
      124, p0, p1);
  }

  Result MergeSingleJoyAsDualJoy(
    applet::AppletResourceUserId p0, unsigned int p1,
    unsigned int p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int, unsigned int)>::Invoke(
      &this->m_State, 125, p0, p1, p2);
  }

  Result StartLrAssignmentMode(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 126, p0);
  }

  Result StopLrAssignmentMode(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 127, p0);
  }

  Result SetNpadHandheldActivationMode(
    applet::AppletResourceUserId p0,
    hid::NpadHandheldActivationMode p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::NpadHandheldActivationMode)>::Invoke(&this->m_State, 128, p0, p1);
  }

  Result GetNpadHandheldActivationMode(
    applet::AppletResourceUserId p0, int64_t* p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int64_t*)>::Invoke(&this->m_State, 129,
      p0, p1);
  }

  Result SwapNpadAssignment(
    applet::AppletResourceUserId p0, unsigned int p1,
    unsigned int p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int, unsigned int)>::Invoke(
      &this->m_State, 130, p0, p1, p2);
  }

  Result EnableUnintendedHomeButtonInputProtection(
    applet::AppletResourceUserId p0, unsigned int p1, bool p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int, bool)>::Invoke(
      &this->m_State, 132, p0, p1, p2);
  }

  Result SetNpadJoyAssignmentModeSingle(
    bool* p0, unsigned int* p1, applet::AppletResourceUserId p2,
    unsigned int p3, hid::NpadJoyDeviceType p4) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, unsigned int*, applet::AppletResourceUserId, unsigned int,
      hid::NpadJoyDeviceType)>::Invoke(&this->m_State, 133, p0, p1, p2, p3, p4);
  }

  Result SetNpadAnalogStickUseCenterClamp(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 134, p0,
      p1);
  }

  Result SetNpadCaptureButtonAssignment(
    applet::AppletResourceUserId p0, util::BitFlagSet<32, hid::NpadStyleTag> p1,
    util::BitFlagSet<64, hid::NpadButton> p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      util::BitFlagSet<32, hid::NpadStyleTag>,
      util::BitFlagSet<64, hid::NpadButton>)>::Invoke(&this->m_State, 135, p0,
      p1, p2);
  }

  Result ClearNpadCaptureButtonAssignment(
    applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 136, p0);
  }

  Result SetNpadGcAnalogStick8bitRawValue(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 137, p0,
      p1);
  }

  Result SetSceneIdForPrivateApp(
    applet::AppletResourceUserId p0, int32_t p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int32_t)>::Invoke(&this->m_State, 138,
      p0, p1);
  }

  Result GetSceneIdForPrivateApp(
    int* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(int*, applet::AppletResourceUserId)>::Invoke(&this->m_State, 139, p0,
      p1);
  }

  Result PermitVibration(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 204, p0);
  }

  Result IsVibrationPermitted(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 205, p0);
  }

  Result SendVibrationGcErmCommand(
    applet::AppletResourceUserId p0, hid::VibrationDeviceHandle p1,
    hid::VibrationGcErmCommand p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::VibrationDeviceHandle,
      hid::VibrationGcErmCommand)>::Invoke(&this->m_State, 207, p0, p1, p2);
  }

  Result GetActualVibrationGcErmCommand(
    hid::VibrationGcErmCommand* p0, applet::AppletResourceUserId p1,
    hid::VibrationDeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::VibrationGcErmCommand*, applet::AppletResourceUserId,
      hid::VibrationDeviceHandle)>::Invoke(&this->m_State, 208, p0, p1, p2);
  }

  Result BeginPermitVibrationSession(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 209, p0);
  }

  Result EndPermitVibrationSession() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 210);
  }

  Result IsVibrationDeviceMounted(
    bool* p0, applet::AppletResourceUserId p1,
    hid::VibrationDeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId,
      hid::VibrationDeviceHandle)>::Invoke(&this->m_State, 211, p0, p1, p2);
  }

  Result IsOunceVibrationDeviceMounted(
    bool* p0, applet::AppletResourceUserId p1,
    hid::VibrationDeviceHandle p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId,
      hid::VibrationDeviceHandle)>::Invoke(&this->m_State, 220, p0, p1, p2);
  }

  Result StartSixAxisSensor(
    applet::AppletResourceUserId p0,
    hid::ConsoleSixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::ConsoleSixAxisSensorHandle)>::Invoke(&this->m_State, 301, p0, p1);
  }

  Result StopSixAxisSensor(
    applet::AppletResourceUserId p0,
    hid::ConsoleSixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::ConsoleSixAxisSensorHandle)>::Invoke(&this->m_State, 302, p0, p1);
  }

  Result StartSevenSixAxisSensor(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 304, p0);
  }

  Result StopSevenSixAxisSensor(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 305, p0);
  }

  Result FinalizeSevenSixAxisSensor(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 307, p0);
  }

  Result SetSevenSixAxisSensorFusionStrength(
    applet::AppletResourceUserId p0, float p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, float)>::Invoke(&this->m_State, 308,
      p0, p1);
  }

  Result GetSevenSixAxisSensorFusionStrength(
    float* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(float*, applet::AppletResourceUserId)>::Invoke(&this->m_State, 309,
      p0, p1);
  }

  Result ResetSevenSixAxisSensorTimestamp(
    applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 310, p0);
  }

  Result IsUsbFullKeyControllerEnabledForApplication(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 400, p0);
  }

  Result EnableUsbFullKeyControllerForApplication(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 401, p0);
  }

  Result IsUsbFullKeyControllerConnectedForApplication(
    bool* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, unsigned int)>::Invoke(&this->m_State, 402, p0, p1);
  }

  Result GetNpadOfHighestBatteryLevel(
    hid::NpadIdType* p0, const sf::InArray<hid::NpadIdType>& p1,
    applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::NpadIdType*, const sf::InArray<hid::NpadIdType>&,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 407, p0, p1, p2);
  }

  Result GetPalmaConnectionHandle(
    hid::PalmaConnectionHandle* p0, unsigned int p1,
    applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::PalmaConnectionHandle*, unsigned int,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 500, p0, p1, p2);
  }

  Result InitializePalma(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 501, p0);
  }

  Result AcquirePalmaOperationCompleteEvent(
    sf::NativeHandle* p0, hid::PalmaConnectionHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, hid::PalmaConnectionHandle)>::Invoke(
      &this->m_State, 502, p0, p1);
  }

  Result GetPalmaOperationInfo(
    uint64_t* p0, const sf::OutBuffer& p1,
    hid::PalmaConnectionHandle p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t*, const sf::OutBuffer&,
      hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 503, p0, p1, p2);
  }

  Result PlayPalmaActivity(
    hid::PalmaConnectionHandle p0, unsigned short p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, unsigned short)>::Invoke(&this->m_State,
      504, p0, p1);
  }

  Result SetPalmaFrModeType(
    hid::PalmaConnectionHandle p0, hid::PalmaFrModeType p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, hid::PalmaFrModeType)>::Invoke(
      &this->m_State, 505, p0, p1);
  }

  Result ReadPalmaStep(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 506, p0);
  }

  Result EnablePalmaStep(hid::PalmaConnectionHandle p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, bool)>::Invoke(&this->m_State, 507, p0,
      p1);
  }

  Result ResetPalmaStep(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 508, p0);
  }

  Result ReadPalmaApplicationSection(
    hid::PalmaConnectionHandle p0, int64_t p1, uint64_t p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, int64_t, uint64_t)>::Invoke(
      &this->m_State, 509, p0, p1, p2);
  }

  Result ReadPalmaUniqueCode(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 511, p0);
  }

  Result SetPalmaUniqueCodeInvalid(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 512, p0);
  }

  Result WritePalmaActivityEntry(
    hid::PalmaConnectionHandle p0, uint16_t p1, uint16_t p2,
    hid::PalmaWaveSet p3, uint16_t p4) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, uint16_t, uint16_t, hid::PalmaWaveSet,
      uint16_t)>::Invoke(&this->m_State, 513, p0, p1, p2, p3, p4);
  }

  Result WritePalmaRgbLedPatternEntry(
    hid::PalmaConnectionHandle p0, uint16_t p1,
    const sf::InBuffer& p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, uint16_t, const sf::InBuffer&)>::Invoke(
      &this->m_State, 514, p0, p1, p2);
  }

  Result SetPalmaDataBaseIdentificationVersion(
    hid::PalmaConnectionHandle p0, int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, int)>::Invoke(&this->m_State, 516, p0,
      p1);
  }

  Result GetPalmaDataBaseIdentificationVersion(
    hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 517, p0);
  }

  Result SuspendPalmaFeature(
    hid::PalmaConnectionHandle p0,
    util::BitFlagSet<32, hid::PalmaFeature> p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle,
      util::BitFlagSet<32, hid::PalmaFeature>)>::Invoke(&this->m_State, 518, p0,
      p1);
  }

  Result GetPalmaOperationResult(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 519, p0);
  }

  Result ReadPalmaPlayLog(
    hid::PalmaConnectionHandle p0, unsigned short p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, unsigned short)>::Invoke(&this->m_State,
      520, p0, p1);
  }

  Result ResetPalmaPlayLog(
    hid::PalmaConnectionHandle p0, unsigned short p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle, unsigned short)>::Invoke(&this->m_State,
      521, p0, p1);
  }

  Result EnableAnyPalmaConnection(
    applet::AppletResourceUserId p0, int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int)>::Invoke(&this->m_State, 522, p0,
      p1);
  }

  Result EnablePairedPalmaConnection(
    applet::AppletResourceUserId p0, int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int)>::Invoke(&this->m_State, 523, p0,
      p1);
  }

  Result PairPalma(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 524, p0);
  }

  Result SetPalmaBoostMode(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 525, p0);
  }

  Result CancelWritePalmaWaveEntry(hid::PalmaConnectionHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::PalmaConnectionHandle)>::Invoke(&this->m_State, 526, p0);
  }

  Result EnablePalmaBoostMode(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 527, p0,
      p1);
  }

  Result GetPalmaBluetoothAddress(
    bluetooth::Address* p0, hid::PalmaConnectionHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bluetooth::Address*, hid::PalmaConnectionHandle)>::Invoke(
      &this->m_State, 528, p0, p1);
  }

  Result SetDisallowedPalmaConnection(
    applet::AppletResourceUserId p0,
    const sf::InArray<bluetooth::Address>& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId,
      const sf::InArray<bluetooth::Address>&)>::Invoke(&this->m_State, 529, p0,
      p1);
  }

  Result GetGlGrButtonConfigState(
    bool* p0, bool* p1, unsigned int p2,
    applet::AppletResourceUserId p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, bool*, unsigned int, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 550, p0, p1, p2, p3);
  }

  Result SetNpadCommunicationMode(
    applet::AppletResourceUserId p0, hid::NpadCommunicationMode p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::NpadCommunicationMode)>::Invoke(
      &this->m_State, 1000, p0, p1);
  }

  Result GetNpadCommunicationMode(int64_t* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*)>::Invoke(&this->m_State, 1001, p0);
  }

  Result SetTouchScreenConfiguration(
    applet::AppletResourceUserId p0,
    const hid::TouchScreenConfigurationForNx& p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      const hid::TouchScreenConfigurationForNx&)>::Invoke(&this->m_State, 1002,
      p0, p1);
  }

  Result IsFirmwareUpdateNeededForNotification(
    bool* p0, int p1, applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, int, applet::AppletResourceUserId)>::Invoke(&this->m_State,
      1003, p0, p1, p2);
  }

  Result SetTouchScreenResolution(
    applet::AppletResourceUserId p0, int p1, int p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int, int)>::Invoke(&this->m_State,
      1004, p0, p1, p2);
  }

  Result EnableNxTouchScreenEmulationForTouchEnter(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 1005,
      p0, p1);
  }

  Result ActivateDigitizer(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 2000, p0);
  }

  Result FinalizeJcms(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 3111, p0);
  }

  Result StartJcms(
    applet::AppletResourceUserId p0, hid::JcmsHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::JcmsHandle)>::Invoke(
      &this->m_State, 3112, p0, p1);
  }

  Result StopJcms(
    applet::AppletResourceUserId p0, hid::JcmsHandle p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::JcmsHandle)>::Invoke(
      &this->m_State, 3113, p0, p1);
  }

  Result FinalizeNmouse(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 3131, p0);
  }

  Result SetNmousePointerRanges(
    applet::AppletResourceUserId p0, int p1, int p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int, int)>::Invoke(&this->m_State,
      3132, p0, p1, p2);
  }

  Result GetNmousePointerRanges(
    applet::AppletResourceUserId p0, int* p1, int* p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int*, int*)>::Invoke(&this->m_State,
      3133, p0, p1, p2);
  }

  Result SetNmousePointerMovementArea(
    applet::AppletResourceUserId p0, int p1, int p2, int p3, int p4) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int, int, int, int)>::Invoke(
      &this->m_State, 3134, p0, p1, p2, p3, p4);
  }

  Result EnableShowingCursor(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 3135,
      p0, p1);
  }

  Result SetNmouseButtonConfigJoyLeftJcms(
    applet::AppletResourceUserId p0,
    hid::NmouseButtonConfigJoyLeftJcms p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::NmouseButtonConfigJoyLeftJcms)>::Invoke(&this->m_State, 3136, p0,
      p1);
  }

  Result SetNmouseButtonConfigJoyRightJcms(
    applet::AppletResourceUserId p0,
    hid::NmouseButtonConfigJoyRightJcms p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::NmouseButtonConfigJoyRightJcms)>::Invoke(&this->m_State, 3137, p0,
      p1);
  }

  Result SetMergedNmouseSourceTypes(
    applet::AppletResourceUserId p0,
    util::BitFlagSet<32, hid::NmouseType> p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      util::BitFlagSet<32, hid::NmouseType>)>::Invoke(&this->m_State, 3138, p0,
      p1);
  }

  Result SetNmousePointerPosition(
    applet::AppletResourceUserId p0, hid::NmouseHandle p1, int32_t p2,
    int32_t p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::NmouseHandle, int32_t,
      int32_t)>::Invoke(&this->m_State, 3140, p0, p1, p2, p3);
  }

  Result EnableNmousePointer(
    applet::AppletResourceUserId p0, hid::NmouseHandle p1, bool p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, hid::NmouseHandle, bool)>::Invoke(
      &this->m_State, 3141, p0, p1, p2);
  }

  Result RestrictNmousePointer(
    applet::AppletResourceUserId p0, float p1, float p2, float p3,
    float p4) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, float, float, float, float)>::Invoke(
      &this->m_State, 3142, p0, p1, p2, p3, p4);
  }

  Result SetNmouseButtonConfigStandardMouse(
    applet::AppletResourceUserId p0,
    hid::NmouseButtonConfigStandardMouse p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::NmouseButtonConfigStandardMouse)>::Invoke(&this->m_State, 3143, p0,
      p1);
  }

  Result EnableMouse(applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 3150,
      p0, p1);
  }
};

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<hid::IHidSystemServer, Kind, AllocationPolicy,
  hid::IHidSystemServer, Modifier>
  : public CmifProxyImplBase<hid::IHidSystemServer, Kind> {
public:
  Result SendKeyboardLockKeyEvent(
    util::BitFlagSet<32, hid::system::KeyboardLockKeyEvent> p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(util::BitFlagSet<32, hid::system::KeyboardLockKeyEvent>)>::Invoke(
      &this->m_State, 31, p0);
  }

  Result UnsetSystemKeyboardState() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 33);
  }

  Result AcquireHomeButtonEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 101, p0, p1);
  }

  Result ActivateHomeButton() override {
    return ProxyMethodInvoker<Kind, true, void()>::Invoke(&this->m_State, 111);
  }

  Result AcquireSleepButtonEventHandle(
    sf::NativeHandle* p0, uint64_t p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, uint64_t)>::Invoke(&this->m_State, 121, p0, p1);
  }

  Result ActivateSleepButton() override {
    return ProxyMethodInvoker<Kind, true, void()>::Invoke(&this->m_State, 131);
  }

  Result AcquireCaptureButtonEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 141, p0, p1);
  }

  Result ActivateCaptureButton() override {
    return ProxyMethodInvoker<Kind, true, void()>::Invoke(&this->m_State, 151);
  }

  Result IsJoyConRailSupported(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 161, p0);
  }

  Result AcquireCButtonEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 171, p0, p1);
  }

  Result ActivateCButton() override {
    return ProxyMethodInvoker<Kind, true, void()>::Invoke(&this->m_State, 181);
  }

  Result AcquireNfcDeviceUpdateEventHandle(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 210, p0);
  }

  Result GetNpadsWithNfc(
    int64_t* p0, const sf::OutArray<hid::NpadIdType>& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*, const sf::OutArray<hid::NpadIdType>&)>::Invoke(
      &this->m_State, 211, p0, p1);
  }

  Result AcquireNfcActivateEventHandle(
    sf::NativeHandle* p0, hid::NpadIdType p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, hid::NpadIdType)>::Invoke(&this->m_State, 212, p0,
      p1);
  }

  Result ActivateNfc(
    unsigned int p0, int p1, applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(unsigned int, int, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 213, p0, p1, p2);
  }

  Result IsNfcActivated(bool* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, unsigned int)>::Invoke(&this->m_State, 215, p0, p1);
  }

  Result GetAbstractedPadIdForNpadWithNfc(
    hid::system::AbstractedPadId* p0, unsigned int p1, int p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AbstractedPadId*, unsigned int, int)>::Invoke(
      &this->m_State, 216, p0, p1, p2);
  }

  Result AcquireNfcActivateEventHandle(
    sf::NativeHandle* p0, sf::NativeHandle* p1,
    hid::system::AbstractedPadId p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*, sf::NativeHandle*,
      hid::system::AbstractedPadId)>::Invoke(&this->m_State, 217, p0, p1, p2);
  }

  Result StartNfcDiscovery(
    hid::system::NfcDiscoveryParameter p0,
    hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::NfcDiscoveryParameter,
      hid::system::AbstractedPadId)>::Invoke(&this->m_State, 219, p0, p1);
  }

  Result StopNfcDiscovery(hid::system::AbstractedPadId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AbstractedPadId)>::Invoke(&this->m_State, 220, p0);
  }

  Result ClearMifareKey(
    hid::system::MifareKeyClearParameter p0,
    hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::MifareKeyClearParameter,
      hid::system::AbstractedPadId)>::Invoke(&this->m_State, 225, p0, p1);
  }

  Result GetNpadJoyHoldType(
    applet::AppletResourceUserId p0, int64_t* p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, int64_t*)>::Invoke(&this->m_State, 234,
      p0, p1);
  }

  Result GetDataFormat(
    hid::system::PeriodicDataFormat* p0,
    hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::PeriodicDataFormat*,
      hid::system::AbstractedPadId)>::Invoke(&this->m_State, 241, p0, p1);
  }

  Result SetDataFormat(
    hid::system::PeriodicDataFormat p0,
    hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::PeriodicDataFormat,
      hid::system::AbstractedPadId)>::Invoke(&this->m_State, 242, p0, p1);
  }

  Result GetMcuState(
    hid::system::McuState* p0, hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::McuState*, hid::system::AbstractedPadId)>::Invoke(
      &this->m_State, 243, p0, p1);
  }

  Result SetMcuState(
    hid::system::McuState p0, hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::McuState, hid::system::AbstractedPadId)>::Invoke(
      &this->m_State, 244, p0, p1);
  }

  Result CheckNfcDevicePower(hid::system::AbstractedPadId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AbstractedPadId)>::Invoke(&this->m_State, 246, p0);
  }

  Result SetMcuStateImmediate(
    hid::system::McuState p0, hid::system::AbstractedPadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::McuState, hid::system::AbstractedPadId)>::Invoke(
      &this->m_State, 247, p0, p1);
  }

  Result ApplyNpadSystemCommonPolicy(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 303, p0);
  }

  Result EnableAssigningSingleOnSlSrPress(
    applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 304, p0);
  }

  Result DisableAssigningSingleOnSlSrPress(
    applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 305, p0);
  }

  Result ApplyNpadSystemCommonPolicyFull(
    applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 308, p0);
  }

  Result SetNpadPlayerLedBlinkingDevice(
    applet::AppletResourceUserId p0, unsigned int p1,
    util::BitFlagSet<32, hid::system::DeviceType> p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, unsigned int,
      util::BitFlagSet<32, hid::system::DeviceType>)>::Invoke(&this->m_State,
      311, p0, p1, p2);
  }

  Result SetSupportedNpadStyleSetAll(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 312, p0);
  }

  Result GetAppletFooterUiTypes(
    hid::system::AppletFooterUiType* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AppletFooterUiType*, unsigned int)>::Invoke(
      &this->m_State, 314, p0, p1);
  }

  Result GetAppletDetailedUiTypes(
    hid::system::AppletDetailedUiType* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AppletDetailedUiType*, unsigned int)>::Invoke(
      &this->m_State, 315, p0, p1);
  }

  Result GetNpadInterfaceType(unsigned char* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(unsigned char*, unsigned int)>::Invoke(&this->m_State, 316, p0, p1);
  }

  Result GetNpadInterfaceType(
    unsigned char* p0, unsigned char* p1, unsigned int p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(unsigned char*, unsigned char*, unsigned int)>::Invoke(
      &this->m_State, 317, p0, p1, p2);
  }

  Result HasBattery(bool* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, unsigned int)>::Invoke(&this->m_State, 318, p0, p1);
  }

  Result HasBattery(bool* p0, bool* p1, unsigned int p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, bool*, unsigned int)>::Invoke(&this->m_State, 319, p0, p1,
      p2);
  }

  Result EnableNpadSystemExtState(
    applet::AppletResourceUserId p0, int p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int)>::Invoke(&this->m_State, 322, p0,
      p1);
  }

  Result GetLastActiveUniquePad(hid::system::UniquePadId* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId*)>::Invoke(&this->m_State, 323, p0);
  }

  Result GetUniquePadButtonSet(
    util::BitFlagSet<64, hid::system::UniquePadButton>* p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(util::BitFlagSet<64, hid::system::UniquePadButton>*,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 324, p0, p1);
  }

  Result GetAppletDetailedUiType(
    hid::system::AppletDetailedUiType* p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AppletDetailedUiType*,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 326, p0, p1);
  }

  Result AttachAbstractedPadToNpad(
    bool* p0, long p1, unsigned int p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, long, unsigned int)>::Invoke(&this->m_State, 328, p0, p1, p2);
  }

  Result DetachAbstractedPadAll() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 329);
  }

  Result CheckAbstractedPadConnection(long p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(long)>::Invoke(&this->m_State, 330, p0);
  }

  Result ConvertAppletDetailedUiTypeFromPlayReportType(
    hid::system::AppletDetailedUiType* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AppletDetailedUiType*, unsigned int)>::Invoke(
      &this->m_State, 332, p0, p1);
  }

  Result AcquireUniquePadButtonStateChangedEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 334, p0, p1);
  }

  Result SetAppletResourceUserId(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 500, p0);
  }

  Result RegisterAppletResourceUserId(
    applet::AppletResourceUserId p0, bool p1,
    applet::ApplicationSpec p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, bool,
      applet::ApplicationSpec)>::Invoke(&this->m_State, 501, p0, p1, p2);
  }

  Result UnregisterAppletResourceUserId(
    applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 502, p0);
  }

  Result EnableAppletToGetInput(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 503, p0,
      p1);
  }

  Result SetAruidValidForVibration(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 504, p0,
      p1);
  }

  Result EnableAppletToGetSixAxisSensor(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 505, p0,
      p1);
  }

  Result EnableAppletToGetPadInput(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 506, p0,
      p1);
  }

  Result EnableAppletToGetTouchScreen(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 507, p0,
      p1);
  }

  Result SetVibrationMasterVolume(float p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(float)>::Invoke(&this->m_State, 510, p0);
  }

  Result GetVibrationMasterVolume(float* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(float*)>::Invoke(&this->m_State, 511, p0);
  }

  Result SendVibrationNotificationPattern(
    applet::AppletResourceUserId p0, hid::VibrationDeviceHandle p1,
    int p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, hid::VibrationDeviceHandle,
      int)>::Invoke(&this->m_State, 514, p0, p1, p2);
  }

  Result EnableHandheldHids() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 520);
  }

  Result DisableHandheldHids() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 521);
  }

  Result EnableJoyConRail(int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int)>::Invoke(&this->m_State, 522, p0);
  }

  Result IsJoyConRailEnabled(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 523, p0);
  }

  Result IsHandheldHidsEnabled(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 524, p0);
  }

  Result IsJoyAttachedOnAllRail(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 525, p0);
  }

  Result IsInvertedControllerConnectedOnRail(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 526, p0);
  }

  Result AcquirePlayReportControllerUsageUpdateEvent(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 540, p0);
  }

  Result AcquirePlayReportRegisteredDeviceUpdateEvent(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 542, p0);
  }

  Result AcquireConnectionTriggerTimeoutEvent(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 544, p0);
  }

  Result SendConnectionTrigger(bluetooth::Address p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bluetooth::Address)>::Invoke(&this->m_State, 545, p0);
  }

  Result AcquireDeviceRegisteredEventForControllerSupport(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 546, p0);
  }

  Result GetAllowedBluetoothLinksCount(int64_t* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*)>::Invoke(&this->m_State, 547, p0);
  }

  Result GetPlayReportPairingCount(int* p0, int* p1, int* p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(int*, int*, int*)>::Invoke(&this->m_State, 550, p0, p1, p2);
  }

  Result AcquireUniquePadConnectionEventHandle(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 702, p0);
  }

  Result GetUniquePadIds(
    int64_t* p0, const sf::OutArray<hid::system::UniquePadId>& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*, const sf::OutArray<hid::system::UniquePadId>&)>::Invoke(
      &this->m_State, 703, p0, p1);
  }

  Result ListOunceJoyConGripUniquePads(
    int64_t* p0, const sf::OutArray<hid::system::UniquePadId>& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*, const sf::OutArray<hid::system::UniquePadId>&)>::Invoke(
      &this->m_State, 704, p0, p1);
  }

  Result GetOunceJoyConUniquePadIdsFromGripId(
    int64_t* p0, const sf::OutArray<hid::system::UniquePadId>& p1,
    hid::system::UniquePadId p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*, const sf::OutArray<hid::system::UniquePadId>&,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 705, p0, p1, p2);
  }

  Result GetUniquePadSkuType(
    unsigned char* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(unsigned char*, hid::system::UniquePadId)>::Invoke(&this->m_State,
      707, p0, p1);
  }

  Result AcquireUniquePadConnectionEventHandleOnHandheldForNs(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 711, p0);
  }

  Result AcquireJoyDetachOnBluetoothOffEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 751, p0, p1);
  }

  Result ListSixAxisSensorHandles(
    int64_t* p0, const sf::OutArray<hid::system::UniqueSixAxisSensorHandle>& p1,
    hid::system::UniquePadId p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*,
      const sf::OutArray<hid::system::UniqueSixAxisSensorHandle>&,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 800, p0, p1, p2);
  }

  Result IsSixAxisSensorUserCalibrationSupported(
    bool* p0, hid::system::UniqueSixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniqueSixAxisSensorHandle)>::Invoke(
      &this->m_State, 801, p0, p1);
  }

  Result ResetSixAxisSensorCalibrationValues(
    hid::system::UniqueSixAxisSensorHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniqueSixAxisSensorHandle)>::Invoke(&this->m_State, 802,
      p0);
  }

  Result StartSixAxisSensorUserCalibration(
    hid::system::UniqueSixAxisSensorHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniqueSixAxisSensorHandle)>::Invoke(&this->m_State, 803,
      p0);
  }

  Result CancelSixAxisSensorUserCalibration(
    hid::system::UniqueSixAxisSensorHandle p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniqueSixAxisSensorHandle)>::Invoke(&this->m_State, 804,
      p0);
  }

  Result GetUniquePadBluetoothAddress(
    bluetooth::Address* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bluetooth::Address*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 805, p0, p1);
  }

  Result DisconnectUniquePad(hid::system::UniquePadId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId)>::Invoke(&this->m_State, 806, p0);
  }

  Result GetUniquePadType(
    hid::system::UniquePadType* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadType*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 807, p0, p1);
  }

  Result GetUniquePadInterface(
    hid::system::UniquePadInterface* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadInterface*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 808, p0, p1);
  }

  Result GetUniquePadControllerNumber(
    int* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int*, hid::system::UniquePadId)>::Invoke(&this->m_State, 810, p0,
      p1);
  }

  Result GetSixAxisSensorUserCalibrationStage(
    int64_t* p0, hid::system::UniqueSixAxisSensorHandle p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(int64_t*, hid::system::UniqueSixAxisSensorHandle)>::Invoke(
      &this->m_State, 811, p0, p1);
  }

  Result GetConsoleUniqueSixAxisSensorHandle(
    hid::system::UniqueSixAxisSensorHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniqueSixAxisSensorHandle*)>::Invoke(&this->m_State,
      812, p0);
  }

  Result GetDeviceType(
    util::BitFlagSet<32, hid::system::DeviceType>* p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(util::BitFlagSet<32, hid::system::DeviceType>*,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 813, p0, p1);
  }

  Result StartAnalogStickManualCalibration(
    hid::system::UniquePadId p0, hid::system::AnalogStickPosition p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId, hid::system::AnalogStickPosition)>::Invoke(
      &this->m_State, 821, p0, p1);
  }

  Result RetryCurrentAnalogStickManualCalibrationStage(
    hid::system::UniquePadId p0, hid::system::AnalogStickPosition p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId, hid::system::AnalogStickPosition)>::Invoke(
      &this->m_State, 822, p0, p1);
  }

  Result CancelAnalogStickManualCalibration(
    hid::system::UniquePadId p0, hid::system::AnalogStickPosition p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId, hid::system::AnalogStickPosition)>::Invoke(
      &this->m_State, 823, p0, p1);
  }

  Result ResetAnalogStickManualCalibration(
    hid::system::UniquePadId p0, hid::system::AnalogStickPosition p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId, hid::system::AnalogStickPosition)>::Invoke(
      &this->m_State, 824, p0, p1);
  }

  Result GetAnalogStickManualCalibrationStage(
    hid::system::AnalogStickManualCalibrationStage* p0,
    hid::system::UniquePadId p1, hid::system::AnalogStickPosition p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AnalogStickManualCalibrationStage*,
      hid::system::UniquePadId, hid::system::AnalogStickPosition)>::Invoke(
      &this->m_State, 826, p0, p1, p2);
  }

  Result IsAnalogStickButtonPressed(
    bool* p0, hid::system::UniquePadId p1,
    hid::system::AnalogStickPosition p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId,
      hid::system::AnalogStickPosition)>::Invoke(&this->m_State, 827, p0, p1,
      p2);
  }

  Result IsAnalogStickInReleasePosition(
    bool* p0, hid::system::UniquePadId p1,
    hid::system::AnalogStickPosition p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId,
      hid::system::AnalogStickPosition)>::Invoke(&this->m_State, 828, p0, p1,
      p2);
  }

  Result IsAnalogStickInCircumference(
    bool* p0, hid::system::UniquePadId p1,
    hid::system::AnalogStickPosition p2) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId,
      hid::system::AnalogStickPosition)>::Invoke(&this->m_State, 829, p0, p1,
      p2);
  }

  Result IsUsbFullKeyControllerEnabled(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 850, p0);
  }

  Result EnableUsbFullKeyController(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 851, p0);
  }

  Result IsUsbConnected(bool* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId)>::Invoke(&this->m_State, 852, p0,
      p1);
  }

  Result IsHandheldButtonPressedOnConsoleMode(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 870, p0);
  }

  Result InitializeFirmwareUpdate() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1000);
  }

  Result GetFirmwareVersion(
    hid::system::FirmwareVersion* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::FirmwareVersion*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 1001, p0, p1);
  }

  Result GetAvailableFirmwareVersion(
    hid::system::FirmwareVersion* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::FirmwareVersion*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 1002, p0, p1);
  }

  Result IsFirmwareUpdateAvailable(
    bool* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId)>::Invoke(&this->m_State, 1003, p0,
      p1);
  }

  Result CheckFirmwareUpdateRequired(
    hid::system::FirmwareUpdateRequiredReason* p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::FirmwareUpdateRequiredReason*,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1004, p0, p1);
  }

  Result StartFirmwareUpdate(
    hid::system::FirmwareUpdateDeviceHandle* p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::FirmwareUpdateDeviceHandle*,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1005, p0, p1);
  }

  Result AbortFirmwareUpdate() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1006);
  }

  Result InitializeAudioControl() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1008);
  }

  Result AcquireAudioControlEventHandle(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 1009, p0);
  }

  Result FinalizeAudioControl() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1011);
  }

  Result IsSixAxisSensorAccurateUserCalibrationSupported(
    bool* p0, hid::system::UniqueSixAxisSensorHandle p1,
    applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, hid::system::UniqueSixAxisSensorHandle,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1050, p0, p1, p2);
  }

  Result StartSixAxisSensorAccurateUserCalibration(
    hid::system::UniqueSixAxisSensorHandle p0,
    applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::system::UniqueSixAxisSensorHandle,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1051, p0, p1);
  }

  Result CancelSixAxisSensorAccurateUserCalibration(
    hid::system::UniqueSixAxisSensorHandle p0,
    applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::system::UniqueSixAxisSensorHandle,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1052, p0, p1);
  }

  Result GetSixAxisSensorAccurateUserCalibrationState(
    hid::system::SixAxisSensorAccurateUserCalibrationState* p0,
    hid::system::UniqueSixAxisSensorHandle p1,
    applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::system::SixAxisSensorAccurateUserCalibrationState*,
      hid::system::UniqueSixAxisSensorHandle,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1053, p0, p1, p2);
  }

  Result SetFirmwareHotfixUpdateSkipEnabled(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1120, p0);
  }

  Result FinalizeUsbFirmwareUpdate(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1131, p0);
  }

  Result CheckUsbFirmwareUpdateRequired(
    applet::AppletResourceUserId p0,
    hid::system::FirmwareUpdateRequiredReason* p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId,
      hid::system::FirmwareUpdateRequiredReason*)>::Invoke(&this->m_State, 1132,
      p0, p1);
  }

  Result StartUsbFirmwareUpdate(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1133, p0);
  }

  Result InitializeUsbFirmwareUpdate(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1135, p0);
  }

  Result SetTouchScreenMagnification(
    float p0, float p1, float p2, float p3) override {
    return ProxyMethodInvoker<Kind, false,
      void(float, float, float, float)>::Invoke(&this->m_State, 1150, p0, p1,
      p2, p3);
  }

  Result GetTouchScreenFirmwareVersion(
    hid::system::FirmwareVersion* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::FirmwareVersion*)>::Invoke(&this->m_State, 1151, p0);
  }

  Result SetTouchScreenDefaultConfiguration(
    const hid::TouchScreenConfigurationForNx& p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(const hid::TouchScreenConfigurationForNx&)>::Invoke(&this->m_State,
      1152, p0);
  }

  Result GetTouchScreenDefaultConfiguration(
    hid::TouchScreenConfigurationForNx* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::TouchScreenConfigurationForNx*)>::Invoke(&this->m_State, 1153,
      p0);
  }

  Result IsFirmwareAvailableForNotification(
    bool* p0, int p1, hid::system::UniquePadId p2,
    applet::AppletResourceUserId p3) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, int, hid::system::UniquePadId,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1154, p0, p1, p2,
      p3);
  }

  Result SetForceHandheldStyleVibration(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1155, p0);
  }

  Result SendConnectionTriggerWithoutTimeoutEvent(
    bluetooth::Address p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bluetooth::Address)>::Invoke(&this->m_State, 1156, p0);
  }

  Result CancelConnectionTrigger(bluetooth::Address p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bluetooth::Address)>::Invoke(&this->m_State, 1157, p0);
  }

  Result SetConnectionLimitForSplay(unsigned char p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(unsigned char)>::Invoke(&this->m_State, 1158, p0);
  }

  Result ClearConnectionLimitForSplay() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1159);
  }

  Result IsCustomButtonConfigSupported(
    bool* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId)>::Invoke(&this->m_State, 1250, p0,
      p1);
  }

  Result IsDefaultButtonConfig(
    bool* p0, const hidconfig::ButtonConfigEmbedded& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, const hidconfig::ButtonConfigEmbedded&)>::Invoke(
      &this->m_State, 1251, p0, p1);
  }

  Result IsDefaultButtonConfig(
    bool* p0, const hidconfig::ButtonConfigFull& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, const hidconfig::ButtonConfigFull&)>::Invoke(&this->m_State,
      1252, p0, p1);
  }

  Result IsDefaultButtonConfig(
    bool* p0, const hidconfig::ButtonConfigLeft& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, const hidconfig::ButtonConfigLeft&)>::Invoke(&this->m_State,
      1253, p0, p1);
  }

  Result IsDefaultButtonConfig(
    bool* p0, const hidconfig::ButtonConfigRight& p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, const hidconfig::ButtonConfigRight&)>::Invoke(&this->m_State,
      1254, p0, p1);
  }

  Result IsButtonConfigStorageEmbeddedEmpty(bool* p0, int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, int)>::Invoke(&this->m_State, 1255, p0, p1);
  }

  Result IsButtonConfigStorageFullEmpty(bool* p0, int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, int)>::Invoke(&this->m_State, 1256, p0, p1);
  }

  Result IsButtonConfigStorageLeftEmpty(bool* p0, int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, int)>::Invoke(&this->m_State, 1257, p0, p1);
  }

  Result IsButtonConfigStorageRightEmpty(bool* p0, int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, int)>::Invoke(&this->m_State, 1258, p0, p1);
  }

  Result DeleteButtonConfigStorageEmbedded(int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int)>::Invoke(&this->m_State, 1267, p0);
  }

  Result DeleteButtonConfigStorageFull(int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int)>::Invoke(&this->m_State, 1268, p0);
  }

  Result DeleteButtonConfigStorageLeft(int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int)>::Invoke(&this->m_State, 1269, p0);
  }

  Result DeleteButtonConfigStorageRight(int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int)>::Invoke(&this->m_State, 1270, p0);
  }

  Result IsUsingCustomButtonConfig(
    bool* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId)>::Invoke(&this->m_State, 1271, p0,
      p1);
  }

  Result IsAnyCustomButtonConfigEnabled(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 1272, p0);
  }

  Result SetAllCustomButtonConfigEnabled(
    bool p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1273,
      p0, p1);
  }

  Result SetDefaultButtonConfig(hid::system::UniquePadId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId)>::Invoke(&this->m_State, 1274, p0);
  }

  Result SetAllDefaultButtonConfig() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1275);
  }

  Result SetButtonConfig(
    const hidconfig::ButtonConfigEmbedded& p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const hidconfig::ButtonConfigEmbedded&,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1276, p0, p1);
  }

  Result SetButtonConfig(
    const hidconfig::ButtonConfigFull& p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const hidconfig::ButtonConfigFull&,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1277, p0, p1);
  }

  Result SetButtonConfig(
    const hidconfig::ButtonConfigLeft& p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const hidconfig::ButtonConfigLeft&,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1278, p0, p1);
  }

  Result SetButtonConfig(
    const hidconfig::ButtonConfigRight& p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(const hidconfig::ButtonConfigRight&,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1279, p0, p1);
  }

  Result GetButtonConfigEmbedded(
    hidconfig::ButtonConfigEmbedded* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigEmbedded*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 1280, p0, p1);
  }

  Result GetButtonConfigFull(
    hidconfig::ButtonConfigFull* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigFull*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 1281, p0, p1);
  }

  Result GetButtonConfigLeft(
    hidconfig::ButtonConfigLeft* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigLeft*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 1282, p0, p1);
  }

  Result GetButtonConfigRight(
    hidconfig::ButtonConfigRight* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigRight*, hid::system::UniquePadId)>::Invoke(
      &this->m_State, 1283, p0, p1);
  }

  Result IsDefaultButtonConfig(
    bool* p0, hidconfig::ButtonConfigBack p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hidconfig::ButtonConfigBack)>::Invoke(&this->m_State, 1292,
      p0, p1);
  }

  Result IsButtonConfigStorageJoyConGripEmpty(bool* p0, int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, int)>::Invoke(&this->m_State, 1298, p0, p1);
  }

  Result DeleteButtonConfigStorageJoyConGrip(int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(int)>::Invoke(&this->m_State, 1301, p0);
  }

  Result GetButtonConfig(
    hidconfig::ButtonConfigJoyConGrip* p0,
    hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigJoyConGrip*,
      hid::system::UniquePadId)>::Invoke(&this->m_State, 1303, p0, p1);
  }

  Result SetDefaultButtonConfig(unsigned int p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(unsigned int)>::Invoke(&this->m_State, 1304, p0);
  }

  Result SetButtonConfig(
    hidconfig::ButtonConfigBack p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigBack, unsigned int)>::Invoke(&this->m_State,
      1305, p0, p1);
  }

  Result GetButtonConfig(
    hidconfig::ButtonConfigBack* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hidconfig::ButtonConfigBack*, unsigned int)>::Invoke(&this->m_State,
      1306, p0, p1);
  }

  Result IsUsingCustomButtonConfig(bool* p0, unsigned int p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, unsigned int)>::Invoke(&this->m_State, 1307, p0, p1);
  }

  Result SetButtonConfigVisible(hid::system::UniquePadId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::UniquePadId, bool)>::Invoke(&this->m_State, 1308, p0,
      p1);
  }

  Result IsButtonConfigVisible(bool* p0, hid::system::UniquePadId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::system::UniquePadId)>::Invoke(&this->m_State, 1309, p0,
      p1);
  }

  Result SetAllNpadCustomButtonConfigEnabled(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1310, p0);
  }

  Result WakeTouchScreenUpAsync() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1320);
  }

  Result PutTouchScreenToSleep() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1321);
  }

  Result AcquireTouchScreenAsyncWakeCompletedEvent(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1322, p0, p1);
  }

  Result StartTouchScreenAutoTuneForSystemSettings() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1323);
  }

  Result AcquireTouchScreenAutoTuneForSystemSettingsCompletedEvent(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 1324, p0);
  }

  Result IsTouchScreenAutoTuneRequiredForRepairProviderReplacement(
    bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 1325, p0);
  }

  Result SetTouchScreenOffset(float p0, float p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(float, float)>::Invoke(&this->m_State, 1326, p0, p1);
  }

  Result SetSuppressedTouchStateMode(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1327, p0);
  }

  Result AcquireDetectedEsdEventHandle(sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 1350, p0);
  }

  Result ClearDetectedEsdEvent() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1351);
  }

  Result IsEsdDetected(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 1352, p0);
  }

  Result AcquireFetchedDisplayStatusReportEventHandle(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 1360, p0);
  }

  Result RequestToFetchDisplayStatusReport() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1361);
  }

  Result StartWirelessRegistration(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1380, p0);
  }

  Result StopWirelessRegistration(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1381, p0);
  }

  Result IsWirelessRegistrationStarted(
    bool* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1382,
      p0, p1);
  }

  Result GetRegisteredDeviceCount(
    int32_t* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(int32_t*, applet::AppletResourceUserId)>::Invoke(&this->m_State,
      1383, p0, p1);
  }

  Result ClearRegisteredDevices(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1384, p0);
  }

  Result AcquireWirelessRegistrationStateChangedEvent(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1385, p0, p1);
  }

  Result SetIsWiredPairingEnabled(
    bool p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1386,
      p0, p1);
  }

  Result IsWiredPairingEnabled(
    bool* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1387,
      p0, p1);
  }

  Result GetRegisteredPalmaCount(
    int32_t* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(int32_t*, applet::AppletResourceUserId)>::Invoke(&this->m_State,
      1388, p0, p1);
  }

  Result GetJcmsUsedFlag(
    bool* p0, hid::JcmsHandle p1, applet::AppletResourceUserId p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, hid::JcmsHandle, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1400, p0, p1, p2);
  }

  Result ClearJcmsUsedFlag(
    hid::JcmsHandle p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::JcmsHandle, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1401, p0, p1);
  }

  Result GetAppletResourceProperty(
    hid::system::AppletResourceProperty* p0,
    applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::system::AppletResourceProperty*,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1420, p0, p1);
  }

  Result SetOverlayNmousePointerRanges(
    applet::AppletResourceUserId p0, int p1, int p2) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, int, int)>::Invoke(&this->m_State,
      1447, p0, p1, p2);
  }

  Result SetOverlayNmouseMagnification(
    float p0, float p1, float p2, float p3) override {
    return ProxyMethodInvoker<Kind, false,
      void(float, float, float, float)>::Invoke(&this->m_State, 1448, p0, p1,
      p2, p3);
  }

  Result SetNmousePointerSpeedScale(
    applet::AppletResourceUserId p0, float p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, float)>::Invoke(&this->m_State, 1455,
      p0, p1);
  }

  Result GetNmousePointerSpeedScale(
    float* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(float*, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1456,
      p0, p1);
  }

  Result EnableNmouseMovementAdjustment(
    bool p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1457,
      p0, p1);
  }

  Result IsEnabledNmouseMovementAdjustment(
    bool* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(bool*, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1458,
      p0, p1);
  }

  Result EnableInputOnHorizontalPlaneOnly(
    applet::AppletResourceUserId p0, bool p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId, bool)>::Invoke(&this->m_State, 1461,
      p0, p1);
  }

  Result StoreSelectorUiPresentationPolicy(
    hid::system::SelectorUiPresentationPolicy p0,
    applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(hid::system::SelectorUiPresentationPolicy,
      applet::AppletResourceUserId)>::Invoke(&this->m_State, 1470, p0, p1);
  }

  Result EnableAutoTransitionPointerToNone(
    bool p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool, applet::AppletResourceUserId)>::Invoke(&this->m_State, 1472,
      p0, p1);
  }

  Result IgnoreAutoTransitionPointerToNone(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1474, p0);
  }

  Result SetHandheldAsFullKeyEmulation(bool p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool)>::Invoke(&this->m_State, 1475, p0);
  }

  Result AcquireFullKeyEmulationRecommendedChangedEventHandle(
    sf::NativeHandle* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::NativeHandle*)>::Invoke(&this->m_State, 1476, p0);
  }

  Result IsFullKeyEmulationRecommended(bool* p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*)>::Invoke(&this->m_State, 1477, p0);
  }

  Result IsFullKeyEmulationTarget(bool* p0, hid::NpadIdType p1) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool*, hid::NpadIdType)>::Invoke(&this->m_State, 1478, p0, p1);
  }

  Result AcquireAwakeRequestEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1480, p0, p1);
  }

  Result AcquireInteractiveAreaChangedEventHandle(
    sf::NativeHandle* p0, applet::AppletResourceUserId p1) override {
    return ProxyMethodInvoker<Kind, true,
      void(sf::NativeHandle*, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1491, p0, p1);
  }
};

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<hid::IHidDebugServer, Kind, AllocationPolicy,
  hid::IHidDebugServer, Modifier>
  : public CmifProxyImplBase<hid::IHidDebugServer, Kind> {
public:
  Result DeactivateDebugPad() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 0);
  }

  Result DeactivateTouchScreen() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 10);
  }

  Result DeactivateKeyboard() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 30);
  }

  Result FinalizeXpad(hid::BasicXpadId p0) override {
    return ProxyMethodInvoker<Kind, false,
      void(hid::BasicXpadId)>::Invoke(&this->m_State, 50, p0);
  }

  Result DeactivateNpad(applet::AppletResourceUserId p0) override {
    return ProxyMethodInvoker<Kind, true,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 61, p0);
  }

  Result DeactivateGesture() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 91);
  }

  Result DeactivateHomeButton() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 110);
  }

  Result DeactivateSleepButton() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 120);
  }

  Result DeactivateCaptureButton() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 130);
  }

  Result DeactivateCButton() override {
    return ProxyMethodInvoker<Kind, false, void()>::Invoke(&this->m_State, 160);
  }

  Result DeactivateDigitizer() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 2000);
  }
};

}

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::hid::IHidServer, PlainKind, nn::sf::MemoryResourceAllocationPolicy,
  nn::hid::IHidServer, nn::sf::cmif::client::detail::ProcessModifierImpl<
    nn::sf::cmif::client::DefaultProxyFilterTag>>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::hid::IHidSystemServer, PlainKind, nn::sf::MemoryResourceAllocationPolicy,
  nn::hid::IHidSystemServer, nn::sf::cmif::client::detail::ProcessModifierImpl<
    nn::sf::cmif::client::DefaultProxyFilterTag>>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::hid::IHidDebugServer, PlainKind, nn::sf::MemoryResourceAllocationPolicy,
  nn::hid::IHidDebugServer, nn::sf::cmif::client::detail::ProcessModifierImpl<
    nn::sf::cmif::client::DefaultProxyFilterTag>>;
