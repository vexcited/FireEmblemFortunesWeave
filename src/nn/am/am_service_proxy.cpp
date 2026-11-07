#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<am::service::IAppletAccessor,
  DomainKind>;
template class CmifProxyMethods<am::service::IAppletAlternativeFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IAppletCommonFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IApplicationAccessor,
  DomainKind>;
template class CmifProxyMethods<am::service::IApplicationCreator,
  DomainKind>;
template class CmifProxyMethods<am::service::IApplicationFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IApplicationObserver,
  DomainKind>;
template class CmifProxyMethods<am::service::IAudioController,
  DomainKind>;
template class CmifProxyMethods<am::service::ICMenuFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IChatFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::ICommonStateGetter,
  DomainKind>;
template class CmifProxyMethods<am::service::ICradleFirmwareUpdater,
  DomainKind>;
template class CmifProxyMethods<am::service::IDebugFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IDisplayController,
  DomainKind>;
template class CmifProxyMethods<am::service::IFocusableLayer,
  DomainKind>;
template class CmifProxyMethods<am::service::IGlobalStateController,
  DomainKind>;
template class CmifProxyMethods<am::service::IGpuErrorHandler,
  DomainKind>;
template class CmifProxyMethods<
  am::service::IGraphicsScalingParametersFunctions, DomainKind>;
template class CmifProxyMethods<am::service::IHomeMenuFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::ILibraryAppletAccessor,
  DomainKind>;
template class CmifProxyMethods<am::service::ILibraryAppletAgent,
  DomainKind>;
template class CmifProxyMethods<am::service::ILibraryAppletSelfAccessor,
  DomainKind>;
template class CmifProxyMethods<am::service::ILockAccessor,
  DomainKind>;
template class CmifProxyMethods<am::service::INotificationReceiver,
  DomainKind>;
template class CmifProxyMethods<am::service::INotificationSender,
  DomainKind>;
template class CmifProxyMethods<am::service::INxCompatApplicationFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IOverlayFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IPerformanceFunctions,
  DomainKind>;
template class CmifProxyMethods<am::service::IProcessWindingController,
  DomainKind>;
template class CmifProxyMethods<am::service::ISelfController,
  DomainKind>;
template class CmifProxyMethods<am::service::IStorageAccessor,
  DomainKind>;
template class CmifProxyMethods<am::service::IStorageChannel,
  DomainKind>;
template class CmifProxyMethods<am::service::ISystemAppletControllerForDebug,
  DomainKind>;
template class CmifProxyMethods<am::service::IWindowController,
  DomainKind>;

}
