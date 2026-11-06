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

// The proxies share one message function per argument layout, the linker
// folded the copies that every service interface instantiated.

template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  Buffer<5>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<5>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<6>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<5>>(
  const PlainKind::ProxyKindState*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<33>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<33>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint32_t*, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<33>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, uint64_t, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>, Buffer<33>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, uint64_t, BufferParameter, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, Buffer<33>, InRaw<uint8_t>>(const PlainKind::ProxyKindState*,
  uint32_t*, uint32_t*, uint64_t, BufferParameter, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>, Buffer<34>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  BufferParameter, int);
template Result PlainKind::Process<false, Buffer<5>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint32_t>, Buffer<6>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  Buffer<5>, OutRaw<uint32_t>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  uint32_t*, uint32_t*, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, uint64_t,
  uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint64_t>, Buffer<5>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, Buffer<5>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, Buffer<5>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result PlainKind::Process<true, Buffer<6>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<6>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint32_t*, int);
template Result PlainKind::Process<false, Buffer<5>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<33>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<34>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint32_t*, int);
template Result PlainKind::Process<false, Buffer<21>>(
  const PlainKind::ProxyKindState*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint64_t>,
  Buffer<5>>(const PlainKind::ProxyKindState*, uint32_t*, uint64_t,
  BufferParameter, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, Buffer<5>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t,
  BufferParameter, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, Buffer<34>, Buffer<34>, Buffer<33>>(
  const PlainKind::ProxyKindState*, BufferParameter, BufferParameter,
  BufferParameter, int);
template Result PlainKind::Process<false, Buffer<33>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<34>>(
  const PlainKind::ProxyKindState*, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<5>,
  InRawReference<RawData<12, 4>>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, const RawData<12, 4>*,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<6>, Buffer<5>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, Buffer<5>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<12, 4>>, Buffer<5>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, RawData<12, 4>*,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<6>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<5>,
  InRawReference<RawData<12, 4>>>(const PlainKind::ProxyKindState*,
  BufferParameter, const RawData<12, 4>*, int);
template Result PlainKind::Process<false, Buffer<6>, Buffer<5>>(
  const PlainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<6>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<5>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  BufferParameter, uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, uint64_t,
  uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, Buffer<5>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  BufferParameter, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  BufferParameter, uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, Buffer<5>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<true, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint8_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  BufferParameter, uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, Buffer<5>, InRaw<uint32_t>, Buffer<5>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<true, Buffer<6>, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint8_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<5>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<6>, InRaw<uint8_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  BufferParameter, uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint8_t>, InRaw<uint32_t>,
  Buffer<5>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  BufferParameter, int);
template Result PlainKind::Process<false, Buffer<6>, InRaw<uint8_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, Buffer<5>,
  Buffer<6>>(const PlainKind::ProxyKindState*, uint64_t, BufferParameter,
  BufferParameter, int);
template Result PlainKind::Process<true, InRaw<uint8_t>, Buffer<5>,
  InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, uint64_t,
  uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, Buffer<5>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*,
  BufferParameter, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, Buffer<5>, Buffer<5>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  Buffer<5>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  BufferParameter, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<RawData<32, 8>>, Buffer<69>,
  InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, RawData<32, 8>*, BufferParameter, uint64_t,
  uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<6>,
  InRaw<uint64_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*,
  BufferParameter, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  Buffer<6>, InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  uint32_t*, uint64_t*, BufferParameter, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  InRaw<uint32_t>, Buffer<5>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  uint32_t*, uint64_t*, uint64_t, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  Buffer<34>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint64_t*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  Buffer<33>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint64_t*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint8_t>,
  Buffer<33>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t*,
  uint8_t*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint8_t>,
  Buffer<97>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t*,
  uint8_t*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint64_t>,
  Buffer<5>, Buffer<6>>(const PlainKind::ProxyKindState*, uint32_t*, uint64_t,
  BufferParameter, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<6>,
  InRawReference<RawData<16, 8>>>(const PlainKind::ProxyKindState*,
  BufferParameter, const RawData<16, 8>*, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<6>>(
  const PlainKind::ProxyKindState*, uint64_t*, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<5>, Buffer<6>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<22>, Buffer<21>>(
  const PlainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<22>,
  Buffer<21>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<22>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<6>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<22>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<26>>(
  const PlainKind::ProxyKindState*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, Buffer<5>>(
  const PlainKind::ProxyKindState*, uint8_t*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, Buffer<26>>(
  const PlainKind::ProxyKindState*, uint8_t*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<10>>(
  const PlainKind::ProxyKindState*, uint64_t*, BufferParameter, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  Buffer<21>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  BufferParameter, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, Buffer<22>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, Buffer<26>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<6>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<5>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  BufferParameter, int);
template Result PlainKind::Process<false, Buffer<26>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, Buffer<34>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, Buffer<6>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<49>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<10>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<10>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<34>>(
  const PlainKind::ProxyKindState*, uint64_t*, BufferParameter, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, Buffer<21>>(
  const PlainKind::ProxyKindState*, uint8_t*, BufferParameter, int);
template Result PlainKind::Process<false, Buffer<21>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<22>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<22>, Buffer<26>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint64_t>, Buffer<10>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>,
  OutRaw<RawData<16, 8>>, Buffer<6>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, RawData<16, 8>*, BufferParameter,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint8_t>,
  Buffer<33>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint64_t, BufferParameter, uint64_t, int);
template Result PlainKind::Process<false, Buffer<6>>(
  const PlainKind::ProxyKindState*, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<6>,
  InRawReference<RawData<64, 8>>>(const DomainKind::ProxyKindState*, uint64_t*,
  BufferParameter, const RawData<64, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint32_t*,
  BufferParameter, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, Buffer<10>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<RawData<56, 8>>, Buffer<26>>(
  const DomainKind::ProxyKindState*, RawData<56, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<5>>(const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  BufferParameter, int);
template Result DomainKind::Process<true, Buffer<25>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  Buffer<10>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t*,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<26>, Buffer<26>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<9>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<26>, Buffer<26>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, Buffer<5>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<10>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<10>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint32_t*,
  BufferParameter, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>,
  InRawReference<RawData<16, 8>>, Buffer<5>>(const DomainKind::ProxyKindState*,
  uint8_t*, const RawData<16, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<26>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  Buffer<6>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t*,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<25>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*,
  BufferParameter, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, Buffer<26>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*,
  BufferParameter, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<10>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint32_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<33>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<34>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<33>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint32_t>,
  Buffer<6>>(const DomainKind::ProxyKindState*, uint64_t*, uint32_t*,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<21>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<34>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<22>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<21>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<69>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, BufferParameter, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint32_t>,
  Buffer<6>>(const DomainKind::ProxyKindState*, uint8_t*, uint32_t*,
  BufferParameter, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<5>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t,
  BufferParameter, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<9>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<6>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t,
  BufferParameter, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  Buffer<5>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t,
  uint64_t, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>,
  InRawReference<RawData<16, 8>>, Buffer<9>>(const DomainKind::ProxyKindState*,
  BufferParameter, const RawData<16, 8>*, BufferParameter, int);
template Result DomainKind::Process<true, InRawReference<RawData<16, 8>>,
  Buffer<25>, InRaw<uint64_t>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<26>,
  InRawReference<RawData<16, 8>>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, Buffer<26>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, Buffer<22>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRawReference<RawData<16, 8>>, Buffer<25>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, uint64_t, uint64_t,
  const RawData<16, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRawReference<RawData<24, 8>>, Buffer<25>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, uint64_t, uint64_t,
  const RawData<24, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<25>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<9>>(const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  BufferParameter, int);
template Result DomainKind::Process<true, InRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<5>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<10>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*, int);
template Result DomainKind::Process<false, Buffer<26>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>, InRaw<uint64_t>,
  Buffer<5>>(const DomainKind::ProxyKindState*, BufferParameter, uint64_t,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  uint32_t*, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<25>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<true, InRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<5>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t,
  uint64_t, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<22>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*, int);
template Result DomainKind::Process<false, Buffer<10>, OutRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  uint32_t*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>, Buffer<25>>(
  const DomainKind::ProxyKindState*, RawData<16, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, Buffer<25>>(
  const DomainKind::ProxyKindState*, uint8_t*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  uint32_t*, uint64_t, int);
template Result DomainKind::Process<false, Buffer<21>, Buffer<5>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint16_t>>(const DomainKind::ProxyKindState*, uint32_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>,
  Buffer<9>, InRaw<uint8_t>>(const DomainKind::ProxyKindState*, uint64_t,
  uint64_t, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>,
  InRawReference<RawData<32, 8>>, Buffer<9>>(const DomainKind::ProxyKindState*,
  uint8_t*, const RawData<32, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<10>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint32_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<true, Buffer<9>, Buffer<5>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<9>, InRaw<uint64_t>,
  Buffer<5>>(const DomainKind::ProxyKindState*, BufferParameter, uint64_t,
  BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<6>>(const DomainKind::ProxyKindState*, uint32_t*, uint32_t*,
  BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>,
  OutRaw<uint32_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  uint32_t*, uint32_t*, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, Buffer<6>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  OutRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint32_t*,
  BufferParameter, uint32_t*, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<5>>(const DomainKind::ProxyKindState*, uint64_t, uint32_t*,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<6>, Buffer<5>, Buffer<5>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter,
  BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<5>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>, Buffer<5>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>, Buffer<6>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, Buffer<5>,
  Buffer<5>, Buffer<5>>(const DomainKind::ProxyKindState*, uint64_t,
  BufferParameter, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, InRawReference<RawData<36, 4>>,
  Buffer<33>>(const DomainKind::ProxyKindState*, const RawData<36, 4>*,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<22>, Buffer<33>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<26>,
  InRawReference<RawData<32, 8>>, InRawReference<RawData<32, 8>>,
  InRaw<uint8_t>>(const DomainKind::ProxyKindState*, BufferParameter,
  const RawData<32, 8>*, const RawData<32, 8>*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<34>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint64_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<34>, Buffer<33>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<26>, Buffer<10>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<25>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<25>, Buffer<25>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<25>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<69>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t,
  BufferParameter, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<6>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<25>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<RawData<32, 8>>, Buffer<25>>(
  const DomainKind::ProxyKindState*, RawData<32, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<5>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<6>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>, InRaw<uint8_t>,
  InRawReference<RawData<64, 8>>>(const DomainKind::ProxyKindState*,
  BufferParameter, uint64_t, const RawData<64, 8>*, int);
template Result DomainKind::Process<false, Buffer<6>, InRaw<uint8_t>,
  InRawReference<RawData<64, 8>>, Buffer<5>>(const DomainKind::ProxyKindState*,
  BufferParameter, uint64_t, const RawData<64, 8>*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<6>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, Buffer<26>>(
  const DomainKind::ProxyKindState*, BufferParameter, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<6>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint64_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*, int);
template Result DomainKind::Process<false, Buffer<69>, InRaw<uint64_t>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  BufferParameter, uint64_t, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<70>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t*,
  BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<6>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<25>>(const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  BufferParameter, int);
template Result DomainKind::Process<false, Buffer<5>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);
