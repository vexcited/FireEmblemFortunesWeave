#include <new>

#include "nn/audio/audio_stream.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio::detail {

StreamIdAllocator<4> g_OutputStreamIdAllocator;

namespace {

constexpr int StreamCountMax = 4;

struct StreamName : NameStorage<255> {
  StreamName(int id, const StreamFormat& format,
    const AudioDeviceName& device)
    : NameStorage<255>(FormatNameStorage("OutputStream-%d=>%s%s%s=>%s", id,
        GetChannelCountName(format.channelCount),
        GetSampleRateName(format.sampleRate),
        GetSampleFormatName(format.sampleFormat), device.name)) {}
};

}

int ListVirtualOutputDevices(AudioDeviceName* names, int count) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  int countMax = count < 8 ? count : 8;
  int listed = devmgr::ListVirtualDeviceNames(
    reinterpret_cast<NameStorageType<255>*>(names), countMax,
    devmgr::DeviceFunctionality_Output, false, nullptr);
  for (int i = listed; i < countMax; ++i) {
    names[i].name[0] = '\0';
  }
  devmgr::Finalize();
  return listed;
}

void GetDefaultVirtualOutputDevice(AudioDeviceName* name) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  devmgr::ListVirtualDeviceNames(reinterpret_cast<NameStorageType<255>*>(name),
    1, devmgr::DeviceFunctionality_Output, false, nullptr);
  devmgr::Finalize();
}

Result GetVirtualOutputDeviceProperties(VirtualDeviceProperties* properties,
  const AudioDeviceName& name) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  devmgr::VirtualDeviceProfile profile = {};
  NameStorage<255> storage(name.name);
  Result result = devmgr::GetVirtualDeviceProfile(&profile, storage,
    devmgr::DeviceFunctionality_Output, nullptr);
  if (result.IsSuccess()) {
    memcpy(&properties->name, &name, sizeof(name));
    properties->latency = profile.latency;
    properties->channelCount = profile.channelCount;
  }
  devmgr::Finalize();
  return result;
}

Result IsVirtualOutputDeviceStreamFormatSupported(const AudioDeviceName& name,
  const StreamFormat& format) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  NameStorage<255> storage(name.name);
  Result result = devmgr::IsVirtualDeviceStreamFormatSupported(storage,
    format, devmgr::DeviceFunctionality_Output, nullptr);
  devmgr::Finalize();
  return result;
}

OutputStreamImpl::OutputStreamImpl()
  : m_Id(), m_DeviceName(), m_pEvent(nullptr), m_State(0), m_Format(),
    m_CapacityFrameCount(0), m_ContextStorage() {
  m_Id = -1;
  uintptr_t storage = reinterpret_cast<uintptr_t>(m_ContextStorage);
  m_pContext = new (reinterpret_cast<void*>((storage + 7) & ~uintptr_t(7)))
    sysmix::StreamContext();
}

OutputStreamImpl::~OutputStreamImpl() {
  if (m_State >= 0) {
    Close();
  }
  m_Format = {};
  m_DeviceName.name[0] = '\0';
  m_pContext = nullptr;
}

Result OutputStreamImpl::Open(void* buffer, size_t size,
  const AudioDeviceName& device, const StreamFormat& format,
  int frameCount) {
  return Open(nullptr, buffer, size, device, format, frameCount, 0, {});
}

Result OutputStreamImpl::Open(os::SystemEvent* event, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount, int notificationFrameCount) {
  return Open(event, buffer, size, device, format, frameCount,
    notificationFrameCount, {});
}

Result OutputStreamImpl::Open(void* buffer, size_t size,
  const AudioDeviceName& device, const StreamFormat& format, int frameCount,
  OutputStreamFlagSet flags) {
  return Open(nullptr, buffer, size, device, format, frameCount, 0, flags);
}

