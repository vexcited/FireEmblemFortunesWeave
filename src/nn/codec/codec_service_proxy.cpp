#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<codec::detail::IHardwareOpusDecoderManager,
  DomainKind>;
template class CmifProxyMethods<codec::hwacod::IClientSession, DomainKind>;
template class CmifProxyMethods<codec::detail::IHardwareOpusDecoder,
  DomainKind>;
template class CmifProxyMethods<codec::hwacod::IHardwareAudioCodecManagerSession,
  DomainKind>;

}
