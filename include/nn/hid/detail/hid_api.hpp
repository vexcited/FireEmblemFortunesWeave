#pragma once

#include "nn/hid/hid_types.hpp"

namespace nn::hid {

Result DisableNpadImu();
bool IsNpadImuEnabled();

}

namespace nn::hid::detail {

Result BeginPermitVibrationSession();
Result BindNpadStyleSetUpdateEvent(
  const NpadIdType&, os::SystemEventType*, os::EventClearMode);
Result CalculateVibrationFileSize(const VibrationValueArrayInfo&);
Result CancelWritePalmaWaveEntry(const PalmaConnectionHandle&);
Result ClearNpadCaptureButtonAssignment();
Result DisableAnyPalmaConnection();
Result DisablePairedPalmaConnection();
Result DisconnectNpad(const NpadIdType&);
Result EnableAnyPalmaConnection();
Result EnableControlPadRestriction(
  const util::BitFlagSet<32, NpadStyleTag>&, bool);
Result EnableNmousePointer(NmouseHandle, bool);
Result EnablePairedPalmaConnection();
Result EnablePalmaBoostMode(bool);
Result EnablePalmaStep(const PalmaConnectionHandle&, bool);
Result EnableShowingCursor(bool);
Result EnableSixAxisSensorFusion(const SixAxisSensorHandle&, bool);
Result EnableSixAxisSensorPassthrough(const SixAxisSensorHandle&, bool);
Result EnableUnintendedHomeButtonInputProtection(const NpadIdType&, bool);
Result EnableUsbFullKeyControllerForApplication(bool);
Result EndPermitVibrationSession();
Result FinalizeJcms();
Result FinalizeNmouse();
Result FinalizeSevenSixAxisSensor();
Result GetDebugMouseHandle();
Result GetDebugPadState(DebugPadState*);
Result GetDebugPadStates(int*, DebugPadState*, int);
Result GetDigitizerState(DigitizerState*);
Result GetDigitizerStates(int*, DigitizerState*, int);
Result GetGcStyleControllerType(GcStyleControllerType*, const NpadIdType&);
Result GetGestureStates(int*, GestureState*, int);
Result GetGlGrButtonConfigState(bool*, bool*, unsigned int);
Result GetGyroscopeZeroDriftMode(GyroscopeZeroDriftMode*, SixAxisSensorHandle);
Result GetJcmsHandle(const NpadIdType&, const JcmsType&);
Result GetJcmsState(JcmsState*, const JcmsHandle&);
Result GetJcmsStates(int*, JcmsState*, int, const JcmsHandle&);
Result GetKeyboardState(KeyboardState*);
Result GetKeyboardStates(int*, KeyboardState*, int);
Result GetLastActiveNpadController(unsigned int*);
Result GetMergedNmouseHandle(NmouseHandle*);
Result GetMouseHandle();
Result GetMousePointerSpeedScale(float*);
Result GetMouseState(MouseState*);
Result GetMouseState(MouseState*, const MouseHandle&);
Result GetMouseStates(int*, MouseState*, int);
Result GetMouseStates(int*, MouseState*, int, const MouseHandle&);
Result GetNmouseHandles(int*, NmouseHandle*, int, unsigned int);
Result GetNmousePointerRanges(int*, int*);
Result GetNmouseState(NmouseState*, NmouseHandle);
Result GetNmouseStates(int*, NmouseState*, int, NmouseHandle);
Result GetNmouseTypeSet(util::BitFlagSet<32, NmouseType>*, NmouseHandle);
Result GetNpadCommunicationMode(NpadCommunicationMode*);
Result GetNpadControllerColor(
  NpadControllerColor*, NpadControllerColor*, const NpadIdType&);
Result GetNpadControllerColor(NpadControllerColor*, const NpadIdType&);
Result GetNpadHandheldActivationMode(NpadHandheldActivationMode*);
Result GetNpadIdType(unsigned int*, NmouseHandle);
Result GetNpadJoyAssignment(NpadJoyAssignmentMode*, const NpadIdType&);
Result GetNpadJoyHoldType(NpadJoyHoldType*);
Result GetNpadJoyIconDecorationColor(
  NpadJoyIconDecorationColor*, NpadJoyIconDecorationColor*, const NpadIdType&);
Result GetNpadJoyIconDecorationColor(
  NpadJoyIconDecorationColor*, const NpadIdType&);
Result GetNpadLagerType(NpadLagerType*, const NpadIdType&);
Result GetNpadOfHighestBatteryLevel(unsigned int*, const unsigned int*, int);
Result GetNpadStates(int*, NpadFullKeyState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadGcState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadHandheldLarkState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadHandheldState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadJoyDualState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadJoyLeftState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadJoyRightState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadLagerState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadLarkState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadLuciaState*, int, const NpadIdType&);
Result GetNpadStates(int*, NpadPalmaState*, int, const NpadIdType&);
Result GetNpadStates(int*, system::NpadSystemState*, int, const NpadIdType&);
Result GetNpadStates(
  int*, system::NpadSystemExtState*, int, const NpadIdType&);
Result GetNpadStyleSet(util::BitFlagSet<32, NpadStyleTag>*, const NpadIdType&);
Result GetPalmaDataBaseIdentificationVersion(const PalmaConnectionHandle&);
Result GetPlayerLedPattern(unsigned char*, const NpadIdType&);
Result GetSceneIdForPrivateApp(int*);
Result GetSensorFusionError(float*);
Result GetSevenSixAxisSensorFusionStrength(float*);
Result GetSevenSixAxisSensorStates(int*, SevenSixAxisSensorState*, int);
Result GetSixAxisSensorFusionParameters(
  float*, float*, const SixAxisSensorHandle&);
Result GetSixAxisSensorIcInformation(
  SixAxisSensorIcInformation*, const SixAxisSensorHandle&);
Result GetSixAxisSensorState(SixAxisSensorState*, const SixAxisSensorHandle&);
Result GetSixAxisSensorStates(
  int*, SixAxisSensorState*, int, const SixAxisSensorHandle&);
Result GetStandardMouseNmouseHandle(NmouseHandle*);
Result GetSupportedNpadStyleSet(util::BitFlagSet<32, NpadStyleTag>*);
Result GetXpadIds(int*, BasicXpadId*, int);
Result InitializeConsoleSixAxisSensor();
Result InitializeDebugPad();
Result InitializeDigitizer();
Result InitializeGesture(int, int);
Result InitializeJcms(void*, unsigned long);
Result InitializeKeyboard();
Result InitializeMouse();
Result InitializeMouse(const MouseHandle&);
Result InitializeNmouse(void*, unsigned long, int, int, NmousePointerType);
Result InitializeNpad();
Result InitializePalma(const PalmaConnectionHandle&);
Result InitializeSevenSixAxisSensor(void*, unsigned long);
Result InitializeTouchScreen(int, int);
Result InitializeVibrationDevice(const VibrationDeviceHandle&);
Result InitializeXpad(const BasicXpadId&);
Result IsFirmwareUpdateAvailableForSixAxisSensor(
  bool*, const SixAxisSensorHandle&);
Result IsFirmwareUpdateNeededForNotification(bool*);
Result IsOunceVibrationDeviceMounted(bool*, const VibrationDeviceHandle&);
Result IsSevenSixAxisSensorAtRest(bool*);
Result IsSixAxisSensorAtRest(bool*, const SixAxisSensorHandle&);
Result IsSixAxisSensorFusionEnabled(bool*, const SixAxisSensorHandle&);
Result IsSixAxisSensorPassthroughEnabled(bool*, const SixAxisSensorHandle&);
Result IsUnintendedHomeButtonInputProtectionEnabled(bool*, const NpadIdType&);
Result IsUsbFullKeyControllerConnectedForApplication(bool*, const NpadIdType&);
Result IsUsbFullKeyControllerEnabledForApplication(bool*);
Result IsVibrationDeviceMounted(bool*, const VibrationDeviceHandle&);
Result IsVibrationPermitted(bool*);
Result LoadSixAxisSensorCalibrationParameter(
  SixAxisSensorCalibrationParameter*, const SixAxisSensorHandle&);
Result MergeSingleJoyAsDualJoy(const NpadIdType&, const NpadIdType&);
Result PairPalma(const PalmaConnectionHandle&);
Result PermitVibration(bool);
Result PlayPalmaActivity(const PalmaConnectionHandle&, const unsigned short&);
Result ReadPalmaPlayLog(const PalmaConnectionHandle&, const unsigned short&);
Result ReadPalmaStep(const PalmaConnectionHandle&);
Result ReadPalmaUniqueCode(const PalmaConnectionHandle&);
Result ResetIsSixAxisSensorDeviceNewlyAssigned(const SixAxisSensorHandle&);
Result ResetPalmaPlayLog(const PalmaConnectionHandle&, const unsigned short&);
Result ResetPalmaStep(const PalmaConnectionHandle&);
Result ResetSevenSixAxisSensorTimestamp();
Result ResetSixAxisSensorFusionParameters(const SixAxisSensorHandle&);
Result RestrictNmousePointer(float, float, float, float);
Result SendKeyboardLockKeyEvent(util::BitFlagSet<32, KeyboardLockKeyEvent>);
Result SendVibrationGcErmCommand(
  const VibrationDeviceHandle&, const VibrationGcErmCommand&);
Result SendVibrationValue(const VibrationDeviceHandle&, const VibrationValue&);
Result SetControlPadRestrictionType(
  util::BitFlagSet<32, NpadStyleTag>, ControlPadRestrictionType);
Result SetDisallowedPalmaConnection(const bluetooth::Address*, int);
Result SetGyroscopeZeroDriftMode(SixAxisSensorHandle, GyroscopeZeroDriftMode);
Result SetMergedNmouseSourceTypes(util::BitFlagSet<32, NmouseType>);
Result SetNmouseButtonConfigJoyLeftJcms(const NmouseButtonConfigJoyLeftJcms&);
Result SetNmouseButtonConfigJoyRightJcms(const NmouseButtonConfigJoyRightJcms&);
Result SetNmouseButtonConfigStandardMouse(
  const NmouseButtonConfigStandardMouse&);
Result SetNmousePointerMovementArea(int, int, int, int);
Result SetNmousePointerPosition(NmouseHandle, int, int);
Result SetNmousePointerRanges(int, int);
Result SetNpadCaptureButtonAssignment(
  util::BitFlagSet<32, NpadStyleTag>, util::BitFlagSet<64, NpadButton>);
Result SetNpadCommunicationMode(NpadCommunicationMode);
Result SetNpadHandheldActivationMode(NpadHandheldActivationMode);
Result SetNpadJoyAssignmentModeDual(const NpadIdType&);
Result SetNpadJoyAssignmentModeSingle(
  bool*, unsigned int*, const NpadIdType&, NpadJoyDeviceType);
Result SetNpadJoyAssignmentModeSingle(const NpadIdType&);
Result SetNpadJoyAssignmentModeSingle(const NpadIdType&, NpadJoyDeviceType);
Result SetNpadJoyHoldType(NpadJoyHoldType);
Result SetPalmaDataBaseIdentificationVersion(const PalmaConnectionHandle&, int);
Result SetPalmaFrModeType(const PalmaConnectionHandle&, const PalmaFrModeType&);
Result SetPalmaUniqueCodeInvalid(const PalmaConnectionHandle&);
Result SetSceneIdForPrivateApp(int);
Result SetSevenSixAxisSensorFusionStrength(float);
Result SetSixAxisSensorFusionParameters(
  const SixAxisSensorHandle&, float, float);
Result SetSupportedNpadIdType(const unsigned int*, int);
Result SetTouchScreenConfiguration(const TouchScreenConfigurationForNx&);
Result StartJcms(const JcmsHandle&);
Result StartLrAssignmentMode();
Result StartSevenSixAxisSensor();
Result StartSixAxisSensor(const ConsoleSixAxisSensorHandle&);
Result StartSixAxisSensor(const SixAxisSensorHandle&);
Result StopJcms(const JcmsHandle&);
Result StopLrAssignmentMode();
Result StopSevenSixAxisSensor();
Result StopSixAxisSensor(const ConsoleSixAxisSensorHandle&);
Result StopSixAxisSensor(const SixAxisSensorHandle&);
Result StoreSixAxisSensorCalibrationParameter(
  const SixAxisSensorHandle&, const SixAxisSensorCalibrationParameter&);
Result SuspendPalmaFeature(
  const PalmaConnectionHandle&, const util::BitFlagSet<32, PalmaFeature>&);
Result SwapNpadAssignment(const NpadIdType&, const NpadIdType&);
Result WritePalmaApplicationSection(const PalmaConnectionHandle&, int,
  unsigned long, const PalmaApplicationSectionAccessBuffer&);

}

