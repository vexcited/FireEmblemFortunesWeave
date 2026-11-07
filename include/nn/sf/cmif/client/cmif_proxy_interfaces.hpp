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

class IAllSystemAppletProxiesService;
class IAppletAccessor;
class IAppletAlternativeFunctions;
class IAppletCommonFunctions;
class IApplicationAccessor;
class IApplicationCreator;
class IApplicationFunctions;
class IApplicationObserver;
class IApplicationProxy;
class IApplicationProxyService;
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
struct ProxyMethodCount<nn::am::service::IAllSystemAppletProxiesService> {
  static constexpr int Value = 13;
};

template <>
struct ProxyMethodCount<nn::am::service::IApplicationProxyService> {
  static constexpr int Value = 3;
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
  : public CmifProxyMethodsBase<timesrv::detail::service::IStaticService,
    Kind> {
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

  virtual Result GetSharedMemoryNativeHandle(Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result SetStandardSteadyClockInternalOffset(uint64_t argument0) {
    return this->template InvokeMethod<false, 50, void(uint64_t)>(argument0);
  }

  virtual Result GetStandardSteadyClockRtcValue(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 51, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result Command100(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 100, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetStandardUserSystemClockAutomaticCorrectionEnabled(
    bool argument0) {
    return this->template InvokeMethod<false, 101, void(bool)>(argument0);
  }

  virtual Result GetStandardUserSystemClockInitialYear(
    Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 102, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result IsStandardNetworkSystemClockAccuracySufficient(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 200, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetStandardUserSystemClockAutomaticCorrectionUpdatedTime(
    Out<RawData<24, 8>> argument0) {
    return this->template InvokeMethod<false, 201, void(Out<RawData<24, 8>>)>(
      argument0);
  }

  virtual Result Command300(
    Out<uint64_t> argument0, const RawData<32, 8>& argument1) {
    return this->template InvokeMethod<false, 300, void(
      Out<uint64_t>, const RawData<32, 8>&)>(argument0, argument1);
  }

  virtual Result GetClockSnapshot(
    Out<LargeData<26, 208, 8>> argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 400, void(
      Out<LargeData<26, 208, 8>>, uint8_t)>(argument0, argument1);
  }

  virtual Result GetClockSnapshotFromSystemClockContext(
    Out<LargeData<26, 208, 8>> argument0, const RawData<32, 8>& argument1,
    const RawData<32, 8>& argument2, uint8_t argument3) {
    return this->template InvokeMethod<false, 401, void(
      Out<LargeData<26, 208, 8>>, const RawData<32, 8>&, const RawData<32, 8>&,
      uint8_t)>(argument0, argument1, argument2, argument3);
  }

  virtual Result CalculateStandardUserSystemClockDifferenceByUser(
    Out<uint64_t> argument0, const LargeData<25, 208, 8>& argument1,
    const LargeData<25, 208, 8>& argument2) {
    return this->template InvokeMethod<false, 500, void(
      Out<uint64_t>, const LargeData<25, 208, 8>&,
      const LargeData<25, 208, 8>&)>(argument0, argument1, argument2);
  }

  virtual Result CalculateSpanBetween(
    Out<uint64_t> argument0, const LargeData<25, 208, 8>& argument1,
    const LargeData<25, 208, 8>& argument2) {
    return this->template InvokeMethod<false, 501, void(
      Out<uint64_t>, const LargeData<25, 208, 8>&,
      const LargeData<25, 208, 8>&)>(argument0, argument1, argument2);
  }

  virtual Result GetInitialLaunchEndTime(Out<uint64_t> argument0) {
    return this->template InvokeMethod<false, 600, void(Out<uint64_t>)>(
      argument0);
  }

  virtual Result NotifyInitialLaunchSettingsDone() {
    return this->template InvokeMethod<false, 601, void()>();
  }
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

  virtual Result CancelSyncDeliveryCacheRequest() {
    return this->template InvokeMethod<false, 10200, void()>();
  }

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

  virtual Result RegisterSystemApplicationDeliveryTask(uint64_t argument0) {
    return this->template InvokeMethod<false, 20400, void(uint64_t)>(argument0);
  }

  virtual Result UnregisterSystemApplicationDeliveryTask(uint64_t argument0) {
    return this->template InvokeMethod<false, 20401, void(uint64_t)>(argument0);
  }

  virtual Result SetSystemApplicationDeliveryTaskTimer(
    uint64_t argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 20410, void(
      uint64_t, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result StopBackgroundService() {
    return this->template InvokeMethod<false, 20500, void()>();
  }

  virtual Result SetPassphrase(
    uint64_t argument0, const BufferArray<9, uint8_t>& argument1) {
    return this->template InvokeMethod<false, 30100, void(
      uint64_t, const BufferArray<9, uint8_t>&)>(argument0, argument1);
  }

  virtual Result RegisterDeliveryTask(uint64_t argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 30200, void(uint64_t, uint32_t)>(
      argument0, argument1);
  }

  virtual Result UnregisterDeliveryTask(uint64_t argument0) {
    return this->template InvokeMethod<false, 30201, void(uint64_t)>(argument0);
  }

  virtual Result BlockDeliveryTask(uint64_t argument0) {
    return this->template InvokeMethod<false, 30202, void(uint64_t)>(argument0);
  }

  virtual Result UnblockDeliveryTask(uint64_t argument0) {
    return this->template InvokeMethod<false, 30203, void(uint64_t)>(argument0);
  }

  virtual Result SetDeliveryTaskTimer(
    uint64_t argument0, uint32_t argument1, uint32_t argument2) {
    return this->template InvokeMethod<false, 30210, void(
      uint64_t, uint32_t, uint32_t)>(argument0, argument1, argument2);
  }

  virtual Result RegisterSystemApplicationDeliveryTasks() {
    return this->template InvokeMethod<false, 30300, void()>();
  }

  virtual Result GetDeliveryTaskList(
    Out<uint32_t> argument0, const OutArray<RawData<64, 8>>& argument1) {
    return this->template InvokeMethod<false, 90100, void(
      Out<uint32_t>, const OutArray<RawData<64, 8>>&)>(argument0, argument1);
  }

  virtual Result GetDeliveryTaskListForSystem(
    Out<uint32_t> argument0, const OutArray<RawData<64, 8>>& argument1) {
    return this->template InvokeMethod<false, 90101, void(
      Out<uint32_t>, const OutArray<RawData<64, 8>>&)>(argument0, argument1);
  }

  virtual Result GetDeliveryList(
    Out<uint64_t> argument0, const OutBuffer& argument1, uint64_t argument2) {
    return this->template InvokeMethod<false, 90200, void(
      Out<uint64_t>, const OutBuffer&, uint64_t)>(
      argument0, argument1, argument2);
  }

  virtual Result ClearDeliveryCacheStorage(uint64_t argument0) {
    return this->template InvokeMethod<false, 90201, void(uint64_t)>(argument0);
  }

  virtual Result ClearDeliveryTaskSubscriptionStatus() {
    return this->template InvokeMethod<false, 90202, void()>();
  }

  virtual Result GetPushNotificationLog(
    Out<uint32_t> argument0, const OutArray<RawData<16, 8>>& argument1) {
    return this->template InvokeMethod<false, 90300, void(
      Out<uint32_t>, const OutArray<RawData<16, 8>>&)>(argument0, argument1);
  }

  virtual Result GetDeliveryCacheStorageUsage(
    Out<RawData<48, 8>> argument0, uint64_t argument1) {
    return this->template InvokeMethod<false, 90301, void(
      Out<RawData<48, 8>>, uint64_t)>(argument0, argument1);
  }
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

  virtual Result EnumerateDeliveryCacheDirectory(
    Out<uint32_t> argument0, const OutArray<RawData<32, 8>>& argument1) {
    return this->template InvokeMethod<false, 10, void(
      Out<uint32_t>, const OutArray<RawData<32, 8>>&)>(argument0, argument1);
  }
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
  virtual Result GetClientId(Out<LargeData<26, 4, 4>> argument0) {
    return this->template InvokeMethod<false, 1, void(
      Out<LargeData<26, 4, 4>>)>(argument0);
  }

  virtual Result CreateScanRequest(
    const Out<SharedPointer<nifm::detail::IScanRequest>>& out) {
    return this->template ProcessWithOutObject<false, 2>(out);
  }

  virtual Result CreateRequest(
    const Out<SharedPointer<nifm::detail::IRequest>>& out, int32_t preset) {
    return this->template ProcessWithOutObject<false, 4>(out, preset);
  }

  virtual Result Command5(Out<LargeData<26, 380, 4>> argument0) {
    return this->template InvokeMethod<false, 5, void(
      Out<LargeData<26, 380, 4>>)>(argument0);
  }

  virtual Result EnumerateNetworkInterfaces(
    const BufferArray<10, uint64_t>& argument0, Out<uint32_t> argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 6, void(
      const BufferArray<10, uint64_t>&, Out<uint32_t>, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result EnumerateNetworkProfiles(
    const OutArray<RawData<117, 1>>& argument0, Out<uint32_t> argument1,
    uint8_t argument2) {
    return this->template InvokeMethod<false, 7, void(
      const OutArray<RawData<117, 1>>&, Out<uint32_t>, uint8_t)>(
      argument0, argument1, argument2);
  }

  virtual Result Command8(
    Out<LargeData<26, 380, 4>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 8, void(
      Out<LargeData<26, 380, 4>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result Command9(
    Out<RawData<16, 8>> argument0, const LargeData<25, 380, 4>& argument1) {
    return this->template InvokeMethod<false, 9, void(
      Out<RawData<16, 8>>, const LargeData<25, 380, 4>&)>(argument0, argument1);
  }

  virtual Result RemoveNetworkProfile(const RawData<16, 8>& argument0) {
    return this->template InvokeMethod<false, 10, void(const RawData<16, 8>&)>(
      argument0);
  }

  virtual Result Command11(
    const OutArray<RawData<52, 4>>& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 11, void(
      const OutArray<RawData<52, 4>>&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result GetCurrentIpAddress(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 12, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result Command13(Out<LargeData<26, 52, 4>> argument0) {
    return this->template InvokeMethod<false, 13, void(
      Out<LargeData<26, 52, 4>>)>(argument0);
  }

  virtual Result Command14(
    const Out<SharedPointer<nifm::detail::INetworkProfile>>& out,
    Out<RawData<16, 8>> argument0, const LargeData<25, 380, 4>& argument1) {
    return this->template InvokeOutObjectMethod<false, 14, void(
      const Out<SharedPointer<nifm::detail::INetworkProfile>>&,
      Out<RawData<16, 8>>, const LargeData<25, 380, 4>&)>(
      out, argument0, argument1);
  }

  virtual Result GetCurrentIpConfigInfo(
    Out<RawData<16, 8>> argument0, Out<uint64_t> argument1) {
    return this->template InvokeMethod<false, 15, void(
      Out<RawData<16, 8>>, Out<uint64_t>)>(argument0, argument1);
  }

  virtual Result SetWirelessCommunicationEnabled(bool argument0) {
    return this->template InvokeMethod<false, 16, void(bool)>(argument0);
  }

  virtual Result IsWirelessCommunicationEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 17, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetInternetConnectionStatus(Out<RawData<3, 1>> argument0) {
    return this->template InvokeMethod<false, 18, void(Out<RawData<3, 1>>)>(
      argument0);
  }

  virtual Result SetEthernetCommunicationEnabled(bool argument0) {
    return this->template InvokeMethod<false, 19, void(bool)>(argument0);
  }

  virtual Result IsEthernetCommunicationEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 20, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result IsAnyInternetRequestAccepted(
    Out<uint8_t> argument0, LargeData<25, 4, 4> argument1) {
    return this->template InvokeMethod<false, 21, void(
      Out<uint8_t>, LargeData<25, 4, 4>)>(argument0, argument1);
  }

  virtual Result IsAnyForegroundRequestAccepted(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 22, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result PutToSleep() {
    return this->template InvokeMethod<false, 23, void()>();
  }

  virtual Result WakeUp() {
    return this->template InvokeMethod<false, 24, void()>();
  }

  virtual Result GetSsidListVersion(Out<RawData<16, 8>> argument0) {
    return this->template InvokeMethod<false, 25, void(Out<RawData<16, 8>>)>(
      argument0);
  }

  virtual Result SetExclusiveClient(LargeData<25, 4, 4> argument0) {
    return this->template InvokeMethod<false, 26, void(LargeData<25, 4, 4>)>(
      argument0);
  }

  virtual Result Command27(Out<LargeData<26, 194, 2>> argument0) {
    return this->template InvokeMethod<false, 27, void(
      Out<LargeData<26, 194, 2>>)>(argument0);
  }

  virtual Result Command28(const LargeData<25, 194, 2>& argument0) {
    return this->template InvokeMethod<false, 28, void(
      const LargeData<25, 194, 2>&)>(argument0);
  }

  virtual Result SetWirelessCommunicationEnabledForTest(bool argument0) {
    return this->template InvokeMethod<false, 29, void(bool)>(argument0);
  }

  virtual Result SetEthernetCommunicationEnabledForTest(bool argument0) {
    return this->template InvokeMethod<false, 30, void(bool)>(argument0);
  }

  virtual Result GetTelemetorySystemEventReadableHandle(
    Out<NativeHandle> argument0) {
    return this->template InvokeMethod<false, 31, void(Out<NativeHandle>)>(
      argument0);
  }

  virtual Result Command32(Out<LargeData<22, 1568, 8>> argument0) {
    return this->template InvokeMethod<false, 32, void(
      Out<LargeData<22, 1568, 8>>)>(argument0);
  }

  virtual Result ConfirmSystemAvailability() {
    return this->template InvokeMethod<false, 33, void()>();
  }

  virtual Result SetBackgroundRequestEnabled(bool argument0) {
    return this->template InvokeMethod<false, 34, void(bool)>(argument0);
  }

  virtual Result Command35(
    const OutArray<RawData<52, 4>>& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 35, void(
      const OutArray<RawData<52, 4>>&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result GetCurrentAccessPoint(Out<LargeData<26, 52, 4>> argument0) {
    return this->template InvokeMethod<false, 36, void(
      Out<LargeData<26, 52, 4>>)>(argument0);
  }

  virtual Result Shutdown() {
    return this->template InvokeMethod<false, 37, void()>();
  }

  virtual Result GetAllowedChannels(
    const OutArray<uint16_t>& argument0, Out<uint32_t> argument1) {
    return this->template InvokeMethod<false, 38, void(
      const OutArray<uint16_t>&, Out<uint32_t>)>(argument0, argument1);
  }

  virtual Result NotifyApplicationRightsInvalidated(uint64_t argument0) {
    return this->template InvokeMethod<false, 39, void(uint64_t)>(argument0);
  }

  virtual Result SetAcceptableNetworkTypeFlag(uint32_t argument0) {
    return this->template InvokeMethod<false, 40, void(uint32_t)>(argument0);
  }

  virtual Result GetAcceptableNetworkTypeFlag(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 41, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result NotifyConnectionStateChanged() {
    return this->template InvokeMethod<false, 42, void()>();
  }

  virtual Result SetWowlDelayedWakeTime(uint32_t argument0) {
    return this->template InvokeMethod<false, 43, void(uint32_t)>(argument0);
  }

  virtual Result IsWiredConnectionAvailable(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 44, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result IsNetworkEmulationFeatureEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 45, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SelectActiveNetworkEmulationProfileIdForDebug(
    uint32_t argument0) {
    return this->template InvokeMethod<false, 46, void(uint32_t)>(argument0);
  }

  virtual Result GetScanData(
    const OutArray<RawData<52, 4>>& argument0, Out<uint32_t> argument1,
    uint32_t argument2) {
    return this->template InvokeMethod<false, 47, void(
      const OutArray<RawData<52, 4>>&, Out<uint32_t>, uint32_t)>(
      argument0, argument1, argument2);
  }

  virtual Result ResetActiveNetworkEmulationProfileIdForDebug() {
    return this->template InvokeMethod<false, 48, void()>();
  }

  virtual Result GetActiveNetworkEmulationProfileId(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 49, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result IsRewriteFeatureEnabled(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 50, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result CreateRewriteRule(
    Out<uint64_t> argument0, const LargeData<21, 1040, 8>& argument1,
    uint8_t argument2) {
    return this->template InvokeMethod<false, 51, void(
      Out<uint64_t>, const LargeData<21, 1040, 8>&, uint8_t)>(
      argument0, argument1, argument2);
  }

  virtual Result DestroyRewriteRule(uint64_t argument0) {
    return this->template InvokeMethod<false, 52, void(uint64_t)>(argument0);
  }

  virtual Result IsActiveNetworkEmulationProfileIdSelected(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 53, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SelectDefaultNetworkEmulationProfileId(uint32_t argument0) {
    return this->template InvokeMethod<false, 54, void(uint32_t)>(argument0);
  }

  virtual Result GetDefaultNetworkEmulationProfileId(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 55, void(Out<uint32_t>)>(
      argument0);
  }

  NN_SF_DETAIL_RESERVED_PROXY_METHOD(54)

  virtual Result SetWowlTcpKeepAliveTimeout(uint32_t argument0) {
    return this->template InvokeMethod<false, 57, void(uint32_t)>(argument0);
  }

  virtual Result GetCurrentIpConfig(
    const BufferArray<10, RawData<40, 8>>& argument0, Out<uint32_t> argument1,
    const BufferArray<10, RawData<172, 4>>& argument2,
    Out<uint32_t> argument3) {
    return this->template InvokeMethod<false, 100, void(
      const BufferArray<10, RawData<40, 8>>&, Out<uint32_t>,
      const BufferArray<10, RawData<172, 4>>&, Out<uint32_t>)>(
      argument0, argument1, argument2, argument3);
  }

  virtual Result GetCurrentNetworkProfile(
    Out<LargeData<26, 436, 4>> argument0) {
    return this->template InvokeMethod<false, 101, void(
      Out<LargeData<26, 436, 4>>)>(argument0);
  }

  virtual Result GetNetworkProfile(
    Out<LargeData<26, 436, 4>> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 102, void(
      Out<LargeData<26, 436, 4>>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result SetNetworkProfile(
    Out<RawData<16, 8>> argument0, const LargeData<25, 436, 4>& argument1) {
    return this->template InvokeMethod<false, 103, void(
      Out<RawData<16, 8>>, const LargeData<25, 436, 4>&)>(argument0, argument1);
  }

  virtual Result CreateTemporaryNetworkProfile(
    const Out<SharedPointer<nifm::detail::INetworkProfile>>& out,
    Out<RawData<16, 8>> argument0, const LargeData<25, 436, 4>& argument1) {
    return this->template InvokeOutObjectMethod<false, 104, void(
      const Out<SharedPointer<nifm::detail::INetworkProfile>>&,
      Out<RawData<16, 8>>, const LargeData<25, 436, 4>&)>(
      out, argument0, argument1);
  }

  virtual Result GetDefaultIpSetting(Out<LargeData<26, 248, 8>> argument0) {
    return this->template InvokeMethod<false, 127, void(
      Out<LargeData<26, 248, 8>>)>(argument0);
  }

  virtual Result SetDefaultIpSetting(const LargeData<25, 248, 8>& argument0) {
    return this->template InvokeMethod<false, 128, void(
      const LargeData<25, 248, 8>&)>(argument0);
  }

  virtual Result GetTelemetoryInfo(Out<LargeData<22, 1676, 4>> argument0) {
    return this->template InvokeMethod<false, 132, void(
      Out<LargeData<22, 1676, 4>>)>(argument0);
  }
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

  virtual Result Command10(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 10, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetRoomInfo(Out<LargeData<26, 240, 8>> argument0) {
    return this->template InvokeMethod<false, 11, void(
      Out<LargeData<26, 240, 8>>)>(argument0);
  }

  virtual Result GetRoomInfoForTest(Out<LargeData<26, 240, 8>> argument0) {
    return this->template InvokeMethod<false, 12, void(
      Out<LargeData<26, 240, 8>>)>(argument0);
  }

  virtual Result GetLocalCameraImageProcessingMode(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 13, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result GetLocalCameraImageProcessingModeDeprecated(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 14, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result SetLocalCameraZoomMagnification(float argument0) {
    return this->template InvokeMethod<false, 15, void(float)>(argument0);
  }

  virtual Result GetLocalCameraZoomMagnification(Out<uint32_t> argument0) {
    return this->template InvokeMethod<false, 16, void(Out<uint32_t>)>(
      argument0);
  }

  virtual Result GetCameraImageProcessingModeForVirtualCamera(
    Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 17, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command20(bool argument0) {
    return this->template InvokeMethod<false, 20, void(bool)>(argument0);
  }

  virtual Result Command21(const BufferArray<33, uint64_t>& argument0) {
    return this->template InvokeMethod<false, 21, void(
      const BufferArray<33, uint64_t>&)>(argument0);
  }

  virtual Result Command22() {
    return this->template InvokeMethod<false, 22, void()>();
  }

  virtual Result SetScreenSharingMode(uint32_t argument0) {
    return this->template InvokeMethod<false, 23, void(uint32_t)>(argument0);
  }

  virtual Result SetScreenSharingDisallowList(
    const BufferArray<33, uint64_t>& argument0) {
    return this->template InvokeMethod<false, 24, void(
      const BufferArray<33, uint64_t>&)>(argument0);
  }

  virtual Result ClearScreenSharingDisallowList() {
    return this->template InvokeMethod<false, 25, void()>();
  }

  virtual Result Command40(
    const BufferArray<34, uint32_t>& argument0,
    const BufferArray<33, uint64_t>& argument1) {
    return this->template InvokeMethod<false, 40, void(
      const BufferArray<34, uint32_t>&, const BufferArray<33, uint64_t>&)>(
      argument0, argument1);
  }

  virtual Result CalculateRequiredAudioStreamWorkBufferSize(
    Out<uint64_t> argument0, uint32_t argument1) {
    return this->template InvokeMethod<false, 51, void(
      Out<uint64_t>, uint32_t)>(argument0, argument1);
  }

  virtual Result SetSharingKey(const RawData<40, 8>& argument0) {
    return this->template InvokeMethod<false, 60, void(const RawData<40, 8>&)>(
      argument0);
  }

  virtual Result ClearSharingKey() {
    return this->template InvokeMethod<false, 61, void()>();
  }

  virtual Result IsChatStartAppletRequired(
    Out<uint8_t> argument0, const RawData<16, 8>& argument1) {
    return this->template InvokeMethod<false, 70, void(
      Out<uint8_t>, const RawData<16, 8>&)>(argument0, argument1);
  }

  virtual Result IsCameraSharingGuideAppletRequired(Out<uint8_t> argument0) {
    return this->template InvokeMethod<false, 71, void(Out<uint8_t>)>(
      argument0);
  }

  virtual Result Command72(Out<uint8_t> argument0, uint8_t argument1) {
    return this->template InvokeMethod<false, 72, void(Out<uint8_t>, uint8_t)>(
      argument0, argument1);
  }
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

  virtual Result Command1(
    uint32_t argument0, uint32_t argument1, const InBuffer& argument2,
    uint32_t argument3) {
    return this->template InvokeMethod<false, 1, void(
      uint32_t, uint32_t, const InBuffer&, uint32_t)>(
      argument0, argument1, argument2, argument3);
  }
};

}

#include "nn/account/account_proxy_methods.hpp"
#include "nn/am/service/am_proxy_methods.hpp"
#include "nn/audio/detail/audio_proxy_methods.hpp"
#include "nn/bcat/detail/bcat_proxy_methods.hpp"
#include "nn/capsrv/capsrv_proxy_methods.hpp"
#include "nn/chat/chat_proxy_methods.hpp"
#include "nn/codec/codec_proxy_methods.hpp"
#include "nn/ec/ec_proxy_methods.hpp"
#include "nn/friends/detail/friends_proxy_methods.hpp"
#include "nn/grc/grc_proxy_methods.hpp"
#include "nn/hid/hidbus_proxy_methods.hpp"
#include "nn/irsensor/detail/irsensor_proxy_methods.hpp"
#include "nn/lm/lm_proxy_methods.hpp"
#include "nn/mii/mii_proxy_methods.hpp"
#include "nn/nifm/detail/nifm_proxy_methods.hpp"
#include "nn/pctl/detail/pctl_proxy_methods.hpp"
#include "nn/prepo/detail/prepo_proxy_methods.hpp"
#include "nn/settings/detail/settings_proxy_methods.hpp"
#include "nn/ssl/detail/ssl_proxy_methods.hpp"
#include "nn/time/time_proxy_methods.hpp"
