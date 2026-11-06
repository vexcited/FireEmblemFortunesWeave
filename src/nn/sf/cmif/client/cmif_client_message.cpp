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

// The proxies share one message function per raw argument layout, the
// linker folded the copies that every service interface instantiated.

template Result PlainKind::Process<false, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*, uint32_t*,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, InRaw<uint64_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint32_t*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint32_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<128, 8>>>(
  const PlainKind::ProxyKindState*, RawData<128, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<128, 8>>,
  InRawReference<RawData<16, 8>>>(const PlainKind::ProxyKindState*,
  RawData<128, 8>*, const RawData<16, 8>*, int);
template Result PlainKind::Process<false>(const PlainKind::ProxyKindState*,
  int);
template Result PlainKind::Process<false, InRaw<uint64_t>, OutRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint8_t*, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>,
  InRawReference<RawData<52, 4>>>(const PlainKind::ProxyKindState*, uint64_t*,
  const RawData<52, 4>*, int);
template Result PlainKind::Process<false, InRaw<uint16_t>>(
  const PlainKind::ProxyKindState*, uint64_t, int);
template Result PlainKind::Process<false, InRawReference<RawData<24, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<24, 8>*, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint8_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<32, 8>>>(
  const PlainKind::ProxyKindState*, RawData<32, 8>*, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t*, int);
template Result PlainKind::Process<false, OutRaw<RawData<6, 2>>>(
  const PlainKind::ProxyKindState*, RawData<6, 2>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<24, 8>>>(
  const PlainKind::ProxyKindState*, RawData<24, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<26, 2>>>(
  const PlainKind::ProxyKindState*, RawData<26, 2>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<12, 4>>>(
  const PlainKind::ProxyKindState*, RawData<12, 4>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<3, 1>>>(
  const PlainKind::ProxyKindState*, RawData<3, 1>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<18, 2>>>(
  const PlainKind::ProxyKindState*, RawData<18, 2>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<9, 1>>>(
  const PlainKind::ProxyKindState*, RawData<9, 1>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<40, 8>>>(
  const PlainKind::ProxyKindState*, RawData<40, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<40, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<40, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<32, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<32, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<36, 4>>>(
  const PlainKind::ProxyKindState*, RawData<36, 4>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<36, 4>>>(
  const PlainKind::ProxyKindState*, const RawData<36, 4>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<12, 4>>>(
  const PlainKind::ProxyKindState*, const RawData<12, 4>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<26, 2>>>(
  const PlainKind::ProxyKindState*, const RawData<26, 2>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<44, 4>>>(
  const PlainKind::ProxyKindState*, RawData<44, 4>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<44, 4>>>(
  const PlainKind::ProxyKindState*, const RawData<44, 4>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<64, 8>>>(
  const PlainKind::ProxyKindState*, RawData<64, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<20, 4>>>(
  const PlainKind::ProxyKindState*, RawData<20, 4>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<48, 8>>>(
  const PlainKind::ProxyKindState*, RawData<48, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<48, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<48, 8>*, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint8_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  uint32_t*, uint32_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, OutRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  RawData<16, 8>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint8_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint8_t*,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint16_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<6, 2>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<6, 2>*, uint64_t,
  int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, OutRaw<uint8_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*,
  uint8_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<56, 8>>>(
  const PlainKind::ProxyKindState*, RawData<56, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<56, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<56, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<104, 8>>>(
  const PlainKind::ProxyKindState*, RawData<104, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<104, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<104, 8>*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, uint32_t*,
  uint32_t*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint8_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<true, OutRaw<RawData<16, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<16, 8>*, uint64_t,
  int);
template Result PlainKind::Process<false, InRawReference<RawData<28, 4>>>(
  const PlainKind::ProxyKindState*, const RawData<28, 4>*, int);
template Result PlainKind::Process<true, InRaw<uint32_t>, InRaw<uint64_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  uint32_t*, uint32_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint8_t>, InRaw<uint8_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  RawData<16, 8>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<16, 8>*, uint64_t,
  int);
template Result PlainKind::Process<false, OutRaw<RawData<32, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<32, 8>*, uint64_t,
  int);
template Result PlainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t, uint64_t,
  uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<24, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<24, 8>*, uint64_t,
  int);
template Result PlainKind::Process<false, InRaw<uint8_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint16_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint16_t*, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<12, 4>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<12, 4>*, uint64_t,
  int);
template Result PlainKind::Process<false, OutRaw<uint16_t>, OutRaw<uint16_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint16_t*, uint16_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<12, 4>>,
  InRaw<uint64_t>, InRaw<uint8_t>>(const PlainKind::ProxyKindState*,
  RawData<12, 4>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint8_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint8_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<36, 4>>,
  InRaw<uint64_t>, InRaw<uint8_t>>(const PlainKind::ProxyKindState*,
  RawData<36, 4>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRawReference<RawData<52, 4>>,
  InRaw<uint8_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  const RawData<52, 4>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>,
  InRawReference<RawData<20, 4>>>(const PlainKind::ProxyKindState*, uint64_t*,
  const RawData<20, 4>*, int);
template Result PlainKind::Process<false, InRaw<uint64_t>,
  InRawReference<RawData<64, 8>>>(const PlainKind::ProxyKindState*, uint64_t,
  const RawData<64, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<88, 8>>>(
  const PlainKind::ProxyKindState*, const RawData<88, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<40, 8>>,
  OutRaw<uint8_t>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, RawData<40, 8>*, uint8_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<RawData<32, 8>>,
  InRawReference<RawData<32, 8>>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, RawData<32, 8>*, const RawData<32, 8>*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>,
  InRawReference<RawData<16, 8>>>(const PlainKind::ProxyKindState*, uint8_t*,
  const RawData<16, 8>*, int);
template Result PlainKind::Process<false, OutRaw<RawData<48, 8>>,
  InRawReference<RawData<16, 8>>>(const PlainKind::ProxyKindState*, RawData<48,
  8>*, const RawData<16, 8>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<104, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, const RawData<104, 8>*,
  uint64_t, int);
template Result PlainKind::Process<false, InRawReference<RawData<68, 4>>>(
  const PlainKind::ProxyKindState*, const RawData<68, 4>*, int);
template Result PlainKind::Process<false, InRawReference<RawData<40, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, const RawData<40, 8>*,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint32_t>, InRaw<uint8_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint32_t*, uint32_t*,
  uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint32_t>, OutRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t*,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, OutRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t*, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t*, uint64_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>,
  InRaw<uint8_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>>(const PlainKind::ProxyKindState*, uint32_t*, uint32_t*,
  uint32_t*, int);
template Result PlainKind::Process<false, OutRaw<RawData<52, 4>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, RawData<52, 4>*, uint64_t,
  int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t, uint64_t, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, uint64_t*,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  uint64_t*, uint32_t*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, InRaw<uint16_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, OutRaw<uint8_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*, uint64_t,
  uint64_t, int);
template Result PlainKind::Process<false, InRawReference<RawData<72, 8>>,
  InRaw<uint64_t>>(const PlainKind::ProxyKindState*, const RawData<72, 8>*,
  uint64_t, int);
template Result PlainKind::Process<false, InRawReference<RawData<72, 8>>,
  InRaw<uint64_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*,
  const RawData<72, 8>*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>, OutRaw<uint32_t>>(const PlainKind::ProxyKindState*,
  uint64_t, uint32_t*, uint32_t*, uint32_t*, int);
template Result PlainKind::Process<true, OutRaw<uint8_t>, InRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint8_t*,
  uint64_t, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint8_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRawReference<RawData<40, 8>>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, const RawData<40, 8>*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRawReference<RawData<12, 4>>>(const PlainKind::ProxyKindState*, uint64_t,
  uint64_t, const RawData<12, 4>*, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint64_t*,
  const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint8_t*,
  const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*,
  RawData<16, 8>*, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint32_t*,
  const RawData<16, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>, OutRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  uint32_t*, uint32_t*, uint32_t*, uint32_t*, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  uint64_t, uint64_t, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<12, 4>>>(
  const DomainKind::ProxyKindState*, const RawData<12, 4>*, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint8_t*, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint8_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint8_t*, uint8_t*,
  uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint8_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint32_t*, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint8_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint8_t>,
  InRaw<uint8_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t*, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<true, OutRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<12, 4>>>(
  const DomainKind::ProxyKindState*, RawData<12, 4>*, int);
template Result DomainKind::Process<false, InRaw<uint16_t>, InRaw<uint16_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint8_t*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, InRaw<uint8_t>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  uint32_t*, uint64_t, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint64_t>,
  InRaw<uint8_t>, InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t*, uint64_t,
  const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<48, 8>>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, RawData<48, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, uint32_t*, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<true, OutRaw<uint32_t>,
  InRawReference<RawData<16, 8>>, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, uint32_t*,
  const RawData<16, 8>*, const RawData<16, 8>*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*, uint32_t*,
  uint32_t*, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint8_t>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRawReference<RawData<81, 1>>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, uint64_t,
  const RawData<81, 1>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<64, 8>>,
  InRawReference<RawData<16, 8>>>(const DomainKind::ProxyKindState*,
  RawData<64, 8>*, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint8_t>>(const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint8_t>, InRaw<uint8_t>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint32_t>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  const RawData<16, 8>*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<88, 8>>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<88, 8>*, uint64_t, uint64_t,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<88, 8>>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, RawData<88, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<68, 4>>,
  InRawReference<RawData<68, 4>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<68, 4>*, const RawData<68, 4>*,
  uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<68, 4>>>(
  const DomainKind::ProxyKindState*, const RawData<68, 4>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>,
  InRawReference<RawData<88, 8>>>(const DomainKind::ProxyKindState*, uint32_t*,
  const RawData<88, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<88, 8>>,
  InRawReference<RawData<96, 8>>>(const DomainKind::ProxyKindState*,
  RawData<88, 8>*, const RawData<96, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<88, 8>>,
  InRawReference<RawData<48, 8>>>(const DomainKind::ProxyKindState*,
  RawData<88, 8>*, const RawData<48, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<48, 8>>,
  InRawReference<RawData<88, 8>>>(const DomainKind::ProxyKindState*,
  RawData<48, 8>*, const RawData<88, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<88, 8>>>(
  const DomainKind::ProxyKindState*, const RawData<88, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<36, 4>>>(
  const DomainKind::ProxyKindState*, const RawData<36, 4>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<36, 4>>>(
  const DomainKind::ProxyKindState*, RawData<36, 4>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  OutRaw<uint64_t>>(const DomainKind::ProxyKindState*, RawData<16, 8>*,
  uint64_t*, int);
template Result DomainKind::Process<false, OutRaw<RawData<24, 8>>>(
  const DomainKind::ProxyKindState*, RawData<24, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, RawData<16, 8>*,
  uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<68, 4>>>(
  const DomainKind::ProxyKindState*, RawData<68, 4>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<36, 4>>,
  OutRaw<RawData<24, 8>>>(const DomainKind::ProxyKindState*, RawData<36, 4>*,
  RawData<24, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>,
  OutRaw<RawData<24, 8>>, InRaw<uint64_t>>(const DomainKind::ProxyKindState*,
  uint64_t*, RawData<24, 8>*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>,
  InRawReference<RawData<32, 8>>>(const DomainKind::ProxyKindState*, uint64_t*,
  const RawData<32, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<40, 8>>>(
  const DomainKind::ProxyKindState*, const RawData<40, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result DomainKind::Process<true, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t, int);
template Result DomainKind::Process<false>(const DomainKind::ProxyKindState*,
  int);
template Result DomainKind::Process<false, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, int);
template Result DomainKind::Process<false, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, RawData<16, 8>*, int);
template Result DomainKind::Process<false, OutRaw<RawData<32, 8>>>(
  const DomainKind::ProxyKindState*, RawData<32, 8>*, int);
template Result DomainKind::Process<false, InRawReference<RawData<32, 8>>>(
  const DomainKind::ProxyKindState*, const RawData<32, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, int);
template Result DomainKind::Process<false, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<uint8_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, uint64_t, int);
template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutRaw<RawData<128, 8>>>(
  const DomainKind::ProxyKindState*, RawData<128, 8>*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, int);
template Result DomainKind::Process<false, OutRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t, int);
