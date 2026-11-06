#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

// Proxy methods that return one object, with the body inlined.

template Result CmifProxyMethods<
  timesrv::detail::service::IStaticService, DomainKind>::
  GetStandardUserSystemClock(
  const Out<SharedPointer<timesrv::detail::service::ISystemClock>>&);

template Result CmifProxyMethods<
  timesrv::detail::service::IStaticService, DomainKind>::
  GetStandardNetworkSystemClock(
  const Out<SharedPointer<timesrv::detail::service::ISystemClock>>&);

template Result CmifProxyMethods<
  timesrv::detail::service::IStaticService, DomainKind>::GetStandardSteadyClock(
  const Out<SharedPointer<timesrv::detail::service::ISteadyClock>>&);

template Result CmifProxyMethods<
  timesrv::detail::service::IStaticService, DomainKind>::GetTimeZoneService(
  const Out<SharedPointer<timesrv::detail::service::ITimeZoneService>>&);

template Result CmifProxyMethods<
  timesrv::detail::service::IStaticService, DomainKind>::
  GetStandardLocalSystemClock(
  const Out<SharedPointer<timesrv::detail::service::ISystemClock>>&);

template Result CmifProxyMethods<
  timesrv::detail::service::IStaticService, DomainKind>::
  GetEphemeralNetworkSystemClock(
  const Out<SharedPointer<timesrv::detail::service::ISystemClock>>&);

template Result CmifProxyMethods<
  bcat::ipc::IBcatService, DomainKind>::RequestSyncDeliveryCache(
  const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>&);

template Result CmifProxyMethods<
  bcat::ipc::IBcatService, DomainKind>::
  RequestSyncDeliveryCacheWithDirectoryName(

  const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>&,
  const bcat::DirectoryName&);

template Result CmifProxyMethods<
  bcat::ipc::IBcatService, DomainKind>::
  RequestSyncDeliveryCacheWithApplicationId(

  const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>&,
  ApplicationId, uint32_t);

template Result CmifProxyMethods<
  bcat::ipc::IBcatService, DomainKind>::
  RequestSyncDeliveryCacheWithApplicationIdAndDirectoryName(

  const Out<SharedPointer<bcat::ipc::IDeliveryCacheProgressService>>&,
  ApplicationId, uint32_t, const bcat::DirectoryName&);

template Result CmifProxyMethods<
  bcat::ipc::IBcatService, DomainKind>::GetDeliveryCacheStorageUpdateNotifier(
  const Out<SharedPointer<bcat::ipc::INotifierService>>&, ApplicationId);

template Result CmifProxyMethods<
  bcat::ipc::IBcatService, DomainKind>::RequestSuspendDeliveryTask(

  const Out<SharedPointer<bcat::ipc::IDeliveryTaskSuspensionService>>&,
  ApplicationId);

template Result CmifProxyMethods<
  bcat::ipc::IServiceCreator, DomainKind>::CreateBcatService(
  const Out<SharedPointer<bcat::ipc::IBcatService>>&, os::ProcessId);

template Result CmifProxyMethods<
  bcat::ipc::IServiceCreator, DomainKind>::CreateDeliveryCacheStorageService(

  const Out<SharedPointer<bcat::ipc::IDeliveryCacheStorageService>>&,
  os::ProcessId);

template Result CmifProxyMethods<
  bcat::ipc::IServiceCreator, DomainKind>::
  CreateDeliveryCacheStorageServiceWithApplicationId(

  const Out<SharedPointer<bcat::ipc::IDeliveryCacheStorageService>>&,
  ApplicationId);

template Result CmifProxyMethods<
  bcat::ipc::IDeliveryCacheStorageService, DomainKind>::CreateFileService(
  const Out<SharedPointer<bcat::ipc::IDeliveryCacheFileService>>&);

template Result CmifProxyMethods<
  bcat::ipc::IDeliveryCacheStorageService, DomainKind>::CreateDirectoryService(
  const Out<SharedPointer<bcat::ipc::IDeliveryCacheDirectoryService>>&);

template Result CmifProxyMethods<
  friends::detail::ipc::IServiceCreator, DomainKind>::CreateFriendService(
  const Out<SharedPointer<friends::detail::ipc::IFriendService>>&);

