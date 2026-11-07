#include <string.h>

#include "nn/audio/devmgr/devmgr.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio::devmgr {
namespace {

constexpr Result ResultNotInitialized = {0xc8099};
constexpr Result ResultInvalidArgument = {0xc8899};

constexpr int64_t DurationMax = 5000000000;
constexpr int64_t ReferenceSignalDelayMax = 500000000;

bool IsValidGain(float gain) {
  return gain >= 0.0f && gain <= 128.0f;
}

bool IsValidPhysicalGain(float gain) {
  return gain >= 0.0f && gain <= 127.0f;
}

bool IsValidDuration(TimeSpan duration) {
  return duration.nanoseconds <= DurationMax;
}

struct PhysicalDeviceBiquadFilterMode {
  uint32_t id;
  uint32_t isEnabled;
};

struct PhysicalDeviceBiquadFilterParameters {
  uint32_t id;
  std::array<BiquadFilterParameter, 2> parameters;
};

struct VirtualDeviceStateChange {
  char name[256];
  DeviceFunctionality functionality;
};

}

Result InitializeSystem() {
  return detail::InitializeSystemImpl();
}

void FinalizeSystem() {
  detail::FinalizeSystemImpl();
}

int ListPhysicalDeviceNames(audio::detail::NameStorageType<255>* names,
  int count, DeviceFunctionality functionality, bool isActiveOnly) {
  int listed = 0;
  if (detail::ListPhysicalDeviceNamesImpl(&listed, names, count,
    functionality, isActiveOnly).IsFailure()) {
    return 0;
  }
  return listed;
}

Result SetVirtualDeviceGain(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0 || !IsValidGain(gain) || !IsValidDuration(duration)) {
    return ResultInvalidArgument;
  }
  return detail::SetVirtualDeviceGainImpl(name, functionality, gain,
    duration);
}

Result GetVirtualDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (gain == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetVirtualDeviceGainImpl(gain, name, functionality);
}

Result SetAppletVirtualDeviceGain(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration,
  applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0 || !IsValidGain(gain) || !IsValidDuration(duration)) {
    return ResultInvalidArgument;
  }
  return detail::SetAppletVirtualDeviceGainImpl(name, functionality, gain,
    duration, aruid);
}

Result GetAppletVirtualDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (gain == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetAppletVirtualDeviceGainImpl(gain, name, functionality,
    aruid);
}

Result SetAppletVirtualDeviceGainStaging(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const GainStaging& staging,
  TimeSpan duration, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0 || !IsValidGain(staging.preGain) ||
    (staging.isPostGainEnabled && !IsValidGain(staging.postGain)) ||
    !IsValidDuration(duration)) {
    return ResultInvalidArgument;
  }
  return detail::SetAppletVirtualDeviceGainStagingImpl(name, functionality,
    staging, duration, aruid);
}

Result GetAppletVirtualDeviceGainStaging(GainStaging* staging,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (staging == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetAppletVirtualDeviceGainStagingImpl(staging, name,
    functionality, aruid);
}

Result SetCaptureDeviceGain(const audio::detail::NameStorage<255>& name,
  float gain, TimeSpan duration) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (!IsValidGain(gain) || !IsValidDuration(duration)) {
    return ResultInvalidArgument;
  }
  return detail::SetCaptureDeviceGainImpl(name, gain, duration);
}

Result GetCaptureDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (gain == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetCaptureDeviceGainImpl(gain, name);
}

Result SetAppletCaptureDeviceGain(const audio::detail::NameStorage<255>& name,
  float gain, TimeSpan duration, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (!IsValidGain(gain) || !IsValidDuration(duration)) {
    return ResultInvalidArgument;
  }
  return detail::SetAppletCaptureDeviceGainImpl(name, gain, duration, aruid);
}

Result GetAppletCaptureDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name,
  applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (gain == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetAppletCaptureDeviceGainImpl(gain, name, aruid);
}

Result SetAppletVirtualDeviceBiquadFilterMode(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled,
  applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::SetAppletBiquadFilterModeImpl(name, functionality,
    isEnabled, aruid);
}

Result SetAppletVirtualDeviceBiquadFilterParameters(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality,
  const std::array<BiquadFilterParameter, 2>& parameters,
  applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::SetAppletBiquadFilterParametersImpl(name, functionality,
    parameters, aruid);
}

Result GetAppletVirtualDeviceBiquadFilterParameters(
  std::array<BiquadFilterParameter, 2>* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetAppletBiquadFilterParametersImpl(parameters, name,
    functionality, aruid);
}

Result SetPhysicalDeviceBiquadFilterMode(uint32_t id, bool isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  PhysicalDeviceBiquadFilterMode mode = {id, isEnabled};
  return detail::SetControl(SetRequest_PhysicalDeviceBiquadFilterMode, &mode,
    sizeof(mode));
}

Result GetPhysicalDeviceBiquadFilterMode(bool* isEnabled, uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::GetControl(GetRequest_PhysicalDeviceBiquadFilterMode, &id,
    sizeof(id), isEnabled, sizeof(*isEnabled));
}

