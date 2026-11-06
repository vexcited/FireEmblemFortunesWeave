#include <cstring>

#include "movie/movie_video_frame.hpp"

namespace movie {

namespace detail {

// The linker folded this table with the audio sample byte sizes.
extern const int BitDepthTable[] = {1, 2, 3, 4, 4};

}

VideoFrame::VideoFrame() {
  std::memset(this, 0, sizeof(*this));
}

MovieResult VideoFrame::SetPixelStorageType(PixelStorageType type) {
  m_PixelStorageType = type;
  return MovieResult_Success;
}

MovieResult VideoFrame::SetPixelFormat(PixelFormat format) {
  m_PixelFormat = format;
  return MovieResult_Success;
}

MovieResult VideoFrame::SetBuffer(void* buffer, size_t size) {
  if (m_PixelStorageType == PixelStorageType_NativeImage) {
    return MovieResult_InvalidOperation;
  }

  m_PlaneData[PixelPlane_Y] = buffer;
  m_BufferSize = size;
  return MovieResult_Success;
}

MovieResult VideoFrame::GetBuffer(void** pOutBuffer, size_t* pOutSize) {
  if (m_PixelStorageType == PixelStorageType_NativeImage) {
    return MovieResult_InvalidOperation;
  }

  *pOutBuffer = const_cast<void*>(m_PlaneData[PixelPlane_Y]);
  *pOutSize = m_BufferSize;
  return MovieResult_Success;
}

MovieResult VideoFrame::SetNativeImageHandle(
  nn::gs::NativeImageHandle handle) {
  m_NativeImageHandle = handle;
  return MovieResult_Success;
}

MovieResult VideoFrame::SetTimeStamp(nn::TimeSpan timeStamp) {
  m_TimeStamp = timeStamp;
  return MovieResult_Success;
}

MovieResult VideoFrame::SetEndOfStreamState(bool isEndOfStream) {
  m_IsEndOfStream = isEndOfStream;
  return MovieResult_Success;
}

MovieResult VideoFrame::GetPixelPlaneData(const void** pOutData,
  size_t* pOutSize, PixelPlane plane) {
  if (plane > PixelPlane_Alpha) {
    return MovieResult_OutOfRange;
  }

  *pOutData = m_PlaneData[plane];
  *pOutSize = m_PlaneSize[plane];
  return MovieResult_Success;
}

MovieResult VideoFrame::SetPixelPlaneData(const void* data, size_t size,
  PixelPlane plane) {
  if (plane > PixelPlane_Alpha) {
    return MovieResult_OutOfRange;
  }

  m_PlaneData[plane] = data;
  m_PlaneSize[plane] = size;
  return MovieResult_Success;
}

MovieResult VideoFrame::GetNativeImageHandle(
  nn::gs::NativeImageHandle* pOutHandle) {
  *pOutHandle = m_NativeImageHandle;
  return MovieResult_Success;
}

MovieResult VideoFrame::GetTimeStamp(nn::TimeSpan* pOutTimeStamp) {
  *pOutTimeStamp = m_TimeStamp;
  return MovieResult_Success;
}

MovieResult VideoFrame::GetBitDepth(int* pOutBitDepth, PixelFormat format) {
  uint32_t index = static_cast<uint32_t>(format) - 1;
  if (index > 4) {
    *pOutBitDepth = 2;
  }
  else {
    *pOutBitDepth = detail::BitDepthTable[index];
  }

  return MovieResult_Success;
}

MovieResult VideoFrame::GetPixelStorageType(PixelStorageType* pOutType) {
  *pOutType = m_PixelStorageType;
  return MovieResult_Success;
}

MovieResult VideoFrame::GetPixelPlaneFilledDataSize(size_t* pOutSize,
  PixelPlane plane) {
  if (plane > PixelPlane_Alpha) {
    return MovieResult_OutOfRange;
  }

  *pOutSize = m_PlaneSize[plane];
  return MovieResult_Success;
}

MovieResult VideoFrame::GetEndOfStreamState(bool* pOutIsEndOfStream) {
  *pOutIsEndOfStream = m_IsEndOfStream;
  return MovieResult_Success;
}

void VideoFrame::Clear() {
}

nn::gs::NativeSyncHandle GetVideoFramePreSyncHandle(const VideoFrame* frame) {
  return frame->m_PreSyncHandle;
}

void SetVideoFramePreSyncHandle(VideoFrame* frame,
  const nn::gs::NativeSyncHandle& handle) {
  frame->m_PreSyncHandle = handle;
}

nn::gs::NativeSyncHandle GetVideoFramePostSyncHandle(
  const VideoFrame* frame) {
  return frame->m_PostSyncHandle;
}

void SetVideoFramePostSyncHandle(VideoFrame* frame,
  const nn::gs::NativeSyncHandle& handle) {
  frame->m_PostSyncHandle = handle;
}

}
