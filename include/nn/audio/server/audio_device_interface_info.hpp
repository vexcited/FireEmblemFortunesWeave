#pragma once

#include <utility>

#include "nn/audio/audio_device.hpp"

namespace nn::sf {

template <typename Interface>
struct InterfaceInfo;

template <>
struct InterfaceInfo<audio::detail::IAudioDevice> {
  // Holds the implementation emplaced inside the service object.
  template <typename Impl>
  struct _tO2N {
    class type {
    public:
      template <typename... Arguments>
      explicit type(Arguments&&... args)
        : m_Impl(std::forward<Arguments>(args)...) {
      }

      Impl& GetImpl() {
        return m_Impl;
      }

    private:
      Impl m_Impl;
    };
  };

  // Binds the interface methods to the held implementation.
  template <typename Base, typename Interface>
  struct _tAB {
    class type : public Interface, public Base {
    public:
      template <typename... Arguments>
      explicit type(Arguments&&... args)
        : Base(std::forward<Arguments>(args)...) {
      }

      void Reserved2() override {
      }

      void Reserved3() override {
      }

      Result ListAudioDeviceName(const OutBuffer& names,
        Out<int> count) override {
        return this->GetImpl().ListAudioDeviceName(names, count);
      }

      Result SetAudioDeviceOutputVolume(const InBuffer& name,
        float volume) override {
        return this->GetImpl().SetAudioDeviceOutputVolume(name, volume);
      }

      Result GetAudioDeviceOutputVolume(const InBuffer& name,
        Out<float> volume) override {
        return this->GetImpl().GetAudioDeviceOutputVolume(name, volume);
      }

      Result GetActiveAudioDeviceName(const OutBuffer& name) override {
        return this->GetImpl().GetActiveAudioDeviceName(name);
      }

      Result QueryAudioDeviceSystemEvent(Out<NativeHandle> handle) override {
        return this->GetImpl().QueryAudioDeviceSystemEvent(handle);
      }

      Result GetActiveChannelCount(Out<int> count) override {
        return this->GetImpl().GetActiveChannelCount(count);
      }

      Result ListAudioDeviceNameAuto(const OutBuffer& names,
        Out<int> count) override {
        return this->GetImpl().ListAudioDeviceNameAuto(names, count);
      }

      Result SetAudioDeviceOutputVolumeAuto(const InBuffer& name,
        float volume) override {
        return this->GetImpl().SetAudioDeviceOutputVolumeAuto(name, volume);
      }

      Result GetAudioDeviceOutputVolumeAuto(const InBuffer& name,
        Out<float> volume) override {
        return this->GetImpl().GetAudioDeviceOutputVolumeAuto(name, volume);
      }

      Result GetActiveAudioDeviceNameAuto(const OutBuffer& name) override {
        return this->GetImpl().GetActiveAudioDeviceNameAuto(name);
      }

      Result QueryAudioDeviceInputEvent(Out<NativeHandle> handle) override {
        return this->GetImpl().QueryAudioDeviceInputEvent(handle);
      }

      Result QueryAudioDeviceOutputEvent(Out<NativeHandle> handle) override {
        return this->GetImpl().QueryAudioDeviceOutputEvent(handle);
      }

      Result GetActiveAudioOutputDeviceName(const OutBuffer& name) override {
        return this->GetImpl().GetActiveAudioOutputDeviceName(name);
      }

      Result ListAudioOutputDeviceName(const OutBuffer& names,
        Out<int> count) override {
        return this->GetImpl().ListAudioOutputDeviceName(names, count);
      }

      Result AcquireAudioInputDeviceNotification(Out<NativeHandle> handle,
        uint64_t key) override {
        return this->GetImpl().AcquireAudioInputDeviceNotification(handle,
          key);
      }

      Result ReleaseAudioInputDeviceNotification(uint64_t key) override {
        return this->GetImpl().ReleaseAudioInputDeviceNotification(key);
      }

      Result AcquireAudioOutputDeviceNotification(Out<NativeHandle> handle,
        uint64_t key) override {
        return this->GetImpl().AcquireAudioOutputDeviceNotification(handle,
          key);
      }

      Result ReleaseAudioOutputDeviceNotification(uint64_t key) override {
        return this->GetImpl().ReleaseAudioOutputDeviceNotification(key);
      }

      Result SetAudioDeviceOutputVolumeAutoTuneEnabled(
        bool isEnabled) override {
        return this->GetImpl().SetAudioDeviceOutputVolumeAutoTuneEnabled(
          isEnabled);
      }

      Result IsAudioDeviceOutputVolumeAutoTuneEnabled(
        Out<bool> isEnabled) override {
        return this->GetImpl().IsAudioDeviceOutputVolumeAutoTuneEnabled(
          isEnabled);
      }

      Result IsActiveOutputDeviceEstimatedLowLatency(
        Out<bool> isLowLatency) override {
        return this->GetImpl().IsActiveOutputDeviceEstimatedLowLatency(
          isLowLatency);
      }
    };
  };
};

}
