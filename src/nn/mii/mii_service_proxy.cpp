#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<mii::detail::IDatabaseService, DomainKind>;
template class CmifProxyMethods<mii::detail::IImageDatabaseService, PlainKind>;

}
