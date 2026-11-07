#include "nn/account/account_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/pctl/detail/pctl_service.hpp"
#include "nn/span.hpp"

namespace nn::pctl {

using detail::GetServiceObject;
using detail::GetServiceObjectForWatcher;

bool IsCameraPermissionRequesting(const account::Uid& uid) {
  bool isRequesting = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->
    IsCameraPermissionRequesting(sf::Out<bool>(&isRequesting), uid));
  return isRequesting;
}

void BeginSystemChat(const account::Uid& uid, const ConnectionId& connection,
  Span<const account::NetworkServiceAccountId> members) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->BeginSystemChat(uid,
    connection, sf::InArray<account::NetworkServiceAccountId>(members.data,
      members.size)));
}

void EndSystemChat(const account::Uid& uid, const ConnectionId& connection) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->EndSystemChat(uid, connection));
}

void UpdateSystemChatMemberList(const account::Uid& uid,
  const ConnectionId& connection,
  Span<const account::NetworkServiceAccountId> members) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObject()->UpdateSystemChatMemberList(
    uid, connection, sf::InArray<account::NetworkServiceAccountId>(
      members.data, members.size)));
}

void NotifyLocalCameraTurnOn(const account::Uid& uid,
  const ConnectionId& connection) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->NotifyLocalCameraTurnOn(uid, connection));
}

void NotifyRemoteCameraTurnOn(const account::Uid& uid,
  const ConnectionId& connection) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObject()->NotifyRemoteCameraTurnOn(uid, connection));
}

bool IsCameraPermissionGranted(const ConnectionId& connection) {
  bool isGranted = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObjectForWatcher()->
    IsCameraPermissionGranted(sf::Out<bool>(&isGranted), connection));
  return isGranted;
}

int GetVisibleRange(const ConnectionId& connection) {
  int32_t range = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObjectForWatcher()->GetVisibleRange(
    sf::Out<int32_t>(&range), connection));
  return range;
}

void DisableCameraPermissionForce(const ConnectionId& connection) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    GetServiceObjectForWatcher()->DisableCameraPermissionForce(connection));
}

uint64_t GetPairingAccountId() {
  uint64_t id = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetServiceObjectForWatcher()->
    GetPairingAccountId(sf::Out<uint64_t>(&id)));
  return id;
}

}
