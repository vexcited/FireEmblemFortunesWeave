#include <string.h>

#include "nandroid/MovieHeap.h"
#include "nandroid/media/stagefright/MediaMuxer.h"
#include "nandroid/media/stagefright/foundation/ABuffer.h"
#include "nandroid/media/stagefright/foundation/AMessage.h"
#include "nn/movie/detail/movie_android_media_muxer.hpp"
#include "nn/movie/movie_buffer.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace nn::movie::detail {

void* AllocateMemory(size_t alignment, size_t size,
  AllocatorInfo* allocatorInfo);

// The original calls an out of line copy of the inline movie heap operator
// new here.
[[gnu::visibility("hidden")]] void* AllocateFromCurrentHeap(size_t size);

namespace {

constexpr Result ResultInvalidArgument = {0x3ed00};
constexpr Result ResultUnsupportedMimeType = {0x3ef00};
constexpr Result ResultOutOfMemory = {0x3f700};
constexpr Result ResultInvalidMediaData = {0x40900};
constexpr Result ResultUnsupportedContainer = {0xce700};
constexpr Result ResultNoTrack = {0xced00};
constexpr Result ResultAddTrackFailed = {0xcf300};
constexpr Result ResultInvalidTrackIndex = {0xcf500};
constexpr Result ResultWriteFailed = {0xcf700};

constexpr uint32_t ResultMovieWarning = 0x40100;

constexpr int32_t MimeTypeAvc = 0;
constexpr int32_t MimeTypeAac = 65;

constexpr int32_t BufferFlagSyncFrame = 4;
constexpr int32_t BufferFlagEndOfStream = 8;

constexpr uint8_t StartCode[] = {0x00, 0x00, 0x00, 0x01};

[[gnu::always_inline]] inline bool IsMovieSuccess(Result result) {
  return result.IsSuccess() ||
    (result.value & 0x3fffff) == ResultMovieWarning;
}

[[gnu::always_inline]] inline bool IsValidThreadPriority(int priority) {
  return static_cast<uint32_t>(priority) <= 31;
}

[[gnu::always_inline]] inline void MarkAsCodecSpecificData(
  const nandroid::sp<nandroid::ABuffer>& buffer) {
  buffer->meta()->setInt32("csd", true);
  buffer->meta()->setInt64("timeUs", 0);
}

}

AndroidMediaMuxer::AndroidMediaMuxer(AllocatorInfo* allocatorInfo)
  : m_pAllocatorInfo(allocatorInfo), m_Muxer(), m_State(-1),
    m_Tracks(StdLibAllocator<int32_t>(allocatorInfo)), m_WrittenSampleCount(0),
    m_EndOfStreamTrackCount(0) {}

AndroidMediaMuxer::~AndroidMediaMuxer() {
  m_Muxer.clear();
}

Result AndroidMediaMuxer::Initialize(MediaWriter* writer,
  ContainerType containerType, void* threadInstance) {
  if (containerType != 0) {
    return ResultUnsupportedContainer;
  }

  m_State = 0;
  m_Muxer.clear();
  m_Muxer = new nandroid::MediaMuxer(m_pAllocatorInfo, writer,
    nandroid::MediaMuxer::OUTPUT_FORMAT_MPEG_4, threadInstance);
  return {};
}

Result AndroidMediaMuxer::Finalize() {
  m_Muxer.clear();
  m_Tracks.clear();
  return {};
}

Result AndroidMediaMuxer::Configure(const MediaProperty* property) {
  int32_t writerPriority = 0;
  if (property->GetInt32(&writerPriority, "mux-write-priority")) {
    const Result result = SetWriterThreadPriority(writerPriority);
    if (result.IsFailure()) {
      return result;
    }
  }

  int32_t encodingPriority = 0;
  if (property->GetInt32(&encodingPriority, "mux-track-enc-priority")) {
    const Result result = SetTrackEncodingThreadPriority(encodingPriority);
    if (result.IsFailure()) {
      return result;
    }
  }

  int32_t degrees = 0;
  if (property->GetInt32(&degrees, "rot-degree")) {
    const Result result = SetOrientationHint(degrees);
    if (result.IsFailure()) {
      return result;
    }
  }

  // The original reads the longitude into the latitude.
  int32_t latitude = 0;
  int32_t longitude = 0;
  if (property->GetInt32(&latitude, "latitude") &&
    property->GetInt32(&latitude, "longitude")) {
    const Result result = SetLocation(latitude, longitude);
    if (result.IsFailure()) {
      return result;
    }
  }

  return {};
}

