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

template Result DomainKind::Process<false, Buffer<25>, InRaw<uint64_t>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  Buffer<70>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, BufferParameter,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, Buffer<70>, Buffer<69>,
  InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, uint64_t,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, Buffer<70>, Buffer<69>,
  InRaw<uint32_t>, Buffer<25>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, InRaw<uint8_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint16_t>>(
  const DomainKind::ProxyKindState*, uint64_t, int);

template Result DomainKind::Process<false, Buffer<6>, InRaw<uint8_t>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>,
  Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>,
  Buffer<5>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<6>,
  InRaw<uint8_t>, InRawReference<RawData<72, 8>>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t,
  const RawData<72, 8>*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter, uint64_t,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<70>,
  OutRaw<uint64_t>, Buffer<70>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t*,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<70>,
  Buffer<69>, InRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter,
  BufferParameter, uint64_t, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, RawData<16, 8>*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<RawData<16, 8>>,
  OutRaw<uint8_t>, Buffer<25>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, RawData<16, 8>*, uint8_t*, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint8_t>, InRaw<uint64_t>,
  Buffer<6>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint8_t>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<25>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint8_t>, Buffer<25>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint8_t*, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint8_t>, Buffer<5>, InRaw<uint64_t>, Buffer<5>, InRaw<uint64_t>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t,
  BufferParameter, uint64_t, BufferParameter, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<5>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result PlainKind::Process<true, OutRaw<uint32_t>, InRaw<uint64_t>,
  InHandle<false>, InRaw<uint64_t>, InRawReference<RawData<32, 4>>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint64_t, sf::NativeHandle*,
  uint64_t, const RawData<32, 4>*, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<33>, InRaw<uint32_t>, Buffer<33>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, BufferParameter, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<6>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, OutHandle<false>, OutHandle<false>, OutHandle<false>,
  OutHandle<true>, OutHandle<true>, OutHandle<true>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  sf::NativeHandle*, sf::NativeHandle*, sf::NativeHandle*, sf::NativeHandle*,
  sf::NativeHandle*, sf::NativeHandle*, int);

template Result DomainKind::Process<true, OutRaw<uint32_t>, InRaw<uint64_t>,
  InHandle<false>, InRaw<uint64_t>, InRawReference<RawData<32, 4>>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t, sf::NativeHandle*,
  uint64_t, const RawData<32, 4>*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<33>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<33>, Buffer<34>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, BufferParameter,
  BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<33>, Buffer<34>, Buffer<33>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, BufferParameter,
  BufferParameter, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>, InRaw<uint32_t>, Buffer<34>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, BufferParameter, uint32_t*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<33>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<33>, InRaw<uint32_t>, Buffer<33>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint32_t*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<33>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>, Buffer<34>,
  OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, BufferParameter, uint32_t*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>, Buffer<33>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<34>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<6>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  int);

template Result DomainKind::Process<true, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, Buffer<33>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<true, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>, Buffer<34>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, Buffer<33>, Buffer<34>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  BufferParameter, BufferParameter, int);

template Result DomainKind::Process<true, OutRaw<uint32_t>, InRaw<uint64_t>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint16_t>, InRaw<uint16_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, OutHandle<false>, OutHandle<false>, OutHandle<false>,
  OutHandle<true>, OutHandle<true>, OutHandle<true>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint64_t,
  sf::NativeHandle*, sf::NativeHandle*, sf::NativeHandle*, sf::NativeHandle*,
  sf::NativeHandle*, sf::NativeHandle*, int);

template Result PlainKind::Process<true, InRaw<uint32_t>, InRaw<uint64_t>,
  Buffer<5>, InRaw<uint32_t>, InRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>, Buffer<6>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  uint64_t, uint64_t, uint32_t*, uint32_t*, BufferParameter, uint32_t*, int);

template Result PlainKind::Process<true, InRaw<uint32_t>, InRaw<uint64_t>,
  InRaw<uint8_t>, Buffer<5>, Buffer<5>, Buffer<5>, Buffer<6>, OutRaw<uint32_t>,
  OutRaw<uint32_t>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t,
  BufferParameter, BufferParameter, BufferParameter, BufferParameter, uint32_t*,
  uint32_t*, uint32_t*, int);

template Result PlainKind::Process<true, InRaw<uint32_t>, InRaw<uint64_t>,
  Buffer<5>, Buffer<6>, Buffer<6>, InRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  BufferParameter, BufferParameter, uint64_t, uint32_t*, uint32_t*, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<5>, Buffer<6>, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t,
  BufferParameter, BufferParameter, uint32_t*, uint32_t*, uint32_t*, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<26>,
  Buffer<6>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<34>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint8_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, int);

template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  Buffer<5>, Buffer<6>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  OutHandle<false>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, sf::NativeHandle*,
  int);

