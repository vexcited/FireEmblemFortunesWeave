#include <atomic>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/managers.hpp"
#include "nn/os/tls.hpp"

namespace nn::svc {

struct Handle;

}

namespace nn::sf {

uint64_t GetCurrentHipcClientIdOnServer();

namespace hipc {

bool IsHipcServiceRegistered(const char* pName);
Result TryConnectToHipcService(bool* pOutIsConnected, svc::Handle* pOutHandle,
  const char* pName);

namespace server {

struct ClientInfo {
  static ClientInfo NewClientInfo();

  uint64_t id;
};

void SetCurrentClientInfo(const ClientInfo& info);
ClientInfo GetCurrentClientInfo();

// The slot is allocated once a session manager handler is installed.
struct CurrentClientInfoSlot {
  bool isInitialized;
  os::TlsSlot slot;
};

CurrentClientInfoSlot g_CurrentClientInfoSlot;
std::atomic<uint64_t> g_NextClientId;

ClientInfo ClientInfo::NewClientInfo() {
  return {g_NextClientId.fetch_add(1)};
}

void SetCurrentClientInfo(const ClientInfo& info) {
  if (g_CurrentClientInfoSlot.isInitialized) {
    os::SetTlsValue(g_CurrentClientInfoSlot.slot, info.id);
  }
}

ClientInfo GetCurrentClientInfo() {
  if (!g_CurrentClientInfoSlot.isInitialized) {
    return {0};
  }
  return {os::GetTlsValue(g_CurrentClientInfoSlot.slot)};
}

}

// Not available to applications.
bool IsHipcServiceRegistered(const char*) {
  NN_ABORT_UNLESS(false);
  __builtin_unreachable();
}

Result TryConnectToHipcService(bool*, svc::Handle*, const char*) {
  NN_ABORT_UNLESS(false);
  __builtin_unreachable();
}

}

void InitializeForHipcServerSessionManagerHandler() {
  if (hipc::server::g_CurrentClientInfoSlot.isInitialized) {
    return;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(os::SdkAllocateTlsSlot(
    &hipc::server::g_CurrentClientInfoSlot.slot, nullptr));
  hipc::server::g_CurrentClientInfoSlot.isInitialized = true;
}

uint64_t GetCurrentHipcClientIdOnServer() {
  if (!hipc::server::g_CurrentClientInfoSlot.isInitialized) {
    return 0;
  }
  return os::GetTlsValue(hipc::server::g_CurrentClientInfoSlot.slot);
}

}
