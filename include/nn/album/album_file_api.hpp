#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/album/album_types.hpp"
#include "nn/result.hpp"
#include "nn/span.hpp"
#include "nn/time/time_types.hpp"

namespace nn::album {

enum FileListOrder : int32_t {
  FileListOrder_Ascending,
  FileListOrder_Descending,
};

struct AlbumFileAttribute {
  bool isHdr;
  uint8_t reserved[15];
};

struct MovieStreamHandle {
  uint64_t value;
};

Result GetExtraMovieFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count);
Result DeleteExtraMovieFile(const AlbumFileEntry& entry);
void SetUserData(const void* pData, size_t size);
Result GetAlbumScreenshotFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count);
Result GetAlbumScreenshotFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count, const account::Uid& uid);
Result GetAlbumScreenshotFileList(Span<AlbumFileEntry>* pOutEntries,
  Span<AlbumFileEntry> entries, const AlbumFileEntry* pPivot,
  FileListOrder order);
Result GetAllAlbumScreenshotFileList(int* pOutCount,
  AlbumFileEntry* pEntries, int count);
Result GetAlbumMovieFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count);

Result LoadAlbumImage(int* pOutWidth, int* pOutHeight, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry);
Result LoadAlbumImage(int* pOutWidth, int* pOutHeight,
  size_t* pOutUserDataSize, void* pUserDataBuffer, size_t userDataBufferSize,
  void* pBuffer, size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry);
Result LoadAlbumImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, void* pBuffer, size_t bufferSize,
  void* pWorkBuffer, size_t workBufferSize, const AlbumFileEntry& entry);
Result LoadAlbumImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, size_t* pOutUserDataSize,
  void* pUserDataBuffer, size_t userDataBufferSize, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry);
Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  void* pBuffer, size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry);
Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  size_t* pOutUserDataSize, void* pUserDataBuffer, size_t userDataBufferSize,
  void* pBuffer, size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry);
Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, void* pBuffer, size_t bufferSize,
  void* pWorkBuffer, size_t workBufferSize, const AlbumFileEntry& entry);
Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, size_t* pOutUserDataSize,
  void* pUserDataBuffer, size_t userDataBufferSize, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry);

Result OpenAlbumMovieStream(MovieStreamHandle* pOutHandle,
  const AlbumFileEntry& entry);
void CloseAlbumMovieStream(MovieStreamHandle handle);
Result GetAlbumMovieStreamSize(size_t* pOutSize, MovieStreamHandle handle);
Result ReadAlbumMovieStream(size_t* pOutSize, void* pBuffer, size_t size,
  MovieStreamHandle handle, int64_t offset);
time::CalendarTime GetAlbumFileCreatedTime(const AlbumFileEntry& entry);

}
