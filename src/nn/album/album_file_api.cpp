#include "nn/album/album_file_api.hpp"
#include "nn/capsrv/capsrv_application_api.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/util/string_util.hpp"

#include <string.h>

namespace nn::applet {

void SetAlbumUserData(const void* pData, size_t size);

}

namespace nn::time {

bool IsValidDate(int year, int month, int day);

}

#define NN_ALBUM_DETAIL_ACCESS_LOG(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick albumStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick albumEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, albumStart_, albumEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_ALBUM_DETAIL_ACCESS_LOG_VOID(statement, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick albumStart_ = ::nn::os::GetSystemTick(); \
      statement; \
      const ::nn::os::Tick albumEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(::nn::Result{0}, albumStart_, \
        albumEnd_, __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      statement; \
    } \
  } while (0)

namespace nn::album {

namespace {

constexpr capsrv::AlbumFileDateTime DateTimeMin = {1970, 1, 1, 0, 0, 0, 0};
constexpr capsrv::AlbumFileDateTime DateTimeMax = {3000, 1, 1, 0, 0, 0, 0};

constexpr capsrv::AlbumFileContentsFlag ContentsScreenshot = {{0x11, 0}};
constexpr capsrv::AlbumFileContentsFlag ContentsMovie = {{0x22, 0}};
constexpr capsrv::AlbumFileContentsFlag ContentsExtraMovie = {{0x8, 0}};

constexpr uint8_t ContentsExtraMovieValue = 3;

constexpr Result ResultAlbumInvalidFileData = {214 | 107 << 9};
constexpr Result ResultCapsrvInvalidFileId = {206 | 12 << 9};

struct EntryString {
  char value[17];

  // The original formats the eight bytes that follow the entry, not its own
  // time field.
  explicit EntryString(const AlbumFileEntry& entry) : value() {
    const auto& time =
      *reinterpret_cast<const capsrv::AlbumFileDateTime*>(&entry + 1);
    util::SNPrintf(value, sizeof(value), "%04d%02d%02d%02d%02d%02d%02d",
      time.year, time.month, time.day, time.hour, time.minute, time.second,
      time.id);
  }
};

using LoadImageFunction = Result (*)(int*, int*,
  capsrv::ScreenShotAttributeForApplication*, capsrv::ApplicationData*,
  void*, size_t, void*, size_t, const capsrv::ApplicationAlbumEntry&);

template <LoadImageFunction Load>
[[gnu::always_inline]] inline Result LoadImageImpl(int* pOutWidth,
  int* pOutHeight, capsrv::ScreenShotAttributeForApplication* pAttribute,
  size_t* pOutUserDataSize, void* pUserDataBuffer, size_t userDataBufferSize,
  void* pBuffer, size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  g_LibraryState.EnsureAlbumAvailable();
  const capsrv::ApplicationAlbumEntry capsrvEntry =
    ConvertAlbumEntry::ConvertToCapsrv(entry);
  capsrv::ApplicationData data;
  memset(&data, 0, sizeof(data));
  const Result result = Load(pOutWidth, pOutHeight, pAttribute, &data,
    pBuffer, bufferSize, pWorkBuffer, workBufferSize, capsrvEntry);
  if (result.IsSuccess()) {
    if (pUserDataBuffer != nullptr) {
      memcpy(pUserDataBuffer, data.data,
        userDataBufferSize < data.size ? userDataBufferSize : data.size);
    }
    if (pOutUserDataSize != nullptr) {
      *pOutUserDataSize = data.size;
    }
  }
  return ConvertCapsrvResult(result);
}

[[gnu::always_inline]] inline void ConvertAttribute(
  AlbumFileAttribute* pOutAttribute,
  const capsrv::ScreenShotAttributeForApplication& attribute) {
  AlbumFileAttribute value = {};
  value.isHdr = attribute.dynamicRange == 2;
  *pOutAttribute = value;
}

constexpr LoadImageFunction LoadImage =
  capsrv::LoadAlbumContentsFileScreenShotImageForApplication;
constexpr LoadImageFunction LoadThumbnail =
  capsrv::LoadAlbumContentsFileThumbnailImageForApplication;

}

Result GetExtraMovieFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::GetAlbumContentsFileListForApplication2(pOutCount,
        ConvertAlbumEntry::ReinterpretArrayToCapsrv(pEntries), count,
        ContentsExtraMovie, DateTimeMax, DateTimeMin)),
    ", entry_count: %d", count);
  if (result.IsFailure()) {
    *pOutCount = 0;
  }
  return Result{0};
}

