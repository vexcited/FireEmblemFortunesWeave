#include "nn/sf/cmif/client/cmif_proxy_interfaces.hpp"

namespace nn::sf::cmif::client::detail {

template class CmifProxyMethods<nim::detail::IShopServiceAccessServerInterface,
  PlainKind>;
template class CmifProxyMethods<nim::detail::IShopServiceAsync, PlainKind>;
template class CmifProxyMethods<ec::IPurchaseEventManager, PlainKind>;
template class CmifProxyMethods<ec::detail::IAsyncData, PlainKind>;

}
