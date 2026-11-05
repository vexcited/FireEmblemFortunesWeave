#include "nn/am/interfaces.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::am {

namespace detail {

using ObjectHolder = sf::SharedPointer<sf::IServiceObject>;

extern ObjectHolder g_ApplicationProxy;
extern ObjectHolder g_GraphicsScalingParametersFunctions;
extern ObjectHolder g_PerformanceFunctions;
extern ObjectHolder g_AppletCommonFunctions;
extern ObjectHolder g_SystemAppletProxy;
extern ObjectHolder g_HomeMenuFunctions;
extern ObjectHolder g_GlobalStateController;
extern ObjectHolder g_ApplicationCreator;
extern ObjectHolder g_LibraryAppletProxy;
extern ObjectHolder g_LibraryAppletSelfAccessor;
extern ObjectHolder g_ProcessWindingController;
extern ObjectHolder g_LibraryAppletAgent;
extern ObjectHolder g_OverlayAppletProxy;
extern ObjectHolder g_OverlayFunctions;
extern ObjectHolder g_CMenuProxy;
extern ObjectHolder g_CMenuFunctions;
extern ObjectHolder g_ChatProxy;
extern ObjectHolder g_ChatFunctions;
extern ObjectHolder g_SystemProcessCommonFunctions;
extern ObjectHolder g_AppletAlternativeFunctions;
extern ObjectHolder g_LibraryAppletCreator;
extern ObjectHolder g_AudioController;
extern ObjectHolder g_DisplayController;
extern ObjectHolder g_DebugFunctions;
extern void (*g_LibraryAppletResolver)();
extern applet::AppletResourceUserId g_AppletResourceUserId;

}

namespace {

// The proxy objects are handed out as opaque pointers. A temporary reference
// keeps the object alive while its pointer is read.
Interface* AccessInterface(const detail::ObjectHolder& holder) {
  return reinterpret_cast<Interface*>(detail::ObjectHolder(holder).Get());
}

bool IsHolding(const detail::ObjectHolder& holder) {
  return static_cast<bool>(detail::ObjectHolder(holder));
}

}

Interface* GetGraphicsScalingParametersFunctions() {
  return AccessInterface(detail::g_GraphicsScalingParametersFunctions);
}

Interface* GetPerformanceFunctions() {
  return AccessInterface(detail::g_PerformanceFunctions);
}

Interface* GetAppletCommonFunctions() {
  return AccessInterface(detail::g_AppletCommonFunctions);
}

Interface* GetSystemAppletProxy() {
  return AccessInterface(detail::g_SystemAppletProxy);
}

Interface* GetHomeMenuFunctions() {
  return AccessInterface(detail::g_HomeMenuFunctions);
}

Interface* GetGlobalStateController() {
  return AccessInterface(detail::g_GlobalStateController);
}

Interface* GetApplicationCreator() {
  return AccessInterface(detail::g_ApplicationCreator);
}

Interface* GetLibraryAppletProxy() {
  return AccessInterface(detail::g_LibraryAppletProxy);
}

Interface* GetLibraryAppletSelfAccessor() {
  return AccessInterface(detail::g_LibraryAppletSelfAccessor);
}

Interface* GetOverlayAppletProxy() {
  return AccessInterface(detail::g_OverlayAppletProxy);
}

Interface* GetOverlayFunctions() {
  return AccessInterface(detail::g_OverlayFunctions);
}

Interface* GetCMenuProxy() {
  return AccessInterface(detail::g_CMenuProxy);
}

Interface* GetCMenuFunctions() {
  return AccessInterface(detail::g_CMenuFunctions);
}

Interface* GetLibraryAppletAgent() {
  return AccessInterface(detail::g_LibraryAppletAgent);
}

Interface* GetChatProxy() {
  return AccessInterface(detail::g_ChatProxy);
}

Interface* GetChatFunctions() {
  return AccessInterface(detail::g_ChatFunctions);
}

Interface* GetSystemProcessCommonFunctions() {
  return AccessInterface(detail::g_SystemProcessCommonFunctions);
}

Interface* GetAppletAlternativeFunctions() {
  return AccessInterface(detail::g_AppletAlternativeFunctions);
}

Interface* GetApplicationProxy() {
  return AccessInterface(detail::g_ApplicationProxy);
}

Interface* GetLibraryAppletCreator() {
  return AccessInterface(detail::g_LibraryAppletCreator);
}

Interface* GetProcessWindingController() {
  return AccessInterface(detail::g_ProcessWindingController);
}

Interface* GetAudioController() {
  return AccessInterface(detail::g_AudioController);
}

Interface* GetDisplayController() {
  return AccessInterface(detail::g_DisplayController);
}

Interface* GetDebugFunctions() {
  return AccessInterface(detail::g_DebugFunctions);
}

bool IsInitializedAsApplication() {
  return IsHolding(detail::g_ApplicationProxy);
}

bool IsInitializedAsSystemApplet() {
  return IsHolding(detail::g_SystemAppletProxy);
}

bool IsInitializedAsLibraryApplet() {
  return IsHolding(detail::g_LibraryAppletProxy);
}

bool IsInitializedAsOverlayApplet() {
  return IsHolding(detail::g_OverlayAppletProxy);
}

void SetLibraryAppletResolver(void (*resolver)()) {
  detail::g_LibraryAppletResolver = resolver;
}

applet::AppletResourceUserId GetAppletResourceUserId() {
  return detail::g_AppletResourceUserId;
}

}
