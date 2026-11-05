#pragma once

#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/audio/devmgr/devmgr.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::audio::devmgr::detail {

// Slot names follow the exported wrappers that call them.
class IDeviceManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ListVirtualDeviceNames(sf::Out<int> outCount,
    const sf::OutBuffer& names, DeviceFunctionality functionality,
    bool isActiveOnly) = 0;
  virtual Result GetDefaultVirtualDeviceName(const sf::OutBuffer& name,
    DeviceFunctionality functionality) = 0;
  virtual Result IsVirtualDeviceAvailable(const sf::InBuffer& name,
    DeviceFunctionality functionality) = 0;
  virtual Result IsVirtualDeviceStreamFormatSupported(
    const sf::InBuffer& name, const StreamFormat& format,
    DeviceFunctionality functionality) = 0;
  virtual Result GetVirtualDeviceProfile(const sf::OutBuffer& profile,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result AcquireVirtualDeviceStateChangeEvent(
    sf::Out<sf::NativeHandle> outHandle, uint64_t key,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result ReleaseVirtualDeviceStateChangeEvent(uint64_t key,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result AttachStream(const sf::InBuffer& name, uint32_t id,
    DeviceFunctionality functionality) = 0;
  virtual Result DetachStream(uint32_t id) = 0;
  virtual Result GetPhysicalDeviceName(const sf::OutBuffer& physicalName,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result GetDeviceStreamFormat(sf::Out<StreamFormat> outFormat,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result GetMixCount(sf::Out<int> outCount) = 0;
  virtual Result GetMixTopology(sf::Out<int> outCount,
    const sf::OutBuffer& nodes, MixNodeFlagSet flags) = 0;
  virtual Result GetMixNode(const sf::OutBuffer& node, uint32_t id,
    MixNodeFlagSet flags) = 0;
  virtual Result IsCaptureDeviceStreamFormatSupported(
    const sf::InBuffer& name, const StreamFormat& format) = 0;
  virtual Result AttachCaptureStream(const sf::InBuffer& name,
    uint32_t id) = 0;
  virtual Result GetCaptureDeviceProfile(const sf::OutBuffer& profile,
    const sf::InBuffer& name) = 0;
  virtual Result AttachInjectionStream(const sf::InBuffer& name,
    uint32_t id) = 0;
};

class IDeviceManagerForSystem : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result ListPhysicalDeviceNames(sf::Out<int> outCount,
    const sf::OutBuffer& names, DeviceFunctionality functionality,
    bool isActiveOnly) = 0;
  virtual Result EnableSoundDriver(sf::Out<sf::NativeHandle> outHandle,
    SoundDriverId driver) = 0;
  virtual Result DisableSoundDriver(SoundDriverId driver) = 0;
  virtual Result IsSoundDriverEnabled(sf::Out<bool> outIsEnabled,
    SoundDriverId driver) = 0;
  virtual Result ListPhysicalDeviceIds(sf::Out<int> outCount,
    const sf::OutBuffer& ids, int countMax, DeviceFunctionality functionality,
    bool isActiveOnly, SoundDriverId driver, bool isDriverFiltered) = 0;
  virtual Result GetPhysicalDeviceId(sf::Out<uint32_t> outId,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result GetPhysicalDeviceProfile(const sf::OutBuffer& profile,
    uint32_t id) = 0;
  virtual Result MapRawInputDevice(uint32_t id, uint32_t channel,
    uint32_t index, float gain) = 0;
  virtual Result MapAndBindPhysicalDevice(const sf::InBuffer& name,
    DeviceFunctionality functionality, uint32_t id, uint32_t channel,
    uint32_t index, float gain) = 0;
  virtual Result UnmapPhysicalDevice(uint32_t id) = 0;
  virtual Result GetBoundPhysicalDeviceProfile(const sf::OutBuffer& profile,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result GetRawInputPhysicalDeviceProfile(
    const sf::OutBuffer& profile) = 0;
  virtual Result SetVirtualDeviceGain(const sf::InBuffer& name,
    DeviceFunctionality functionality, float gain, TimeSpan duration) = 0;
  virtual Result GetVirtualDeviceGain(sf::Out<float> outGain,
    const sf::InBuffer& name, DeviceFunctionality functionality) = 0;
  virtual Result SetAppletVirtualDeviceGain(const sf::InBuffer& name,
    DeviceFunctionality functionality, float gain, TimeSpan duration,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAppletVirtualDeviceGain(sf::Out<float> outGain,
    const sf::InBuffer& name, DeviceFunctionality functionality,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetAppletCaptureDeviceGain(const sf::InBuffer& name,
    float gain, TimeSpan duration, applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAppletCaptureDeviceGain(sf::Out<float> outGain,
    const sf::InBuffer& name, applet::AppletResourceUserId aruid) = 0;
  virtual Result SetAppletBiquadFilterMode(const sf::InBuffer& name,
    DeviceFunctionality functionality, bool isEnabled,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetAppletBiquadFilterParameters(const sf::InBuffer& name,
    DeviceFunctionality functionality, const sf::InBuffer& parameters,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAppletBiquadFilterParameters(
    const sf::OutBuffer& parameters, const sf::InBuffer& name,
    DeviceFunctionality functionality,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SuspendAppletVirtualDevice(const sf::InBuffer& name,
    DeviceFunctionality functionality,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result ResumeAppletVirtualDevice(const sf::InBuffer& name,
    DeviceFunctionality functionality,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetPhysicalDeviceGain(uint32_t id, float gain,
    TimeSpan duration) = 0;
  virtual Result GetPhysicalDeviceGain(sf::Out<float> outGain,
    uint32_t id) = 0;
  virtual Result SetPhysicalDeviceFeature(uint8_t type, uint32_t id,
    uint32_t version, const sf::InBuffer& data) = 0;
  virtual Result GetPhysicalDeviceFeature(const sf::OutBuffer& data,
    uint8_t type, uint32_t id, uint32_t version) = 0;
  virtual Result SetGlobalPhysicalDeviceFeature(uint8_t type,
    uint32_t version, const sf::InBuffer& data) = 0;
  virtual Result GetGlobalPhysicalDeviceFeature(const sf::OutBuffer& data,
    uint8_t type, uint32_t version) = 0;
  virtual Result AcquireGlobalPhysicalDeviceEvent(
    sf::Out<sf::NativeHandle> outHandle, SoundDriverId driver,
    uint32_t type) = 0;
  virtual Result ReleaseGlobalPhysicalDeviceEvent(SoundDriverId driver,
    uint32_t type) = 0;
  virtual Result BindPhysicalDevice(const sf::InBuffer& name,
    DeviceFunctionality functionality, uint32_t id) = 0;
  virtual Result SetMonauralDownmixMode(bool isEnabled) = 0;
  virtual Result SetControl(SetRequest request,
    const sf::InBuffer& data) = 0;
  virtual Result GetMonauralDownmixMode(sf::Out<bool> outIsEnabled) = 0;
  virtual Result GetControl(GetRequest request, const sf::InBuffer& input,
    const sf::OutBuffer& output) = 0;
  virtual Result ShellCommand(sf::Out<int> outLength,
    const sf::OutBuffer& output, const sf::InBuffer& command) = 0;
  virtual Result SetAppletVirtualDeviceLoudnessNormalization(bool isEnabled,
    const sf::InBuffer& name, DeviceFunctionality functionality,
    TimeSpan duration, applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAppletVirtualDeviceLoudnessNormalization(
    sf::Out<bool> outIsEnabled, const sf::InBuffer& name,
    DeviceFunctionality functionality,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result SetLoudnessNormalizationParameters(
    const sf::InBuffer& parameters, const sf::InBuffer& name,
    DeviceFunctionality functionality) = 0;
  virtual Result GetLoudnessNormalizationParameters(
    const sf::OutBuffer& parameters, const sf::InBuffer& name,
    DeviceFunctionality functionality) = 0;
  virtual Result GetLoudnessNormalizationStatistics(sf::Out<int> outCount,
    const sf::OutBuffer& statistics, const sf::InBuffer& name,
    DeviceFunctionality functionality) = 0;
  virtual Result UnbindVirtualDevice(const sf::InBuffer& name,
    DeviceFunctionality functionality) = 0;
  virtual Result SetCaptureDeviceGain(const sf::InBuffer& name, float gain,
    TimeSpan duration) = 0;
  virtual Result GetCaptureDeviceGain(sf::Out<float> outGain,
    const sf::InBuffer& name) = 0;
  virtual Result SetAppletVirtualDeviceGainStaging(const sf::InBuffer& name,
    DeviceFunctionality functionality, const sf::InBuffer& staging,
    TimeSpan duration, applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAppletVirtualDeviceGainStaging(
    const sf::OutBuffer& staging, const sf::InBuffer& name,
    DeviceFunctionality functionality,
    applet::AppletResourceUserId aruid) = 0;
};

extern sf::SharedPointer<IDeviceManagerForSystem> g_SystemManager;

inline sf::InBuffer ToInBuffer(const audio::detail::NameStorage<255>& name) {
  return sf::InBuffer(name.buffer, name.size);
}

}
