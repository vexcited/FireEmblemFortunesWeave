#include "nn/applet/applet_api.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_controller_support.hpp"

namespace nn::hid::system {

namespace {

constexpr int32_t ResultValueNotSupportedNpadStyle = 2;

[[gnu::always_inline]] ControllerSupportArgPrivate MakeArgPrivate(
  ControllerSupportMode mode) {
  ControllerSupportArgPrivate argPrivate = {};
  argPrivate.argPrivateSize = sizeof(argPrivate);
  argPrivate.argSize = sizeof(ControllerSupportArg);
  argPrivate.isSystem = true;
  argPrivate.mode = mode;
  argPrivate.styleSet = GetSupportedNpadStyleSet();
  argPrivate.holdType = GetNpadJoyHoldType();
  return argPrivate;
}

}

// The system applet picks every style itself.
Result ShowControllerSupportForSystem(const ControllerSupportArg& arg,
  bool isPlayStartupSound) {
  ControllerSupportResultInfo info = {};
  ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(ControllerSupportMode_ShowControllerSupport);
  argPrivate.isPlayStartupSound = isPlayStartupSound;
  argPrivate.styleSet = {};
  return detail::ShowControllerSupportCore(&info, arg, argPrivate);
}

Result ShowControllerSupportForSystem(ControllerSupportResultInfo* pOutInfo,
  const ControllerSupportArg& arg, bool isPlayStartupSound) {
  ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(ControllerSupportMode_ShowControllerSupport);
  argPrivate.isPlayStartupSound = isPlayStartupSound;
  argPrivate.styleSet = {};
  return detail::ShowControllerSupportCore(pOutInfo, arg, argPrivate);
}

Result ShowControllerSupportForSystemWithStyleSet(
  ControllerSupportResultInfo* pOutInfo, const ControllerSupportArg& arg,
  NpadStyleSet styleSet, NpadJoyHoldType holdType,
  ControllerSupportCaller caller) {
  ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(ControllerSupportMode_ShowControllerSupport);
  argPrivate.caller = caller;
  argPrivate.styleSet = styleSet;
  argPrivate.holdType = holdType;
  return detail::ShowControllerSupportCore(pOutInfo, arg, argPrivate);
}

Result ShowControllerFirmwareUpdateForSystem(
  const ControllerFirmwareUpdateArg& arg, ControllerSupportCaller caller) {
  ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(ControllerSupportMode_ShowControllerFirmwareUpdate);
  argPrivate.caller = caller;
  return detail::ShowControllerFirmwareUpdateCore(arg, argPrivate);
}

Result ShowControllerKeyRemappingForSystem(
  const ControllerKeyRemappingArg& arg, ControllerSupportCaller caller) {
  ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(ControllerSupportMode_ShowControllerKeyRemapping);
  argPrivate.caller = caller;
  return detail::ShowControllerKeyRemappingCore(arg, argPrivate);
}

Result GetResultFromContextStack(ControllerSupportResultInfo* pOutInfo,
  applet::StorageHandle storage) {
  detail::ControllerSupportResultInfoInternal info = {};
  NN_RESULT_DO(applet::ReadFromStorage(storage, 0, &info, sizeof(info)));
  if (info.result == ResultValueNotSupportedNpadStyle) {
    return detail::ResultControllerSupportNotSupportedNpadStyle;
  }
  if (info.result != 0) {
    return detail::ResultControllerSupportCanceled;
  }
  *pOutInfo = info.info;
  return Result{0};
}

}
