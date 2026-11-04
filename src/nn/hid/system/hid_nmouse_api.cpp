#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system {

void EnableAutoTransitionPointerToNone(
  applet::AppletResourceUserId appletResourceUserId, bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableAutoTransitionPointerToNone(
      appletResourceUserId, isEnabled));
}

void EnableAutoTransitionPointerToNone(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableAutoTransitionPointerToNone(isEnabled));
}

void IgnoreAutoTransitionPointerToNone(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IgnoreAutoTransitionPointerToNone(isEnabled));
}

void SetNmousePointerSpeedScale(float value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetNmousePointerSpeedScale(value));
}

void GetNmousePointerSpeedScale() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetNmousePointerSpeedScale(&value));
}

void EnableNmouseMovementAdjustment(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::EnableNmouseMovementAdjustment(isEnabled));
}

bool IsEnabledNmouseMovementAdjustment() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsEnabledNmouseMovementAdjustment(&value));
  return value;
}

void SetNmouseMovementAdjustmentParameters(
  const NmouseMovementAdjustmentParameter* pNmouseMovementAdjustmentParameter,
  int count) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetNmouseMovementAdjustmentParameters(
      pNmouseMovementAdjustmentParameter, count));
}

int GetNmouseMovementAdjustmentParameters(
  NmouseMovementAdjustmentParameter* pOutNmouseMovementAdjustmentParameter,
  int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetNmouseMovementAdjustmentParameters(
      &value, pOutNmouseMovementAdjustmentParameter, count));
  return value;
}

bool GetNmouseStateWithDelta(
  NmouseStateWithDelta* pOutNmouseStateWithDelta, NmouseHandle nmouseHandle) {
  return hid::system::detail::GetNmouseStateWithDelta(
    pOutNmouseStateWithDelta, nmouseHandle)
    .IsSuccess();
}

bool GetNmouseStatesWithDelta(int* pOutInt,
  NmouseStateWithDelta* pOutNmouseStateWithDelta, int count,
  NmouseHandle nmouseHandle) {
  return hid::system::detail::GetNmouseStatesWithDelta(
    pOutInt, pOutNmouseStateWithDelta, count, nmouseHandle)
    .IsSuccess();
}

void InitializeOverlayNmouse(
  void* pOutVoid, unsigned long size, int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::InitializeOverlayNmouse(
    pOutVoid, size, count, count2));
}

void FinalizeOverlayNmouse() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::FinalizeOverlayNmouse());
}

void SetOverlayNmousePointerRanges(int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetOverlayNmousePointerRanges(count, count2));
}

void GetOverlayNmousePointerRanges(int* pOutInt, int* pOutInt2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::GetOverlayNmousePointerRanges(pOutInt, pOutInt2));
}

int ListOverlayNmouseHandles(NmouseHandle* pOutNmouseHandle, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::system::detail::ListOverlayNmouseHandles(
    &value, pOutNmouseHandle, count));
  return value;
}

bool GetMergedOverlayNmouseHandle(NmouseHandle* pOutNmouseHandle) {
  return hid::system::detail::GetMergedOverlayNmouseHandle(pOutNmouseHandle)
    .IsSuccess();
}

bool GetOverlayNmouseState(
  NmouseState* pOutNmouseState, const NmouseHandle& nmouseHandle) {
  return hid::system::detail::GetOverlayNmouseState(
    pOutNmouseState, nmouseHandle)
    .IsSuccess();
}

bool GetOverlayNmouseStates(int* pOutInt, NmouseState* pOutNmouseState,
  int count, const NmouseHandle& nmouseHandle) {
  return hid::system::detail::GetOverlayNmouseStates(
    pOutInt, pOutNmouseState, count, nmouseHandle)
    .IsSuccess();
}

void SetOverlayNmouseMagnification(
  float value, float value2, float value3, float value4) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetOverlayNmouseMagnification(
      value, value2, value3, value4));
}

}
