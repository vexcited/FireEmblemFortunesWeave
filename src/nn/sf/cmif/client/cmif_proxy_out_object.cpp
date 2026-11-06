#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

// Proxy method bodies that return one object and send no arguments.

template Result ProcessWithOutObject<DomainKind, false, 30>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILockAccessor>>&);

template Result ProcessWithOutObject<DomainKind, false, 110>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IGpuErrorHandler>>&);

template Result ProcessWithOutObject<DomainKind, false, 1>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ISelfController>>&);

template Result ProcessWithOutObject<DomainKind, false, 1000>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorageChannel>>&);

template Result ProcessWithOutObject<DomainKind, false, 1>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ITransferStorageAccessor>>&);

template Result ProcessWithOutObject<DomainKind, false, 2>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IWindowController>>&);

template Result ProcessWithOutObject<DomainKind, false, 3>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IAudioController>>&);

template Result ProcessWithOutObject<DomainKind, false, 4>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IDisplayController>>&);

template Result ProcessWithOutObject<DomainKind, false, 1000>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IDebugFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 10>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IProcessWindingController>>&);

template Result ProcessWithOutObject<DomainKind, false, 101>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&);

template Result ProcessWithOutObject<DomainKind, false, 104>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&);

template Result ProcessWithOutObject<DomainKind, false, 22>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&);

template Result ProcessWithOutObject<DomainKind, false, 11>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILibraryAppletCreator>>&);

template Result ProcessWithOutObject<DomainKind, false, 20>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IHomeMenuFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 21>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IGlobalStateController>>&);

template Result ProcessWithOutObject<DomainKind, false, 22>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IApplicationCreator>>&);

template Result ProcessWithOutObject<DomainKind, false, 1>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IApplicationAccessor>>&);

template Result ProcessWithOutObject<DomainKind, false, 100>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IApplicationAccessor>>&);

template Result ProcessWithOutObject<DomainKind, false, 23>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IAppletCommonFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 21>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&);

template Result ProcessWithOutObject<DomainKind, false, 160>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IReceiverService>>&);

template Result ProcessWithOutObject<DomainKind, false, 161>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ISenderService>>&);

template Result ProcessWithOutObject<DomainKind, false, 21>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IAppletCommonFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 22>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IHomeMenuFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 23>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IGlobalStateController>>&);

template Result ProcessWithOutObject<DomainKind, false, 141>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&);

template Result ProcessWithOutObject<DomainKind, false, 151>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&);

template Result ProcessWithOutObject<DomainKind, false, 40>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IPerformanceFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 60>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<
    nn::am::service::IGraphicsScalingParametersFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 410>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ISystemAppletControllerForDebug>>&);

template Result ProcessWithOutObject<DomainKind, false, 4>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ICradleFirmwareUpdater>>&);

template Result ProcessWithOutObject<DomainKind, false, 450>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ISystemProcessCommonFunctions>>&);

template Result ProcessWithOutObject<DomainKind, false, 460>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IAppletAlternativeFunctions>>&);

}
