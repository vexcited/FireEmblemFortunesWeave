#include <new>

#include "nn/audio/audio_stream.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio {

int ListVirtualInputDevices(AudioDeviceName* names, int count) {
  if (count == 0) {
    return 0;
  }
  return detail::ListVirtualInputDevices(names, count);
}

void GetDefaultVirtualInputDevice(AudioDeviceName* name) {
  detail::GetDefaultVirtualInputDevice(name);
}

Result GetVirtualInputDeviceProperties(
  VirtualDeviceProperties* properties, const AudioDeviceName& name) {
  return detail::GetVirtualInputDeviceProperties(properties, name);
}

Result IsVirtualInputDeviceStreamFormatSupported(
  const AudioDeviceName& name, const StreamFormat& format) {
  switch (format.sampleFormat) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return detail::IsVirtualInputDeviceStreamFormatSupported(name,
        format);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result OpenInputStream(InputStreamType* stream, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount) {
  detail::InputStreamImpl* impl =
    new (stream->_storage) detail::InputStreamImpl();
  Result result = impl->Open(buffer, size, device, format, frameCount);
  if (result.IsSuccess()) {
    stream->_pImpl = impl;
  }
  return result;
}

Result OpenInputStream(InputStreamType* stream, os::SystemEvent* event,
  void* buffer, size_t size, const AudioDeviceName& device,
  const StreamFormat& format, int frameCount, int notificationFrameCount) {
  detail::InputStreamImpl* impl =
    new (stream->_storage) detail::InputStreamImpl();
  Result result = impl->Open(event, buffer, size, device, format, frameCount,
    notificationFrameCount);
  if (result.IsSuccess()) {
    stream->_pImpl = impl;
  }
  return result;
}

void CloseInputStream(InputStreamType* stream) {
  if (stream->_pImpl != nullptr) {
    stream->_pImpl->Close();
    stream->_pImpl = nullptr;
  }
}

Result StartInputStream(InputStreamType* stream) {
  return stream->_pImpl->Start();
}

void StopInputStream(InputStreamType* stream) {
  stream->_pImpl->Stop();
}

int GetInputStreamCapacityFrameCount(const InputStreamType* stream) {
  return stream->_pImpl->GetCapacityFrameCount();
}

int GetInputStreamFreeFrameCount(const InputStreamType* stream) {
  return stream->_pImpl->GetFreeFrameCount();
}

int GetInputStreamFilledFrameCount(const InputStreamType* stream) {
  return stream->_pImpl->GetFilledFrameCount();
}

int ReadInputStream(InputStreamType* stream, void* data, int count) {
  return stream->_pImpl->Read(data, count);
}

void SetInputStreamGain(InputStreamType* stream, float gain,
  TimeSpan duration) {
  stream->_pImpl->SetGain(gain, duration);
}

float GetInputStreamGain(const InputStreamType* stream) {
  return stream->_pImpl->GetGain();
}

const StreamFormat& GetInputStreamFormat(
  const InputStreamType* stream) {
  return stream->_pImpl->GetFormat();
}

StreamState GetInputStreamState(const InputStreamType* stream) {
  if (stream->_pImpl == nullptr) {
    return StreamState_Closed;
  }
  switch (stream->_pImpl->GetState()) {
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

StreamStatistics GetInputStreamStatistics(InputStreamType* stream,
  bool reset) {
  return stream->_pImpl->GetStatistics(reset);
}

void PurgeInputStream(InputStreamType* stream) {
  stream->_pImpl->Purge();
}

void SetInputStreamName(InputStreamType* stream, const InputStreamName& name) {
  stream->_pImpl->SetName(name);
}

void GetInputStreamName(InputStreamName* name, const InputStreamType* stream) {
  stream->_pImpl->GetName(name);
}

}
