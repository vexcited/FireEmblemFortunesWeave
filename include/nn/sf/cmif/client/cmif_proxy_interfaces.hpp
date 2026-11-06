#pragma once

#include "nn/sf/cmif/client/cmif_proxy_factory.hpp"

namespace nn::account::detail {

class IAsyncContext;

}

namespace nn::am::service {

class IAppletAccessor;
class IAppletAlternativeFunctions;
class IAppletCommonFunctions;
class IApplicationAccessor;
class IApplicationCreator;
class IApplicationFunctions;
class IApplicationObserver;
class IApplicationProxy;
class IAudioController;
class ICMenuFunctions;
class ICMenuProxy;
class IChatFunctions;
class IChatProxy;
class ICommonStateGetter;
class ICradleFirmwareUpdater;
class IDebugFunctions;
class IDisplayController;
class IFloatingLibraryAppletAccepter;
class IFocusableLayer;
class IGlobalStateController;
class IGpuErrorHandler;
class IGraphicsScalingParametersFunctions;
class IHomeMenuFunctions;
class ILibraryAppletAccessor;
class ILibraryAppletAgent;
class ILibraryAppletCreator;
class ILibraryAppletProxy;
class ILibraryAppletSelfAccessor;
class ILockAccessor;
class IMovieMaker;
class IMovieWriter;
class INotificationReceiver;
class INotificationSender;
class INxCompatApplicationFunctions;
class IOverlayAppletProxy;
class IOverlayFunctions;
class IPerformanceFunctions;
class IProcessWindingController;
class IReceiverService;
class ISelfController;
class ISenderService;
class IStorage;
class IStorageAccessor;
class IStorageChannel;
class ISystemAppletControllerForDebug;
class ISystemAppletProxy;
class ISystemProcessCommonFunctions;
class ITransferStorageAccessor;
class IWindow;
class IWindowController;

}

namespace nn::grcsrv {

class IGameMovieTrimmer;
class IMovieMaker;
class IMovieWriter;

}

namespace nns::hosbinder {

class IHOSBinderDriver;

}

namespace nn::ec {

class IContentsServiceManager;
class IPurchaseEventManager;

}

namespace nn::ec::detail {

class IAsyncData;

}

namespace nn::audio::detail {

class IAudioDevice;
class IAudioIn;
class IAudioInManager;
class IAudioOut;
class IAudioOutManager;
class IAudioRenderer;
class IAudioRendererManager;
class ISpatialDownmixOutputModeManager;

}

namespace nn::audio::karaoke {

class IClientSession;
class IKaraokeService;

}

namespace nn::audio::devmgr {

class ISystemSession;
class IUserSession;

}

namespace nn::audio::sysmix {

class IExternalStreamSession;
class IUserSession;

}

namespace nn::audio::adspshell {

class IAdspShellSession;

}

namespace nn::audio::dpm {

class IClientManager;
class IClientSession;

}

namespace nn::bcat::ipc {

class IBcatService;
class IDeliveryCacheDirectoryService;
class IDeliveryCacheFileService;
class IDeliveryCacheProgressService;
class IDeliveryCacheStorageService;
class IDeliveryTaskSuspensionService;
class INotifierService;

}

namespace nn::capsrv::sf {

class IAlbumAccessorApplicationSession;

}

namespace nn::codec::detail {

class IHardwareOpusDecoder;

}

namespace nn::codec::hwacod {

class IClientSession;
class IHardwareAudioCodecManagerSession;

}

namespace nn::nim::detail {

class IShopServiceAccessServer;
class IShopServiceAccessor;
class IShopServiceAsync;

}

namespace nn::err::context {

class IContextRegistrar;

}

namespace nn::friends::detail::ipc {

class IDaemonSuspendSessionService;
class IFriendService;
class INotificationService;
class IUserHandle;

}

namespace nn::jitsrv {

class IJitEnvironment;

}

namespace nn::lm {

class IDevNotificationReceiver;
class ILogger;
class ISharedMemoryAccessor;

}

namespace nn::mii::detail {

class IDatabaseService;

}

namespace nn::nifm::detail {

class IGeneralService;
class INetworkProfile;
class IRequest;
class IScanRequest;

}

namespace nn::pctl::detail::ipc {

class IParentalControlService;

}

namespace nn::prepo::detail::ipc {

class IAsyncContext;

}

namespace nn::settings {

class ISettingsItemKeyIterator;

}

namespace nn::timesrv::detail::service {

class ISteadyClock;
class ISystemClock;
class ITimeZoneService;

}

namespace nn::ntc::detail::service {

class IEnsureNetworkClockAvailabilityService;

}

namespace nn::chat {

class IUserLayoutCustomizationShimScopedObject;
class IUserSelectiveTalkShimScopedObject;
class IUserShimScopedObject;
class IVirtualCameraShimScopedObject;

}

namespace nn::hid {

class IActiveVibrationDeviceList;
class IAppletResource;

}

namespace nn::imf {

class ISession;

}

