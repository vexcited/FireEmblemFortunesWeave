#include "nn/account/account_network_service_account_manager.hpp"
#include "nn/account/account_network_service_license_info.hpp"
#include "nn/account/account_service.hpp"
#include "nn/account/detail/account_object_holder.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/nifm/nifm_client_id.hpp"

namespace nn::account::detail {

Uid GetUserId(const UserHandle& handle);

struct PselResult {
  uint64_t reason;
  Uid uid;
};

// Unit local helper that runs the user selection applet.
[[gnu::visibility("hidden")]] Result StartPselAppletImpl(PselResult* pOutResult,
  const UiSettings& settings, const void* pData, size_t dataSize,
  bool isOverlay);

namespace {

bool IsSameUser(const Uid& lhs, const Uid& rhs) {
  return lhs.value[0] == rhs.value[0] && lhs.value[1] == rhs.value[1];
}

}

util::optional<UserHandle> ClientUserHandleStore::s_Handles[8];

void ClientUserHandleStore::Clear() {
  for (util::optional<UserHandle>& handle : s_Handles) {
    handle.reset();
  }
}

void ClientUserHandleStore::Add(const UserHandle& handle) {
  for (util::optional<UserHandle>& entry : s_Handles) {
    if (!entry) {
      entry.emplace(handle);
      return;
    }
  }
}

void ClientUserHandleStore::Delete(const UserHandle& handle) {
  for (util::optional<UserHandle>& entry : s_Handles) {
    if (entry && IsSameUser(GetUserId(*entry), GetUserId(handle))) {
      entry.reset();
      return;
    }
  }
}

void ClientUserHandleStore::List(int* pOutCount, UserHandle* pOutHandles,
  int count) {
  static_cast<void>(count);
  int listed = 0;
  for (const util::optional<UserHandle>& entry : s_Handles) {
    if (entry) {
      pOutHandles[listed++] = *entry;
    }
  }
  *pOutCount = listed;
}

UserHandle MakeUserHandle(const Uid& uid,
  const baas::IManagerForApplication* pManager) {
  UserHandle handle;
  handle._data[0] = uid.value[0];
  handle._data[1] = uid.value[1];
  handle.pManager = const_cast<baas::IManagerForApplication*>(pManager);
  return handle;
}

Uid GetUserId(const UserHandle& handle) {
  return Uid{{handle._data[0], handle._data[1]}};
}

Result TrySelectUserWithoutInteraction(Uid* pOutUid,
  bool isNetworkServiceAccountRequired) {
  return GetAccountServiceObjectBase()->TrySelectUserWithoutInteraction(
    sf::Out<Uid>(pOutUid), isNetworkServiceAccountRequired, 0);
}

Result TrySelectUserWithoutInteraction(Uid* pOutUid,
  bool isNetworkServiceAccountRequired, uint32_t flags) {
  return GetAccountServiceObjectBase()->TrySelectUserWithoutInteraction(
    sf::Out<Uid>(pOutUid), isNetworkServiceAccountRequired, flags);
}

Result CheckInternetAvailability() {
  if (nifm::IsAnyInternetRequestAccepted(nifm::GetClientId())) {
    return Result{0};
  }
  return Result{0x767c};
}

Result StartPselApplet(const UiSettings& settings, bool isOverlay) {
  PselResult result = {};
  return StartPselAppletImpl(&result, settings, nullptr, 0, isOverlay);
}

Result StartPselApplet(const UiSettings& settings, const void* pData,
  size_t dataSize, bool isOverlay) {
  PselResult result = {};
  return StartPselAppletImpl(&result, settings, pData, dataSize, isOverlay);
}

Result ShowUserSelectorForDeviceMigrationUpload(Uid* pOutUid,
  const UiSettings& settings) {
  PselResult result = {};
  NN_RESULT_DO(StartPselAppletImpl(&result, settings, nullptr, 0, false));
  *pOutUid = result.uid;
  return Result{0};
}

}
