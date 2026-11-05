#include <new>

#include "nn/audio/audio_stream.hpp"
#include "nn/audio/detail/audio_abort.hpp"

namespace nn::audio::detail {

StreamIdAllocator<1> g_InputInjectorIdAllocator;

namespace {

struct StreamName : NameStorage<255> {
  StreamName(int id, const StreamFormat& format,
    const AudioDeviceName& device)
    : NameStorage<255>(FormatNameStorage("InputInjector-%d=>%s%s%s=>%s", id,
        GetChannelCountName(format.channelCount),
        GetSampleRateName(format.sampleRate),
        GetSampleFormatName(format.sampleFormat), device.name)) {}
};

}

int ListVirtualInjectionDevices(AudioDeviceName* names, int count) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  int countMax = count < 8 ? count : 8;
  int listed = devmgr::ListVirtualDeviceNames(
    reinterpret_cast<NameStorageType<255>*>(names), countMax,
    devmgr::DeviceFunctionality_Input, false, nullptr);
  for (int i = listed; i < countMax; ++i) {
    names[i].name[0] = '\0';
  }
  devmgr::Finalize();
  return listed;
}

void GetDefaultVirtualInjectionDevice(AudioDeviceName* name) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  devmgr::ListVirtualDeviceNames(reinterpret_cast<NameStorageType<255>*>(name),
    1, devmgr::DeviceFunctionality_Input, false, nullptr);
  devmgr::Finalize();
}

Result GetVirtualInjectionDeviceProperties(VirtualDeviceProperties* properties,
  const AudioDeviceName& name) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  devmgr::VirtualDeviceProfile profile = {};
  NameStorage<255> storage(name.name);
  Result result = devmgr::GetVirtualDeviceProfile(&profile, storage,
    devmgr::DeviceFunctionality_Input, nullptr);
  if (result.IsSuccess()) {
    memcpy(&properties->name, &name, sizeof(name));
    properties->latency = profile.latency;
    properties->channelCount = profile.channelCount;
  }
  devmgr::Finalize();
  return result;
}

Result IsVirtualInjectionDeviceStreamFormatSupported(const AudioDeviceName& name,
  const StreamFormat& format) {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::Initialize());
  NameStorage<255> storage(name.name);
  Result result = devmgr::IsVirtualDeviceStreamFormatSupported(storage,
    format, devmgr::DeviceFunctionality_Input, nullptr);
  devmgr::Finalize();
  return result;
}

InputInjectorImpl::InputInjectorImpl()
  : m_Id(), m_DeviceName(), m_pEvent(nullptr), m_State(0), m_Format(),
    m_CapacityFrameCount(0), m_ContextStorage() {
  m_Id = -1;
  uintptr_t storage = reinterpret_cast<uintptr_t>(m_ContextStorage);
  m_pContext = new (reinterpret_cast<void*>((storage + 7) & ~uintptr_t(7)))
    sysmix::StreamContext();
}

InputInjectorImpl::~InputInjectorImpl() {
  if (m_State >= 0) {
    Close();
  }
  m_Format = {};
  m_DeviceName.name[0] = '\0';
  m_pContext = nullptr;
}

Result InputInjectorImpl::Open(void* buffer, size_t size,
  const AudioDeviceName& device, const StreamFormat& format,
  int frameCount) {
  return Open(nullptr, buffer, size, device, format, frameCount, 0);
}

