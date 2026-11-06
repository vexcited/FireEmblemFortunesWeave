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
using nn::sf::hipc::detail::BufferParameter;

// Domain layouts whose out objects follow other arguments.

template Result DomainKind::ProcessWithOutObjects<false, 1,
  OutRaw<RawData<32, 8>>, OutObjects>(
  const DomainKind::ProxyKindState*, RawData<32, 8>*,
  sf::SharedPointer<sf::IServiceObject>* const*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects>(
  const DomainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, OutRaw<RawData<66, 1>>>(
  const DomainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, RawData<66, 1>*, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, OutRaw<RawData<66, 1>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, RawData<66, 1>*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<16, 4>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 4>*, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<16, 4>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 4>*,
  uint64_t, int, CmifProxyObject**);
