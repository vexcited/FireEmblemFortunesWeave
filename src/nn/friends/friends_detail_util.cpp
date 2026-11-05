#include "nn/result.hpp"

namespace nn::nifm {

struct ClientId {
  uint32_t value;
};

ClientId GetClientId();
bool IsAnyInternetRequestAccepted(ClientId clientId);

}

namespace nn::friends::detail {

namespace {

const Result ResultInternetRequestNotAccepted = {0xc79};

}

// Read by CheckUserStatus, which is not reconstructed yet.
[[gnu::visibility("hidden")]] bool g_IsCheckUserStatusEnabled = true;

void EnableCheckUserStatus(bool isEnabled) {
  g_IsCheckUserStatusEnabled = isEnabled;
}

Result CheckInternetRequestAccepted() {
  if (!nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return ResultInternetRequestNotAccepted;
  }
  return Result();
}

}
