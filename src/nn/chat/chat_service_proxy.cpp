#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<chat::IUserSelectiveTalkShimScopedObject,
  DomainKind>;
template class CmifProxyMethods<chat::IUserShimScopedObject, DomainKind>;
template class CmifProxyMethods<chat::IUserLayoutCustomizationShimScopedObject,
  DomainKind>;

}
