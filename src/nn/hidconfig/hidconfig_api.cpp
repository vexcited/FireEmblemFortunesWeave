#include "nn/diag/diag_abort.hpp"
#include "nn/hid/hid_types.hpp"

namespace nn::hid::system::detail {

Result IsCustomButtonConfigSupported(bool* pOutIsSupported,
  const UniquePadId& id);
Result IsDefaultButtonConfig(bool* pOutIsDefault,
  const hidconfig::ButtonConfigEmbedded& config);
Result IsDefaultButtonConfig(bool* pOutIsDefault,
  const hidconfig::ButtonConfigFull& config);
Result IsDefaultButtonConfig(bool* pOutIsDefault,
  const hidconfig::ButtonConfigLeft& config);
Result IsDefaultButtonConfig(bool* pOutIsDefault,
  const hidconfig::ButtonConfigRight& config);
Result IsDefaultButtonConfig(bool* pOutIsDefault,
  const hidconfig::ButtonConfigJoyConGrip& config);
Result IsDefaultButtonConfig(bool* pOutIsDefault,
  const hidconfig::ButtonConfigBack& config);
Result IsButtonConfigStorageEmbeddedEmpty(bool* pOutIsEmpty, int index);
Result IsButtonConfigStorageFullEmpty(bool* pOutIsEmpty, int index);
Result IsButtonConfigStorageLeftEmpty(bool* pOutIsEmpty, int index);
Result IsButtonConfigStorageRightEmpty(bool* pOutIsEmpty, int index);
Result IsButtonConfigStorageJoyConGripEmpty(bool* pOutIsEmpty, int index);
Result GetButtonConfigStorage(hidconfig::ButtonConfigEmbedded* pOutConfig,
  hidconfig::StorageName* pOutName, int index);
Result GetButtonConfigStorage(hidconfig::ButtonConfigFull* pOutConfig,
  hidconfig::StorageName* pOutName, int index);
Result GetButtonConfigStorage(hidconfig::ButtonConfigLeft* pOutConfig,
  hidconfig::StorageName* pOutName, int index);
Result GetButtonConfigStorage(hidconfig::ButtonConfigRight* pOutConfig,
  hidconfig::StorageName* pOutName, int index);
Result GetButtonConfigStorage(hidconfig::ButtonConfigJoyConGrip* pOutConfig,
  hidconfig::StorageName* pOutName, int index);
Result SetButtonConfigStorage(const hidconfig::ButtonConfigEmbedded& config,
  const hidconfig::StorageName& name, int index);
Result SetButtonConfigStorage(const hidconfig::ButtonConfigFull& config,
  const hidconfig::StorageName& name, int index);
Result SetButtonConfigStorage(const hidconfig::ButtonConfigLeft& config,
  const hidconfig::StorageName& name, int index);
Result SetButtonConfigStorage(const hidconfig::ButtonConfigRight& config,
  const hidconfig::StorageName& name, int index);
Result SetButtonConfigStorage(const hidconfig::ButtonConfigJoyConGrip& config,
  const hidconfig::StorageName& name, int index);
Result DeleteButtonConfigStorageEmbedded(int index);
Result DeleteButtonConfigStorageFull(int index);
Result DeleteButtonConfigStorageLeft(int index);
Result DeleteButtonConfigStorageRight(int index);
Result DeleteButtonConfigStorageJoyConGrip(int index);
Result IsUsingCustomButtonConfig(bool* pOutIsUsing, const UniquePadId& id);
Result IsAnyCustomButtonConfigEnabled(bool* pOutIsEnabled);
Result SetAllCustomButtonConfigEnabled(bool isEnabled);
Result SetDefaultButtonConfig(const UniquePadId& id);
Result SetAllDefaultButtonConfig();
Result SetButtonConfigVisible(const UniquePadId& id, bool isVisible);
Result IsButtonConfigVisible(bool* pOutIsVisible, const UniquePadId& id);
Result SetButtonConfig(const hidconfig::ButtonConfigEmbedded& config,
  const UniquePadId& id);
Result SetButtonConfig(const hidconfig::ButtonConfigFull& config,
  const UniquePadId& id);
Result SetButtonConfig(const hidconfig::ButtonConfigLeft& config,
  const UniquePadId& id);
Result SetButtonConfig(const hidconfig::ButtonConfigRight& config,
  const UniquePadId& id);
Result SetButtonConfig(const hidconfig::ButtonConfigJoyConGrip& config,
  const UniquePadId& id);
Result GetButtonConfig(hidconfig::ButtonConfigEmbedded* pOutConfig,
  const UniquePadId& id);
Result GetButtonConfig(hidconfig::ButtonConfigFull* pOutConfig,
  const UniquePadId& id);
Result GetButtonConfig(hidconfig::ButtonConfigLeft* pOutConfig,
  const UniquePadId& id);
Result GetButtonConfig(hidconfig::ButtonConfigRight* pOutConfig,
  const UniquePadId& id);
Result GetButtonConfig(hidconfig::ButtonConfigJoyConGrip* pOutConfig,
  const UniquePadId& id);

}

