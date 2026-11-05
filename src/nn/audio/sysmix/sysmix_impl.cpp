#include "nn/audio/detail/audio_name_storage.hpp"
#include "nn/audio/driver/driver.hpp"
#include "nn/audio/sysmix/sysmix.hpp"
#include "nn/audio/vector_fill.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio::sysmix::detail {

sf::SharedPointer<IStreamManager> g_StreamManager;

namespace {

constexpr Result ResultNotInitialized = {0xc8099};
constexpr Result ResultInvalidArgument = {0xc8899};
constexpr Result ResultCorruptedPosition = {0x499};
constexpr Result ResultInvalidCount = {0xc9099};
constexpr Result ResultWrongDirection = {0xc9299};
constexpr Result ResultOutOfMemory = {0xa99};

constexpr int StreamCountMax = 32;
constexpr size_t NameLengthMax = 255;

void ResetContext(StreamContextImpl* impl) {
  audio::detail::ClearName(&impl->name);
  impl->openFlags._storage[0] = 0;
  impl->stream = nullptr;
  impl->serverId = 0;
  impl->id = 0;
  impl->flags._storage[0] = 0;
  impl->format = {};
  impl->frameCount = 0;
  impl->buffer = nullptr;
  impl->bufferSize = 0;
}

// Out of memory results of the service framework are reported as one code.
bool IsMemoryShortage(Result result) {
  return ((result.value >> 9) & 0x1ffe) - 10 < 10 &&
    (result.value & 0x1ff) == 10;
}

Result AttachEvent(os::SystemEvent* event, Result result,
  sf::NativeHandle& handle) {
  if (result.IsFailure()) {
    return result;
  }
  event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_AutoClear);
  handle.Detach();
  return Result{0};
}

}

bool IsInitializedImpl() {
  return g_StreamManager.Get() != nullptr;
}

StreamContextImpl* GetImpl(StreamContext* context) {
  return reinterpret_cast<StreamContextImpl*>(context);
}

const StreamContextImpl* GetConstImpl(const StreamContext* context) {
  return reinterpret_cast<const StreamContextImpl*>(context);
}

Result CreateStreamImpl(StreamContext* context, uint32_t id,
  nn::util::string_view name, StreamCreationOptionFlagSet flags, void* buffer,
  size_t size) {
  StreamContextImpl* impl = GetImpl(context);
  sf::InBuffer nameBuffer(name.data(), name.size());
  sf::SharedPointer<IStream> stream;
  sf::SharedPointer<IStreamManager> manager = g_StreamManager;
  uint32_t serverId = 0;
  Result result = manager->CreateStream(
    sf::Out<sf::SharedPointer<IStream>>(&stream),
    sf::Out<uint32_t>(&serverId), id, nameBuffer, flags,
    applet::GetAppletResourceUserId(), buffer, size);
  manager.Reset();
  if (result.IsFailure()) {
    ResetContext(impl);
    return IsMemoryShortage(result) ? ResultOutOfMemory : result;
  }
  impl->serverId = serverId;
  impl->id = id;
  impl->flags = flags;
  impl->stream = stream.Detach();
  size_t length = name.size() >= NameLengthMax ? NameLengthMax : name.size();
  audio::detail::CopyName(&impl->name, name.data(), length);
  impl->buffer = buffer;
  impl->bufferSize = size;
  return Result{0};
}

Result DestroyStreamImpl(StreamContext* context) {
  StreamContextImpl* impl = GetImpl(context);
  impl->stream->Release();
  ResetContext(impl);
  return Result{0};
}

Result AcquireStreamStateChangeEventImpl(os::SystemEvent* event,
  const StreamContext* context) {
  sf::NativeHandle handle;
  Result result = GetConstImpl(context)->stream->AcquireStateChangeEvent(
    sf::Out<sf::NativeHandle>(&handle));
  return AttachEvent(event, result, handle);
}

Result ReleaseStreamStateChangeEventImpl(os::SystemEvent* event,
  const StreamContext* context) {
  Result result = GetConstImpl(context)->stream->ReleaseStateChangeEvent();
  if (result.IsFailure()) {
    return result;
  }
  os::DestroySystemEvent(event->GetBase());
  return Result{0};
}

Result AcquireStreamDataEventImpl(os::SystemEvent* event,
  const StreamContext* context, StreamDataNotificationMode mode, int count) {
  sf::NativeHandle handle;
  Result result = GetConstImpl(context)->stream->AcquireDataEvent(
    sf::Out<sf::NativeHandle>(&handle), mode, count);
  return AttachEvent(event, result, handle);
}

Result ReleaseStreamDataEventImpl(os::SystemEvent* event,
  const StreamContext* context) {
  Result result = GetConstImpl(context)->stream->ReleaseDataEvent();
  if (result.IsFailure()) {
    return result;
  }
  os::DestroySystemEvent(event->GetBase());
  return Result{0};
}

