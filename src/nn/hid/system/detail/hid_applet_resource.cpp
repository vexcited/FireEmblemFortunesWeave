#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/detail/hid_api.hpp"
#include "nn/hid/detail/hid_server.hpp"
#include "nn/hid/detail/hid_utility.hpp"

namespace nn::hid::system::detail {

Result GetAppletResourceProperty(
  AppletResourceProperty* pOutAppletResourceProperty,
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->GetAppletResourceProperty(
    pOutAppletResourceProperty, appletResourceUserId);
}

Result ConvertAppletDetailedUiTypeFromPlayReportType(
  AppletDetailedUiType* pOutAppletDetailedUiType, unsigned int unsignedint) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->ConvertAppletDetailedUiTypeFromPlayReportType(
    pOutAppletDetailedUiType, unsignedint);
}

Result GetAppletFooterUiTypes(
  AppletFooterUiType* pOutAppletFooterUiType, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetAppletFooterUiTypes(pOutAppletFooterUiType, id);
}

Result GetAppletDetailedUiTypes(
  AppletDetailedUiType* pOutAppletDetailedUiType, const NpadIdType& id) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetAppletDetailedUiTypes(pOutAppletDetailedUiType, id);
}

Result GetAppletDetailedUiType(AppletDetailedUiType* pOutAppletDetailedUiType,
  const UniquePadId& uniquePadId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  server::CreateHidSystemServerProxy(&proxy);
  return proxy->GetAppletDetailedUiType(pOutAppletDetailedUiType, uniquePadId);
}

Result SetAppletResourceUserId(
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->SetAppletResourceUserId(appletResourceUserId);
}

Result RegisterAppletResourceUserId(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled,
  applet::ApplicationSpec applicationSpec) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->RegisterAppletResourceUserId(
    appletResourceUserId, isEnabled, applicationSpec);
}

Result UnregisterAppletResourceUserId(
  const applet::AppletResourceUserId& appletResourceUserId) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->UnregisterAppletResourceUserId(appletResourceUserId);
}

Result EnableAppletToGetInput(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableAppletToGetInput(appletResourceUserId, isEnabled);
}

Result EnableAppletToGetPadInput(
  const applet::AppletResourceUserId& appletResourceUserId, bool isEnabled) {
  sf::SharedPointer<IHidSystemServer> proxy;
  NN_RESULT_DO(server::CreateHidSystemServerProxy(&proxy));
  return proxy->EnableAppletToGetPadInput(appletResourceUserId, isEnabled);
}

}