Result OutputStreamImpl::Open(os::SystemEvent* event, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount, int notificationFrameCount, OutputStreamFlagSet flags) {
  NN_AUDIO_RESULT_DO(devmgr::Initialize());
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::Initialize());
  Result result;
  m_Id = g_OutputStreamIdAllocator.Allocate();
  if (m_Id < 0) {
    result = MakeResult(5);
  }
  else {
    NameStorage<255> name;
    name.Set(device.name);
    result = devmgr::IsVirtualDeviceStreamFormatSupported(name, format,
      devmgr::DeviceFunctionality_Output, nullptr);
    if (result.IsSuccess()) {
      devmgr::VirtualDeviceProfile profile = {};
      result = devmgr::GetVirtualDeviceProfile(&profile, name,
        devmgr::DeviceFunctionality_Output, nullptr);
      if (result.IsSuccess()) {
        if (frameCount < static_cast<int>((profile.latency *
          format.sampleRate + 999999999) / 1000000000)) {
          result = MakeResult(4);
        }
        else {
          sysmix::StreamContext* context = m_pContext;
          uint32_t option = 4;
          if ((flags._storage[0] & 1) != 0 || format.channelCount < 6) {
            option = 36;
          }
          if ((flags._storage[0] & 2) != 0) {
            option |= 64;
          }
          option |= (flags._storage[0] >> 9) & 128;
          StreamName streamName(m_Id, format, device);
          result = sysmix::CreateStream(context, profile.id,
            util::string_view(streamName.data, streamName.size), {{option}},
            buffer, size);
          if (result.IsSuccess()) {
            result = sysmix::OpenStream(context, format, frameCount, 0, {});
            if (result.IsSuccess()) {
              if (event != nullptr) {
                result = sysmix::AcquireStreamDataEvent(event, context,
                  sysmix::StreamDataNotificationMode(2),
                  notificationFrameCount);
                if (result.IsSuccess()) [[likely]] {
                  m_pEvent = event;
                }
                else {
                  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::CloseStream(context));
                }
              }
              if (result.IsSuccess()) {
                capture::StartSystemAudioCaptureServer();
                util::Strlcpy(m_DeviceName.name, name.buffer,
                  sizeof(m_DeviceName.name));
                m_Format = format;
                m_CapacityFrameCount = frameCount;
                m_State = StreamState_Stopped;
                return result;
              }
            }
            NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::DestroyStream(context));
          }
        }
      }
    }
    g_OutputStreamIdAllocator.Free(m_Id);
  }
  sysmix::Finalize();
  devmgr::Finalize();
  return result;
}

void OutputStreamImpl::Close() {
  if (m_State == StreamState_Started) {
    NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::DetachStream(m_pContext->id,
      nullptr));
    m_State = StreamState_Stopped;
  }
  sysmix::StreamContext* context = m_pContext;
  if (m_pEvent != nullptr) {
    NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::ReleaseStreamDataEvent(m_pEvent,
      context));
    m_pEvent = nullptr;
  }
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::CloseStream(context));
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::DestroyStream(context));
  g_OutputStreamIdAllocator.Free(m_Id);
  sysmix::Finalize();
  devmgr::Finalize();
  m_State = StreamState_Closed;
  m_Id = -1;
}

Result OutputStreamImpl::Start() {
  NameStorage<255> name;
  name.Set(m_DeviceName.name);
  if (devmgr::AttachStream(name, m_pContext->id,
    devmgr::DeviceFunctionality_Output, nullptr)
    .IsFailure()) {
    return MakeResult(2);
  }
  m_State = StreamState_Started;
  return Result();
}

void OutputStreamImpl::Stop() {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::DetachStream(m_pContext->id,
    nullptr));
  m_State = StreamState_Stopped;
}

int OutputStreamImpl::GetCapacityFrameCount() const {
  return m_CapacityFrameCount;
}

int OutputStreamImpl::GetFreeFrameCount() const {
  int count = 0;
  if (sysmix::GetStreamFreeFrameCount(&count, m_pContext).IsFailure()) {
    return 0;
  }
  return count;
}

int OutputStreamImpl::GetFilledFrameCount() const {
  int count = 0;
  if (sysmix::GetStreamFilledFrameCount(&count, m_pContext).IsFailure()) {
    return 0;
  }
  return count;
}

int OutputStreamImpl::Write(const void* data, int count) {
  int written = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::WriteStream(&written, m_pContext,
    data, count));
  return written;
}

void OutputStreamImpl::SetGain(float gain, TimeSpan duration) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::SetStreamGain(gain, m_pContext,
    duration));
}

float OutputStreamImpl::GetGain() const {
  float gain = 0.0f;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::GetStreamGain(&gain, m_pContext));
  return gain;
}

const StreamFormat& OutputStreamImpl::GetFormat() const {
  return m_Format;
}

