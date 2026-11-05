#include "nn/audio/devmgr/devmgr_allocator.hpp"
#include "nn/audio/devmgr/devmgr_service.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio::devmgr::detail {

InitializationState g_SystemInitializationState;
sf::SharedPointer<IDeviceManagerForSystem> g_SystemManager;
ServiceObjectAllocator<128> g_SystemServiceObjectAllocator;

namespace {

IDeviceManagerForSystem* GetSystemManager() {
  return g_SystemManager.Get();
}

Result AttachEvent(os::SystemEvent* event, Result result,
  sf::NativeHandle& handle, os::EventClearMode clearMode) {
  if (result.IsFailure()) {
    return result;
  }
  event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    clearMode);
  handle.Detach();
  return Result{0};
}

}

void FinalizeSystemImpl() {
  g_SystemInitializationState.mutex.Lock();
  if (g_SystemInitializationState.count == 1) {
    g_SystemManager.Reset();
    g_SystemServiceObjectAllocator.Release();
  }
  --g_SystemInitializationState.count;
  g_SystemInitializationState.mutex.Unlock();
}

bool IsSystemInitializedImpl() {
  return GetSystemManager() != nullptr;
}

Result ListPhysicalDeviceNamesImpl(int* count,
  audio::detail::NameStorageType<255>* names, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly) {
  sf::Out<int> outCount(count);
  sf::OutBuffer outBuffer(names, sizeof(*names) * countMax);
  return GetSystemManager()->ListPhysicalDeviceNames(outCount, outBuffer,
    functionality, isActiveOnly);
}

Result EnableSoundDriverImpl(os::SystemEvent* event, SoundDriverId driver) {
  sf::NativeHandle handle;
  Result result = GetSystemManager()->EnableSoundDriver(
    sf::Out<sf::NativeHandle>(&handle), driver);
  return AttachEvent(event, result, handle, os::EventClearMode_ManualClear);
}

Result DisableSoundDriverImpl(SoundDriverId driver) {
  return GetSystemManager()->DisableSoundDriver(driver);
}

Result IsSoundDriverEnabledImpl(bool* isEnabled, SoundDriverId driver) {
  return GetSystemManager()->IsSoundDriverEnabled(sf::Out<bool>(isEnabled),
    driver);
}

Result ListPhysicalDeviceIdsImpl(int* count, uint32_t* ids, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly, SoundDriverId driver,
  bool isDriverFiltered) {
  sf::OutBuffer outBuffer(ids, sizeof(*ids) * countMax);
  return GetSystemManager()->ListPhysicalDeviceIds(sf::Out<int>(count),
    outBuffer, countMax, functionality, isActiveOnly, driver, isDriverFiltered);
}

Result GetPhysicalDeviceIdImpl(uint32_t* id,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetPhysicalDeviceId(sf::Out<uint32_t>(id),
    nameBuffer, functionality);
}

Result GetPhysicalDeviceProfileImpl(PhysicalDeviceProfile* profile,
  uint32_t id) {
  sf::OutBuffer outBuffer(profile, sizeof(*profile));
  return GetSystemManager()->GetPhysicalDeviceProfile(outBuffer, id);
}

Result MapRawInputDeviceImpl(uint32_t id, uint32_t channel, uint32_t index,
  float gain) {
  return GetSystemManager()->MapRawInputDevice(id, channel, index, gain);
}

Result MapAndBindPhysicalDeviceImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id, uint32_t channel,
  uint32_t index, float gain) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->MapAndBindPhysicalDevice(nameBuffer, functionality,
    id, channel, index, gain);
}

Result BindPhysicalDeviceImpl(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->BindPhysicalDevice(nameBuffer, functionality, id);
}

Result UnbindVirtualDeviceImpl(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::InBuffer buffer = ToInBuffer(name);
  return GetSystemManager()->UnbindVirtualDevice(buffer, functionality);
}

Result UnmapPhysicalDeviceImpl(uint32_t id) {
  return GetSystemManager()->UnmapPhysicalDevice(id);
}

Result GetBoundPhysicalDeviceProfileImpl(MappedPhysicalDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::OutBuffer outBuffer(profile, sizeof(*profile));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetBoundPhysicalDeviceProfile(outBuffer,
    nameBuffer, functionality);
}

