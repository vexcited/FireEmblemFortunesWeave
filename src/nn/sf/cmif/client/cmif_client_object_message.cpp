#include <stddef.h>
#include <stdint.h>

#include "nn/sf/cmif/client/cmif_client_message.hpp"

namespace nn::sf::cmif::client::detail {

using PlainKind = hipc::client::Hipc2ProxyKindBase<
  hipc::detail::MessageType::CmifRequestWithContext>;
using DomainKind = CmifDomainProxyKind<
  hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

}

using namespace nn;
using namespace nn::sf::cmif::client::detail;

// Layouts that return domain objects into proxies created by the caller.

template Result DomainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 8>*, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 8>*,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, uint64_t,
  int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>,
  InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t,
  const RawData<16, 8>*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<32, 8>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<32, 8>*, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<16, 8>>, InRawReference<RawData<24, 8>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 8>*,
  const RawData<24, 8>*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint32_t>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>,
  InRawReference<RawData<64, 8>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t,
  const RawData<64, 8>*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>,
  InRawReference<RawData<72, 8>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t,
  const RawData<72, 8>*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>,
  InRawReference<RawData<64, 8>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t,
  const RawData<64, 8>*, uint64_t, int, CmifProxyObject**);