Result OutputStreamImpl::StartStreams(OutputStreamImpl* const* streams,
  int count) {
  if (streams == nullptr || count < 1 || count > StreamCountMax) {
    return MakeResult(2);
  }
  sysmix::StreamContext* contexts[StreamCountMax] = {};
  for (int i = 0; i < count; ++i) {
    if (streams[i] == nullptr || streams[i]->m_State != StreamState_Stopped) {
      return MakeResult(2);
    }
    contexts[i] = streams[i]->m_pContext;
  }
  if (count >= 2) {
    for (int i = 1; i < count; ++i) {
      if (util::Strncmp(streams[0]->m_DeviceName.name,
        streams[i]->m_DeviceName.name, 256) != 0) {
        return MakeResult(2);
      }
    }
    if (sysmix::DisengageStreams(contexts, count).IsFailure()) {
      return MakeResult(2);
    }
  }
  int started = 0;
  for (; started < count; ++started) {
    OutputStreamImpl* stream = streams[started];
    NameStorage<255> name;
    name.Set(stream->m_DeviceName.name);
    if (devmgr::AttachStream(name, stream->m_pContext->id,
      devmgr::DeviceFunctionality_Output, nullptr).IsFailure()) {
      break;
    }
    stream->m_State = StreamState_Started;
  }
  if (started == count) {
    if (count < 2) {
      return Result();
    }
    Result result = sysmix::EngageStreams(contexts, count);
    if (result.IsSuccess()) {
      return result;
    }
    for (int i = 0; i < count; ++i) {
      OutputStreamImpl* stream = streams[i];
      NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::DetachStream(
        stream->m_pContext->id, nullptr));
      stream->m_State = StreamState_Stopped;
    }
  }
  if (count >= 2) {
    sysmix::EngageStreams(contexts, count);
  }
  return MakeResult(2);
}

Result OutputStreamImpl::StopStreams(OutputStreamImpl* const* streams,
  int count) {
  if (streams == nullptr || count < 1 || count > StreamCountMax) {
    return MakeResult(2);
  }
  sysmix::StreamContext* contexts[StreamCountMax] = {};
  for (int i = 0; i < count; ++i) {
    if (streams[i] == nullptr || streams[i]->m_State != StreamState_Started) {
      return MakeResult(2);
    }
    contexts[i] = streams[i]->m_pContext;
  }
  if (count >= 2) {
    for (int i = 1; i < count; ++i) {
      if (util::Strncmp(streams[0]->m_DeviceName.name,
        streams[i]->m_DeviceName.name, 256) != 0) {
        return MakeResult(2);
      }
    }
    NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::DisengageStreams(contexts, count));
  }
  for (int i = 0; i < count; ++i) {
    OutputStreamImpl* stream = streams[i];
    NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::DetachStream(stream->m_pContext->id,
      nullptr));
    stream->m_State = StreamState_Stopped;
  }
  if (count >= 2) {
    NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::EngageStreams(contexts, count));
  }
  return Result();
}

const AudioDeviceName& OutputStreamImpl::GetVirtualDevice() const {
  return m_DeviceName;
}

StreamState OutputStreamImpl::GetState() const {
  return static_cast<StreamState>(m_State);
}

StreamStatistics OutputStreamImpl::GetStatistics(bool reset) {
  StreamStatistics statistics = {};
  sysmix::StreamStatistics source = {};
  if (sysmix::GetStreamStatistics(&source, m_pContext, reset).IsSuccess()) {
    statistics.value[0] = source.value[0];
    statistics.value[1] = source.value[1];
    statistics.value[2] = source.value[2];
  }
  return statistics;
}

void OutputStreamImpl::SetName(const OutputStreamName& name) {
  sysmix::StreamContext* context = m_pContext;
  StreamName base(m_Id, m_Format, m_DeviceName);
  NameStorage<255> fullName = FormatNameStorage("%s|%s", base.buffer,
    name.name);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::RenameStream(context,
    util::string_view(fullName.data, fullName.size)));
}

void OutputStreamImpl::GetName(OutputStreamName* name) {
  sysmix::StreamContext* context = m_pContext;
  if (context != nullptr) {
    StreamName base(m_Id, m_Format, m_DeviceName);
    const char* source = context->name.buffer + base.size + 1;
    if (source != nullptr) {
      int length = util::Strnlen(source, 63);
      memcpy(name->name, source, length);
      name->name[length] = '\0';
      return;
    }
  }
  name->name[0] = '\0';
}

void OutputStreamImpl::Purge() {
  int purged = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::PurgeStream(&purged, m_pContext, 0));
}

}
