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

// Plain session layouts that return objects as move handles.

template Result PlainKind::ProcessWithObjects<false, 1>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, int, CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<true, 1, OutHandle<false>,
  OutObjects, InRaw<uint64_t>, InRawReference<RawData<65, 1>>, Buffer<5>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t,
  const RawData<65, 1>*, BufferParameter, int, CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<true, 1, OutHandle<false>,
  OutObjects, InRaw<uint64_t>, InRawReference<RawData<16, 8>>,
  InRawReference<RawData<65, 1>>, Buffer<5>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t,
  const RawData<16, 8>*, const RawData<65, 1>*, BufferParameter, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>,
  InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, InRaw<uint32_t>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, uint64_t,
  int, CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1, InRaw<uint32_t>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<false, 1, OutHandle<false>,
  OutObjects, InRawReference<RawData<32, 8>>>(
  const PlainKind::ProxyKindState*, sf::NativeHandle*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<32, 8>*, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects>(
  const PlainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, int, CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, OutRaw<RawData<66, 1>>>(
  const PlainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, RawData<66, 1>*, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, OutRaw<RawData<66, 1>>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, RawData<66, 1>*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, InRaw<uint8_t>>(
  const PlainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<false, 1, OutRaw<uint32_t>,
  OutObjects, InRaw<uint64_t>, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*, uint32_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, Buffer<25>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InRaw<uint32_t>,
  InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<false, 1, InRaw<uint32_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);
