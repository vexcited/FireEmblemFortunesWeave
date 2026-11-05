#include <stdint.h>
#include <string.h>

#include "nn/friends/detail/friends_my_page.hpp"
#include "nn/friends/detail/friends_shim_library_global.hpp"
#include "nn/friends/friends_async_context.hpp"
#include "nn/friends/friends_types.hpp"

namespace nn::friends {

namespace detail {

struct NetworkServiceAccountIdList {
  account::NetworkServiceAccountId value[100];
};

// The async runner and the session functions are template code of this unit.
using UidFunction = Result (*)(ipc::IFriendService** pSession,
  const account::Uid& uid);

[[gnu::visibility("hidden")]] Result EnsureBlockedUserListAvailableFunction(
  ipc::IFriendService** pSession, const account::Uid& uid);
[[gnu::visibility("hidden")]] Result EnsureFriendListAvailableFunction(
  ipc::IFriendService** pSession, const account::Uid& uid);
[[gnu::visibility("hidden")]] Result RunAsync(AsyncContext* pContext,
  const char* name, UidFunction function, account::Uid uid);

using SendFriendRequestFunctionType = Result (*)(
  ipc::IFriendService** pSession, const account::Uid& uid,
  account::NetworkServiceAccountId accountId, const InAppScreenName& name,
  const InAppScreenName& myName);

[[gnu::visibility("hidden")]] Result SendFriendRequestFunction(
  ipc::IFriendService** pSession, const account::Uid& uid,
  account::NetworkServiceAccountId accountId, const InAppScreenName& name,
  const InAppScreenName& myName);
[[gnu::visibility("hidden")]] Result RunAsync(AsyncContext* pContext,
  const char* name, SendFriendRequestFunctionType function, account::Uid uid,
  account::NetworkServiceAccountId accountId, InAppScreenName inAppName,
  InAppScreenName myInAppName);

using GetProfileListFunctionType = Result (*)(ipc::IFriendService** pSession,
  Profile* pOutProfiles, int64_t count, const account::Uid& uid,
  const NetworkServiceAccountIdList& accountIds);

[[gnu::visibility("hidden")]] Result GetProfileListFunction(
  ipc::IFriendService** pSession, Profile* pOutProfiles, int64_t count,
  const account::Uid& uid, const NetworkServiceAccountIdList& accountIds);
[[gnu::visibility("hidden")]] Result RunAsync(AsyncContext* pContext,
  const char* name, GetProfileListFunctionType function,
  Profile* pOutProfiles, int64_t count, account::Uid uid,
  NetworkServiceAccountIdList accountIds);

}

[[gnu::noinline]] Result EnsureBlockedUserListAvailable(AsyncContext* pContext,
  const account::Uid& uid) {
  detail::ShimLibraryGlobal::GetInstance().Initialize();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return detail::RunAsync(pContext,
    "nn::friends::EnsureBlockedUserListAvailable",
    detail::EnsureBlockedUserListAvailableFunction, uid);
}

Result EnsureBlockedUserListAvailable(AsyncContext* pContext) {
  return EnsureBlockedUserListAvailable(pContext, detail::GetCurrentUser());
}

[[gnu::noinline]] Result EnsureFriendListAvailable(AsyncContext* pContext,
  const account::Uid& uid) {
  detail::ShimLibraryGlobal::GetInstance().Initialize();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return detail::RunAsync(pContext, "nn::friends::EnsureFriendListAvailable",
    detail::EnsureFriendListAvailableFunction, uid);
}

Result EnsureFriendListAvailable(AsyncContext* pContext) {
  return EnsureFriendListAvailable(pContext, detail::GetCurrentUser());
}

Result SendFriendRequest(AsyncContext* pContext, const account::Uid& uid,
  account::NetworkServiceAccountId accountId,
  const InAppScreenName& inAppName, const InAppScreenName& myInAppName) {
  detail::ShimLibraryGlobal::GetInstance().Initialize();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  return detail::RunAsync(pContext,
    "nn::friends::SendFriendRequestForApplication",
    detail::SendFriendRequestFunction, uid, accountId, inAppName,
    myInAppName);
}

[[gnu::noinline]] Result GetProfileList(AsyncContext* pContext,
  Profile* pOutProfiles, const account::Uid& uid,
  const account::NetworkServiceAccountId* pAccountIds, int count) {
  detail::ShimLibraryGlobal::GetInstance().Initialize();
  NN_RESULT_DO(detail::CheckUserStatus(uid));
  detail::NetworkServiceAccountIdList accountIds = {};
  memcpy(accountIds.value, pAccountIds,
    sizeof(account::NetworkServiceAccountId) * count);
  return detail::RunAsync(pContext, "nn::friends::GetProfileList",
    detail::GetProfileListFunction, pOutProfiles, count, uid, accountIds);
}

Result GetProfileList(AsyncContext* pContext, Profile* pOutProfiles,
  const account::NetworkServiceAccountId* pAccountIds, int count) {
  return GetProfileList(pContext, pOutProfiles, detail::GetCurrentUser(),
    pAccountIds, count);
}

}