namespace nn::sf::cmif::client::detail {

using PlainKind = hipc::client::Hipc2ProxyKindBase<
  hipc::detail::MessageType::CmifRequestWithContext>;
using DomainKind = CmifDomainProxyKind<
  hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

template <>
struct ProxyMethodCount<nn::account::detail::IAsyncContext> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::am::service::ICommonStateGetter> {
  static constexpr int Value = 67;
};

template <>
struct ProxyMethodCount<nn::am::service::ILockAccessor> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::am::service::IGpuErrorHandler> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::am::service::ISelfController> {
  static constexpr int Value = 65;
};

template <>
struct ProxyMethodCount<nn::am::service::IStorageChannel> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::am::service::IStorage> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::am::service::IStorageAccessor> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::am::service::ITransferStorageAccessor> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::am::service::IWindowController> {
  static constexpr int Value = 8;
};

template <>
struct ProxyMethodCount<nn::am::service::IWindow> {
  static constexpr int Value = 0;
};

template <>
struct ProxyMethodCount<nn::am::service::IAudioController> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::am::service::IDisplayController> {
  static constexpr int Value = 28;
};

template <>
struct ProxyMethodCount<nn::am::service::IDebugFunctions> {
  static constexpr int Value = 41;
};

template <>
struct ProxyMethodCount<nn::am::service::IFloatingLibraryAppletAccepter> {
  static constexpr int Value = 0;
};

template <>
struct ProxyMethodCount<nn::am::service::IProcessWindingController> {
  static constexpr int Value = 8;
};

template <>
struct ProxyMethodCount<nn::am::service::ILibraryAppletAccessor> {
  static constexpr int Value = 25;
};

template <>
struct ProxyMethodCount<nn::am::service::IAppletAccessor> {
  static constexpr int Value = 7;
};

template <>
struct ProxyMethodCount<nn::am::service::ILibraryAppletCreator> {
  static constexpr int Value = 7;
};

template <>
struct ProxyMethodCount<nn::am::service::IHomeMenuFunctions> {
  static constexpr int Value = 17;
};

template <>
struct ProxyMethodCount<nn::am::service::IGlobalStateController> {
  static constexpr int Value = 17;
};

template <>
struct ProxyMethodCount<nn::am::service::ICradleFirmwareUpdater> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::am::service::IApplicationCreator> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::am::service::IApplicationAccessor> {
  static constexpr int Value = 30;
};

template <>
struct ProxyMethodCount<nn::am::service::IAppletCommonFunctions> {
  static constexpr int Value = 84;
};

template <>
struct ProxyMethodCount<nn::am::service::IReceiverService> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::am::service::INotificationReceiver> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::am::service::ISenderService> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::am::service::INotificationSender> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::am::service::IApplicationObserver> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::am::service::ILibraryAppletSelfAccessor> {
  static constexpr int Value = 36;
};

template <>
struct ProxyMethodCount<nn::grcsrv::IGameMovieTrimmer> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::am::service::IOverlayFunctions> {
  static constexpr int Value = 25;
};

template <>
struct ProxyMethodCount<nn::am::service::ICMenuFunctions> {
  static constexpr int Value = 29;
};

template <>
struct ProxyMethodCount<nn::am::service::ILibraryAppletAgent> {
  static constexpr int Value = 18;
};

template <>
struct ProxyMethodCount<nn::am::service::IFocusableLayer> {
  static constexpr int Value = 22;
};

template <>
struct ProxyMethodCount<nn::am::service::IChatFunctions> {
  static constexpr int Value = 18;
};

template <>
struct ProxyMethodCount<nn::am::service::INxCompatApplicationFunctions> {
  static constexpr int Value = 12;
};

template <>
struct ProxyMethodCount<nn::am::service::IMovieMaker> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::grcsrv::IMovieMaker> {
  static constexpr int Value = 15;
};

template <>
struct ProxyMethodCount<nns::hosbinder::IHOSBinderDriver> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::am::service::IApplicationProxy> {
  static constexpr int Value = 11;
};

template <>
struct ProxyMethodCount<nn::am::service::IApplicationFunctions> {
  static constexpr int Value = 72;
};

template <>
struct ProxyMethodCount<nn::am::service::IMovieWriter> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::grcsrv::IMovieWriter> {
  static constexpr int Value = 7;
};

template <>
struct ProxyMethodCount<nn::am::service::IPerformanceFunctions> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::am::service::IGraphicsScalingParametersFunctions> {
  static constexpr int Value = 7;
};

template <>
struct ProxyMethodCount<nn::am::service::ISystemAppletProxy> {
  static constexpr int Value = 12;
};

template <>
struct ProxyMethodCount<nn::am::service::ILibraryAppletProxy> {
  static constexpr int Value = 12;
};

template <>
struct ProxyMethodCount<nn::am::service::IOverlayAppletProxy> {
  static constexpr int Value = 11;
};

template <>
struct ProxyMethodCount<nn::am::service::ICMenuProxy> {
  static constexpr int Value = 12;
};

template <>
struct ProxyMethodCount<nn::am::service::ISystemAppletControllerForDebug> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::am::service::ISystemProcessCommonFunctions> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::am::service::IAppletAlternativeFunctions> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::am::service::IChatProxy> {
  static constexpr int Value = 9;
};

template <>
struct ProxyMethodCount<nn::ec::IPurchaseEventManager> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::ec::IContentsServiceManager> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::ec::detail::IAsyncData> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioInManager> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioIn> {
  static constexpr int Value = 15;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioOutManager> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioOut> {
  static constexpr int Value = 14;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioRendererManager> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioRenderer> {
  static constexpr int Value = 14;
};

template <>
struct ProxyMethodCount<nn::audio::detail::IAudioDevice> {
  static constexpr int Value = 21;
};

template <>
struct ProxyMethodCount<nn::audio::detail::ISpatialDownmixOutputModeManager> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::audio::karaoke::IKaraokeService> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::audio::karaoke::IClientSession> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::audio::devmgr::IUserSession> {
  static constexpr int Value = 18;
};

template <>
struct ProxyMethodCount<nn::audio::sysmix::IUserSession> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::audio::sysmix::IExternalStreamSession> {
  static constexpr int Value = 13;
};

template <>
struct ProxyMethodCount<nn::audio::adspshell::IAdspShellSession> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::audio::dpm::IClientManager> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::audio::dpm::IClientSession> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::audio::devmgr::ISystemSession> {
  static constexpr int Value = 47;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::IBcatService> {
  static constexpr int Value = 25;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::IDeliveryCacheProgressService> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::INotifierService> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::IDeliveryTaskSuspensionService> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::IDeliveryCacheStorageService> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::IDeliveryCacheFileService> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::bcat::ipc::IDeliveryCacheDirectoryService> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::capsrv::sf::IAlbumAccessorApplicationSession> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::codec::detail::IHardwareOpusDecoder> {
  static constexpr int Value = 10;
};

template <>
struct ProxyMethodCount<nn::codec::hwacod::IClientSession> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::codec::hwacod::IHardwareAudioCodecManagerSession> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::nim::detail::IShopServiceAccessServer> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::nim::detail::IShopServiceAccessor> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::nim::detail::IShopServiceAsync> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::err::context::IContextRegistrar> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::friends::detail::ipc::IFriendService> {
  static constexpr int Value = 115;
};

template <>
struct ProxyMethodCount<nn::friends::detail::ipc::IUserHandle> {
  static constexpr int Value = 0;
};

template <>
struct ProxyMethodCount<nn::friends::detail::ipc::INotificationService> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<
  nn::friends::detail::ipc::IDaemonSuspendSessionService> {
  static constexpr int Value = 0;
};

template <>
struct ProxyMethodCount<nn::jitsrv::IJitEnvironment> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::lm::IDevNotificationReceiver> {
  static constexpr int Value = 2;
};

template <>
struct ProxyMethodCount<nn::lm::ILogger> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::lm::ISharedMemoryAccessor> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::mii::detail::IDatabaseService> {
  static constexpr int Value = 27;
};

template <>
struct ProxyMethodCount<nn::nifm::detail::IGeneralService> {
  static constexpr int Value = 64;
};

template <>
struct ProxyMethodCount<nn::nifm::detail::IScanRequest> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::nifm::detail::IRequest> {
  static constexpr int Value = 26;
};

template <>
struct ProxyMethodCount<nn::nifm::detail::INetworkProfile> {
  static constexpr int Value = 4;
};

template <>
struct ProxyMethodCount<nn::pctl::detail::ipc::IParentalControlService> {
  static constexpr int Value = 143;
};

template <>
struct ProxyMethodCount<nn::prepo::detail::ipc::IAsyncContext> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::settings::ISettingsItemKeyIterator> {
  static constexpr int Value = 3;
};

template <>
struct ProxyMethodCount<nn::timesrv::detail::service::ISystemClock> {
  static constexpr int Value = 5;
};

template <>
struct ProxyMethodCount<nn::timesrv::detail::service::ISteadyClock> {
  static constexpr int Value = 7;
};

template <>
struct ProxyMethodCount<nn::timesrv::detail::service::ITimeZoneService> {
  static constexpr int Value = 14;
};

template <>
struct ProxyMethodCount<
  nn::ntc::detail::service::IEnsureNetworkClockAvailabilityService> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::chat::IUserShimScopedObject> {
  static constexpr int Value = 22;
};

template <>
struct ProxyMethodCount<nn::chat::IUserLayoutCustomizationShimScopedObject> {
  static constexpr int Value = 7;
};

template <>
struct ProxyMethodCount<nn::chat::IVirtualCameraShimScopedObject> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::chat::IUserSelectiveTalkShimScopedObject> {
  static constexpr int Value = 6;
};

template <>
struct ProxyMethodCount<nn::hid::IAppletResource> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::hid::IActiveVibrationDeviceList> {
  static constexpr int Value = 1;
};

template <>
struct ProxyMethodCount<nn::imf::ISession> {
  static constexpr int Value = 15;
};

}
