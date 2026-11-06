#pragma once

#include <stdint.h>

#include "nn/account/account_types.hpp"
#include "nn/bcat/bcat_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/os/process_id.hpp"
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

class IServiceCreator;
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

class IWriterForApplication;
class IContextRegistrar;

}

namespace nn::friends::detail::ipc {

class IServiceCreator;
class IDaemonSuspendSessionService;
class IFriendService;
class INotificationService;
class IUserHandle;

}

namespace nn::jitsrv {

class IJitEnvironment;

}

namespace nn::lm {

class ILogService;
class IDevNotificationReceiver;
class ILogger;
class ISharedMemoryAccessor;

}

namespace nn::mii::detail {

class IStaticService;
class IDatabaseService;

}

namespace nn::nifm::detail {

class IStaticService;
class IGeneralService;
class INetworkProfile;
class IRequest;
class IScanRequest;

}

namespace nn::pctl::detail::ipc {

class IParentalControlServiceFactory;
class IParentalControlService;

}

namespace nn::prepo::detail::ipc {

class IAsyncContext;

}

namespace nn::settings {

class ISettingsItemKeyIterator;

}

namespace nn::timesrv::detail::service {

class IStaticService;
class ISteadyClock;
class ISystemClock;
class ITimeZoneService;

}

namespace nn::ntc::detail::service {

class IEnsureNetworkClockAvailabilityService;

}

