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

// More layouts that return objects, after raw data or with sent handles.

template Result DomainKind::ProcessWithOutObjects<false, 1, OutRaw<uint8_t>,
  OutObjects, InRaw<uint32_t>>(
  const DomainKind::ProxyKindState*, uint8_t*,
  sf::SharedPointer<sf::IServiceObject>* const*, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithOutObjects<true, 1, InRaw<uint64_t>,
  OutObjects, Buffer<5>, InRaw<uint64_t>, InHandle<false>, Buffer<6>,
  InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*, uint64_t,
  sf::SharedPointer<sf::IServiceObject>* const*, BufferParameter, uint64_t,
  sf::NativeHandle*, BufferParameter, uint64_t, int, CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1,
  InRawReference<RawData<52, 4>>, InHandle<false>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<52, 4>*,
  sf::NativeHandle*, sf::NativeHandle*, uint64_t, uint64_t, int,
  CmifProxyObject**);

template Result PlainKind::ProcessWithObjects<true, 1,
  InRawReference<RawData<52, 4>>, InRaw<uint64_t>, InHandle<false>,
  InRaw<uint64_t>, InRaw<uint64_t>>(
  const PlainKind::ProxyKindState*,
  sf::SharedPointer<sf::IServiceObject>* const*, const RawData<52, 4>*,
  uint64_t, sf::NativeHandle*, uint64_t, uint64_t, int, CmifProxyObject**);
