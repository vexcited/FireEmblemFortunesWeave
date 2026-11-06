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

// Domain layouts that return objects, with buffers or out raw data.

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<25>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>,
  InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<25>,
  InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<25>,
  InRaw<uint8_t>, InRaw<uint64_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  uint64_t, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<25>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint8_t>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, OutRaw<uint64_t>,
  Buffer<5>, InRawReference<RawData<16, 8>>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t*, BufferParameter,
  const RawData<16, 8>*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>,
  InRaw<uint8_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>, Buffer<25>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter,
  BufferParameter, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<6>,
  InRaw<uint8_t>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>, Buffer<5>,
  InRawReference<RawData<16, 8>>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter,
  BufferParameter, const RawData<16, 8>*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>,
  InRawReference<RawData<16, 8>>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter,
  const RawData<16, 8>*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>, Buffer<5>,
  InRawReference<RawData<16, 8>>, InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter,
  BufferParameter, const RawData<16, 8>*, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<5>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>,
  InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<25>,
  InRaw<uint8_t>, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<6>,
  InRaw<uint8_t>, InRaw<uint64_t>, InRaw<uint8_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  uint64_t, uint64_t, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<9>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, Buffer<25>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1,
  InRawReference<RawData<33, 1>>, Buffer<5>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<33, 1>*,
  BufferParameter, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, Buffer<9>, Buffer<9>,
  Buffer<9>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter,
  BufferParameter, BufferParameter, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>,
  InRaw<uint64_t>, Buffer<5>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t,
  BufferParameter, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, InRaw<uint64_t>,
  Buffer<5>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, BufferParameter, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, OutRaw<uint32_t>,
  InRaw<uint32_t>, Buffer<5>, InRaw<uint32_t>, InRaw<uint64_t>, InRaw<uint64_t>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint32_t*, uint64_t,
  BufferParameter, uint64_t, uint64_t, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, InRaw<uint64_t>,
  InRaw<uint32_t>, InRawReference<RawData<32, 2>>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t,
  const RawData<32, 2>*, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<false, 1, OutRaw<RawData<16, 8>>,
  Buffer<25>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, RawData<16, 8>*,
  BufferParameter, int, CmifProxyObject**);

template Result DomainKind::ProcessWithObjects<true, 1, InRaw<uint32_t>,
  InRaw<uint64_t>>(
  const DomainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, uint64_t, int,
  CmifProxyObject**);
