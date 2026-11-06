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

// Domain layouts that send objects of the same domain as arguments.

template Result DomainKind::Process<false, InObject>(
  const DomainKind::ProxyKindState*, CmifProxyObject*, int);

template Result DomainKind::Process<false, InObject, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, CmifProxyObject*, uint64_t, int);

template Result DomainKind::Process<false, InObject, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, CmifProxyObject*, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint32_t>, InObject>(
  const DomainKind::ProxyKindState*, uint64_t, CmifProxyObject*, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InObject>(
  const DomainKind::ProxyKindState*, uint64_t, CmifProxyObject*, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InObject,
  InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, CmifProxyObject*, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint8_t>,
  InRawReference<RawData<16, 8>>, InObject>(
  const DomainKind::ProxyKindState*, uint64_t, const RawData<16, 8>*,
  CmifProxyObject*, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InObject,
  Buffer<BufferAttribute_In | BufferAttribute_HipcMapAlias |
    BufferAttribute_FixedSize>>(
  const DomainKind::ProxyKindState*, uint64_t, CmifProxyObject*,
  sf::hipc::detail::BufferParameter, int);
