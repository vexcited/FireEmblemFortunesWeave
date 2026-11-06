#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

using namespace nn::sf::cmif::client::detail;

template void OutObjectCreator::Create<
  nn::account::detail::IAsyncContext, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ICommonStateGetter, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ILockAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IGpuErrorHandler, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ISelfController, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IStorageChannel, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IStorage, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IStorageAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ITransferStorageAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IWindowController, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IWindow, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IAudioController, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IDisplayController, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IDebugFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IFloatingLibraryAppletAccepter, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IProcessWindingController, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ILibraryAppletAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IAppletAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ILibraryAppletCreator, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IHomeMenuFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IGlobalStateController, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ICradleFirmwareUpdater, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IApplicationCreator, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IApplicationAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IAppletCommonFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IReceiverService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::INotificationReceiver, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ISenderService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::INotificationSender, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IApplicationObserver, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ILibraryAppletSelfAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::grcsrv::IGameMovieTrimmer, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IOverlayFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ICMenuFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ILibraryAppletAgent, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IFocusableLayer, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IChatFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::INxCompatApplicationFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IMovieMaker, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::grcsrv::IMovieMaker, DomainKind>(int);

template void OutObjectCreator::Create<
  nns::hosbinder::IHOSBinderDriver, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IApplicationProxy, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IApplicationFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IMovieWriter, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::grcsrv::IMovieWriter, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IPerformanceFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IGraphicsScalingParametersFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ISystemAppletProxy, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ILibraryAppletProxy, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IOverlayAppletProxy, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ICMenuProxy, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ISystemAppletControllerForDebug, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::ISystemProcessCommonFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IAppletAlternativeFunctions, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::am::service::IChatProxy, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::ec::IPurchaseEventManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::ec::IContentsServiceManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::ec::detail::IAsyncData, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioInManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioIn, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioOutManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioOut, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioRendererManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioRenderer, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::IAudioDevice, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::detail::ISpatialDownmixOutputModeManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::karaoke::IKaraokeService, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::karaoke::IClientSession, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::devmgr::IUserSession, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::sysmix::IUserSession, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::sysmix::IExternalStreamSession, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::adspshell::IAdspShellSession, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::dpm::IClientManager, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::dpm::IClientSession, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::audio::devmgr::ISystemSession, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::IBcatService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::IDeliveryCacheProgressService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::INotifierService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::IDeliveryTaskSuspensionService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::IDeliveryCacheStorageService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::IDeliveryCacheFileService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::bcat::ipc::IDeliveryCacheDirectoryService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::capsrv::sf::IAlbumAccessorApplicationSession, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::codec::detail::IHardwareOpusDecoder, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::codec::hwacod::IClientSession, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::codec::hwacod::IHardwareAudioCodecManagerSession, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::nim::detail::IShopServiceAccessServer, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::nim::detail::IShopServiceAccessor, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::nim::detail::IShopServiceAsync, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::err::context::IContextRegistrar, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::friends::detail::ipc::IFriendService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::friends::detail::ipc::IUserHandle, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::friends::detail::ipc::INotificationService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::friends::detail::ipc::IDaemonSuspendSessionService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::jitsrv::IJitEnvironment, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::lm::IDevNotificationReceiver, DomainKind>(int);

template void OutObjectCreator::Create<nn::lm::ILogger, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::lm::ISharedMemoryAccessor, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::mii::detail::IDatabaseService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::nifm::detail::IGeneralService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::nifm::detail::IScanRequest, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::nifm::detail::IRequest, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::nifm::detail::INetworkProfile, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::pctl::detail::ipc::IParentalControlService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::prepo::detail::ipc::IAsyncContext, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::settings::ISettingsItemKeyIterator, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::timesrv::detail::service::ISystemClock, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::timesrv::detail::service::ISteadyClock, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::timesrv::detail::service::ITimeZoneService, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::ntc::detail::service::IEnsureNetworkClockAvailabilityService,
  PlainKind>(int);

template void OutObjectCreator::Create<
  nn::chat::IUserShimScopedObject, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::chat::IUserLayoutCustomizationShimScopedObject, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::chat::IVirtualCameraShimScopedObject, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::chat::IUserSelectiveTalkShimScopedObject, DomainKind>(int);

template void OutObjectCreator::Create<
  nn::hid::IAppletResource, PlainKind>(int);

template void OutObjectCreator::Create<
  nn::hid::IActiveVibrationDeviceList, PlainKind>(int);

template void OutObjectCreator::Create<nn::imf::ISession, PlainKind>(int);
