#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<ssl::sf::ISslServiceForSystem, DomainKind>;
template class CmifProxyMethods<ssl::sf::ISslContextForSystem, DomainKind>;
template class CmifProxyMethods<ssl::sf::ISslContext, DomainKind>;
template class CmifProxyMethods<ssl::sf::ISslService, DomainKind>;
template class CmifProxyMethods<ssl::sf::ISslConnection, DomainKind>;

}
