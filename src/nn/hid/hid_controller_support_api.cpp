#include "nn/hid/hid_controller_support.hpp"

namespace nn::hid {

namespace {

constexpr int NpadIdMax = 7;

[[gnu::always_inline]] system::ControllerSupportArgPrivate MakeArgPrivate(
  system::ControllerSupportMode mode) {
  system::ControllerSupportArgPrivate argPrivate = {};
  argPrivate.argPrivateSize = sizeof(argPrivate);
  argPrivate.argSize = sizeof(ControllerSupportArg);
  argPrivate.mode = mode;
  argPrivate.styleSet = GetSupportedNpadStyleSet();
  argPrivate.holdType = GetNpadJoyHoldType();
  return argPrivate;
}

}

Result ShowControllerSupport(const ControllerSupportArg& arg) {
  ControllerSupportResultInfo info = {};
  const system::ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(system::ControllerSupportMode_ShowControllerSupport);
  return detail::ShowControllerSupportCore(&info, arg, argPrivate);
}

Result ShowControllerSupport(ControllerSupportResultInfo* pOutInfo,
  const ControllerSupportArg& arg) {
  const system::ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(system::ControllerSupportMode_ShowControllerSupport);
  return detail::ShowControllerSupportCore(pOutInfo, arg, argPrivate);
}

// Texts are cut to the slot size and always terminated.
void SetExplainText(ControllerSupportArg* pArg, const char* pText,
  const uint32_t& npadId) {
  if (npadId > NpadIdMax) {
    return;
  }
  char* pOut = pArg->explainText[npadId];
  int i = 0;
  for (; i < ExplainTextSize - 1; i++) {
    if (pText[i] == '\0') {
      break;
    }
    pOut[i] = pText[i];
  }
  pOut[i] = '\0';
}

Result ShowControllerStrapGuide() {
  const system::ControllerSupportArgPrivate argPrivate =
    MakeArgPrivate(system::ControllerSupportMode_ShowControllerStrapGuide);
  ControllerSupportResultInfo info = {};
  ControllerSupportArg arg = {};
  arg.SetDefault();
  return detail::ShowControllerSupportCore(&info, arg, argPrivate);
}

Result ShowControllerFirmwareUpdate(const ControllerFirmwareUpdateArg& arg) {
  const system::ControllerSupportArgPrivate argPrivate = MakeArgPrivate(
    system::ControllerSupportMode_ShowControllerFirmwareUpdate);
  return detail::ShowControllerFirmwareUpdateCore(arg, argPrivate);
}

}