Result DeleteExtraMovieFile(const AlbumFileEntry& entry) {
  g_LibraryState.EnsureAlbumAvailable();
  const capsrv::ApplicationAlbumEntry capsrvEntry =
    ConvertAlbumEntry::ConvertToCapsrv(entry);
  if (capsrv::DeleteAlbumContentsFileForApplication(capsrvEntry,
    ContentsExtraMovieValue).IsFailure()) {
    return ResultAlbumInvalidFileData;
  }
  return Result{0};
}

void SetUserData(const void* pData, size_t size) {
  applet::SetAlbumUserData(pData, size);
}

Result GetAlbumScreenshotFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::GetAlbumContentsFileListForApplication(pOutCount,
        ConvertAlbumEntry::ReinterpretArrayToCapsrv(pEntries), count,
        ContentsScreenshot, DateTimeMin, DateTimeMax)),
    ", entry_count: %d", count);
  if (result.IsFailure()) {
    *pOutCount = 0;
  }
  return Result{0};
}

Result GetAlbumScreenshotFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count, const account::Uid& uid) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::GetAlbumContentsFileListForApplicationEx1(pOutCount,
        ConvertAlbumEntry::ReinterpretArrayToCapsrv(pEntries), count,
        ContentsScreenshot, uid, DateTimeMin, DateTimeMax)),
    ", entry_count: %d, userid: 0x%016lX%016lX", count, uid.value[0],
    uid.value[1]);
  if (result.IsFailure()) {
    *pOutCount = 0;
  }
  return Result{0};
}

Result GetAlbumScreenshotFileList(Span<AlbumFileEntry>* pOutEntries,
  Span<AlbumFileEntry> entries, const AlbumFileEntry* pPivot,
  FileListOrder order) {
  capsrv::AlbumFileDateTime begin;
  capsrv::AlbumFileDateTime end;
  if (pPivot != nullptr) {
    begin = pPivot->time;
    switch (order) {
      case FileListOrder_Ascending:
        end = DateTimeMax;
        break;
      case FileListOrder_Descending:
        end = DateTimeMin;
        break;
      default:
        ::nn::detail::UnexpectedDefaultImpl();
    }
  }
  else {
    switch (order) {
      case FileListOrder_Ascending:
        begin = DateTimeMin;
        end = DateTimeMax;
        break;
      case FileListOrder_Descending:
        begin = DateTimeMax;
        end = DateTimeMin;
        break;
      default:
        ::nn::detail::UnexpectedDefaultImpl();
    }
  }
  const int count = static_cast<int>(entries.size);
  int outCount = 0;
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::GetAlbumContentsFileListForApplication2(&outCount,
        ConvertAlbumEntry::ReinterpretArrayToCapsrv(entries.data), count,
        ContentsScreenshot, begin, end)),
    ", entry_count: %d", count);
  if (result.IsFailure()) {
    outCount = 0;
  }
  *pOutEntries = {entries.data, static_cast<uintptr_t>(outCount)};
  return Result{0};
}

Result GetAllAlbumScreenshotFileList(int* pOutCount,
  AlbumFileEntry* pEntries, int count) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::GetAllAlbumContentsFileListForApplication(pOutCount,
        ConvertAlbumEntry::ReinterpretArrayToCapsrv(pEntries), count,
        ContentsScreenshot, DateTimeMin, DateTimeMax)),
    ", entry_count: %d", count);
  if (result.IsFailure()) {
    *pOutCount = 0;
  }
  return Result{0};
}

Result GetAlbumMovieFileList(int* pOutCount, AlbumFileEntry* pEntries,
  int count) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::GetAlbumContentsFileListForApplication(pOutCount,
        ConvertAlbumEntry::ReinterpretArrayToCapsrv(pEntries), count,
        ContentsMovie, DateTimeMin, DateTimeMax)),
    ", entry_count: %d", count);
  if (result.IsFailure()) {
    *pOutCount = 0;
  }
  return Result{0};
}


