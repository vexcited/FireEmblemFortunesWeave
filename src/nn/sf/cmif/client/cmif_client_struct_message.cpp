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

// Layouts whose structures the proxies pass by reference or by value with
// their own size and alignment.

template Result PlainKind::Process<false, InRaw<uint32_t>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint32_t*, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint32_t>, InRaw<uint8_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>,
  InRawReference<RawData<16, 4>>>(const PlainKind::ProxyKindState*, uint64_t,
  const RawData<16, 4>*, int);
template Result PlainKind::Process<false, InRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint8_t>,
  InRawReference<RawData<16, 1>>>(const PlainKind::ProxyKindState*, uint64_t,
  const RawData<16, 1>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<40, 4>>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  const RawData<40, 4>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRawReference<RawData<64, 4>>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, const RawData<64, 4>*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<128, 8>>,
  InRawReference<RawData<32, 8>>, InRawReference<RawData<32, 8>>>(
  const PlainKind::ProxyKindState*, RawData<128, 8>*, const RawData<32, 8>*,
  const RawData<32, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<128, 8>>,
  InRawReference<RawData<32, 8>>>(const PlainKind::ProxyKindState*, RawData<128,
  8>*, const RawData<32, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<32, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<32, 8>*, uint64_t,
  int);
template Result PlainKind::Process<false, OutRaw<RawData<32, 8>>>(
  const PlainKind::ProxyKindState*, RawData<32, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<33, 1>>,
  InRaw<uint8_t>>(const PlainKind::ProxyKindState*, RawData<33, 1>*, uint64_t,
  int);
template Result PlainKind::Process<false, OutRaw<uint16_t>>(
  const PlainKind::ProxyKindState*, uint16_t*, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint8_t>,
  InRaw<uint8_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint16_t>, InRaw<uint16_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRawReference<RawData<66, 2>>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  const RawData<66, 2>*, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*, uint32_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRawReference<RawData<66, 2>>>(const PlainKind::ProxyKindState*, uint32_t*,
  uint32_t*, const RawData<66, 2>*, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<RawData<66, 2>>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  uint32_t*, uint32_t*, RawData<66, 2>*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*, uint64_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint8_t*, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  OutRaw<uint64_t>, OutRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t*, uint64_t*, uint64_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>,
  OutRaw<RawData<12, 4>>, InRaw<uint8_t>, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, RawData<12, 4>*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRawReference<RawData<16, 4>>, InRaw<uint16_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, const RawData<16, 4>*,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRawReference<RawData<16, 4>>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, const RawData<16, 4>*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint8_t>,
  InRaw<uint8_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>,
  InRawReference<RawData<16, 4>>>(const PlainKind::ProxyKindState*, uint64_t,
  const RawData<16, 4>*, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InRawReference<RawData<32, 4>>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint64_t, uint64_t,
  const RawData<32, 4>*, int);
template Result PlainKind::Process<true, OutRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t, uint64_t, uint64_t,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint8_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>,
  InRawReference<RawData<16, 1>>>(const DomainKind::ProxyKindState*, uint64_t,
  const RawData<16, 1>*, int);
template Result DomainKind::Process<false, InRaw<uint64_t>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint64_t,
  const RawData<16, 8>*, int);
template Result DomainKind::Process<false, InRaw<uint8_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint8_t>,
  InRawReference<RawData<64, 8>>, InRawReference<RawData<128, 8>>>(
  const DomainKind::ProxyKindState*, uint64_t, const RawData<64, 8>*,
  const RawData<128, 8>*, int);
template Result DomainKind::Process<false, InRaw<uint8_t>,
  InRawReference<RawData<64, 8>>>(const DomainKind::ProxyKindState*, uint64_t,
  const RawData<64, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<24, 8>>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, const RawData<24, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<64, 8>>,
  InRaw<uint8_t>, InRaw<uint64_t>>(const DomainKind::ProxyKindState*,
  const RawData<64, 8>*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<64, 8>>,
  InRawReference<RawData<64, 8>>, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<32, 8>>>(const DomainKind::ProxyKindState*,
  const RawData<64, 8>*, const RawData<64, 8>*, const RawData<16, 8>*,
  const RawData<32, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<64, 8>>,
  InRawReference<RawData<64, 8>>, InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, const RawData<64, 8>*, const RawData<64,
  8>*, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<64, 8>>,
  InRawReference<RawData<64, 8>>>(const DomainKind::ProxyKindState*,
  const RawData<64, 8>*, const RawData<64, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<64, 8>>>(
  const DomainKind::ProxyKindState*, const RawData<64, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRaw<uint8_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  RawData<16, 8>*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRaw<uint8_t>>(const DomainKind::ProxyKindState*, RawData<16, 8>*, uint64_t,
  int);
template Result DomainKind::Process<false, OutRaw<RawData<4, 1>>,
  InRawReference<RawData<16, 1>>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, RawData<4, 1>*, const RawData<16, 1>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<56, 8>>>(
  const DomainKind::ProxyKindState*, RawData<56, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<64, 8>>,
  InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, RawData<64, 8>*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<88, 4>>,
  InRawReference<RawData<88, 4>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<88, 4>*, const RawData<88, 4>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  uint32_t*, uint32_t*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRawReference<RawData<66, 2>>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  const RawData<66, 2>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint32_t*, uint32_t*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRawReference<RawData<66, 2>>>(const DomainKind::ProxyKindState*, uint32_t*,
  uint32_t*, const RawData<66, 2>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<RawData<64, 8>>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  uint32_t*, uint32_t*, RawData<64, 8>*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint32_t*, uint32_t*,
  uint64_t*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint32_t*, uint64_t*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>,
  InRawReference<RawData<64, 8>>>(const DomainKind::ProxyKindState*, uint64_t*,
  const RawData<64, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  InRaw<uint16_t>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, const RawData<16, 8>*, uint64_t,
  int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint32_t*, int);
template Result DomainKind::Process<true, OutRaw<uint32_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InRawReference<RawData<32, 4>>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t, uint64_t,
  const RawData<32, 4>*, int);
template Result DomainKind::Process<true, OutRaw<uint8_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint64_t, int);