namespace nn::hid::system::detail {

Result AbortFirmwareUpdate();
Result ActivateNfc(unsigned int&, applet::AppletResourceUserId);
Result ApplyNpadSystemCommonPolicy();
Result ApplyNpadSystemCommonPolicyFull();
Result AttachAbstractedPadToNpad(bool*, long, const NpadIdType&);
Result BindAudioControlStateChangeEvent(
  os::SystemEventType*, os::EventClearMode);
Result BindAwakeRequestEvent(os::SystemEvent*, os::EventClearMode);
Result BindCButtonEvent(os::SystemEventType*, os::EventClearMode);
Result BindCaptureButtonEvent(os::SystemEventType*, os::EventClearMode);
Result BindConnectionTriggerTimeoutEvent(
  os::SystemEventType*, os::EventClearMode);
Result BindDeviceRegisteredEventForControllerSupport(
  os::SystemEventType*, os::EventClearMode);
Result BindHomeButtonEvent(os::SystemEventType*, os::EventClearMode);
Result BindInteractiveAreaChangedEvent(os::SystemEventType*);
Result BindJoyDetachOnBluetoothOffEvent(
  os::SystemEventType*, os::EventClearMode);
Result BindNfcActivateEvent(
  unsigned int&, os::SystemEventType*, os::EventClearMode);
Result BindNfcDeviceUpdateEvent(os::SystemEventType*, os::EventClearMode);
Result BindPlayReportControllerUsageUpdateEvent(
  os::SystemEventType*, os::EventClearMode);
Result BindPlayReportRegisteredDeviceUpdateEvent(
  os::SystemEventType*, os::EventClearMode);
Result BindSleepButtonEvent(os::SystemEventType*, os::EventClearMode);
Result BindTouchScreenAsyncWakeCompletedEvent(
  os::SystemEvent*, applet::AppletResourceUserId);
Result BindTouchScreenAutoTuneForSystemSettingsCompletedEvent(os::SystemEvent*);
Result BindUniquePadConnectionEvent(os::SystemEventType*, os::EventClearMode);
Result BindUniquePadConnectionEventOnHandheldForNs(
  os::SystemEventType*, os::EventClearMode);
Result BindWirelessRegistrationStateChangedEvent(os::SystemEventType*,
  os::EventClearMode, const applet::AppletResourceUserId&);
Result CancelAnalogStickManualCalibration(UniquePadId, AnalogStickPosition);
Result StartAnalogStickManualCalibration(UniquePadId, AnalogStickPosition);
Result ResetAnalogStickManualCalibration(UniquePadId, AnalogStickPosition);
Result CancelConnectionTrigger(const bluetooth::Address&);
Result CancelSixAxisSensorAccurateUserCalibration(
  const UniqueSixAxisSensorHandle&);
Result CancelSixAxisSensorUserCalibration(UniqueSixAxisSensorHandle);
Result CheckAbstractedPadConnection(long);
Result CheckFirmwareUpdateRequired(FirmwareUpdateRequiredReason*, UniquePadId);
Result CheckNfcDevicePower(AbstractedPadId);
Result CheckUsbFirmwareUpdateRequired(FirmwareUpdateRequiredReason*);
Result ClearConnectionLimitForSplay();
Result ClearDetectedEsdEvent();
Result ClearJcmsUsedFlag(unsigned int, JcmsType);
Result ClearMifareKey(const MifareKeyClearParameter&, AbstractedPadId);
void ClearRegisteredDevices(const applet::AppletResourceUserId&);
Result ConvertAppletDetailedUiTypeFromPlayReportType(
  AppletDetailedUiType*, unsigned int);
Result DeactivateNfc(unsigned int&, applet::AppletResourceUserId);
Result DetachAbstractedPadAll();
Result DisableAssigningSingleOnSlSrPress();
Result DisableHandheldHids();
Result DisableJoyConRail();
Result DisableNpadSystemExtState();
Result DisconnectUniquePad(UniquePadId);
Result EnableAppletToGetInput(const applet::AppletResourceUserId&, bool);
Result EnableAppletToGetPadInput(const applet::AppletResourceUserId&, bool);
Result EnableAppletToGetSixAxisSensor(
  const applet::AppletResourceUserId&, bool);
Result EnableAppletToGetTouchScreen(const applet::AppletResourceUserId&, bool);
Result EnableAssigningSingleOnSlSrPress();
Result EnableAutoTransitionPointerToNone(bool);
Result EnableAutoTransitionPointerToNone(applet::AppletResourceUserId, bool);
Result EnableHandheldHids();
Result EnableInputOnHorizontalPlaneOnly(bool);
Result EnableJoyConRail();
Result EnableNmouseMovementAdjustment(bool);
Result EnableNpadSystemExtState();
Result EnableUsbFullKeyController(bool);
Result FetchSelectorUiPresentationPolicy(SelectorUiPresentationPolicy*);
Result FinalizeMainUnitFunctionPolicy();
Result FinalizeOverlayNmouse();
Result FinalizeUsbFirmwareUpdate();
Result GetAbstractedPadIdDataFromNpad(int*, long*, int, const NpadIdType&);
Result GetAbstractedPadIdForNpadWithNfc(AbstractedPadId*, unsigned int);
Result GetAllowedBluetoothLinksCount();
Result GetAnalogStickManualCalibrationStage(
  AnalogStickManualCalibrationStage*, UniquePadId, AnalogStickPosition);
Result GetAnalogStickState(AnalogStickState*, UniquePadId, AnalogStickPosition);
Result GetAppletDetailedUiType(AppletDetailedUiType*, const UniquePadId&);
Result GetAppletResourceProperty(
  AppletResourceProperty*, const applet::AppletResourceUserId&);
Result GetAudioControlStates(int*, AudioControlState*, int);
Result GetAvailableFirmwareVersion(FirmwareVersion*, UniquePadId);
Result GetAvailableFirmwareVersionString(FirmwareVersionString*, UniquePadId);
Result GetCButtonStates(int*, CButtonState*, int);
Result GetCaptureButtonStates(int*, CaptureButtonState*, int);
Result GetConnectableRegisteredDevices(int*, RegisteredDevice*, int);
Result GetConsoleUniqueSixAxisSensorHandle(UniqueSixAxisSensorHandle*);
Result GetDataFormat(PeriodicDataFormat*, AbstractedPadId);
Result GetDetectedEsdSystemEventType(os::SystemEventType*);
Result GetDeviceType(util::BitFlagSet<32, DeviceType>*, UniquePadId);
Result GetDisplayStatusReport(DisplayStatusReport*);
Result GetFetchedDisplayStatusReportSystemEventType(os::SystemEventType*);
Result GetFirmwareUpdateState(
  FirmwareUpdateState*, const FirmwareUpdateDeviceHandle&);
Result GetFirmwareVersion(FirmwareVersion*, UniquePadId);
Result GetFirmwareVersionString(FirmwareVersionString*, UniquePadId);
Result GetFirmwareVersionStringForUserSupportPage(
  FirmwareVersionString*, UniquePadId);
Result GetFullKeyEmulationRecommendedChangedEvent(
  os::SystemEventType*, os::EventClearMode);
Result GetGestureStates(int*, GestureState*, int);
Result GetHomeButtonStates(int*, HomeButtonState*, int);
Result GetJcmsUsedFlag(bool*, unsigned int, JcmsType);
Result GetLastActiveUniquePad(UniquePadId*);
Result GetMcuState(McuState*, AbstractedPadId);
Result GetMcuVersionForNfc(McuVersionDataForNfc*, AbstractedPadId);
Result GetMergedOverlayNmouseHandle(NmouseHandle*);
Result GetNfcInfo(NfcInfo*, AbstractedPadId);
Result GetNmouseMovementAdjustmentParameters(
  int*, NmouseMovementAdjustmentParameter*, int);
Result GetNmousePointerSpeedScale(float*);
Result GetNmouseStateWithDelta(NmouseStateWithDelta*, NmouseHandle);
Result GetNmouseStatesWithDelta(int*, NmouseStateWithDelta*, int, NmouseHandle);
Result GetNpadCaptureButtonAssignmentOfCaller(
  int*, NpadCaptureButtonAssignmentType*, int);
Result GetNpadJoyHoldType(
  NpadJoyHoldType*, const applet::AppletResourceUserId&);
Result GetNpadsWithNfc(int*, unsigned int*, int);
Result GetOunceJoyConUniquePadIdsFromGripId(
  int*, UniquePadId*, int, UniquePadId);
Result GetOverlayNmousePointerRanges(int*, int*);
Result GetOverlayNmouseState(NmouseState*, const NmouseHandle&);
Result GetOverlayNmouseStates(int*, NmouseState*, int, const NmouseHandle&);
Result GetPlayReportControllerUsages(int*, PlayReportControllerUsage*, int);
Result GetPlayReportPairingCount(int*, int*, int*);
Result GetRegisteredDeviceCount(const applet::AppletResourceUserId&);
Result GetRegisteredDevices(int*, RegisteredDevice*, int);
Result GetRegisteredDevices(int*, RegisteredDeviceForControllerSupport*, int);
Result GetRegisteredPalmaCount(const applet::AppletResourceUserId&);
Result GetSixAxisSensorAccurateUserCalibrationState(
  SixAxisSensorAccurateUserCalibrationState*, const UniqueSixAxisSensorHandle&);
Result GetSixAxisSensorUserCalibrationStage(
  SixAxisSensorUserCalibrationStage*, UniqueSixAxisSensorHandle);
Result GetSleepButtonStates(int*, SleepButtonState*, int);
Result GetSupportedNpadStyleSetOfCallerApplet(
  util::BitFlagSet<32, NpadStyleTag>*);
Result GetTouchScreenFirmwareVersion(FirmwareVersion*);
Result GetUniquePadColor(ControllerColor*, const UniquePadId&);
Result GetUniquePadColor12(ControllerColor12*, const UniquePadId&);
Result GetUniquePadControllerNumber(int*, UniquePadId);
Result GetUniquePadInterface(UniquePadInterface*, UniquePadId);
Result GetUniquePadSerialNumber(UniquePadSerialNumber*, UniquePadId);
Result GetUniquePadSkuType(unsigned char*, const UniquePadId&);
Result GetUniquePadType(UniquePadType*, UniquePadId);
Result GetUsbFirmwareUpdateState(FirmwareUpdateState*, int*, int*);
Result IgnoreAutoTransitionPointerToNone(bool);
Result InitializeAudioControl();
Result InitializeCButton();
Result InitializeCaptureButton();
Result InitializeFirmwareUpdate();
Result InitializeGestureForSystemProcess(int, int);
Result GetInteractiveArea(InteractiveArea*);
Result GetTouchScreenDefaultConfiguration(TouchScreenConfigurationForNx*);
Result GetUniquePadBluetoothAddress(bluetooth::Address*, UniquePadId);
Result GetUniquePadButtonSet(
  util::BitFlagSet<64, UniquePadButton>*, const UniquePadId&);
Result IsEnabledShowingCursor(bool*);
Result SendVibrationNotificationPattern(const VibrationDeviceHandle&, int);
Result SetIsWiredPairingEnabled(bool, const applet::AppletResourceUserId&);
Result InitializeHomeButton();
Result InitializeMainUnitFunctionPolicy();
Result InitializeOverlayNmouse(void*, unsigned long, int, int);
Result InitializeSleepButton();
Result InitializeTouchScreenForSystemProcess(int, int);
Result InitializeUsbFirmwareUpdate();
Result IsAnalogStickButtonPressed(bool*, UniquePadId, AnalogStickPosition);
Result IsAnalogStickInCircumference(bool*, UniquePadId, AnalogStickPosition);
Result IsAnalogStickInReleasePosition(bool*, UniquePadId, AnalogStickPosition);
Result IsEnabledNmouseMovementAdjustment(bool*);
Result IsEsdDetected(bool*);
Result IsFirmwareAvailableForNotification(bool*, UniquePadId);
Result IsFirmwareUpdateAvailable(bool*, UniquePadId);
Result IsFullKeyEmulationRecommended();
Result IsFullKeyEmulationTarget(unsigned int);
Result IsHandheldButtonPressedOnConsoleMode(bool*);
Result IsHandheldHidsEnabled(bool*);
Result IsInvertedControllerConnectedOnRail(bool*);
Result IsJoyAttachedOnAllRail(bool*);
Result IsJoyConRailEnabled(bool*);
Result IsJoyConRailSupported(bool*);
Result IsNfcActivated(bool*, unsigned int&);
Result IsSixAxisSensorAccurateUserCalibrationSupported(
  bool*, const UniqueSixAxisSensorHandle&);
Result IsSixAxisSensorUserCalibrationSupported(
  bool*, UniqueSixAxisSensorHandle);
Result IsTouchScreenAutoTuneRequiredForRepairProviderReplacement(bool*);
Result IsUsbConnected(bool*, UniquePadId);
Result IsUsbFullKeyControllerEnabled(bool*);
bool IsWiredPairingEnabled(const applet::AppletResourceUserId&);
bool IsWirelessRegistrationStarted(const applet::AppletResourceUserId&);
Result ListOunceJoyConGripUniquePads(int*, UniquePadId*, int);
Result ListOverlayNmouseHandles(int*, NmouseHandle*, int);
Result ListSixAxisSensorHandles(
  int*, UniqueSixAxisSensorHandle*, UniquePadId, int);
Result ListUniquePads(int*, UniquePadId*, int);
Result PrepareHidsForNotificationWake(UniquePadId*, unsigned long);
Result PutTouchScreenToSleep();
Result RegisterAppletResourceUserId(
  const applet::AppletResourceUserId&, bool, applet::ApplicationSpec);
Result RegisterMifareKey(const MifareKeyWriteParameter&, AbstractedPadId);
Result RequestToFetchDisplayStatusReport();
Result ResetSixAxisSensorCalibrationValues(UniqueSixAxisSensorHandle);
Result RetryCurrentAnalogStickManualCalibrationStage(
  UniquePadId, AnalogStickPosition);
Result SendConnectionTrigger(bluetooth::Address);
Result SendConnectionTriggerWithoutTimeoutEvent(bluetooth::Address);
Result SendKeyboardLockKeyEvent(util::BitFlagSet<32, KeyboardLockKeyEvent>);
Result SendNfcRawData(const NfcPassThruParameter&, AbstractedPadId);
Result SetAppletResourceUserId(const applet::AppletResourceUserId&);
Result SetAruidValidForVibration(const applet::AppletResourceUserId&, bool);
Result SetConnectionLimitForSplay(unsigned char);
Result SetDataFormat(PeriodicDataFormat, AbstractedPadId);
Result SetFirmwareHotfixUpdateSkipEnabled(bool);
Result SetForceHandheldStyleVibration(bool);
Result SetHandheldAsFullKeyEmulation(bool);
Result SetMcuState(McuState, AbstractedPadId);
Result SetMcuStateImmediate(McuState, AbstractedPadId);
Result SetNfcEvent(os::SystemEventType*, os::SystemEventType*, AbstractedPadId);
Result SetNmouseMovementAdjustmentParameters(
  const NmouseMovementAdjustmentParameter*, int);
Result SetNmousePointerSpeedScale(float);
Result SetOverlayNmouseMagnification(float, float, float, float);
Result SetOverlayNmousePointerRanges(int, int);
Result SetSupportedNpadStyleSetAll();
Result SetSupportedNpadStyleSetOfCallerApplet(
  util::BitFlagSet<32, NpadStyleTag>);
Result SetSuppressedTouchStateMode(bool);
Result SetSystemKeyboardState(
  const SystemKeyboardState&, const applet::AppletResourceUserId&);
Result SetTouchScreenDefaultConfiguration(const TouchScreenConfigurationForNx&);
Result SetTouchScreenMagnification(float, float, float, float);
Result SetTouchScreenOffset(float, float);
Result StartFirmwareUpdate(FirmwareUpdateDeviceHandle*, UniquePadId);
Result StartMifareRead(const MifareReadParameter&, AbstractedPadId);
Result StartMifareWrite(const MifareWriteParameter&, AbstractedPadId);
Result StartNfcDiscovery(const NfcDiscoveryParameter&, AbstractedPadId);
Result StartNtagRead(const NtagReadParameter&, AbstractedPadId);
Result StartNtagReadPlus(const NtagReadPlusParameter&, AbstractedPadId);
Result StartNtagSramAccess(const NtagSramAccessParameter&, AbstractedPadId);
Result StartNtagWrite(const NtagWriteParameter&, AbstractedPadId);
Result StartNtagWritePlus(const NtagWritePlusParameter&, AbstractedPadId);
Result StartSixAxisSensorAccurateUserCalibration(
  const UniqueSixAxisSensorHandle&);
Result StartSixAxisSensorUserCalibration(UniqueSixAxisSensorHandle);
Result StartTouchScreenAutoTuneForSystemSettings();
Result StartUsbFirmwareUpdate();
Result StartWirelessRegistration(const applet::AppletResourceUserId&);
Result StopNfcDiscovery(AbstractedPadId);
void StopWirelessRegistration(const applet::AppletResourceUserId&);
Result StoreSelectorUiPresentationPolicy(SelectorUiPresentationPolicy);
Result UnregisterAppletResourceUserId(const applet::AppletResourceUserId&);
Result UnsetSystemKeyboardState();
Result WakeTouchScreenUpAsync();

}
