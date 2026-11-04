#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_npad_id.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid {

void InitializeDebugPad() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeDebugPad());
}

void GetDebugPadState(DebugPadState* pOutDebugPadState) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetDebugPadState(pOutDebugPadState));
}

int GetDebugPadStates(DebugPadState* pOutDebugPadState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetDebugPadStates(&value, pOutDebugPadState, count));
  return value;
}

void InitializeDigitizer() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeDigitizer());
}

void GetDigitizerState(DigitizerState* pOutDigitizerState) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetDigitizerState(pOutDigitizerState));
}

int GetDigitizerStates(DigitizerState* pOutDigitizerState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetDigitizerStates(&value, pOutDigitizerState, count));
  return value;
}

void InitializeGesture(int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeGesture(count, count2));
}

int GetGestureStates(GestureState* pOutGestureState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetGestureStates(&value, pOutGestureState, count));
  return value;
}

void InitializeKeyboard() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeKeyboard());
}

void GetKeyboardState(KeyboardState* pOutKeyboardState) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetKeyboardState(pOutKeyboardState));
}

int GetKeyboardStates(KeyboardState* pOutKeyboardState, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetKeyboardStates(&value, pOutKeyboardState, count));
  return value;
}

void SendKeyboardLockKeyEvent(
  util::BitFlagSet<32, KeyboardLockKeyEvent> bitFlagSet) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SendKeyboardLockKeyEvent(bitFlagSet));
}

void InitializeTouchScreen(int count, int count2) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::InitializeTouchScreen(count, count2));
}

void SetTouchScreenConfigurationForNx(
  const TouchScreenConfigurationForNx& touchScreenConfigurationForNx) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::SetTouchScreenConfiguration(touchScreenConfigurationForNx));
}

int GetXpadIds(BasicXpadId* pOutBasicXpadId, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::detail::GetXpadIds(&value, pOutBasicXpadId, count));
  return value;
}

void InitializeXpad(const BasicXpadId& basicXpadId) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(hid::detail::InitializeXpad(basicXpadId));
}

}
