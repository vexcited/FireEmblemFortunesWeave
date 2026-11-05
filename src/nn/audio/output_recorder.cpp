#include <new>

#include "nn/audio/audio_stream.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio {

Result IsVirtualCaptureDeviceStreamFormatSupported(
  const AudioDeviceName& name, const StreamFormat& format) {
  switch (format.sampleFormat) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return detail::IsVirtualCaptureDeviceStreamFormatSupported(name,
        format);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result OpenOutputRecorder(OutputRecorderType* recorder, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount) {
  detail::OutputRecorderImpl* impl =
    new (recorder->_storage) detail::OutputRecorderImpl();
  Result result = impl->Open(buffer, size, device, format, frameCount);
  if (result.IsSuccess()) {
    recorder->_pImpl = impl;
  }
  return result;
}

Result OpenOutputRecorder(OutputRecorderType* recorder, os::SystemEvent* event,
  void* buffer, size_t size, const AudioDeviceName& device,
  const StreamFormat& format, int frameCount, int notificationFrameCount) {
  detail::OutputRecorderImpl* impl =
    new (recorder->_storage) detail::OutputRecorderImpl();
  Result result = impl->Open(event, buffer, size, device, format, frameCount,
    notificationFrameCount);
  if (result.IsSuccess()) {
    recorder->_pImpl = impl;
  }
  return result;
}

void CloseOutputRecorder(OutputRecorderType* recorder) {
  if (recorder->_pImpl != nullptr) {
    recorder->_pImpl->Close();
    recorder->_pImpl = nullptr;
  }
}

Result StartOutputRecorder(OutputRecorderType* recorder) {
  return recorder->_pImpl->Start();
}

void StopOutputRecorder(OutputRecorderType* recorder) {
  recorder->_pImpl->Stop();
}

int GetOutputRecorderCapacityFrameCount(const OutputRecorderType* recorder) {
  return recorder->_pImpl->GetCapacityFrameCount();
}

int GetOutputRecorderFreeFrameCount(const OutputRecorderType* recorder) {
  return recorder->_pImpl->GetFreeFrameCount();
}

int GetOutputRecorderFilledFrameCount(const OutputRecorderType* recorder) {
  return recorder->_pImpl->GetFilledFrameCount();
}

int ReadOutputRecorder(OutputRecorderType* recorder, void* data,
  TimeSpan* timestamp, int count) {
  return recorder->_pImpl->Read(data, timestamp, count);
}

void SetOutputRecorderGain(OutputRecorderType* recorder, float gain,
  TimeSpan duration) {
  recorder->_pImpl->SetGain(gain, duration);
}

float GetOutputRecorderGain(const OutputRecorderType* recorder) {
  return recorder->_pImpl->GetGain();
}

const StreamFormat& GetOutputRecorderStreamFormat(
  const OutputRecorderType* recorder) {
  return recorder->_pImpl->GetFormat();
}

StreamState GetOutputRecorderState(const OutputRecorderType* recorder) {
  if (recorder->_pImpl == nullptr) {
    return StreamState_Closed;
  }
  switch (recorder->_pImpl->GetState()) {
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

StreamStatistics GetOutputRecorderStatistics(OutputRecorderType* recorder,
  bool reset) {
  return recorder->_pImpl->GetStatistics(reset);
}

void PurgeOutputRecorder(OutputRecorderType* recorder) {
  recorder->_pImpl->Purge();
}

void SetOutputRecorderName(OutputRecorderType* recorder,
  const detail::NameStorage<63>& name) {
  recorder->_pImpl->SetName(name);
}

void GetOutputRecorderName(detail::NameStorage<63>* name,
  const OutputRecorderType* recorder) {
  recorder->_pImpl->GetName(name);
}

}
