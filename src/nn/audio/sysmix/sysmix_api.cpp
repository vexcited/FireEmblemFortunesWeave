#include "nn/audio/sysmix/sysmix.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::audio::sysmix {
namespace {

constexpr Result ResultNotInitialized = {0xc8099};
constexpr Result ResultInvalidState = {0xc8699};
constexpr Result ResultInvalidArgument = {0xc8899};
constexpr Result ResultUnalignedBuffer = {0xc8a99};
constexpr Result ResultInvalidCount = {0xc9099};
constexpr Result ResultNegativeCount = {0xc8e99};
constexpr Result ResultNotCreated = {0xcae99};
constexpr Result ResultInvalidDuration = {0xcb499};
constexpr Result ResultUnsupportedOperation = {0xcbc99};
constexpr Result ResultUnsupportedSampleFormat = {0x40699};
constexpr Result ResultUnsupportedChannelCount = {0x1499};
constexpr Result ResultUnsupportedSampleRate = {0x699};
constexpr Result ResultOutOfMemory = {0xa99};

constexpr uint32_t CreationFlag_Reserved = 1 << 0;
constexpr uint32_t CreationFlag_Output = 1 << 1;
constexpr uint32_t CreationFlag_Input = 1 << 2;
constexpr uint32_t CreationFlag_Clocked = 1 << 3;
constexpr uint32_t CreationFlag_Device = 1 << 4;

constexpr size_t StreamHeaderSize = 0x1180;
constexpr size_t StreamBufferAlignment = 0x1000;

[[gnu::noinline]] size_t GetSampleByteSize(int sampleFormat) {
  switch (sampleFormat) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
    case 4:
    case 5:
      return 4;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

bool IsClockable(uint32_t flags) {
  if ((flags & CreationFlag_Clocked) != 0) {
    return (flags & (CreationFlag_Output | CreationFlag_Device)) ==
      CreationFlag_Output;
  }
  return (flags & (CreationFlag_Input | CreationFlag_Device)) ==
    (CreationFlag_Input | CreationFlag_Device);
}

const detail::StreamContextImpl* ImplOf(const StreamContext* context) {
  return reinterpret_cast<const detail::StreamContextImpl*>(context);
}

bool IsCreated(const StreamContext* context) {
  return ImplOf(context)->stream != nullptr;
}

bool IsOpened(const StreamContext* context) {
  return ImplOf(context)->format.sampleFormat != 0;
}

}

Result Initialize() {
  return detail::InitializeImpl();
}

Result Finalize() {
  return detail::FinalizeImpl();
}

Result CreateStream(StreamContext* context, uint32_t id,
  util::string_view name, StreamCreationOptionFlagSet flags, void* buffer,
  size_t size) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  uint32_t value = flags._storage[0];
  if (context == nullptr || id == 0 || name.size() - 1 > 0xfd ||
    (value & CreationFlag_Reserved) != 0 ||
    ((value & CreationFlag_Input) != 0) ==
      ((value & CreationFlag_Output) != 0)) {
    return ResultInvalidArgument;
  }
  if (!IsClockable(value) &&
    ((value & (CreationFlag_Output | CreationFlag_Input)) ==
      (CreationFlag_Output | CreationFlag_Input) ||
    (value & (CreationFlag_Clocked | CreationFlag_Device)) != 0)) {
    return ResultUnsupportedOperation;
  }
  if (buffer == nullptr || size == 0) {
    return ResultInvalidArgument;
  }
  if (IsCreated(context)) {
    return ResultNotCreated;
  }
  if (((reinterpret_cast<uintptr_t>(buffer) | size) &
    (StreamBufferAlignment - 1)) != 0) {
    return ResultUnalignedBuffer;
  }
  return detail::CreateStreamImpl(context, id, name, flags, buffer, size);
}

Result DestroyStream(StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::DestroyStreamImpl(context);
}

Result AcquireStreamStateChangeEvent(os::SystemEvent* event,
  const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::AcquireStreamStateChangeEventImpl(event, context);
}

Result ReleaseStreamStateChangeEvent(os::SystemEvent* event,
  const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::ReleaseStreamStateChangeEventImpl(event, context);
}

Result AcquireStreamDataEvent(os::SystemEvent* event,
  const StreamContext* context, StreamDataNotificationMode mode, int count) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr || context == nullptr || mode == 0 || count < 0) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::AcquireStreamDataEventImpl(event, context, mode, count);
}

