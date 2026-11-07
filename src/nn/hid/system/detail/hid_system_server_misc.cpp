#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"

namespace nn::hid {

namespace utility {

Result GetAppletResourceUserIdOfCallerApplet(
  applet::AppletResourceUserId* pOutAruid);

}

namespace system {

namespace detail {

namespace {

constexpr uint32_t ResultNoCallerApplet = 0x7a83;

}

// Without a caller applet the styles of no applet are asked for.
Result GetSupportedNpadStyleSetOfCallerApplet(
  util::BitFlagSet<32, NpadStyleTag>* pOutStyleSet) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  applet::AppletResourceUserId aruid = {};
  const Result result =
    utility::GetAppletResourceUserIdOfCallerApplet(&aruid);
  if (result.IsFailure()) {
    if ((result.value & 0x3fffff) != ResultNoCallerApplet) {
      return result;
    }
    aruid = {};
  }
  return proxy->GetSupportedNpadStyleSetOfCallerApplet(pOutStyleSet, aruid);
}

// The original returns whatever the release left behind, so the definition
// is void under the declared name.
void PrepareHidsForNotificationWakeImpl(UniquePadId* pIds, size_t count) asm(
  "_ZN2nn3hid6system6detail30PrepareHidsForNotificationWakeEPNS1_11UniquePad"
  "IdEm");

void PrepareHidsForNotificationWakeImpl(UniquePadId* pIds, size_t count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  NN_ABORT_UNLESS_RESULT_SUCCESS(proxy->PrepareHidsForNotificationWake(
    sf::InArray<UniquePadId>(pIds, count)));
}

}

bool IsAnyWirelessControllerStreaming() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool isStreaming = false;
  const Result result = proxy->IsAnyWirelessControllerStreaming(&isStreaming);
  return result.IsSuccess() & isStreaming;
}

}

}
