#pragma once

#include "nn/hid/hid_types.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::hid {

class IAppletResource : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result GetSharedMemoryHandle(
    const sf::Out<sf::NativeHandle>& pOutHandle) = 0;
};

class IActiveVibrationDeviceList : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ActivateVibrationDevice(VibrationDeviceHandle) = 0;
};

class IHidDebugServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result DeactivateDebugPad() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual Result DeactivateTouchScreen() = 0;
  virtual void Reserved8() = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual void Reserved11() = 0;
  virtual void Reserved12() = 0;
  virtual void Reserved13() = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual Result DeactivateMouse() = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual void Reserved19() = 0;
  virtual void Reserved20() = 0;
  virtual void Reserved21() = 0;
  virtual Result DeactivateKeyboard() = 0;
  virtual void Reserved23() = 0;
  virtual void Reserved24() = 0;
  virtual Result FinalizeXpad(BasicXpadId) = 0;
  virtual void Reserved26() = 0;
  virtual Result DeactivateNpad(applet::AppletResourceUserId) = 0;
  virtual void Reserved28() = 0;
  virtual Result DeactivateGesture() = 0;
  virtual Result DeactivateHomeButton() = 0;
  virtual void Reserved31() = 0;
  virtual void Reserved32() = 0;
  virtual Result DeactivateSleepButton() = 0;
  virtual void Reserved34() = 0;
  virtual void Reserved35() = 0;
  virtual Result DeactivateCaptureButton() = 0;
  virtual void Reserved37() = 0;
  virtual void Reserved38() = 0;
  virtual void Reserved39() = 0;
  virtual void Reserved40() = 0;
  virtual void Reserved41() = 0;
  virtual void Reserved42() = 0;
  virtual void Reserved43() = 0;
  virtual void Reserved44() = 0;
  virtual void Reserved45() = 0;
  virtual void Reserved46() = 0;
  virtual void Reserved47() = 0;
  virtual void Reserved48() = 0;
  virtual void Reserved49() = 0;
  virtual void Reserved50() = 0;
  virtual void Reserved51() = 0;
  virtual void Reserved52() = 0;
  virtual void Reserved53() = 0;
  virtual void Reserved54() = 0;
  virtual void Reserved55() = 0;
  virtual void Reserved56() = 0;
  virtual Result DeactivateCButton() = 0;
  virtual void Reserved58() = 0;
  virtual void Reserved59() = 0;
  virtual void Reserved60() = 0;
  virtual void Reserved61() = 0;
  virtual void Reserved62() = 0;
  virtual void Reserved63() = 0;
  virtual void Reserved64() = 0;
  virtual void Reserved65() = 0;
  virtual void Reserved66() = 0;
  virtual void Reserved67() = 0;
  virtual void Reserved68() = 0;
  virtual void Reserved69() = 0;
  virtual void Reserved70() = 0;
  virtual void Reserved71() = 0;
  virtual void Reserved72() = 0;
  virtual void Reserved73() = 0;
  virtual void Reserved74() = 0;
  virtual void Reserved75() = 0;
  virtual void Reserved76() = 0;
  virtual void Reserved77() = 0;
  virtual void Reserved78() = 0;
  virtual void Reserved79() = 0;
  virtual void Reserved80() = 0;
  virtual void Reserved81() = 0;
  virtual void Reserved82() = 0;
  virtual void Reserved83() = 0;
  virtual void Reserved84() = 0;
  virtual void Reserved85() = 0;
  virtual void Reserved86() = 0;
  virtual void Reserved87() = 0;
  virtual void Reserved88() = 0;
  virtual void Reserved89() = 0;
  virtual void Reserved90() = 0;
  virtual void Reserved91() = 0;
  virtual void Reserved92() = 0;
  virtual void Reserved93() = 0;
  virtual void Reserved94() = 0;
  virtual void Reserved95() = 0;
  virtual void Reserved96() = 0;
  virtual void Reserved97() = 0;
  virtual void Reserved98() = 0;
  virtual void Reserved99() = 0;
  virtual void Reserved100() = 0;
  virtual void Reserved101() = 0;
  virtual void Reserved102() = 0;
  virtual void Reserved103() = 0;
  virtual void Reserved104() = 0;
  virtual void Reserved105() = 0;
  virtual void Reserved106() = 0;
  virtual void Reserved107() = 0;
  virtual void Reserved108() = 0;
  virtual void Reserved109() = 0;
  virtual void Reserved110() = 0;
  virtual void Reserved111() = 0;
  virtual void Reserved112() = 0;
  virtual void Reserved113() = 0;
  virtual void Reserved114() = 0;
  virtual void Reserved115() = 0;
  virtual void Reserved116() = 0;
  virtual void Reserved117() = 0;
  virtual void Reserved118() = 0;
  virtual void Reserved119() = 0;
  virtual void Reserved120() = 0;
  virtual void Reserved121() = 0;
  virtual void Reserved122() = 0;
  virtual void Reserved123() = 0;
  virtual void Reserved124() = 0;
  virtual void Reserved125() = 0;
  virtual void Reserved126() = 0;
  virtual void Reserved127() = 0;
  virtual void Reserved128() = 0;
  virtual void Reserved129() = 0;
  virtual void Reserved130() = 0;
  virtual void Reserved131() = 0;
  virtual void Reserved132() = 0;
  virtual void Reserved133() = 0;
  virtual void Reserved134() = 0;
  virtual void Reserved135() = 0;
  virtual void Reserved136() = 0;
  virtual void Reserved137() = 0;
  virtual void Reserved138() = 0;
  virtual void Reserved139() = 0;
  virtual void Reserved140() = 0;
  virtual void Reserved141() = 0;
  virtual void Reserved142() = 0;
  virtual void Reserved143() = 0;
  virtual void Reserved144() = 0;
  virtual void Reserved145() = 0;
  virtual void Reserved146() = 0;
  virtual void Reserved147() = 0;
  virtual void Reserved148() = 0;
  virtual void Reserved149() = 0;
  virtual void Reserved150() = 0;
  virtual void Reserved151() = 0;
  virtual void Reserved152() = 0;
  virtual void Reserved153() = 0;
  virtual void Reserved154() = 0;
  virtual void Reserved155() = 0;
  virtual void Reserved156() = 0;
  virtual void Reserved157() = 0;
  virtual void Reserved158() = 0;
  virtual void Reserved159() = 0;
  virtual void Reserved160() = 0;
  virtual void Reserved161() = 0;
  virtual void Reserved162() = 0;
  virtual void Reserved163() = 0;
  virtual void Reserved164() = 0;
  virtual void Reserved165() = 0;
  virtual void Reserved166() = 0;
  virtual void Reserved167() = 0;
  virtual void Reserved168() = 0;
  virtual Result DeactivateDigitizer() = 0;
};

class IHidServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateAppletResource(
    const sf::Out<sf::SharedPointer<IAppletResource>>&,
    applet::AppletResourceUserId) = 0;
  virtual Result ActivateDebugPad(applet::AppletResourceUserId) = 0;
  virtual Result ActivateTouchScreen(applet::AppletResourceUserId) = 0;
  virtual Result ActivateMouse(applet::AppletResourceUserId) = 0;
  virtual void Reserved8() = 0;
  virtual Result ActivateDebugMouse(applet::AppletResourceUserId) = 0;
  virtual Result ActivateKeyboard(applet::AppletResourceUserId) = 0;
  virtual Result SendKeyboardLockKeyEvent(applet::AppletResourceUserId,
    util::BitFlagSet<32, KeyboardLockKeyEvent>) = 0;
  virtual void Reserved12() = 0;
  virtual void Reserved13() = 0;
  virtual Result InitializeXpad(applet::AppletResourceUserId, BasicXpadId) = 0;
  virtual Result GetXpadIds(int64_t*, const sf::OutArray<BasicXpadId>&) = 0;
  virtual void Reserved16() = 0;
  virtual void Reserved17() = 0;
  virtual void Reserved18() = 0;
  virtual void Reserved19() = 0;
  virtual void Reserved20() = 0;
  virtual void Reserved21() = 0;
  virtual void Reserved22() = 0;
  virtual void Reserved23() = 0;
  virtual void Reserved24() = 0;
  virtual Result StartSixAxisSensor(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result StopSixAxisSensor(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result IsSixAxisSensorFusionEnabled(
    bool*, applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result EnableSixAxisSensorFusion(
    applet::AppletResourceUserId, SixAxisSensorHandle, bool) = 0;
  virtual Result SetSixAxisSensorFusionParameters(
    applet::AppletResourceUserId, SixAxisSensorHandle, float, float) = 0;
  virtual Result GetSixAxisSensorFusionParameters(
    float*, float*, applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result ResetSixAxisSensorFusionParameters(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result SetAccelerometerParameters(
    applet::AppletResourceUserId, SixAxisSensorHandle, float, float) = 0;
  virtual Result GetAccelerometerParameters(
    float*, float*, applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result ResetAccelerometerParameters(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result SetAccelerometerPlayMode(applet::AppletResourceUserId,
    SixAxisSensorHandle, debug::AccelerometerPlayMode) = 0;
  virtual Result GetAccelerometerPlayMode(debug::AccelerometerPlayMode*,
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result ResetAccelerometerPlayMode(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result SetGyroscopeZeroDriftMode(applet::AppletResourceUserId,
    SixAxisSensorHandle, GyroscopeZeroDriftMode) = 0;
  virtual Result GetGyroscopeZeroDriftMode(GyroscopeZeroDriftMode*,
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result ResetGyroscopeZeroDriftMode(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result IsSixAxisSensorAtRest(
    bool*, applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual void Reserved42() = 0;
  virtual Result EnableSixAxisSensorPassthrough(
    applet::AppletResourceUserId, SixAxisSensorHandle, bool) = 0;
  virtual Result IsSixAxisSensorPassthroughEnabled(
    bool*, applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result StoreSixAxisSensorCalibrationParameter(
    applet::AppletResourceUserId, SixAxisSensorHandle,
    const SixAxisSensorCalibrationParameter&) = 0;
  virtual Result LoadSixAxisSensorCalibrationParameter(
    applet::AppletResourceUserId, SixAxisSensorCalibrationParameter*,
    SixAxisSensorHandle) = 0;
  virtual Result GetSixAxisSensorIcInformation(applet::AppletResourceUserId,
    SixAxisSensorIcInformation*, SixAxisSensorHandle) = 0;
  virtual Result ResetIsSixAxisSensorDeviceNewlyAssigned(
    applet::AppletResourceUserId, SixAxisSensorHandle) = 0;
  virtual Result ActivateGesture(applet::AppletResourceUserId, int) = 0;
  virtual Result SetGestureOutputRanges(
    applet::AppletResourceUserId, int, int) = 0;
  virtual Result SetSupportedNpadStyleSet(
    applet::AppletResourceUserId, util::BitFlagSet<32, NpadStyleTag>) = 0;
  virtual Result GetSupportedNpadStyleSet(
    applet::AppletResourceUserId, util::BitFlagSet<32, NpadStyleTag>*) = 0;
  virtual Result SetSupportedNpadIdType(applet::AppletResourceUserId,
    const sf::InArray<NpadIdType>&) = 0;
  virtual void Reserved54() = 0;
  virtual void Reserved55() = 0;
  virtual Result AcquireNpadStyleSetUpdateEventHandle(
    applet::AppletResourceUserId, sf::NativeHandle*, NpadIdType, uint64_t) = 0;
  virtual Result DisconnectNpad(applet::AppletResourceUserId, unsigned int) = 0;
  virtual Result GetPlayerLedPattern(unsigned char*, unsigned int) = 0;
  virtual Result ActivateNpadWithRevision(
    applet::AppletResourceUserId, int32_t) = 0;
  virtual Result SetNpadJoyHoldType(
    applet::AppletResourceUserId, NpadJoyHoldType) = 0;
  virtual void Reserved61() = 0;
  virtual Result SetNpadJoyAssignmentModeSingle(
    applet::AppletResourceUserId, unsigned int) = 0;
  virtual Result SetNpadJoyAssignmentModeSingle(
    applet::AppletResourceUserId, unsigned int, NpadJoyDeviceType) = 0;
  virtual Result SetNpadJoyAssignmentModeDual(
    applet::AppletResourceUserId, unsigned int) = 0;
  virtual Result MergeSingleJoyAsDualJoy(
    applet::AppletResourceUserId, unsigned int, unsigned int) = 0;
  virtual Result StartLrAssignmentMode(applet::AppletResourceUserId) = 0;
  virtual Result StopLrAssignmentMode(applet::AppletResourceUserId) = 0;
  virtual Result SetNpadHandheldActivationMode(
    applet::AppletResourceUserId, NpadHandheldActivationMode) = 0;
  virtual Result GetNpadHandheldActivationMode(
    applet::AppletResourceUserId, int64_t*) = 0;
  virtual Result SwapNpadAssignment(
    applet::AppletResourceUserId, unsigned int, unsigned int) = 0;
  virtual void Reserved71() = 0;
  virtual Result EnableUnintendedHomeButtonInputProtection(
    applet::AppletResourceUserId, unsigned int, bool) = 0;
  virtual Result SetNpadJoyAssignmentModeSingle(bool*, unsigned int*,
    applet::AppletResourceUserId, unsigned int, NpadJoyDeviceType) = 0;
  virtual Result SetNpadAnalogStickUseCenterClamp(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result SetNpadCaptureButtonAssignment(applet::AppletResourceUserId,
    util::BitFlagSet<32, NpadStyleTag>, util::BitFlagSet<64, NpadButton>) = 0;
  virtual Result ClearNpadCaptureButtonAssignment(
    applet::AppletResourceUserId) = 0;
  virtual Result SetNpadGcAnalogStick8bitRawValue(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result SetSceneIdForPrivateApp(
    applet::AppletResourceUserId, int32_t) = 0;
  virtual Result GetSceneIdForPrivateApp(
    int*, applet::AppletResourceUserId) = 0;
  virtual Result GetVibrationDeviceInfo(VibrationDeviceInfo*,
    VibrationDeviceHandle) = 0;
  virtual Result SendVibrationValue(applet::AppletResourceUserId,
    VibrationDeviceHandle, const VibrationValue&) = 0;
  virtual Result GetActualVibrationValue(VibrationValue*,
    applet::AppletResourceUserId, VibrationDeviceHandle) = 0;
  virtual Result CreateActiveVibrationDeviceList(
    const sf::Out<sf::SharedPointer<IActiveVibrationDeviceList>>&) = 0;
  virtual Result PermitVibration(bool) = 0;
  virtual Result IsVibrationPermitted(bool*) = 0;
  virtual Result SendVibrationValues(applet::AppletResourceUserId,
    const sf::InArray<VibrationDeviceHandle>&,
    const sf::InArray<VibrationValue>&) = 0;
  virtual Result SendVibrationGcErmCommand(applet::AppletResourceUserId,
    VibrationDeviceHandle, VibrationGcErmCommand) = 0;
  virtual Result GetActualVibrationGcErmCommand(VibrationGcErmCommand*,
    applet::AppletResourceUserId, VibrationDeviceHandle) = 0;
  virtual Result BeginPermitVibrationSession(applet::AppletResourceUserId) = 0;
  virtual Result EndPermitVibrationSession() = 0;
  virtual Result IsVibrationDeviceMounted(bool*, applet::AppletResourceUserId,
    VibrationDeviceHandle) = 0;
  virtual void Reserved92() = 0;
  virtual Result SendVibrationValueWithVersion(
    applet::AppletResourceUserId, VibrationDeviceHandle,
    const VibrationValue&, int32_t) = 0;
  virtual Result SendVibrationValuesWithVersion(
    applet::AppletResourceUserId, const sf::InArray<VibrationDeviceHandle>&,
    const sf::InArray<VibrationValue>&, int32_t) = 0;
  virtual Result IsOunceVibrationDeviceMounted(bool*,
    applet::AppletResourceUserId, VibrationDeviceHandle) = 0;
  virtual Result ActivateConsoleSixAxisSensor(applet::AppletResourceUserId) = 0;
  virtual Result StartSixAxisSensor(
    applet::AppletResourceUserId, ConsoleSixAxisSensorHandle) = 0;
  virtual Result StopSixAxisSensor(
    applet::AppletResourceUserId, ConsoleSixAxisSensorHandle) = 0;
  virtual void Reserved99() = 0;
  virtual Result StartSevenSixAxisSensor(applet::AppletResourceUserId) = 0;
  virtual Result StopSevenSixAxisSensor(applet::AppletResourceUserId) = 0;
  virtual Result InitializeSevenSixAxisSensor(applet::AppletResourceUserId,
    sf::NativeHandle, uint64_t, sf::NativeHandle, uint64_t) = 0;
  virtual Result FinalizeSevenSixAxisSensor(applet::AppletResourceUserId) = 0;
  virtual Result SetSevenSixAxisSensorFusionStrength(
    applet::AppletResourceUserId, float) = 0;
  virtual Result GetSevenSixAxisSensorFusionStrength(
    float*, applet::AppletResourceUserId) = 0;
  virtual Result ResetSevenSixAxisSensorTimestamp(
    applet::AppletResourceUserId) = 0;
  virtual void Reserved107() = 0;
  virtual void Reserved108() = 0;
  virtual void Reserved109() = 0;
  virtual void Reserved110() = 0;
  virtual Result IsUsbFullKeyControllerEnabledForApplication(bool*) = 0;
  virtual Result EnableUsbFullKeyControllerForApplication(bool) = 0;
  virtual Result IsUsbFullKeyControllerConnectedForApplication(
    bool*, unsigned int) = 0;
  virtual void Reserved114() = 0;
  virtual void Reserved115() = 0;
  virtual void Reserved116() = 0;
  virtual void Reserved117() = 0;
  virtual Result GetNpadOfHighestBatteryLevel(NpadIdType*,
    const sf::InArray<NpadIdType>&, applet::AppletResourceUserId) = 0;
  virtual Result GetPalmaConnectionHandle(
    PalmaConnectionHandle*, unsigned int, applet::AppletResourceUserId) = 0;
  virtual Result InitializePalma(PalmaConnectionHandle) = 0;
  virtual Result AcquirePalmaOperationCompleteEvent(sf::NativeHandle*,
    PalmaConnectionHandle) = 0;
  virtual Result GetPalmaOperationInfo(uint64_t*, const sf::OutBuffer&,
    PalmaConnectionHandle) = 0;
  virtual Result PlayPalmaActivity(PalmaConnectionHandle, unsigned short) = 0;
  virtual Result SetPalmaFrModeType(PalmaConnectionHandle, PalmaFrModeType) = 0;
  virtual Result ReadPalmaStep(PalmaConnectionHandle) = 0;
  virtual Result EnablePalmaStep(PalmaConnectionHandle, bool) = 0;
  virtual Result ResetPalmaStep(PalmaConnectionHandle) = 0;
  virtual Result ReadPalmaApplicationSection(PalmaConnectionHandle, int64_t,
    uint64_t) = 0;
  virtual Result WritePalmaApplicationSection(PalmaConnectionHandle,
    int64_t, uint64_t, const PalmaApplicationSectionAccessBuffer&) = 0;
  virtual Result ReadPalmaUniqueCode(PalmaConnectionHandle) = 0;
  virtual Result SetPalmaUniqueCodeInvalid(PalmaConnectionHandle) = 0;
  virtual Result WritePalmaActivityEntry(PalmaConnectionHandle, uint16_t,
    uint16_t, PalmaWaveSet, uint16_t) = 0;
  virtual Result WritePalmaRgbLedPatternEntry(PalmaConnectionHandle,
    uint16_t, const sf::InBuffer&) = 0;
  virtual Result WritePalmaWaveEntry(PalmaConnectionHandle, PalmaWaveSet,
    uint16_t, sf::NativeHandle&&, uint64_t, uint64_t) = 0;
  virtual Result SetPalmaDataBaseIdentificationVersion(
    PalmaConnectionHandle, int) = 0;
  virtual Result GetPalmaDataBaseIdentificationVersion(
    PalmaConnectionHandle) = 0;
  virtual Result SuspendPalmaFeature(
    PalmaConnectionHandle, util::BitFlagSet<32, PalmaFeature>) = 0;
  virtual Result GetPalmaOperationResult(PalmaConnectionHandle) = 0;
  virtual Result ReadPalmaPlayLog(PalmaConnectionHandle, unsigned short) = 0;
  virtual Result ResetPalmaPlayLog(PalmaConnectionHandle, unsigned short) = 0;
  virtual Result EnableAnyPalmaConnection(
    applet::AppletResourceUserId, int) = 0;
  virtual Result EnablePairedPalmaConnection(
    applet::AppletResourceUserId, int) = 0;
  virtual Result PairPalma(PalmaConnectionHandle) = 0;
  virtual Result SetPalmaBoostMode(bool) = 0;
  virtual Result CancelWritePalmaWaveEntry(PalmaConnectionHandle) = 0;
  virtual Result EnablePalmaBoostMode(applet::AppletResourceUserId, bool) = 0;
  virtual Result GetPalmaBluetoothAddress(
    bluetooth::Address*, PalmaConnectionHandle) = 0;
  virtual Result SetDisallowedPalmaConnection(applet::AppletResourceUserId,
    const sf::InArray<bluetooth::Address>&) = 0;
  virtual Result GetGlGrButtonConfigState(
    bool*, bool*, unsigned int, applet::AppletResourceUserId) = 0;
  virtual Result SetNpadCommunicationMode(
    applet::AppletResourceUserId, NpadCommunicationMode) = 0;
  virtual Result GetNpadCommunicationMode(int64_t*) = 0;
  virtual Result SetTouchScreenConfiguration(applet::AppletResourceUserId,
    const TouchScreenConfigurationForNx&) = 0;
  virtual Result IsFirmwareUpdateNeededForNotification(
    bool*, int, applet::AppletResourceUserId) = 0;
  virtual Result SetTouchScreenResolution(
    applet::AppletResourceUserId, int, int) = 0;
  virtual Result EnableNxTouchScreenEmulationForTouchEnter(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result ActivateDigitizer(applet::AppletResourceUserId) = 0;
  virtual void Reserved157() = 0;
  virtual void Reserved158() = 0;
  virtual void Reserved159() = 0;
  virtual void Reserved160() = 0;
  virtual void Reserved161() = 0;
  virtual void Reserved162() = 0;
  virtual void Reserved163() = 0;
  virtual void Reserved164() = 0;
  virtual void Reserved165() = 0;
  virtual void Reserved166() = 0;
  virtual void Reserved167() = 0;
  virtual void Reserved168() = 0;
  virtual void Reserved169() = 0;
  virtual void Reserved170() = 0;
  virtual void Reserved171() = 0;
  virtual void Reserved172() = 0;
  virtual Result InitializeJcms(applet::AppletResourceUserId,
    sf::NativeHandle&&, uint64_t) = 0;
  virtual Result FinalizeJcms(applet::AppletResourceUserId) = 0;
  virtual Result StartJcms(applet::AppletResourceUserId, JcmsHandle) = 0;
  virtual Result StopJcms(applet::AppletResourceUserId, JcmsHandle) = 0;
  virtual void Reserved177() = 0;
  virtual Result FinalizeNmouse(applet::AppletResourceUserId) = 0;
  virtual Result SetNmousePointerRanges(
    applet::AppletResourceUserId, int, int) = 0;
  virtual Result GetNmousePointerRanges(
    applet::AppletResourceUserId, int*, int*) = 0;
  virtual Result SetNmousePointerMovementArea(
    applet::AppletResourceUserId, int, int, int, int) = 0;
  virtual Result EnableShowingCursor(applet::AppletResourceUserId, bool) = 0;
  virtual Result SetNmouseButtonConfigJoyLeftJcms(
    applet::AppletResourceUserId, NmouseButtonConfigJoyLeftJcms) = 0;
  virtual Result SetNmouseButtonConfigJoyRightJcms(
    applet::AppletResourceUserId, NmouseButtonConfigJoyRightJcms) = 0;
  virtual Result SetMergedNmouseSourceTypes(applet::AppletResourceUserId,
    util::BitFlagSet<32, NmouseType>) = 0;
  virtual Result InitializeNmouse(applet::AppletResourceUserId,
    sf::NativeHandle&&, uint64_t, int32_t, int32_t, NmousePointerType,
    int32_t) = 0;
  virtual Result SetNmousePointerPosition(applet::AppletResourceUserId,
    NmouseHandle, int32_t, int32_t) = 0;
  virtual Result EnableNmousePointer(applet::AppletResourceUserId,
    NmouseHandle, bool) = 0;
  virtual Result RestrictNmousePointer(
    applet::AppletResourceUserId, float, float, float, float) = 0;
  virtual Result SetNmouseButtonConfigStandardMouse(
    applet::AppletResourceUserId, NmouseButtonConfigStandardMouse) = 0;
  virtual Result EnableMouse(applet::AppletResourceUserId, bool) = 0;
};

class IHidSystemServer : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SendKeyboardLockKeyEvent(
    util::BitFlagSet<32, system::KeyboardLockKeyEvent>) = 0;
  virtual Result SetSystemKeyboardState(
    const system::SystemKeyboardState&, applet::AppletResourceUserId) = 0;
  virtual Result UnsetSystemKeyboardState() = 0;
  virtual Result AcquireHomeButtonEventHandle(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result ActivateHomeButton() = 0;
  virtual Result AcquireSleepButtonEventHandle(sf::NativeHandle*, uint64_t) = 0;
  virtual Result ActivateSleepButton() = 0;
  virtual Result AcquireCaptureButtonEventHandle(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result ActivateCaptureButton() = 0;
  virtual Result IsJoyConRailSupported(bool*) = 0;
  virtual Result AcquireCButtonEventHandle(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result ActivateCButton() = 0;
  virtual Result AcquireNfcDeviceUpdateEventHandle(sf::NativeHandle*) = 0;
  virtual Result GetNpadsWithNfc(int64_t*, const sf::OutArray<NpadIdType>&) = 0;
  virtual Result AcquireNfcActivateEventHandle(sf::NativeHandle*,
    NpadIdType) = 0;
  virtual Result ActivateNfc(
    unsigned int, int, applet::AppletResourceUserId) = 0;
  virtual Result IsNfcActivated(bool*, unsigned int) = 0;
  virtual Result GetAbstractedPadIdForNpadWithNfc(
    system::AbstractedPadId*, unsigned int, int) = 0;
  virtual Result AcquireNfcActivateEventHandle(
    sf::NativeHandle*, sf::NativeHandle*, system::AbstractedPadId) = 0;
  virtual Result GetNfcInfo(system::NfcInfo*, system::AbstractedPadId) = 0;
  virtual Result StartNfcDiscovery(
    system::NfcDiscoveryParameter, system::AbstractedPadId) = 0;
  virtual Result StopNfcDiscovery(system::AbstractedPadId) = 0;
  virtual Result StartNtagRead(
    const system::NtagReadParameter&, system::AbstractedPadId) = 0;
  virtual Result StartNtagWrite(
    const system::NtagWriteParameter&, system::AbstractedPadId) = 0;
  virtual Result SendNfcRawData(
    const system::NfcPassThruParameter&, system::AbstractedPadId) = 0;
  virtual Result RegisterMifareKey(
    const system::MifareKeyWriteParameter&, system::AbstractedPadId) = 0;
  virtual Result ClearMifareKey(
    system::MifareKeyClearParameter, system::AbstractedPadId) = 0;
  virtual Result StartMifareRead(
    const system::MifareReadParameter&, system::AbstractedPadId) = 0;
  virtual Result StartMifareWrite(
    const system::MifareWriteParameter&, system::AbstractedPadId) = 0;
  virtual void Reserved33() = 0;
  virtual void Reserved34() = 0;
  virtual void Reserved35() = 0;
  virtual void Reserved36() = 0;
  virtual Result GetNpadJoyHoldType(applet::AppletResourceUserId, int64_t*) = 0;
  virtual Result GetDataFormat(
    system::PeriodicDataFormat*, system::AbstractedPadId) = 0;
  virtual Result SetDataFormat(
    system::PeriodicDataFormat, system::AbstractedPadId) = 0;
  virtual Result GetMcuState(system::McuState*, system::AbstractedPadId) = 0;
  virtual Result SetMcuState(system::McuState, system::AbstractedPadId) = 0;
  virtual Result GetMcuVersionForNfc(
    system::McuVersionDataForNfc*, system::AbstractedPadId) = 0;
  virtual Result CheckNfcDevicePower(system::AbstractedPadId) = 0;
  virtual Result SetMcuStateImmediate(
    system::McuState, system::AbstractedPadId) = 0;
  virtual Result StartNtagReadPlus(
    const system::NtagReadPlusParameter&, system::AbstractedPadId) = 0;
  virtual Result StartNtagWritePlus(
    const system::NtagWritePlusParameter&, system::AbstractedPadId) = 0;
  virtual Result StartNtagSramAccess(
    const system::NtagSramAccessParameter&, system::AbstractedPadId) = 0;
  virtual void Reserved48() = 0;
  virtual Result ApplyNpadSystemCommonPolicy(applet::AppletResourceUserId) = 0;
  virtual Result EnableAssigningSingleOnSlSrPress(
    applet::AppletResourceUserId) = 0;
  virtual Result DisableAssigningSingleOnSlSrPress(
    applet::AppletResourceUserId) = 0;
  virtual void Reserved52() = 0;
  virtual void Reserved53() = 0;
  virtual Result ApplyNpadSystemCommonPolicyFull(
    applet::AppletResourceUserId) = 0;
  virtual Result GetNpadFullKeyGripColor(
    util::Unorm8x4*, util::Unorm8x4*, unsigned int) = 0;
  virtual Result GetSupportedNpadStyleSetOfCallerApplet(
    util::BitFlagSet<32, NpadStyleTag>*, applet::AppletResourceUserId) = 0;
  virtual Result SetNpadPlayerLedBlinkingDevice(applet::AppletResourceUserId,
    unsigned int, util::BitFlagSet<32, system::DeviceType>) = 0;
  virtual Result SetSupportedNpadStyleSetAll(applet::AppletResourceUserId) = 0;
  virtual void Reserved59() = 0;
  virtual Result GetAppletFooterUiTypes(
    system::AppletFooterUiType*, unsigned int) = 0;
  virtual Result GetAppletDetailedUiTypes(
    system::AppletDetailedUiType*, unsigned int) = 0;
  virtual Result GetNpadInterfaceType(unsigned char*, unsigned int) = 0;
  virtual Result GetNpadInterfaceType(
    unsigned char*, unsigned char*, unsigned int) = 0;
  virtual Result HasBattery(bool*, unsigned int) = 0;
  virtual Result HasBattery(bool*, bool*, unsigned int) = 0;
  virtual Result GetUniquePadsFromNpad(int64_t*,
    const sf::OutArray<system::UniquePadId>&, NpadIdType) = 0;
  virtual Result EnableNpadSystemExtState(
    applet::AppletResourceUserId, int) = 0;
  virtual Result GetLastActiveUniquePad(system::UniquePadId*) = 0;
  virtual Result GetUniquePadButtonSet(
    util::BitFlagSet<64, system::UniquePadButton>*, system::UniquePadId) = 0;
  virtual Result GetUniquePadColor(
    system::ControllerColor*, system::UniquePadId) = 0;
  virtual Result GetAppletDetailedUiType(
    system::AppletDetailedUiType*, system::UniquePadId) = 0;
  virtual Result GetAbstractedPadIdDataFromNpad(int64_t*,
    const sf::OutArray<int64_t>&, NpadIdType) = 0;
  virtual Result AttachAbstractedPadToNpad(bool*, long, unsigned int) = 0;
  virtual Result DetachAbstractedPadAll() = 0;
  virtual Result CheckAbstractedPadConnection(long) = 0;
  virtual Result ConvertAppletDetailedUiTypeFromPlayReportType(
    system::AppletDetailedUiType*, unsigned int) = 0;
  virtual void Reserved77() = 0;
  virtual Result AcquireUniquePadButtonStateChangedEventHandle(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result SetAppletResourceUserId(applet::AppletResourceUserId) = 0;
  virtual Result RegisterAppletResourceUserId(
    applet::AppletResourceUserId, bool, applet::ApplicationSpec) = 0;
  virtual Result UnregisterAppletResourceUserId(
    applet::AppletResourceUserId) = 0;
  virtual Result EnableAppletToGetInput(applet::AppletResourceUserId, bool) = 0;
  virtual Result SetAruidValidForVibration(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result EnableAppletToGetSixAxisSensor(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result EnableAppletToGetPadInput(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result EnableAppletToGetTouchScreen(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result SetVibrationMasterVolume(float) = 0;
  virtual Result GetVibrationMasterVolume(float*) = 0;
  virtual void Reserved89() = 0;
  virtual void Reserved90() = 0;
  virtual Result SendVibrationNotificationPattern(
    applet::AppletResourceUserId, VibrationDeviceHandle, int) = 0;
  virtual Result EnableHandheldHids() = 0;
  virtual Result DisableHandheldHids() = 0;
  virtual Result EnableJoyConRail(int) = 0;
  virtual Result IsJoyConRailEnabled(bool*) = 0;
  virtual Result IsHandheldHidsEnabled(bool*) = 0;
  virtual Result IsJoyAttachedOnAllRail(bool*) = 0;
  virtual Result IsInvertedControllerConnectedOnRail(bool*) = 0;
  virtual Result AcquirePlayReportControllerUsageUpdateEvent(
    sf::NativeHandle*) = 0;
  virtual Result GetPlayReportControllerUsages(int64_t*,
    const sf::OutArray<system::PlayReportControllerUsage>&) = 0;
  virtual Result AcquirePlayReportRegisteredDeviceUpdateEvent(
    sf::NativeHandle*) = 0;
  virtual Result AcquireConnectionTriggerTimeoutEvent(sf::NativeHandle*) = 0;
  virtual Result SendConnectionTrigger(bluetooth::Address) = 0;
  virtual Result AcquireDeviceRegisteredEventForControllerSupport(
    sf::NativeHandle*) = 0;
  virtual Result GetAllowedBluetoothLinksCount(int64_t*) = 0;
  virtual Result GetRegisteredDevicesOld(
    int64_t*, const sf::OutArray<system::RegisteredDevice>&) = 0;
  virtual Result GetConnectableRegisteredDevices(
    int64_t*, const sf::OutArray<system::RegisteredDevice>&) = 0;
  virtual Result GetPlayReportPairingCount(int*, int*, int*) = 0;
  virtual Result GetRegisteredDevices(
    int64_t*,
    const sf::OutArray<system::RegisteredDeviceForControllerSupport>&) = 0;
  virtual void Reserved110() = 0;
  virtual Result AcquireUniquePadConnectionEventHandle(sf::NativeHandle*) = 0;
  virtual Result GetUniquePadIds(
    int64_t*, const sf::OutArray<system::UniquePadId>&) = 0;
  virtual Result ListOunceJoyConGripUniquePads(
    int64_t*, const sf::OutArray<system::UniquePadId>&) = 0;
  virtual Result GetOunceJoyConUniquePadIdsFromGripId(
    int64_t*, const sf::OutArray<system::UniquePadId>&,
    system::UniquePadId) = 0;
  virtual Result GetUniquePadSkuType(unsigned char*, system::UniquePadId) = 0;
  virtual Result AcquireUniquePadConnectionEventHandleOnHandheldForNs(
    sf::NativeHandle*) = 0;
  virtual Result GetUniquePadColor12(
    system::ControllerColor12*, system::UniquePadId) = 0;
  virtual void Reserved118() = 0;
  virtual void Reserved119() = 0;
  virtual void Reserved120() = 0;
  virtual void Reserved121() = 0;
  virtual void Reserved122() = 0;
  virtual void Reserved123() = 0;
  virtual void Reserved124() = 0;
  virtual void Reserved125() = 0;
  virtual void Reserved126() = 0;
  virtual void Reserved127() = 0;
  virtual void Reserved128() = 0;
  virtual void Reserved129() = 0;
  virtual void Reserved130() = 0;
  virtual void Reserved131() = 0;
  virtual void Reserved132() = 0;
  virtual void Reserved133() = 0;
  virtual void Reserved134() = 0;
  virtual void Reserved135() = 0;
  virtual void Reserved136() = 0;
  virtual void Reserved137() = 0;
  virtual void Reserved138() = 0;
  virtual Result IsAnyWirelessControllerStreaming(bool*) = 0;
  virtual void Reserved140() = 0;
  virtual void Reserved141() = 0;
  virtual void Reserved142() = 0;
  virtual void Reserved143() = 0;
  virtual Result AcquireJoyDetachOnBluetoothOffEventHandle(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result ListSixAxisSensorHandles(
    int64_t*, const sf::OutArray<system::UniqueSixAxisSensorHandle>&,
    system::UniquePadId) = 0;
  virtual Result IsSixAxisSensorUserCalibrationSupported(
    bool*, system::UniqueSixAxisSensorHandle) = 0;
  virtual Result ResetSixAxisSensorCalibrationValues(
    system::UniqueSixAxisSensorHandle) = 0;
  virtual Result StartSixAxisSensorUserCalibration(
    system::UniqueSixAxisSensorHandle) = 0;
  virtual Result CancelSixAxisSensorUserCalibration(
    system::UniqueSixAxisSensorHandle) = 0;
  virtual Result GetUniquePadBluetoothAddress(
    bluetooth::Address*, system::UniquePadId) = 0;
  virtual Result DisconnectUniquePad(system::UniquePadId) = 0;
  virtual Result GetUniquePadType(
    system::UniquePadType*, system::UniquePadId) = 0;
  virtual Result GetUniquePadInterface(
    system::UniquePadInterface*, system::UniquePadId) = 0;
  virtual Result GetUniquePadSerialNumber(
    system::UniquePadSerialNumber*, system::UniquePadId) = 0;
  virtual Result GetUniquePadControllerNumber(int*, system::UniquePadId) = 0;
  virtual Result GetSixAxisSensorUserCalibrationStage(
    int64_t*, system::UniqueSixAxisSensorHandle) = 0;
  virtual Result GetConsoleUniqueSixAxisSensorHandle(
    system::UniqueSixAxisSensorHandle*) = 0;
  virtual Result GetDeviceType(
    util::BitFlagSet<32, system::DeviceType>*, system::UniquePadId) = 0;
  virtual Result StartAnalogStickManualCalibration(
    system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result RetryCurrentAnalogStickManualCalibrationStage(
    system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result CancelAnalogStickManualCalibration(
    system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result ResetAnalogStickManualCalibration(
    system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result GetAnalogStickState(
    AnalogStickState*, system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result GetAnalogStickManualCalibrationStage(
    system::AnalogStickManualCalibrationStage*, system::UniquePadId,
    system::AnalogStickPosition) = 0;
  virtual Result IsAnalogStickButtonPressed(
    bool*, system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result IsAnalogStickInReleasePosition(
    bool*, system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result IsAnalogStickInCircumference(
    bool*, system::UniquePadId, system::AnalogStickPosition) = 0;
  virtual Result SetNotificationLedPattern(
    const system::NotificationLedPattern&, system::UniquePadId) = 0;
  virtual Result SetNotificationLedPatternWithTimeout(
    const system::NotificationLedPattern&, system::UniquePadId, TimeSpan) = 0;
  virtual Result PrepareHidsForNotificationWake(
    const sf::InArray<system::UniquePadId>&) = 0;
  virtual Result IsUsbFullKeyControllerEnabled(bool*) = 0;
  virtual Result EnableUsbFullKeyController(bool) = 0;
  virtual Result IsUsbConnected(bool*, system::UniquePadId) = 0;
  virtual Result IsHandheldButtonPressedOnConsoleMode(bool*) = 0;
  virtual Result InitializeFirmwareUpdate() = 0;
  virtual Result GetFirmwareVersion(
    system::FirmwareVersion*, system::UniquePadId) = 0;
  virtual Result GetAvailableFirmwareVersion(
    system::FirmwareVersion*, system::UniquePadId) = 0;
  virtual Result IsFirmwareUpdateAvailable(bool*, system::UniquePadId) = 0;
  virtual Result CheckFirmwareUpdateRequired(
    system::FirmwareUpdateRequiredReason*, system::UniquePadId) = 0;
  virtual Result StartFirmwareUpdate(
    system::FirmwareUpdateDeviceHandle*, system::UniquePadId) = 0;
  virtual Result AbortFirmwareUpdate() = 0;
  virtual Result GetFirmwareUpdateState(
    system::FirmwareUpdateState*, system::FirmwareUpdateDeviceHandle) = 0;
  virtual Result InitializeAudioControl() = 0;
  virtual Result AcquireAudioControlEventHandle(sf::NativeHandle*) = 0;
  virtual Result GetAudioControlStates(
    int64_t*, const sf::OutArray<system::AudioControlState>&) = 0;
  virtual Result FinalizeAudioControl() = 0;
  virtual Result GetFirmwareVersionStringForUserSupportPage(
    system::FirmwareVersionString*, system::UniquePadId) = 0;
  virtual Result IsSixAxisSensorAccurateUserCalibrationSupported(
    bool*, system::UniqueSixAxisSensorHandle, applet::AppletResourceUserId) = 0;
  virtual Result StartSixAxisSensorAccurateUserCalibration(
    system::UniqueSixAxisSensorHandle, applet::AppletResourceUserId) = 0;
  virtual Result CancelSixAxisSensorAccurateUserCalibration(
    system::UniqueSixAxisSensorHandle, applet::AppletResourceUserId) = 0;
  virtual Result GetSixAxisSensorAccurateUserCalibrationState(
    system::SixAxisSensorAccurateUserCalibrationState*,
    system::UniqueSixAxisSensorHandle, applet::AppletResourceUserId) = 0;
  virtual void Reserved192() = 0;
  virtual Result SetFirmwareHotfixUpdateSkipEnabled(bool) = 0;
  virtual Result FinalizeUsbFirmwareUpdate(applet::AppletResourceUserId) = 0;
  virtual Result CheckUsbFirmwareUpdateRequired(
    applet::AppletResourceUserId, system::FirmwareUpdateRequiredReason*) = 0;
  virtual Result StartUsbFirmwareUpdate(applet::AppletResourceUserId) = 0;
  virtual Result GetUsbFirmwareUpdateState(
    applet::AppletResourceUserId, system::FirmwareUpdateState*, int*, int*) = 0;
  virtual Result InitializeUsbFirmwareUpdate(applet::AppletResourceUserId) = 0;
  virtual Result SetTouchScreenMagnification(float, float, float, float) = 0;
  virtual Result GetTouchScreenFirmwareVersion(system::FirmwareVersion*) = 0;
  virtual Result SetTouchScreenDefaultConfiguration(
    const TouchScreenConfigurationForNx&) = 0;
  virtual Result GetTouchScreenDefaultConfiguration(
    TouchScreenConfigurationForNx*) = 0;
  virtual Result IsFirmwareAvailableForNotification(
    bool*, int, system::UniquePadId, applet::AppletResourceUserId) = 0;
  virtual Result SetForceHandheldStyleVibration(bool) = 0;
  virtual Result SendConnectionTriggerWithoutTimeoutEvent(
    bluetooth::Address) = 0;
  virtual Result CancelConnectionTrigger(bluetooth::Address) = 0;
  virtual Result SetConnectionLimitForSplay(unsigned char) = 0;
  virtual Result ClearConnectionLimitForSplay() = 0;
  virtual Result IsCustomButtonConfigSupported(bool*, system::UniquePadId) = 0;
  virtual Result IsDefaultButtonConfig(
    bool*, const hidconfig::ButtonConfigEmbedded&) = 0;
  virtual Result IsDefaultButtonConfig(
    bool*, const hidconfig::ButtonConfigFull&) = 0;
  virtual Result IsDefaultButtonConfig(
    bool*, const hidconfig::ButtonConfigLeft&) = 0;
  virtual Result IsDefaultButtonConfig(
    bool*, const hidconfig::ButtonConfigRight&) = 0;
  virtual Result IsButtonConfigStorageEmbeddedEmpty(bool*, int) = 0;
  virtual Result IsButtonConfigStorageFullEmpty(bool*, int) = 0;
  virtual Result IsButtonConfigStorageLeftEmpty(bool*, int) = 0;
  virtual Result IsButtonConfigStorageRightEmpty(bool*, int) = 0;
  virtual Result DeleteButtonConfigStorageEmbedded(int) = 0;
  virtual Result DeleteButtonConfigStorageFull(int) = 0;
  virtual Result DeleteButtonConfigStorageLeft(int) = 0;
  virtual Result DeleteButtonConfigStorageRight(int) = 0;
  virtual Result IsUsingCustomButtonConfig(bool*, system::UniquePadId) = 0;
  virtual Result IsAnyCustomButtonConfigEnabled(bool*) = 0;
  virtual Result SetAllCustomButtonConfigEnabled(
    bool, applet::AppletResourceUserId) = 0;
  virtual Result SetDefaultButtonConfig(system::UniquePadId) = 0;
  virtual Result SetAllDefaultButtonConfig() = 0;
  virtual Result SetButtonConfig(
    const hidconfig::ButtonConfigEmbedded&, system::UniquePadId) = 0;
  virtual Result SetButtonConfig(
    const hidconfig::ButtonConfigFull&, system::UniquePadId) = 0;
  virtual Result SetButtonConfig(
    const hidconfig::ButtonConfigLeft&, system::UniquePadId) = 0;
  virtual Result SetButtonConfig(
    const hidconfig::ButtonConfigRight&, system::UniquePadId) = 0;
  virtual Result GetButtonConfigEmbedded(hidconfig::ButtonConfigEmbedded*,
    system::UniquePadId) = 0;
  virtual Result GetButtonConfigFull(hidconfig::ButtonConfigFull*,
    system::UniquePadId) = 0;
  virtual Result GetButtonConfigLeft(hidconfig::ButtonConfigLeft*,
    system::UniquePadId) = 0;
  virtual Result GetButtonConfigRight(hidconfig::ButtonConfigRight*,
    system::UniquePadId) = 0;
  virtual Result GetButtonConfigStorage(
    hidconfig::ButtonConfigEmbedded*, hidconfig::StorageName*, int) = 0;
  virtual Result GetButtonConfigStorage(
    hidconfig::ButtonConfigFull*, hidconfig::StorageName*, int) = 0;
  virtual Result GetButtonConfigStorage(
    hidconfig::ButtonConfigLeft*, hidconfig::StorageName*, int) = 0;
  virtual Result GetButtonConfigStorage(
    hidconfig::ButtonConfigRight*, hidconfig::StorageName*, int) = 0;
  virtual Result SetButtonConfigStorage(const hidconfig::ButtonConfigEmbedded&,
    const hidconfig::StorageName&, int) = 0;
  virtual Result SetButtonConfigStorage(
    const hidconfig::ButtonConfigFull&, const hidconfig::StorageName&, int) = 0;
  virtual Result SetButtonConfigStorage(
    const hidconfig::ButtonConfigLeft&, const hidconfig::StorageName&, int) = 0;
  virtual Result SetButtonConfigStorage(const hidconfig::ButtonConfigRight&,
    const hidconfig::StorageName&, int) = 0;
  virtual Result IsDefaultButtonConfig(bool*, hidconfig::ButtonConfigBack) = 0;
  virtual Result IsDefaultButtonConfig(
    bool*, hidconfig::ButtonConfigJoyConGrip) = 0;
  virtual Result IsButtonConfigStorageJoyConGripEmpty(bool*, int) = 0;
  virtual Result GetButtonConfigStorage(
    hidconfig::ButtonConfigJoyConGrip*, hidconfig::StorageName*, int) = 0;
  virtual Result SetButtonConfigStorage(
    hidconfig::ButtonConfigJoyConGrip, const hidconfig::StorageName&, int) = 0;
  virtual Result DeleteButtonConfigStorageJoyConGrip(int) = 0;
  virtual Result SetButtonConfig(
    hidconfig::ButtonConfigJoyConGrip, system::UniquePadId) = 0;
  virtual Result GetButtonConfig(
    hidconfig::ButtonConfigJoyConGrip*, system::UniquePadId) = 0;
  virtual Result SetDefaultButtonConfig(unsigned int) = 0;
  virtual Result SetButtonConfig(hidconfig::ButtonConfigBack, unsigned int) = 0;
  virtual Result GetButtonConfig(
    hidconfig::ButtonConfigBack*, unsigned int) = 0;
  virtual Result IsUsingCustomButtonConfig(bool*, unsigned int) = 0;
  virtual Result SetButtonConfigVisible(system::UniquePadId, bool) = 0;
  virtual Result IsButtonConfigVisible(bool*, system::UniquePadId) = 0;
  virtual Result SetAllNpadCustomButtonConfigEnabled(bool) = 0;
  virtual Result WakeTouchScreenUpAsync() = 0;
  virtual Result PutTouchScreenToSleep() = 0;
  virtual Result AcquireTouchScreenAsyncWakeCompletedEvent(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result StartTouchScreenAutoTuneForSystemSettings() = 0;
  virtual Result AcquireTouchScreenAutoTuneForSystemSettingsCompletedEvent(
    sf::NativeHandle*) = 0;
  virtual Result IsTouchScreenAutoTuneRequiredForRepairProviderReplacement(
    bool*) = 0;
  virtual Result SetTouchScreenOffset(float, float) = 0;
  virtual Result SetSuppressedTouchStateMode(bool) = 0;
  virtual Result AcquireDetectedEsdEventHandle(sf::NativeHandle*) = 0;
  virtual Result ClearDetectedEsdEvent() = 0;
  virtual Result IsEsdDetected(bool*) = 0;
  virtual Result AcquireFetchedDisplayStatusReportEventHandle(
    sf::NativeHandle*) = 0;
  virtual Result RequestToFetchDisplayStatusReport() = 0;
  virtual Result GetDisplayStatusReport(system::DisplayStatusReport*) = 0;
  virtual Result StartWirelessRegistration(applet::AppletResourceUserId) = 0;
  virtual Result StopWirelessRegistration(applet::AppletResourceUserId) = 0;
  virtual Result IsWirelessRegistrationStarted(
    bool*, applet::AppletResourceUserId) = 0;
  virtual Result GetRegisteredDeviceCount(
    int32_t*, applet::AppletResourceUserId) = 0;
  virtual Result ClearRegisteredDevices(applet::AppletResourceUserId) = 0;
  virtual Result AcquireWirelessRegistrationStateChangedEvent(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result SetIsWiredPairingEnabled(
    bool, applet::AppletResourceUserId) = 0;
  virtual Result IsWiredPairingEnabled(bool*, applet::AppletResourceUserId) = 0;
  virtual Result GetRegisteredPalmaCount(
    int32_t*, applet::AppletResourceUserId) = 0;
  virtual Result GetJcmsUsedFlag(
    bool*, JcmsHandle, applet::AppletResourceUserId) = 0;
  virtual Result ClearJcmsUsedFlag(
    JcmsHandle, applet::AppletResourceUserId) = 0;
  virtual Result GetAppletResourceProperty(
    system::AppletResourceProperty*, applet::AppletResourceUserId) = 0;
  virtual void Reserved284() = 0;
  virtual Result FinalizeOverlayNmouse(applet::AppletResourceUserId) = 0;
  virtual Result SetOverlayNmousePointerRanges(
    applet::AppletResourceUserId, int, int) = 0;
  virtual Result SetOverlayNmouseMagnification(float, float, float, float) = 0;
  virtual void Reserved288() = 0;
  virtual Result SetNmousePointerSpeedScale(
    applet::AppletResourceUserId, float) = 0;
  virtual Result GetNmousePointerSpeedScale(
    float*, applet::AppletResourceUserId) = 0;
  virtual Result EnableNmouseMovementAdjustment(
    bool, applet::AppletResourceUserId) = 0;
  virtual Result IsEnabledNmouseMovementAdjustment(
    bool*, applet::AppletResourceUserId) = 0;
  virtual Result SetNmouseMovementAdjustmentParameters(
    const sf::InArray<system::NmouseMovementAdjustmentParameter>&,
    applet::AppletResourceUserId) = 0;
  virtual Result GetNmouseMovementAdjustmentParameters(
    int64_t*, const sf::OutArray<system::NmouseMovementAdjustmentParameter>&,
    applet::AppletResourceUserId) = 0;
  virtual Result EnableInputOnHorizontalPlaneOnly(
    applet::AppletResourceUserId, bool) = 0;
  virtual Result StoreSelectorUiPresentationPolicy(
    system::SelectorUiPresentationPolicy, applet::AppletResourceUserId) = 0;
  virtual void Reserved297() = 0;
  virtual Result EnableAutoTransitionPointerToNone(
    bool, applet::AppletResourceUserId) = 0;
  virtual void Reserved299() = 0;
  virtual Result IgnoreAutoTransitionPointerToNone(bool) = 0;
  virtual Result SetHandheldAsFullKeyEmulation(bool) = 0;
  virtual Result AcquireFullKeyEmulationRecommendedChangedEventHandle(
    sf::NativeHandle*) = 0;
  virtual Result IsFullKeyEmulationRecommended(bool*) = 0;
  virtual Result IsFullKeyEmulationTarget(bool*, NpadIdType) = 0;
  virtual Result AcquireAwakeRequestEventHandle(
    sf::NativeHandle*, applet::AppletResourceUserId) = 0;
  virtual Result GetInteractiveArea(system::InteractiveArea*) = 0;
  virtual Result AcquireInteractiveAreaChangedEventHandle(sf::NativeHandle*,
    applet::AppletResourceUserId) = 0;
};

namespace utility {

applet::AppletResourceUserId GetAppletResourceUserId();

}

namespace server {

Result CreateHidDebugServerProxy(sf::SharedPointer<IHidDebugServer>* pOutProxy);
Result CreateHidServerProxy(sf::SharedPointer<IHidServer>* pOutProxy);
Result CreateHidSystemServerProxy(
  sf::SharedPointer<IHidSystemServer>* pOutProxy);

}

}