namespace nn::hidconfig {

namespace {

using hid::system::UniquePadId;

constexpr uint32_t ResultDeviceNotConnected = 0x642ca;
constexpr uint32_t ResultButtonConfigNotSupported = 0x200aca;
constexpr uint32_t ResultButtonConfigNotChanged = 0x200cca;
constexpr uint32_t ResultUniquePadDisconnected = 0x200eca;
constexpr uint32_t ResultButtonConfigInvalidDevice = 0x2010ca;
constexpr uint32_t ResultButtonConfigStorageEmpty = 0x2032ca;

bool Includes(Result result, uint32_t value) {
  return result.GetInnerValueForDebug() == value;
}

void AbortUnlessSuccessOrStorageEmpty(Result result) {
  if (result.IsFailure() &&
    !Includes(result, ResultButtonConfigStorageEmpty)) {
    diag::detail::AbortImpl(&result);
  }
}

// Writes to a disconnected or unsupported controller are ignored.
void AbortUnlessConfigWritten(Result result) {
  if (result.IsFailure() && !Includes(result, ResultDeviceNotConnected) &&
    !Includes(result, ResultUniquePadDisconnected) &&
    !Includes(result, ResultButtonConfigInvalidDevice)) {
    diag::detail::AbortImpl(&result);
  }
}

void AbortUnlessConfigWrittenOrUnsupported(Result result) {
  if (result.IsFailure() && !Includes(result, ResultDeviceNotConnected) &&
    !Includes(result, ResultButtonConfigNotSupported) &&
    !Includes(result, ResultUniquePadDisconnected) &&
    !Includes(result, ResultButtonConfigInvalidDevice)) {
    diag::detail::AbortImpl(&result);
  }
}

}

bool IsCustomButtonConfigSupported(const UniquePadId& id) {
  bool isSupported = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsCustomButtonConfigSupported(&isSupported, id));
  return isSupported;
}

bool IsDefaultButtonConfig(const ButtonConfigEmbedded& config) {
  bool isDefault = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsDefaultButtonConfig(&isDefault, config));
  return isDefault;
}

bool IsDefaultButtonConfig(const ButtonConfigFull& config) {
  bool isDefault = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsDefaultButtonConfig(&isDefault, config));
  return isDefault;
}

bool IsDefaultButtonConfig(const ButtonConfigLeft& config) {
  bool isDefault = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsDefaultButtonConfig(&isDefault, config));
  return isDefault;
}

bool IsDefaultButtonConfig(const ButtonConfigRight& config) {
  bool isDefault = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsDefaultButtonConfig(&isDefault, config));
  return isDefault;
}

bool IsDefaultButtonConfig(const ButtonConfigJoyConGrip& config) {
  bool isDefault = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsDefaultButtonConfig(&isDefault, config));
  return isDefault;
}

bool IsDefaultButtonConfig(const ButtonConfigBack& config) {
  bool isDefault = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsDefaultButtonConfig(&isDefault, config));
  return isDefault;
}

bool IsButtonConfigStorageEmbeddedEmpty(int index) {
  bool isEmpty = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsButtonConfigStorageEmbeddedEmpty(&isEmpty,
      index));
  return isEmpty;
}

bool IsButtonConfigStorageFullEmpty(int index) {
  bool isEmpty = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsButtonConfigStorageFullEmpty(&isEmpty, index));
  return isEmpty;
}

bool IsButtonConfigStorageLeftEmpty(int index) {
  bool isEmpty = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsButtonConfigStorageLeftEmpty(&isEmpty, index));
  return isEmpty;
}

bool IsButtonConfigStorageRightEmpty(int index) {
  bool isEmpty = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsButtonConfigStorageRightEmpty(&isEmpty, index));
  return isEmpty;
}

bool IsButtonConfigStorageJoyConGripEmpty(int index) {
  bool isEmpty = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsButtonConfigStorageJoyConGripEmpty(&isEmpty,
      index));
  return isEmpty;
}

void GetButtonConfigStorage(ButtonConfigEmbedded* pOutConfig,
  StorageName* pOutName, int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::GetButtonConfigStorage(pOutConfig, pOutName,
      index));
}

void GetButtonConfigStorage(ButtonConfigFull* pOutConfig,
  StorageName* pOutName, int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::GetButtonConfigStorage(pOutConfig, pOutName,
      index));
}

void GetButtonConfigStorage(ButtonConfigLeft* pOutConfig,
  StorageName* pOutName, int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::GetButtonConfigStorage(pOutConfig, pOutName,
      index));
}

void GetButtonConfigStorage(ButtonConfigRight* pOutConfig,
  StorageName* pOutName, int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::GetButtonConfigStorage(pOutConfig, pOutName,
      index));
}

void GetButtonConfigStorage(ButtonConfigJoyConGrip* pOutConfig,
  StorageName* pOutName, int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::GetButtonConfigStorage(pOutConfig, pOutName,
      index));
}

void SetButtonConfigStorage(const ButtonConfigEmbedded& config,
  const StorageName& name, int index) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetButtonConfigStorage(config, name, index));
}