Result AndroidMediaMuxer::SetWriterThreadPriority(int priority) {
  if (!IsValidThreadPriority(priority)) {
    return ResultInvalidArgument;
  }

  if (m_Muxer != nullptr) {
    m_Muxer->setWriterThreadPriority(priority);
  }

  return {};
}

Result AndroidMediaMuxer::SetTrackEncodingThreadPriority(int priority) {
  if (!IsValidThreadPriority(priority)) {
    return ResultInvalidArgument;
  }

  if (m_Muxer != nullptr) {
    m_Muxer->setTrackEncodingThreadPriority(priority);
  }

  return {};
}

Result AndroidMediaMuxer::SetOrientationHint(int degrees) {
  if (degrees != 0 && degrees != 90 && degrees != 180 && degrees != 270) {
    return ResultInvalidArgument;
  }

  if (m_Muxer != nullptr) {
    m_Muxer->setOrientationHint(degrees);
  }

  return {};
}

Result AndroidMediaMuxer::SetLocation(int latitude, int longitude) {
  if (latitude < -90 || latitude > 90 || longitude < -180 ||
    longitude > 180) {
    return ResultInvalidArgument;
  }

  if (m_Muxer != nullptr) {
    m_Muxer->setLocation(latitude * 1000, longitude * 1000);
  }

  return {};
}

Result AndroidMediaMuxer::AddTrack(int* pOutIndex,
  const MediaProperty* property, const void* configuration,
  size_t configurationSize) {
  if (configurationSize == 0) {
    return ResultInvalidArgument;
  }

  if (m_Muxer == nullptr) {
    return {};
  }

  nandroid::sp<nandroid::AMessage> format = new nandroid::AMessage();
  if (format == nullptr) {
    return ResultOutOfMemory;
  }

  Result result = ConvertMediaPropertyToMessage(format.get(), property);
  if (!IsMovieSuccess(result)) {
    return result;
  }

  result = CopyCodecSpecificDataToMessage(format.get(), property,
    configuration, configurationSize);
  if (result.IsFailure()) {
    return result;
  }

  const int32_t index = m_Muxer->addTrack(format);
  *pOutIndex = index;
  if (index == -1) {
    return ResultAddTrackFailed;
  }

  [[clang::always_inline]] m_Tracks.push_back(index);
  return {};
}

Result AndroidMediaMuxer::ConvertMediaPropertyToMessage(
  nandroid::AMessage* message, const MediaProperty* property) {
  int32_t mimeValue = -1;
  int64_t durationUs = 0;
  const int32_t mime = property->GetInt32(&mimeValue, "mime") ? mimeValue :
    -1;
  if (property->GetInt64(&durationUs, "duration-us")) {
    message->setInt64("duration-us", durationUs);
  }

  int32_t isSyncFrame = 0;
  if (property->GetInt32(&isSyncFrame, "is-sync-frame") && isSyncFrame != 0) {
    message->setInt32("is-sync-frame", isSyncFrame);
  }

  int32_t bitrate = 0;
  if (property->GetInt32(&bitrate, "bitrate")) {
    message->setInt32("bitrate", bitrate);
  }

  if (mime == MimeTypeAvc) {
    message->setString("mime", "video/avc");
    int32_t width = 0;
    if (property->GetInt32(&width, "width")) {
      message->setInt32("width", width);
    }

    int32_t height = 0;
    if (property->GetInt32(&height, "height")) {
      message->setInt32("height", height);
    }

    int32_t frameRate = 0;
    if (property->GetInt32(&frameRate, "frame-rate")) {
      message->setInt32("frame-rate", frameRate);
    }
  }
  else if (mime == MimeTypeAac) {
    message->setString("mime", "audio/mp4a-latm");
    int32_t channelCount = 0;
    if (property->GetInt32(&channelCount, "channel-count")) {
      message->setInt32("channel-count", channelCount);
    }

    int32_t sampleRate = 0;
    if (property->GetInt32(&sampleRate, "sample-rate")) {
      message->setInt32("sample-rate", sampleRate);
    }
  }

  // The original callers recheck this always successful result, so it must
  // not be visible to them.
  Result result = {};
  asm("" : "+r"(result.value));
  return result;
}

