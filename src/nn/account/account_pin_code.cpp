#include <string.h>

#include "nn/account/account_service.hpp"
#include "nn/diag/diag_abort.hpp"

namespace nn::account {

void SetPinCode(const Uid& uid, const char* pinCode);
size_t GetPinCodeLength(const Uid& uid);
void SetPinCodeErrorCount(const Uid& uid, size_t count);
void SetStartPenaltyTime(const time::ClockSnapshot& snapshot, const Uid& uid);
size_t GetPinCodeParity(bool* pOutParities, size_t count, const Uid& uid);
bool IsPinCodeVerificationForbidden(const Uid& uid);

void SetPinCode(const Uid& uid, const char* pinCode) {
  const char* pPinCode = pinCode != nullptr ? pinCode : "";
  const size_t length = strlen(pPinCode);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountServiceObjectForAdministrator()->SetPinCode(uid,
      sf::InBuffer(pPinCode, length + 1)));
}

size_t GetPinCodeLength(const Uid& uid) {
  int32_t length = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountServiceObjectForSystemService()->GetPinCodeLength(
      sf::Out<int32_t>(&length), uid));
  return length;
}

void SetPinCodeErrorCount(const Uid& uid, size_t count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountServiceObjectForAdministrator()->SetPinCodeErrorCount(
      uid, count));
}

void SetStartPenaltyTime(const time::ClockSnapshot& snapshot, const Uid& uid) {
  // The snapshot is copied for the IPC call before the service is fetched.
  time::ClockSnapshot penaltySnapshot = snapshot;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountServiceObjectForAdministrator()->SetStartPenaltyTime(
      penaltySnapshot, uid));
}

size_t GetPinCodeParity(bool* pOutParities, size_t count, const Uid& uid) {
  int32_t parityCount = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountServiceObjectForSystemService()->GetPinCodeParity(
      sf::Out<int32_t>(&parityCount),
      sf::OutArray<bool>(pOutParities, count), uid));
  return parityCount;
}

bool IsPinCodeVerificationForbidden(const Uid& uid) {
  bool isForbidden = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetAccountServiceObjectForSystemService()
      ->IsPinCodeVerificationForbidden(sf::Out<bool>(&isForbidden), uid));
  return isForbidden;
}

}
