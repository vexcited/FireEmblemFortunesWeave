#include "nn/applet/applet_types.hpp"
#include "nn/capsrv/capsrv_application_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::capsrv {

namespace sf {

class IScreenShotApplicationService : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual void Reserved5() = 0;
  virtual void Reserved6() = 0;
  virtual Result SaveScreenShot(nn::sf::Out<ApplicationAlbumEntry> pOutEntry,
    const nn::sf::InBuffer& image, const ScreenShotAttribute& attribute,
    const ApplicationData& data, applet::AppletResourceUserId aruid,
    uint32_t reportOption) = 0;
  virtual Result SaveScreenShotWithUserIds(
    nn::sf::Out<ApplicationAlbumEntry> pOutEntry,
    const nn::sf::InBuffer& image, const ScreenShotAttribute& attribute,
    const UserIdList& userIds, applet::AppletResourceUserId aruid,
    uint32_t reportOption) = 0;
};

}

namespace detail {

// The service opened by the application initialization, shared by the
// screenshot calls.
struct ScreenShotServiceHolder {
  int initializeCount;
  nn::sf::SharedPointer<sf::IScreenShotApplicationService> service;
};

[[gnu::visibility("hidden")]] extern ScreenShotServiceHolder
  g_ScreenShotServiceHolder;

}

namespace {

constexpr Result ResultInvalidScreenShotSize = {0x11ace};

void CheckScreenShotSize(const ScreenShotAttribute& attribute) {
  if (static_cast<uint32_t>(attribute.size) >= 2) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(ResultInvalidScreenShotSize);
  }
}

[[gnu::noinline]] Result SaveScreenShotImpl(ApplicationAlbumEntry* pOutEntry,
  const void* pImageData, size_t imageDataSize,
  const ScreenShotAttribute& attribute, const ApplicationData& data,
  uint32_t reportOption) {
  CheckScreenShotSize(attribute);
  *pOutEntry = {};
  const nn::sf::SharedPointer<sf::IScreenShotApplicationService> service =
    detail::g_ScreenShotServiceHolder.service;
  ApplicationAlbumEntry entry = {};
  const nn::sf::InBuffer image(pImageData, imageDataSize);
  const Result result = service->SaveScreenShot(
    nn::sf::Out<ApplicationAlbumEntry>(&entry), image, attribute, data,
    applet::GetAppletResourceUserId(), reportOption);
  if (result.IsSuccess()) {
    *pOutEntry = entry;
  }
  return result;
}

}

Result SaveScreenShotForApplication(ApplicationAlbumEntry* pOutEntry,
  const void* pImageData, size_t imageDataSize, uint32_t size,
  uint32_t reportOption) {
  if (size >= 2) {
    nn::detail::UnexpectedDefaultImpl();
  }
  ScreenShotAttribute attribute;
  attribute.SetDefault();
  attribute.size = static_cast<int32_t>(size);
  attribute.unknown2c = size;
  ApplicationData data = {};
  return SaveScreenShotImpl(pOutEntry, pImageData, imageDataSize, attribute,
    data, reportOption);
}

Result SaveScreenShotForApplication(ApplicationAlbumEntry* pOutEntry,
  const void* pImageData, size_t imageDataSize,
  const ScreenShotAttribute& attribute, const ApplicationData& data,
  uint32_t reportOption) {
  return SaveScreenShotImpl(pOutEntry, pImageData, imageDataSize, attribute,
    data, reportOption);
}

Result SaveScreenShotForApplication(ApplicationAlbumEntry* pOutEntry,
  const void* pImageData, size_t imageDataSize,
  const ScreenShotAttribute& attribute, const UserIdList& userIds,
  uint32_t reportOption) {
  CheckScreenShotSize(attribute);
  *pOutEntry = {};
  const nn::sf::SharedPointer<sf::IScreenShotApplicationService> service =
    detail::g_ScreenShotServiceHolder.service;
  ApplicationAlbumEntry entry = {};
  const nn::sf::InBuffer image(pImageData, imageDataSize);
  const Result result = service->SaveScreenShotWithUserIds(
    nn::sf::Out<ApplicationAlbumEntry>(&entry), image, attribute, userIds,
    applet::GetAppletResourceUserId(), reportOption);
  if (result.IsSuccess()) {
    *pOutEntry = entry;
  }
  return result;
}

}
