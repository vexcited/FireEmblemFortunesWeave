#include <stddef.h>

#include <utility>

#include "nn/audio/audio_device.hpp"
#include "nn/audio/audio_in.hpp"
#include "nn/audio/audio_out.hpp"
#include "nn/audio/audio_renderer.hpp"
#include "nn/audio/audio_system.hpp"
#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::sf {

template <typename Allocator>
class StatelessAllocationPolicy;

template <size_t Size, typename Tag>
class ExpHeapStaticAllocator;

}

// The original tags live in anonymous namespaces of the client units.

namespace nn::audio {

struct CreateAudioInManagerByHipcTag;

}

namespace nn::audio {

struct CreateAudioOutManagerByHipcTag;

}

namespace nn::audio {

struct CreateAudioRendererManagerByHipcTag;

}

namespace nn::audio {

struct CreateAudioSystemManagerForAppletByHipcTag;

}

namespace nn::audio {

struct CreateAudioSystemManagerForDebuggerByHipcTag;

}

namespace nn::sf::cmif::client::detail {

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioDevice, Kind, AllocationPolicy,
  audio::detail::IAudioDevice, Modifier>
  : public CmifProxyImplBase<audio::detail::IAudioDevice, Kind> {
public:
  Result ListAudioDeviceName(const sf::OutBuffer& names,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 0,
      names, count);
  }

