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

// Layouts recovered by emulating each message up to the request.

template Result DomainKind::Process<false, Buffer<34>, OutRaw<uint16_t>,
  InRawReference<RawData<96, 8>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint16_t*,
  const RawData<96, 8>*, uint64_t, int);

template Result DomainKind::Process<false, Buffer<25>,
  InRawReference<RawData<68, 4>>, InRawReference<RawData<48, 4>>,
  InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<68, 4>*,
  const RawData<48, 4>*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRawReference<RawData<32, 8>>,
  InRawReference<RawData<68, 4>>, InRawReference<RawData<32, 4>>,
  InRawReference<RawData<48, 4>>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, const RawData<32, 8>*,
  const RawData<68, 4>*, const RawData<32, 4>*, const RawData<48, 4>*, uint64_t,
  uint64_t, int);
