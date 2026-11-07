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

// Messages of the system settings and friend service proxies that no other
// interface shares.

template Result PlainKind::Process<false, InRaw<RawData<8, 4>>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, Buffer<26>,
  InRawReference<RawData<16, 8>>, InRaw<RawData<8, 1>>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<48, 1>>, Buffer<9>, Buffer<21>,
  InRawReference<RawData<24, 8>>, Buffer<5>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  const RawData<48, 1>*, BufferParameter, BufferParameter,
  const RawData<24, 8>*, BufferParameter, uint64_t, int);

// Messages of the parental control service proxy.

template Result DomainKind::Process<false, InRaw<RawData<3, 1>>>(
  const DomainKind::ProxyKindState*, uint64_t, int);
template Result DomainKind::Process<false, InRaw<RawData<8, 4>>,
  InRaw<uint8_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<8, 4>>,
  OutHandle<false>, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*,
  RawData<8, 4>*, sf::NativeHandle*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<8, 4>>,
  OutHandle<false>, OutRaw<uint32_t>, Buffer<10>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*,
  RawData<8, 4>*, sf::NativeHandle*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, int);

// Message of the infrared sensor server proxy.

template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<RawData<8, 4>>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