  Result SetAudioDeviceOutputVolume(const sf::InBuffer& name,
    float volume) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, float)>::Invoke(&this->m_State, 1, name,
      volume);
  }

  Result QueryAudioDeviceSystemEvent(
    sf::Out<sf::NativeHandle> handle) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<sf::NativeHandle>)>::Invoke(&this->m_State, 4, handle);
  }

  Result ListAudioDeviceNameAuto(const sf::OutBuffer& names,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 7,
      names, count);
  }

  Result SetAudioDeviceOutputVolumeAuto(const sf::InBuffer& name,
    float volume) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, float)>::Invoke(&this->m_State, 8, name,
      volume);
  }

  Result GetAudioDeviceOutputVolumeAuto(const sf::InBuffer& name,
    sf::Out<float> volume) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, sf::Out<float>)>::Invoke(&this->m_State, 8,
      name, volume);
  }

  Result GetActiveAudioDeviceNameAuto(const sf::OutBuffer& name) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&)>::Invoke(&this->m_State, 10, name);
  }

  Result ListAudioOutputDeviceName(const sf::OutBuffer& names,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 14,
      names, count);
  }

  Result AcquireAudioInputDeviceNotification(sf::Out<sf::NativeHandle> handle,
    uint64_t key) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<sf::NativeHandle>, uint64_t)>::Invoke(&this->m_State, 17,
      handle, key);
  }

  Result AcquireAudioOutputDeviceNotification(sf::Out<sf::NativeHandle> handle,
    uint64_t key) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<sf::NativeHandle>, uint64_t)>::Invoke(&this->m_State, 17,
      handle, key);
  }

  Result ReleaseAudioOutputDeviceNotification(uint64_t key) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t)>::Invoke(&this->m_State, 21, key);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioIn, Kind, AllocationPolicy,
  audio::detail::IAudioIn, Modifier>
  : public CmifProxyImplBase<audio::detail::IAudioIn, Kind> {
public:
  Result GetAudioInState(sf::Out<uint32_t> state) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 0, state);
  }

  Result StartAudioIn() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result AppendAudioInBuffer(const sf::InBuffer& buffer,
    uint64_t tag) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, uint64_t)>::Invoke(&this->m_State, 3, buffer,
      tag);
  }

  Result RegisterBufferEvent(sf::Out<sf::NativeHandle> handle) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<sf::NativeHandle>)>::Invoke(&this->m_State, 4, handle);
  }

  Result GetReleasedAudioInBuffers(const sf::OutBuffer& buffers,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 5,
      buffers, count);
  }

  Result ContainsAudioInBuffer(uint64_t tag,
    sf::Out<bool> isContained) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t, sf::Out<bool>)>::Invoke(&this->m_State, 6, tag,
      isContained);
  }

  Result AppendAudioInBufferAuto(const sf::InBuffer& buffer,
    uint64_t tag) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, uint64_t)>::Invoke(&this->m_State, 8, buffer,
      tag);
  }

  Result GetReleasedAudioInBuffersAuto(const sf::OutBuffer& buffers,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 9,
      buffers, count);
  }

  Result GetAudioInBufferCount(sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 11, count);
  }

  Result SetDeviceGain(float gain) override {
    return ProxyMethodInvoker<Kind, false,
      void(float)>::Invoke(&this->m_State, 12, gain);
  }

  Result GetDeviceGain(sf::Out<float> gain) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>)>::Invoke(&this->m_State, 13, gain);
  }

  Result FlushAudioInBuffers(sf::Out<bool> isFlushed) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 14, isFlushed);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioOut, Kind, AllocationPolicy,
  audio::detail::IAudioOut, Modifier>
  : public CmifProxyImplBase<audio::detail::IAudioOut, Kind> {
public:
  Result GetAudioOutState(sf::Out<uint32_t> state) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint32_t>)>::Invoke(&this->m_State, 0, state);
  }

  Result StartAudioOut() override {
    return ProxyMethodInvoker<Kind, false,
      void()>::Invoke(&this->m_State, 1);
  }

  Result AppendAudioOutBuffer(const sf::InBuffer& buffer,
    uint64_t tag) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, uint64_t)>::Invoke(&this->m_State, 3, buffer,
      tag);
  }

  Result RegisterBufferEvent(sf::Out<sf::NativeHandle> handle) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<sf::NativeHandle>)>::Invoke(&this->m_State, 4, handle);
  }

  Result GetReleasedAudioOutBuffers(const sf::OutBuffer& buffers,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 5,
      buffers, count);
  }

  Result ContainsAudioOutBuffer(uint64_t tag,
    sf::Out<bool> isContained) override {
    return ProxyMethodInvoker<Kind, false,
      void(uint64_t, sf::Out<bool>)>::Invoke(&this->m_State, 6, tag,
      isContained);
  }

  Result AppendAudioOutBufferAuto(const sf::InBuffer& buffer,
    uint64_t tag) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::InBuffer&, uint64_t)>::Invoke(&this->m_State, 7, buffer,
      tag);
  }

  Result GetReleasedAudioOutBuffersAuto(const sf::OutBuffer& buffers,
    sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, sf::Out<int32_t>)>::Invoke(&this->m_State, 8,
      buffers, count);
  }

  Result GetAudioOutBufferCount(sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 9, count);
  }

  Result GetAudioOutPlayedSampleCount(sf::Out<uint64_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<uint64_t>)>::Invoke(&this->m_State, 10, count);
  }

  Result FlushAudioOutBuffers(sf::Out<bool> isFlushed) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>)>::Invoke(&this->m_State, 11, isFlushed);
  }

  Result SetAudioOutVolume(float volume) override {
    return ProxyMethodInvoker<Kind, false,
      void(float)>::Invoke(&this->m_State, 12, volume);
  }

  Result GetAudioOutVolume(sf::Out<float> volume) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>)>::Invoke(&this->m_State, 13, volume);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioRenderer, Kind, AllocationPolicy,
  audio::detail::IAudioRenderer, Modifier>
  : public CmifProxyImplBase<audio::detail::IAudioRenderer, Kind> {
public:
  Result GetSampleRate(sf::Out<int32_t> sampleRate) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 0, sampleRate);
  }

  Result GetSampleCount(sf::Out<int32_t> sampleCount) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 1, sampleCount);
  }

  Result GetMixBufferCount(sf::Out<int32_t> count) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 2, count);
  }

  Result GetState(sf::Out<int32_t> state) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 3, state);
  }

  Result GetRenderingTimeLimit(sf::Out<int32_t> limit) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<int32_t>)>::Invoke(&this->m_State, 9, limit);
  }

  Result RequestUpdateAuto(const sf::OutBuffer& outStatus,
    const sf::OutBuffer& performance,
    const sf::InBuffer& inParameter) override {
    return ProxyMethodInvoker<Kind, false,
      void(const sf::OutBuffer&, const sf::OutBuffer&,
      const sf::InBuffer&)>::Invoke(&this->m_State, 10, outStatus, performance,
      inParameter);
  }

  Result SetVoiceDropParameter(float parameter) override {
    return ProxyMethodInvoker<Kind, false,
      void(float)>::Invoke(&this->m_State, 12, parameter);
  }

  Result GetVoiceDropParameter(sf::Out<float> parameter) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>)>::Invoke(&this->m_State, 13, parameter);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioRendererManager, Kind,
  AllocationPolicy, audio::detail::IAudioRendererManager, Modifier>
  : public CmifProxyImplBase<audio::detail::IAudioRendererManager, Kind> {
public:
  Result GetAudioDeviceServiceWithRevisionInfo(
    const sf::Out<sf::SharedPointer<audio::detail::IAudioDevice>>& device,
    applet::AppletResourceUserId aruid, uint32_t revision) override {
    return InvokeWithStatelessOutObject<Kind, false, 4, AllocationPolicy>(
      &this->m_State, device, aruid, revision);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioSystemManagerForApplet, Kind,
  AllocationPolicy, audio::detail::IAudioSystemManagerForApplet, Modifier>
  : public CmifProxyImplBase<
      audio::detail::IAudioSystemManagerForApplet, Kind> {
public:
  Result RegisterAppletResourceUserId(
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 0, aruid);
  }

  Result UnregisterAppletResourceUserId(
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1, aruid);
  }

  Result RequestSuspendAudio(applet::AppletResourceUserId aruid,
    TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, TimeSpan)>::Invoke(&this->m_State, 2,
      aruid, fadeTime);
  }

  Result RequestResumeAudio(applet::AppletResourceUserId aruid,
    TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, TimeSpan)>::Invoke(&this->m_State, 3,
      aruid, fadeTime);
  }

  Result GetAudioOutputProcessMasterVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 4, volume, aruid);
  }

  Result SetAudioOutputProcessMasterVolume(applet::AppletResourceUserId aruid,
    float volume, TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, float, TimeSpan)>::Invoke(
      &this->m_State, 5, aruid, volume, fadeTime);
  }

  Result GetAudioInputProcessMasterVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 6, volume, aruid);
  }

  Result SetAudioInputProcessMasterVolume(applet::AppletResourceUserId aruid,
    float volume, TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, float, TimeSpan)>::Invoke(
      &this->m_State, 7, aruid, volume, fadeTime);
  }

  Result GetAudioOutputProcessRecordVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 8, volume, aruid);
  }

  Result SetAudioOutputProcessRecordVolume(applet::AppletResourceUserId aruid,
    float volume, TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, float, TimeSpan)>::Invoke(
      &this->m_State, 9, aruid, volume, fadeTime);
  }

  Result SetAudioOutputProcessFilterParameter(
    applet::AppletResourceUserId aruid,
    const sf::InBuffer& parameter) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, const sf::InBuffer&)>::Invoke(
      &this->m_State, 1000, aruid, parameter);
  }

  Result SetAudioVoiceChatProcessMasterVolume(
    applet::AppletResourceUserId aruid, float volume,
    TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, float, TimeSpan)>::Invoke(
      &this->m_State, 1001, aruid, volume, fadeTime);
  }

  Result GetAudioVoiceChatProcessMasterVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1002, volume, aruid);
  }

  Result GetAudioCaptureDeviceRecordVolume(sf::Out<float> volume,
    applet::AppletResourceUserId aruid, const sf::InBuffer& name) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<float>, applet::AppletResourceUserId,
      const sf::InBuffer&)>::Invoke(&this->m_State, 1003, volume, aruid, name);
  }

  Result SetAudioCaptureDeviceRecordVolume(applet::AppletResourceUserId aruid,
    const sf::InBuffer& name, float volume, TimeSpan fadeTime) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId, const sf::InBuffer&, float,
      TimeSpan)>::Invoke(&this->m_State, 1004, aruid, name, volume, fadeTime);
  }

  Result GetLoudnessNormalization(sf::Out<bool> isEnabled,
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(sf::Out<bool>, applet::AppletResourceUserId)>::Invoke(&this->m_State,
      1005, isEnabled, aruid);
  }

  Result SetLoudnessNormalization(bool isEnabled, TimeSpan fadeTime,
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(bool, TimeSpan, applet::AppletResourceUserId)>::Invoke(
      &this->m_State, 1006, isEnabled, fadeTime, aruid);
  }
};

