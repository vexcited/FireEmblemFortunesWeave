#pragma once

#include <stddef.h>
#include <stdint.h>

#include "movie/detail/movie_gs_handles.hpp"
#include "movie/movie_result.hpp"
#include "nn/os/time.hpp"

namespace movie {

enum PixelFormat : int32_t {
  PixelFormat_None,
};

enum PixelStorageType : int32_t {
  PixelStorageType_None,
  PixelStorageType_NativeImage = 3,
};

enum PixelPlane : int32_t {
  PixelPlane_Y,
  PixelPlane_U,
  PixelPlane_V,
  PixelPlane_Alpha,
};

class VideoFrame {
public:
  static constexpr int PixelPlaneCountMax = 4;

  VideoFrame();

  MovieResult SetPixelStorageType(PixelStorageType type);
  MovieResult SetPixelFormat(PixelFormat format);
  MovieResult SetBuffer(void* buffer, size_t size);
  MovieResult GetBuffer(void** pOutBuffer, size_t* pOutSize);
  MovieResult SetNativeImageHandle(nn::gs::NativeImageHandle handle);
  MovieResult SetTimeStamp(nn::TimeSpan timeStamp);
  MovieResult SetEndOfStreamState(bool isEndOfStream);
  MovieResult GetPixelPlaneData(const void** pOutData, size_t* pOutSize,
    PixelPlane plane);
  MovieResult SetPixelPlaneData(const void* data, size_t size,
    PixelPlane plane);
  MovieResult GetNativeImageHandle(nn::gs::NativeImageHandle* pOutHandle);
  MovieResult GetTimeStamp(nn::TimeSpan* pOutTimeStamp);
  MovieResult GetBitDepth(int* pOutBitDepth, PixelFormat format);
  MovieResult GetPixelStorageType(PixelStorageType* pOutType);
  MovieResult GetPixelPlaneFilledDataSize(size_t* pOutSize,
    PixelPlane plane);
  MovieResult GetEndOfStreamState(bool* pOutIsEndOfStream);
  void Clear();

private:
  friend nn::gs::NativeSyncHandle GetVideoFramePreSyncHandle(
    const VideoFrame* frame);
  friend void SetVideoFramePreSyncHandle(VideoFrame* frame,
    const nn::gs::NativeSyncHandle& handle);
  friend nn::gs::NativeSyncHandle GetVideoFramePostSyncHandle(
    const VideoFrame* frame);
  friend void SetVideoFramePostSyncHandle(VideoFrame* frame,
    const nn::gs::NativeSyncHandle& handle);

  void* m_Reserved;
  // The first plane is the whole buffer.
  const void* m_PlaneData[PixelPlaneCountMax];
  size_t m_PlaneSize[PixelPlaneCountMax];
  size_t m_BufferSize;
  nn::gs::NativeImageHandle m_NativeImageHandle;
  nn::gs::NativeSyncHandle m_PreSyncHandle;
  nn::gs::NativeSyncHandle m_PostSyncHandle;
  nn::TimeSpan m_TimeStamp;
  PixelFormat m_PixelFormat;
  PixelStorageType m_PixelStorageType;
  bool m_IsEndOfStream;
};

nn::gs::NativeSyncHandle GetVideoFramePreSyncHandle(const VideoFrame* frame);
void SetVideoFramePreSyncHandle(VideoFrame* frame,
  const nn::gs::NativeSyncHandle& handle);
nn::gs::NativeSyncHandle GetVideoFramePostSyncHandle(const VideoFrame* frame);
void SetVideoFramePostSyncHandle(VideoFrame* frame,
  const nn::gs::NativeSyncHandle& handle);

}