Result SetPhysicalDeviceBiquadFilterParameters(uint32_t id,
  const std::array<BiquadFilterParameter, 2>& parameters) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  PhysicalDeviceBiquadFilterParameters request = {id, parameters};
  return detail::SetControl(SetRequest_PhysicalDeviceBiquadFilterParameters,
    &request, sizeof(request));
}

Result GetPhysicalDeviceBiquadFilterParameters(
  std::array<BiquadFilterParameter, 2>* parameters, uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::GetControl(GetRequest_PhysicalDeviceBiquadFilterParameters,
    &id, sizeof(id), parameters, sizeof(*parameters));
}

Result SuspendAppletVirtualDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::SuspendAppletVirtualDeviceImpl(name, functionality, aruid);
}

Result ResumeAppletVirtualDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::ResumeAppletVirtualDeviceImpl(name, functionality, aruid);
}

Result EnableSoundDriver(os::SystemEvent* event, SoundDriverId driver) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::EnableSoundDriverImpl(event, driver);
}

Result DisableSoundDriver(SoundDriverId driver) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::DisableSoundDriverImpl(driver);
}

Result IsSoundDriverEnabled(bool* isEnabled, SoundDriverId driver) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::IsSoundDriverEnabledImpl(isEnabled, driver);
}

Result ListPhysicalDeviceIds(int* count, uint32_t* ids, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly, SoundDriverId driver,
  bool isDriverFiltered) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (count == nullptr || ids == nullptr || countMax < 1 ||
    functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::ListPhysicalDeviceIdsImpl(count, ids, countMax,
    functionality, isActiveOnly, driver, isDriverFiltered);
}

Result GetPhysicalDeviceId(uint32_t* id,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (id == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetPhysicalDeviceIdImpl(id, name, functionality);
}

Result GetPhysicalDeviceProfile(PhysicalDeviceProfile* profile, uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (profile == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetPhysicalDeviceProfileImpl(profile, id);
}

Result MapRawInputDevice(uint32_t id, uint32_t channel, uint32_t index,
  float gain) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (!IsValidPhysicalGain(gain)) {
    return ResultInvalidArgument;
  }
  return detail::MapRawInputDeviceImpl(id, channel, index, gain);
}

Result MapAndBindPhysicalDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id, uint32_t channel,
  uint32_t index, float gain) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0 || !IsValidPhysicalGain(gain)) {
    return ResultInvalidArgument;
  }
  return detail::MapAndBindPhysicalDeviceImpl(name, functionality, id,
    channel, index, gain);
}

Result BindPhysicalDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::BindPhysicalDeviceImpl(name, functionality, id);
}

Result UnbindVirtualDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::UnbindVirtualDeviceImpl(name, functionality);
}

Result UnmapPhysicalDevice(uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::UnmapPhysicalDeviceImpl(id);
}

Result GetBoundPhysicalDeviceProfile(MappedPhysicalDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (profile == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetBoundPhysicalDeviceProfileImpl(profile, name,
    functionality);
}

Result GetRawInputPhysicalDeviceProfile(MappedPhysicalDeviceProfile* profile) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (profile == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetRawInputPhysicalDeviceProfileImpl(profile);
}

Result SetPhysicalDeviceGain(uint32_t id, float gain, TimeSpan duration) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (!IsValidPhysicalGain(gain) || !IsValidDuration(duration)) {
    return ResultInvalidArgument;
  }
  return detail::SetPhysicalDeviceGainImpl(id, gain, duration);
}

Result GetPhysicalDeviceGain(float* gain, uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (gain == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetPhysicalDeviceGainImpl(gain, id);
}

Result SetPhysicalDeviceFeature(uint32_t id,
  const ISoundDriverFeature& feature) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (feature.GetData() == nullptr && feature.GetSize() != 0) {
    return ResultInvalidArgument;
  }
  return detail::SetPhysicalDeviceFeatureImpl(id, feature);
}

Result GetPhysicalDeviceFeature(ISoundDriverFeature* feature, uint32_t id) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (feature == nullptr ||
    (feature->GetData() == nullptr && feature->GetSize() != 0)) {
    return ResultInvalidArgument;
  }
  return detail::GetPhysicalDeviceFeatureImpl(feature, id);
}

Result SetGlobalPhysicalDeviceFeature(
  const ISoundDriverGlobalFeature& feature) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (feature.GetData() == nullptr && feature.GetSize() != 0) {
    return ResultInvalidArgument;
  }
  return detail::SetGlobalPhysicalDeviceFeatureImpl(feature);
}

Result GetGlobalPhysicalDeviceFeature(ISoundDriverGlobalFeature* feature) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (feature == nullptr ||
    (feature->GetData() == nullptr && feature->GetSize() != 0)) {
    return ResultInvalidArgument;
  }
  return detail::GetGlobalPhysicalDeviceFeatureImpl(feature);
}

Result AcquireGlobalPhysicalDeviceEvent(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::AcquireGlobalPhysicalDeviceEventImpl(event, driver, type);
}