Result InputInjectorImpl::Open(os::SystemEvent* event, void* buffer,
  size_t size, const AudioDeviceName& device, const StreamFormat& format,
  int frameCount, int notificationFrameCount) {
  NN_AUDIO_RESULT_DO(devmgr::Initialize());
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::Initialize());
  Result result;
  m_Id = g_InputInjectorIdAllocator.Allocate();
  if (m_Id < 0) {
    result = MakeResult(5);
  }
  else {
    NameStorage<255> name;
    name.Set(device.name);
    result = devmgr::IsVirtualDeviceStreamFormatSupported(name, format,
      devmgr::DeviceFunctionality_Input, nullptr);
    if (result.IsSuccess()) {
      devmgr::VirtualDeviceProfile profile = {};
      result = devmgr::GetVirtualDeviceProfile(&profile, name,
        devmgr::DeviceFunctionality_Input, nullptr);
      if (result.IsSuccess()) {
        if (frameCount < static_cast<int>((profile.latency *
          format.sampleRate + 999999999) / 1000000000)) {
          result = MakeResult(4);
        }
        else {
          sysmix::StreamContext* context = m_pContext;
          StreamName streamName(m_Id, format, device);
          result = sysmix::CreateStream(context, profile.id,
            util::string_view(streamName.data, streamName.size), {{4}},
            buffer, size);
          if (result.IsSuccess()) {
            result = sysmix::OpenStream(context, format, frameCount, 0, {});
            if (result.IsSuccess()) {
              if (event != nullptr) {
                result = sysmix::AcquireStreamDataEvent(event, context,
                  sysmix::StreamDataNotificationMode(2),
                  notificationFrameCount);
                if (result.IsFailure()) {
                  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::CloseStream(context));
                }
                else {
                  m_pEvent = event;
                }
              }
              if (result.IsSuccess()) {
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
    g_InputInjectorIdAllocator.Free(m_Id);
  }
  sysmix::Finalize();
  devmgr::Finalize();
  return result;
}

void InputInjectorImpl::Close() {
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
  g_InputInjectorIdAllocator.Free(m_Id);
  sysmix::Finalize();
  devmgr::Finalize();
  m_State = StreamState_Closed;
  m_Id = -1;
}

Result InputInjectorImpl::Start() {
  NameStorage<255> name;
  name.Set(m_DeviceName.name);
  if (devmgr::AttachInjectionStream(name, m_pContext->id, nullptr)
    .IsFailure()) {
    return MakeResult(2);
  }
  m_State = StreamState_Started;
  return Result();
}

void InputInjectorImpl::Stop() {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(devmgr::DetachStream(m_pContext->id,
    nullptr));
  m_State = StreamState_Stopped;
}

int InputInjectorImpl::GetCapacityFrameCount() const {
  return m_CapacityFrameCount;
}

int InputInjectorImpl::GetFreeFrameCount() const {
  int count = 0;
  if (sysmix::GetStreamFreeFrameCount(&count, m_pContext).IsFailure()) {
    return 0;
  }
  return count;
}

int InputInjectorImpl::GetFilledFrameCount() const {
  int count = 0;
  if (sysmix::GetStreamFilledFrameCount(&count, m_pContext).IsFailure()) {
    return 0;
  }
  return count;
}

int InputInjectorImpl::Write(const void* data, int count) const {
  int written = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::WriteStream(&written, m_pContext,
    data, count));
  return written;
}

void InputInjectorImpl::SetGain(float gain, TimeSpan duration) const {
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::SetStreamGain(gain, m_pContext,
    duration));
}

float InputInjectorImpl::GetGain() const {
  float gain = 0.0f;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::GetStreamGain(&gain, m_pContext));
  return gain;
}

const StreamFormat& InputInjectorImpl::GetFormat() const {
  return m_Format;
}

StreamState InputInjectorImpl::GetState() const {
  return static_cast<StreamState>(m_State);
}

StreamStatistics InputInjectorImpl::GetStatistics(bool reset) const {
  StreamStatistics statistics = {};
  sysmix::StreamStatistics source = {};
  if (sysmix::GetStreamStatistics(&source, m_pContext, reset).IsSuccess()) {
    statistics.value[0] = source.value[0];
    statistics.value[1] = source.value[1];
    statistics.value[2] = source.value[2];
  }
  return statistics;
}

void InputInjectorImpl::SetName(const NameStorage<63>& name) const {
  sysmix::StreamContext* context = m_pContext;
  StreamName base(m_Id, m_Format, m_DeviceName);
  NameStorage<255> fullName = FormatNameStorage("%s|%s", base.buffer, name.buffer);
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::RenameStream(context,
    util::string_view(fullName.data, fullName.size)));
}

void InputInjectorImpl::GetName(NameStorage<63>* name) const {
  sysmix::StreamContext* context = m_pContext;
  size_t length = 0;
  if (context != nullptr) {
    StreamName base(m_Id, m_Format, m_DeviceName);
    const char* source = context->name.buffer + base.size + 1;
    if (source != nullptr) {
      int sourceLength = static_cast<int>(strlen(source));
      length = sourceLength < 63 ? sourceLength : 63;
      memcpy(name->buffer, source, length);
      name->buffer[length] = '\0';
    }
    else {
      name->buffer[0] = '\0';
    }
  }
  else {
    name->buffer[0] = '\0';
  }
  name->data = name->buffer;
  name->size = length;
}

void InputInjectorImpl::Purge() const {
  int purged = 0;
  NN_AUDIO_ABORT_UNLESS_SUCCESS(sysmix::PurgeStream(&purged, m_pContext, 0));
}

}