template <typename Kind, typename AllocationPolicy, typename Modifier>
class CmifProxyImpl<audio::detail::IAudioSystemManagerForDebugger, Kind,
  AllocationPolicy, audio::detail::IAudioSystemManagerForDebugger, Modifier>
  : public CmifProxyImplBase<
      audio::detail::IAudioSystemManagerForDebugger, Kind> {
public:
  Result RequestSuspendAudioForDebug(
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 0, aruid);
  }

  Result RequestResumeAudioForDebug(
    applet::AppletResourceUserId aruid) override {
    return ProxyMethodInvoker<Kind, false,
      void(applet::AppletResourceUserId)>::Invoke(&this->m_State, 1, aruid);
  }
};

}

namespace {

using PlainKind = nn::sf::hipc::client::Hipc2ProxyKindBase<
  nn::sf::hipc::detail::MessageType::CmifRequestWithContext>;

using DomainKind = nn::sf::cmif::client::CmifDomainProxyKind<
  nn::sf::hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

using DefaultModifier = nn::sf::cmif::client::detail::ProcessModifierImpl<
  nn::sf::cmif::client::DefaultProxyFilterTag>;

using CreateAudioInManagerByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::audio::CreateAudioInManagerByHipcTag>>;

using CreateAudioOutManagerByHipcPolicy = nn::sf::StatelessAllocationPolicy<
  nn::sf::ExpHeapStaticAllocator<16384,
    nn::audio::CreateAudioOutManagerByHipcTag>>;

using CreateAudioRendererManagerByHipcPolicy =
  nn::sf::StatelessAllocationPolicy<nn::sf::ExpHeapStaticAllocator<16384,
    nn::audio::CreateAudioRendererManagerByHipcTag>>;

using CreateAudioSystemManagerForAppletByHipcPolicy =
  nn::sf::StatelessAllocationPolicy<nn::sf::ExpHeapStaticAllocator<16384,
    nn::audio::CreateAudioSystemManagerForAppletByHipcTag>>;

using CreateAudioSystemManagerForDebuggerByHipcPolicy =
  nn::sf::StatelessAllocationPolicy<nn::sf::ExpHeapStaticAllocator<16384,
    nn::audio::CreateAudioSystemManagerForDebuggerByHipcTag>>;

}

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioDevice, PlainKind,
  CreateAudioRendererManagerByHipcPolicy, nn::audio::detail::IAudioDevice,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioIn, PlainKind, CreateAudioInManagerByHipcPolicy,
  nn::audio::detail::IAudioIn, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioOut, PlainKind, CreateAudioOutManagerByHipcPolicy,
  nn::audio::detail::IAudioOut, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioRenderer, PlainKind,
  CreateAudioRendererManagerByHipcPolicy, nn::audio::detail::IAudioRenderer,
  DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioRendererManager, PlainKind,
  CreateAudioRendererManagerByHipcPolicy,
  nn::audio::detail::IAudioRendererManager, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioSystemManagerForApplet, PlainKind,
  CreateAudioSystemManagerForAppletByHipcPolicy,
  nn::audio::detail::IAudioSystemManagerForApplet, DefaultModifier>;

template class nn::sf::cmif::client::detail::CmifProxyImpl<
  nn::audio::detail::IAudioSystemManagerForDebugger, PlainKind,
  CreateAudioSystemManagerForDebuggerByHipcPolicy,
  nn::audio::detail::IAudioSystemManagerForDebugger, DefaultModifier>;
