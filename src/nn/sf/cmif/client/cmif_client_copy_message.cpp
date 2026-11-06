#include <stddef.h>
#include <stdint.h>

#include "nn/sf/cmif/client/cmif_client_message.hpp"

namespace nn::sf::cmif::client::detail {

using PlainKind = hipc::client::Hipc2ProxyKindBase<
  hipc::detail::MessageType::CmifRequestWithContext>;

}

using namespace nn;
using namespace nn::sf::cmif::client::detail;

// Plain layouts whose structure is copied into the request with memcpy.

template Result PlainKind::Process<true, InRawReference<RawData<48, 8>>,
  InRaw<uint8_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, const RawData<48, 8>*, uint64_t,
  uint64_t, int);

template Result PlainKind::Process<true, OutRaw<uint64_t>,
  InRawReference<RawData<48, 8>>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, const RawData<48, 8>*,
  uint64_t, int);

template Result PlainKind::Process<true, InRawReference<RawData<48, 8>>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, const RawData<48, 8>*, uint64_t, int);

namespace nn::sf::cmif::client::detail {

using DomainKind = CmifDomainProxyKind<
  hipc::client::Hipc2ClientSessionManagedProxyKindBase<PlainKind>>;

}

// Domain layouts with large structures.

template Result DomainKind::Process<false, OutRaw<RawData<192, 8>>>(
  const DomainKind::ProxyKindState*, RawData<192, 8>*, int);

template Result DomainKind::Process<false, OutRaw<RawData<64, 8>>>(
  const DomainKind::ProxyKindState*, RawData<64, 8>*, int);

template Result DomainKind::Process<true, OutRaw<RawData<64, 8>>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, RawData<64, 8>*, uint64_t, uint64_t,
  int);

template Result DomainKind::Process<false, OutRaw<RawData<160, 4>>,
  InRawReference<RawData<160, 4>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<160, 4>*,
  const RawData<160, 4>*, uint64_t, int);

template Result PlainKind::ProcessWithObjects<true, 1,
  InRawReference<RawData<48, 8>>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<48, 8>*,
  uint64_t, int, CmifProxyObject**);
