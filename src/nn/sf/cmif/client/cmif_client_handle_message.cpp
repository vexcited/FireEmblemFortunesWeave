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

// Layouts that return copy or move handles, which the proxy swaps into the
// caller handle so the previous one gets closed.

template Result PlainKind::Process<false, OutHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, nn::sf::NativeHandle*, uint64_t, int);
template Result PlainKind::Process<false, OutHandle<false>, InRaw<uint8_t>,
  InRaw<uint32_t>>(const PlainKind::ProxyKindState*, nn::sf::NativeHandle*,
  uint64_t, uint64_t, int);
template Result PlainKind::Process<false, OutHandle<false>, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, nn::sf::NativeHandle*, uint64_t, int);
template Result PlainKind::Process<false, OutHandle<false>>(
  const PlainKind::ProxyKindState*, nn::sf::NativeHandle*, int);
template Result PlainKind::Process<true, InRaw<uint64_t>, OutHandle<false>,
  InRaw<uint32_t>, InRaw<uint64_t>>(const PlainKind::ProxyKindState*, uint64_t,
  nn::sf::NativeHandle*, uint64_t, uint64_t, int);
template Result PlainKind::Process<true, OutHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, nn::sf::NativeHandle*, uint64_t, int);

template Result DomainKind::Process<false, OutHandle<false>, InRaw<uint32_t>,
  InRaw<uint32_t>>(const DomainKind::ProxyKindState*, nn::sf::NativeHandle*,
  uint64_t, uint64_t, int);
template Result DomainKind::Process<false, OutHandle<false>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*, nn::sf::NativeHandle*, uint64_t, int);
