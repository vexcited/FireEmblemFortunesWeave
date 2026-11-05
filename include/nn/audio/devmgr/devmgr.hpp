#pragma once

#include <stddef.h>
#include <stdint.h>

#include <array>
#include <string_view>

#include "nn/applet/applet_types.hpp"
#include "nn/audio/audio_stream.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::audio::devmgr {

namespace detail {

class IDeviceManager;

}

struct ProxyContext {
  detail::IDeviceManager* _pService;
  uint64_t _aruid;
};

enum SoundDriverId : uint32_t {};

enum SpatialDownmixMode : uint32_t {};

enum SetRequest : uint32_t {
  SetRequest_SignalAllVirtualDeviceStateChange,
  SetRequest_SignalVirtualDeviceStateChange,
  SetRequest_TruePeakLimiterParameters,
  SetRequest_TruePeakLimiterMode,
  SetRequest_PhysicalDeviceBiquadFilterMode,
  SetRequest_PhysicalDeviceBiquadFilterParameters,
  SetRequest_Reset,
  SetRequest_SpeakerEqMode,
  SetRequest_SpatialDownmixMode,
  SetRequest_HeadphoneLimitingMode,
  SetRequest_ReferenceSignalDelay,
  SetRequest_ProConWirelessLowLatencyMode,
};

enum GetRequest : uint32_t {
  GetRequest_TruePeakLimiterParameters,
  GetRequest_TruePeakLimiterMode,
  GetRequest_PhysicalDeviceBiquadFilterParameters,
  GetRequest_PhysicalDeviceBiquadFilterMode,
  GetRequest_SpeakerEqMode,
  GetRequest_SpatialDownmixMode,
  GetRequest_TruePeakLimiterStatistics,
  GetRequest_HeadphoneLimitingMode,
  GetRequest_ReferenceSignalDelay,
  GetRequest_ProConWirelessLowLatencyMode,
};

struct MixNodeFlag {};

using MixNodeFlagSet = nn::util::BitFlagSet<32, MixNodeFlag>;

struct MixNode {
  uint8_t storage[9944];
};

struct PhysicalDeviceProfile {
  uint8_t storage[1936];
};

struct MappedPhysicalDeviceProfile {
  uint8_t storage[328];
};

struct GainStaging {
  float preGain;
  bool isPostGainEnabled;
  float postGain;
  uint8_t reserved[4];
};

static_assert(sizeof(GainStaging) == 16);

struct BiquadFilterParameter {
  float numerator[3];
  float denominator[2];
};

static_assert(sizeof(BiquadFilterParameter) == 20);

struct TruePeakLimiterParameters {
  uint8_t storage[16];
};

struct TruePeakLimiterStatistics {
  uint8_t storage[568];
};

struct LoudnessNormalizationParameters {
  uint8_t storage[48];
};

struct LoudnessNormalizationStatisticsSet {
  uint8_t storage[424];
};

class ISoundDriverFeature {
public:
  virtual const void* GetData() const = 0;
  virtual void* GetData() = 0;
  virtual size_t GetSize() const = 0;

  uint8_t type;
  uint32_t version;
};

class ISoundDriverGlobalFeature {
public:
  virtual const void* GetData() const = 0;
  virtual void* GetData() = 0;
  virtual size_t GetSize() const = 0;

  uint8_t type;
  uint32_t version;
};

Result CreateProxyContext(ProxyContext* proxy,
  applet::AppletResourceUserId aruid);
