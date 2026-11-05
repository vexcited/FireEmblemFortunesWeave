#include "nn/album/album_types.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"

namespace nn::album {

namespace {

constexpr uint32_t ResultModuleCapsrv = 206;

constexpr Result MakeAlbumResult(uint32_t description) {
  return Result{214 | description << 9};
}

constexpr uint32_t MakeInnerValue(uint32_t module, uint32_t description) {
  return module | description << 9;
}

constexpr Result ResultAlbumUnknown = MakeAlbumResult(101);
constexpr Result ResultAlbumFull = MakeAlbumResult(102);
constexpr Result ResultAlbumFileCountLimit = MakeAlbumResult(103);
constexpr Result ResultAlbumFileNotFound = MakeAlbumResult(105);
constexpr Result ResultAlbumInvalidFileData = MakeAlbumResult(107);
constexpr Result ResultAlbumOutOfRange = MakeAlbumResult(110);
constexpr Result ResultAlbumNotSupported = MakeAlbumResult(111);

}

AlbumFileEntry ConvertAlbumEntry::ConvertToAlbum(
  const capsrv::ApplicationAlbumEntry& entry) {
  return *reinterpret_cast<const AlbumFileEntry*>(&entry);
}

capsrv::ApplicationAlbumEntry ConvertAlbumEntry::ConvertToCapsrv(
  const AlbumFileEntry& entry) {
  return *reinterpret_cast<const capsrv::ApplicationAlbumEntry*>(&entry);
}

capsrv::ApplicationAlbumEntry* ConvertAlbumEntry::ReinterpretArrayToCapsrv(
  AlbumFileEntry* pEntries) {
  return reinterpret_cast<capsrv::ApplicationAlbumEntry*>(pEntries);
}

Result ConvertCapsrvResult(Result result) {
  if (result.IsSuccess()) {
    return Result{};
  }
  const uint32_t value = result.GetInnerValueForDebug();
  if (value == MakeInnerValue(ResultModuleCapsrv, 21) ||
    value == MakeInnerValue(2, 0x1af9)) {
    return ResultAlbumOutOfRange;
  }
  if (value == MakeInnerValue(ResultModuleCapsrv, 22)) {
    return ResultAlbumFull;
  }
  if (value == MakeInnerValue(ResultModuleCapsrv, 23)) {
    return ResultAlbumInvalidFileData;
  }
  if (value == MakeInnerValue(ResultModuleCapsrv, 25)) {
    return ResultAlbumFileCountLimit;
  }
  if (value == MakeInnerValue(ResultModuleCapsrv, 27)) {
    return ResultAlbumFileNotFound;
  }
  if (value == MakeInnerValue(1, 106)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  const uint32_t description = result.value >> 9 & 0x1fff;
  if ((result.value & 0x1ff) == ResultModuleCapsrv && description >= 10 &&
    description < 20) {
    return ResultAlbumInvalidFileData;
  }
  if (value == MakeInnerValue(ResultModuleCapsrv, 26) ||
    value == MakeInnerValue(ResultModuleCapsrv, 30)) {
    return ResultAlbumNotSupported;
  }
  if (value == MakeInnerValue(212, 0x385)) {
    return ResultAlbumFull;
  }
  if (value == MakeInnerValue(212, 0x386)) {
    return ResultAlbumFileCountLimit;
  }
  if (value == MakeInnerValue(212, 0x387)) {
    return ResultAlbumFileNotFound;
  }
  if (value == MakeInnerValue(212, 0x388)) {
    return ResultAlbumOutOfRange;
  }
  if (value == MakeInnerValue(212, 0x389)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  }
  return ResultAlbumUnknown;
}

int GetImageWidth(ImageSize size) {
  switch (size) {
    case ImageSize_1280x720:
      return 1280;
    case ImageSize_1920x1080:
      return 1920;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

int GetImageHeight(ImageSize size) {
  switch (size) {
    case ImageSize_1280x720:
      return 720;
    case ImageSize_1920x1080:
      return 1080;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