template Result DomainKind::Process<false, InRaw<uint32_t>, InRaw<uint32_t>,
  Buffer<33>, Buffer<34>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<5>,
  Buffer<5>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, BufferParameter,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<RawData<32, 8>>,
  InRaw<uint64_t>, Buffer<5>, Buffer<5>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<32, 8>*, uint64_t, BufferParameter,
  BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, InRaw<uint8_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint64_t, const RawData<16, 8>*,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint32_t*, uint64_t, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, Buffer<69>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, uint64_t,
  uint64_t, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  Buffer<5>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<RawData<32, 8>>, Buffer<5>,
  Buffer<5>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<32, 8>*, BufferParameter,
  BufferParameter, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutHandle<false>, InRaw<uint64_t>,
  Buffer<5>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, uint64_t,
  BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint8_t>, InRaw<uint8_t>,
  InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, uint64_t,
  uint64_t, uint64_t, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, Buffer<5>, InRaw<uint32_t>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, uint64_t,
  uint64_t, uint64_t, uint64_t, int);

template Result PlainKind::Process<true, Buffer<5>, InRaw<uint32_t>, Buffer<5>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, BufferParameter,
  uint64_t, uint64_t, int);

template Result PlainKind::Process<true, OutRaw<uint64_t>, Buffer<6>,
  InRaw<uint8_t>, InRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t,
  uint64_t, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  OutRaw<uint32_t>, Buffer<70>, Buffer<5>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, uint32_t*,
  BufferParameter, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  OutRaw<uint32_t>, Buffer<70>, Buffer<5>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, uint32_t*,
  BufferParameter, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  OutRaw<uint32_t>, Buffer<70>, Buffer<69>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, uint32_t*,
  BufferParameter, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint8_t>, Buffer<5>, Buffer<5>,
  InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, BufferParameter,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<true, OutRaw<uint32_t>, Buffer<10>,
  InRawReference<RawData<16, 8>>, InRaw<uint32_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, const RawData<16, 8>*, uint64_t, int);

template Result DomainKind::Process<true, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>, InRaw<uint32_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, const RawData<16, 8>*, uint64_t, int);

template Result DomainKind::Process<true, Buffer<6>,
  InRawReference<RawData<16, 8>>, Buffer<9>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<16, 8>*,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>, Buffer<6>>(
  const DomainKind::ProxyKindState*, uint32_t*, const RawData<16, 8>*, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>, Buffer<6>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, const RawData<16, 8>*, uint64_t,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<true, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, Buffer<25>, Buffer<25>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, uint64_t,
  BufferParameter, BufferParameter, uint64_t, int);

template Result DomainKind::Process<true, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<64, 1>>, InRawReference<RawData<33, 1>>, Buffer<5>,
  Buffer<25>, Buffer<25>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  const RawData<64, 1>*, const RawData<33, 1>*, BufferParameter,
  BufferParameter, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<10>,
  InRawReference<RawData<16, 8>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, int);

template Result DomainKind::Process<false, Buffer<26>, InRaw<uint64_t>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<true, InRawReference<RawData<16, 8>>,
  Buffer<25>, Buffer<25>, Buffer<25>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  BufferParameter, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>, InRaw<uint32_t>,
  InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, const RawData<16, 8>*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  InRawReference<RawData<16, 8>>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRawReference<RawData<16, 8>>, Buffer<25>,
  Buffer<25>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, uint64_t, uint64_t,
  const RawData<16, 8>*, BufferParameter, BufferParameter, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<64, 1>>, InRawReference<RawData<33, 1>>, Buffer<5>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  const RawData<64, 1>*, const RawData<33, 1>*, BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<9>,
  Buffer<6>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  BufferParameter, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRawReference<RawData<24, 8>>, Buffer<25>,
  Buffer<25>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, uint64_t, uint64_t,
  const RawData<24, 8>*, BufferParameter, BufferParameter, int);