Result GetRawInputPhysicalDeviceProfileImpl(
  MappedPhysicalDeviceProfile* profile) {
  sf::OutBuffer outBuffer(profile, sizeof(*profile));
  return GetSystemManager()->GetRawInputPhysicalDeviceProfile(outBuffer);
}

Result SetPhysicalDeviceGainImpl(uint32_t id, float gain, TimeSpan duration) {
  return GetSystemManager()->SetPhysicalDeviceGain(id, gain, duration);
}

Result GetPhysicalDeviceGainImpl(float* gain, uint32_t id) {
  return GetSystemManager()->GetPhysicalDeviceGain(sf::Out<float>(gain), id);
}

Result SetVirtualDeviceGainImpl(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetVirtualDeviceGain(nameBuffer, functionality,
    gain, duration);
}

Result GetVirtualDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetVirtualDeviceGain(sf::Out<float>(gain),
    nameBuffer, functionality);
}

Result SetAppletVirtualDeviceGainImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration,
  applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetAppletVirtualDeviceGain(nameBuffer,
    functionality, gain, duration, aruid);
}

Result GetAppletVirtualDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetAppletVirtualDeviceGain(sf::Out<float>(gain),
    nameBuffer, functionality, aruid);
}

Result SetAppletVirtualDeviceGainStagingImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const GainStaging& staging,
  TimeSpan duration, applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  sf::InBuffer inBuffer(&staging, sizeof(staging));
  return GetSystemManager()->SetAppletVirtualDeviceGainStaging(nameBuffer,
    functionality, inBuffer, duration, aruid);
}

Result GetAppletVirtualDeviceGainStagingImpl(GainStaging* staging,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  sf::OutBuffer outBuffer(staging, sizeof(*staging));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetAppletVirtualDeviceGainStaging(outBuffer,
    nameBuffer, functionality, aruid);
}

Result SetCaptureDeviceGainImpl(const audio::detail::NameStorage<255>& name,
  float gain, TimeSpan duration) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetCaptureDeviceGain(nameBuffer, gain, duration);
}

Result GetCaptureDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetCaptureDeviceGain(sf::Out<float>(gain),
    nameBuffer);
}

Result SetAppletCaptureDeviceGainImpl(
  const audio::detail::NameStorage<255>& name, float gain, TimeSpan duration,
  applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetAppletCaptureDeviceGain(nameBuffer, gain,
    duration, aruid);
}

Result GetAppletCaptureDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name,
  applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetAppletCaptureDeviceGain(sf::Out<float>(gain),
    nameBuffer, aruid);
}

Result SetAppletBiquadFilterModeImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled,
  applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetAppletBiquadFilterMode(nameBuffer,
    functionality, isEnabled, aruid);
}

Result SetAppletBiquadFilterParametersImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality,
  const std::array<BiquadFilterParameter, 2>& parameters,
  applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  sf::InBuffer inBuffer(&parameters, sizeof(parameters));
  return GetSystemManager()->SetAppletBiquadFilterParameters(nameBuffer,
    functionality, inBuffer, aruid);
}

Result GetAppletBiquadFilterParametersImpl(
  std::array<BiquadFilterParameter, 2>* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  sf::OutBuffer outBuffer(parameters, sizeof(*parameters));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetAppletBiquadFilterParameters(outBuffer,
    nameBuffer, functionality, aruid);
}

Result SuspendAppletVirtualDeviceImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SuspendAppletVirtualDevice(nameBuffer,
    functionality, aruid);
}

Result ResumeAppletVirtualDeviceImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->ResumeAppletVirtualDevice(nameBuffer,
    functionality, aruid);
}

Result SetAppletVirtualDeviceLoudnessNormalization(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled, TimeSpan duration,
  applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetAppletVirtualDeviceLoudnessNormalization(
    isEnabled, nameBuffer, functionality, duration, aruid);
}

Result GetAppletVirtualDeviceLoudnessNormalization(bool* isEnabled,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetAppletVirtualDeviceLoudnessNormalization(
    sf::Out<bool>(isEnabled), nameBuffer, functionality, aruid);
}