void DestroyProxyContext(ProxyContext* proxy);
Result GetDefaultVirtualDeviceName(audio::detail::NameStorage<255>* name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result IsVirtualDeviceAvailable(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result GetPhysicalDeviceName(audio::detail::NameStorage<255>* physicalName,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result GetDeviceStreamFormat(StreamFormat* format,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result AcquireVirtualDeviceStateChangeEvent(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result ReleaseVirtualDeviceStateChangeEvent(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result AcquireVirtualDeviceStateChangeEventHandle(uint32_t* handle,
  uint64_t key, const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result ReleaseVirtualDeviceStateChangeEventHandle(uint64_t key,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
int GetMixCount();
int GetMixTopology(MixNode* nodes, int count, MixNodeFlagSet flags);
Result GetMixNode(MixNode* node, uint32_t id, MixNodeFlagSet flags);

Result InitializeSystem();
void FinalizeSystem();
int ListPhysicalDeviceNames(audio::detail::NameStorageType<255>* names,
  int count, DeviceFunctionality functionality, bool isActiveOnly);
Result SetVirtualDeviceGain(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration);
Result GetVirtualDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result SetAppletVirtualDeviceGain(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration,
  applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetAppletVirtualDeviceGainStaging(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const GainStaging& staging,
  TimeSpan duration, applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceGainStaging(GainStaging* staging,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetCaptureDeviceGain(const audio::detail::NameStorage<255>& name,
  float gain, TimeSpan duration);
Result GetCaptureDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name);
Result SetAppletCaptureDeviceGain(const audio::detail::NameStorage<255>& name,
  float gain, TimeSpan duration, applet::AppletResourceUserId aruid);
Result GetAppletCaptureDeviceGain(float* gain,
  const audio::detail::NameStorage<255>& name,
  applet::AppletResourceUserId aruid);
Result SetAppletVirtualDeviceBiquadFilterMode(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled,
  applet::AppletResourceUserId aruid);
Result SetAppletVirtualDeviceBiquadFilterParameters(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality,
  const std::array<BiquadFilterParameter, 2>& parameters,
  applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceBiquadFilterParameters(
  std::array<BiquadFilterParameter, 2>* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetPhysicalDeviceBiquadFilterMode(uint32_t id, bool isEnabled);
Result GetPhysicalDeviceBiquadFilterMode(bool* isEnabled, uint32_t id);
Result SetPhysicalDeviceBiquadFilterParameters(uint32_t id,
  const std::array<BiquadFilterParameter, 2>& parameters);
Result GetPhysicalDeviceBiquadFilterParameters(
  std::array<BiquadFilterParameter, 2>* parameters, uint32_t id);
Result SuspendAppletVirtualDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result ResumeAppletVirtualDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result EnableSoundDriver(os::SystemEvent* event, SoundDriverId driver);
Result DisableSoundDriver(SoundDriverId driver);
Result IsSoundDriverEnabled(bool* isEnabled, SoundDriverId driver);
Result ListPhysicalDeviceIds(int* count, uint32_t* ids, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly, SoundDriverId driver,
  bool isDriverFiltered);
Result GetPhysicalDeviceId(uint32_t* id,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetPhysicalDeviceProfile(PhysicalDeviceProfile* profile, uint32_t id);
Result MapRawInputDevice(uint32_t id, uint32_t channel, uint32_t index,
  float gain);
Result MapAndBindPhysicalDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id, uint32_t channel,
  uint32_t index, float gain);
Result BindPhysicalDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id);
Result UnbindVirtualDevice(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result UnmapPhysicalDevice(uint32_t id);
Result GetBoundPhysicalDeviceProfile(MappedPhysicalDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetRawInputPhysicalDeviceProfile(MappedPhysicalDeviceProfile* profile);
Result SetPhysicalDeviceGain(uint32_t id, float gain, TimeSpan duration);
Result GetPhysicalDeviceGain(float* gain, uint32_t id);
Result SetPhysicalDeviceFeature(uint32_t id,
  const ISoundDriverFeature& feature);
Result GetPhysicalDeviceFeature(ISoundDriverFeature* feature, uint32_t id);
Result SetGlobalPhysicalDeviceFeature(const ISoundDriverGlobalFeature& feature);
Result GetGlobalPhysicalDeviceFeature(ISoundDriverGlobalFeature* feature);
Result AcquireGlobalPhysicalDeviceEvent(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type);
Result ReleaseGlobalPhysicalDeviceEvent(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type);
SoundDriverId GetSoundDriverId(uint32_t id);
Result SetSpatialDownmixMode(SpatialDownmixMode mode);
Result GetSpatialDownmixMode(SpatialDownmixMode* mode);
Result SetMonauralDownmixMode(bool isEnabled);
Result GetMonauralDownmixMode(bool* isEnabled);
Result SetTruePeakLimiterMode(bool isEnabled);
Result GetTruePeakLimiterMode(bool* isEnabled);
Result SetTruePeakLimiterParameters(
  const TruePeakLimiterParameters& parameters);
Result GetTruePeakLimiterParameters(TruePeakLimiterParameters* parameters);
Result GetTruePeakLimiterStatistics(TruePeakLimiterStatistics* statistics);
Result SetAppletVirtualDeviceLoudnessNormalization(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled, TimeSpan duration,
  applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceLoudnessNormalization(bool* isEnabled,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetLoudnessNormalizationParameters(
  const LoudnessNormalizationParameters& parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetLoudnessNormalizationParameters(
  LoudnessNormalizationParameters* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetLoudnessNormalizationStatistics(int* count,
  Span<LoudnessNormalizationStatisticsSet> statistics,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result SignalVirtualDeviceStateChange(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result SignalVirtualDeviceStateChange(DeviceFunctionality functionality);
void Reset();
Result SetSpeakerEqMode(bool isEnabled);
Result GetSpeakerEqMode(bool* isEnabled);
Result SetProConWirelessLowLatencyMode(bool isEnabled);
Result GetProConWirelessLowLatencyMode(bool* isEnabled);
Result SetReferenceSignalDelay(TimeSpanType delay);
Result GetReferenceSignalDelay(TimeSpanType* delay);
Result SetHeadphoneLimitingMode(bool isEnabled);
Result GetHeadphoneLimitingMode(bool* isEnabled);
Result ShellCommand(int* length, Span<char> output, std::string_view command);

namespace detail {

struct ProxyContextImpl {
  IDeviceManager* service;
  uint64_t aruid;
};

extern ProxyContextImpl g_DefaultContext;

Result InitializeImpl();
void FinalizeImpl();
bool IsInitializedImpl();
Result CreateProxyContextImpl(ProxyContext* proxy,
  applet::AppletResourceUserId aruid);
ProxyContextImpl* GetImpl(ProxyContext* proxy);
const ProxyContextImpl* GetImpl(const ProxyContext* proxy);
void DestroyProxyContextImpl(ProxyContext* proxy);
Result ListVirtualDeviceNamesImpl(int* count,
  audio::detail::NameStorageType<255>* names, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly,
  const ProxyContext* proxy);
Result GetDefaultVirtualDeviceNameImpl(audio::detail::NameStorage<255>* name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result IsVirtualDeviceAvailableImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result IsVirtualDeviceStreamFormatSupportedImpl(
  const audio::detail::NameStorage<255>& name, const StreamFormat& format,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result IsCaptureDeviceStreamFormatSupportedImpl(
  const audio::detail::NameStorage<255>& name, const StreamFormat& format,
  const ProxyContext* proxy);
Result GetVirtualDeviceProfileImpl(VirtualDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result GetCaptureDeviceProfileImpl(CaptureDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name, const ProxyContext* proxy);
Result GetPhysicalDeviceNameImpl(
  audio::detail::NameStorage<255>* physicalName,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result AttachStreamImpl(const audio::detail::NameStorage<255>& name,
  uint32_t id, DeviceFunctionality functionality, ProxyContext* proxy);
Result AttachCaptureStreamImpl(const audio::detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy);
Result AttachInjectionStreamImpl(const audio::detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy);
Result DetachStreamImpl(uint32_t id, ProxyContext* proxy);
Result GetDeviceStreamFormatImpl(StreamFormat* format,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result AcquireVirtualDeviceStateChangeEventImpl(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result ReleaseVirtualDeviceStateChangeEventImpl(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result AcquireVirtualDeviceStateChangeEventHandleImpl(uint32_t* handle,
  uint64_t key, const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result ReleaseVirtualDeviceStateChangeEventHandleImpl(uint64_t key,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy);
int GetMixCountImpl();
int GetMixTopologyImpl(MixNode* nodes, int count, MixNodeFlagSet flags);
Result GetMixNodeImpl(MixNode* node, uint32_t id, MixNodeFlagSet flags);

Result InitializeSystemImpl();
void FinalizeSystemImpl();
bool IsSystemInitializedImpl();
Result ListPhysicalDeviceNamesImpl(int* count,
  audio::detail::NameStorageType<255>* names, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly);
Result EnableSoundDriverImpl(os::SystemEvent* event, SoundDriverId driver);
Result DisableSoundDriverImpl(SoundDriverId driver);
Result IsSoundDriverEnabledImpl(bool* isEnabled, SoundDriverId driver);
Result ListPhysicalDeviceIdsImpl(int* count, uint32_t* ids, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly, SoundDriverId driver,
  bool isDriverFiltered);
Result GetPhysicalDeviceIdImpl(uint32_t* id,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetPhysicalDeviceProfileImpl(PhysicalDeviceProfile* profile,
  uint32_t id);
Result MapRawInputDeviceImpl(uint32_t id, uint32_t channel, uint32_t index,
  float gain);
Result MapAndBindPhysicalDeviceImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id, uint32_t channel,
  uint32_t index, float gain);
Result BindPhysicalDeviceImpl(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, uint32_t id);
Result UnbindVirtualDeviceImpl(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result UnmapPhysicalDeviceImpl(uint32_t id);
Result GetBoundPhysicalDeviceProfileImpl(MappedPhysicalDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetRawInputPhysicalDeviceProfileImpl(
  MappedPhysicalDeviceProfile* profile);
Result SetPhysicalDeviceGainImpl(uint32_t id, float gain, TimeSpan duration);
Result GetPhysicalDeviceGainImpl(float* gain, uint32_t id);
Result SetVirtualDeviceGainImpl(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration);
Result GetVirtualDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result SetAppletVirtualDeviceGainImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, float gain, TimeSpan duration,
  applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetAppletVirtualDeviceGainStagingImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const GainStaging& staging,
  TimeSpan duration, applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceGainStagingImpl(GainStaging* staging,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetCaptureDeviceGainImpl(const audio::detail::NameStorage<255>& name,
  float gain, TimeSpan duration);
Result GetCaptureDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name);
Result SetAppletCaptureDeviceGainImpl(
  const audio::detail::NameStorage<255>& name, float gain, TimeSpan duration,
  applet::AppletResourceUserId aruid);
Result GetAppletCaptureDeviceGainImpl(float* gain,
  const audio::detail::NameStorage<255>& name,
  applet::AppletResourceUserId aruid);
Result SetAppletBiquadFilterModeImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled,
  applet::AppletResourceUserId aruid);
Result SetAppletBiquadFilterParametersImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality,
  const std::array<BiquadFilterParameter, 2>& parameters,
  applet::AppletResourceUserId aruid);
Result GetAppletBiquadFilterParametersImpl(
  std::array<BiquadFilterParameter, 2>* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SuspendAppletVirtualDeviceImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result ResumeAppletVirtualDeviceImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetAppletVirtualDeviceLoudnessNormalization(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, bool isEnabled, TimeSpan duration,
  applet::AppletResourceUserId aruid);
Result GetAppletVirtualDeviceLoudnessNormalization(bool* isEnabled,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, applet::AppletResourceUserId aruid);
Result SetLoudnessNormalizationParameters(
  const LoudnessNormalizationParameters& parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetLoudnessNormalizationParameters(
  LoudnessNormalizationParameters* parameters,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result GetLoudnessNormalizationStatistics(int* count,
  Span<LoudnessNormalizationStatisticsSet> statistics,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality);
Result SetPhysicalDeviceFeatureImpl(uint32_t id,
  const ISoundDriverFeature& feature);
Result GetPhysicalDeviceFeatureImpl(ISoundDriverFeature* feature,
  uint32_t id);
Result SetGlobalPhysicalDeviceFeatureImpl(
  const ISoundDriverGlobalFeature& feature);
Result GetGlobalPhysicalDeviceFeatureImpl(
  ISoundDriverGlobalFeature* feature);
Result AcquireGlobalPhysicalDeviceEventImpl(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type);
Result ReleaseGlobalPhysicalDeviceEventImpl(os::SystemEvent* event,
  SoundDriverId driver, uint32_t type);
SoundDriverId GetSoundDriverIdImpl(uint32_t id);
Result SetMonauralDownmixModeImpl(bool isEnabled);
Result GetMonauralDownmixModeImpl(bool* isEnabled);
Result SetControl(SetRequest request, const void* data, size_t size);
Result GetControl(GetRequest request, const void* input, size_t inputSize,
  void* output, size_t outputSize);
Result GetControl(GetRequest request, void* output, size_t outputSize);
Result ShellCommandImpl(int* length, Span<char> output,
  std::string_view command);

}
}