Result ReleaseGlobalPhysicalDeviceEvent(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::ReleaseGlobalPhysicalDeviceEventImpl(event, driver, type);
}

SoundDriverId GetSoundDriverId(uint32_t id) {
  return detail::GetSoundDriverIdImpl(id);
}

Result SetSpatialDownmixMode(SpatialDownmixMode mode) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_SpatialDownmixMode, &mode,
    sizeof(mode));
}

Result GetSpatialDownmixMode(SpatialDownmixMode* mode) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (mode == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_SpatialDownmixMode, mode,
    sizeof(*mode));
}

Result SetMonauralDownmixMode(bool isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetMonauralDownmixModeImpl(isEnabled);
}

Result GetMonauralDownmixMode(bool* isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetMonauralDownmixModeImpl(isEnabled);
}

Result SetTruePeakLimiterMode(bool isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_TruePeakLimiterMode, &isEnabled,
    sizeof(isEnabled));
}

Result GetTruePeakLimiterMode(bool* isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_TruePeakLimiterMode, isEnabled,
    sizeof(*isEnabled));
}

Result SetTruePeakLimiterParameters(
  const TruePeakLimiterParameters& parameters) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_TruePeakLimiterParameters, &parameters,
    sizeof(parameters));
}

Result GetTruePeakLimiterParameters(TruePeakLimiterParameters* parameters) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (parameters == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_TruePeakLimiterParameters, parameters,
    sizeof(*parameters));
}

Result GetTruePeakLimiterStatistics(TruePeakLimiterStatistics* statistics) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (statistics == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_TruePeakLimiterStatistics, statistics,
    sizeof(*statistics));
}

Result SetAppletVirtualDeviceLoudnessNormalization(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled, TimeSpan duration,
  applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::SetAppletVirtualDeviceLoudnessNormalization(name,
    functionality, isEnabled, duration, aruid);
}

Result GetAppletVirtualDeviceLoudnessNormalization(bool* isEnabled,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetAppletVirtualDeviceLoudnessNormalization(isEnabled, name,
    functionality, aruid);
}

Result SetLoudnessNormalizationParameters(
  const LoudnessNormalizationParameters& parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::SetLoudnessNormalizationParameters(parameters, name,
    functionality);
}

Result GetLoudnessNormalizationParameters(
  LoudnessNormalizationParameters* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (parameters == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetLoudnessNormalizationParameters(parameters, name,
    functionality);
}

Result GetLoudnessNormalizationStatistics(int* count,
  Span<LoudnessNormalizationStatisticsSet> statistics,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (count == nullptr || functionality == 0 || statistics.size == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetLoudnessNormalizationStatistics(count, statistics, name,
    functionality);
}

Result SignalVirtualDeviceStateChange(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  VirtualDeviceStateChange change;
  memcpy(change.name, name.buffer, sizeof(change.name));
  change.functionality = functionality;
  return detail::SetControl(SetRequest_SignalVirtualDeviceStateChange,
    &change, sizeof(change));
}

Result SignalVirtualDeviceStateChange(DeviceFunctionality functionality) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_SignalAllVirtualDeviceStateChange,
    &functionality, sizeof(functionality));
}

void Reset() {
  if (detail::IsSystemInitializedImpl()) {
    Result result = detail::SetControl(SetRequest_Reset, nullptr, 0);
    if (result.IsFailure()) {
      nn::diag::detail::AbortImpl(&result);
    }
  }
}

Result SetSpeakerEqMode(bool isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_SpeakerEqMode, &isEnabled,
    sizeof(isEnabled));
}

Result GetSpeakerEqMode(bool* isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_SpeakerEqMode, isEnabled,
    sizeof(*isEnabled));
}

Result SetProConWirelessLowLatencyMode(bool isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_ProConWirelessLowLatencyMode,
    &isEnabled, sizeof(isEnabled));
}

Result GetProConWirelessLowLatencyMode(bool* isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_ProConWirelessLowLatencyMode,
    isEnabled, sizeof(*isEnabled));
}

Result SetReferenceSignalDelay(TimeSpanType delay) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (delay.nanoseconds > ReferenceSignalDelayMax) {
    return ResultInvalidArgument;
  }
  return detail::SetControl(SetRequest_ReferenceSignalDelay, &delay,
    sizeof(delay));
}

Result GetReferenceSignalDelay(TimeSpanType* delay) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (delay == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_ReferenceSignalDelay, delay,
    sizeof(*delay));
}

Result SetHeadphoneLimitingMode(bool isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::SetControl(SetRequest_HeadphoneLimitingMode, &isEnabled,
    sizeof(isEnabled));
}

Result GetHeadphoneLimitingMode(bool* isEnabled) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (isEnabled == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetControl(GetRequest_HeadphoneLimitingMode, isEnabled,
    sizeof(*isEnabled));
}

Result ShellCommand(int* length, Span<char> output, std::string_view command) {
  if (!detail::IsSystemInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (length == nullptr || output.data == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::ShellCommandImpl(length, output, command);
}

}
