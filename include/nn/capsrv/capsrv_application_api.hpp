#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/capsrv/capsrv_album_types.hpp"
#include "nn/result.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::capsrv {

using AlbumFileContentsFlag = util::BitFlagSet<64, void>;

struct ApplicationData {
  uint8_t data[0x400];
  uint32_t size;
};

struct AlbumMovieReadStreamHandle {
  uint64_t value;
};

struct ScreenShotAttributeForApplication;

Result GetAlbumContentsFileListForApplication(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  AlbumFileDateTime begin, AlbumFileDateTime end);
Result GetAlbumContentsFileListForApplication2(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  AlbumFileDateTime begin, AlbumFileDateTime end);
Result GetAlbumContentsFileListForApplicationEx1(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  const account::Uid& uid, AlbumFileDateTime begin, AlbumFileDateTime end);
Result GetAllAlbumContentsFileListForApplication(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  AlbumFileDateTime begin, AlbumFileDateTime end);
Result DeleteAlbumContentsFileForApplication(
  const ApplicationAlbumEntry& entry, uint8_t contents);
Result LoadAlbumContentsFileScreenShotImageForApplication(int* pOutWidth,
  int* pOutHeight, ScreenShotAttributeForApplication* pOutAttribute,
  ApplicationData* pOutData, void* pBuffer, size_t bufferSize,
  void* pWorkBuffer, size_t workBufferSize,
  const ApplicationAlbumEntry& entry);
Result LoadAlbumContentsFileThumbnailImageForApplication(int* pOutWidth,
  int* pOutHeight, ScreenShotAttributeForApplication* pOutAttribute,
  ApplicationData* pOutData, void* pBuffer, size_t bufferSize,
  void* pWorkBuffer, size_t workBufferSize,
  const ApplicationAlbumEntry& entry);
Result OpenAlbumMovieReadStreamForApplication(
  AlbumMovieReadStreamHandle* pOutHandle, const ApplicationAlbumEntry& entry);
void CloseAlbumMovieReadStreamForApplication(
  AlbumMovieReadStreamHandle handle);
Result GetAlbumMovieReadStreamDataSizeForApplication(size_t* pOutSize,
  AlbumMovieReadStreamHandle handle);
Result ReadDataFromAlbumMovieReadStreamForApplication(size_t* pOutSize,
  void* pBuffer, size_t size, AlbumMovieReadStreamHandle handle,
  int64_t offset);

}

namespace nn::capsrv::detail {

class ScreenShotAttributeForApplicationBase {
 public:
  void SetDefault();

  uint32_t dynamicRange;
  uint8_t reserved[0x3c];
};

}

namespace nn::capsrv {

struct ScreenShotAttributeForApplication :
  detail::ScreenShotAttributeForApplicationBase {};

}

namespace nn::capsrv::detail {

class ScreenShotAttributeEx0Base {
 public:
  void SetDefault();

  int32_t size;
  int32_t orientation;
  uint8_t reserved[0x38];
};

}

namespace nn::capsrv {

struct ScreenShotAttribute : detail::ScreenShotAttributeEx0Base {};

struct UserIdList {
  account::Uid uids[8];
  uint8_t count;
  uint8_t reserved[7];
};

Result SaveScreenShotForApplication(ApplicationAlbumEntry* pOutEntry,
  const void* pImageData, size_t imageDataSize,
  const ScreenShotAttribute& attribute, const ApplicationData& data,
  uint32_t reportOption);
Result SaveScreenShotForApplication(ApplicationAlbumEntry* pOutEntry,
  const void* pImageData, size_t imageDataSize,
  const ScreenShotAttribute& attribute, const UserIdList& userIds,
  uint32_t reportOption);
Result DeleteAlbumFileForApplicationDebug(const ApplicationAlbumEntry& entry);

}