void SetButtonConfigStorage(const ButtonConfigFull& config,
  const StorageName& name, int index) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetButtonConfigStorage(config, name, index));
}

void SetButtonConfigStorage(const ButtonConfigLeft& config,
  const StorageName& name, int index) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetButtonConfigStorage(config, name, index));
}

void SetButtonConfigStorage(const ButtonConfigRight& config,
  const StorageName& name, int index) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetButtonConfigStorage(config, name, index));
}

void SetButtonConfigStorage(const ButtonConfigJoyConGrip& config,
  const StorageName& name, int index) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetButtonConfigStorage(config, name, index));
}

void DeleteButtonConfigStorageEmbedded(int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::DeleteButtonConfigStorageEmbedded(index));
}

void DeleteButtonConfigStorageFull(int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::DeleteButtonConfigStorageFull(index));
}

void DeleteButtonConfigStorageLeft(int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::DeleteButtonConfigStorageLeft(index));
}

void DeleteButtonConfigStorageRight(int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::DeleteButtonConfigStorageRight(index));
}

void DeleteButtonConfigStorageJoyConGrip(int index) {
  AbortUnlessSuccessOrStorageEmpty(
    hid::system::detail::DeleteButtonConfigStorageJoyConGrip(index));
}

bool IsUsingCustomButtonConfig(const UniquePadId& id) {
  bool isUsing = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsUsingCustomButtonConfig(&isUsing, id));
  return isUsing;
}

bool IsAnyCustomButtonConfigEnabled() {
  bool isEnabled = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsAnyCustomButtonConfigEnabled(&isEnabled));
  return isEnabled;
}

void SetAllCustomButtonConfigEnabled(bool isEnabled) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetAllCustomButtonConfigEnabled(isEnabled));
}

void SetDefaultButtonConfig(const UniquePadId& id) {
  const Result result = hid::system::detail::SetDefaultButtonConfig(id);
  if (result.IsFailure() && !Includes(result, ResultDeviceNotConnected) &&
    !Includes(result, ResultButtonConfigNotChanged) &&
    !Includes(result, ResultUniquePadDisconnected)) {
    diag::detail::AbortImpl(&result);
  }
}

void SetAllDefaultButtonConfig() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::SetAllDefaultButtonConfig());
}

void SetButtonConfigVisible(const UniquePadId& id, bool isVisible) {
  const Result result =
    hid::system::detail::SetButtonConfigVisible(id, isVisible);
  if (result.IsFailure() && !Includes(result, ResultDeviceNotConnected) &&
    !Includes(result, ResultUniquePadDisconnected)) {
    diag::detail::AbortImpl(&result);
  }
}

bool IsButtonConfigVisible(const UniquePadId& id) {
  bool isVisible = false;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    hid::system::detail::IsButtonConfigVisible(&isVisible, id));
  return isVisible;
}

void SetButtonConfig(const ButtonConfigEmbedded& config,
  const UniquePadId& id) {
  AbortUnlessConfigWritten(hid::system::detail::SetButtonConfig(config, id));
}

void SetButtonConfig(const ButtonConfigFull& config, const UniquePadId& id) {
  AbortUnlessConfigWrittenOrUnsupported(
    hid::system::detail::SetButtonConfig(config, id));
}

void SetButtonConfig(const ButtonConfigLeft& config, const UniquePadId& id) {
  AbortUnlessConfigWrittenOrUnsupported(
    hid::system::detail::SetButtonConfig(config, id));
}

void SetButtonConfig(const ButtonConfigRight& config, const UniquePadId& id) {
  AbortUnlessConfigWrittenOrUnsupported(
    hid::system::detail::SetButtonConfig(config, id));
}

void SetButtonConfig(const ButtonConfigJoyConGrip& config,
  const UniquePadId& id) {
  AbortUnlessConfigWrittenOrUnsupported(
    hid::system::detail::SetButtonConfig(config, id));
}

void GetButtonConfig(ButtonConfigEmbedded* pOutConfig,
  const UniquePadId& id) {
  AbortUnlessConfigWritten(
    hid::system::detail::GetButtonConfig(pOutConfig, id));
}

void GetButtonConfig(ButtonConfigFull* pOutConfig, const UniquePadId& id) {
  AbortUnlessConfigWritten(
    hid::system::detail::GetButtonConfig(pOutConfig, id));
}

void GetButtonConfig(ButtonConfigLeft* pOutConfig, const UniquePadId& id) {
  AbortUnlessConfigWritten(
    hid::system::detail::GetButtonConfig(pOutConfig, id));
}

void GetButtonConfig(ButtonConfigRight* pOutConfig, const UniquePadId& id) {
  AbortUnlessConfigWritten(
    hid::system::detail::GetButtonConfig(pOutConfig, id));
}

void GetButtonConfig(ButtonConfigJoyConGrip* pOutConfig,
  const UniquePadId& id) {
  AbortUnlessConfigWritten(
    hid::system::detail::GetButtonConfig(pOutConfig, id));
}

}