template Result DomainKind::Process<false, Buffer<26>,
  InRawReference<RawData<16, 8>>, InRawReference<RawData<32, 4>>>(
  const DomainKind::ProxyKindState*, BufferParameter, const RawData<16, 8>*,
  const RawData<32, 4>*, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<25>, InRawReference<RawData<24, 8>>, Buffer<25>, Buffer<25>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  const RawData<24, 8>*, BufferParameter, BufferParameter, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<9>, Buffer<21>, InRawReference<RawData<16, 8>>, Buffer<5>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  BufferParameter, const RawData<16, 8>*, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<9>, Buffer<21>, InRawReference<RawData<24, 8>>, Buffer<5>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  BufferParameter, const RawData<24, 8>*, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, sf::NativeHandle*, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<33>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  OutRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t*,
  uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<97>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<5>, Buffer<5>, Buffer<5>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, BufferParameter, BufferParameter, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<6>, Buffer<6>, Buffer<6>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, uint32_t*, BufferParameter,
  BufferParameter, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  Buffer<6>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, BufferParameter,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  InRaw<uint32_t>, Buffer<5>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, uint64_t,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  Buffer<34>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint64_t>,
  Buffer<33>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint64_t*, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, sf::NativeHandle*, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<33>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  OutRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t*,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint8_t>,
  Buffer<33>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint8_t*, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<97>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutRaw<uint8_t>,
  Buffer<97>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, uint8_t*, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*, uint64_t,
  int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutHandle<false>,
  Buffer<5>, Buffer<5>, Buffer<5>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, sf::NativeHandle*,
  BufferParameter, BufferParameter, BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  Buffer<6>, Buffer<6>, Buffer<6>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, BufferParameter,
  BufferParameter, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint8_t>, InRaw<uint8_t>,
  InRaw<uint8_t>, InRawReference<RawData<22, 2>>,
  InRawReference<RawData<16, 1>>, Buffer<5>, InRawReference<RawData<16, 1>>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t,
  const RawData<22, 2>*, const RawData<16, 1>*, BufferParameter,
  const RawData<16, 1>*, int);

template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>,
  InRaw<uint64_t>, Buffer<5>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*, uint64_t,
  BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  Buffer<5>, InRaw<uint32_t>, InRawReference<RawData<20, 4>>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, BufferParameter,
  uint64_t, const RawData<20, 4>*, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, OutRaw<uint32_t>,
  OutRaw<uint32_t>, Buffer<6>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint32_t*, uint32_t*, uint32_t*,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<RawData<3, 1>>>(
  const DomainKind::ProxyKindState*, RawData<3, 1>*, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<21>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, Buffer<10>, OutRaw<uint32_t>,
  Buffer<10>, OutRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*,
  BufferParameter, uint32_t*, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, Buffer<9>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>,
  Buffer<9>, InRaw<uint8_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, BufferParameter,
  uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<RawData<3, 1>>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, RawData<3, 1>*, uint64_t, int);

template Result DomainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>,
  InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*,
  const RawData<16, 8>*, int);

template Result DomainKind::Process<false, Buffer<9>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>,
  Buffer<9>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*, uint64_t,
  int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>,
  InRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>,
  InRawReference<RawData<16, 8>>, InRawReference<RawData<16, 8>>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*,
  const RawData<16, 8>*, const RawData<16, 8>*, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<16, 4>>, Buffer<9>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  const RawData<16, 4>*, BufferParameter, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<16, 4>>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*,
  const RawData<16, 4>*, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, OutHandle<false>,
  InRawReference<RawData<16, 8>>, InRaw<uint8_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*,
  const RawData<16, 8>*, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<6>,
  Buffer<6>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter,
  BufferParameter, int);

template Result PlainKind::Process<false, OutRaw<uint8_t>, OutRaw<uint32_t>,
  Buffer<6>, Buffer<6>, Buffer<6>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint8_t*, uint32_t*, BufferParameter,
  BufferParameter, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutHandle<false>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, uint32_t*, int);

template Result DomainKind::Process<true, InRawReference<RawData<16, 8>>,
  Buffer<9>, Buffer<5>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<true, Buffer<9>, Buffer<5>, InRaw<uint64_t>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, BufferParameter, uint64_t,
  uint64_t, int);

template Result DomainKind::Process<true, InRawReference<RawData<16, 8>>,
  Buffer<9>, Buffer<5>, InRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  BufferParameter, uint64_t, uint64_t, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<9>, InRaw<uint64_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  uint64_t, BufferParameter, int);

template Result DomainKind::Process<false, Buffer<9>, InRaw<uint64_t>,
  Buffer<5>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, BufferParameter,
  uint64_t, int);

template Result DomainKind::Process<false, InRawReference<RawData<16, 8>>,
  Buffer<9>, InRaw<uint64_t>, Buffer<5>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, const RawData<16, 8>*, BufferParameter,
  uint64_t, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, Buffer<25>, Buffer<25>>(
  const PlainKind::ProxyKindState*, BufferParameter, BufferParameter, int);

