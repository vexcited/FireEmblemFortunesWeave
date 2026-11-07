#include <stddef.h>
#include <stdint.h>

#include "nn/applet/applet_api.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_controller_support.hpp"
#include "nn/la/la_common_arguments.hpp"

namespace nn::la {

void PushToInChannel(applet::LibraryAppletHandle handle, const void* buffer,
  size_t size);
Result StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity);
void PopFromOutChannel(applet::LibraryAppletHandle handle, void* buffer,
  size_t size, size_t* pOutSize);

}

namespace nn::hid::detail {

namespace {

constexpr applet::AppletId AppletId_Controller =
  static_cast<applet::AppletId>(0x100000c);
constexpr applet::LibraryAppletMode LibraryAppletMode_AllForeground =
  static_cast<applet::LibraryAppletMode>(0);
constexpr uint32_t CommonArgumentsVersion = 9;

constexpr Result ResultControllerFirmwareUpdateFailed = {0x1902ca};

struct ControllerSupportResultInternal {
  uint8_t reserved[8];
  int32_t result;
};

[[gnu::always_inline]] inline applet::LibraryAppletHandle
PrepareControllerApplet(
  const system::ControllerSupportArgPrivate& argPrivate) {
  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    AppletId_Controller, LibraryAppletMode_AllForeground));
  {
    la::CommonArgumentsWriter writer(CommonArgumentsVersion);
    writer.SetPlayStartupSound(argPrivate.isPlayStartupSound &&
      argPrivate.isSystem);
    writer.PushToInChannel(handle);
  }
  la::PushToInChannel(handle, &argPrivate, sizeof(argPrivate));
  return handle;
}

}

Result ShowControllerSupportCore(ControllerSupportResultInfo* pOutInfo,
  const ControllerSupportArg& arg,
  const system::ControllerSupportArgPrivate& argPrivate) {
  NN_ABORT_UNLESS(argPrivate.mode !=
    system::ControllerSupportMode_ShowControllerFirmwareUpdate);
  *pOutInfo = ControllerSupportResultInfo{};
  const applet::LibraryAppletHandle handle =
    PrepareControllerApplet(argPrivate);
  Result result = ResultControllerSupportCanceled;
  la::PushToInChannel(handle, &arg, sizeof(arg));
  if (la::StartLibraryApplet(handle, false).IsSuccess()) {
    ControllerSupportResultInfoInternal info = {};
    la::PopFromOutChannel(handle, &info, sizeof(info), nullptr);
    *pOutInfo = info.info;
    if (info.result == 0) {
      result = Result{};
    }
    else if (info.result == 2) {
      result = ResultControllerSupportNotSupportedNpadStyle;
    }
  }
  applet::CloseLibraryApplet(handle);
  return result;
}

Result ShowControllerFirmwareUpdateCore(const ControllerFirmwareUpdateArg& arg,
  const system::ControllerSupportArgPrivate& argPrivate) {
  NN_ABORT_UNLESS(argPrivate.mode ==
    system::ControllerSupportMode_ShowControllerFirmwareUpdate);
  const applet::LibraryAppletHandle handle =
    PrepareControllerApplet(argPrivate);
  la::PushToInChannel(handle, &arg, sizeof(arg));
  Result result = ResultControllerFirmwareUpdateFailed;
  if (la::StartLibraryApplet(handle, false).IsSuccess()) {
    ControllerSupportResultInternal info = {};
    la::PopFromOutChannel(handle, &info, sizeof(info), nullptr);
    if (info.result == 0) {
      result = Result{};
    }
  }
  applet::CloseLibraryApplet(handle);
  return result;
}

Result ShowControllerKeyRemappingCore(
  const system::ControllerKeyRemappingArg& arg,
  const system::ControllerSupportArgPrivate& argPrivate) {
  NN_ABORT_UNLESS(argPrivate.mode ==
    system::ControllerSupportMode_ShowControllerKeyRemapping);
  const applet::LibraryAppletHandle handle =
    PrepareControllerApplet(argPrivate);
  la::PushToInChannel(handle, &arg, sizeof(arg));
  Result result = ResultControllerSupportCanceled;
  if (la::StartLibraryApplet(handle, false).IsSuccess()) {
    ControllerSupportResultInternal info = {};
    la::PopFromOutChannel(handle, &info, sizeof(info), nullptr);
    if (info.result == 0) {
      result = Result{};
    }
  }
  applet::CloseLibraryApplet(handle);
  return result;
}

}
