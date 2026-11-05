#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::utility {

struct SixAxisSensorHandleIdxForNpad {
  uint8_t index;
};

Result GetSixAxisSensorHandleIdxForNpad(SixAxisSensorHandleIdxForNpad* pOut,
  const SixAxisSensorHandle& handle);

}

namespace nn::hid::detail {

Result GetSixAxisSensorStates(int* pOutCount, SixAxisSensorState* pOutStates,
  int count, const SixAxisSensorHandle& handle);
Result GetSixAxisSensorStates(int* pOutCount, SixAxisSensorState* pOutStates,
  int count, const NpadIdType& id, NpadStyleSet style);
Result GetSixAxisSensorLeftStates(int* pOutCount,
  SixAxisSensorState* pOutStates, int count, const NpadIdType& id,
  NpadStyleSet style);
Result GetSixAxisSensorRightStates(int* pOutCount,
  SixAxisSensorState* pOutStates, int count, const NpadIdType& id,
  NpadStyleSet style);
Result IsSixAxisSensorDeviceNewlyAssignedFromSharedMemory(bool* pOutValue,
  const NpadIdType& id, const utility::SixAxisSensorHandleIdxForNpad& index);
Result IsFirmwareUpdateAvailableForSixAxisSensorFromSharedMemory(
  bool* pOutValue, const NpadIdType& id,
  const utility::SixAxisSensorHandleIdxForNpad& index);

namespace {

enum NpadStyleIndex {
  NpadStyleIndex_FullKey = 0,
  NpadStyleIndex_Handheld = 1,
  NpadStyleIndex_JoyDual = 2,
  NpadStyleIndex_JoyLeft = 3,
  NpadStyleIndex_JoyRight = 4,
  NpadStyleIndex_Gc = 5,
  NpadStyleIndex_System = 29,
  NpadStyleIndex_SystemExt = 30,
};

NpadStyleSet MakeStyleSet(int index) {
  NpadStyleSet style;
  style._storage[0] = 1u << index;
  return style;
}

}

Result GetSixAxisSensorState(SixAxisSensorState* pOutValue,
  const SixAxisSensorHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(handle));
  int count = 0;
  return GetSixAxisSensorStates(&count, pOutValue, 1, handle);
}

Result GetSixAxisSensorStates(int* pOutCount, SixAxisSensorState* pOutStates,
  int count, const SixAxisSensorHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutCount);
  NN_ABORT_UNLESS_NOT_NULL(pOutStates);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(handle));
  // The style index is returned as a byte.
  switch (static_cast<uint8_t>(
    utility::GetSixAxisSensorHandleNpadStyleIndex(handle))) {
    case NpadStyleIndex_FullKey:
    case NpadStyleIndex_Gc: {
      const NpadIdType id = utility::GetSixAxisSensorHandleNpadIdType(handle);
      return GetSixAxisSensorStates(pOutCount, pOutStates, count, id,
        MakeStyleSet(NpadStyleIndex_FullKey));
    }
    case NpadStyleIndex_Handheld: {
      const NpadIdType id = utility::GetSixAxisSensorHandleNpadIdType(handle);
      return GetSixAxisSensorStates(pOutCount, pOutStates, count, id,
        MakeStyleSet(NpadStyleIndex_Handheld));
    }
    case NpadStyleIndex_JoyDual:
      switch (utility::GetSixAxisSensorHandleSixAxisSensorIdx(handle)) {
        case 0: {
          const NpadIdType id =
            utility::GetSixAxisSensorHandleNpadIdType(handle);
          return GetSixAxisSensorLeftStates(pOutCount, pOutStates, count, id,
            MakeStyleSet(NpadStyleIndex_JoyDual));
        }
        case 1: {
          const NpadIdType id =
            utility::GetSixAxisSensorHandleNpadIdType(handle);
          return GetSixAxisSensorRightStates(pOutCount, pOutStates, count, id,
            MakeStyleSet(NpadStyleIndex_JoyDual));
        }
        default:
          nn::detail::UnexpectedDefaultImpl();
      }
    case NpadStyleIndex_JoyLeft: {
      const NpadIdType id = utility::GetSixAxisSensorHandleNpadIdType(handle);
      return GetSixAxisSensorStates(pOutCount, pOutStates, count, id,
        MakeStyleSet(NpadStyleIndex_JoyLeft));
    }
    case NpadStyleIndex_JoyRight: {
      const NpadIdType id = utility::GetSixAxisSensorHandleNpadIdType(handle);
      return GetSixAxisSensorStates(pOutCount, pOutStates, count, id,
        MakeStyleSet(NpadStyleIndex_JoyRight));
    }
    case NpadStyleIndex_System:
    case NpadStyleIndex_SystemExt:
      return Result{};
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

Result IsFirmwareUpdateAvailableForSixAxisSensor(bool* pOutValue,
  const SixAxisSensorHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(handle));
  utility::SixAxisSensorHandleIdxForNpad index = {};
  NN_RESULT_DO(utility::GetSixAxisSensorHandleIdxForNpad(&index, handle));
  const NpadIdType id = utility::GetSixAxisSensorHandleNpadIdType(handle);
  return IsFirmwareUpdateAvailableForSixAxisSensorFromSharedMemory(pOutValue,
    id, index);
}

Result IsSixAxisSensorDeviceNewlyAssigned(bool* pOutValue,
  const SixAxisSensorHandle& handle) {
  NN_ABORT_UNLESS_NOT_NULL(pOutValue);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    utility::VerifyValidSixAxisSensorHandle(handle));
  utility::SixAxisSensorHandleIdxForNpad index = {};
  NN_RESULT_DO(utility::GetSixAxisSensorHandleIdxForNpad(&index, handle));
  const NpadIdType id = utility::GetSixAxisSensorHandleNpadIdType(handle);
  return IsSixAxisSensorDeviceNewlyAssignedFromSharedMemory(pOutValue, id,
    index);
}

}
