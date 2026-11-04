#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid {

void InitializeMouse() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeMouse());
}

void GetMouseState(MouseState* pOutMouseState) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetMouseState(pOutMouseState));
}

int GetMouseStates(MouseState* pOutMouseState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetMouseStates(&value, pOutMouseState, count));
  return value;
}

Result GetMouseHandle() {
  return hid::detail::GetMouseHandle();
}

Result GetDebugMouseHandle() {
  return hid::detail::GetDebugMouseHandle();
}

void InitializeMouse(const MouseHandle& mouseHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeMouse(mouseHandle));
}

void GetMouseState(MouseState* pOutMouseState, const MouseHandle& mouseHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetMouseState(pOutMouseState, mouseHandle));
}

int GetMouseStates(
  MouseState* pOutMouseState, int count, const MouseHandle& mouseHandle) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetMouseStates(&value, pOutMouseState, count, mouseHandle));
  return value;
}

void InitializeJcms(void* pOutVoid, unsigned long size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeJcms(pOutVoid, size));
}

void FinalizeJcms() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::FinalizeJcms());
}

Result GetJcmsHandle(const NpadIdType& id, const JcmsType& jcmsType) {
  return hid::detail::GetJcmsHandle(id, jcmsType);
}

void StartJcms(const JcmsHandle& jcmsHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::StartJcms(jcmsHandle));
}

void StopJcms(const JcmsHandle& jcmsHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::StopJcms(jcmsHandle));
}

void GetJcmsState(JcmsState* pOutJcmsState, const JcmsHandle& jcmsHandle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetJcmsState(pOutJcmsState, jcmsHandle));
}

int GetJcmsStates(
  JcmsState* pOutJcmsState, int count, const JcmsHandle& jcmsHandle) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetJcmsStates(&value, pOutJcmsState, count, jcmsHandle));
  return value;
}

void GetMousePointerSpeedScale() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetMousePointerSpeedScale(&value));
}

void InitializeNmouse(void* pOutVoid, unsigned long size, int count, int count2,
  NmousePointerType nmousePointerType) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeNmouse(
    pOutVoid, size, count, count2, nmousePointerType));
}

void FinalizeNmouse() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::FinalizeNmouse());
}

void SetMergedNmouseSourceTypes(util::BitFlagSet<32, NmouseType> bitFlagSet) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetMergedNmouseSourceTypes(bitFlagSet));
}

void SetNmousePointerRanges(int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNmousePointerRanges(count, count2));
}

void GetNmousePointerRanges(int* pOutInt, int* pOutInt2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetNmousePointerRanges(pOutInt, pOutInt2));
}

void SetNmousePointerMovementArea(
  int count, int count2, int count3, int count4) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNmousePointerMovementArea(count, count2, count3, count4));
}

bool GetMergedNmouseHandle(NmouseHandle* pOutNmouseHandle) {
  return hid::detail::GetMergedNmouseHandle(pOutNmouseHandle).IsSuccess();
}

int GetNmouseHandles(
  NmouseHandle* pOutNmouseHandle, int count, unsigned int unsignedint) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::GetNmouseHandles(
    &value, pOutNmouseHandle, count, unsignedint));
  return value;
}

bool GetNmouseTypeSet(
  util::BitFlagSet<32, NmouseType>* pOutBitFlagSet, NmouseHandle nmouseHandle) {
  return hid::detail::GetNmouseTypeSet(pOutBitFlagSet, nmouseHandle)
    .IsSuccess();
}

bool GetStandardMouseNmouseHandle(NmouseHandle* pOutNmouseHandle) {
  return hid::detail::GetStandardMouseNmouseHandle(pOutNmouseHandle)
    .IsSuccess();
}

void EnableShowingCursor(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::EnableShowingCursor(isEnabled));
}

void SetNmouseButtonConfigJoyLeftJcms(
  const NmouseButtonConfigJoyLeftJcms& nmouseButtonConfigJoyLeftJcms) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetNmouseButtonConfigJoyLeftJcms(
    nmouseButtonConfigJoyLeftJcms));
}

void SetNmouseButtonConfigJoyRightJcms(
  const NmouseButtonConfigJoyRightJcms& nmouseButtonConfigJoyRightJcms) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::SetNmouseButtonConfigJoyRightJcms(
    nmouseButtonConfigJoyRightJcms));
}

void SetNmouseButtonConfigStandardMouse(
  const NmouseButtonConfigStandardMouse& nmouseButtonConfigStandardMouse) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetNmouseButtonConfigStandardMouse(
      nmouseButtonConfigStandardMouse));
}

bool EnableNmousePointer(NmouseHandle nmouseHandle, bool isEnabled) {
  return hid::detail::EnableNmousePointer(nmouseHandle, isEnabled).IsSuccess();
}

bool SetNmousePointerPosition(
  NmouseHandle nmouseHandle, int count, int count2) {
  return hid::detail::SetNmousePointerPosition(nmouseHandle, count, count2)
    .IsSuccess();
}

bool GetNmouseState(NmouseState* pOutNmouseState, NmouseHandle nmouseHandle) {
  return hid::detail::GetNmouseState(pOutNmouseState, nmouseHandle).IsSuccess();
}

bool GetNmouseStates(int* pOutInt, NmouseState* pOutNmouseState, int count,
  NmouseHandle nmouseHandle) {
  return hid::detail::GetNmouseStates(
    pOutInt, pOutNmouseState, count, nmouseHandle)
    .IsSuccess();
}

void RestrictNmousePointer(
  float value, float value2, float value3, float value4) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::RestrictNmousePointer(value, value2, value3, value4));
}

}