Result LoadAlbumImage(int* pOutWidth, int* pOutHeight, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadImage>(pOutWidth, pOutHeight, nullptr, nullptr, nullptr,
      0, pBuffer, bufferSize, pWorkBuffer, workBufferSize, entry),
    ", buffer_size: %zu, work_buffer_size: %zu, entry: %s", bufferSize,
    workBufferSize, EntryString(entry).value);
  return result;
}

Result LoadAlbumImage(int* pOutWidth, int* pOutHeight,
  size_t* pOutUserDataSize, void* pUserDataBuffer, size_t userDataBufferSize,
  void* pBuffer, size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadImage>(pOutWidth, pOutHeight, nullptr, pOutUserDataSize,
      pUserDataBuffer, userDataBufferSize, pBuffer, bufferSize, pWorkBuffer,
      workBufferSize, entry),
    ", user_data_buffer_size: %zu, buffer_size: %zu, work_buffer_size: %zu, "
    "entry: %s", userDataBufferSize, bufferSize, workBufferSize,
    EntryString(entry).value);
  return result;
}

Result LoadAlbumImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, void* pBuffer, size_t bufferSize,
  void* pWorkBuffer, size_t workBufferSize, const AlbumFileEntry& entry) {
  capsrv::ScreenShotAttributeForApplication attribute;
  attribute.SetDefault();
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadImage>(pOutWidth, pOutHeight, &attribute, nullptr,
      nullptr, 0, pBuffer, bufferSize, pWorkBuffer, workBufferSize, entry),
    ", buffer_size: %zu, work_buffer_size: %zu, entry: %s", bufferSize,
    workBufferSize, EntryString(entry).value);
  if (pOutAttribute != nullptr && result.IsSuccess()) {
    ConvertAttribute(pOutAttribute, attribute);
  }
  return result;
}

Result LoadAlbumImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, size_t* pOutUserDataSize,
  void* pUserDataBuffer, size_t userDataBufferSize, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  capsrv::ScreenShotAttributeForApplication attribute;
  attribute.SetDefault();
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadImage>(pOutWidth, pOutHeight, &attribute,
      pOutUserDataSize, pUserDataBuffer, userDataBufferSize, pBuffer,
      bufferSize, pWorkBuffer, workBufferSize, entry),
    ", user_data_buffer_size: %zu, buffer_size: %zu, work_buffer_size: %zu, "
    "entry: %s", userDataBufferSize, bufferSize, workBufferSize,
    EntryString(entry).value);
  if (pOutAttribute != nullptr && result.IsSuccess()) {
    ConvertAttribute(pOutAttribute, attribute);
  }
  return result;
}

Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadThumbnail>(pOutWidth, pOutHeight, nullptr, nullptr, nullptr,
      0, pBuffer, bufferSize, pWorkBuffer, workBufferSize, entry),
    ", buffer_size: %zu, work_buffer_size: %zu, entry: %s", bufferSize,
    workBufferSize, EntryString(entry).value);
  return result;
}

Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  size_t* pOutUserDataSize, void* pUserDataBuffer, size_t userDataBufferSize,
  void* pBuffer, size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadThumbnail>(pOutWidth, pOutHeight, nullptr, pOutUserDataSize,
      pUserDataBuffer, userDataBufferSize, pBuffer, bufferSize, pWorkBuffer,
      workBufferSize, entry),
    ", user_data_buffer_size: %zu, buffer_size: %zu, work_buffer_size: %zu, "
    "entry: %s", userDataBufferSize, bufferSize, workBufferSize,
    EntryString(entry).value);
  return result;
}

Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, void* pBuffer, size_t bufferSize,
  void* pWorkBuffer, size_t workBufferSize, const AlbumFileEntry& entry) {
  capsrv::ScreenShotAttributeForApplication attribute;
  attribute.SetDefault();
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadThumbnail>(pOutWidth, pOutHeight, &attribute, nullptr,
      nullptr, 0, pBuffer, bufferSize, pWorkBuffer, workBufferSize, entry),
    ", buffer_size: %zu, work_buffer_size: %zu, entry: %s", bufferSize,
    workBufferSize, EntryString(entry).value);
  if (pOutAttribute != nullptr && result.IsSuccess()) {
    ConvertAttribute(pOutAttribute, attribute);
  }
  return result;
}

