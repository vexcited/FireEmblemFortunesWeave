#include <string.h>

#include "nn/account/account_types.hpp"
#include "nn/album/album_movie_parameter.hpp"
#include "nn/album/album_types.hpp"
#include "nn/am/service/am_controllers.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/capsrv/capsrv_application_api.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/la/la_common_arguments.hpp"

namespace nn::la {

void PushToInChannel(applet::LibraryAppletHandle handle, const void* pData,
  size_t size);
Result StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity);

}

namespace nn::diag::detail {

bool NotNullImpl(uintptr_t pointer);

}

#define NN_ALBUM_DETAIL_ACCESS_LOG(result, expression, ...) \
  NN_ALBUM_DETAIL_ACCESS_LOG_WITH_NAME(result, __FUNCTION__, expression, \
    __VA_ARGS__)

#define NN_ALBUM_DETAIL_ACCESS_LOG_WITH_NAME(result, name, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog() && \
      ::nn::fs::detail::IsEnabledHandleAccessLog( \
        static_cast<const void*>(nullptr))) { \
      const ::nn::os::Tick albumStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick albumEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, albumStart_, albumEnd_, \
        name, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_ALBUM_DETAIL_ABORT_UNLESS(condition) \
  do { \
    if (!(condition)) { \
      [[clang::nomerge]] ::nn::diag::detail::AbortImpl(); \
    } \
  } while (false)

namespace nn::album {

enum AlbumReportOption : int32_t {};

namespace {

constexpr Result ResultAlbumInvalidFileData = {214 | 107 << 9};

enum PhotoViewerMode : uint8_t {
  PhotoViewerMode_ShowAlbumFiles,
  PhotoViewerMode_ShowAllAlbumFiles,
  PhotoViewerMode_ShowAllAlbumFilesForHomeMenu,
};

struct PhotoViewerArgument {
  PhotoViewerMode mode;
};

constexpr applet::AppletId AppletIdPhotoViewer =
  static_cast<applet::AppletId>(0x1000015);

[[gnu::always_inline]] inline int32_t ConvertImageOrientation(
  ImageOrientation orientation) {
  switch (orientation) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    default:
      ::nn::detail::UnexpectedDefaultImpl();
  }
}

[[gnu::always_inline]] inline void CheckImageData(const void* pImageData,
  size_t imageDataSize, ImageSize imageSize) {
  NN_ALBUM_DETAIL_ABORT_UNLESS(imageSize == ImageSize_1280x720 ||
    imageSize == ImageSize_1920x1080);
  const int width = GetImageWidth(imageSize);
  const int height = GetImageHeight(imageSize);
  NN_ALBUM_DETAIL_ABORT_UNLESS(diag::detail::NotNullImpl(
    reinterpret_cast<uintptr_t>(pImageData)));
  NN_ALBUM_DETAIL_ABORT_UNLESS(imageDataSize >=
    static_cast<size_t>(4 * width * height));
}

[[gnu::always_inline]] inline Result SaveScreenshotImpl(
  const void* pImageData, size_t imageDataSize, ImageSize imageSize,
  ImageOrientation orientation, AlbumReportOption reportOption,
  const capsrv::ApplicationData& data) {
  capsrv::ApplicationAlbumEntry entry;
  capsrv::ScreenShotAttribute attribute;
  attribute.SetDefault();
  attribute.size = imageSize;
  attribute.orientation = ConvertImageOrientation(orientation);
  return ConvertCapsrvResult(capsrv::SaveScreenShotForApplication(&entry,
    pImageData, imageDataSize, attribute, data, reportOption & 3));
}

[[gnu::noinline]] void StartPhotoViewer(
  applet::LibraryAppletHandle* pOutHandle,
  const PhotoViewerArgument& argument, bool isPlayStartupSound) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(pOutHandle,
    AppletIdPhotoViewer, static_cast<applet::LibraryAppletMode>(0)));
  la::CommonArgumentsWriter writer(0x10000);
  writer.SetPlayStartupSound(isPlayStartupSound);
  writer.PushToInChannel(*pOutHandle);
  la::PushToInChannel(*pOutHandle, &argument, sizeof(argument));
  la::StartLibraryApplet(*pOutHandle, false);
}

[[gnu::always_inline]] inline void ShowPhotoViewer(PhotoViewerMode mode,
  bool isPlayStartupSound) {
  applet::LibraryAppletHandle handle = {};
  const PhotoViewerArgument argument = {mode};
  StartPhotoViewer(&handle, argument, isPlayStartupSound);
  applet::CloseLibraryApplet(handle);
}

}

Result SaveScreenshot(const void* pImageData, size_t imageDataSize,
  ImageSize imageSize, AlbumReportOption reportOption) {
  CheckImageData(pImageData, imageDataSize, imageSize);
  os::SdkRecursiveMutexType& mutex = g_LibraryState.GetLibraryMutex();
  mutex.Lock();
  g_LibraryState.EnsureAlbumAvailable();
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    ([&]() -> Result {
      capsrv::ApplicationData data;
      memset(&data, 0, sizeof(data));
      return SaveScreenshotImpl(pImageData, imageDataSize, imageSize,
        static_cast<ImageOrientation>(0), reportOption, data);
    }()),
    ", image_data_size: %zu, width: %d, height: %d, "
    "album_report_option: 0x%X", imageDataSize, GetImageWidth(imageSize),
    GetImageHeight(imageSize), reportOption);
  mutex.Unlock();
  return result;
}

