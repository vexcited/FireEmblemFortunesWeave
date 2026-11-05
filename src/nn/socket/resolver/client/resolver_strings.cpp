#include "nn/socket/socket_types.hpp"

namespace nn::socket::resolver {

enum OperationState : int32_t {
  OperationState_Initial,
  OperationState_AcquireSlotGenericError,
  OperationState_AcquireSlotUnableToCreateHandleID,
  OperationState_AcquireSlotAlreadyExists,
  OperationState_AcquireSlotSuccess,
  OperationState_AcquireSlotTableFull,
  OperationState_SetSlotRunningGenericError,
  OperationState_SetSlotRunningZeroHandle,
  OperationState_SetSlotRunningPending,
  OperationState_SetSlotRunningSuccess,
  OperationState_SetSlotRunningDefault,
  OperationState_SetSlotRunningNotFound,
  OperationState_IsSlotCancelledOrExpiredGenericError,
  OperationState_IsSlotCancelledOrExpiredZeroHandle,
  OperationState_IsSlotCancelledOrExpiredPending,
  OperationState_IsSlotCancelledOrExpiredAcquired,
  OperationState_IsSlotCancelledOrExpiredRunning,
  OperationState_IsSlotCancelledOrExpiredCancelled,
  OperationState_IsSlotCancelledOrExpiredExpired,
  OperationState_IsSlotCancelledOrExpiredNotFound,
  OperationState_SetSlotCancelledOrExpiredGenericError,
  OperationState_SetSlotCancelledOrExpiredZeroHandle,
  OperationState_SetSlotCancelledOrExpiredPending,
  OperationState_SetSlotCancelledOrExpiredAcquired,
  OperationState_SetSlotCancelledOrExpiredRunning,
  OperationState_SetSlotCancelledOrExpiredCancelled,
  OperationState_SetSlotCancelledOrExpiredExpired,
  OperationState_SetSlotCancelledOrExpiredNotFound,
  OperationState_SetSlotPendingGenericError,
  OperationState_SetSlotPendingZeroHandle,
  OperationState_SetSlotPendingPending,
  OperationState_SetSlotPendingAcquired,
  OperationState_SetSlotPendingRunning,
  OperationState_SetSlotPendingCancelled,
  OperationState_SetSlotPendingExpired,
  OperationState_SetSlotPendingNotFound,
  OperationState_CancelAllSlotsForProcessIDGenericError,
  OperationState_CancelAllSlotsForProcessIDNoSlotsCancelled,
  OperationState_CancelAllSlotsForProcessIDSlotsCancelled,
};

const char* GetOperationStateString(const OperationState& state) {
  switch (state) {
    case OperationState_Initial:
      return "OperationState_Initial";
    case OperationState_AcquireSlotGenericError:
      return "OperationState_AcquireSlotGenericError";
    case OperationState_AcquireSlotUnableToCreateHandleID:
      return "OperationState_AcquireSlotUnableToCreateHandleID";
    case OperationState_AcquireSlotAlreadyExists:
      return "OperationState_AcquireSlotAlreadyExists";
    case OperationState_AcquireSlotSuccess:
      return "OperationState_AcquireSlotSuccess";
    case OperationState_AcquireSlotTableFull:
      return "OperationState_AcquireSlotTableFull";
    case OperationState_SetSlotRunningGenericError:
      return "OperationState_SetSlotRunningGenericError";
    case OperationState_SetSlotRunningZeroHandle:
      return "OperationState_SetSlotRunningZeroHandle";
    case OperationState_SetSlotRunningPending:
      return "OperationState_SetSlotRunningPending";
    case OperationState_SetSlotRunningSuccess:
      return "OperationState_SetSlotRunningSuccess";
    case OperationState_SetSlotRunningDefault:
      return "OperationState_SetSlotRunningDefault";
    case OperationState_SetSlotRunningNotFound:
      return "OperationState_SetSlotRunningNotFound";
    case OperationState_IsSlotCancelledOrExpiredGenericError:
      return "OperationState_IsSlotCancelledOrExpiredGenericError";
    case OperationState_IsSlotCancelledOrExpiredZeroHandle:
      return "OperationState_IsSlotCancelledOrExpiredZeroHandle";
    case OperationState_IsSlotCancelledOrExpiredPending:
      return "OperationState_IsSlotCancelledOrExpiredPending";
    case OperationState_IsSlotCancelledOrExpiredAcquired:
      return "OperationState_IsSlotCancelledOrExpiredAcquired";
    case OperationState_IsSlotCancelledOrExpiredRunning:
      return "OperationState_IsSlotCancelledOrExpiredRunning";
    case OperationState_IsSlotCancelledOrExpiredCancelled:
      return "OperationState_IsSlotCancelledOrExpiredCancelled";
    case OperationState_IsSlotCancelledOrExpiredExpired:
      return "OperationState_IsSlotCancelledOrExpiredExpired";
    case OperationState_IsSlotCancelledOrExpiredNotFound:
      return "OperationState_IsSlotCancelledOrExpiredNotFound";
    case OperationState_SetSlotCancelledOrExpiredGenericError:
      return "OperationState_SetSlotCancelledOrExpiredGenericError";
    case OperationState_SetSlotCancelledOrExpiredZeroHandle:
      return "OperationState_SetSlotCancelledOrExpiredZeroHandle";
    case OperationState_SetSlotCancelledOrExpiredPending:
      return "OperationState_SetSlotCancelledOrExpiredPending";
    case OperationState_SetSlotCancelledOrExpiredAcquired:
      return "OperationState_SetSlotCancelledOrExpiredAcquired";
    case OperationState_SetSlotCancelledOrExpiredRunning:
      return "OperationState_SetSlotCancelledOrExpiredRunning";
    case OperationState_SetSlotCancelledOrExpiredCancelled:
      return "OperationState_SetSlotCancelledOrExpiredCancelled";
    case OperationState_SetSlotCancelledOrExpiredExpired:
      return "OperationState_SetSlotCancelledOrExpiredExpired";
    case OperationState_SetSlotCancelledOrExpiredNotFound:
      return "OperationState_SetSlotCancelledOrExpiredNotFound";
    case OperationState_SetSlotPendingGenericError:
      return "OperationState_SetSlotPendingGenericError";
    case OperationState_SetSlotPendingZeroHandle:
      return "OperationState_SetSlotPendingZeroHandle";
    case OperationState_SetSlotPendingPending:
      return "OperationState_SetSlotPendingPending";
    case OperationState_SetSlotPendingAcquired:
      return "OperationState_SetSlotPendingAcquired";
    case OperationState_SetSlotPendingRunning:
      return "OperationState_SetSlotPendingRunning";
    case OperationState_SetSlotPendingCancelled:
      return "OperationState_SetSlotPendingCancelled";
    case OperationState_SetSlotPendingExpired:
      return "OperationState_SetSlotPendingExpired";
    case OperationState_SetSlotPendingNotFound:
      return "OperationState_SetSlotPendingNotFound";
    case OperationState_CancelAllSlotsForProcessIDGenericError:
      return "OperationState_CancelAllSlotsForProcessIDGenericError";
    case OperationState_CancelAllSlotsForProcessIDNoSlotsCancelled:
      return "OperationState_CancelAllSlotsForProcessIDNoSlotsCancelled";
    case OperationState_CancelAllSlotsForProcessIDSlotsCancelled:
      return "OperationState_CancelAllSlotsForProcessIDSlotsCancelled";
    default:
      return "OperationState_Undefined";
  }
}

const char* GetResolverOptionKeyString(const ResolverOptionKey& key) {
  switch (static_cast<int>(key)) {
    case 10000:
      return "ResolverOptionKey::GetMinimumValue";
    case 10001:
      return "ResolverOptionKey::GetCancelHandleInteger";
    case 10002:
      return "ResolverOptionKey::GetMaximumValue";
    case 20000:
      return "ResolverOptionKey::SetMinimumValue";
    case 20001:
      return "ResolverOptionKey::SetCancelHandleInteger";
    case 20002:
      return "ResolverOptionKey::SetRemoveDomainnameFromCachePointer";
    case 20003:
      return "ResolverOptionKey::SetRemoveIpAddressFromCacheUnsigned32";
    case 20004:
      return "ResolverOptionKey::SetMaximumValue";
    case 30000:
      return "ResolverOptionKey::RequestMinimumValue";
    case 30001:
      return "ResolverOptionKey::RequestEnableServiceDiscoveryBoolean";
    case 30002:
      return "ResolverOptionKey::RequestCancelHandleInteger";
    case 30003:
      return "ResolverOptionKey::RequestEnableDnsCacheBoolean";
    case 30004:
      return "ResolverOptionKey::RequestMaximumValue";
    default:
      return "ResolverOptionKey_Undefined";
  }
}

const char* GetResolverOptionTypeString(const ResolverOptionType& type) {
  switch (static_cast<uint32_t>(type)) {
    case 100:
      return "ResolverOptionType::Boolean";
    case 101:
      return "ResolverOptionType::Integer";
    case 102:
      return "ResolverOptionType::Unsigned32";
    case 103:
      return "ResolverOptionType::Unsigned64";
    case 104:
      return "ResolverOptionType::Double";
    case 105:
      return "ResolverOptionType::Pointer";
    default:
      return "ResolverOptionType::Undefined";
  }
}

}
