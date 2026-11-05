#include <string.h>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/friends/detail/friends_my_page.hpp"
#include "nn/la/la_common_arguments.hpp"

namespace nn::la {

void PushToInChannel(applet::LibraryAppletHandle handle, const void* buffer,
  size_t size);
Result StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity);
void PopFromOutChannel(applet::LibraryAppletHandle handle, void* buffer,
  size_t size, size_t* pOutSize);

}

namespace nn::friends::detail {

namespace {

const applet::AppletId AppletId_MyPage = applet::AppletId(0x100001a);
const Result ResultMyPageAppletStartFailed = {0x3c79};

template <typename Arg>
Result StartMyPageAppletImpl(const applet::LibraryAppletHandle& handle,
  const Arg& arg, bool isPlayStartupSound, uint32_t version) {
  la::CommonArgumentsWriter writer(version);
  writer.SetPlayStartupSound(isPlayStartupSound);
  writer.PushToInChannel(handle);
  la::PushToInChannel(handle, &arg, sizeof(arg));
  if (la::StartLibraryApplet(handle, false).IsFailure()) {
    return ResultMyPageAppletStartFailed;
  }
  return Result{};
}

template <typename Arg>
void SetDefaultAppletArgImpl(Arg* pOutArg, AppletMode mode,
  const account::Uid& uid) {
  memset(pOutArg, 0, sizeof(*pOutArg));
  pOutArg->mode = mode;
  pOutArg->uid = uid;
}

}

void CreateMyPageApplet(applet::LibraryAppletHandle* pOutHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(pOutHandle,
    AppletId_MyPage, applet::LibraryAppletMode(0)));
}

void CloseMyPageApplet(const applet::LibraryAppletHandle& handle) {
  applet::CloseLibraryApplet(handle);
}

Result StartMyPageApplet(const applet::LibraryAppletHandle& handle,
  const AppletArgVer1& arg, bool isPlayStartupSound) {
  return StartMyPageAppletImpl(handle, arg, isPlayStartupSound, 0x10000);
}

Result StartMyPageApplet(const applet::LibraryAppletHandle& handle,
  const AppletArgVer2& arg, bool isPlayStartupSound) {
  return StartMyPageAppletImpl(handle, arg, isPlayStartupSound, 0x20000);
}

Result GetMyPageResult(const applet::LibraryAppletHandle& handle) {
  Result result = {};
  la::PopFromOutChannel(handle, &result, sizeof(result), nullptr);
  return result;
}

void SetDefaultAppletArg(AppletArgVer1* pOutArg, AppletMode mode,
  const account::Uid& uid) {
  SetDefaultAppletArgImpl(pOutArg, mode, uid);
}

void SetDefaultAppletArg(AppletArgVer2* pOutArg, AppletMode mode,
  const account::Uid& uid) {
  SetDefaultAppletArgImpl(pOutArg, mode, uid);
}

}
