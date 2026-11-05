#include <mutex>

#include "nn/applet/applet_types.hpp"
#include "nn/capsrv/capsrv_application_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::capsrv {

// The services identify files by the application entry followed by its
// capture time and a reserved word.
struct ApplicationAlbumFileEntry {
  ApplicationAlbumEntry entry;
  AlbumFileDateTime dateTime;
  uint64_t reserved;
};

static_assert(sizeof(ApplicationAlbumFileEntry) == 0x30);

class IAlbumAccessorApplicationService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual Result DeleteAlbumContentsFile(
    const ApplicationAlbumFileEntry& entry, uint8_t contents,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAlbumContentsFileSize(sf::Out<uint64_t> pOutSize,
    const ApplicationAlbumFileEntry& entry,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result DeleteAlbumFileDebug(const ApplicationAlbumFileEntry& entry,
    applet::AppletResourceUserId aruid) = 0;
  virtual void Reserved9() = 0;
  virtual void Reserved10() = 0;
  virtual Result PrecheckToCreateContents(uint8_t contents, uint64_t size,
    applet::AppletResourceUserId aruid) = 0;
  virtual void Reserved12() = 0;
  virtual void Reserved13() = 0;
  virtual void Reserved14() = 0;
  virtual void Reserved15() = 0;
  virtual void Reserved16() = 0;
  virtual Result GetAlbumContentsFileList(sf::Out<int64_t> pOutCount,
    const sf::OutArray<ApplicationAlbumEntry>& outEntries,
    AlbumFileContentsFlag contents, AlbumFileDateTime begin,
    AlbumFileDateTime end, applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAlbumContentsFileListEx1(sf::Out<int64_t> pOutCount,
    const sf::OutArray<ApplicationAlbumEntry>& outEntries,
    AlbumFileContentsFlag contents, const account::Uid& uid,
    AlbumFileDateTime begin, AlbumFileDateTime end,
    applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAllAlbumContentsFileList(sf::Out<int64_t> pOutCount,
    const sf::OutArray<ApplicationAlbumEntry>& outEntries,
    AlbumFileContentsFlag contents, AlbumFileDateTime begin,
    AlbumFileDateTime end, applet::AppletResourceUserId aruid) = 0;
  virtual Result GetAlbumContentsFileList2(sf::Out<int64_t> pOutCount,
    const sf::OutArray<ApplicationAlbumEntry>& outEntries,
    AlbumFileContentsFlag contents, AlbumFileDateTime begin,
    AlbumFileDateTime end, applet::AppletResourceUserId aruid) = 0;
};

class IAlbumMovieReadStreamService : public sf::IServiceObject {
 public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result CloseAlbumMovieReadStream(
    AlbumMovieReadStreamHandle handle) = 0;
  virtual Result GetAlbumMovieReadStreamDataSize(sf::Out<uint64_t> pOutSize,
    AlbumMovieReadStreamHandle handle) = 0;
  virtual Result ReadDataFromAlbumMovieReadStream(sf::Out<uint64_t> pOutSize,
    const sf::OutBuffer& outBuffer, AlbumMovieReadStreamHandle handle,
    int64_t offset) = 0;
  virtual Result GetAlbumMovieReadStreamBrokenReason(
    AlbumMovieReadStreamHandle handle) = 0;
};

uint64_t GetShimLibraryVersion();
Result PrecheckToCreateContentsForApplication(uint8_t contents,
  uint64_t size);

namespace detail {

extern uint64_t g_ShimLibraryVersion;
extern sf::SharedPointer<IAlbumAccessorApplicationService>
  g_AlbumAccessorService;
extern sf::SharedPointer<IAlbumMovieReadStreamService>
  g_AlbumMovieReadStreamService;
extern os::SdkMutex g_AlbumMovieReadStreamServiceMutex;

[[gnu::noinline]] Result GetAlbumMovieReadStreamService(
  sf::SharedPointer<IAlbumMovieReadStreamService>* pOutService);

}

namespace {

constexpr Result ResultNotInitialized = {0xcce};
constexpr uint32_t ResultAlbumFileNotFound = 0x7fece;

ApplicationAlbumFileEntry ToFileEntry(const ApplicationAlbumEntry& entry) {
  return {entry, entry.time, 0};
}

}

uint64_t GetShimLibraryVersion() {
  return detail::g_ShimLibraryVersion;
}

void SetShimLibraryVersionForDebug(uint64_t version) {
  detail::g_ShimLibraryVersion = version;
}

Result GetAlbumContentsFileListForApplication(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  AlbumFileDateTime begin, AlbumFileDateTime end) {
  int64_t outCount = 0;
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetAlbumContentsFileList(
    sf::Out<int64_t>(&outCount),
    sf::OutArray<ApplicationAlbumEntry>(pEntries, count), contents, begin,
    end, applet::GetAppletResourceUserId()));
  service.Reset();
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result GetAlbumContentsFileListForApplication2(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  AlbumFileDateTime begin, AlbumFileDateTime end) {
  int64_t outCount = 0;
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetAlbumContentsFileList2(
    sf::Out<int64_t>(&outCount),
    sf::OutArray<ApplicationAlbumEntry>(pEntries, count), contents, begin,
    end, applet::GetAppletResourceUserId()));
  service.Reset();
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result GetAlbumContentsFileListForApplicationEx1(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  const account::Uid& uid, AlbumFileDateTime begin, AlbumFileDateTime end) {
  int64_t outCount = 0;
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetAlbumContentsFileListEx1(
    sf::Out<int64_t>(&outCount),
    sf::OutArray<ApplicationAlbumEntry>(pEntries, count), contents, uid,
    begin, end, applet::GetAppletResourceUserId()));
  service.Reset();
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result GetAllAlbumContentsFileListForApplication(int* pOutCount,
  ApplicationAlbumEntry* pEntries, int count, AlbumFileContentsFlag contents,
  AlbumFileDateTime begin, AlbumFileDateTime end) {
  int64_t outCount = 0;
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetAllAlbumContentsFileList(
    sf::Out<int64_t>(&outCount),
    sf::OutArray<ApplicationAlbumEntry>(pEntries, count), contents, begin,
    end, applet::GetAppletResourceUserId()));
  service.Reset();
  *pOutCount = static_cast<int>(outCount);
  return Result();
}

Result DeleteAlbumContentsFileForApplication(
  const ApplicationAlbumEntry& entry, uint8_t contents) {
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  return service->DeleteAlbumContentsFile(ToFileEntry(entry), contents,
    applet::GetAppletResourceUserId());
}

Result DeleteAlbumFileForApplicationDebug(const ApplicationAlbumEntry& entry) {
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  const Result result = service->DeleteAlbumFileDebug(ToFileEntry(entry),
    applet::GetAppletResourceUserId());
  if (result.IsFailure() &&
    result.GetInnerValueForDebug() == ResultAlbumFileNotFound) {
    diag::detail::AbortImpl(&result);
  }

  return result;
}

Result GetAlbumContentsFileSizeForApplication(size_t* pOutSize,
  const ApplicationAlbumEntry& entry) {
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  uint64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetAlbumContentsFileSize(
    sf::Out<uint64_t>(&size), ToFileEntry(entry),
    applet::GetAppletResourceUserId()));
  service.Reset();
  *pOutSize = size;
  return Result();
}

Result PrecheckToCreateContentsForApplication(uint8_t contents,
  uint64_t size) {
  sf::SharedPointer<IAlbumAccessorApplicationService> service =
    detail::g_AlbumAccessorService;
  return service->PrecheckToCreateContents(contents, size,
    applet::GetAppletResourceUserId());
}

Result detail::GetAlbumMovieReadStreamService(
  sf::SharedPointer<IAlbumMovieReadStreamService>* pOutService) {
  std::lock_guard<os::SdkMutex> lock(g_AlbumMovieReadStreamServiceMutex);
  if (!g_AlbumMovieReadStreamService) {
    return ResultNotInitialized;
  }

  *pOutService = g_AlbumMovieReadStreamService;
  return Result();
}

void CloseAlbumMovieReadStreamForApplication(
  AlbumMovieReadStreamHandle handle) {
  Result result;
  {
    sf::SharedPointer<IAlbumMovieReadStreamService> service;
    result = detail::GetAlbumMovieReadStreamService(&service);
    if (result.IsSuccess()) {
      result = service->CloseAlbumMovieReadStream(handle);
    }
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
}

Result GetAlbumMovieReadStreamDataSizeForApplication(size_t* pOutSize,
  AlbumMovieReadStreamHandle handle) {
  sf::SharedPointer<IAlbumMovieReadStreamService> service;
  NN_RESULT_DO(detail::GetAlbumMovieReadStreamService(&service));
  uint64_t size = 0;
  NN_RESULT_DO(service->GetAlbumMovieReadStreamDataSize(
    sf::Out<uint64_t>(&size), handle));
  *pOutSize = size;
  return Result();
}

Result ReadDataFromAlbumMovieReadStreamForApplication(size_t* pOutSize,
  void* pBuffer, size_t size, AlbumMovieReadStreamHandle handle,
  int64_t offset) {
  sf::SharedPointer<IAlbumMovieReadStreamService> service;
  NN_RESULT_DO(detail::GetAlbumMovieReadStreamService(&service));
  uint64_t readSize = 0;
  NN_RESULT_DO(service->ReadDataFromAlbumMovieReadStream(
    sf::Out<uint64_t>(&readSize), sf::OutBuffer(pBuffer, size), handle,
    offset));
  *pOutSize = readSize;
  return Result();
}

Result GetAlbumMovieReadStreamBrokenReasonForApplication(
  AlbumMovieReadStreamHandle handle) {
  sf::SharedPointer<IAlbumMovieReadStreamService> service;
  NN_RESULT_DO(detail::GetAlbumMovieReadStreamService(&service));
  return service->GetAlbumMovieReadStreamBrokenReason(handle);
}

}
