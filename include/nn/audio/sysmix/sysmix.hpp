#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_types.hpp"
#include "nn/audio/audio_stream.hpp"
#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/native_handle.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"
#include "nn/util/bit_flag_set.hpp"
#include "nn/util/string_view.hpp"

namespace nn::audio::sysmix {

using StreamCreationOptionFlagSet =
  nn::util::BitFlagSet<32, StreamCreationOptionFlag>;
using StreamOpenOptionFlagSet = nn::util::BitFlagSet<32, StreamOpenOptionFlag>;

enum StreamState : uint32_t {};

Result GetStreamState(StreamState* state, const StreamContext* context);
Result AcquireStreamStateChangeEvent(os::SystemEvent* event,
  const StreamContext* context);
Result ReleaseStreamStateChangeEvent(os::SystemEvent* event,
  const StreamContext* context);
Result PrimeStream(int* primed, StreamContext* context, int count);
Result ClockStream(StreamContext* context, TimeSpan duration);

namespace detail {

class IStream : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Open(const StreamFormat& format, int frameCount,
    int notificationFrameCount, StreamOpenOptionFlagSet flags) = 0;
  virtual Result Close() = 0;
  virtual Result GetState(sf::Out<StreamState> outState) = 0;
  virtual Result GetGain(sf::Out<float> outGain) = 0;
  virtual Result SetGain(float gain, TimeSpan duration) = 0;
  virtual Result AcquireStateChangeEvent(
    sf::Out<sf::NativeHandle> outHandle) = 0;
  virtual Result ReleaseStateChangeEvent() = 0;
  virtual Result AcquireDataEvent(sf::Out<sf::NativeHandle> outHandle,
    StreamDataNotificationMode mode, int count) = 0;
  virtual Result ReleaseDataEvent() = 0;
  virtual Result Clock(TimeSpan duration) = 0;
  virtual Result Prime(sf::Out<int> outPrimed, int count) = 0;
  virtual Result Purge(sf::Out<int> outPurged, int count) = 0;
  virtual Result Rename(const sf::InBuffer& name) = 0;
};

struct StreamPosition {
  uint32_t totalFrameCount;
  int32_t index;
  bool isStarving;
};

struct StreamRegion {
  void* address;
  size_t size;
};

// The shared buffer is split in regions, the control block and both
// positions first, then the frame data.
enum StreamRegionIndex {
  StreamRegion_Header,
  StreamRegion_Control,
  StreamRegion_ConsumerPosition,
  StreamRegion_ProducerPosition,
  StreamRegion_Data,
  StreamRegion_Trailer,
  StreamRegion_Reserved,
  StreamRegion_Count,
};

class StreamBuffer {
public:
  Result Write(int* written, const void* const* data, void* scratch,
    int count, bool isPartialAllowed);
  Result Read(int* read, void* const* data, void* scratch,
    TimeSpan* timestamp, int count, bool isPartialAllowed);
  Result Prime(int* primed, int count);
  Result Purge(int* purged, int count);

  StreamRegion regions[StreamRegion_Count];
  uint32_t reserved112;
  int capacityFrameCount;
  uint32_t isTimestampEnabled;
  uint8_t reserved124[4];
  uint8_t isActive;
  uint8_t isOutput;
  uint8_t reserved130[2];
  uint32_t lastWritePosition;
  uint32_t lastReadPosition;
  uint8_t reserved140[4];
  int64_t writtenFrameCount;
  int64_t readFrameCount;
  int64_t droppedFrameCount;
};

static_assert(sizeof(StreamBuffer) == 168);

struct StreamContextImpl {
  uint32_t serverId;
  uint32_t id;
  StreamCreationOptionFlagSet flags;
  StreamFormat format;
  int frameCount;
  uint8_t reserved28[4];
  IStream* stream;
  audio::detail::NameStorage<255> name;
  StreamOpenOptionFlagSet openFlags;
  uint8_t reserved316[4];
  void* buffer;
  size_t bufferSize;
  StreamBuffer streamBuffer;
  uint8_t reserved504[24];
};

static_assert(sizeof(StreamContextImpl) == sizeof(StreamContext));

Result InitializeImpl();
Result FinalizeImpl();
bool IsInitializedImpl();
StreamContextImpl* GetImpl(StreamContext* context);
const StreamContextImpl* GetConstImpl(const StreamContext* context);
Result CreateStreamImpl(StreamContext* context, uint32_t id,
  nn::util::string_view name, StreamCreationOptionFlagSet flags, void* buffer,
  size_t size);
Result DestroyStreamImpl(StreamContext* context);
Result AcquireStreamStateChangeEventImpl(os::SystemEvent* event,
  const StreamContext* context);
Result ReleaseStreamStateChangeEventImpl(os::SystemEvent* event,
  const StreamContext* context);
Result AcquireStreamDataEventImpl(os::SystemEvent* event,
  const StreamContext* context, StreamDataNotificationMode mode, int count);
Result ReleaseStreamDataEventImpl(os::SystemEvent* event,
  const StreamContext* context);
Result OpenStreamImpl(StreamContext* context, const StreamFormat& format,
  int frameCount, int notificationFrameCount, StreamOpenOptionFlagSet flags);
Result CloseStreamImpl(StreamContext* context);
Result GetStreamStateImpl(StreamState* state, const StreamContext* context);
Result GetStreamStatisticsImpl(StreamStatistics* statistics,
  StreamContext* context, bool reset);
Result GetStreamGainImpl(float* gain, const StreamContext* context);
Result SetStreamGainImpl(float gain, TimeSpan duration,
  const StreamContext* context);
Result GetStreamFreeFrameCountImpl(int* count, const StreamContext* context);
Result GetStreamFilledFrameCountImpl(int* count,
  const StreamContext* context);
Result WriteStreamImpl(int* written, StreamContext* context, const void* data,
  int count);
Result ReadStreamImpl(int* read, void* data, TimeSpan* timestamp,
  StreamContext* context, int count);
Result PrimeStreamImpl(int* primed, StreamContext* context, int count);
Result PurgeStreamImpl(int* purged, StreamContext* context, int count);
Result ClockStreamImpl(StreamContext* context, TimeSpan duration);
Result DisengageStreamsImpl(StreamContext* const* contexts, uint32_t count,
  bool isDisengaged);
Result RenameStreamImpl(StreamContext* context, nn::util::string_view name);

}
}

namespace nn::audio::sysmix::detail {

class IStreamManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result CreateStream(
    const sf::Out<sf::SharedPointer<IStream>>& outStream,
    sf::Out<uint32_t> outServerId, uint32_t id, const sf::InBuffer& name,
    StreamCreationOptionFlagSet flags, applet::AppletResourceUserId aruid,
    void* buffer, size_t size) = 0;
  virtual Result DisengageStreams(const sf::InBuffer& ids) = 0;
  virtual Result EngageStreams(const sf::InBuffer& ids) = 0;
};

extern sf::SharedPointer<IStreamManager> g_StreamManager;

}