Result AndroidMediaMuxer::CopyCodecSpecificDataToMessage(
  nandroid::AMessage* message, const MediaProperty* property,
  const void* data, size_t size) {
  if (size == 0) {
    return ResultInvalidArgument;
  }

  int32_t mime = -1;
  if (!property->GetInt32(&mime, "mime")) {
    return ResultInvalidMediaData;
  }

  if (mime == MimeTypeAac) {
    const Result result = CopyAacCodecSpecificDataToMessage(message, data,
      size);
    if (result.IsFailure()) {
      return result;
    }

    return {};
  }

  if (mime != MimeTypeAvc) {
    return ResultUnsupportedMimeType;
  }

  const Result result = CopyAvcCodecSpecificDataToMessage(message, data,
    size);
  if (result.IsFailure() && result.value != ResultMovieWarning) {
    return result;
  }

  return {};
}

Result AndroidMediaMuxer::GetTrackCount(int* pOutCount) {
  *pOutCount = m_Tracks.size();
  return {};
}

Result AndroidMediaMuxer::Start() {
  if (m_Tracks.empty()) {
    return ResultNoTrack;
  }

  m_WrittenSampleCount = 0;
  return {};
}

Result AndroidMediaMuxer::Stop() {
  if (m_Muxer != nullptr) {
    m_Muxer->stop();
  }

  return {};
}

Result AndroidMediaMuxer::WriteAsync(const Buffer* buffer, int index) {
  if (static_cast<size_t>(index) >= m_Tracks.size()) {
    return ResultInvalidTrackIndex;
  }

  if (m_Muxer == nullptr) {
    return {};
  }

  if (m_WrittenSampleCount == 0 && m_Muxer->start() != nandroid::OK) {
    return ResultWriteFailed;
  }

  ++m_WrittenSampleCount;
  void* data = nullptr;
  size_t capacity = 0;
  size_t filledSize = 0;
  Result result = buffer->GetBuffer(&data, &capacity, &filledSize);
  if (!IsMovieSuccess(result)) {
    return result;
  }

  if (data == nullptr) {
    return ResultInvalidMediaData;
  }

  BufferFlags flags = BufferFlags_None;
  result = buffer->GetBufferFlags(&flags);
  if (!IsMovieSuccess(result)) {
    return result;
  }

  TimeSpan timeStamp = {};
  result = buffer->GetTimeStamp(&timeStamp);
  if (!IsMovieSuccess(result)) {
    return result;
  }

  nandroid::sp<nandroid::ABuffer> sample = new (
    AllocateFromCurrentHeap(sizeof(nandroid::ABuffer))) nandroid::ABuffer(
    data, filledSize);
  if (sample == nullptr) {
    return ResultOutOfMemory;
  }

  const uint32_t sampleFlags = (flags & BufferFlagSyncFrame) != 0;
  if (m_Muxer->writeSampleData(sample, index,
    timeStamp.nanoseconds / 1000, sampleFlags) != nandroid::OK) {
    return ResultWriteFailed;
  }

  if ((flags & BufferFlagEndOfStream) != 0) {
    ++m_EndOfStreamTrackCount;
    if (m_EndOfStreamTrackCount == m_Tracks.size() &&
      m_Muxer->stop() != nandroid::OK) {
      return ResultWriteFailed;
    }
  }

  return {};
}

void* AndroidMediaMuxer::Allocate(size_t size) {
  if (m_pAllocatorInfo == nullptr) {
    return nullptr;
  }

  return AllocateMemory(size, m_pAllocatorInfo);
}

void* AndroidMediaMuxer::Allocate(size_t alignment, size_t size) {
  if (m_pAllocatorInfo == nullptr) {
    return nullptr;
  }

  return AllocateMemory(alignment, size, m_pAllocatorInfo);
}

void AndroidMediaMuxer::Deallocate(void* address) {
  if (m_pAllocatorInfo != nullptr) {
    FreeMemory(address, m_pAllocatorInfo);
  }
}