namespace nn::chat {

class IUserService;
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

namespace nn::audio {

class IUserClientSession;

}

namespace nn::audio::sysdev {

class ISessionManager;

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

// Method tables of the proxies whose methods return objects.

namespace nn::sf::cmif::client::detail {

template <typename Kind>
class CmifProxyMethods<timesrv::detail::service::IStaticService, Kind>
  : public CmifProxyMethodsBase<
      timesrv::detail::service::IStaticService, Kind> {
public:
  virtual Result GetStandardUserSystemClock(
    const Out<SharedPointer<timesrv::detail::service::ISystemClock>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result GetStandardNetworkSystemClock(
    const Out<SharedPointer<timesrv::detail::service::ISystemClock>>& out) {
    return this->template ProcessWithOutObject<false, 1>(out);
  }

  virtual Result GetStandardSteadyClock(
    const Out<SharedPointer<timesrv::detail::service::ISteadyClock>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  virtual Result GetTimeZoneService(
    const Out<SharedPointer<timesrv::detail::service::ITimeZoneService>>& out) {
    return this->template ProcessWithOutObject<false, 3>(out);
  }

  virtual Result GetStandardLocalSystemClock(
    const Out<SharedPointer<timesrv::detail::service::ISystemClock>>& out) {
    return this->template ProcessWithOutObject<false, 4>(out);
  }

  virtual Result GetEphemeralNetworkSystemClock(
    const Out<SharedPointer<timesrv::detail::service::ISystemClock>>& out) {
    return this->template ProcessWithOutObject<false, 5>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(20)
};

template <typename Kind>
class CmifProxyMethods<bcat::ipc::IBcatService, Kind>
  : public CmifProxyMethodsBase<bcat::ipc::IBcatService, Kind> {
public:
  virtual Result RequestSyncDeliveryCache(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>& out) {
    return this->template ProcessWithOutObject<false, 10100>(out);
  }

  virtual Result RequestSyncDeliveryCacheWithDirectoryName(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>& out,
    const bcat::DirectoryName& directoryName) {
    return this->template ProcessWithOutObject<false, 10101>(
      out, directoryName);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)

  virtual Result RequestSyncDeliveryCacheWithApplicationId(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>& out,
    ApplicationId applicationId, uint32_t version) {
    return this->template ProcessWithOutObject<false, 20100>(
      out, applicationId, version);
  }

  virtual Result RequestSyncDeliveryCacheWithApplicationIdAndDirectoryName(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>& out,
    ApplicationId applicationId, uint32_t version,
    const bcat::DirectoryName& directoryName) {
    return this->template ProcessWithOutObject<false, 20101>(
      out, applicationId, version, directoryName);
  }

  virtual Result GetDeliveryCacheStorageUpdateNotifier(
    const Out<SharedPointer<bcat::ipc::INotifierService>>& out,
    ApplicationId applicationId) {
    return this->template ProcessWithOutObject<false, 20300>(
      out, applicationId);
  }

  virtual Result RequestSuspendDeliveryTask(
    const Out<SharedPointer<bcat::ipc::IDeliveryTaskSuspensionService>>& out,
    ApplicationId applicationId) {
    return this->template ProcessWithOutObject<false, 20301>(
      out, applicationId);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(20)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(21)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(22)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(23)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(24)
};

template <typename Kind>
class CmifProxyMethods<bcat::ipc::IServiceCreator, Kind>
  : public CmifProxyMethodsBase<bcat::ipc::IServiceCreator, Kind> {
public:
  virtual Result CreateBcatService(
    const Out<SharedPointer<bcat::ipc::IBcatService>>& out,
    os::ProcessId processId) {
    return this->template ProcessWithOutObject<true, 0>(out, processId);
  }

  virtual Result CreateDeliveryCacheStorageService(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheStorageService>>& out,
    os::ProcessId processId) {
    return this->template ProcessWithOutObject<true, 1>(out, processId);
  }

  virtual Result CreateDeliveryCacheStorageServiceWithApplicationId(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheStorageService>>& out,
    ApplicationId applicationId) {
    return this->template ProcessWithOutObject<false, 2>(out, applicationId);
  }
};

template <typename Kind>
class CmifProxyMethods<bcat::ipc::IDeliveryCacheStorageService, Kind>
  : public CmifProxyMethodsBase<bcat::ipc::IDeliveryCacheStorageService, Kind> {
public:
  virtual Result CreateFileService(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheFileService>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result CreateDirectoryService(
    const Out<SharedPointer<bcat::ipc::IDeliveryCacheDirectoryService>>& out) {
    return this->template ProcessWithOutObject<false, 1>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(2)
};

template <typename Kind>
class CmifProxyMethods<friends::detail::ipc::IServiceCreator, Kind>
  : public CmifProxyMethodsBase<friends::detail::ipc::IServiceCreator, Kind> {
public:
  virtual Result CreateFriendService(
    const Out<SharedPointer<friends::detail::ipc::IFriendService>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result CreateNotificationService(
    const Out<SharedPointer<friends::detail::ipc::INotificationService>>& out,
    const account::Uid& uid) {
    return this->template ProcessWithOutObject<false, 1>(out, uid);
  }

  virtual Result CreateDaemonSuspendSessionService(
    const Out<SharedPointer<
      friends::detail::ipc::IDaemonSuspendSessionService>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<nifm::detail::IStaticService, Kind>
  : public CmifProxyMethodsBase<nifm::detail::IStaticService, Kind> {
public:
  virtual Result Command4(
    const Out<SharedPointer<nifm::detail::IGeneralService>>& out) {
    return this->template ProcessWithOutObject<false, 4>(out);
  }

  virtual Result CreateGeneralService(
    const Out<SharedPointer<nifm::detail::IGeneralService>>& out,
    uint64_t processId) {
    return this->template ProcessWithOutObject<true, 5>(out, processId);
  }
};

template <typename Kind>
class CmifProxyMethods<nifm::detail::IGeneralService, Kind>
  : public CmifProxyMethodsBase<nifm::detail::IGeneralService, Kind> {
public:
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(0)

  virtual Result CreateScanRequest(
    const Out<SharedPointer<nifm::detail::IScanRequest>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  virtual Result CreateRequest(
    const Out<SharedPointer<nifm::detail::IRequest>>& out, int32_t preset) {
    return this->template ProcessWithOutObject<false, 4>(out, preset);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(3)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(20)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(21)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(22)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(23)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(24)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(25)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(26)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(27)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(28)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(29)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(30)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(31)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(32)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(33)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(34)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(35)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(36)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(37)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(38)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(39)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(40)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(41)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(42)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(43)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(44)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(45)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(46)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(47)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(48)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(49)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(50)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(51)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(52)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(53)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(54)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(55)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(56)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(57)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(58)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(59)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(60)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(61)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(62)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(63)
};

template <typename Kind>
class CmifProxyMethods<audio::IUserClientSession, Kind>
  : public CmifProxyMethodsBase<audio::IUserClientSession, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<audio::detail::IAudioInManager>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result Command1(
    const Out<SharedPointer<audio::detail::IAudioOutManager>>& out) {
    return this->template ProcessWithOutObject<false, 1>(out);
  }

  virtual Result Command2(
    const Out<SharedPointer<audio::detail::IAudioRendererManager>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  virtual Result Command3(
    const Out<SharedPointer<
      audio::detail::ISpatialDownmixOutputModeManager>>& out) {
    return this->template ProcessWithOutObject<false, 3>(out);
  }

  virtual Result Command4(
    const Out<SharedPointer<audio::karaoke::IKaraokeService>>& out) {
    return this->template ProcessWithOutObject<false, 4>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<audio::sysdev::ISessionManager, Kind>
  : public CmifProxyMethodsBase<audio::sysdev::ISessionManager, Kind> {
public:
  virtual Result OpenAdspShell(
    const Out<SharedPointer<audio::adspshell::IAdspShellSession>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result Command1(
    const Out<SharedPointer<audio::dpm::IClientManager>>& out) {
    return this->template ProcessWithOutObject<false, 1>(out);
  }
};

template <typename Kind>
class CmifProxyMethods<chat::IUserService, Kind>
  : public CmifProxyMethodsBase<chat::IUserService, Kind> {
public:
  virtual Result Command0(
    const Out<SharedPointer<chat::IUserShimScopedObject>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  virtual Result Command2(
    const Out<SharedPointer<
      chat::IUserLayoutCustomizationShimScopedObject>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  virtual Result Command3(
    const Out<SharedPointer<chat::IVirtualCameraShimScopedObject>>& out,
    uint64_t processId) {
    return this->template ProcessWithOutObject<true, 3>(out, processId);
  }

  virtual Result Command4(
    const Out<SharedPointer<chat::IUserSelectiveTalkShimScopedObject>>& out) {
    return this->template ProcessWithOutObject<false, 4>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(4)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(5)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(6)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(7)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(8)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(9)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(10)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(11)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(12)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(13)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(14)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(15)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(16)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(17)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(18)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(19)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(20)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(21)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(22)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(23)
  NN_SF_DETAIL_RESERVED_PROXY_METHOD(24)
};

template <typename Kind>
class CmifProxyMethods<pctl::detail::ipc::IParentalControlServiceFactory, Kind>
  : public CmifProxyMethodsBase<
      pctl::detail::ipc::IParentalControlServiceFactory, Kind> {
public:
  virtual Result CreateService(
    const Out<SharedPointer<pctl::detail::ipc::IParentalControlService>>& out,
    uint64_t processId) {
    return this->template ProcessWithOutObject<true, 0>(out, processId);
  }

  virtual Result CreateServiceWithoutInitialize(
    const Out<SharedPointer<pctl::detail::ipc::IParentalControlService>>& out,
    uint64_t processId) {
    return this->template ProcessWithOutObject<true, 1>(out, processId);
  }
};

template <typename Kind>
class CmifProxyMethods<lm::ILogService, Kind>
  : public CmifProxyMethodsBase<lm::ILogService, Kind> {
public:
  virtual Result OpenLogger(
    const Out<SharedPointer<lm::ILogger>>& out, uint64_t processId) {
    return this->template ProcessWithOutObject<true, 0>(out, processId);
  }
};

template <typename Kind>
class CmifProxyMethods<mii::detail::IStaticService, Kind>
  : public CmifProxyMethodsBase<mii::detail::IStaticService, Kind> {
public:
  virtual Result GetDatabaseService(
    const Out<SharedPointer<mii::detail::IDatabaseService>>& out,
    int32_t keyCode) {
    return this->template ProcessWithOutObject<false, 0>(out, keyCode);
  }
};

template <typename Kind>
class CmifProxyMethods<err::context::IWriterForApplication, Kind>
  : public CmifProxyMethodsBase<err::context::IWriterForApplication, Kind> {
public:
  virtual Result CreateContextRegistrar(
    const Out<SharedPointer<err::context::IContextRegistrar>>& out) {
    return this->template ProcessWithOutObject<false, 0>(out);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(1)
};

}
