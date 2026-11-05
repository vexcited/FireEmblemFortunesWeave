#include <new>

#include "nn/audio/audio_stream.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio {

int ListVirtualInjectionDevices(AudioDeviceName* names, int count) {
  if (count == 0) {
    return 0;
  }
  return detail::ListVirtualInjectionDevices(names, count);
}

void GetDefaultVirtualInjectionDevice(AudioDeviceName* name) {
  detail::GetDefaultVirtualInjectionDevice(name);
}

Result GetVirtualInjectionDeviceProperties(
  VirtualDeviceProperties* properties, const AudioDeviceName& name) {
  return detail::GetVirtualInjectionDeviceProperties(properties, name);
}

Result IsVirtualInjectionDeviceStreamFormatSupported(
  const AudioDeviceName& name, const StreamFormat& format) {
  switch (format.sampleFormat) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return detail::IsVirtualInjectionDeviceStreamFormatSupported(name,
        format);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result OpenInputInjector(InputInjectorType* injector, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount) {
  detail::InputInjectorImpl* impl =
    new (injector->_storage) detail::InputInjectorImpl();
  Result result = impl->Open(buffer, size, device, format, frameCount);
  if (result.IsSuccess()) {
    injector->_pImpl = impl;
  }
  return result;
}

Result OpenInputInjector(InputInjectorType* injector, os::SystemEvent* event,
  void* buffer, size_t size, const AudioDeviceName& device,
  const StreamFormat& format, int frameCount, int notificationFrameCount) {
  detail::InputInjectorImpl* impl =
    new (injector->_storage) detail::InputInjectorImpl();
  Result result = impl->Open(event, buffer, size, device, format, frameCount,
    notificationFrameCount);
  if (result.IsSuccess()) {
    injector->_pImpl = impl;
  }
  return result;
}

void CloseInputInjector(InputInjectorType* injector) {
  if (injector->_pImpl != nullptr) {
    injector->_pImpl->Close();
    injector->_pImpl = nullptr;
  }
}

Result StartInputInjector(InputInjectorType* injector) {
  return injector->_pImpl->Start();
}

void StopInputInjector(InputInjectorType* injector) {
  injector->_pImpl->Stop();
}

int GetInputInjectorCapacityFrameCount(const InputInjectorType* injector) {
  return injector->_pImpl->GetCapacityFrameCount();
}

int GetInputInjectorFreeFrameCount(const InputInjectorType* injector) {
  return injector->_pImpl->GetFreeFrameCount();
}

int GetInputInjectorFilledFrameCount(const InputInjectorType* injector) {
  return injector->_pImpl->GetFilledFrameCount();
}

int WriteInputInjector(InputInjectorType* injector, const void* data,
  int count) {
  return injector->_pImpl->Write(data, count);
}

void SetInputInjectorGain(InputInjectorType* injector, float gain,
  TimeSpan duration) {
  injector->_pImpl->SetGain(gain, duration);
}

float GetInputInjectorGain(const InputInjectorType* injector) {
  return injector->_pImpl->GetGain();
}

const StreamFormat& GetInputInjectorStreamFormat(
  const InputInjectorType* injector) {
  return injector->_pImpl->GetFormat();
}

StreamState GetInputInjectorState(const InputInjectorType* injector) {
  if (injector->_pImpl == nullptr) {
    return StreamState_Closed;
  }
  switch (injector->_pImpl->GetState()) {
    case StreamState_Closed:
      return StreamState_Closed;
    case StreamState_Stopped:
      return StreamState_Stopped;
    case StreamState_Started:
      return StreamState_Started;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

StreamStatistics GetInputInjectorStatistics(InputInjectorType* injector,
  bool reset) {
  return injector->_pImpl->GetStatistics(reset);
}

void PurgeInputInjector(InputInjectorType* injector) {
  injector->_pImpl->Purge();
}

}
