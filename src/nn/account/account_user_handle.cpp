#include "nn/account/account_cached_nintendo_account_info.hpp"
#include "nn/account/account_network_service_license_info.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

namespace detail {

Result CheckInternetAvailability();

}

Result GetUserId(Uid* pOutUid, const UserHandle& handle);
Result EnsureNetworkServiceAccountAvailable(const UserHandle& handle);
Result IsNetworkServiceAccountAvailable(bool* pOutIsAvailable,
  const UserHandle& handle);
Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId,
  const UserHandle& handle);
Result EnsureNetworkServiceAccountIdTokenCacheAsync(AsyncContext* pOutContext,
  const UserHandle& handle);
Result LoadNetworkServiceAccountIdTokenCache(size_t* pOutSize, char* buffer,
  size_t size, const UserHandle& handle);
Result LoadCachedNintendoAccountInfo(CachedNintendoAccountInfo* pOutInfo,
  const UserHandle& handle, void* buffer, size_t size);

namespace {

const int UiMode_EnsureNetworkServiceAccountAvailable = 2;

bool IsResultNetworkServiceAccountUnavailable(Result result) {
  const uint32_t module = result.value & 0x1ff;
  const uint32_t description = (result.value >> 9) & 0x1fff;
  return module == 124 && description >= 200 && description < 270;
}

}

Result EnsureNetworkServiceAccountAvailable(const UserHandle& handle) {
  const Result result = handle.pManager->CheckAvailability();
  if (IsResultNetworkServiceAccountUnavailable(result)) {
    Uid uid = {};
    NN_RESULT_DO(GetUserId(&uid, handle));
    UiSettings settings = {};
    settings.mode = UiMode_EnsureNetworkServiceAccountAvailable;
    settings.uid = uid;
    return detail::StartPselApplet(settings, false);
  }
  return result;
}

Result IsNetworkServiceAccountAvailable(bool* pOutIsAvailable,
  const UserHandle& handle) {
  const Result result = handle.pManager->CheckAvailability();
  if (result.IsSuccess() || IsResultNetworkServiceAccountUnavailable(result)) {
    *pOutIsAvailable = result.IsSuccess();
    return Result{0};
  }
  return result;
}

Result GetNetworkServiceAccountId(NetworkServiceAccountId* pOutId,
  const UserHandle& handle) {
  return handle.pManager->GetAccountId(
    sf::Out<NetworkServiceAccountId>(pOutId));
}

Result EnsureNetworkServiceAccountIdTokenCacheAsync(AsyncContext* pOutContext,
  const UserHandle& handle) {
  NN_RESULT_DO(detail::CheckInternetAvailability());
  sf::SharedPointer<detail::IAsyncContext> context;
  NN_RESULT_DO(handle.pManager->EnsureIdTokenCacheAsync(
    sf::Out<sf::SharedPointer<detail::IAsyncContext>>(&context)));
  Uid uid = {};
  NN_RESULT_DO(GetUserId(&uid, handle));
  *pOutContext = AsyncContext(context.Detach(), uid);
  return Result{0};
}

Result LoadNetworkServiceAccountIdTokenCache(size_t* pOutSize, char* buffer,
  size_t size, const UserHandle& handle) {
  uint32_t tokenSize = 0;
  NN_RESULT_DO(handle.pManager->LoadIdTokenCache(
    sf::Out<uint32_t>(&tokenSize), sf::OutBuffer(buffer, size)));
  *pOutSize = tokenSize;
  return Result{0};
}

Result LoadCachedNintendoAccountInfo(CachedNintendoAccountInfo* pOutInfo,
  const UserHandle& handle, void* buffer, size_t size) {
  baas::IManagerForApplication* pManager = handle.pManager;
  NN_RESULT_DO(pManager->CheckAvailability());
  NintendoAccountId id = {};
  return pManager->GetNintendoAccountUserResourceCacheForApplication(
    sf::Out<NintendoAccountId>(&id),
    sf::Out<CachedNintendoAccountInfo>(pOutInfo),
    sf::OutBuffer(buffer, size));
}

}
