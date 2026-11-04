#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result IsCustomButtonConfigSupported(
  bool* pOutBool, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result =
    proxy->IsCustomButtonConfigSupported(&value, uniquePadId);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsDefaultButtonConfig(
  bool* pOutBool, const hidconfig::ButtonConfigEmbedded& buttonConfigEmbedded) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result =
    proxy->IsDefaultButtonConfig(&value, buttonConfigEmbedded);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsDefaultButtonConfig(
  bool* pOutBool, const hidconfig::ButtonConfigFull& buttonConfigFull) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsDefaultButtonConfig(&value, buttonConfigFull);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsDefaultButtonConfig(
  bool* pOutBool, const hidconfig::ButtonConfigLeft& buttonConfigLeft) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsDefaultButtonConfig(&value, buttonConfigLeft);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsDefaultButtonConfig(
  bool* pOutBool, const hidconfig::ButtonConfigRight& buttonConfigRight) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsDefaultButtonConfig(&value, buttonConfigRight);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsButtonConfigStorageEmbeddedEmpty(bool* pOutBool, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value;
  const Result result =
    proxy->IsButtonConfigStorageEmbeddedEmpty(&value, count);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsButtonConfigStorageFullEmpty(bool* pOutBool, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value;
  const Result result = proxy->IsButtonConfigStorageFullEmpty(&value, count);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsButtonConfigStorageLeftEmpty(bool* pOutBool, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value;
  const Result result = proxy->IsButtonConfigStorageLeftEmpty(&value, count);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsButtonConfigStorageRightEmpty(bool* pOutBool, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value;
  const Result result = proxy->IsButtonConfigStorageRightEmpty(&value, count);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsButtonConfigStorageJoyConGripEmpty(bool* pOutBool, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value;
  const Result result =
    proxy->IsButtonConfigStorageJoyConGripEmpty(&value, count);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result GetButtonConfigStorage(
  hidconfig::ButtonConfigEmbedded* pOutButtonConfigEmbedded,
  hidconfig::StorageName* pOutStorageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetButtonConfigStorage(
    pOutButtonConfigEmbedded, pOutStorageName, count);
}

Result GetButtonConfigStorage(hidconfig::ButtonConfigFull* pOutButtonConfigFull,
  hidconfig::StorageName* pOutStorageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetButtonConfigStorage(
    pOutButtonConfigFull, pOutStorageName, count);
}

Result GetButtonConfigStorage(hidconfig::ButtonConfigLeft* pOutButtonConfigLeft,
  hidconfig::StorageName* pOutStorageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetButtonConfigStorage(
    pOutButtonConfigLeft, pOutStorageName, count);
}

Result GetButtonConfigStorage(
  hidconfig::ButtonConfigRight* pOutButtonConfigRight,
  hidconfig::StorageName* pOutStorageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetButtonConfigStorage(
    pOutButtonConfigRight, pOutStorageName, count);
}

Result GetButtonConfigStorage(
  hidconfig::ButtonConfigJoyConGrip* pOutButtonConfigJoyConGrip,
  hidconfig::StorageName* pOutStorageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetButtonConfigStorage(
    pOutButtonConfigJoyConGrip, pOutStorageName, count);
}

Result SetButtonConfigStorage(
  const hidconfig::ButtonConfigEmbedded& buttonConfigEmbedded,
  const hidconfig::StorageName& storageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfigStorage(
    buttonConfigEmbedded, storageName, count);
}

Result SetButtonConfigStorage(
  const hidconfig::ButtonConfigFull& buttonConfigFull,
  const hidconfig::StorageName& storageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfigStorage(buttonConfigFull, storageName, count);
}

Result SetButtonConfigStorage(
  const hidconfig::ButtonConfigLeft& buttonConfigLeft,
  const hidconfig::StorageName& storageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfigStorage(buttonConfigLeft, storageName, count);
}

Result SetButtonConfigStorage(
  const hidconfig::ButtonConfigRight& buttonConfigRight,
  const hidconfig::StorageName& storageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfigStorage(buttonConfigRight, storageName, count);
}

Result DeleteButtonConfigStorageEmbedded(int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DeleteButtonConfigStorageEmbedded(count);
}

Result DeleteButtonConfigStorageFull(int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DeleteButtonConfigStorageFull(count);
}

Result DeleteButtonConfigStorageLeft(int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DeleteButtonConfigStorageLeft(count);
}

Result DeleteButtonConfigStorageRight(int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DeleteButtonConfigStorageRight(count);
}

Result DeleteButtonConfigStorageJoyConGrip(int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->DeleteButtonConfigStorageJoyConGrip(count);
}

Result IsUsingCustomButtonConfig(
  bool* pOutBool, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsUsingCustomButtonConfig(&value, uniquePadId);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsAnyCustomButtonConfigEnabled(bool* pOutBool) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsAnyCustomButtonConfigEnabled(&value);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result SetAllCustomButtonConfigEnabled(bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetAllCustomButtonConfigEnabled(
    isEnabled, utility::GetAppletResourceUserId());
}

Result SetDefaultButtonConfig(const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetDefaultButtonConfig(uniquePadId);
}

Result SetAllDefaultButtonConfig() {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetAllDefaultButtonConfig();
}

Result SetButtonConfigVisible(const UniquePadId& uniquePadId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfigVisible(uniquePadId, isEnabled);
}

Result IsButtonConfigVisible(bool* pOutBool, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsButtonConfigVisible(pOutBool, uniquePadId);
}

Result SetButtonConfig(
  const hidconfig::ButtonConfigEmbedded& buttonConfigEmbedded,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfig(buttonConfigEmbedded, uniquePadId);
}

Result SetButtonConfig(const hidconfig::ButtonConfigFull& buttonConfigFull,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfig(buttonConfigFull, uniquePadId);
}

Result SetButtonConfig(const hidconfig::ButtonConfigLeft& buttonConfigLeft,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfig(buttonConfigLeft, uniquePadId);
}

Result SetButtonConfig(const hidconfig::ButtonConfigRight& buttonConfigRight,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfig(buttonConfigRight, uniquePadId);
}

Result IsUsingCustomButtonConfig(bool* pOutBool, unsigned int unsignedint) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->IsUsingCustomButtonConfig(pOutBool, unsignedint);
}

Result SetDefaultButtonConfig(unsigned int unsignedint) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetDefaultButtonConfig(unsignedint);
}

}

namespace nn::hid::system::detail {

Result IsDefaultButtonConfig(bool* pOutBool, const hidconfig::ButtonConfigJoyConGrip& buttonConfigJoyConGrip) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsDefaultButtonConfig(&value, buttonConfigJoyConGrip);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result IsDefaultButtonConfig(bool* pOutBool, const hidconfig::ButtonConfigBack& buttonConfigBack) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  bool value = {};
  const Result result = proxy->IsDefaultButtonConfig(&value, buttonConfigBack);
  if (result.IsSuccess()) {
    *pOutBool = value;
  }
  return result;
}

Result SetButtonConfigStorage(const hidconfig::ButtonConfigJoyConGrip& buttonConfigJoyConGrip, const hidconfig::StorageName& storageName, int count) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfigStorage(buttonConfigJoyConGrip, storageName, count);
}

Result SetButtonConfig(const hidconfig::ButtonConfigJoyConGrip& buttonConfigJoyConGrip, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfig(buttonConfigJoyConGrip, uniquePadId);
}

Result GetButtonConfig(hidconfig::ButtonConfigJoyConGrip* pOutButtonConfigJoyConGrip, const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  hidconfig::ButtonConfigJoyConGrip value = {};
  const Result result = proxy->GetButtonConfig(&value, uniquePadId);
  if (result.IsSuccess()) {
    *pOutButtonConfigJoyConGrip = value;
  }
  return result;
}

Result SetButtonConfig(const hidconfig::ButtonConfigBack& buttonConfigBack, unsigned int unsignedint) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->SetButtonConfig(buttonConfigBack, unsignedint);
}

Result GetButtonConfig(hidconfig::ButtonConfigBack* pOutButtonConfigBack, unsigned int unsignedint) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  hidconfig::ButtonConfigBack value = {};
  const Result result = proxy->GetButtonConfig(&value, unsignedint);
  if (result.IsSuccess()) {
    *pOutButtonConfigBack = value;
  }
  return result;
}

}
