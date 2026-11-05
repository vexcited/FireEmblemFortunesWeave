#pragma once

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "nn/os/synchronization.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/util/bit_flag_set.hpp"
#include "nn/util/string_builder.hpp"
#include "nn/util/string_util.hpp"
#include "nn/util/string_view.hpp"

namespace nn::os {

class SystemEvent;

}

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::audio {

struct AudioDeviceName {
  char name[256];
};

struct StreamFormat {
  int sampleFormat;
  int channelCount;
  int sampleRate;
};

struct VirtualDeviceProperties {
  AudioDeviceName name;
  int64_t latency;
  int channelCount;
};

static_assert(sizeof(VirtualDeviceProperties) == 272);

struct StreamStatistics {
  int64_t value[3];
};

struct InputStreamName {
  char name[64];
};

struct OutputStreamName {
  char name[64];
};

struct OutputStreamFlag {};

using OutputStreamFlagSet = util::BitFlagSet<32, OutputStreamFlag>;

enum StreamState {
  StreamState_Closed,
  StreamState_Stopped,
  StreamState_Started,
};

namespace detail {

template <int N>
struct NameStorage {
  char buffer[N + 1];
  const char* data;
  size_t size;

  NameStorage() : buffer(), data(buffer), size(0) {}

  explicit NameStorage(const char* source) {
    Set(source);
  }

  NameStorage(const char* source, size_t length) : buffer() {
    if (length != 0) {
      memcpy(buffer, source, length);
      buffer[length] = '\0';
    }
    data = buffer;
    size = length;
  }

  NameStorage(const NameStorage& other) {
    memcpy(buffer, other.data, other.size);
    buffer[other.size] = '\0';
    data = buffer;
    size = other.size;
  }

  void Set(const char* source) {
    int length = util::Strnlen(source, N + 1);
    size_t copied = length < N ? length : N;
    memcpy(buffer, source, copied);
    buffer[copied] = '\0';
    data = buffer;
    size = copied;
  }
};

inline NameStorage<255> FormatNameStorage(const char* format, ...) {
  char buffer[256] = {};
  va_list args;
  va_start(args, format);
  int length = util::VSNPrintf(buffer, sizeof(buffer), format, args);
  va_end(args);
  return NameStorage<255>(buffer, length < 255 ? length : 255);
}

inline const char* GetChannelCountName(int channelCount) {
  switch (channelCount) {
    case 1:
      return "1ch";
    case 2:
      return "2ch";
    case 6:
      return "6ch";
    case 8:
      return "8ch";
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

inline const char* GetSampleRateName(int sampleRate) {
  switch (sampleRate) {
    case 8000:
      return "8k";
    case 16000:
      return "16k";
    case 22000:
      return "22k";
    case 32000:
      return "32k";
    case 48000:
      return "48k";
    case 44100:
      return "44k";
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

inline const char* GetSampleFormatName(int sampleFormat) {
  switch (sampleFormat) {
    case 2:
      return "Q15";
    case 3:
      return "Q23";
    case 4:
      return "Q31";
    case 5:
      return "F32";
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

template <int N>
struct NameStorageType {
  char buffer[N + 1];
};

}

namespace sysmix {

struct StreamContext {
  StreamContext() : id(0), reserved0(), name(), state(0), reserved1() {}

  uint32_t id;
  uint8_t reserved0[36];
  detail::NameStorage<255> name;
  uint32_t state;
  uint8_t reserved1[196];
  uint8_t reserved2[16];
};

static_assert(sizeof(StreamContext) == 528);

struct StreamStatistics {
  uint32_t sampleRate;
  uint8_t reserved[4];
  int64_t value[3];
};

struct StreamCreationOptionFlag {};
struct StreamOpenOptionFlag {};

enum StreamDataNotificationMode {};

Result Initialize();
Result Finalize();
Result CreateStream(StreamContext* context, uint32_t id,
  util::string_view name, util::BitFlagSet<32, StreamCreationOptionFlag> flags,
  void* buffer, size_t size);
Result OpenStream(StreamContext* context, const StreamFormat& format,
  int frameCount, int reserved,
  util::BitFlagSet<32, StreamOpenOptionFlag> flags);
Result CloseStream(StreamContext* context);
Result DestroyStream(StreamContext* context);
Result AcquireStreamDataEvent(os::SystemEvent* event,
  const StreamContext* context, StreamDataNotificationMode mode, int count);
Result ReleaseStreamDataEvent(os::SystemEvent* event,
  const StreamContext* context);
Result GetStreamFreeFrameCount(int* count, const StreamContext* context);
Result GetStreamFilledFrameCount(int* count, const StreamContext* context);
Result WriteStream(int* written, StreamContext* context, const void* data,
  int count);
Result ReadStream(int* read, void* data, TimeSpan* timestamp,
  StreamContext* context, int count);
Result SetStreamGain(float gain, const StreamContext* context,
  TimeSpan duration);
Result GetStreamGain(float* gain, const StreamContext* context);
Result GetStreamStatistics(StreamStatistics* statistics,
  StreamContext* context, bool reset);
Result PurgeStream(int* purged, StreamContext* context, int count);
Result EngageStreams(StreamContext* const* contexts, int count);
Result RenameStream(StreamContext* context, util::string_view name);
Result DisengageStreams(StreamContext* const* contexts, int count);

}

namespace capture {

void StartSystemAudioCaptureServer();

}

namespace devmgr {

struct ProxyContext;

enum DeviceFunctionality {
  DeviceFunctionality_Output = 1,
  DeviceFunctionality_Input = 2,
};

struct VirtualDeviceProfile {
  uint8_t reserved0[264];
  int channelCount;
  uint8_t reserved1[268];
  int64_t latency;
  uint32_t id;
  uint8_t reserved2[4];
};

static_assert(sizeof(VirtualDeviceProfile) == 552);

struct CaptureDeviceProfile {
  uint8_t reserved0[272];
  int64_t latency;
  uint32_t id;
  uint8_t reserved1[4];
};

static_assert(sizeof(CaptureDeviceProfile) == 288);

Result Initialize();
void Finalize();
int ListVirtualDeviceNames(detail::NameStorageType<255>* names, int count,
  DeviceFunctionality functionality, bool isActiveOnly,
  const ProxyContext* proxy);
Result GetVirtualDeviceProfile(VirtualDeviceProfile* profile,
  const detail::NameStorage<255>& name, DeviceFunctionality functionality,
  const ProxyContext* proxy);
Result IsVirtualDeviceStreamFormatSupported(
  const detail::NameStorage<255>& name, const StreamFormat& format,
  DeviceFunctionality functionality, const ProxyContext* proxy);
Result IsCaptureDeviceStreamFormatSupported(
  const detail::NameStorage<255>& name, const StreamFormat& format,
  const ProxyContext* proxy);
Result GetCaptureDeviceProfile(CaptureDeviceProfile* profile,
  const detail::NameStorage<255>& name, const ProxyContext* proxy);
Result DetachStream(uint32_t id, ProxyContext* proxy);
Result AttachStream(const detail::NameStorage<255>& name, uint32_t id,
  DeviceFunctionality functionality, ProxyContext* proxy);
Result AttachInjectionStream(const detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy);
Result AttachCaptureStream(const detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy);

}

namespace detail {

inline Result MakeResult(int description) {
  return {153u | static_cast<uint32_t>(description) << 9};
}

template <int N>
class StreamIdAllocator {
public:
  constexpr StreamIdAllocator()
    : m_Mutex(), m_Storage(), m_pBits(m_Storage), m_Count(N) {}

  int Allocate() {
    m_Mutex.Lock();
    for (int i = 0; i != m_Count; ++i) {
      if (!Test(i)) {
        Set(i);
        m_Mutex.Unlock();
        return i;
      }
    }
    m_Mutex.Unlock();
    return -1;
  }

  void Free(int id) {
    m_Mutex.Lock();
    if (static_cast<uint32_t>(id) < N && Test(id)) {
      Clear(id);
    }
    m_Mutex.Unlock();
  }

private:
  bool Test(int index) const {
    return (m_pBits[index >> 6] >> (index & 63)) & 1;
  }

  void Set(int index) {
    m_pBits[index >> 6] |= uint64_t{1} << (index & 63);
  }

  void Clear(int index) {
    m_pBits[index >> 6] &= ~(uint64_t{1} << (index & 63));
  }

  os::SdkMutexType m_Mutex;
  uint64_t m_Storage[(N + 63) / 64];
  uint64_t* m_pBits;
  int m_Count;
};

class InputInjectorImpl {
public:
  InputInjectorImpl();
  ~InputInjectorImpl();
  Result Open(void* buffer, size_t size, const AudioDeviceName& device,
    const StreamFormat& format, int frameCount);
  Result Open(os::SystemEvent* event, void* buffer, size_t size,
    const AudioDeviceName& device, const StreamFormat& format,
    int frameCount, int notificationFrameCount);
  void Close();
  Result Start();
  void Stop();
  int GetCapacityFrameCount() const;
  int GetFreeFrameCount() const;
  int GetFilledFrameCount() const;
  int Write(const void* data, int count) const;
  void SetGain(float gain, TimeSpan duration) const;
  float GetGain() const;
  const StreamFormat& GetFormat() const;
  StreamState GetState() const;
  StreamStatistics GetStatistics(bool reset) const;
  void Purge() const;
  void SetName(const NameStorage<63>& name) const;
  void GetName(NameStorage<63>* name) const;

private:
  int m_Id;
  AudioDeviceName m_DeviceName;
  os::SystemEvent* m_pEvent;
  int m_State;
  StreamFormat m_Format;
  int m_CapacityFrameCount;
  uint8_t m_ContextStorage[sizeof(sysmix::StreamContext) + 7];
  sysmix::StreamContext* m_pContext;
};

class InputStreamImpl {
public:
  InputStreamImpl();
  ~InputStreamImpl();
  Result Open(void* buffer, size_t size, const AudioDeviceName& device,
    const StreamFormat& format, int frameCount);
  Result Open(os::SystemEvent* event, void* buffer, size_t size,
    const AudioDeviceName& device, const StreamFormat& format,
    int frameCount, int notificationFrameCount);
  void Close();
  Result Start();
  void Stop();
  int GetCapacityFrameCount() const;
  int GetFreeFrameCount() const;
  int GetFilledFrameCount() const;
  int Read(void* data, int count);
  void SetGain(float gain, TimeSpan duration);
  float GetGain() const;
  const StreamFormat& GetFormat() const;
  StreamState GetState() const;
  StreamStatistics GetStatistics(bool reset);
  void Purge();
  void SetName(const InputStreamName& name);
  void GetName(InputStreamName* name);

private:
  int m_Id;
  AudioDeviceName m_DeviceName;
  os::SystemEvent* m_pEvent;
  int m_State;
  StreamFormat m_Format;
  int m_CapacityFrameCount;
  uint8_t m_ContextStorage[sizeof(sysmix::StreamContext) + 7];
  sysmix::StreamContext* m_pContext;
};

class OutputStreamImpl {
public:
  OutputStreamImpl();
  ~OutputStreamImpl();
  static Result StartStreams(OutputStreamImpl* const* streams, int count);
  static Result StopStreams(OutputStreamImpl* const* streams, int count);
  Result Open(void* buffer, size_t size, const AudioDeviceName& device,
    const StreamFormat& format, int frameCount);
  Result Open(os::SystemEvent* event, void* buffer, size_t size,
    const AudioDeviceName& device, const StreamFormat& format,
    int frameCount, int notificationFrameCount);
  Result Open(void* buffer, size_t size, const AudioDeviceName& device,
    const StreamFormat& format, int frameCount, OutputStreamFlagSet flags);
  Result Open(os::SystemEvent* event, void* buffer, size_t size,
    const AudioDeviceName& device, const StreamFormat& format,
    int frameCount, int notificationFrameCount, OutputStreamFlagSet flags);
  void Close();
  Result Start();
  void Stop();
  int GetCapacityFrameCount() const;
  int GetFreeFrameCount() const;
  int GetFilledFrameCount() const;
  int Write(const void* data, int count);
  void SetGain(float gain, TimeSpan duration);
  float GetGain() const;
  const StreamFormat& GetFormat() const;
  StreamState GetState() const;
  const AudioDeviceName& GetVirtualDevice() const;
  StreamStatistics GetStatistics(bool reset);
  void Purge();
  void SetName(const OutputStreamName& name);
  void GetName(OutputStreamName* name);

private:
  int m_Id;
  AudioDeviceName m_DeviceName;
  os::SystemEvent* m_pEvent;
  int m_State;
  StreamFormat m_Format;
  int m_CapacityFrameCount;
  uint8_t m_ContextStorage[sizeof(sysmix::StreamContext) + 7];
  sysmix::StreamContext* m_pContext;
};

class OutputRecorderImpl {
public:
  OutputRecorderImpl();
  ~OutputRecorderImpl();
  Result Open(void* buffer, size_t size, const AudioDeviceName& device,
    const StreamFormat& format, int frameCount);
  Result Open(os::SystemEvent* event, void* buffer, size_t size,
    const AudioDeviceName& device, const StreamFormat& format,
    int frameCount, int notificationFrameCount);
  void Close();
  Result Start();
  void Stop();
  int GetCapacityFrameCount() const;
  int GetFreeFrameCount() const;
  int GetFilledFrameCount() const;
  int Read(void* data, TimeSpan* timestamp, int count) const;
  void SetGain(float gain, TimeSpan duration) const;
  float GetGain() const;
  const StreamFormat& GetFormat() const;
  StreamState GetState() const;
  StreamStatistics GetStatistics(bool reset) const;
  void Purge() const;
  void SetName(const NameStorage<63>& name);
  void GetName(NameStorage<63>* name);

private:
  int m_Id;
  AudioDeviceName m_DeviceName;
  os::SystemEvent* m_pEvent;
  int m_State;
  StreamFormat m_Format;
  int m_CapacityFrameCount;
  uint8_t m_ContextStorage[sizeof(sysmix::StreamContext) + 7];
  sysmix::StreamContext* m_pContext;
};

int ListVirtualInjectionDevices(AudioDeviceName* names, int count);
void GetDefaultVirtualInjectionDevice(AudioDeviceName* name);
Result GetVirtualInjectionDeviceProperties(
  VirtualDeviceProperties* properties, const AudioDeviceName& name);
Result IsVirtualInjectionDeviceStreamFormatSupported(
  const AudioDeviceName& name, const StreamFormat& format);

int ListVirtualInputDevices(AudioDeviceName* names, int count);
void GetDefaultVirtualInputDevice(AudioDeviceName* name);
Result GetVirtualInputDeviceProperties(VirtualDeviceProperties* properties,
  const AudioDeviceName& name);
Result IsVirtualInputDeviceStreamFormatSupported(const AudioDeviceName& name,
  const StreamFormat& format);

int ListVirtualOutputDevices(AudioDeviceName* names, int count);
void GetDefaultVirtualOutputDevice(AudioDeviceName* name);
Result GetVirtualOutputDeviceProperties(VirtualDeviceProperties* properties,
  const AudioDeviceName& name);
Result IsVirtualOutputDeviceStreamFormatSupported(const AudioDeviceName& name,
  const StreamFormat& format);

Result IsVirtualCaptureDeviceStreamFormatSupported(const AudioDeviceName& name,
  const StreamFormat& format);

Result IsOutputStreamFlagSetValid(OutputStreamFlagSet flags);

}

struct InputInjectorType {
  detail::InputInjectorImpl* _pImpl;
  alignas(8) uint8_t _storage[sizeof(detail::InputInjectorImpl)];
};

struct InputStreamType {
  detail::InputStreamImpl* _pImpl;
  alignas(8) uint8_t _storage[sizeof(detail::InputStreamImpl)];
};

struct OutputStreamType {
  detail::OutputStreamImpl* _pImpl;
  alignas(8) uint8_t _storage[sizeof(detail::OutputStreamImpl)];
};

struct OutputRecorderType {
  detail::OutputRecorderImpl* _pImpl;
  alignas(8) uint8_t _storage[sizeof(detail::OutputRecorderImpl)];
};

}
