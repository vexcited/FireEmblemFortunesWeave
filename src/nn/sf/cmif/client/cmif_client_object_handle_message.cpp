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

// Layouts that send handles and return objects. The sent handles are moved
// out of the caller and closed after the request when they were managed.

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>,
  InRaw<uint8_t>, InHandle<false>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t,
  sf::NativeHandle*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InHandle<false>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, sf::NativeHandle*, uint64_t,
  int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<25>,
  InHandle<false>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter,
  sf::NativeHandle*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InHandle<false>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, sf::NativeHandle*, uint64_t,
  int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<16, 4>>, InHandle<false>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 4>*,
  sf::NativeHandle*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, InHandle<false>,
  InRaw<uint32_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, sf::NativeHandle*, uint64_t,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1,
  InRawReference<RawData<16, 8>>, Buffer<9>, InRaw<uint8_t>, InHandle<false>,
  InRaw<uint32_t>, InRaw<uint32_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<16, 8>*,
  BufferParameter, uint64_t, sf::NativeHandle*, uint64_t, uint64_t, uint64_t,
  int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, Buffer<9>,
  InRaw<uint8_t>, InHandle<false>, InRaw<uint32_t>, InRaw<uint32_t>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  sf::NativeHandle*, uint64_t, uint64_t, uint64_t, int, CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, Buffer<5>,
  InRaw<uint64_t>, InHandle<false>, OutRaw<RawData<16, 8>>, Buffer<6>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  sf::NativeHandle*, RawData<16, 8>*, BufferParameter, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, sf::NativeHandle*,
  uint64_t, int, CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InHandle<false>,
  InHandle<false>, InRaw<uint64_t>, InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, sf::NativeHandle*,
  sf::NativeHandle*, uint64_t, sf::NativeHandle*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>,
  InHandle<false>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, sf::NativeHandle*,
  uint64_t, int, CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  InRaw<uint64_t>, InHandle<false>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t,
  sf::NativeHandle*, uint64_t, int, CmifProxyObject**);