Result CloseStreamImpl(StreamContext* context) {
  StreamContextImpl* impl = GetImpl(context);
  Result result = impl->stream->Close();
  if (result.IsFailure()) {
    return result;
  }
  StreamRegion* regions = impl->streamBuffer.regions;
  size_t controlSize = regions[StreamRegion_ConsumerPosition].size +
    regions[StreamRegion_Control].size;
  size_t dataSize = regions[StreamRegion_Trailer].size +
    regions[StreamRegion_ProducerPosition].size +
    regions[StreamRegion_Data].size;
  util::MemSet_Explicit(regions[StreamRegion_Control].address, 0,
    controlSize);
  util::MemSet_Explicit(regions[StreamRegion_ProducerPosition].address, 0,
    dataSize);
  driver::StoreDataCache(regions[StreamRegion_Control].address, controlSize);
  driver::StoreDataCache(regions[StreamRegion_ProducerPosition].address,
    dataSize);
  for (StreamRegion& region : impl->streamBuffer.regions) {
    region.address = nullptr;
    region.size = 0;
  }
  impl->streamBuffer.reserved112 = 0;
  impl->streamBuffer.capacityFrameCount = 0;
  impl->streamBuffer.isActive = 0;
  impl->openFlags._storage[0] = 0;
  impl->format = {};
  impl->frameCount = 0;
  return Result{0};
}

Result GetStreamStateImpl(StreamState* state, const StreamContext* context) {
  return GetConstImpl(context)->stream->GetState(
    sf::Out<StreamState>(state));
}

Result GetStreamStatisticsImpl(StreamStatistics* statistics,
  StreamContext* context, bool reset) {
  StreamContextImpl* impl = GetImpl(context);
  // Only the low bit is tested here while the frame count queries compare
  // the whole byte against one.
  if ((impl->streamBuffer.isActive & 1) != 0) {
    const StreamRegion& producer =
      impl->streamBuffer.regions[StreamRegion_ProducerPosition];
    const StreamRegion& consumer =
      impl->streamBuffer.regions[StreamRegion_ConsumerPosition];
    driver::InvalidateDataCache(producer.address, producer.size);
    driver::InvalidateDataCache(consumer.address, consumer.size);
    uint32_t writePosition =
      static_cast<const StreamPosition*>(producer.address)->totalFrameCount;
    impl->streamBuffer.writtenFrameCount += writePosition - impl->streamBuffer.lastWritePosition;
    impl->streamBuffer.lastWritePosition = writePosition;
    uint32_t readPosition =
      static_cast<const StreamPosition*>(consumer.address)->totalFrameCount;
    impl->streamBuffer.readFrameCount += readPosition - impl->streamBuffer.lastReadPosition;
    impl->streamBuffer.lastReadPosition = readPosition;
  }
  int64_t written = impl->streamBuffer.writtenFrameCount;
  int64_t read = impl->streamBuffer.readFrameCount;
  int64_t dropped = impl->streamBuffer.droppedFrameCount;
  if (reset) {
    impl->streamBuffer.readFrameCount = 0;
    impl->streamBuffer.droppedFrameCount = 0;
    impl->streamBuffer.writtenFrameCount = 0;
  }
  statistics->sampleRate = impl->format.sampleRate;
  statistics->value[0] = dropped;
  statistics->value[1] = written;
  statistics->value[2] = read;
  return Result{0};
}

namespace {

Result CheckPositions(int* filled, const StreamContextImpl* impl) {
  const StreamRegion& remote = impl->streamBuffer.isOutput ?
    impl->streamBuffer.regions[StreamRegion_ConsumerPosition] :
    impl->streamBuffer.regions[StreamRegion_ProducerPosition];
  driver::InvalidateDataCache(remote.address, remote.size);
  const StreamPosition* producer = static_cast<const StreamPosition*>(
    impl->streamBuffer.regions[StreamRegion_ProducerPosition].address);
  const StreamPosition* consumer = static_cast<const StreamPosition*>(
    impl->streamBuffer.regions[StreamRegion_ConsumerPosition].address);
  int capacity = impl->streamBuffer.capacityFrameCount;
  int write = producer->index;
  if (write < 0 || write >= capacity) {
    return ResultCorruptedPosition;
  }
  int read = consumer->index;
  if (read < 0 || read >= capacity) {
    return ResultCorruptedPosition;
  }
  if ((impl->streamBuffer.isOutput & 1) == 0 && producer->isStarving) {
    *filled = 0;
    return Result{0};
  }
  *filled = write - read + (write >= read ? 0 : capacity);
  return Result{0};
}

}

Result GetStreamFreeFrameCountImpl(int* count, const StreamContext* context) {
  const StreamContextImpl* impl = GetConstImpl(context);
  if (impl->streamBuffer.isActive != 1) {
    return ResultNotInitialized;
  }
  if (count == nullptr) {
    return ResultInvalidArgument;
  }
  int filled = -1;
  Result result = CheckPositions(&filled, impl);
  if (result.IsFailure()) {
    *count = impl->streamBuffer.capacityFrameCount - 1;
    return result;
  }
  *count = impl->streamBuffer.capacityFrameCount - filled - 1;
  return Result{0};
}