template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<25>,
  Buffer<25>>(
  const PlainKind::ProxyKindState*, uint64_t*, BufferParameter, BufferParameter,
  int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<5>,
  Buffer<5>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<5>,
  Buffer<5>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter,
  BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, Buffer<6>, OutRaw<uint32_t>,
  Buffer<5>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>,
  OutRaw<RawData<24, 8>>, InRaw<uint64_t>, Buffer<21>>(
  const DomainKind::ProxyKindState*, uint64_t*, RawData<24, 8>*, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, OutRaw<uint32_t>, Buffer<10>,
  InRaw<uint64_t>, Buffer<21>>(
  const DomainKind::ProxyKindState*, uint32_t*, BufferParameter, uint64_t,
  BufferParameter, int);

template Result DomainKind::Process<false, Buffer<26>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint64_t, int);

template Result DomainKind::Process<false, OutRaw<uint64_t>, Buffer<25>,
  Buffer<25>>(
  const DomainKind::ProxyKindState*, uint64_t*, BufferParameter,
  BufferParameter, int);

template Result PlainKind::Process<false, InRaw<uint32_t>, OutHandle<false>,
  InRaw<uint32_t>, OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint32_t*, int);

template Result PlainKind::Process<false, InHandle<false>, InRaw<uint32_t>,
  OutRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, uint64_t, uint32_t*,
  int);

template Result PlainKind::Process<true, InRaw<uint64_t>, Buffer<9>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, int);

template Result PlainKind::Process<false, InRaw<uint64_t>, Buffer<9>,
  Buffer<9>>(
  const PlainKind::ProxyKindState*, uint64_t, BufferParameter, BufferParameter,
  int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t, int);

template Result PlainKind::Process<true, OutRaw<uint32_t>, Buffer<9>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint32_t*, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, Buffer<25>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t,
  BufferParameter, int);

template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InHandle<false>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, uint64_t,
  sf::NativeHandle*, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, Buffer<25>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint8_t>,
  InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>, InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t, uint64_t,
  sf::NativeHandle*, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint64_t>, InRaw<uint64_t>,
  InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, uint64_t, sf::NativeHandle*,
  uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint32_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint32_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint64_t>, InRaw<uint8_t>,
  InRawReference<RawData<12, 2>>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, const RawData<12, 2>*,
  int);

template Result PlainKind::Process<false, OutRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, sf::NativeHandle*, uint64_t,
  int);

template Result PlainKind::Process<false, InRawReference<RawData<48, 8>>,
  InRawReference<RawData<16, 4>>>(
  const PlainKind::ProxyKindState*, const RawData<48, 8>*,
  const RawData<16, 4>*, int);

template Result PlainKind::Process<true, OutHandle<false>, OutRaw<uint64_t>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, uint64_t*, uint64_t,
  uint64_t, int);

template Result PlainKind::Process<true, InHandle<false>, InRaw<uint64_t>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, Buffer<21>, Buffer<25>,
  InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, BufferParameter, uint64_t,
  int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  uint64_t, uint64_t, uint64_t, int);

template Result PlainKind::Process<true, Buffer<9>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, BufferParameter, uint64_t, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRawReference<RawData<24, 8>>, InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, const RawData<24, 8>*,
  sf::NativeHandle*, uint64_t, int);

template Result PlainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>,
  InRawReference<RawData<32, 8>>, InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, uint64_t, const RawData<32, 8>*,
  sf::NativeHandle*, uint64_t, int);

template Result DomainKind::Process<false, InRawReference<RawData<32, 8>>,
  InRawReference<RawData<68, 4>>, InRawReference<RawData<48, 4>>>(
  const DomainKind::ProxyKindState*, const RawData<32, 8>*,
  const RawData<68, 4>*, const RawData<48, 4>*, int);

template Result DomainKind::Process<false, InRawReference<RawData<32, 8>>,
  InRawReference<RawData<68, 4>>, InRawReference<RawData<32, 4>>,
  InRawReference<RawData<48, 4>>, Buffer<9>>(
  const DomainKind::ProxyKindState*, const RawData<32, 8>*,
  const RawData<68, 4>*, const RawData<32, 4>*, const RawData<48, 4>*,
  BufferParameter, int);

template Result DomainKind::Process<false, Buffer<34>, OutRaw<uint32_t>,
  OutRaw<RawData<6, 1>>, OutRaw<RawData<6, 1>>, OutRaw<uint16_t>,
  OutRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, BufferParameter, uint32_t*, RawData<6, 1>*,
  RawData<6, 1>*, uint16_t*, uint32_t*, uint64_t, int);

template Result DomainKind::Process<true, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint64_t, uint64_t, int);

template Result PlainKind::Process<false, OutRaw<uint64_t>, Buffer<34>,
  InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint64_t*, BufferParameter, uint64_t, int);

template Result PlainKind::Process<false, OutHandle<false>,
  OutRaw<RawData<16, 8>>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, RawData<16, 8>*, int);

template Result PlainKind::Process<false, InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*, uint64_t, int);

template Result PlainKind::Process<false, InRaw<uint32_t>, InHandle<false>,
  InRaw<uint64_t>, InHandle<false>, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t, sf::NativeHandle*, uint64_t,
  sf::NativeHandle*, uint64_t, sf::NativeHandle*, uint64_t, int);