Result ReleaseStreamDataEvent(os::SystemEvent* event,
  const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (event == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::ReleaseStreamDataEventImpl(event, context);
}

Result OpenStream(StreamContext* context, const StreamFormat& format,
  int frameCount, int notificationFrameCount,
  StreamOpenOptionFlagSet flags) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (context == nullptr || frameCount < 1 ||
    static_cast<uint32_t>(notificationFrameCount) >
      static_cast<uint32_t>(frameCount)) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (IsOpened(context)) {
    return ResultInvalidState;
  }
  if (static_cast<uint32_t>(format.sampleFormat - 2) > 3) {
    return ResultUnsupportedSampleFormat;
  }
  uint32_t channelCount = format.channelCount;
  if (channelCount > 6 ||
    ((1u << channelCount) & ((1 << 1) | (1 << 2) | (1 << 6))) == 0) {
    return ResultUnsupportedChannelCount;
  }
  int sampleRate = format.sampleRate;
  if (sampleRate != 16000 && sampleRate != 32000 && sampleRate != 44100 &&
    sampleRate != 48000) {
    return ResultUnsupportedSampleRate;
  }
  size_t bufferSize = ImplOf(context)->bufferSize;
  size_t required = (static_cast<size_t>(channelCount) *
    static_cast<uint32_t>(frameCount) *
    GetSampleByteSize(format.sampleFormat) + StreamHeaderSize +
    StreamBufferAlignment - 1) & ~(StreamBufferAlignment - 1);
  if (bufferSize < required) {
    return ResultOutOfMemory;
  }
  return detail::OpenStreamImpl(context, format, frameCount,
    notificationFrameCount, flags);
}

Result CloseStream(StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::CloseStreamImpl(context);
}

Result GetStreamState(StreamState* state, const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (state == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::GetStreamStateImpl(state, context);
}

Result GetStreamStatistics(StreamStatistics* statistics,
  StreamContext* context, bool reset) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (statistics == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::GetStreamStatisticsImpl(statistics, context, reset);
}

Result GetStreamGain(float* gain, const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (gain == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::GetStreamGainImpl(gain, context);
}

Result SetStreamGain(float gain, const StreamContext* context,
  TimeSpan duration) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (context == nullptr || !(gain >= 0.0f && gain <= 128.0f) ||
    duration.nanoseconds > 5000000000) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::SetStreamGainImpl(gain, duration, context);
}

Result GetStreamFreeFrameCount(int* count, const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (count == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::GetStreamFreeFrameCountImpl(count, context);
}

Result GetStreamFilledFrameCount(int* count, const StreamContext* context) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (count == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::GetStreamFilledFrameCountImpl(count, context);
}

Result WriteStream(int* written, StreamContext* context, const void* data,
  int count) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (written == nullptr || context == nullptr || data == nullptr) {
    return ResultInvalidArgument;
  }
  if (count < 0) {
    return ResultNegativeCount;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::WriteStreamImpl(written, context, data, count);
}

Result ReadStream(int* read, void* data, TimeSpan* timestamp,
  StreamContext* context, int count) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (read == nullptr || data == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (count < 0) {
    return ResultNegativeCount;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::ReadStreamImpl(read, data, timestamp, context, count);
}

Result PrimeStream(int* primed, StreamContext* context, int count) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (primed == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (count < 0) {
    return ResultNegativeCount;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::PrimeStreamImpl(primed, context, count);
}

Result PurgeStream(int* purged, StreamContext* context, int count) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (purged == nullptr || context == nullptr) {
    return ResultInvalidArgument;
  }
  if (count < 0) {
    return ResultNegativeCount;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::PurgeStreamImpl(purged, context, count);
}

Result ClockStream(StreamContext* context, TimeSpan duration) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  if (!IsClockable(ImplOf(context)->flags._storage[0])) {
    return ResultUnsupportedOperation;
  }
  if (duration.nanoseconds < 1) {
    return ResultInvalidDuration;
  }
  if (!IsOpened(context)) {
    return ResultInvalidState;
  }
  return detail::ClockStreamImpl(context, duration);
}

namespace {

Result SetStreamsEngaged(StreamContext* const* contexts, int count,
  bool isDisengaged) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (contexts == nullptr) {
    return ResultInvalidArgument;
  }
  if (count < 1 || count > 32) {
    return ResultInvalidCount;
  }
  for (int i = 0; i < count; ++i) {
    if (contexts[i] == nullptr) {
      return ResultInvalidArgument;
    }
    if (!IsCreated(contexts[i])) {
      return ResultNotCreated;
    }
  }
  return detail::DisengageStreamsImpl(contexts, count, isDisengaged);
}

}

Result DisengageStreams(StreamContext* const* contexts, int count) {
  return SetStreamsEngaged(contexts, count, true);
}

Result EngageStreams(StreamContext* const* contexts, int count) {
  return SetStreamsEngaged(contexts, count, false);
}

Result RenameStream(StreamContext* context, util::string_view name) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  if (context == nullptr) {
    return ResultInvalidArgument;
  }
  if (!IsCreated(context)) {
    return ResultNotCreated;
  }
  return detail::RenameStreamImpl(context, name);
}

}