template Result CmifProxyMethods<
  friends::detail::ipc::IServiceCreator, DomainKind>::CreateNotificationService(

  const Out<SharedPointer<friends::detail::ipc::INotificationService>>&,
  const account::Uid&);

template Result CmifProxyMethods<
  friends::detail::ipc::IServiceCreator, DomainKind>::
  CreateDaemonSuspendSessionService(

  const Out<SharedPointer<
    friends::detail::ipc::IDaemonSuspendSessionService>>&);

template Result CmifProxyMethods<
  nifm::detail::IStaticService, DomainKind>::Command4(
  const Out<SharedPointer<nifm::detail::IGeneralService>>&);

template Result CmifProxyMethods<
  nifm::detail::IStaticService, DomainKind>::CreateGeneralService(
  const Out<SharedPointer<nifm::detail::IGeneralService>>&, uint64_t);

template Result CmifProxyMethods<
  nifm::detail::IGeneralService, DomainKind>::CreateScanRequest(
  const Out<SharedPointer<nifm::detail::IScanRequest>>&);

template Result CmifProxyMethods<
  nifm::detail::IGeneralService, DomainKind>::CreateRequest(
  const Out<SharedPointer<nifm::detail::IRequest>>&, int32_t);

template Result CmifProxyMethods<
  audio::IUserClientSession, PlainKind>::Command0(
  const Out<SharedPointer<audio::detail::IAudioInManager>>&);

template Result CmifProxyMethods<
  audio::IUserClientSession, PlainKind>::Command1(
  const Out<SharedPointer<audio::detail::IAudioOutManager>>&);

template Result CmifProxyMethods<
  audio::IUserClientSession, PlainKind>::Command2(
  const Out<SharedPointer<audio::detail::IAudioRendererManager>>&);

template Result CmifProxyMethods<
  audio::IUserClientSession, PlainKind>::Command3(
  const Out<SharedPointer<audio::detail::ISpatialDownmixOutputModeManager>>&);

template Result CmifProxyMethods<
  audio::IUserClientSession, PlainKind>::Command4(
  const Out<SharedPointer<audio::karaoke::IKaraokeService>>&);

template Result CmifProxyMethods<
  audio::sysdev::ISessionManager, PlainKind>::OpenAdspShell(
  const Out<SharedPointer<audio::adspshell::IAdspShellSession>>&);

template Result CmifProxyMethods<
  audio::sysdev::ISessionManager, PlainKind>::Command1(
  const Out<SharedPointer<audio::dpm::IClientManager>>&);

template Result CmifProxyMethods<chat::IUserService, DomainKind>::Command0(
  const Out<SharedPointer<chat::IUserShimScopedObject>>&);

template Result CmifProxyMethods<chat::IUserService, DomainKind>::Command2(
  const Out<SharedPointer<chat::IUserLayoutCustomizationShimScopedObject>>&);

template Result CmifProxyMethods<chat::IUserService, DomainKind>::Command3(
  const Out<SharedPointer<chat::IVirtualCameraShimScopedObject>>&, uint64_t);

template Result CmifProxyMethods<chat::IUserService, DomainKind>::Command4(
  const Out<SharedPointer<chat::IUserSelectiveTalkShimScopedObject>>&);

template Result CmifProxyMethods<
  pctl::detail::ipc::IParentalControlServiceFactory, DomainKind>::CreateService(

  const Out<SharedPointer<pctl::detail::ipc::IParentalControlService>>&,
  uint64_t);

template Result CmifProxyMethods<
  pctl::detail::ipc::IParentalControlServiceFactory, DomainKind>::
  CreateServiceWithoutInitialize(

  const Out<SharedPointer<pctl::detail::ipc::IParentalControlService>>&,
  uint64_t);

template Result CmifProxyMethods<lm::ILogService, DomainKind>::OpenLogger(
  const Out<SharedPointer<lm::ILogger>>&, uint64_t);

template Result CmifProxyMethods<
  mii::detail::IStaticService, DomainKind>::GetDatabaseService(
  const Out<SharedPointer<mii::detail::IDatabaseService>>&, int32_t);

template Result CmifProxyMethods<
  err::context::IWriterForApplication, DomainKind>::CreateContextRegistrar(
  const Out<SharedPointer<err::context::IContextRegistrar>>&);

}