Result SaveScreenshot(const void* pImageData, size_t imageDataSize,
  ImageSize imageSize, ImageOrientation orientation,
  AlbumReportOption reportOption) {
  CheckImageData(pImageData, imageDataSize, imageSize);
  os::SdkRecursiveMutexType& mutex = g_LibraryState.GetLibraryMutex();
  mutex.Lock();
  g_LibraryState.EnsureAlbumAvailable();
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    ([&]() -> Result {
      capsrv::ApplicationData data;
      memset(&data, 0, sizeof(data));
      return SaveScreenshotImpl(pImageData, imageDataSize, imageSize,
        orientation, reportOption, data);
    }()),
    ", image_data_size: %zu, width: %d, height: %d, image_orientation: %d, "
    "album_report_option: 0x%X", imageDataSize, GetImageWidth(imageSize),
    GetImageHeight(imageSize), orientation, reportOption);
  mutex.Unlock();
  return result;
}

Result SaveCurrentScreenshot(AlbumReportOption reportOption) {
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    am::service::GetSelfControllerObject()->SaveCurrentScreenShot(
      reportOption),
    ", album_report_option: 0x%X", reportOption);
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  return result;
}

Result SaveScreenshotWithUserData(const void* pImageData,
  size_t imageDataSize, ImageSize imageSize, ImageOrientation orientation,
  AlbumReportOption reportOption, const void* pUserData,
  size_t userDataSize) {
  CheckImageData(pImageData, imageDataSize, imageSize);
  os::SdkRecursiveMutexType& mutex = g_LibraryState.GetLibraryMutex();
  mutex.Lock();
  g_LibraryState.EnsureAlbumAvailable();
  capsrv::ApplicationData data;
  memset(data.data, 0, sizeof(data.data));
  memcpy(data.data, pUserData, userDataSize);
  data.size = static_cast<uint32_t>(userDataSize);
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG_WITH_NAME(result, "SaveScreenshot",
    SaveScreenshotImpl(pImageData, imageDataSize, imageSize, orientation,
      reportOption, data),
    ", image_data_size: %zu, width: %d, height: %d, image_orientation: %d, "
    "album_report_option: 0x%X", imageDataSize, GetImageWidth(imageSize),
    GetImageHeight(imageSize), orientation, reportOption);
  mutex.Unlock();
  return result;
}

Result SaveScreenshot(const void* pImageData, size_t imageDataSize,
  ImageSize imageSize, ImageOrientation orientation,
  AlbumReportOption reportOption, const account::Uid* pUids, int uidCount) {
  CheckImageData(pImageData, imageDataSize, imageSize);
  os::SdkRecursiveMutexType& mutex = g_LibraryState.GetLibraryMutex();
  mutex.Lock();
  g_LibraryState.EnsureAlbumAvailable();
  capsrv::ApplicationAlbumEntry entry;
  capsrv::ScreenShotAttribute attribute;
  attribute.SetDefault();
  attribute.size = imageSize;
  attribute.orientation = ConvertImageOrientation(orientation);
  capsrv::UserIdList userIds;
  memcpy(userIds.uids, pUids, sizeof(account::Uid) * uidCount);
  userIds.count = static_cast<uint8_t>(uidCount);
  Result result;
  NN_ALBUM_DETAIL_ACCESS_LOG(result,
    ConvertCapsrvResult(capsrv::SaveScreenShotForApplication(&entry,
      pImageData, imageDataSize, attribute, userIds, reportOption & 3)),
    ", image_data_size: %zu, width: %d, height: %d, image_orientation: %d, "
    "album_report_option: 0x%X, uid_count: %d", imageDataSize,
    GetImageWidth(imageSize), GetImageHeight(imageSize), orientation,
    reportOption, uidCount);
  mutex.Unlock();
  return result;
}

Result DeleteAlbumFileForDebug(const AlbumFileEntry& entry) {
  g_LibraryState.EnsureAlbumAvailable();
  const capsrv::ApplicationAlbumEntry capsrvEntry =
    ConvertAlbumEntry::ConvertToCapsrv(entry);
  if (capsrv::DeleteAlbumFileForApplicationDebug(capsrvEntry).IsFailure()) {
    return ResultAlbumInvalidFileData;
  }
  return Result{0};
}

void ShowAlbumFiles() {
  ShowPhotoViewer(PhotoViewerMode_ShowAlbumFiles, false);
}

void ShowAllAlbumFiles() {
  ShowPhotoViewer(PhotoViewerMode_ShowAllAlbumFiles, false);
}

void ShowAllAlbumFilesForHomeMenu() {
  ShowPhotoViewer(PhotoViewerMode_ShowAllAlbumFilesForHomeMenu, true);
}

}
