#include <string.h>

#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_api.hpp"

namespace nn::settings {

void GetDebugPadGenericPadMap(DebugPadGenericPadMap* pOutValue) {
  DebugPadGenericPadMapV2 value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDebugPadGenericPadMap(&value));
  memcpy(pOutValue, &value, sizeof(*pOutValue));
}

void SetDebugPadGenericPadMap(const DebugPadGenericPadMap& value) {
  DebugPadGenericPadMapV2 converted = {};
  memcpy(&converted, &value, sizeof(value));
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDebugPadGenericPadMap(converted));
}

void GetDebugPadKeyboardMap(DebugPadKeyboardMap* pOutValue) {
  DebugPadKeyboardMapV2 value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDebugPadKeyboardMap(&value));
  memcpy(pOutValue, &value, sizeof(*pOutValue));
}

void SetDebugPadKeyboardMap(const DebugPadKeyboardMap& value) {
  DebugPadKeyboardMapV2 converted = {};
  memcpy(&converted, &value, sizeof(value));
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDebugPadKeyboardMap(converted));
}

void GetDebugPadGenericPadMap(DebugPadGenericPadMapV2* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDebugPadGenericPadMap(pOutValue));
}

void SetDebugPadGenericPadMap(const DebugPadGenericPadMapV2& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDebugPadGenericPadMap(value));
}

void ResetDebugPadGenericPadMap() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ResetDebugPadGenericPadMap());
}

void GetDebugPadKeyboardMap(DebugPadKeyboardMapV2* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDebugPadKeyboardMap(pOutValue));
}

void SetDebugPadKeyboardMap(const DebugPadKeyboardMapV2& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetDebugPadKeyboardMap(value));
}

void ResetDebugPadKeyboardMap() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ResetDebugPadKeyboardMap());
}

void GetFullKeyGenericPadMap(
  FullKeyGenericPadMap* pOutValue, FullKeyIndex fullKeyIndex) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetFullKeyGenericPadMap(
    pOutValue, fullKeyIndex));
}

void SetFullKeyGenericPadMap(
  const FullKeyGenericPadMap& value, FullKeyIndex fullKeyIndex) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetFullKeyGenericPadMap(
    value, fullKeyIndex));
}

void ResetFullKeyGenericPadMap(FullKeyIndex fullKeyIndex) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ResetFullKeyGenericPadMap(
    fullKeyIndex));
}

void GetFullKeyKeyboardMap(
  FullKeyKeyboardMap* pOutValue, FullKeyIndex fullKeyIndex) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetFullKeyKeyboardMap(
    pOutValue, fullKeyIndex));
}

void SetFullKeyKeyboardMap(
  const FullKeyKeyboardMap& value, FullKeyIndex fullKeyIndex) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetFullKeyKeyboardMap(
    value, fullKeyIndex));
}

void ResetFullKeyKeyboardMap(FullKeyIndex fullKeyIndex) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ResetFullKeyKeyboardMap(fullKeyIndex));
}

void SetApplicationOwnKeyboardLayout(KeyboardLayout keyboardLayout) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetApplicationOwnKeyboardLayout(
    keyboardLayout));
}

void GetLanguageCode(LanguageCode* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetLanguageCode(pOutValue));
}

int GetAvailableLanguageCodes(LanguageCode* pOutValue, int count) {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAvailableLanguageCodes(
    &value, pOutValue, count));
  return value;
}

int GetAvailableLanguageCodeCount() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetAvailableLanguageCodeCount(&value));
  return value;
}

bool GetTextToSpeechFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechFlag(&value));
  return value;
}

system::TextToSpeechVoiceTypeForUi GetTextToSpeechVoiceTypeForUi() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceTypeForUi(&value));
  return static_cast<system::TextToSpeechVoiceTypeForUi>(value);
}

float GetTextToSpeechVoiceVolume() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceVolume(&value));
  return value;
}

float GetTextToSpeechVoiceSpeed() {
  float value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetTextToSpeechVoiceSpeed(&value));
  return value;
}

bool GetQuestFlag() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetQuestFlagForApplication(&value));
  return value;
}

}
