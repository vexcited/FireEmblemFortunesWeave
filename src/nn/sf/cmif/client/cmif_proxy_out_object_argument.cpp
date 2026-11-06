#include <stdint.h>

#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

// Proxy method bodies that return one object, the arguments arrive by
// reference.

template Result ProcessWithOutObject<DomainKind, false, 31>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILockAccessor>>&, const uint32_t&);

template Result ProcessWithOutObject<DomainKind, false, 32>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILockAccessor>>&, const uint32_t&);

template Result ProcessWithOutObject<DomainKind, false, 0>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IWindow>>&, const uint32_t&);

template Result ProcessWithOutObject<DomainKind, false, 111>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&, const uint32_t&);

template Result ProcessWithOutObject<DomainKind, false, 0>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILibraryAppletAccessor>>&,
  const uint32_t&, const uint32_t&);

template Result ProcessWithOutObject<DomainKind, false, 3>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILibraryAppletAccessor>>&,
  const uint32_t&, const uint32_t&, const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 10>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&, const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 0>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IApplicationAccessor>>&,
  const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 10>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IApplicationAccessor>>&,
  const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 90>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorageChannel>>&,
  const RawData<16, 4>&);

template Result ProcessWithOutObject<DomainKind, false, 91>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorageChannel>>&,
  const RawData<16, 4>&);

template Result ProcessWithOutObject<DomainKind, false, 0>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::INotificationSender>>&,
  const RawData<16, 4>&, const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 202>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IFocusableLayer>>&,
  const uint64_t&, const RawData<16, 8>&);

template Result ProcessWithOutObject<DomainKind, true, 2000>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::INxCompatApplicationFunctions>>&,
  const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 1>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&, const uint32_t&);

template Result ProcessWithOutObject<DomainKind, true, 400>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::ILibraryAppletCreator>>&,
  const uint64_t&);

template Result ProcessWithOutObject<DomainKind, false, 3>(
  MemoryResource*, const DomainKind::ProxyKindState*,
  const Out<SharedPointer<nn::am::service::IStorage>>&, const uint64_t&);

}
