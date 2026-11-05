#include <new>

#include "nn/audio/audio_stream.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio {

int ListVirtualOutputDevices(AudioDeviceName* names, int count) {
  if (count == 0) {
    return 0;
  }
  return detail::ListVirtualOutputDevices(names, count);
}

void GetDefaultVirtualOutputDevice(AudioDeviceName* name) {
  detail::GetDefaultVirtualOutputDevice(name);
}

Result GetVirtualOutputDeviceProperties(
  VirtualDeviceProperties* properties, const AudioDeviceName& name) {
  return detail::GetVirtualOutputDeviceProperties(properties, name);
}

Result IsVirtualOutputDeviceStreamFormatSupported(
  const AudioDeviceName& name, const StreamFormat& format) {
  switch (format.sampleFormat) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return detail::IsVirtualOutputDeviceStreamFormatSupported(name,
        format);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result IsOutputStreamFlagSetValid(OutputStreamFlagSet flags) {
  return detail::IsOutputStreamFlagSetValid(flags);
}

namespace {

constexpr int StreamCountMax = 4;

}

Result StartOutputStreams(OutputStreamType* const* streams, int count) {
  detail::OutputStreamImpl* impls[StreamCountMax] = {};
  if (streams == nullptr) {
    return detail::OutputStreamImpl::StartStreams(nullptr, count);
  }
  for (int i = 0; i < count && i < StreamCountMax; ++i) {
    impls[i] = streams[i] != nullptr ? streams[i]->_pImpl : nullptr;
  }
  return detail::OutputStreamImpl::StartStreams(impls, count);
}

Result StopOutputStreams(OutputStreamType* const* streams, int count) {
  detail::OutputStreamImpl* impls[StreamCountMax] = {};
  if (streams == nullptr) {
    return detail::OutputStreamImpl::StopStreams(nullptr, count);
  }
  for (int i = 0; i < count && i < StreamCountMax; ++i) {
    impls[i] = streams[i] != nullptr ? streams[i]->_pImpl : nullptr;
  }
  return detail::OutputStreamImpl::StopStreams(impls, count);
}

Result OpenOutputStream(OutputStreamType* stream, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount) {
  detail::OutputStreamImpl* impl =
    new (stream->_storage) detail::OutputStreamImpl();
  Result result = impl->Open(buffer, size, device, format, frameCount);
  if (result.IsSuccess()) {
    stream->_pImpl = impl;
  }
  return result;
}

Result OpenOutputStream(OutputStreamType* stream, os::SystemEvent* event,
  void* buffer, size_t size, const AudioDeviceName& device,
  const StreamFormat& format, int frameCount, int notificationFrameCount) {
  detail::OutputStreamImpl* impl =
    new (stream->_storage) detail::OutputStreamImpl();
  Result result = impl->Open(event, buffer, size, device, format, frameCount,
    notificationFrameCount);
  if (result.IsSuccess()) {
    stream->_pImpl = impl;
  }
  return result;
}

Result OpenOutputStream(OutputStreamType* stream, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount, OutputStreamFlagSet flags) {
  detail::OutputStreamImpl* impl =
    new (stream->_storage) detail::OutputStreamImpl();
  Result result = impl->Open(buffer, size, device, format, frameCount, flags);
  if (result.IsSuccess()) {
    stream->_pImpl = impl;
  }
  return result;
}

Result OpenOutputStream(OutputStreamType* stream, os::SystemEvent* event,
  void* buffer, size_t size, const AudioDeviceName& device,
  const StreamFormat& format, int frameCount, int notificationFrameCount,
  OutputStreamFlagSet flags) {
  detail::OutputStreamImpl* impl =
    new (stream->_storage) detail::OutputStreamImpl();
  Result result = impl->Open(event, buffer, size, device, format, frameCount,
    notificationFrameCount, flags);
  if (result.IsSuccess()) {
    stream->_pImpl = impl;
  }
  return result;
}

void CloseOutputStream(OutputStreamType* stream) {
  if (stream->_pImpl != nullptr) {
    stream->_pImpl->Close();
    stream->_pImpl = nullptr;
  }
}

Result StartOutputStream(OutputStreamType* stream) {
  return stream->_pImpl->Start();
}

void StopOutputStream(OutputStreamType* stream) {
  stream->_pImpl->Stop();
}

int GetOutputStreamCapacityFrameCount(const OutputStreamType* stream) {
  return stream->_pImpl->GetCapacityFrameCount();
}

int GetOutputStreamFreeFrameCount(const OutputStreamType* stream) {
  return stream->_pImpl->GetFreeFrameCount();
}

int GetOutputStreamFilledFrameCount(const OutputStreamType* stream) {
  return stream->_pImpl->GetFilledFrameCount();
}

int WriteOutputStream(OutputStreamType* stream, const void* data,
  int count) {
  return stream->_pImpl->Write(data, count);
}

void SetOutputStreamGain(OutputStreamType* stream, float gain,
  TimeSpan duration) {
  stream->_pImpl->SetGain(gain, duration);
}

float GetOutputStreamGain(const OutputStreamType* stream) {
  return stream->_pImpl->GetGain();
}

const StreamFormat& GetOutputStreamFormat(
  const OutputStreamType* stream) {
  return stream->_pImpl->GetFormat();
}

StreamState GetOutputStreamState(const OutputStreamType* stream) {
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

StreamStatistics GetOutputStreamStatistics(OutputStreamType* stream,
  bool reset) {
  return stream->_pImpl->GetStatistics(reset);
}

void PurgeOutputStream(OutputStreamType* stream) {
  stream->_pImpl->Purge();
}

void SetOutputStreamName(OutputStreamType* stream,
  const OutputStreamName& name) {
  stream->_pImpl->SetName(name);
}

void GetOutputStreamName(OutputStreamName* name,
  const OutputStreamType* stream) {
  stream->_pImpl->GetName(name);
}

}
