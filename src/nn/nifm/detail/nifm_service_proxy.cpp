#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<nifm::detail::INetworkProfile, DomainKind>;
template class CmifProxyMethods<nifm::detail::IScanRequest, DomainKind>;
template class CmifProxyMethods<nifm::detail::IRequest, DomainKind>;

}