Result LoadAlbumThumbnailImage(int* pOutWidth, int* pOutHeight,
  AlbumFileAttribute* pOutAttribute, size_t* pOutUserDataSize,
  void* pUserDataBuffer, size_t userDataBufferSize, void* pBuffer,
  size_t bufferSize, void* pWorkBuffer, size_t workBufferSize,
  const AlbumFileEntry& entry) {
  capsrv::ScreenShotAttributeForApplication attribute;
  attribute.SetDefault();
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    LoadImageImpl<LoadThumbnail>(pOutWidth, pOutHeight, &attribute,
      pOutUserDataSize, pUserDataBuffer, userDataBufferSize, pBuffer,
      bufferSize, pWorkBuffer, workBufferSize, entry),
    ", user_data_buffer_size: %zu, buffer_size: %zu, work_buffer_size: %zu, "
    "entry: %s", userDataBufferSize, bufferSize, workBufferSize,
    EntryString(entry).value);
  if (pOutAttribute != nullptr && result.IsSuccess()) {
    ConvertAttribute(pOutAttribute, attribute);
  }
  return result;
}

Result OpenAlbumMovieStream(MovieStreamHandle* pOutHandle,
  const AlbumFileEntry& entry) {
  Result capsrvResult;
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    ([&]() -> Result {
      g_LibraryState.EnsureAlbumAvailable();
      const capsrv::ApplicationAlbumEntry capsrvEntry =
        ConvertAlbumEntry::ConvertToCapsrv(entry);
      capsrv::AlbumMovieReadStreamHandle handle = {};
      capsrvResult = capsrv::OpenAlbumMovieReadStreamForApplication(&handle,
        capsrvEntry);
      pOutHandle->value = handle.value;
      return ConvertCapsrvResult(capsrvResult);
    }()),
    ", movie_stream_handle: 0x%016lX, entry: %s",
    capsrvResult.IsSuccess() ? pOutHandle->value : 0,
    EntryString(entry).value);
  return result;
}

void CloseAlbumMovieStream(MovieStreamHandle handle) {
  NN_ALBUM_DETAIL_ACCESS_LOG_VOID(
    (g_LibraryState.EnsureAlbumAvailable(),
      capsrv::CloseAlbumMovieReadStreamForApplication({handle.value})),
    ", movie_stream_handle: 0x%016lX", handle.value);
}

Result GetAlbumMovieStreamSize(size_t* pOutSize, MovieStreamHandle handle) {
  g_LibraryState.EnsureAlbumAvailable();
  return ConvertCapsrvResult(
    capsrv::GetAlbumMovieReadStreamDataSizeForApplication(pOutSize,
      {handle.value}));
}

Result ReadAlbumMovieStream(size_t* pOutSize, void* pBuffer, size_t size,
  MovieStreamHandle handle, int64_t offset) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    (g_LibraryState.EnsureAlbumAvailable(),
      ConvertCapsrvResult(
        capsrv::ReadDataFromAlbumMovieReadStreamForApplication(pOutSize,
          pBuffer, size, {handle.value}, offset))),
    ", buffer_size: %zu, movie_stream_handle: 0x%016lX, offset: %ld", size,
    handle.value, offset);
  return result;
}

time::CalendarTime GetAlbumFileCreatedTime(const AlbumFileEntry& entry) {
  const capsrv::ApplicationAlbumEntry capsrvEntry =
    ConvertAlbumEntry::ConvertToCapsrv(entry);
  const capsrv::AlbumFileDateTime& time = capsrvEntry.time;
  if (!time::IsValidDate(time.year, time.month, time.day) || time.hour > 23 ||
    time.minute > 59 || time.second > 59) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(ResultCapsrvInvalidFileId);
  }
  time::CalendarTime value;
  value.year = static_cast<int16_t>(time.year);
  value.month = static_cast<int8_t>(time.month);
  value.day = static_cast<int8_t>(time.day);
  value.hour = static_cast<int8_t>(time.hour);
  value.minute = static_cast<int8_t>(time.minute);
  value.second = static_cast<int8_t>(time.second);
  return value;
}

}