Result GetStreamFilledFrameCountImpl(int* count,
  const StreamContext* context) {
  const StreamContextImpl* impl = GetConstImpl(context);
  if (impl->streamBuffer.isActive != 1) {
    return ResultNotInitialized;
  }
  if (count == nullptr) {
    return ResultInvalidArgument;
  }
  int filled = 0;
  Result result = CheckPositions(&filled, impl);
  *count = result.IsFailure() ? 0 : filled;
  return result;
}

Result WriteStreamImpl(int* written, StreamContext* context, const void* data,
  int count) {
  *written = 0;
  StreamBuffer& buffer = GetImpl(context)->streamBuffer;
  if (buffer.isActive != 1) {
    return ResultNotInitialized;
  }
  if (buffer.isOutput != 1) {
    return ResultWrongDirection;
  }
  if (count < 0) {
    return ResultInvalidCount;
  }
  const void* channels[] = {data};
  Result result = buffer.Write(written, data != nullptr ? channels : nullptr,
    buffer.regions[StreamRegion_Reserved].address, count, true);
  if (result.IsFailure()) {
    return result;
  }
  if (static_cast<uint32_t>(*written) > static_cast<uint32_t>(count)) {
    nn::diag::detail::AbortImpl();
  }
  return Result{0};
}

Result ReadStreamImpl(int* read, void* data, TimeSpan* timestamp,
  StreamContext* context, int count) {
  *read = 0;
  StreamBuffer& buffer = GetImpl(context)->streamBuffer;
  if (buffer.isActive != 1) {
    return ResultNotInitialized;
  }
  if ((buffer.isOutput & 1) != 0) {
    return ResultWrongDirection;
  }
  if (count < 0) {
    return ResultInvalidCount;
  }
  if (timestamp != nullptr && buffer.isTimestampEnabled == 0) {
    return ResultInvalidArgument;
  }
  void* channels[] = {data};
  Result result = buffer.Read(read, data != nullptr ? channels : nullptr,
    buffer.regions[StreamRegion_Reserved].address, timestamp, count, true);
  if (result.IsFailure()) {
    return result;
  }
  if (static_cast<uint32_t>(*read) > static_cast<uint32_t>(count)) {
    nn::diag::detail::AbortImpl();
  }
  return Result{0};
}

Result PrimeStreamImpl(int* primed, StreamContext* context, int count) {
  *primed = 0;
  StreamContextImpl* impl = GetImpl(context);
  if ((impl->streamBuffer.isActive & 1) == 0) {
    nn::diag::detail::AbortImpl();
  }
  Result result = impl->streamBuffer.isOutput == 1 ?
    impl->streamBuffer.Prime(primed, count) :
    impl->stream->Prime(sf::Out<int>(primed), count);
  if (result.IsFailure()) {
    return result;
  }
  if (count == 0) {
    count = impl->frameCount;
  }
  if (*primed < 0 || *primed > count) {
    nn::diag::detail::AbortImpl();
  }
  return Result{0};
}

Result PurgeStreamImpl(int* purged, StreamContext* context, int count) {
  *purged = 0;
  StreamContextImpl* impl = GetImpl(context);
  if ((impl->streamBuffer.isActive & 1) == 0) {
    nn::diag::detail::AbortImpl();
  }
  Result result = (impl->streamBuffer.isOutput & 1) != 0 ?
    impl->stream->Purge(sf::Out<int>(purged), count) :
    impl->streamBuffer.Purge(purged, count);
  if (result.IsFailure()) {
    return result;
  }
  if (count == 0) {
    count = impl->frameCount;
  }
  if (*purged < 0 || *purged > count) {
    nn::diag::detail::AbortImpl();
  }
  return Result{0};
}

Result GetStreamGainImpl(float* gain, const StreamContext* context) {
  return GetConstImpl(context)->stream->GetGain(sf::Out<float>(gain));
}

Result SetStreamGainImpl(float gain, TimeSpan duration,
  const StreamContext* context) {
  return GetConstImpl(context)->stream->SetGain(gain, duration);
}

Result ClockStreamImpl(StreamContext* context, TimeSpan duration) {
  return GetImpl(context)->stream->Clock(duration);
}

Result DisengageStreamsImpl(StreamContext* const* contexts, uint32_t count,
  bool isDisengaged) {
  uint32_t ids[StreamCountMax] = {};
  for (uint32_t i = 0; i < count; ++i) {
    ids[i] = GetConstImpl(contexts[i])->serverId;
  }
  sf::InBuffer idBuffer(ids, sizeof(*ids) * count);
  sf::SharedPointer<IStreamManager> manager = g_StreamManager;
  Result result = isDisengaged ? manager->DisengageStreams(idBuffer) :
    manager->EngageStreams(idBuffer);
  return result;
}

Result RenameStreamImpl(StreamContext* context,
  nn::util::string_view name) {
  StreamContextImpl* impl = GetImpl(context);
  sf::InBuffer nameBuffer(name.data(), name.size());
  Result result = impl->stream->Rename(nameBuffer);
  if (result.IsFailure()) {
    return result;
  }
  int length = static_cast<int>(name.size());
  audio::detail::CopyName(&impl->name, name.data(),
    length < static_cast<int>(NameLengthMax) ? length : NameLengthMax);
  return Result{0};
}

}
