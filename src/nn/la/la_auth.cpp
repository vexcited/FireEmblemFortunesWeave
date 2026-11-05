#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"

namespace nn::applet {

void PushToSystemGeneralChannel(StorageHandle storage);

}

namespace nn::la {

namespace auth {

struct ParentalAuthenticationArg {
  bool isTemporaryUnlockAllowed;
  uint8_t reserved[3];
};

struct ReturnArg {
  Result result;
};

namespace {

constexpr applet::AppletId AppletId_Auth =
  static_cast<applet::AppletId>(0x100000a);
constexpr uint32_t CommonArgumentsVersion = 3;
constexpr Result ResultCanceled = {0x690};

enum AuthenticationType : uint32_t {
  AuthenticationType_Show,
  AuthenticationType_Register,
  AuthenticationType_Change,
};

struct AuthenticationArg {
  uint32_t reserved;
  AuthenticationType type;
  ParentalAuthenticationArg parental;
};

Result ShowAuthenticationApplet(const AuthenticationArg& arg) {
  CommonArgumentsWriter writer(CommonArgumentsVersion);
  ReturnArg returnArg = {};
  size_t returnSize = 0;
  const Result result = StartLibraryAppletEasy(AppletId_Auth, writer, &arg,
    sizeof(arg), &returnArg, sizeof(returnArg), &returnSize, true);
  if (result.IsFailure()) {
    return result;
  }

  // An applet closed without answering counts as canceled.
  return returnSize == 0 ? ResultCanceled : returnArg.result;
}

}

Result ShowParentalAuthentication(bool isTemporaryUnlockAllowed) {
  AuthenticationArg arg = {};
  arg.type = AuthenticationType_Show;
  arg.parental.isTemporaryUnlockAllowed = isTemporaryUnlockAllowed;
  return ShowAuthenticationApplet(arg);
}

Result ShowParentalAuthentication(const ParentalAuthenticationArg& parental) {
  AuthenticationArg arg = {};
  arg.type = AuthenticationType_Show;
  arg.parental = parental;
  return ShowAuthenticationApplet(arg);
}

Result RegisterParentalPasscode() {
  AuthenticationArg arg = {};
  arg.type = AuthenticationType_Register;
  return ShowAuthenticationApplet(arg);
}

Result ChangeParentalPasscode() {
  AuthenticationArg arg = {};
  arg.type = AuthenticationType_Change;
  return ShowAuthenticationApplet(arg);
}

Result GetResultFromContextStack(ReturnArg* pOutArg,
  applet::StorageHandle storage) {
  return applet::ReadFromStorage(storage, 0, pOutArg, sizeof(*pOutArg));
}

}

namespace detail {

struct SystemGeneralChannelMessage {
  uint8_t data[16];
};

extern const SystemGeneralChannelMessage g_RequestHomeMenuMessage;
extern const SystemGeneralChannelMessage g_RequestJumpToSystemUpdateMessage;

}

namespace {

void PushSystemGeneralChannelMessage(
  const detail::SystemGeneralChannelMessage& message) {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, sizeof(message)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, &message, sizeof(message)));
  applet::PushToSystemGeneralChannel(storage);
}

}

void RequestHomeMenu() {
  PushSystemGeneralChannelMessage(detail::g_RequestHomeMenuMessage);
}

void RequestJumpToSystemUpdate() {
  PushSystemGeneralChannelMessage(detail::g_RequestJumpToSystemUpdateMessage);
}

}