Result AndroidMediaMuxer::CopyAvcCodecSpecificDataToMessage(
  nandroid::AMessage* message, const void* data, size_t size) {
  if (size == 0) {
    return ResultInvalidArgument;
  }

  if (size < 8) {
    return ResultInvalidMediaData;
  }

  uint8_t* sps = nullptr;
  size_t spsSize = 0;
  uint8_t* position = static_cast<uint8_t*>(const_cast<void*>(data));
  size_t remaining = size;
  while (remaining >= 4) {
    uint8_t* nalUnit = nullptr;
    size_t nalUnitSize = 0;
    if (!GetH264NalUnitStartPositionAndNalSize(&position, &remaining,
      &nalUnit, &nalUnitSize)) {
      break;
    }

    if ((nalUnit[0] & 0x1f) == 7) {
      sps = nalUnit;
      spsSize = nalUnitSize;
      break;
    }
  }

  uint8_t* pps = nullptr;
  size_t ppsSize = 0;
  position = static_cast<uint8_t*>(const_cast<void*>(data));
  remaining = size;
  while (remaining >= 4) {
    uint8_t* nalUnit = nullptr;
    size_t nalUnitSize = 0;
    if (!GetH264NalUnitStartPositionAndNalSize(&position, &remaining,
      &nalUnit, &nalUnitSize)) {
      break;
    }

    if ((nalUnit[0] & 0x1f) == 8) {
      pps = nalUnit;
      ppsSize = nalUnitSize;
      break;
    }
  }

  if (spsSize == 0 || ppsSize == 0) {
    return ResultInvalidMediaData;
  }

  nandroid::sp<nandroid::ABuffer> buffer = new nandroid::ABuffer(
    spsSize + 4);
  if (buffer == nullptr) {
    return ResultOutOfMemory;
  }

  buffer->setRange(0, 0);
  memcpy(buffer->data(), StartCode, sizeof(StartCode));
  memcpy(buffer->data() + sizeof(StartCode), sps, spsSize);
  buffer->setRange(0, spsSize + sizeof(StartCode));
  MarkAsCodecSpecificData(buffer);
  message->setBuffer("csd-0", buffer);

  buffer = new nandroid::ABuffer(ppsSize + 4);
  buffer->setRange(0, 0);
  memcpy(buffer->data(), StartCode, sizeof(StartCode));
  memcpy(buffer->data() + sizeof(StartCode), pps, ppsSize);
  buffer->setRange(0, ppsSize + sizeof(StartCode));
  MarkAsCodecSpecificData(buffer);
  message->setBuffer("csd-1", buffer);
  return {};
}

Result AndroidMediaMuxer::CopyAacCodecSpecificDataToMessage(
  nandroid::AMessage* message, const void* data, size_t size) {
  if (size == 0) {
    return ResultInvalidArgument;
  }

  nandroid::sp<nandroid::ABuffer> buffer = new nandroid::ABuffer(6);
  if (buffer == nullptr) {
    return ResultOutOfMemory;
  }

  buffer->setRange(0, 0);
  memcpy(buffer->data() + buffer->size(), data, 2);
  buffer->setRange(0, buffer->size() + 2);
  MarkAsCodecSpecificData(buffer);
  message->setBuffer("csd-0", buffer);
  return {};
}

// This is getNextNALUnit of AOSP with a start code always following.
bool AndroidMediaMuxer::GetH264NalUnitStartPositionAndNalSize(
  uint8_t** ppData, size_t* pSize, uint8_t** ppNalUnit,
  size_t* pNalUnitSize) {
  if (ppData == nullptr || pSize == nullptr || ppNalUnit == nullptr ||
    pNalUnitSize == nullptr) {
    return false;
  }

  uint8_t* data = *ppData;
  const size_t size = *pSize;
  *ppNalUnit = nullptr;
  *pNalUnitSize = 0;
  if (size < 3) {
    return false;
  }

  size_t offset = 0;
  for (; offset + 2 < size; ++offset) {
    if (data[offset + 2] == 0x01 && data[offset] == 0x00 &&
      data[offset + 1] == 0x00) {
      break;
    }
  }

  if (offset + 2 >= size) {
    *ppData = &data[offset];
    *pSize = 2;
    return false;
  }

  offset += 3;
  const size_t startOffset = offset;
  for (;;) {
    while (offset < size && data[offset] != 0x01) {
      ++offset;
    }

    if (offset == size) {
      offset = size + 2;
      break;
    }

    if (data[offset - 1] == 0x00 && data[offset - 2] == 0x00) {
      break;
    }

    ++offset;
  }

  size_t endOffset = offset - 2;
  while (endOffset > startOffset + 1 && data[endOffset - 1] == 0x00) {
    --endOffset;
  }

  *ppNalUnit = &data[startOffset];
  *pNalUnitSize = endOffset - startOffset;
  if (offset + 2 < size) {
    *ppData = &data[offset - 2];
    *pSize = size - offset + 2;
  }
  else {
    *ppData = nullptr;
    *pSize = 0;
  }

  return true;
}

}
