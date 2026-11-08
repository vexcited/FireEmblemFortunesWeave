#pragma once

#include <atomic>
#include <stddef.h>
#include <stdint.h>
#include <vector>

#include "nandroid/media/stagefright/MediaMuxer.h"
#include "nandroid/utils/StrongPointer.h"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/result.hpp"

namespace nandroid {

struct AMessage;

}

namespace nn::movie {

class Buffer;
class MediaProperty;
class MediaWriter;

enum ContainerType : int32_t;

}

namespace nn::movie::detail {

struct AllocatorInfo;

class AndroidMediaMuxer {
public:
  explicit AndroidMediaMuxer(AllocatorInfo* allocatorInfo);
  virtual ~AndroidMediaMuxer();

  virtual Result Initialize(MediaWriter* writer, ContainerType containerType,
    void* threadInstance);
  virtual Result Finalize();
  virtual Result Configure(const MediaProperty* property);
  virtual Result AddTrack(int* pOutIndex, const MediaProperty* property,
    const void* configuration, size_t configurationSize);
  virtual Result GetTrackCount(int* pOutCount);
  virtual Result Start();
  virtual Result Stop();
  virtual Result WriteAsync(const Buffer* buffer, int index);

  Result SetWriterThreadPriority(int priority);
  Result SetTrackEncodingThreadPriority(int priority);
  Result SetOrientationHint(int degrees);
  Result SetLocation(int latitude, int longitude);

  Result ConvertMediaPropertyToMessage(nandroid::AMessage* message,
    const MediaProperty* property);
  Result CopyCodecSpecificDataToMessage(nandroid::AMessage* message,
    const MediaProperty* property, const void* data, size_t size);
  Result CopyAvcCodecSpecificDataToMessage(nandroid::AMessage* message,
    const void* data, size_t size);
  Result CopyAacCodecSpecificDataToMessage(nandroid::AMessage* message,
    const void* data, size_t size);
  bool GetH264NalUnitStartPositionAndNalSize(uint8_t** ppData,
    size_t* pSize, uint8_t** ppNalUnit, size_t* pNalUnitSize);

  void* Allocate(size_t size);
  void* Allocate(size_t alignment, size_t size);
  void Deallocate(void* address);

private:
  AllocatorInfo* m_pAllocatorInfo;
  nandroid::sp<nandroid::MediaMuxer> m_Muxer;
  int32_t m_State;
  std::vector<int32_t, StdLibAllocator<int32_t>> m_Tracks;
  std::atomic<uint32_t> m_WrittenSampleCount;
  std::atomic<uint32_t> m_EndOfStreamTrackCount;
};

}