Result SetLoudnessNormalizationParameters(
  const LoudnessNormalizationParameters& parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::InBuffer inBuffer(&parameters, sizeof(parameters));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->SetLoudnessNormalizationParameters(inBuffer,
    nameBuffer, functionality);
}

Result GetLoudnessNormalizationParameters(
  LoudnessNormalizationParameters* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::OutBuffer outBuffer(parameters, sizeof(*parameters));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetLoudnessNormalizationParameters(outBuffer,
    nameBuffer, functionality);
}

Result GetLoudnessNormalizationStatistics(int* count,
  Span<LoudnessNormalizationStatisticsSet> statistics,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality) {
  sf::OutBuffer outBuffer(statistics.data, sizeof(
    LoudnessNormalizationStatisticsSet) * statistics.size);
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetSystemManager()->GetLoudnessNormalizationStatistics(sf::Out<int>(
    count), outBuffer, nameBuffer, functionality);
}

Result SetPhysicalDeviceFeatureImpl(uint32_t id,
  const ISoundDriverFeature& feature) {
  sf::InBuffer data(feature.GetData(), feature.GetSize());
  return GetSystemManager()->SetPhysicalDeviceFeature(feature.type, id,
    feature.version, data);
}

Result GetPhysicalDeviceFeatureImpl(ISoundDriverFeature* feature,
  uint32_t id) {
  sf::OutBuffer data(feature->GetData(), feature->GetSize());
  return GetSystemManager()->GetPhysicalDeviceFeature(data, feature->type, id,
    feature->version);
}

Result SetGlobalPhysicalDeviceFeatureImpl(
  const ISoundDriverGlobalFeature& feature) {
  sf::InBuffer data(feature.GetData(), feature.GetSize());
  return GetSystemManager()->SetGlobalPhysicalDeviceFeature(feature.type,
    feature.version, data);
}

Result GetGlobalPhysicalDeviceFeatureImpl(
  ISoundDriverGlobalFeature* feature) {
  sf::OutBuffer data(feature->GetData(), feature->GetSize());
  return GetSystemManager()->GetGlobalPhysicalDeviceFeature(data, feature->type,
    feature->version);
}

Result AcquireGlobalPhysicalDeviceEventImpl(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type) {
  sf::NativeHandle handle;
  Result result = GetSystemManager()->AcquireGlobalPhysicalDeviceEvent(
    sf::Out<sf::NativeHandle>(&handle), driver, type);
  return AttachEvent(event, result, handle, os::EventClearMode_AutoClear);
}

Result ReleaseGlobalPhysicalDeviceEventImpl(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type) {
  Result result =
    GetSystemManager()->ReleaseGlobalPhysicalDeviceEvent(driver, type);
  if (result.IsFailure()) {
    return result;
  }
  os::DestroySystemEvent(event->GetBase());
  return Result{0};
}

// The driver id lives in the top byte of a physical device id.
SoundDriverId GetSoundDriverIdImpl(uint32_t id) {
  return SoundDriverId(id >> 24);
}

Result SetMonauralDownmixModeImpl(bool isEnabled) {
  return GetSystemManager()->SetMonauralDownmixMode(isEnabled);
}

Result GetMonauralDownmixModeImpl(bool* isEnabled) {
  return GetSystemManager()->GetMonauralDownmixMode(sf::Out<bool>(isEnabled));
}

Result SetControl(SetRequest request, const void* data, size_t size) {
  sf::InBuffer inBuffer(data, size);
  return GetSystemManager()->SetControl(request, inBuffer);
}

Result GetControl(GetRequest request, const void* input, size_t inputSize,
  void* output, size_t outputSize) {
  sf::InBuffer inBuffer(input, inputSize);
  sf::OutBuffer outBuffer(output, outputSize);
  return GetSystemManager()->GetControl(request, inBuffer, outBuffer);
}

Result GetControl(GetRequest request, void* output, size_t outputSize) {
  return GetControl(request, nullptr, 0, output, outputSize);
}

Result ShellCommandImpl(int* length, Span<char> output,
  std::string_view command) {
  sf::OutBuffer outBuffer(output.data, output.size);
  sf::InBuffer inBuffer(command.data(), command.size());
  return GetSystemManager()->ShellCommand(sf::Out<int>(length), outBuffer,
    inBuffer);
}

}
