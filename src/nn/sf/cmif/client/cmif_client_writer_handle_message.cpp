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

// Layouts whose handles go through SetHandles.

template Result DomainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  InWriterHandle<false>, Buffer<21>>(const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, sf::NativeHandle*,
  BufferParameter, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InWriterHandle<false>, InRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, sf::NativeHandle*, uint64_t,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  InWriterHandle<false>>(const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, sf::NativeHandle*,
  int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  InWriterHandle<false>, InRaw<uint32_t>>(const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, sf::NativeHandle*,
  uint64_t, int, CmifProxyObject**);

// Domain layouts that close the sent handle before the session goes back,
// also when SetHandles fails.

template Result DomainKind::Process<false, InWriterHandle<false>,
  InRaw<uint64_t>>(const DomainKind::ProxyKindState*, sf::NativeHandle*,
  uint64_t, int);

template Result DomainKind::Process<false, InWriterHandle<false>,
  InRaw<uint64_t>, InRaw<uint32_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, sf::NativeHandle*, uint64_t, uint64_t,
  uint64_t, int);
