#include "nn/diag/diag_abort.hpp"
#include "nn/settings/detail/settings_api.hpp"
#include "nn/settings/settings_api.hpp"

namespace nn::settings::fwdbg {

bool IsDebugModeEnabled() {
  bool value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetDebugModeFlag(&value));
  return value;
}

unsigned long GetSettingsItemValueSize(const char* name, const char* key) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSettingsItemValueSize(
    &value, name, key));
  return value;
}

unsigned long GetSettingsItemValue(
  void* buffer, unsigned long size, const char* name, const char* key) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSettingsItemValue(
    &value, buffer, size, name, key));
  return value;
}

void DestroySettingsItemKeyIterator(SettingsItemKeyIterator* pOutValue) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::DestroySettingsItemKeyIterator(
    pOutValue));
}

unsigned long GetSettingsItemKeySize(
  const SettingsItemKeyIterator& settingsItemKeyIterator) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSettingsItemKeySize(
    &value, settingsItemKeyIterator));
  return value;
}

unsigned long GetSettingsItemKey(
  void* buffer, unsigned long size,
  const SettingsItemKeyIterator& settingsItemKeyIterator) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::GetSettingsItemKey(
    &value, buffer, size, settingsItemKeyIterator));
  return value;
}

unsigned long ReadSettings(
  unsigned char* buffer, unsigned long size, SettingsTarget settingsTarget) {
  unsigned long value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ReadSettings(
    &value, buffer, size, static_cast<int>(settingsTarget)));
  return value;
}

void ResetSettings(SettingsTarget settingsTarget) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ResetSettings(
    static_cast<int>(settingsTarget)));
}

void CommitSettings() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::CommitSettings());
}

void SetSettingsItemValue(
  const char* name, const char* key, const void* buffer, unsigned long size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetSettingsItemValue(
    name, key, buffer, size));
}

void ResetSettingsItemValue(const char* name, const char* key) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::ResetSettingsItemValue(name, key));
}

int GetDeviceLockPinCodeContinuousVerificationFailureCount() {
  int value = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::GetDeviceLockPinCodeContinuousVerificationFailureCount(&value));
  return value;
}

void SetDeviceLockPinCodeContinuousVerificationFailureCount(int value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::SetDeviceLockPinCodeContinuousVerificationFailureCount(value));
}

void SetWebInspectorFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetWebInspectorFlag(isEnabled));
}

void SetMemoryUsageRateFlag(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetMemoryUsageRateFlag(isEnabled));
}

void SetAllowedSslHosts(
  const system::AllowedSslHost* pValues, unsigned long size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetAllowedSslHosts(pValues, size));
}

void SetHostFsMountPoint(const system::HostFsMountPoint& value) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetHostFsMountPoint(value));
}

void SetHttpAuthConfigs(
  const system::HttpAuthConfig* pValues, unsigned long size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(detail::SetHttpAuthConfigs(pValues, size));
}

}
